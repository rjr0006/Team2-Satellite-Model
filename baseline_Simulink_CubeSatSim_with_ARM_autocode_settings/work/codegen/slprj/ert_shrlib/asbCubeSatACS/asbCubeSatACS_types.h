/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: asbCubeSatACS_types.h
 *
 * Code generated for Simulink model 'asbCubeSatACS'.
 *
 * Model version                  : 6.9
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Wed Sep 28 19:02:46 2022
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_asbCubeSatACS_types_h_
#define RTW_HEADER_asbCubeSatACS_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_StatesOutBus_
#define DEFINED_TYPEDEF_FOR_StatesOutBus_

typedef struct {
  real_T utc_JD;
  real_T X_ecef[3];
  real_T V_ecef[3];
  real_T X_eci[3];
  real_T V_eci[3];
  real_T q_ecef2b[4];
  real_T q_eci2b[4];
  real_T Euler[3];
  real_T LatLonAlt[3];
  real_T SunAngle;
  boolean_T SunInView;
} StatesOutBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EnvBus_
#define DEFINED_TYPEDEF_FOR_EnvBus_

typedef struct {
  real_T envAccel_ecef[3];
  real_T envForces_body[3];
  real_T envTorques_body[3];
  real_T x_sun_eci[3];
  real_T earthAngRate[3];
} EnvBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AttitudeErrorBus_
#define DEFINED_TYPEDEF_FOR_AttitudeErrorBus_

typedef struct {
  real_T Roll;
  real_T Pitch;
  real_T Yaw;
} AttitudeErrorBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ACSOutBus_
#define DEFINED_TYPEDEF_FOR_ACSOutBus_

typedef struct {
  AttitudeErrorBus AttitudeError;
  real_T TorqueCmds[3];
  real_T cmd_q_b2tgt[4];
  real_T NavMode;
} ACSOutBus;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_asbCubeSatACS_T RT_MODEL_asbCubeSatACS_T;

#endif                                 /* RTW_HEADER_asbCubeSatACS_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
