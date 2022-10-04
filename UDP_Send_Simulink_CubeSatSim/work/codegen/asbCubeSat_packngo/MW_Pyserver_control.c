/* Copyright 2019-2021 The MathWorks, Inc. */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <error.h>
#include <signal.h>
#include <unistd.h>
#include <syslog.h>
#include <string.h>
#include <stdint.h>
#include "MW_Pyserver_control.h"
#if !defined(_MATLABIO_) && defined(MW_DASHBLOCK_INUSE)
    #include "MW_target_hardware_resources.h"
#endif

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define AT __FILE__ ":" TOSTRING(__LINE__)

static char exePath[65534 + 1];

#if defined(MW_WEBSOC_INUSE) 
    static char pyserverLoc[65534 + 1];
#elif defined(MW_DASHBLOCK_INUSE)
    static char dashboardpyserverLoc[4095 + 1];
    static char dashboardhttpserverLoc[4095 + 1];
    static char dashboardlaunchscriptLoc[4095 + 1];
#endif

void MW_getDefines() {
    char pwd[65535];
    char* p;

    readlink("/proc/self/exe", pwd, 65535);

    strcpy(exePath, pwd);
    if ((p = strrchr(exePath, '/')))
        *(p + 1) = '\0';
    printf("Path = %s\n", exePath);
#ifdef _MATLABIO_
    sprintf(pyserverLoc, "%sMW_pyserver.py", exePath);
#else
    #if defined(MW_WEBSOC_INUSE) 
        sprintf(pyserverLoc, "%s%s_ert_rtw/MW_pyserver.py", exePath, TOSTRING(MODEL));
    #elif defined(MW_DASHBLOCK_INUSE)
        sprintf(dashboardpyserverLoc, "%s%s_ert_rtw/MW_dashboard_pyserver.py", exePath, TOSTRING(MODEL));
        sprintf(dashboardhttpserverLoc, "%s%s_ert_rtw/MW_dashboard_httpserver.py", exePath, TOSTRING(MODEL));
        sprintf(dashboardlaunchscriptLoc, "%s%s_ert_rtw/launchdashboardwebpage.sh", exePath, TOSTRING(MODEL));
    #endif
#endif
    #if defined(MW_WEBSOC_INUSE) 
        printf("PyserverLocation = %s\n", pyserverLoc);
    #elif defined(MW_DASHBLOCK_INUSE)
        printf("DashboardPyserverLocation = %s\n", dashboardpyserverLoc);
        printf("DashboardhttpserverLocation = %s\n", dashboardhttpserverLoc);
        printf("dashboardlaunchscriptLocation = %s\n", dashboardlaunchscriptLoc);
    #endif
}


void MW_killPyserver() {
#if defined(MW_WEBSOC_INUSE)
    printf(" Attempt to kill web socket processes\n ");
    fflush(stdout);
    char buff[200];
    sprintf(buff, "sudo pkill -f %s", pyserverLoc);
    system(buff);
    printf("Killed web socket server \n");
#elif defined(MW_DASHBLOCK_INUSE)
    printf(" Attempt to kill dashboard processes\n ");
    fflush(stdout);
    char buff[500];
    sprintf(buff, "sudo kill -15 $(ps aux | grep  '.*/usr/lib/chromium-browser/chromium-browser.*--incognito --app=.*http://%s:%d.*/toolbox/simulink/webblocks/webmanager-js/index.html.*%s.*%d' | grep -v grep | awk '{ print $2 }')",TOSTRING(MW_DASHBOARDPARAMETERS_IPADDRESS), MW_DASHBOARDPARAMETERS_HTTPPORT, TOSTRING(MW_DASHBOARDPARAMETERS_IPADDRESS), MW_DASHBOARDPARAMETERS_WEBSOCKETPORT);
    system(buff);
    sprintf(buff, "sudo pkill -f %s", dashboardpyserverLoc);
    system(buff);
    sprintf(buff, "sudo pkill -f %s", dashboardhttpserverLoc);
    system(buff);
    sprintf(buff, "sudo rm -rf /tmp/%s*.ipc", TOSTRING(MODEL));
    system(buff);
#endif
#if defined(MW_WEBSOC_INUSE) || defined(MW_DASHBLOCK_INUSE)
    sprintf(buff, "sudo rm -rf /tmp/pylog.txt");
    system(buff);
#endif
}

