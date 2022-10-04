/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: asbCubeSat_types.h
 *
 * Code generated for Simulink model 'asbCubeSat'.
 *
 * Model version                  : 5.3
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Sun Sep 25 19:25:53 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_asbCubeSat_types_h_
#define RTW_HEADER_asbCubeSat_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
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

#ifndef DEFINED_TYPEDEF_FOR_FCSOutBus_
#define DEFINED_TYPEDEF_FOR_FCSOutBus_

typedef struct {
  ACSOutBus ACSOut;
} FCSOutBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_JlcHP38UMR9JPgzzHyqse_
#define DEFINED_TYPEDEF_FOR_struct_JlcHP38UMR9JPgzzHyqse_

typedef struct {
  real_T AU;
  real_T POINTERS[39];
  real_T JED[3];
  real_T EMRAT;
} struct_JlcHP38UMR9JPgzzHyqse;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_IDZab2uInNu48WAt9I3W5_
#define DEFINED_TYPEDEF_FOR_struct_IDZab2uInNu48WAt9I3W5_

typedef struct {
  real_T JD;
  real_T dateVector[6];
} struct_IDZab2uInNu48WAt9I3W5;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_rZOo7lI4XXnxZGwtsuw9nF_
#define DEFINED_TYPEDEF_FOR_struct_rZOo7lI4XXnxZGwtsuw9nF_

typedef struct {
  real_T semiMajorAxis;
  real_T eccentricity;
  real_T inclination;
  real_T RAAN;
  real_T argumentOfPerigee;
  real_T trueAnomoly;
  real_T trueLongitude;
  real_T argumentOfLatititude;
  real_T longitudeOfPerigee;
} struct_rZOo7lI4XXnxZGwtsuw9nF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_uXBeANgAqTGhrPgOyPRa5G_
#define DEFINED_TYPEDEF_FOR_struct_uXBeANgAqTGhrPgOyPRa5G_

typedef struct {
  struct_IDZab2uInNu48WAt9I3W5 simStartDate;
  struct_IDZab2uInNu48WAt9I3W5 CoordEpoch;
  struct_rZOo7lI4XXnxZGwtsuw9nF OrbitalElements;
  real_T r_eci[3];
  real_T v_eci[3];
  real_T r_ecef[3];
  real_T v_ecef[3];
  real_T lla[3];
  real_T v_ned[3];
  real_T uvw[3];
  real_T euler[3];
  real_T pqr[3];
} struct_uXBeANgAqTGhrPgOyPRa5G;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_9iDbyyjfBL0Y1ELTIVXdBC_
#define DEFINED_TYPEDEF_FOR_struct_9iDbyyjfBL0Y1ELTIVXdBC_

typedef struct {
  real_T Kp;
  real_T Ki;
  real_T Kd;
} struct_9iDbyyjfBL0Y1ELTIVXdBC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_xjm5GaruTmSt2dTUHHAtVB_
#define DEFINED_TYPEDEF_FOR_struct_xjm5GaruTmSt2dTUHHAtVB_

typedef struct {
  real_T mass;
  real_T inertia[9];
} struct_xjm5GaruTmSt2dTUHHAtVB;

#endif

/* Parameters for system: '<S28>/For Iterator Subsystem' */
typedef struct P_ForIteratorSubsystem_asbCubeSat_T_
  P_ForIteratorSubsystem_asbCubeSat_T;

/* Parameters for system: '<S34>/For Iterator Subsystem' */
typedef struct P_ForIteratorSubsystem_asbCubeSat_j_T_
  P_ForIteratorSubsystem_asbCubeSat_j_T;

/* Parameters for system: '<S37>/For Iterator Subsystem' */
typedef struct P_ForIteratorSubsystem_asbCubeSat_o_T_
  P_ForIteratorSubsystem_asbCubeSat_o_T;

/* Parameters for system: '<S35>/For Iterator Subsystem' */
typedef struct P_ForIteratorSubsystem_asbCubeSat_m_T_
  P_ForIteratorSubsystem_asbCubeSat_m_T;

/* Parameters for system: '<S134>/If Action Subsystem' */
typedef struct P_IfActionSubsystem_asbCubeSat_T_
  P_IfActionSubsystem_asbCubeSat_T;

/* Parameters for system: '<S274>/If Action Subsystem' */
typedef struct P_IfActionSubsystem_asbCubeSat_g_T_
  P_IfActionSubsystem_asbCubeSat_g_T;

/* Parameters (default storage) */
typedef struct P_asbCubeSat_T_ P_asbCubeSat_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_asbCubeSat_T RT_MODEL_asbCubeSat_T;

#endif                                 /* RTW_HEADER_asbCubeSat_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
