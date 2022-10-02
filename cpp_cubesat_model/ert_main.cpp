//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ert_main.cpp
//
// Code generated for Simulink model 'asbCubeSat'.
//
// Model version                  : 5.2
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Sun Oct  2 16:39:30 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include <stdio.h>              // This example main program uses printf/fflush
#include "asbCubeSat.h"                // Model header file
#include "udpsend.h"

static asbCubeSat asbCubeSat_Obj;      // Instance of model class

//
// Associating rt_OneStep with a real-time clock or interrupt service routine
// is what makes the generated code "real-time".  The function rt_OneStep is
// always associated with the base rate of the model.  Subrates are managed
// by the base rate from inside the generated code.  Enabling/disabling
// interrupts and floating point context switches are target specific.  This
// example code indicates where these should take place relative to executing
// the generated code step function.  Overrun behavior should be tailored to
// your application needs.  This example simply sets an error status in the
// real-time model and returns from rt_OneStep.
//
void rt_OneStep(void);
void rt_OneStep(void)
{



  static boolean_T OverrunFlags[3] = { 0, 0, 0 };

  static boolean_T eventFlags[3] = { 0, 0, 0 };// Model has 3 rates

  static int_T taskCounter[3] = { 0, 0, 0 };

  // Disable interrupts here

  // Check base rate for overrun
  if (OverrunFlags[0]) {
    rtmSetErrorStatus(asbCubeSat_Obj.getRTM(), "Overrun");
    return;
  }

  OverrunFlags[0] = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here

  //
  //  For a bare-board target (i.e., no operating system), the
  //  following code checks whether any subrate overruns,
  //  and also sets the rates that need to run this time step.

  if (taskCounter[2] == 0) {
    if (eventFlags[2]) {
      OverrunFlags[0] = false;
      OverrunFlags[2] = true;

      // Sampling too fast
      rtmSetErrorStatus(asbCubeSat_Obj.getRTM(), "Overrun");
      return;
    }

    eventFlags[2] = true;
  }

  taskCounter[1]++;
  if (taskCounter[1] == 1) {
    taskCounter[1]= 0;
  }

  taskCounter[2]++;
  if (taskCounter[2] == 5) {
    taskCounter[2]= 0;
  }

  // Set model inputs associated with base rate here

  // Step the model for base rate
  asbCubeSat_Obj.step0();

  // Get model outputs here

  // Indicate task for base rate complete
  OverrunFlags[0] = false;

  // If task 1 is running, do not run any lower priority task
  if (OverrunFlags[1]) {
    return;
  }

  // Step the model for subrate
  if (eventFlags[2]) {
    OverrunFlags[2] = true;

    // Set model inputs associated with subrates here

    // Step the model for subrate 2
    asbCubeSat_Obj.step2();

    // Get model outputs here

    // Indicate task complete for subrate
    OverrunFlags[2] = false;
    eventFlags[2] = false;
  }

  // Disable interrupts here
  // Restore FPU context here (if necessary)
  // Enable interrupts here
}

//
// The example main function illustrates what is required by your
// application code to initialize, execute, and terminate the generated code.
// Attaching rt_OneStep to a real-time clock is target specific. This example
// illustrates how you do this relative to initializing the model.
//
using namespace std;
int_T main(int_T argc, const char *argv[])
{
  //cout << "Lat, Long, Alt, PosX, PosY, PosZ, VelX, VelY, VelZ, QEciX, QEciY, QEciZ, QEciW, QEcefX, QEcefY, QEcefZ, QEcefW" << endl;
  udpSocket COSMOSTx("192.168.86.31", 25000);
  udpSocket visualizerTx("192.168.86.31", 25001);

  // Unused arguments
  (void)(argc);
  (void)(argv);

  // Initialize model
  asbCubeSat_Obj.initialize();

  // Simulating the model step behavior (in non real-time) to
  //   simulate model behavior at stop time.

  while ((rtmGetErrorStatus(asbCubeSat_Obj.getRTM()) == (nullptr)) &&
         !rtmGetStopRequested(asbCubeSat_Obj.getRTM())) {
    
    rt_OneStep();

#pragma pack(1)
    struct bodyState
    {
      double latLongAlt[3];
      double x_ecef[3];
      double v_ecef[3];
      double q_eci[4];
      double q_ecef[4];

    };
    bodyState buffer;

    memset(&buffer, 0, sizeof(buffer));

  
    // lat long
    memcpy(&buffer.latLongAlt[0], &asbCubeSat_Obj.asbCubeSat_B.ECEFPositiontoLLA_o1, sizeof(double)*2);
    // alt
    memcpy(&buffer.latLongAlt[2], &asbCubeSat_Obj.asbCubeSat_B.ECEFPositiontoLLA_o2, sizeof(double));
    memcpy(&buffer.x_ecef, &asbCubeSat_Obj.asbCubeSat_B.X_ecef, sizeof(double)*3);
    memcpy(&buffer.v_ecef, &asbCubeSat_Obj.asbCubeSat_B.V_ecef, sizeof(double)*3);
    memcpy(&buffer.q_eci, &asbCubeSat_Obj.asbCubeSat_B.q_eci2b, sizeof(double)*4);
    memcpy(&buffer.q_ecef, &asbCubeSat_Obj.asbCubeSat_B.q_ecef2b, sizeof(double)*4);

    COSMOSTx.send(&buffer, sizeof(buffer));
    visualizerTx.send(&buffer, sizeof(buffer));

/*
    for (int i = 0; i < 3; i++)
      cout << buffer.latLongAlt[i] << ","; 

    for (int i = 0; i < 3; i++)
      cout << buffer.x_ecef[i] << ","; 

    for (int i = 0; i < 3; i++)
      cout << buffer.v_ecef[i] << ","; 
    
    for (int i = 0; i < 4; i++)
      cout << buffer.q_eci[i] << ","; 

    for (int i = 0; i < 4; i++)
      cout << buffer.q_ecef[i] << ","; 

    cout << endl;
*/
  }

  // Terminate model
  asbCubeSat_Obj.terminate();
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