void MW_launchPyserver() {
    char cmd[255];
    char jsonFileLoc[1024];
    MW_getDefines();
#ifdef _MATLABIO_
    sprintf(jsonFileLoc, "/tmp/MW_websocInfo.json");
    sprintf(cmd, "sudo %s %s >/tmp/mw_websoc_sl_io.log &", pyserverLoc, jsonFileLoc);
    printf("Launching websocket server at %s\n", cmd);
    MW_execmd(cmd);
#else
    #if defined(MW_WEBSOC_INUSE)
        sprintf(jsonFileLoc, "%s%s_ert_rtw/MW_websocInfo.json", exePath, TOSTRING(MODEL));
        sprintf(cmd, "sudo %s %s >/dev/null &", pyserverLoc, jsonFileLoc);
        printf("Launching websocket server at %s\n", cmd);
        MW_execmd(cmd);
    #elif defined(MW_DASHBLOCK_INUSE) 
        sprintf(jsonFileLoc, "%s%s_ert_rtw/MW_dashblockInfo.json", exePath, TOSTRING(MODEL));
        sprintf(cmd,"chmod +x %s", dashboardpyserverLoc);
        MW_execmd(cmd);
        sprintf(cmd, "sudo %s %s >%s%s_ert_rtw/%s.log &", dashboardpyserverLoc, jsonFileLoc, exePath,TOSTRING(MODEL),TOSTRING(MODEL));
        printf("Launching dashboard websocket server at %s\n", cmd);
        MW_execmd(cmd);
        sprintf(cmd,"chmod +x %s", dashboardhttpserverLoc);
        MW_execmd(cmd);
        sprintf(cmd, "sudo %s %s%s_ert_rtw/ %s %d >%s%s_ert_rtw/%s.log &", dashboardhttpserverLoc, exePath, TOSTRING(MODEL), TOSTRING(MW_DASHBOARDPARAMETERS_IPADDRESS), MW_DASHBOARDPARAMETERS_HTTPPORT, exePath,TOSTRING(MODEL),TOSTRING(MODEL));
        printf("Launching dashboard http server at %s\n", cmd);
        MW_execmd(cmd);    
        sprintf(cmd,"chmod +x %s", dashboardlaunchscriptLoc);
        MW_execmd(cmd);
        sprintf(cmd, "sudo -u %s %s >%s%s_ert_rtw/%s.log &", TOSTRING(MW_BOARDPARAMETERS_USERNAME), dashboardlaunchscriptLoc, exePath, TOSTRING(MODEL), TOSTRING(MODEL));
        printf("Launching webpage at %s\n", cmd);
        MW_execmd(cmd); 
    #endif
#endif
}


void MW_execmd(char* buff) {
    int ret = 0, bufferLoc = 0;
    FILE *fp, *fd;
    char buffer[65535];
    size_t readLength = 0;
    uint32_t outSize = 65535;

    fd = fopen("/tmp/pylog.txt", "w");
    fprintf(fd, "%s\n", buff);
    fclose(fd);

    fp = popen(buff, "r");
    if (fp == NULL) {
        printf("Error in executing the cmd \n");
        return;
    }

    /*Read the cmd output if any */
    while (fgets((buffer + bufferLoc), (outSize - bufferLoc), fp) != NULL) {
        readLength = strlen(buffer + bufferLoc);

        if ((bufferLoc + readLength) < outSize) {
            // Advance the pointer to new location
            bufferLoc += readLength;
        } else {
            // cmd output exceeds outSize chars
            break;
        }
    }

    printf("cmd buffer - %s\n", buffer);
    pclose(fp);
    return;
}

/* LocalWords:  PAth pyserver pgrep awk xargs sudo dev tmp pylog
 */
