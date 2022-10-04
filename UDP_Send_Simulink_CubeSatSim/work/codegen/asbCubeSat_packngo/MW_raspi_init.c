/* Copyright 2018-2021 The MathWorks, Inc. */
#include <stdio.h>
#include <stdlib.h>
#include "MW_raspi_init.h"

#if defined(MW_RASPI_EXTINTERRUPT) || defined(MW_RASPI_ROTARYENCODER) || defined(MW_PWMBLOCK)
#include <pigpio.h>
#endif

// Overrun detection function
void mwRaspiInit(void)
{
#if defined(MW_RASPI_EXTINTERRUPT) || defined(MW_RASPI_ROTARYENCODER) || defined(MW_PWMBLOCK)
    int retStatusInt;
#endif

    printf("**** Starting the application ****\n");
    fflush(stdout);
#ifdef MW_MATLABTARGET  
    /*Signal Handling */
    signal(SIGTERM, main_terminate);     /* kill */
    signal(SIGHUP, main_terminate);      /* kill -HUP */
    signal(SIGINT, main_terminate);      /* Interrupt from keyboard */
    signal(SIGQUIT, main_terminate);     /* Quit from keyboard */
#endif

#if defined(MW_RASPI_EXTINTERRUPT) || defined(MW_RASPI_ROTARYENCODER) || defined(MW_PWMBLOCK)
    // Start gpio library
    system("sudo killall pigpiod");
    system("sudo rm /var/run/pigpio.pid");
    gpioCfgClock(5U, 1U, 0U);  // Best external interrupt turn around time
    retStatusInt = gpioInitialise();
    if(retStatusInt < 0){
        fprintf(stderr,"ERR_PIGPIO_INIT\n");
        exit(-1);
    }
#endif
}

int mwRaspiTerminate(void)
{
#ifdef MW_MATLABTARGET
    printf("**** Stopping the application ****\n");
    fflush(stdout);
    exit(1);
#endif

#if defined(MW_RASPI_EXTINTERRUPT) || defined(MW_RASPI_ROTARYENCODER) || defined(MW_PWMBLOCK)
    // Stop gpio library
    gpioTerminate();
#endif
    return(1);
}

// Overrun detection function
void reportOverrun(int taskId)
{
#ifdef MW_RASPI_DETECTOVERRUN
    printf("Overrun detected: The sample time for the rate %d is too short.\n", taskId);
    fflush(stdout);
#endif
}

/* LocalWords:  HUP MATLABTARGET
 */
