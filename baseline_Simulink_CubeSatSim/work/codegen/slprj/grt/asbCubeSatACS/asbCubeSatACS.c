/*
 * Code generation for system model 'asbCubeSatACS'
 *
 * Model                      : asbCubeSatACS
 * Model version              : 6.9
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C source code generated on : Mon Sep 12 14:58:00 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "asbCubeSatACS.h"
#include "rtwtypes.h"
#include "asbCubeSatACS_types.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rt_atan2d_snf.h"
#include "asbCubeSatACS_private.h"

/* Named constants for Chart: '<S1>/Pointing Mode Selection' */
#define asbCubeSatACS_IN_Earth         ((uint8_T)1U)
#define asbCubeSatACS_IN_Off           ((uint8_T)1U)
#define asbCubeSatACS_IN_On            ((uint8_T)2U)
#define asbCubeSatACS_IN_Sun           ((uint8_T)2U)
#define asbCubeSatACS_IN_Transition    ((uint8_T)3U)
#define asbCubeSatAC_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

const StatesOutBus asbCubeSatACS_rtZStatesOutBus = {
  0.0,                                 /* utc_JD */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* X_ecef */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* V_ecef */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* X_eci */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* V_eci */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* q_ecef2b */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* q_eci2b */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* Euler */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* LatLonAlt */
  0.0,                                 /* SunAngle */
  false                                /* SunInView */
};                                     /* StatesOutBus ground */

const EnvBus asbCubeSatACS_rtZEnvBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* envAccel_ecef */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* envForces_body */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* envTorques_body */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* x_sun_eci */

  {
    0.0, 0.0, 0.0 }
  /* earthAngRate */
};                                     /* EnvBus ground */

/*
 * Output and update for action system:
 *    '<S50>/If Action Subsystem'
 *    '<S51>/If Action Subsystem'
 *    '<S77>/If Action Subsystem'
 *    '<S92>/If Action Subsystem'
 *    '<S156>/If Action Subsystem'
 *    '<S157>/If Action Subsystem'
 *    '<S183>/If Action Subsystem'
 *    '<S198>/If Action Subsystem'
 */
void asbCubeSatACS_IfActionSubsystem(real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S60>/Out1' incorporates:
   *  Constant: '<S60>/Constant'
   */
  *rty_Out1 = 1.0;
}

/*
 * Output and update for action system:
 *    '<S50>/If Action Subsystem1'
 *    '<S51>/If Action Subsystem1'
 *    '<S77>/If Action Subsystem1'
 *    '<S92>/If Action Subsystem1'
 *    '<S156>/If Action Subsystem1'
 *    '<S157>/If Action Subsystem1'
 *    '<S183>/If Action Subsystem1'
 *    '<S198>/If Action Subsystem1'
 */
void asbCubeSatAC_IfActionSubsystem1(real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S61>/Out1' incorporates:
   *  Constant: '<S61>/Constant'
   */
  *rty_Out1 = -1.0;
}

/*
 * Output and update for action system:
 *    '<S50>/If Action Subsystem2'
 *    '<S51>/If Action Subsystem2'
 *    '<S77>/If Action Subsystem2'
 *    '<S92>/If Action Subsystem2'
 *    '<S156>/If Action Subsystem2'
 *    '<S157>/If Action Subsystem2'
 *    '<S183>/If Action Subsystem2'
 *    '<S198>/If Action Subsystem2'
 */
void asbCubeSatAC_IfActionSubsystem2(real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S62>/Out1' incorporates:
   *  Constant: '<S62>/Constant'
   */
  *rty_Out1 = 0.0;
}

/*
 * Output and update for action system:
 *    '<S130>/If Action Subsystem2'
 *    '<S236>/If Action Subsystem2'
 */
void asbCubeSat_IfActionSubsystem2_p(real_T rtu_In, real_T *rty_OutOrig)
{
  /* SignalConversion generated from: '<S133>/In' */
  *rty_OutOrig = rtu_In;
}

/* System initialize for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS_Init(ACSOutBus *rty_ACSOut, B_asbCubeSatACS_c_T *localB,
  DW_asbCubeSatACS_f_T *localDW)
{
  /* SystemInitialize for Chart: '<S1>/Pointing Mode Selection' */
  localDW->is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
  localDW->is_active_c1_asbCubeSatACS = 0U;
  localDW->is_c1_asbCubeSatACS = asbCubeSatAC_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[0] = 0.0;

  /* SystemInitialize for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[1] = 0.0;

  /* SystemInitialize for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[2] = 0.0;

  /* SystemInitialize for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[2] = 0.0;

  /* SystemInitialize for Merge: '<S3>/ Merge 1' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->cmd_q_b2tgt[0] = 0.0;
  localB->cmd_q_b2tgt[1] = 0.0;
  localB->cmd_q_b2tgt[2] = 0.0;
  localB->cmd_q_b2tgt[3] = 0.0;

  /* SystemInitialize for Chart: '<S1>/Pointing Mode Selection' */
  localB->ControlMode = 0.0;

  /* SystemInitialize for BusCreator generated from: '<Root>/Bus Creator' */
  rty_ACSOut->AttitudeError.Roll = 0.0;
  rty_ACSOut->AttitudeError.Pitch = 0.0;
  rty_ACSOut->AttitudeError.Yaw = 0.0;
}

/* System reset for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS_Reset(B_asbCubeSatACS_c_T *localB, DW_asbCubeSatACS_f_T
  *localDW)
{
  /* SystemReset for Chart: '<S1>/Pointing Mode Selection' */
  localDW->is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
  localDW->is_active_c1_asbCubeSatACS = 0U;
  localDW->is_c1_asbCubeSatACS = asbCubeSatAC_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[0] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[1] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[2] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[2] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge 1' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->cmd_q_b2tgt[0] = 0.0;
  localB->cmd_q_b2tgt[1] = 0.0;
  localB->cmd_q_b2tgt[2] = 0.0;
  localB->cmd_q_b2tgt[3] = 0.0;

  /* SystemReset for Chart: '<S1>/Pointing Mode Selection' */
  localB->ControlMode = 0.0;
}

/* Outputs for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS(const real_T *rtu_SensorsOut_utc_JD, const real_T
                   rtu_SensorsOut_X_ecef[3], const real_T rtu_SensorsOut_V_ecef
                   [3], const real_T rtu_SensorsOut_X_eci[3], const real_T
                   rtu_SensorsOut_V_eci[3], const real_T
                   rtu_SensorsOut_q_ecef2b[4], const real_T
                   rtu_SensorsOut_q_eci2b[4], const real_T rtu_SensorsOut_Euler
                   [3], const real_T rtu_SensorsOut_LatLonAlt[3], const real_T
                   *rtu_SensorsOut_SunAngle, const boolean_T
                   *rtu_SensorsOut_SunInView, const real_T *rtu_AttitudeMode,
                   const real_T rtu_Environment_envAccel_ecef[3], const real_T
                   rtu_Environment_envForces_body[3], const real_T
                   rtu_Environment_envTorques_body[3], const real_T
                   rtu_Environment_x_sun_eci[3], const real_T
                   rtu_Environment_earthAngRate[3], ACSOutBus *rty_ACSOut,
                   B_asbCubeSatACS_c_T *localB, DW_asbCubeSatACS_f_T *localDW)
{
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;
  real_T u0;
  real_T u1;

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Point.utc_JD = *rtu_SensorsOut_utc_JD;
  localB->BusConversion_InsertedFor_Point.X_ecef[0] = rtu_SensorsOut_X_ecef[0];
  localB->BusConversion_InsertedFor_Point.V_ecef[0] = rtu_SensorsOut_V_ecef[0];
  localB->BusConversion_InsertedFor_Point.X_eci[0] = rtu_SensorsOut_X_eci[0];
  localB->BusConversion_InsertedFor_Point.V_eci[0] = rtu_SensorsOut_V_eci[0];
  localB->BusConversion_InsertedFor_Point.X_ecef[1] = rtu_SensorsOut_X_ecef[1];
  localB->BusConversion_InsertedFor_Point.V_ecef[1] = rtu_SensorsOut_V_ecef[1];
  localB->BusConversion_InsertedFor_Point.X_eci[1] = rtu_SensorsOut_X_eci[1];
  localB->BusConversion_InsertedFor_Point.V_eci[1] = rtu_SensorsOut_V_eci[1];
  localB->BusConversion_InsertedFor_Point.X_ecef[2] = rtu_SensorsOut_X_ecef[2];
  localB->BusConversion_InsertedFor_Point.V_ecef[2] = rtu_SensorsOut_V_ecef[2];
  localB->BusConversion_InsertedFor_Point.X_eci[2] = rtu_SensorsOut_X_eci[2];
  localB->BusConversion_InsertedFor_Point.V_eci[2] = rtu_SensorsOut_V_eci[2];
  localB->BusConversion_InsertedFor_Point.q_ecef2b[0] = rtu_SensorsOut_q_ecef2b
    [0];
  localB->BusConversion_InsertedFor_Point.q_eci2b[0] = rtu_SensorsOut_q_eci2b[0];
  localB->BusConversion_InsertedFor_Point.q_ecef2b[1] = rtu_SensorsOut_q_ecef2b
    [1];
  localB->BusConversion_InsertedFor_Point.q_eci2b[1] = rtu_SensorsOut_q_eci2b[1];
  localB->BusConversion_InsertedFor_Point.q_ecef2b[2] = rtu_SensorsOut_q_ecef2b
    [2];
  localB->BusConversion_InsertedFor_Point.q_eci2b[2] = rtu_SensorsOut_q_eci2b[2];
  localB->BusConversion_InsertedFor_Point.q_ecef2b[3] = rtu_SensorsOut_q_ecef2b
    [3];
  localB->BusConversion_InsertedFor_Point.q_eci2b[3] = rtu_SensorsOut_q_eci2b[3];
  localB->BusConversion_InsertedFor_Point.SunAngle = *rtu_SensorsOut_SunAngle;
  localB->BusConversion_InsertedFor_Point.SunInView = *rtu_SensorsOut_SunInView;
  localB->BusConversion_InsertedFor_Point.Euler[0] = rtu_SensorsOut_Euler[0];
  localB->BusConversion_InsertedFor_Point.LatLonAlt[0] =
    rtu_SensorsOut_LatLonAlt[0];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Poi_e.envAccel_ecef[0] =
    rtu_Environment_envAccel_ecef[0];
  localB->BusConversion_InsertedFor_Poi_e.envForces_body[0] =
    rtu_Environment_envForces_body[0];
  localB->BusConversion_InsertedFor_Poi_e.envTorques_body[0] =
    rtu_Environment_envTorques_body[0];
  localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0] =
    rtu_Environment_x_sun_eci[0];
  localB->BusConversion_InsertedFor_Poi_e.earthAngRate[0] =
    rtu_Environment_earthAngRate[0];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Point.Euler[1] = rtu_SensorsOut_Euler[1];
  localB->BusConversion_InsertedFor_Point.LatLonAlt[1] =
    rtu_SensorsOut_LatLonAlt[1];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Poi_e.envAccel_ecef[1] =
    rtu_Environment_envAccel_ecef[1];
  localB->BusConversion_InsertedFor_Poi_e.envForces_body[1] =
    rtu_Environment_envForces_body[1];
  localB->BusConversion_InsertedFor_Poi_e.envTorques_body[1] =
    rtu_Environment_envTorques_body[1];
  localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1] =
    rtu_Environment_x_sun_eci[1];
  localB->BusConversion_InsertedFor_Poi_e.earthAngRate[1] =
    rtu_Environment_earthAngRate[1];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Point.Euler[2] = rtu_SensorsOut_Euler[2];
  localB->BusConversion_InsertedFor_Point.LatLonAlt[2] =
    rtu_SensorsOut_LatLonAlt[2];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Poi_e.envAccel_ecef[2] =
    rtu_Environment_envAccel_ecef[2];
  localB->BusConversion_InsertedFor_Poi_e.envForces_body[2] =
    rtu_Environment_envForces_body[2];
  localB->BusConversion_InsertedFor_Poi_e.envTorques_body[2] =
    rtu_Environment_envTorques_body[2];
  localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2] =
    rtu_Environment_x_sun_eci[2];
  localB->BusConversion_InsertedFor_Poi_e.earthAngRate[2] =
    rtu_Environment_earthAngRate[2];

  /* Chart: '<S1>/Pointing Mode Selection' */
  /* Gateway: Attitude Control/Pointing Mode Selection */
  /* During: Attitude Control/Pointing Mode Selection */
  if (localDW->is_active_c1_asbCubeSatACS == 0U) {
    /* Entry: Attitude Control/Pointing Mode Selection */
    localDW->is_active_c1_asbCubeSatACS = 1U;

    /* Entry Internal: Attitude Control/Pointing Mode Selection */
    /* Transition: '<S3>:6' */
    localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    /* Merge: '<S3>/ Merge ' incorporates:
     *  Constant: '<S4>/TorqueCmds'
     *  SignalConversion generated from: '<S4>/PointingCmd'
     */
    localB->PointingCmd[0] = 0.0;
    localB->PointingCmd[1] = 0.0;
    localB->PointingCmd[2] = 0.0;

    /* Merge: '<S3>/ Merge 1' incorporates:
     *  Constant: '<S4>/Unit quat'
     *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
     */
    localB->cmd_q_b2tgt[0] = 1.0;
    localB->cmd_q_b2tgt[1] = 0.0;
    localB->cmd_q_b2tgt[2] = 0.0;
    localB->cmd_q_b2tgt[3] = 0.0;
  } else if (localDW->is_c1_asbCubeSatACS == asbCubeSatACS_IN_Off) {
    /* During 'Off': '<S3>:50' */
    if (*rtu_AttitudeMode != 0.0) {
      /* Transition: '<S3>:53' */
      localB->ControlMode = 1.0;
      localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_On;

      /* Entry Internal 'On': '<S3>:37' */
      /* Transition: '<S3>:54' */
      localDW->is_On = asbCubeSatACS_IN_Transition;
    } else {
      /* Merge: '<S3>/ Merge ' incorporates:
       *  Constant: '<S4>/TorqueCmds'
       *  SignalConversion generated from: '<S4>/PointingCmd'
       */
      localB->PointingCmd[0] = 0.0;
      localB->PointingCmd[1] = 0.0;
      localB->PointingCmd[2] = 0.0;

      /* Merge: '<S3>/ Merge 1' incorporates:
       *  Constant: '<S4>/Unit quat'
       *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
       */
      localB->cmd_q_b2tgt[0] = 1.0;
      localB->cmd_q_b2tgt[1] = 0.0;
      localB->cmd_q_b2tgt[2] = 0.0;
      localB->cmd_q_b2tgt[3] = 0.0;
    }

    /* During 'On': '<S3>:37' */
  } else if (*rtu_AttitudeMode == 0.0) {
    /* Transition: '<S3>:41' */
    localB->ControlMode = 0.0;

    /* Exit Internal 'On': '<S3>:37' */
    localDW->is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
    localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    /* Merge: '<S3>/ Merge ' incorporates:
     *  Constant: '<S4>/TorqueCmds'
     *  SignalConversion generated from: '<S4>/PointingCmd'
     */
    localB->PointingCmd[0] = 0.0;
    localB->PointingCmd[1] = 0.0;
    localB->PointingCmd[2] = 0.0;

    /* Merge: '<S3>/ Merge 1' incorporates:
     *  Constant: '<S4>/Unit quat'
     *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
     */
    localB->cmd_q_b2tgt[0] = 1.0;
    localB->cmd_q_b2tgt[1] = 0.0;
    localB->cmd_q_b2tgt[2] = 0.0;
    localB->cmd_q_b2tgt[3] = 0.0;
  } else {
    switch (localDW->is_On) {
     case asbCubeSatACS_IN_Earth:
      /* During 'Earth': '<S3>:48' */
      if (*rtu_AttitudeMode == 2.0) {
        /* Transition: '<S3>:56' */
        localB->ControlMode = 1.0;
        localDW->is_On = asbCubeSatACS_IN_Transition;
      } else {
        /* Product: '<S121>/Product' */
        localB->Product_cs = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* UnaryMinus: '<S8>/Unary Minus' */
        localB->UnaryMinus_e = -localB->BusConversion_InsertedFor_Point.q_eci2b
          [1];

        /* Product: '<S121>/Product1' */
        localB->Product1_p = localB->UnaryMinus_e * localB->UnaryMinus_e;

        /* UnaryMinus: '<S8>/Unary Minus1' */
        localB->UnaryMinus1_d = -localB->
          BusConversion_InsertedFor_Point.q_eci2b[2];

        /* Product: '<S121>/Product2' */
        localB->Product2_j = localB->UnaryMinus1_d * localB->UnaryMinus1_d;

        /* UnaryMinus: '<S8>/Unary Minus2' */
        localB->UnaryMinus2_f = -localB->
          BusConversion_InsertedFor_Point.q_eci2b[3];

        /* Product: '<S121>/Product3' */
        localB->Product3_ii = localB->UnaryMinus2_f * localB->UnaryMinus2_f;

        /* Sum: '<S121>/Sum' */
        localB->Sum_p4 = ((localB->Product_cs + localB->Product1_p) +
                          localB->Product2_j) + localB->Product3_ii;

        /* Sqrt: '<S120>/sqrt' */
        localB->sqrt_o5 = sqrt(localB->Sum_p4);

        /* Product: '<S119>/Product' */
        localB->Product_ks = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_o5;

        /* Product: '<S22>/Product' */
        localB->Product_bb = localB->Product_ks * localB->Product_ks;

        /* Product: '<S119>/Product1' */
        localB->Product1_l0 = localB->UnaryMinus_e / localB->sqrt_o5;

        /* UnaryMinus: '<S118>/Unary Minus' */
        localB->UnaryMinus_ec = -localB->Product1_l0;

        /* Product: '<S22>/Product1' */
        localB->Product1_me = localB->UnaryMinus_ec * localB->UnaryMinus_ec;

        /* Product: '<S119>/Product2' */
        localB->Product2_pc = localB->UnaryMinus1_d / localB->sqrt_o5;

        /* UnaryMinus: '<S118>/Unary Minus1' */
        localB->UnaryMinus1_e = -localB->Product2_pc;

        /* Product: '<S22>/Product2' */
        localB->Product2_i = localB->UnaryMinus1_e * localB->UnaryMinus1_e;

        /* Product: '<S119>/Product3' */
        localB->Product3_c3 = localB->UnaryMinus2_f / localB->sqrt_o5;

        /* UnaryMinus: '<S118>/Unary Minus2' */
        localB->UnaryMinus2_k = -localB->Product3_c3;

        /* Product: '<S22>/Product3' */
        localB->Product3_ff = localB->UnaryMinus2_k * localB->UnaryMinus2_k;

        /* Sum: '<S22>/Sum' */
        localB->Sum_ke = ((localB->Product_bb + localB->Product1_me) +
                          localB->Product2_i) + localB->Product3_ff;

        /* Sqrt: '<S21>/sqrt' */
        localB->sqrt_la = sqrt(localB->Sum_ke);

        /* Product: '<S17>/Product' */
        localB->Product_gl = localB->Product_ks / localB->sqrt_la;

        /* Product: '<S17>/Product1' */
        localB->Product1_gs = localB->UnaryMinus_ec / localB->sqrt_la;

        /* Product: '<S17>/Product2' */
        localB->Product2_ef = localB->UnaryMinus1_e / localB->sqrt_la;

        /* Product: '<S17>/Product3' */
        localB->Product3_fp = localB->UnaryMinus2_k / localB->sqrt_la;

        /* Product: '<S18>/Product' */
        localB->Product_fo = localB->Product1_gs * localB->Product2_ef;

        /* Product: '<S18>/Product1' */
        localB->Product1_b = localB->Product_gl * localB->Product3_fp;

        /* Sum: '<S18>/Sum1' */
        localB->Sum1_h = localB->Product_fo + localB->Product1_b;

        /* Gain: '<S18>/Gain' */
        localB->Gain_lp = 2.0 * localB->Sum1_h;

        /* Product: '<S18>/Product2' */
        localB->Product2_js = localB->Product_gl * localB->Product2_ef;

        /* Product: '<S18>/Product3' */
        localB->Product3_hw = localB->Product1_gs * localB->Product3_fp;

        /* Sum: '<S18>/Sum2' */
        localB->Sum2_i = localB->Product3_hw - localB->Product2_js;

        /* Gain: '<S18>/Gain1' */
        localB->Gain1_o = 2.0 * localB->Sum2_i;

        /* Product: '<S18>/Product6' */
        localB->Product6_m = localB->Product2_ef * localB->Product2_ef;

        /* Product: '<S18>/Product7' */
        localB->Product7_k2 = localB->Product3_fp * localB->Product3_fp;

        /* Sum: '<S18>/Sum3' incorporates:
         *  Constant: '<S18>/Constant'
         */
        localB->Sum3_c = (0.5 - localB->Product6_m) - localB->Product7_k2;

        /* Gain: '<S18>/Gain2' */
        localB->Gain2_cx = 2.0 * localB->Sum3_c;

        /* Product: '<S19>/Product' */
        localB->Product_pp = localB->Product1_gs * localB->Product2_ef;

        /* Product: '<S19>/Product1' */
        localB->Product1_p3 = localB->Product_gl * localB->Product3_fp;

        /* Sum: '<S19>/Sum1' */
        localB->Sum1_i = localB->Product_pp - localB->Product1_p3;

        /* Gain: '<S19>/Gain' */
        localB->Gain_ie = 2.0 * localB->Sum1_i;

        /* Product: '<S19>/Product2' */
        localB->Product2_f = localB->Product_gl * localB->Product1_gs;

        /* Product: '<S19>/Product3' */
        localB->Product3_m = localB->Product2_ef * localB->Product3_fp;

        /* Sum: '<S19>/Sum2' */
        localB->Sum2_f = localB->Product2_f + localB->Product3_m;

        /* Gain: '<S19>/Gain1' */
        localB->Gain1_l = 2.0 * localB->Sum2_f;

        /* Product: '<S19>/Product6' */
        localB->Product6_iz = localB->Product1_gs * localB->Product1_gs;

        /* Product: '<S19>/Product7' */
        localB->Product7_e = localB->Product3_fp * localB->Product3_fp;

        /* Sum: '<S19>/Sum3' incorporates:
         *  Constant: '<S19>/Constant'
         */
        localB->Sum3_op = (0.5 - localB->Product6_iz) - localB->Product7_e;

        /* Gain: '<S19>/Gain2' */
        localB->Gain2_e = 2.0 * localB->Sum3_op;

        /* Product: '<S20>/Product' */
        localB->Product_ce = localB->Product1_gs * localB->Product3_fp;

        /* Product: '<S20>/Product1' */
        localB->Product1_mx = localB->Product_gl * localB->Product2_ef;

        /* Sum: '<S20>/Sum1' */
        localB->Sum1_m = localB->Product_ce + localB->Product1_mx;

        /* Gain: '<S20>/Gain' */
        localB->Gain_ab = 2.0 * localB->Sum1_m;

        /* Product: '<S20>/Product2' */
        localB->Product2_av = localB->Product_gl * localB->Product1_gs;

        /* Product: '<S20>/Product3' */
        localB->Product3_cx = localB->Product2_ef * localB->Product3_fp;

        /* Sum: '<S20>/Sum2' */
        localB->Sum2_o = localB->Product3_cx - localB->Product2_av;

        /* Gain: '<S20>/Gain1' */
        localB->Gain1_g = 2.0 * localB->Sum2_o;

        /* Product: '<S20>/Product6' */
        localB->Product6_l = localB->Product1_gs * localB->Product1_gs;

        /* Product: '<S20>/Product7' */
        localB->Product7_l = localB->Product2_ef * localB->Product2_ef;

        /* Sum: '<S20>/Sum3' incorporates:
         *  Constant: '<S20>/Constant'
         */
        localB->Sum3_a = (0.5 - localB->Product6_l) - localB->Product7_l;

        /* Gain: '<S20>/Gain2' */
        localB->Gain2_o = 2.0 * localB->Sum3_a;

        /* Product: '<S38>/j x k' */
        localB->jxk_pl = localB->BusConversion_InsertedFor_Point.X_eci[1] *
          localB->BusConversion_InsertedFor_Point.V_eci[2];

        /* Product: '<S38>/k x i' */
        localB->kxi_a = localB->BusConversion_InsertedFor_Point.V_eci[0] *
          localB->BusConversion_InsertedFor_Point.X_eci[2];

        /* Product: '<S38>/i x j' */
        localB->ixj_d = localB->BusConversion_InsertedFor_Point.X_eci[0] *
          localB->BusConversion_InsertedFor_Point.V_eci[1];

        /* Product: '<S39>/k x j' */
        localB->kxj_e = localB->BusConversion_InsertedFor_Point.V_eci[1] *
          localB->BusConversion_InsertedFor_Point.X_eci[2];

        /* Product: '<S39>/i x k' */
        localB->ixk_g = localB->BusConversion_InsertedFor_Point.X_eci[0] *
          localB->BusConversion_InsertedFor_Point.V_eci[2];

        /* Product: '<S39>/j x i' */
        localB->jxi_g = localB->BusConversion_InsertedFor_Point.V_eci[0] *
          localB->BusConversion_InsertedFor_Point.X_eci[1];

        /* Sum: '<S32>/Sum' */
        localB->Sum_mp[0] = localB->jxk_pl - localB->kxj_e;
        localB->Sum_mp[1] = localB->kxi_a - localB->ixk_g;
        localB->Sum_mp[2] = localB->ixj_d - localB->jxi_g;

        /* Product: '<S40>/j x k' incorporates:
         *  Constant: '<S23>/Constant'
         */
        localB->jxk_c = 0.0 * localB->Sum_mp[2];

        /* Product: '<S40>/k x i' */
        localB->kxi_na = localB->Sum_mp[0];

        /* Product: '<S40>/i x j' incorporates:
         *  Constant: '<S23>/Constant'
         */
        localB->ixj_p = 0.0 * localB->Sum_mp[1];

        /* Product: '<S41>/k x j' */
        localB->kxj_d = localB->Sum_mp[1];

        /* Product: '<S41>/i x k' incorporates:
         *  Constant: '<S23>/Constant'
         */
        localB->ixk_h = 0.0 * localB->Sum_mp[2];

        /* Product: '<S41>/j x i' incorporates:
         *  Constant: '<S23>/Constant'
         */
        localB->jxi_gk = localB->Sum_mp[0] * 0.0;

        /* Sum: '<S34>/Sum' */
        localB->Sum_co[0] = localB->jxk_c - localB->kxj_d;
        localB->Sum_co[1] = localB->kxi_na - localB->ixk_h;
        localB->Sum_co[2] = localB->ixj_p - localB->jxi_gk;

        /* Product: '<S42>/j x k' */
        localB->jxk_o5 = localB->BusConversion_InsertedFor_Point.V_eci[1] *
          localB->Sum_mp[2];

        /* Product: '<S42>/k x i' */
        localB->kxi_f = localB->Sum_mp[0] *
          localB->BusConversion_InsertedFor_Point.V_eci[2];

        /* Product: '<S42>/i x j' */
        localB->ixj_lo = localB->BusConversion_InsertedFor_Point.V_eci[0] *
          localB->Sum_mp[1];

        /* Product: '<S43>/k x j' */
        localB->kxj_o = localB->Sum_mp[1] *
          localB->BusConversion_InsertedFor_Point.V_eci[2];

        /* Product: '<S43>/i x k' */
        localB->ixk_ab = localB->BusConversion_InsertedFor_Point.V_eci[0] *
          localB->Sum_mp[2];

        /* Product: '<S43>/j x i' */
        localB->jxi_j = localB->Sum_mp[0] *
          localB->BusConversion_InsertedFor_Point.V_eci[1];

        /* Sum: '<S35>/Sum' */
        localB->Sum_jr[0] = localB->jxk_o5 - localB->kxj_o;
        localB->Sum_jr[1] = localB->kxi_f - localB->ixk_ab;
        localB->Sum_jr[2] = localB->ixj_lo - localB->jxi_j;

        /* Gain: '<S10>/Gain' */
        localB->Gain_h[0] = -localB->BusConversion_InsertedFor_Point.X_eci[0];

        /* DotProduct: '<S23>/Dot Product' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[0];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[0];
        tmp_0 = u0 * u1;

        /* Product: '<S23>/divide2' incorporates:
         *  Constant: '<S23>/Constant2'
         */
        localB->divide2[0] = localB->Sum_jr[0] / 3.986004418E+14;

        /* Gain: '<S10>/Gain' */
        localB->Gain_h[1] = -localB->BusConversion_InsertedFor_Point.X_eci[1];

        /* DotProduct: '<S23>/Dot Product' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[1];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[1];
        tmp_0 += u0 * u1;

        /* Product: '<S23>/divide2' incorporates:
         *  Constant: '<S23>/Constant2'
         */
        localB->divide2[1] = localB->Sum_jr[1] / 3.986004418E+14;

        /* Gain: '<S10>/Gain' */
        localB->Gain_h[2] = -localB->BusConversion_InsertedFor_Point.X_eci[2];

        /* DotProduct: '<S23>/Dot Product' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[2];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[2];
        tmp_0 += u0 * u1;

        /* Product: '<S23>/divide2' incorporates:
         *  Constant: '<S23>/Constant2'
         */
        localB->divide2[2] = localB->Sum_jr[2] / 3.986004418E+14;

        /* Product: '<S18>/Product4' */
        localB->Product4_f = localB->Gain_lp * localB->Gain_h[1];

        /* Product: '<S18>/Product5' */
        localB->Product5_f = localB->Gain1_o * localB->Gain_h[2];

        /* Product: '<S18>/Product8' */
        localB->Product8_ao = localB->Gain_h[0] * localB->Gain2_cx;

        /* Sum: '<S18>/Sum' */
        localB->Sum_ah = (localB->Product8_ao + localB->Product4_f) +
          localB->Product5_f;

        /* Product: '<S19>/Product4' */
        localB->Product4_o = localB->Gain_h[0] * localB->Gain_ie;

        /* Product: '<S19>/Product5' */
        localB->Product5_ji = localB->Gain1_l * localB->Gain_h[2];

        /* Product: '<S19>/Product8' */
        localB->Product8_f = localB->Gain2_e * localB->Gain_h[1];

        /* Sum: '<S19>/Sum' */
        localB->Sum_pcb = (localB->Product4_o + localB->Product8_f) +
          localB->Product5_ji;

        /* Product: '<S20>/Product4' */
        localB->Product4_gi = localB->Gain_h[0] * localB->Gain_ab;

        /* Product: '<S20>/Product5' */
        localB->Product5_my = localB->Gain1_g * localB->Gain_h[1];

        /* Product: '<S20>/Product8' */
        localB->Product8_gb = localB->Gain2_o * localB->Gain_h[2];

        /* Sum: '<S20>/Sum' */
        localB->Sum_ml = (localB->Product4_gi + localB->Product5_my) +
          localB->Product8_gb;

        /* DotProduct: '<S23>/Dot Product' */
        localB->DotProduct = tmp_0;

        /* Sqrt: '<S23>/|r|' */
        localB->r = sqrt(localB->DotProduct);

        /* Product: '<S23>/divide3' */
        localB->divide3[0] = localB->BusConversion_InsertedFor_Point.X_eci[0] /
          localB->r;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
        localB->evxhmurr[0] = localB->divide2[0] - localB->divide3[0];

        /* DotProduct: '<S23>/Dot Product1' */
        u0 = localB->Sum_co[0];
        u1 = localB->evxhmurr[0];
        tmp_0 = u0 * u1;

        /* DotProduct: '<S23>/Dot Product2' */
        u0 = localB->Sum_co[0];
        u1 = localB->Sum_co[0];
        tmp_2 = u0 * u1;

        /* DotProduct: '<S23>/Dot Product3' */
        u0 = localB->Sum_mp[0];
        u1 = localB->Sum_mp[0];
        tmp_3 = u0 * u1;

        /* DotProduct: '<S23>/Dot Product4' */
        u0 = localB->evxhmurr[0];
        u1 = localB->evxhmurr[0];
        tmp_4 = u0 * u1;

        /* DotProduct: '<S23>/Dot Product5' */
        u0 = localB->evxhmurr[0];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[0];
        tmp = u0 * u1;

        /* DotProduct: '<S23>/Dot Product6' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[0];
        u1 = localB->BusConversion_InsertedFor_Point.V_eci[0];
        tmp_1 = u0 * u1;

        /* Product: '<S23>/divide3' */
        localB->divide3[1] = localB->BusConversion_InsertedFor_Point.X_eci[1] /
          localB->r;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
        localB->evxhmurr[1] = localB->divide2[1] - localB->divide3[1];

        /* DotProduct: '<S23>/Dot Product1' */
        u0 = localB->Sum_co[1];
        u1 = localB->evxhmurr[1];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product2' */
        u0 = localB->Sum_co[1];
        u1 = localB->Sum_co[1];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product3' */
        u0 = localB->Sum_mp[1];
        u1 = localB->Sum_mp[1];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product4' */
        u0 = localB->evxhmurr[1];
        u1 = localB->evxhmurr[1];
        tmp_4 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product5' */
        u0 = localB->evxhmurr[1];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[1];
        tmp += u0 * u1;

        /* DotProduct: '<S23>/Dot Product6' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[1];
        u1 = localB->BusConversion_InsertedFor_Point.V_eci[1];
        tmp_1 += u0 * u1;

        /* Product: '<S23>/divide3' */
        localB->divide3[2] = localB->BusConversion_InsertedFor_Point.X_eci[2] /
          localB->r;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
        localB->evxhmurr[2] = localB->divide2[2] - localB->divide3[2];

        /* DotProduct: '<S23>/Dot Product1' */
        u0 = localB->Sum_co[2];
        u1 = localB->evxhmurr[2];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product2' */
        u0 = localB->Sum_co[2];
        u1 = localB->Sum_co[2];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product3' */
        u0 = localB->Sum_mp[2];
        u1 = localB->Sum_mp[2];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product4' */
        u0 = localB->evxhmurr[2];
        u1 = localB->evxhmurr[2];
        tmp_4 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product5' */
        u0 = localB->evxhmurr[2];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[2];
        tmp += u0 * u1;

        /* DotProduct: '<S23>/Dot Product6' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[2];
        u1 = localB->BusConversion_InsertedFor_Point.V_eci[2];
        tmp_1 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product1' */
        localB->DotProduct1_b = tmp_0;

        /* DotProduct: '<S23>/Dot Product2' */
        localB->DotProduct2_m = tmp_2;

        /* DotProduct: '<S23>/Dot Product3' */
        localB->DotProduct3_h4 = tmp_3;

        /* DotProduct: '<S23>/Dot Product4' */
        localB->DotProduct4 = tmp_4;

        /* DotProduct: '<S23>/Dot Product5' */
        localB->DotProduct5 = tmp;

        /* DotProduct: '<S23>/Dot Product6' */
        localB->DotProduct6 = tmp_1;

        /* Sqrt: '<S23>/|n|' */
        localB->n = sqrt(localB->DotProduct2_m);

        /* Sqrt: '<S23>/|e|' */
        localB->e = sqrt(localB->DotProduct4);

        /* Product: '<S23>/Product' */
        localB->Product_k3 = localB->n * localB->e;

        /* Product: '<S23>/Product1' */
        localB->Product1_e = localB->e * localB->r;

        /* Product: '<S23>/divide' */
        localB->divide = localB->Sum_co[0] / localB->n;

        /* MinMax: '<S30>/Min' */
        u1 = localB->divide;
        if (!(u1 <= 1.0)) {
          u1 = 1.0;
        }

        /* MinMax: '<S30>/Min' */
        localB->Min = u1;

        /* MinMax: '<S30>/Max' */
        u1 = localB->Min;
        if ((u1 <= -1.0) || rtIsNaN(u1)) {
          u1 = -1.0;
        }

        /* MinMax: '<S30>/Max' */
        localB->Max = u1;

        /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
        u0 = localB->Max;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
        localB->RAANacosn_in = acos(u0);

        /* Switch: '<S23>/n_j < 0' */
        if (localB->Sum_co[1] >= 0.0) {
          /* Switch: '<S23>/n_j < 0' */
          localB->n_j0 = localB->RAANacosn_in;
        } else {
          /* Sum: '<S23>/Sum' incorporates:
           *  Constant: '<S23>/Constant1'
           */
          localB->Sum_e0 = 6.2831853071795862 - localB->RAANacosn_in;

          /* Switch: '<S23>/n_j < 0' */
          localB->n_j0 = localB->Sum_e0;
        }

        /* Sqrt: '<S23>/|h|' */
        localB->h = sqrt(localB->DotProduct3_h4);

        /* Product: '<S23>/divide1' */
        localB->divide1 = localB->Sum_mp[2] / localB->h;

        /* MinMax: '<S31>/Min' */
        u1 = localB->divide1;
        if (!(u1 <= 1.0)) {
          u1 = 1.0;
        }

        /* MinMax: '<S31>/Min' */
        localB->Min_n = u1;

        /* MinMax: '<S31>/Max' */
        u1 = localB->Min_n;
        if ((u1 <= -1.0) || rtIsNaN(u1)) {
          u1 = -1.0;
        }

        /* MinMax: '<S31>/Max' */
        localB->Max_p = u1;

        /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
        u0 = localB->Max_p;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
        localB->iacosh_kh = acos(u0);

        /* Product: '<S23>/divide4' */
        localB->divide4 = localB->DotProduct1_b / localB->Product_k3;

        /* MinMax: '<S29>/Min' */
        u1 = localB->divide4;
        if (!(u1 <= 1.0)) {
          u1 = 1.0;
        }

        /* MinMax: '<S29>/Min' */
        localB->Min_a = u1;

        /* MinMax: '<S29>/Max' */
        u1 = localB->Min_a;
        if ((u1 <= -1.0) || rtIsNaN(u1)) {
          u1 = -1.0;
        }

        /* MinMax: '<S29>/Max' */
        localB->Max_b = u1;

        /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
        u0 = localB->Max_b;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
        localB->argPacosnene = acos(u0);

        /* Switch: '<S23>/e_k < 0' */
        if (localB->evxhmurr[2] >= 0.0) {
          /* Switch: '<S23>/e_k < 0' */
          localB->e_k0 = localB->argPacosnene;
        } else {
          /* Sum: '<S23>/Sum1' incorporates:
           *  Constant: '<S23>/Constant3'
           */
          localB->Sum1_d0 = 6.2831853071795862 - localB->argPacosnene;

          /* Switch: '<S23>/e_k < 0' */
          localB->e_k0 = localB->Sum1_d0;
        }

        /* Product: '<S23>/divide5' */
        localB->divide5 = localB->DotProduct5 / localB->Product1_e;

        /* MinMax: '<S28>/Min' */
        u1 = localB->divide5;
        if (!(u1 <= 1.0)) {
          u1 = 1.0;
        }

        /* MinMax: '<S28>/Min' */
        localB->Min_ni = u1;

        /* MinMax: '<S28>/Max' */
        u1 = localB->Min_ni;
        if ((u1 <= -1.0) || rtIsNaN(u1)) {
          u1 = -1.0;
        }

        /* MinMax: '<S28>/Max' */
        localB->Max_pd = u1;

        /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
        u0 = localB->Max_pd;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
        localB->nuacoserer = acos(u0);

        /* Switch: '<S23>/r.v < 0' */
        if (localB->DotProduct6 >= 0.0) {
          /* Switch: '<S23>/r.v < 0' */
          localB->rv0 = localB->nuacoserer;
        } else {
          /* Sum: '<S23>/Sum2' incorporates:
           *  Constant: '<S23>/Constant4'
           */
          localB->Sum2_fk = 6.2831853071795862 - localB->nuacoserer;

          /* Switch: '<S23>/r.v < 0' */
          localB->rv0 = localB->Sum2_fk;
        }

        /* Sum: '<S23>/Sum3' */
        localB->Sum3_p = localB->e_k0 + localB->rv0;

        /* Gain: '<S33>/1//2' */
        localB->u2[0] = 0.5 * localB->n_j0;
        localB->u2[1] = 0.5 * localB->iacosh_kh;
        localB->u2[2] = 0.5 * localB->Sum3_p;

        /* Trigonometry: '<S33>/sincos' */
        u0 = localB->u2[0];
        u1 = sin(u0);
        u0 = cos(u0);
        localB->sincos_o1[0] = u1;
        localB->sincos_o2[0] = u0;
        u0 = localB->u2[1];
        u1 = sin(u0);
        u0 = cos(u0);
        localB->sincos_o1[1] = u1;
        localB->sincos_o2[1] = u0;
        u0 = localB->u2[2];
        u1 = sin(u0);
        u0 = cos(u0);
        localB->sincos_o1[2] = u1;
        localB->sincos_o2[2] = u0;

        /* Fcn: '<S33>/q0' */
        localB->q0 = localB->sincos_o2[0] * localB->sincos_o2[1] *
          localB->sincos_o2[2] - localB->sincos_o1[0] * localB->sincos_o2[1] *
          localB->sincos_o1[2];

        /* Product: '<S37>/Product' */
        localB->Product_gh = localB->q0 * localB->q0;

        /* Fcn: '<S33>/q1' */
        localB->q1 = localB->sincos_o2[0] * localB->sincos_o1[1] *
          localB->sincos_o2[2] + localB->sincos_o1[0] * localB->sincos_o1[1] *
          localB->sincos_o1[2];

        /* Product: '<S37>/Product1' */
        localB->Product1_g5 = localB->q1 * localB->q1;

        /* Fcn: '<S33>/q2' */
        localB->q2 = localB->sincos_o1[0] * localB->sincos_o1[1] *
          localB->sincos_o2[2] - localB->sincos_o2[0] * localB->sincos_o1[1] *
          localB->sincos_o1[2];

        /* Product: '<S37>/Product2' */
        localB->Product2_ay = localB->q2 * localB->q2;

        /* Fcn: '<S33>/q3' */
        localB->q3 = localB->sincos_o1[0] * localB->sincos_o2[1] *
          localB->sincos_o2[2] + localB->sincos_o2[0] * localB->sincos_o2[1] *
          localB->sincos_o1[2];

        /* Product: '<S37>/Product3' */
        localB->Product3_o = localB->q3 * localB->q3;

        /* Sum: '<S37>/Sum' */
        localB->Sum_b = ((localB->Product_gh + localB->Product1_g5) +
                         localB->Product2_ay) + localB->Product3_o;

        /* Sqrt: '<S36>/sqrt' */
        localB->sqrt_p = sqrt(localB->Sum_b);

        /* Product: '<S27>/Product' */
        localB->Product_pg = localB->q0 / localB->sqrt_p;

        /* Product: '<S27>/Product1' */
        localB->Product1_c = localB->q1 / localB->sqrt_p;

        /* Product: '<S27>/Product2' */
        localB->Product2_oj = localB->q2 / localB->sqrt_p;

        /* Product: '<S27>/Product3' */
        localB->Product3_ch = localB->q3 / localB->sqrt_p;

        /* Product: '<S49>/Product' */
        localB->Product_a = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* Product: '<S49>/Product1' */
        localB->Product1_hu = localB->UnaryMinus_e * localB->UnaryMinus_e;

        /* Product: '<S49>/Product2' */
        localB->Product2_dr = localB->UnaryMinus1_d * localB->UnaryMinus1_d;

        /* Product: '<S49>/Product3' */
        localB->Product3_do = localB->UnaryMinus2_f * localB->UnaryMinus2_f;

        /* Sum: '<S49>/Sum' */
        localB->Sum_cx = ((localB->Product_a + localB->Product1_hu) +
                          localB->Product2_dr) + localB->Product3_do;

        /* Sqrt: '<S48>/sqrt' */
        localB->sqrt_b = sqrt(localB->Sum_cx);

        /* Product: '<S26>/Product' */
        localB->Product_on = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_b;

        /* Product: '<S45>/Product' */
        localB->Product_ke = localB->Product_on * localB->Product1_c;

        /* Product: '<S26>/Product1' */
        localB->Product1_ar = localB->UnaryMinus_e / localB->sqrt_b;

        /* Product: '<S45>/Product1' */
        localB->Product1_en = localB->Product1_ar * localB->Product_pg;

        /* Product: '<S26>/Product2' */
        localB->Product2_ov = localB->UnaryMinus1_d / localB->sqrt_b;

        /* Product: '<S45>/Product2' */
        localB->Product2_gu = localB->Product2_ov * localB->Product3_ch;

        /* Product: '<S26>/Product3' */
        localB->Product3_hh = localB->UnaryMinus2_f / localB->sqrt_b;

        /* Product: '<S45>/Product3' */
        localB->Product3_hw3 = localB->Product3_hh * localB->Product2_oj;

        /* Sum: '<S45>/Sum' */
        localB->Sum_dh = ((localB->Product_ke + localB->Product1_en) +
                          localB->Product2_gu) - localB->Product3_hw3;

        /* UnaryMinus: '<S24>/Unary Minus' */
        localB->UnaryMinus_eq = -localB->Sum_dh;

        /* Product: '<S46>/Product' */
        localB->Product_orf = localB->Product_on * localB->Product2_oj;

        /* Product: '<S46>/Product1' */
        localB->Product1_gs1 = localB->Product1_ar * localB->Product3_ch;

        /* Product: '<S46>/Product2' */
        localB->Product2_amg = localB->Product2_ov * localB->Product_pg;

        /* Product: '<S46>/Product3' */
        localB->Product3_ou = localB->Product3_hh * localB->Product1_c;

        /* Sum: '<S46>/Sum' */
        localB->Sum_fc = ((localB->Product_orf - localB->Product1_gs1) +
                          localB->Product2_amg) + localB->Product3_ou;

        /* UnaryMinus: '<S24>/Unary Minus1' */
        localB->UnaryMinus1_o = -localB->Sum_fc;

        /* Product: '<S47>/Product' */
        localB->Product_hl = localB->Product_on * localB->Product3_ch;

        /* Product: '<S47>/Product1' */
        localB->Product1_iu = localB->Product1_ar * localB->Product2_oj;

        /* Product: '<S47>/Product2' */
        localB->Product2_m4 = localB->Product2_ov * localB->Product1_c;

        /* Product: '<S47>/Product3' */
        localB->Product3_ax = localB->Product3_hh * localB->Product_pg;

        /* Sum: '<S47>/Sum' */
        localB->Sum_cw = ((localB->Product_hl + localB->Product1_iu) -
                          localB->Product2_m4) + localB->Product3_ax;

        /* UnaryMinus: '<S24>/Unary Minus2' */
        localB->UnaryMinus2_e = -localB->Sum_cw;

        /* Product: '<S44>/Product' */
        localB->Product_e4 = localB->Product_on * localB->Product_pg;

        /* Product: '<S44>/Product1' */
        localB->Product1_o4 = localB->Product1_ar * localB->Product1_c;

        /* Product: '<S44>/Product2' */
        localB->Product2_do = localB->Product2_ov * localB->Product2_oj;

        /* Product: '<S44>/Product3' */
        localB->Product3_dd = localB->Product3_hh * localB->Product3_ch;

        /* Sum: '<S44>/Sum' */
        localB->Sum_bg = ((localB->Product_e4 - localB->Product1_o4) -
                          localB->Product2_do) - localB->Product3_dd;

        /* If: '<S50>/If' */
        if (asbCubeSatACS_ConstB.Abs_m < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
           *  ActionPort: '<S60>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem' */
        } else if (asbCubeSatACS_ConstB.Abs1_g < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S61>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S62>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem2' */
        }

        /* SignalConversion generated from: '<S51>/Dot Product1' */
        localB->TmpSignalConversionAtDotProdu_k[0] = localB->Sum_ah;
        localB->TmpSignalConversionAtDotProdu_k[1] = localB->Sum_pcb;
        localB->TmpSignalConversionAtDotProdu_k[2] = localB->Sum_ml;

        /* Product: '<S127>/Product' */
        localB->Product_pp0 = localB->Sum_bg * localB->Sum_bg;

        /* Product: '<S127>/Product1' */
        localB->Product1_hp = localB->UnaryMinus_eq * localB->UnaryMinus_eq;

        /* Product: '<S127>/Product2' */
        localB->Product2_fv = localB->UnaryMinus1_o * localB->UnaryMinus1_o;

        /* Product: '<S127>/Product3' */
        localB->Product3_k = localB->UnaryMinus2_e * localB->UnaryMinus2_e;

        /* Sum: '<S127>/Sum' */
        localB->Sum_ik = ((localB->Product_pp0 + localB->Product1_hp) +
                          localB->Product2_fv) + localB->Product3_k;

        /* Sqrt: '<S126>/sqrt' */
        localB->sqrt_g = sqrt(localB->Sum_ik);

        /* Product: '<S122>/Product2' */
        localB->Product2_ah = localB->UnaryMinus1_o / localB->sqrt_g;

        /* Product: '<S123>/Product6' */
        localB->Product6_g = localB->Product2_ah * localB->Product2_ah;

        /* Product: '<S122>/Product3' */
        localB->Product3_dn = localB->UnaryMinus2_e / localB->sqrt_g;

        /* Product: '<S123>/Product7' */
        localB->Product7_hr = localB->Product3_dn * localB->Product3_dn;

        /* Sum: '<S123>/Sum3' incorporates:
         *  Constant: '<S123>/Constant'
         */
        localB->Sum3_hf = (0.5 - localB->Product6_g) - localB->Product7_hr;

        /* Gain: '<S123>/Gain2' */
        localB->Gain2_dd = 2.0 * localB->Sum3_hf;

        /* Product: '<S123>/Product8' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product8_b = 0.0 * localB->Gain2_dd;

        /* Product: '<S122>/Product1' */
        localB->Product1_l1 = localB->UnaryMinus_eq / localB->sqrt_g;

        /* Product: '<S123>/Product' */
        localB->Product_co = localB->Product1_l1 * localB->Product2_ah;

        /* Product: '<S122>/Product' */
        localB->Product_ki = localB->Sum_bg / localB->sqrt_g;

        /* Product: '<S123>/Product1' */
        localB->Product1_hh = localB->Product_ki * localB->Product3_dn;

        /* Sum: '<S123>/Sum1' */
        localB->Sum1_ax = localB->Product_co + localB->Product1_hh;

        /* Gain: '<S123>/Gain' */
        localB->Gain_e = 2.0 * localB->Sum1_ax;

        /* Product: '<S123>/Product4' */
        localB->Product4_b = localB->Gain_e;

        /* Product: '<S123>/Product2' */
        localB->Product2_k3 = localB->Product_ki * localB->Product2_ah;

        /* Product: '<S123>/Product3' */
        localB->Product3_oa = localB->Product1_l1 * localB->Product3_dn;

        /* Sum: '<S123>/Sum2' */
        localB->Sum2_ib = localB->Product3_oa - localB->Product2_k3;

        /* Gain: '<S123>/Gain1' */
        localB->Gain1_lm = 2.0 * localB->Sum2_ib;

        /* Product: '<S123>/Product5' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product5_fa = localB->Gain1_lm * 0.0;

        /* Sum: '<S123>/Sum' */
        localB->Sum_mj = (localB->Product8_b + localB->Product4_b) +
          localB->Product5_fa;

        /* Product: '<S124>/Product' */
        localB->Product_i2 = localB->Product1_l1 * localB->Product2_ah;

        /* Product: '<S124>/Product1' */
        localB->Product1_ir = localB->Product_ki * localB->Product3_dn;

        /* Sum: '<S124>/Sum1' */
        localB->Sum1_g = localB->Product_i2 - localB->Product1_ir;

        /* Gain: '<S124>/Gain' */
        localB->Gain_gi = 2.0 * localB->Sum1_g;

        /* Product: '<S124>/Product4' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product4_oz = 0.0 * localB->Gain_gi;

        /* Product: '<S124>/Product6' */
        localB->Product6_gv = localB->Product1_l1 * localB->Product1_l1;

        /* Product: '<S124>/Product7' */
        localB->Product7_i = localB->Product3_dn * localB->Product3_dn;

        /* Sum: '<S124>/Sum3' incorporates:
         *  Constant: '<S124>/Constant'
         */
        localB->Sum3_cr = (0.5 - localB->Product6_gv) - localB->Product7_i;

        /* Gain: '<S124>/Gain2' */
        localB->Gain2_m = 2.0 * localB->Sum3_cr;

        /* Product: '<S124>/Product8' */
        localB->Product8_bm = localB->Gain2_m;

        /* Product: '<S124>/Product2' */
        localB->Product2_ps = localB->Product_ki * localB->Product1_l1;

        /* Product: '<S124>/Product3' */
        localB->Product3_b1 = localB->Product2_ah * localB->Product3_dn;

        /* Sum: '<S124>/Sum2' */
        localB->Sum2_a = localB->Product2_ps + localB->Product3_b1;

        /* Gain: '<S124>/Gain1' */
        localB->Gain1_h = 2.0 * localB->Sum2_a;

        /* Product: '<S124>/Product5' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product5_nv = localB->Gain1_h * 0.0;

        /* Sum: '<S124>/Sum' */
        localB->Sum_ia = (localB->Product4_oz + localB->Product8_bm) +
          localB->Product5_nv;

        /* Product: '<S125>/Product' */
        localB->Product_c2 = localB->Product1_l1 * localB->Product3_dn;

        /* Product: '<S125>/Product1' */
        localB->Product1_om = localB->Product_ki * localB->Product2_ah;

        /* Sum: '<S125>/Sum1' */
        localB->Sum1_h1 = localB->Product_c2 + localB->Product1_om;

        /* Gain: '<S125>/Gain' */
        localB->Gain_lx = 2.0 * localB->Sum1_h1;

        /* Product: '<S125>/Product4' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product4_fe = 0.0 * localB->Gain_lx;

        /* Product: '<S125>/Product2' */
        localB->Product2_gr = localB->Product_ki * localB->Product1_l1;

        /* Product: '<S125>/Product3' */
        localB->Product3_ju = localB->Product2_ah * localB->Product3_dn;

        /* Sum: '<S125>/Sum2' */
        localB->Sum2_h = localB->Product3_ju - localB->Product2_gr;

        /* Gain: '<S125>/Gain1' */
        localB->Gain1_b = 2.0 * localB->Sum2_h;

        /* Product: '<S125>/Product5' */
        localB->Product5_k = localB->Gain1_b;

        /* Product: '<S125>/Product6' */
        localB->Product6_bb = localB->Product1_l1 * localB->Product1_l1;

        /* Product: '<S125>/Product7' */
        localB->Product7_p = localB->Product2_ah * localB->Product2_ah;

        /* Sum: '<S125>/Sum3' incorporates:
         *  Constant: '<S125>/Constant'
         */
        localB->Sum3_n = (0.5 - localB->Product6_bb) - localB->Product7_p;

        /* Gain: '<S125>/Gain2' */
        localB->Gain2_a = 2.0 * localB->Sum3_n;

        /* Product: '<S125>/Product8' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product8_i = localB->Gain2_a * 0.0;

        /* Sum: '<S125>/Sum' */
        localB->Sum_kr = (localB->Product4_fe + localB->Product5_k) +
          localB->Product8_i;

        /* SignalConversion generated from: '<S51>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_j[0] = localB->Sum_mj;
        localB->TmpSignalConversionAtDotProdu_j[1] = localB->Sum_ia;
        localB->TmpSignalConversionAtDotProdu_j[2] = localB->Sum_kr;

        /* DotProduct: '<S51>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u1 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmp_0 = u0 * u1;

        /* DotProduct: '<S51>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u1 = localB->TmpSignalConversionAtDotProdu_k[0];
        tmp_2 = u0 * u1;

        /* DotProduct: '<S51>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_j[0];
        u1 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmp_3 = u0 * u1;

        /* DotProduct: '<S51>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u1 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u1 = localB->TmpSignalConversionAtDotProdu_k[1];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_j[1];
        u1 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u1 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u1 = localB->TmpSignalConversionAtDotProdu_k[2];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_j[2];
        u1 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product3' */
        localB->DotProduct3_o = tmp_0;

        /* DotProduct: '<S51>/Dot Product1' */
        localB->DotProduct1_n = tmp_2;

        /* DotProduct: '<S51>/Dot Product2' */
        localB->DotProduct2_c = tmp_3;

        /* Product: '<S51>/Divide1' */
        localB->Divide1_n = localB->DotProduct1_n * localB->DotProduct2_c;

        /* Sqrt: '<S51>/Sqrt3' */
        localB->Sqrt3_a = sqrt(localB->Divide1_n);

        /* Product: '<S51>/Divide' */
        localB->Divide_m = localB->DotProduct3_o / localB->Sqrt3_a;

        /* Bias: '<S51>/Bias' */
        localB->Bias_f = localB->Divide_m + -1.0;

        /* Abs: '<S51>/Abs' */
        localB->Abs_o = fabs(localB->Bias_f);

        /* Bias: '<S51>/Bias1' */
        localB->Bias1_p = localB->Divide_m + 1.0;

        /* Abs: '<S51>/Abs1' */
        localB->Abs1_o = fabs(localB->Bias1_p);

        /* If: '<S51>/If' */
        if (localB->Abs_o < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
           *  ActionPort: '<S63>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_o);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
        } else if (localB->Abs1_o < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S64>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_o);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S65>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_o);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S52>/Compare' incorporates:
         *  Constant: '<S52>/Constant'
         */
        localB->Compare_f = (localB->Merge_k != 0.0);

        /* RelationalOperator: '<S53>/Compare' incorporates:
         *  Constant: '<S53>/Constant'
         */
        localB->Compare_l = (localB->Merge_o != 0.0);

        /* Logic: '<S12>/OR' */
        localB->OR_c = (localB->Compare_f || localB->Compare_l);

        /* DotProduct: '<S56>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u1 = 0.0 * u0;

        /* DotProduct: '<S56>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        tmp_2 = tmp_0 * u0;

        /* DotProduct: '<S77>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        tmp_3 = 0.0 * u0;

        /* DotProduct: '<S77>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        tmp_4 = tmp_0 * u0;

        /* DotProduct: '<S56>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u1 += 0.0 * u0;

        /* DotProduct: '<S56>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        tmp_2 += tmp_0 * u0;

        /* DotProduct: '<S77>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        tmp_3 += 0.0 * u0;

        /* DotProduct: '<S77>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        tmp_4 += tmp_0 * u0;

        /* DotProduct: '<S56>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u1 += u0;

        /* DotProduct: '<S56>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        tmp_2 += tmp_0 * u0;

        /* DotProduct: '<S77>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        tmp_3 += u0;

        /* DotProduct: '<S77>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        tmp_4 += tmp_0 * u0;

        /* DotProduct: '<S56>/Dot Product3' */
        localB->DotProduct3_n = u1;

        /* DotProduct: '<S56>/Dot Product2' */
        localB->DotProduct2_k = tmp_2;

        /* Product: '<S56>/Divide1' */
        localB->Divide1_nh = asbCubeSatACS_ConstB.DotProduct1_hl *
          localB->DotProduct2_k;

        /* Sqrt: '<S56>/Sqrt3' */
        localB->Sqrt3_n = sqrt(localB->Divide1_nh);

        /* Sum: '<S56>/Add2' */
        localB->Add2_c = localB->DotProduct3_n + localB->Sqrt3_n;

        /* Product: '<S90>/Product' */
        localB->Product_e0 = localB->Add2_c * localB->Add2_c;

        /* DotProduct: '<S77>/Dot Product3' */
        localB->DotProduct3_b = tmp_3;

        /* DotProduct: '<S77>/Dot Product2' */
        localB->DotProduct2_n = tmp_4;

        /* Product: '<S77>/Divide1' */
        localB->Divide1_nj = asbCubeSatACS_ConstB.DotProduct1_p *
          localB->DotProduct2_n;

        /* Sqrt: '<S77>/Sqrt3' */
        localB->Sqrt3_ko = sqrt(localB->Divide1_nj);

        /* Product: '<S77>/Divide' */
        localB->Divide_l = localB->DotProduct3_b / localB->Sqrt3_ko;

        /* Bias: '<S77>/Bias' */
        localB->Bias_a = localB->Divide_l + -1.0;

        /* Abs: '<S77>/Abs' */
        localB->Abs_m = fabs(localB->Bias_a);

        /* Bias: '<S77>/Bias1' */
        localB->Bias1_m = localB->Divide_l + 1.0;

        /* Abs: '<S77>/Abs1' */
        localB->Abs1_m = fabs(localB->Bias1_m);

        /* If: '<S77>/If' */
        if (localB->Abs_m < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
           *  ActionPort: '<S83>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_a);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
        } else if (localB->Abs1_m < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S84>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_a);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S85>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_a);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S78>/Compare' incorporates:
         *  Constant: '<S78>/Constant'
         */
        localB->Compare_fr = (localB->Merge_a != -1.0);

        /* Switch: '<S56>/is 180deg Rot' */
        if (localB->Compare_fr) {
          /* Product: '<S82>/j x i' incorporates:
           *  Constant: '<S7>/primaryAlignment'
           */
          localB->jxi_l = 0.0 * localB->Sum_ah;

          /* Product: '<S82>/i x k' incorporates:
           *  Constant: '<S7>/primaryAlignment'
           */
          localB->ixk_l = 0.0 * localB->Sum_ml;

          /* Product: '<S82>/k x j' */
          localB->kxj_b = localB->Sum_pcb;

          /* Product: '<S81>/i x j' incorporates:
           *  Constant: '<S7>/primaryAlignment'
           */
          localB->ixj_j = 0.0 * localB->Sum_pcb;

          /* Product: '<S81>/k x i' */
          localB->kxi_o = localB->Sum_ah;

          /* Product: '<S81>/j x k' incorporates:
           *  Constant: '<S7>/primaryAlignment'
           */
          localB->jxk_hle = 0.0 * localB->Sum_ml;

          /* Sum: '<S76>/Sum' */
          localB->Sum_do[0] = localB->jxk_hle - localB->kxj_b;
          localB->Sum_do[1] = localB->kxi_o - localB->ixk_l;
          localB->Sum_do[2] = localB->ixj_j - localB->jxi_l;

          /* Switch: '<S56>/is 180deg Rot' */
          localB->is180degRot_p[0] = localB->Sum_do[0];
          localB->is180degRot_p[1] = localB->Sum_do[1];
          localB->is180degRot_p[2] = localB->Sum_do[2];
        } else {
          /* Switch: '<S56>/is 180deg Rot' */
          localB->is180degRot_p[0] = asbCubeSatACS_ConstB.Sum_c[0];
          localB->is180degRot_p[1] = asbCubeSatACS_ConstB.Sum_c[1];
          localB->is180degRot_p[2] = asbCubeSatACS_ConstB.Sum_c[2];
        }

        /* Product: '<S90>/Product1' */
        localB->Product1_k = localB->is180degRot_p[0] * localB->is180degRot_p[0];

        /* Product: '<S90>/Product2' */
        localB->Product2_hd = localB->is180degRot_p[1] * localB->is180degRot_p[1];

        /* Product: '<S90>/Product3' */
        localB->Product3_hx = localB->is180degRot_p[2] * localB->is180degRot_p[2];

        /* Sum: '<S90>/Sum' */
        localB->Sum_p1 = ((localB->Product_e0 + localB->Product1_k) +
                          localB->Product2_hd) + localB->Product3_hx;

        /* Sqrt: '<S89>/sqrt' */
        localB->sqrt_e5 = sqrt(localB->Sum_p1);

        /* Product: '<S80>/Product' */
        localB->Product_fd = localB->Add2_c / localB->sqrt_e5;

        /* Product: '<S114>/j x k' */
        localB->jxk_i = localB->Sum_pcb * localB->Sum_kr;

        /* Product: '<S114>/k x i' */
        localB->kxi_p = localB->Sum_ml * localB->Sum_mj;

        /* Product: '<S114>/i x j' */
        localB->ixj_gk = localB->Sum_ah * localB->Sum_ia;

        /* Product: '<S115>/k x j' */
        localB->kxj_n = localB->Sum_ml * localB->Sum_ia;

        /* Product: '<S115>/i x k' */
        localB->ixk_hg = localB->Sum_ah * localB->Sum_kr;

        /* Product: '<S115>/j x i' */
        localB->jxi_dy = localB->Sum_pcb * localB->Sum_mj;

        /* Sum: '<S112>/Sum' */
        localB->Sum_ab[0] = localB->jxk_i - localB->kxj_n;
        localB->Sum_ab[1] = localB->kxi_p - localB->ixk_hg;
        localB->Sum_ab[2] = localB->ixj_gk - localB->jxi_dy;

        /* Product: '<S116>/j x k' */
        localB->jxk_h = localB->Sum_ab[1] * localB->Sum_ml;

        /* Product: '<S116>/k x i' */
        localB->kxi_f2 = localB->Sum_ab[2] * localB->Sum_ah;

        /* Product: '<S116>/i x j' */
        localB->ixj_e = localB->Sum_ab[0] * localB->Sum_pcb;

        /* Product: '<S117>/k x j' */
        localB->kxj_op = localB->Sum_ab[2] * localB->Sum_pcb;

        /* Product: '<S117>/i x k' */
        localB->ixk_k = localB->Sum_ab[0] * localB->Sum_ml;

        /* Product: '<S117>/j x i' */
        localB->jxi_g0 = localB->Sum_ab[1] * localB->Sum_ah;

        /* Sum: '<S113>/Sum' */
        localB->Sum_gf[0] = localB->jxk_h - localB->kxj_op;
        localB->Sum_gf[1] = localB->kxi_f2 - localB->ixk_k;
        localB->Sum_gf[2] = localB->ixj_e - localB->jxi_g0;

        /* Product: '<S80>/Product2' */
        localB->Product2_jl = localB->is180degRot_p[1] / localB->sqrt_e5;

        /* Product: '<S75>/Product' */
        localB->Product_l = localB->Product_fd * localB->Product_fd;

        /* Product: '<S80>/Product1' */
        localB->Product1_ex = localB->is180degRot_p[0] / localB->sqrt_e5;

        /* Product: '<S75>/Product1' */
        localB->Product1_ef = localB->Product1_ex * localB->Product1_ex;

        /* Product: '<S75>/Product2' */
        localB->Product2_b = localB->Product2_jl * localB->Product2_jl;

        /* Product: '<S80>/Product3' */
        localB->Product3_l = localB->is180degRot_p[2] / localB->sqrt_e5;

        /* Product: '<S75>/Product3' */
        localB->Product3_hv = localB->Product3_l * localB->Product3_l;

        /* Sum: '<S75>/Sum' */
        localB->Sum_j3 = ((localB->Product_l + localB->Product1_ef) +
                          localB->Product2_b) + localB->Product3_hv;

        /* Sqrt: '<S74>/sqrt' */
        localB->sqrt_bh = sqrt(localB->Sum_j3);

        /* Product: '<S70>/Product2' */
        localB->Product2_g5 = localB->Product2_jl / localB->sqrt_bh;

        /* Product: '<S71>/Product6' */
        localB->Product6_f = localB->Product2_g5 * localB->Product2_g5;

        /* Product: '<S70>/Product3' */
        localB->Product3_fb = localB->Product3_l / localB->sqrt_bh;

        /* Product: '<S71>/Product7' */
        localB->Product7_d = localB->Product3_fb * localB->Product3_fb;

        /* Sum: '<S71>/Sum3' incorporates:
         *  Constant: '<S71>/Constant'
         */
        localB->Sum3_dm = (0.5 - localB->Product6_f) - localB->Product7_d;

        /* Gain: '<S71>/Gain2' */
        localB->Gain2_mk = 2.0 * localB->Sum3_dm;

        /* Product: '<S71>/Product8' */
        localB->Product8_pc = localB->Sum_gf[0] * localB->Gain2_mk;

        /* Product: '<S70>/Product1' */
        localB->Product1_o5 = localB->Product1_ex / localB->sqrt_bh;

        /* Product: '<S71>/Product' */
        localB->Product_ak = localB->Product1_o5 * localB->Product2_g5;

        /* Product: '<S70>/Product' */
        localB->Product_im = localB->Product_fd / localB->sqrt_bh;

        /* Product: '<S71>/Product1' */
        localB->Product1_jv = localB->Product_im * localB->Product3_fb;

        /* Sum: '<S71>/Sum1' */
        localB->Sum1_jd = localB->Product_ak + localB->Product1_jv;

        /* Gain: '<S71>/Gain' */
        localB->Gain_bh = 2.0 * localB->Sum1_jd;

        /* Product: '<S71>/Product4' */
        localB->Product4_j = localB->Gain_bh * localB->Sum_gf[1];

        /* Product: '<S71>/Product2' */
        localB->Product2_ls = localB->Product_im * localB->Product2_g5;

        /* Product: '<S71>/Product3' */
        localB->Product3_kc = localB->Product1_o5 * localB->Product3_fb;

        /* Sum: '<S71>/Sum2' */
        localB->Sum2_d4 = localB->Product3_kc - localB->Product2_ls;

        /* Gain: '<S71>/Gain1' */
        localB->Gain1_a = 2.0 * localB->Sum2_d4;

        /* Product: '<S71>/Product5' */
        localB->Product5_jf = localB->Gain1_a * localB->Sum_gf[2];

        /* Sum: '<S71>/Sum' */
        localB->Sum_ev = (localB->Product8_pc + localB->Product4_j) +
          localB->Product5_jf;

        /* Product: '<S72>/Product' */
        localB->Product_j = localB->Product1_o5 * localB->Product2_g5;

        /* Product: '<S72>/Product1' */
        localB->Product1_bo = localB->Product_im * localB->Product3_fb;

        /* Sum: '<S72>/Sum1' */
        localB->Sum1_cy = localB->Product_j - localB->Product1_bo;

        /* Gain: '<S72>/Gain' */
        localB->Gain_n4 = 2.0 * localB->Sum1_cy;

        /* Product: '<S72>/Product4' */
        localB->Product4_mx = localB->Sum_gf[0] * localB->Gain_n4;

        /* Product: '<S72>/Product6' */
        localB->Product6_mq = localB->Product1_o5 * localB->Product1_o5;

        /* Product: '<S72>/Product7' */
        localB->Product7_cs = localB->Product3_fb * localB->Product3_fb;

        /* Sum: '<S72>/Sum3' incorporates:
         *  Constant: '<S72>/Constant'
         */
        localB->Sum3_g = (0.5 - localB->Product6_mq) - localB->Product7_cs;

        /* Gain: '<S72>/Gain2' */
        localB->Gain2_g = 2.0 * localB->Sum3_g;

        /* Product: '<S72>/Product8' */
        localB->Product8_cw = localB->Gain2_g * localB->Sum_gf[1];

        /* Product: '<S72>/Product2' */
        localB->Product2_a0 = localB->Product_im * localB->Product1_o5;

        /* Product: '<S72>/Product3' */
        localB->Product3_a4 = localB->Product2_g5 * localB->Product3_fb;

        /* Sum: '<S72>/Sum2' */
        localB->Sum2_j = localB->Product2_a0 + localB->Product3_a4;

        /* Gain: '<S72>/Gain1' */
        localB->Gain1_bl = 2.0 * localB->Sum2_j;

        /* Product: '<S72>/Product5' */
        localB->Product5_ge = localB->Gain1_bl * localB->Sum_gf[2];

        /* Sum: '<S72>/Sum' */
        localB->Sum_ow = (localB->Product4_mx + localB->Product8_cw) +
          localB->Product5_ge;

        /* Product: '<S73>/Product' */
        localB->Product_b3 = localB->Product1_o5 * localB->Product3_fb;

        /* Product: '<S73>/Product1' */
        localB->Product1_ph = localB->Product_im * localB->Product2_g5;

        /* Sum: '<S73>/Sum1' */
        localB->Sum1_b2 = localB->Product_b3 + localB->Product1_ph;

        /* Gain: '<S73>/Gain' */
        localB->Gain_lj = 2.0 * localB->Sum1_b2;

        /* Product: '<S73>/Product4' */
        localB->Product4_pw = localB->Sum_gf[0] * localB->Gain_lj;

        /* Product: '<S73>/Product2' */
        localB->Product2_cw = localB->Product_im * localB->Product1_o5;

        /* Product: '<S73>/Product3' */
        localB->Product3_ix = localB->Product2_g5 * localB->Product3_fb;

        /* Sum: '<S73>/Sum2' */
        localB->Sum2_dn = localB->Product3_ix - localB->Product2_cw;

        /* Gain: '<S73>/Gain1' */
        localB->Gain1_lm3 = 2.0 * localB->Sum2_dn;

        /* Product: '<S73>/Product5' */
        localB->Product5_jz = localB->Gain1_lm3 * localB->Sum_gf[1];

        /* Product: '<S73>/Product6' */
        localB->Product6_mo = localB->Product1_o5 * localB->Product1_o5;

        /* Product: '<S73>/Product7' */
        localB->Product7_mi = localB->Product2_g5 * localB->Product2_g5;

        /* Sum: '<S73>/Sum3' incorporates:
         *  Constant: '<S73>/Constant'
         */
        localB->Sum3_al = (0.5 - localB->Product6_mo) - localB->Product7_mi;

        /* Gain: '<S73>/Gain2' */
        localB->Gain2_pg = 2.0 * localB->Sum3_al;

        /* Product: '<S73>/Product8' */
        localB->Product8_bz = localB->Gain2_pg * localB->Sum_gf[2];

        /* Sum: '<S73>/Sum' */
        localB->Sum_on = (localB->Product4_pw + localB->Product5_jz) +
          localB->Product8_bz;

        /* SignalConversion generated from: '<S92>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_c[0] = localB->Sum_ev;
        localB->TmpSignalConversionAtDotProdu_c[1] = localB->Sum_ow;
        localB->TmpSignalConversionAtDotProdu_c[2] = localB->Sum_on;

        /* DotProduct: '<S92>/Dot Product3' incorporates:
         *  Sum: '<S107>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_c[0];
        u1 = asbCubeSatACS_ConstB.Sum_e[0] * u0;

        /* DotProduct: '<S92>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_c[0];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_c[0];
        tmp_2 = u0 * tmp_0;

        /* DotProduct: '<S92>/Dot Product3' incorporates:
         *  Sum: '<S107>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_c[1];
        u1 += asbCubeSatACS_ConstB.Sum_e[1] * u0;

        /* DotProduct: '<S92>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_c[1];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_c[1];
        tmp_2 += u0 * tmp_0;

        /* DotProduct: '<S92>/Dot Product3' incorporates:
         *  Sum: '<S107>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_c[2];
        u1 += asbCubeSatACS_ConstB.Sum_e[2] * u0;

        /* DotProduct: '<S92>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_c[2];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_c[2];
        tmp_2 += u0 * tmp_0;

        /* DotProduct: '<S92>/Dot Product3' */
        localB->DotProduct3_m = u1;

        /* DotProduct: '<S92>/Dot Product2' */
        localB->DotProduct2_ck = tmp_2;

        /* Product: '<S92>/Divide1' */
        localB->Divide1_dp = asbCubeSatACS_ConstB.DotProduct1_b *
          localB->DotProduct2_ck;

        /* Sqrt: '<S92>/Sqrt3' */
        localB->Sqrt3_av = sqrt(localB->Divide1_dp);

        /* Product: '<S92>/Divide' */
        localB->Divide_f = localB->DotProduct3_m / localB->Sqrt3_av;

        /* Bias: '<S92>/Bias' */
        localB->Bias_c = localB->Divide_f + -1.0;

        /* Abs: '<S92>/Abs' */
        localB->Abs_k = fabs(localB->Bias_c);

        /* Bias: '<S92>/Bias1' */
        localB->Bias1_fx = localB->Divide_f + 1.0;

        /* Abs: '<S92>/Abs1' */
        localB->Abs1_md = fabs(localB->Bias1_fx);

        /* If: '<S92>/If' */
        if (localB->Abs_k < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
           *  ActionPort: '<S98>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_di);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem' */
        } else if (localB->Abs1_md < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S99>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_di);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S100>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_di);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem2' */
        }

        /* Switch: '<S12>/Switch' */
        if (localB->OR_c) {
          /* Switch: '<S12>/Switch' */
          localB->Switch_p[0] = localB->Product_fd;
          localB->Switch_p[1] = localB->Product1_ex;
          localB->Switch_p[2] = localB->Product2_jl;
          localB->Switch_p[3] = localB->Product3_l;
        } else {
          /* RelationalOperator: '<S93>/Compare' incorporates:
           *  Constant: '<S93>/Constant'
           */
          localB->Compare_b = (localB->Merge_di != -1.0);

          /* Switch: '<S57>/is 180deg Rot' */
          if (localB->Compare_b) {
            /* Product: '<S97>/j x i' */
            localB->jxi_di = asbCubeSatACS_ConstB.Sum_e[1] * localB->Sum_ev;

            /* Product: '<S97>/i x k' */
            localB->ixk_i = asbCubeSatACS_ConstB.Sum_e[0] * localB->Sum_on;

            /* Product: '<S97>/k x j' */
            localB->kxj_eu = asbCubeSatACS_ConstB.Sum_e[2] * localB->Sum_ow;

            /* Product: '<S96>/i x j' */
            localB->ixj_h = asbCubeSatACS_ConstB.Sum_e[0] * localB->Sum_ow;

            /* Product: '<S96>/k x i' */
            localB->kxi_k = asbCubeSatACS_ConstB.Sum_e[2] * localB->Sum_ev;

            /* Product: '<S96>/j x k' */
            localB->jxk_hl = asbCubeSatACS_ConstB.Sum_e[1] * localB->Sum_on;

            /* Sum: '<S91>/Sum' */
            localB->Sum_gh[0] = localB->jxk_hl - localB->kxj_eu;
            localB->Sum_gh[1] = localB->kxi_k - localB->ixk_i;
            localB->Sum_gh[2] = localB->ixj_h - localB->jxi_di;

            /* Switch: '<S57>/is 180deg Rot' */
            localB->is180degRot_o[0] = localB->Sum_gh[0];
            localB->is180degRot_o[1] = localB->Sum_gh[1];
            localB->is180degRot_o[2] = localB->Sum_gh[2];
          } else {
            /* Switch: '<S57>/is 180deg Rot' */
            localB->is180degRot_o[0] = asbCubeSatACS_ConstB.Sum_ij[0];
            localB->is180degRot_o[1] = asbCubeSatACS_ConstB.Sum_ij[1];
            localB->is180degRot_o[2] = asbCubeSatACS_ConstB.Sum_ij[2];
          }

          /* Product: '<S105>/Product3' */
          localB->Product3_fl = localB->is180degRot_o[2] * localB->
            is180degRot_o[2];

          /* Product: '<S105>/Product2' */
          localB->Product2_jr = localB->is180degRot_o[1] * localB->
            is180degRot_o[1];

          /* Product: '<S105>/Product1' */
          localB->Product1_ig = localB->is180degRot_o[0] * localB->
            is180degRot_o[0];

          /* DotProduct: '<S57>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_c[0];
          u1 = localB->TmpSignalConversionAtDotProdu_c[0];
          tmp_0 = u0 * u1;

          /* DotProduct: '<S57>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_c[0];
          tmp_2 = asbCubeSatACS_ConstB.Sum_e[0] * u0;

          /* DotProduct: '<S57>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_c[1];
          u1 = localB->TmpSignalConversionAtDotProdu_c[1];
          tmp_0 += u0 * u1;

          /* DotProduct: '<S57>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_c[1];
          tmp_2 += asbCubeSatACS_ConstB.Sum_e[1] * u0;

          /* DotProduct: '<S57>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_c[2];
          u1 = localB->TmpSignalConversionAtDotProdu_c[2];
          tmp_0 += u0 * u1;

          /* DotProduct: '<S57>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_c[2];
          tmp_2 += asbCubeSatACS_ConstB.Sum_e[2] * u0;

          /* DotProduct: '<S57>/Dot Product2' */
          localB->DotProduct2_ci = tmp_0;

          /* Product: '<S57>/Divide1' */
          localB->Divide1_nv = asbCubeSatACS_ConstB.DotProduct1_d *
            localB->DotProduct2_ci;

          /* Sqrt: '<S57>/Sqrt3' */
          localB->Sqrt3_m = sqrt(localB->Divide1_nv);

          /* DotProduct: '<S57>/Dot Product3' */
          localB->DotProduct3_a = tmp_2;

          /* Sum: '<S57>/Add2' */
          localB->Add2_e = localB->DotProduct3_a + localB->Sqrt3_m;

          /* Product: '<S105>/Product' */
          localB->Product_f4 = localB->Add2_e * localB->Add2_e;

          /* Sum: '<S105>/Sum' */
          localB->Sum_gz = ((localB->Product_f4 + localB->Product1_ig) +
                            localB->Product2_jr) + localB->Product3_fl;

          /* Sqrt: '<S104>/sqrt' */
          localB->sqrt_c = sqrt(localB->Sum_gz);

          /* Product: '<S95>/Product3' */
          localB->Product3_md = localB->is180degRot_o[2] / localB->sqrt_c;

          /* Product: '<S66>/Product3' */
          localB->Product3_e5 = localB->Product3_l * localB->Product3_md;

          /* Product: '<S95>/Product2' */
          localB->Product2_pn = localB->is180degRot_o[1] / localB->sqrt_c;

          /* Product: '<S66>/Product2' */
          localB->Product2_iy = localB->Product2_jl * localB->Product2_pn;

          /* Product: '<S95>/Product1' */
          localB->Product1_di = localB->is180degRot_o[0] / localB->sqrt_c;

          /* Product: '<S66>/Product1' */
          localB->Product1_g4 = localB->Product1_ex * localB->Product1_di;

          /* Product: '<S95>/Product' */
          localB->Product_hb = localB->Add2_e / localB->sqrt_c;

          /* Product: '<S66>/Product' */
          localB->Product_ek = localB->Product_fd * localB->Product_hb;

          /* Sum: '<S66>/Sum' */
          localB->Sum_cu = ((localB->Product_ek - localB->Product1_g4) -
                            localB->Product2_iy) - localB->Product3_e5;

          /* Product: '<S67>/Product3' */
          localB->Product3_g = localB->Product3_l * localB->Product2_pn;

          /* Product: '<S67>/Product2' */
          localB->Product2_gy = localB->Product2_jl * localB->Product3_md;

          /* Product: '<S67>/Product1' */
          localB->Product1_kh = localB->Product1_ex * localB->Product_hb;

          /* Product: '<S67>/Product' */
          localB->Product_p5 = localB->Product_fd * localB->Product1_di;

          /* Sum: '<S67>/Sum' */
          localB->Sum_od = ((localB->Product_p5 + localB->Product1_kh) +
                            localB->Product2_gy) - localB->Product3_g;

          /* Product: '<S68>/Product3' */
          localB->Product3_mq = localB->Product3_l * localB->Product1_di;

          /* Product: '<S68>/Product2' */
          localB->Product2_o4z = localB->Product2_jl * localB->Product_hb;

          /* Product: '<S68>/Product1' */
          localB->Product1_iw = localB->Product1_ex * localB->Product3_md;

          /* Product: '<S68>/Product' */
          localB->Product_hu = localB->Product_fd * localB->Product2_pn;

          /* Sum: '<S68>/Sum' */
          localB->Sum_krr = ((localB->Product_hu - localB->Product1_iw) +
                             localB->Product2_o4z) + localB->Product3_mq;

          /* Product: '<S69>/Product3' */
          localB->Product3_ics = localB->Product3_l * localB->Product_hb;

          /* Product: '<S69>/Product2' */
          localB->Product2_au = localB->Product2_jl * localB->Product1_di;

          /* Product: '<S69>/Product1' */
          localB->Product1_a0 = localB->Product1_ex * localB->Product2_pn;

          /* Product: '<S69>/Product' */
          localB->Product_nm = localB->Product_fd * localB->Product3_md;

          /* Sum: '<S69>/Sum' */
          localB->Sum_mi = ((localB->Product_nm + localB->Product1_a0) -
                            localB->Product2_au) + localB->Product3_ics;

          /* Switch: '<S12>/Switch' */
          localB->Switch_p[0] = localB->Sum_cu;
          localB->Switch_p[1] = localB->Sum_od;
          localB->Switch_p[2] = localB->Sum_krr;
          localB->Switch_p[3] = localB->Sum_mi;
        }

        /* Merge: '<S3>/ Merge 1' incorporates:
         *  SignalConversion generated from: '<S5>/cmd_q_b2tgt'
         */
        localB->cmd_q_b2tgt[0] = localB->Switch_p[0];
        localB->cmd_q_b2tgt[1] = localB->Switch_p[1];
        localB->cmd_q_b2tgt[2] = localB->Switch_p[2];
        localB->cmd_q_b2tgt[3] = localB->Switch_p[3];

        /* Product: '<S135>/Product' */
        localB->Product_mx = localB->Switch_p[0] * localB->Switch_p[0];

        /* Product: '<S135>/Product1' */
        localB->Product1_fz = localB->Switch_p[1] * localB->Switch_p[1];

        /* Product: '<S135>/Product2' */
        localB->Product2_p4 = localB->Switch_p[2] * localB->Switch_p[2];

        /* Product: '<S135>/Product3' */
        localB->Product3_kb = localB->Switch_p[3] * localB->Switch_p[3];

        /* Sum: '<S135>/Sum' */
        localB->Sum_ka = ((localB->Product_mx + localB->Product1_fz) +
                          localB->Product2_p4) + localB->Product3_kb;

        /* Sqrt: '<S134>/sqrt' */
        localB->sqrt_j = sqrt(localB->Sum_ka);

        /* Product: '<S129>/Product' */
        localB->Product_j5 = localB->Switch_p[0] / localB->sqrt_j;

        /* Product: '<S129>/Product1' */
        localB->Product1_ik = localB->Switch_p[1] / localB->sqrt_j;

        /* Product: '<S129>/Product2' */
        localB->Product2_ev = localB->Switch_p[2] / localB->sqrt_j;

        /* Product: '<S129>/Product3' */
        localB->Product3_fq1 = localB->Switch_p[3] / localB->sqrt_j;

        /* Fcn: '<S9>/fcn3' */
        localB->fcn3_l = (localB->Product1_ik * localB->Product3_fq1 +
                          localB->Product_j5 * localB->Product2_ev) * 2.0;

        /* If: '<S130>/If' */
        if (localB->fcn3_l > 1.0) {
          /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem' incorporates:
           *  ActionPort: '<S131>/Action Port'
           */
          /* Merge: '<S130>/Merge' incorporates:
           *  Constant: '<S131>/Constant'
           */
          localB->Merge_c = 1.0;

          /* End of Outputs for SubSystem: '<S130>/If Action Subsystem' */
        } else if (localB->fcn3_l < -1.0) {
          /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S132>/Action Port'
           */
          /* Merge: '<S130>/Merge' incorporates:
           *  Constant: '<S132>/Constant'
           */
          localB->Merge_c = 1.0;

          /* End of Outputs for SubSystem: '<S130>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S133>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(localB->fcn3_l, &localB->Merge_c);

          /* End of Outputs for SubSystem: '<S130>/If Action Subsystem2' */
        }

        /* Fcn: '<S9>/fcn1' */
        localB->fcn1_l = (localB->Product2_ev * localB->Product3_fq1 -
                          localB->Product_j5 * localB->Product1_ik) * -2.0;

        /* Fcn: '<S9>/fcn2' */
        localB->fcn2_k = ((localB->Product_j5 * localB->Product_j5 -
                           localB->Product1_ik * localB->Product1_ik) -
                          localB->Product2_ev * localB->Product2_ev) +
          localB->Product3_fq1 * localB->Product3_fq1;

        /* Trigonometry: '<S128>/Trigonometric Function1' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[0] = rt_atan2d_snf(localB->fcn1_l, localB->fcn2_k);

        /* Fcn: '<S9>/fcn4' */
        localB->fcn4_e = (localB->Product1_ik * localB->Product2_ev -
                          localB->Product_j5 * localB->Product3_fq1) * -2.0;

        /* Fcn: '<S9>/fcn5' */
        localB->fcn5_p = ((localB->Product_j5 * localB->Product_j5 +
                           localB->Product1_ik * localB->Product1_ik) -
                          localB->Product2_ev * localB->Product2_ev) -
          localB->Product3_fq1 * localB->Product3_fq1;

        /* Trigonometry: '<S128>/Trigonometric Function3' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[2] = rt_atan2d_snf(localB->fcn4_e, localB->fcn5_p);

        /* Trigonometry: '<S128>/trigFcn' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        u0 = localB->Merge_c;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        localB->PointingCmd[1] = asin(u0);
      }
      break;

     case asbCubeSatACS_IN_Sun:
      /* During 'Sun': '<S3>:49' */
      if (*rtu_AttitudeMode == 1.0) {
        /* Transition: '<S3>:55' */
        localB->ControlMode = 1.0;
        localDW->is_On = asbCubeSatACS_IN_Transition;
      } else {
        /* Product: '<S155>/Product' */
        localB->Product = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* UnaryMinus: '<S137>/Unary Minus' */
        localB->UnaryMinus = -localB->BusConversion_InsertedFor_Point.q_eci2b[1];

        /* Product: '<S155>/Product1' */
        localB->Product1 = localB->UnaryMinus * localB->UnaryMinus;

        /* UnaryMinus: '<S137>/Unary Minus1' */
        localB->UnaryMinus1 = -localB->BusConversion_InsertedFor_Point.q_eci2b[2];

        /* Product: '<S155>/Product2' */
        localB->Product2 = localB->UnaryMinus1 * localB->UnaryMinus1;

        /* UnaryMinus: '<S137>/Unary Minus2' */
        localB->UnaryMinus2 = -localB->BusConversion_InsertedFor_Point.q_eci2b[3];

        /* Product: '<S155>/Product3' */
        localB->Product3 = localB->UnaryMinus2 * localB->UnaryMinus2;

        /* Sum: '<S155>/Sum' */
        localB->Sum_p = ((localB->Product + localB->Product1) + localB->Product2)
          + localB->Product3;

        /* Sqrt: '<S154>/sqrt' */
        localB->sqrt_f = sqrt(localB->Sum_p);

        /* Product: '<S153>/Product' */
        localB->Product_h = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_f;

        /* Product: '<S151>/Product' */
        localB->Product_g = localB->Product_h * localB->Product_h;

        /* Product: '<S153>/Product1' */
        localB->Product1_g = localB->UnaryMinus / localB->sqrt_f;

        /* UnaryMinus: '<S152>/Unary Minus' */
        localB->UnaryMinus_l = -localB->Product1_g;

        /* Product: '<S151>/Product1' */
        localB->Product1_gj = localB->UnaryMinus_l * localB->UnaryMinus_l;

        /* Product: '<S153>/Product2' */
        localB->Product2_e = localB->UnaryMinus1 / localB->sqrt_f;

        /* UnaryMinus: '<S152>/Unary Minus1' */
        localB->UnaryMinus1_j = -localB->Product2_e;

        /* Product: '<S151>/Product2' */
        localB->Product2_o = localB->UnaryMinus1_j * localB->UnaryMinus1_j;

        /* Product: '<S153>/Product3' */
        localB->Product3_e = localB->UnaryMinus2 / localB->sqrt_f;

        /* UnaryMinus: '<S152>/Unary Minus2' */
        localB->UnaryMinus2_m = -localB->Product3_e;

        /* Product: '<S151>/Product3' */
        localB->Product3_d = localB->UnaryMinus2_m * localB->UnaryMinus2_m;

        /* Sum: '<S151>/Sum' */
        localB->Sum_n = ((localB->Product_g + localB->Product1_gj) +
                         localB->Product2_o) + localB->Product3_d;

        /* Sqrt: '<S150>/sqrt' */
        localB->sqrt_o = sqrt(localB->Sum_n);

        /* Product: '<S146>/Product' */
        localB->Product_m = localB->Product_h / localB->sqrt_o;

        /* Product: '<S146>/Product1' */
        localB->Product1_l = localB->UnaryMinus_l / localB->sqrt_o;

        /* Product: '<S146>/Product2' */
        localB->Product2_g = localB->UnaryMinus1_j / localB->sqrt_o;

        /* Product: '<S146>/Product3' */
        localB->Product3_c = localB->UnaryMinus2_m / localB->sqrt_o;

        /* Product: '<S147>/Product' */
        localB->Product_hp = localB->Product1_l * localB->Product2_g;

        /* Product: '<S147>/Product1' */
        localB->Product1_n = localB->Product_m * localB->Product3_c;

        /* Sum: '<S147>/Sum1' */
        localB->Sum1 = localB->Product_hp + localB->Product1_n;

        /* Gain: '<S147>/Gain' */
        localB->Gain = 2.0 * localB->Sum1;

        /* Product: '<S147>/Product2' */
        localB->Product2_k = localB->Product_m * localB->Product2_g;

        /* Product: '<S147>/Product3' */
        localB->Product3_p = localB->Product1_l * localB->Product3_c;

        /* Sum: '<S147>/Sum2' */
        localB->Sum2 = localB->Product3_p - localB->Product2_k;

        /* Gain: '<S147>/Gain1' */
        localB->Gain1 = 2.0 * localB->Sum2;

        /* Product: '<S147>/Product6' */
        localB->Product6 = localB->Product2_g * localB->Product2_g;

        /* Product: '<S147>/Product7' */
        localB->Product7 = localB->Product3_c * localB->Product3_c;

        /* Sum: '<S147>/Sum3' incorporates:
         *  Constant: '<S147>/Constant'
         */
        localB->Sum3 = (0.5 - localB->Product6) - localB->Product7;

        /* Gain: '<S147>/Gain2' */
        localB->Gain2 = 2.0 * localB->Sum3;

        /* Product: '<S147>/Product4' */
        localB->Product4 = localB->Gain *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S147>/Product5' */
        localB->Product5 = localB->Gain1 *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Product: '<S147>/Product8' */
        localB->Product8 = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
          localB->Gain2;

        /* Sum: '<S147>/Sum' */
        localB->Sum_l = (localB->Product8 + localB->Product4) + localB->Product5;

        /* Product: '<S148>/Product' */
        localB->Product_gr = localB->Product1_l * localB->Product2_g;

        /* Product: '<S148>/Product1' */
        localB->Product1_ls = localB->Product_m * localB->Product3_c;

        /* Sum: '<S148>/Sum1' */
        localB->Sum1_d = localB->Product_gr - localB->Product1_ls;

        /* Gain: '<S148>/Gain' */
        localB->Gain_g = 2.0 * localB->Sum1_d;

        /* Product: '<S148>/Product2' */
        localB->Product2_l = localB->Product_m * localB->Product1_l;

        /* Product: '<S148>/Product3' */
        localB->Product3_j = localB->Product2_g * localB->Product3_c;

        /* Sum: '<S148>/Sum2' */
        localB->Sum2_e = localB->Product2_l + localB->Product3_j;

        /* Gain: '<S148>/Gain1' */
        localB->Gain1_p = 2.0 * localB->Sum2_e;

        /* Product: '<S148>/Product6' */
        localB->Product6_k = localB->Product1_l * localB->Product1_l;

        /* Product: '<S148>/Product7' */
        localB->Product7_n = localB->Product3_c * localB->Product3_c;

        /* Sum: '<S148>/Sum3' incorporates:
         *  Constant: '<S148>/Constant'
         */
        localB->Sum3_k = (0.5 - localB->Product6_k) - localB->Product7_n;

        /* Gain: '<S148>/Gain2' */
        localB->Gain2_l = 2.0 * localB->Sum3_k;

        /* Product: '<S148>/Product4' */
        localB->Product4_m = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0]
          * localB->Gain_g;

        /* Product: '<S148>/Product5' */
        localB->Product5_i = localB->Gain1_p *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Product: '<S148>/Product8' */
        localB->Product8_a = localB->Gain2_l *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Sum: '<S148>/Sum' */
        localB->Sum_m = (localB->Product4_m + localB->Product8_a) +
          localB->Product5_i;

        /* Product: '<S149>/Product' */
        localB->Product_h0 = localB->Product1_l * localB->Product3_c;

        /* Product: '<S149>/Product1' */
        localB->Product1_i = localB->Product_m * localB->Product2_g;

        /* Sum: '<S149>/Sum1' */
        localB->Sum1_p = localB->Product_h0 + localB->Product1_i;

        /* Gain: '<S149>/Gain' */
        localB->Gain_i = 2.0 * localB->Sum1_p;

        /* Product: '<S149>/Product2' */
        localB->Product2_ep = localB->Product_m * localB->Product1_l;

        /* Product: '<S149>/Product3' */
        localB->Product3_dl = localB->Product2_g * localB->Product3_c;

        /* Sum: '<S149>/Sum2' */
        localB->Sum2_p = localB->Product3_dl - localB->Product2_ep;

        /* Gain: '<S149>/Gain1' */
        localB->Gain1_j = 2.0 * localB->Sum2_p;

        /* Product: '<S149>/Product6' */
        localB->Product6_n = localB->Product1_l * localB->Product1_l;

        /* Product: '<S149>/Product7' */
        localB->Product7_k = localB->Product2_g * localB->Product2_g;

        /* Sum: '<S149>/Sum3' incorporates:
         *  Constant: '<S149>/Constant'
         */
        localB->Sum3_m = (0.5 - localB->Product6_n) - localB->Product7_k;

        /* Gain: '<S149>/Gain2' */
        localB->Gain2_p = 2.0 * localB->Sum3_m;

        /* Product: '<S149>/Product4' */
        localB->Product4_l = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0]
          * localB->Gain_i;

        /* Product: '<S149>/Product5' */
        localB->Product5_n = localB->Gain1_j *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S149>/Product8' */
        localB->Product8_g = localB->Gain2_p *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Sum: '<S149>/Sum' */
        localB->Sum_e = (localB->Product4_l + localB->Product5_n) +
          localB->Product8_g;

        /* If: '<S156>/If' */
        if (asbCubeSatACS_ConstB.Abs < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
           *  ActionPort: '<S166>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem' */
        } else if (asbCubeSatACS_ConstB.Abs1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S167>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S168>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem2' */
        }

        /* SignalConversion generated from: '<S157>/Dot Product1' */
        localB->TmpSignalConversionAtDotProduct[0] = localB->Sum_l;
        localB->TmpSignalConversionAtDotProduct[1] = localB->Sum_m;
        localB->TmpSignalConversionAtDotProduct[2] = localB->Sum_e;

        /* Product: '<S233>/Product' */
        localB->Product_hi = localB->Product_h * localB->Product_h;

        /* Product: '<S233>/Product1' */
        localB->Product1_a = localB->UnaryMinus_l * localB->UnaryMinus_l;

        /* Product: '<S233>/Product2' */
        localB->Product2_a = localB->UnaryMinus1_j * localB->UnaryMinus1_j;

        /* Product: '<S233>/Product3' */
        localB->Product3_eh = localB->UnaryMinus2_m * localB->UnaryMinus2_m;

        /* Sum: '<S233>/Sum' */
        localB->Sum_f = ((localB->Product_hi + localB->Product1_a) +
                         localB->Product2_a) + localB->Product3_eh;

        /* Sqrt: '<S232>/sqrt' */
        localB->sqrt_l = sqrt(localB->Sum_f);

        /* Product: '<S228>/Product2' */
        localB->Product2_o4 = localB->UnaryMinus1_j / localB->sqrt_l;

        /* Product: '<S229>/Product6' */
        localB->Product6_i = localB->Product2_o4 * localB->Product2_o4;

        /* Product: '<S228>/Product3' */
        localB->Product3_h = localB->UnaryMinus2_m / localB->sqrt_l;

        /* Product: '<S229>/Product7' */
        localB->Product7_c = localB->Product3_h * localB->Product3_h;

        /* Sum: '<S229>/Sum3' incorporates:
         *  Constant: '<S229>/Constant'
         */
        localB->Sum3_h = (0.5 - localB->Product6_i) - localB->Product7_c;

        /* Gain: '<S229>/Gain2' */
        localB->Gain2_k = 2.0 * localB->Sum3_h;

        /* Product: '<S229>/Product8' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product8_p = 0.0 * localB->Gain2_k;

        /* Product: '<S228>/Product1' */
        localB->Product1_f = localB->UnaryMinus_l / localB->sqrt_l;

        /* Product: '<S229>/Product' */
        localB->Product_f = localB->Product1_f * localB->Product2_o4;

        /* Product: '<S228>/Product' */
        localB->Product_e = localB->Product_h / localB->sqrt_l;

        /* Product: '<S229>/Product1' */
        localB->Product1_iz = localB->Product_e * localB->Product3_h;

        /* Sum: '<S229>/Sum1' */
        localB->Sum1_c = localB->Product_f + localB->Product1_iz;

        /* Gain: '<S229>/Gain' */
        localB->Gain_b = 2.0 * localB->Sum1_c;

        /* Product: '<S229>/Product4' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product4_c = localB->Gain_b * 0.0;

        /* Product: '<S229>/Product2' */
        localB->Product2_m = localB->Product_e * localB->Product2_o4;

        /* Product: '<S229>/Product3' */
        localB->Product3_a = localB->Product1_f * localB->Product3_h;

        /* Sum: '<S229>/Sum2' */
        localB->Sum2_l = localB->Product3_a - localB->Product2_m;

        /* Gain: '<S229>/Gain1' */
        localB->Gain1_i = 2.0 * localB->Sum2_l;

        /* Product: '<S229>/Product5' */
        localB->Product5_g = localB->Gain1_i;

        /* Sum: '<S229>/Sum' */
        localB->Sum_o = (localB->Product8_p + localB->Product4_c) +
          localB->Product5_g;

        /* Product: '<S230>/Product' */
        localB->Product_f0 = localB->Product1_f * localB->Product2_o4;

        /* Product: '<S230>/Product1' */
        localB->Product1_m = localB->Product_e * localB->Product3_h;

        /* Sum: '<S230>/Sum1' */
        localB->Sum1_n = localB->Product_f0 - localB->Product1_m;

        /* Gain: '<S230>/Gain' */
        localB->Gain_a = 2.0 * localB->Sum1_n;

        /* Product: '<S230>/Product4' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product4_g = 0.0 * localB->Gain_a;

        /* Product: '<S230>/Product6' */
        localB->Product6_h = localB->Product1_f * localB->Product1_f;

        /* Product: '<S230>/Product7' */
        localB->Product7_f = localB->Product3_h * localB->Product3_h;

        /* Sum: '<S230>/Sum3' incorporates:
         *  Constant: '<S230>/Constant'
         */
        localB->Sum3_i = (0.5 - localB->Product6_h) - localB->Product7_f;

        /* Gain: '<S230>/Gain2' */
        localB->Gain2_b = 2.0 * localB->Sum3_i;

        /* Product: '<S230>/Product8' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product8_o = localB->Gain2_b * 0.0;

        /* Product: '<S230>/Product2' */
        localB->Product2_ak = localB->Product_e * localB->Product1_f;

        /* Product: '<S230>/Product3' */
        localB->Product3_as = localB->Product2_o4 * localB->Product3_h;

        /* Sum: '<S230>/Sum2' */
        localB->Sum2_ls = localB->Product2_ak + localB->Product3_as;

        /* Gain: '<S230>/Gain1' */
        localB->Gain1_d = 2.0 * localB->Sum2_ls;

        /* Product: '<S230>/Product5' */
        localB->Product5_j = localB->Gain1_d;

        /* Sum: '<S230>/Sum' */
        localB->Sum_k = (localB->Product4_g + localB->Product8_o) +
          localB->Product5_j;

        /* Product: '<S231>/Product' */
        localB->Product_n = localB->Product1_f * localB->Product3_h;

        /* Product: '<S231>/Product1' */
        localB->Product1_o = localB->Product_e * localB->Product2_o4;

        /* Sum: '<S231>/Sum1' */
        localB->Sum1_j = localB->Product_n + localB->Product1_o;

        /* Gain: '<S231>/Gain' */
        localB->Gain_iw = 2.0 * localB->Sum1_j;

        /* Product: '<S231>/Product4' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product4_a = 0.0 * localB->Gain_iw;

        /* Product: '<S231>/Product2' */
        localB->Product2_n = localB->Product_e * localB->Product1_f;

        /* Product: '<S231>/Product3' */
        localB->Product3_n = localB->Product2_o4 * localB->Product3_h;

        /* Sum: '<S231>/Sum2' */
        localB->Sum2_k = localB->Product3_n - localB->Product2_n;

        /* Gain: '<S231>/Gain1' */
        localB->Gain1_io = 2.0 * localB->Sum2_k;

        /* Product: '<S231>/Product5' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product5_m = localB->Gain1_io * 0.0;

        /* Product: '<S231>/Product6' */
        localB->Product6_j = localB->Product1_f * localB->Product1_f;

        /* Product: '<S231>/Product7' */
        localB->Product7_h = localB->Product2_o4 * localB->Product2_o4;

        /* Sum: '<S231>/Sum3' incorporates:
         *  Constant: '<S231>/Constant'
         */
        localB->Sum3_f = (0.5 - localB->Product6_j) - localB->Product7_h;

        /* Gain: '<S231>/Gain2' */
        localB->Gain2_c = 2.0 * localB->Sum3_f;

        /* Product: '<S231>/Product8' */
        localB->Product8_e = localB->Gain2_c;

        /* Sum: '<S231>/Sum' */
        localB->Sum_nm = (localB->Product4_a + localB->Product5_m) +
          localB->Product8_e;

        /* SignalConversion generated from: '<S157>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_f[0] = localB->Sum_o;
        localB->TmpSignalConversionAtDotProdu_f[1] = localB->Sum_k;
        localB->TmpSignalConversionAtDotProdu_f[2] = localB->Sum_nm;

        /* DotProduct: '<S157>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        u1 = localB->TmpSignalConversionAtDotProdu_f[0];
        tmp_0 = u0 * u1;

        /* DotProduct: '<S157>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        u1 = localB->TmpSignalConversionAtDotProduct[0];
        tmp_2 = u0 * u1;

        /* DotProduct: '<S157>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_f[0];
        u1 = localB->TmpSignalConversionAtDotProdu_f[0];
        tmp_3 = u0 * u1;

        /* DotProduct: '<S157>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        u1 = localB->TmpSignalConversionAtDotProdu_f[1];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        u1 = localB->TmpSignalConversionAtDotProduct[1];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_f[1];
        u1 = localB->TmpSignalConversionAtDotProdu_f[1];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        u1 = localB->TmpSignalConversionAtDotProdu_f[2];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        u1 = localB->TmpSignalConversionAtDotProduct[2];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_f[2];
        u1 = localB->TmpSignalConversionAtDotProdu_f[2];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product3' */
        localB->DotProduct3 = tmp_0;

        /* DotProduct: '<S157>/Dot Product1' */
        localB->DotProduct1 = tmp_2;

        /* DotProduct: '<S157>/Dot Product2' */
        localB->DotProduct2 = tmp_3;

        /* Product: '<S157>/Divide1' */
        localB->Divide1 = localB->DotProduct1 * localB->DotProduct2;

        /* Sqrt: '<S157>/Sqrt3' */
        localB->Sqrt3 = sqrt(localB->Divide1);

        /* Product: '<S157>/Divide' */
        localB->Divide = localB->DotProduct3 / localB->Sqrt3;

        /* Bias: '<S157>/Bias' */
        localB->Bias = localB->Divide + -1.0;

        /* Abs: '<S157>/Abs' */
        localB->Abs = fabs(localB->Bias);

        /* Bias: '<S157>/Bias1' */
        localB->Bias1 = localB->Divide + 1.0;

        /* Abs: '<S157>/Abs1' */
        localB->Abs1 = fabs(localB->Bias1);

        /* If: '<S157>/If' */
        if (localB->Abs < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
           *  ActionPort: '<S169>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_b);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem' */
        } else if (localB->Abs1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S170>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_b);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S171>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_b);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S158>/Compare' incorporates:
         *  Constant: '<S158>/Constant'
         */
        localB->Compare = (localB->Merge != 0.0);

        /* RelationalOperator: '<S159>/Compare' incorporates:
         *  Constant: '<S159>/Constant'
         */
        localB->Compare_c = (localB->Merge_b != 0.0);

        /* Logic: '<S141>/OR' */
        localB->OR = (localB->Compare || localB->Compare_c);

        /* DotProduct: '<S162>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        u1 = 0.0 * u0;

        /* DotProduct: '<S162>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[0];
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        tmp_2 = tmp_0 * u0;

        /* DotProduct: '<S183>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        tmp_3 = 0.0 * u0;

        /* DotProduct: '<S183>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[0];
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        tmp_4 = tmp_0 * u0;

        /* DotProduct: '<S162>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        u1 += 0.0 * u0;

        /* DotProduct: '<S162>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[1];
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        tmp_2 += tmp_0 * u0;

        /* DotProduct: '<S183>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        tmp_3 += 0.0 * u0;

        /* DotProduct: '<S183>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[1];
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        tmp_4 += tmp_0 * u0;

        /* DotProduct: '<S162>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        u1 += -u0;

        /* DotProduct: '<S162>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[2];
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        tmp_2 += tmp_0 * u0;

        /* DotProduct: '<S183>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        tmp_3 += -u0;

        /* DotProduct: '<S183>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[2];
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        tmp_4 += tmp_0 * u0;

        /* DotProduct: '<S162>/Dot Product3' */
        localB->DotProduct3_h = u1;

        /* DotProduct: '<S162>/Dot Product2' */
        localB->DotProduct2_a = tmp_2;

        /* Product: '<S162>/Divide1' */
        localB->Divide1_a = asbCubeSatACS_ConstB.DotProduct1_l *
          localB->DotProduct2_a;

        /* Sqrt: '<S162>/Sqrt3' */
        localB->Sqrt3_k = sqrt(localB->Divide1_a);

        /* Sum: '<S162>/Add2' */
        localB->Add2 = localB->DotProduct3_h + localB->Sqrt3_k;

        /* Product: '<S196>/Product' */
        localB->Product_g0 = localB->Add2 * localB->Add2;

        /* DotProduct: '<S183>/Dot Product3' */
        localB->DotProduct3_k = tmp_3;

        /* DotProduct: '<S183>/Dot Product2' */
        localB->DotProduct2_g = tmp_4;

        /* Product: '<S183>/Divide1' */
        localB->Divide1_e = asbCubeSatACS_ConstB.DotProduct1_f *
          localB->DotProduct2_g;

        /* Sqrt: '<S183>/Sqrt3' */
        localB->Sqrt3_f = sqrt(localB->Divide1_e);

        /* Product: '<S183>/Divide' */
        localB->Divide_c = localB->DotProduct3_k / localB->Sqrt3_f;

        /* Bias: '<S183>/Bias' */
        localB->Bias_l = localB->Divide_c + -1.0;

        /* Abs: '<S183>/Abs' */
        localB->Abs_n = fabs(localB->Bias_l);

        /* Bias: '<S183>/Bias1' */
        localB->Bias1_f = localB->Divide_c + 1.0;

        /* Abs: '<S183>/Abs1' */
        localB->Abs1_p = fabs(localB->Bias1_f);

        /* If: '<S183>/If' */
        if (localB->Abs_n < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
           *  ActionPort: '<S189>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_d);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem' */
        } else if (localB->Abs1_p < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S190>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_d);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S191>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_d);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S184>/Compare' incorporates:
         *  Constant: '<S184>/Constant'
         */
        localB->Compare_m = (localB->Merge_d != -1.0);

        /* Switch: '<S162>/is 180deg Rot' */
        if (localB->Compare_m) {
          /* Product: '<S188>/j x i' incorporates:
           *  Constant: '<S136>/primaryAlignment'
           */
          localB->jxi_a = 0.0 * localB->Sum_l;

          /* Product: '<S188>/i x k' incorporates:
           *  Constant: '<S136>/primaryAlignment'
           */
          localB->ixk_o = 0.0 * localB->Sum_e;

          /* Product: '<S188>/k x j' */
          localB->kxj_j = -localB->Sum_m;

          /* Product: '<S187>/i x j' incorporates:
           *  Constant: '<S136>/primaryAlignment'
           */
          localB->ixj_l = 0.0 * localB->Sum_m;

          /* Product: '<S187>/k x i' */
          localB->kxi_n = -localB->Sum_l;

          /* Product: '<S187>/j x k' incorporates:
           *  Constant: '<S136>/primaryAlignment'
           */
          localB->jxk_n = 0.0 * localB->Sum_e;

          /* Sum: '<S182>/Sum' */
          localB->Sum_d[0] = localB->jxk_n - localB->kxj_j;
          localB->Sum_d[1] = localB->kxi_n - localB->ixk_o;
          localB->Sum_d[2] = localB->ixj_l - localB->jxi_a;

          /* Switch: '<S162>/is 180deg Rot' */
          localB->is180degRot[0] = localB->Sum_d[0];
          localB->is180degRot[1] = localB->Sum_d[1];
          localB->is180degRot[2] = localB->Sum_d[2];
        } else {
          /* Switch: '<S162>/is 180deg Rot' */
          localB->is180degRot[0] = asbCubeSatACS_ConstB.Sum[0];
          localB->is180degRot[1] = asbCubeSatACS_ConstB.Sum[1];
          localB->is180degRot[2] = asbCubeSatACS_ConstB.Sum[2];
        }

        /* Product: '<S196>/Product1' */
        localB->Product1_lm = localB->is180degRot[0] * localB->is180degRot[0];

        /* Product: '<S196>/Product2' */
        localB->Product2_n1 = localB->is180degRot[1] * localB->is180degRot[1];

        /* Product: '<S196>/Product3' */
        localB->Product3_cn = localB->is180degRot[2] * localB->is180degRot[2];

        /* Sum: '<S196>/Sum' */
        localB->Sum_oe = ((localB->Product_g0 + localB->Product1_lm) +
                          localB->Product2_n1) + localB->Product3_cn;

        /* Sqrt: '<S195>/sqrt' */
        localB->sqrt_e = sqrt(localB->Sum_oe);

        /* Product: '<S186>/Product' */
        localB->Product_i = localB->Add2 / localB->sqrt_e;

        /* Product: '<S220>/j x k' */
        localB->jxk = localB->Sum_m * localB->Sum_nm;

        /* Product: '<S220>/k x i' */
        localB->kxi = localB->Sum_e * localB->Sum_o;

        /* Product: '<S220>/i x j' */
        localB->ixj = localB->Sum_l * localB->Sum_k;

        /* Product: '<S221>/k x j' */
        localB->kxj = localB->Sum_e * localB->Sum_k;

        /* Product: '<S221>/i x k' */
        localB->ixk = localB->Sum_l * localB->Sum_nm;

        /* Product: '<S221>/j x i' */
        localB->jxi = localB->Sum_m * localB->Sum_o;

        /* Sum: '<S218>/Sum' */
        localB->Sum_pc[0] = localB->jxk - localB->kxj;
        localB->Sum_pc[1] = localB->kxi - localB->ixk;
        localB->Sum_pc[2] = localB->ixj - localB->jxi;

        /* Product: '<S222>/j x k' */
        localB->jxk_o = localB->Sum_pc[1] * localB->Sum_e;

        /* Product: '<S222>/k x i' */
        localB->kxi_c = localB->Sum_pc[2] * localB->Sum_l;

        /* Product: '<S222>/i x j' */
        localB->ixj_g = localB->Sum_pc[0] * localB->Sum_m;

        /* Product: '<S223>/k x j' */
        localB->kxj_k = localB->Sum_pc[2] * localB->Sum_m;

        /* Product: '<S223>/i x k' */
        localB->ixk_b = localB->Sum_pc[0] * localB->Sum_e;

        /* Product: '<S223>/j x i' */
        localB->jxi_n = localB->Sum_pc[1] * localB->Sum_l;

        /* Sum: '<S219>/Sum' */
        localB->Sum_i[0] = localB->jxk_o - localB->kxj_k;
        localB->Sum_i[1] = localB->kxi_c - localB->ixk_b;
        localB->Sum_i[2] = localB->ixj_g - localB->jxi_n;

        /* Product: '<S186>/Product2' */
        localB->Product2_od = localB->is180degRot[1] / localB->sqrt_e;

        /* Product: '<S181>/Product' */
        localB->Product_mz = localB->Product_i * localB->Product_i;

        /* Product: '<S186>/Product1' */
        localB->Product1_d = localB->is180degRot[0] / localB->sqrt_e;

        /* Product: '<S181>/Product1' */
        localB->Product1_fo = localB->Product1_d * localB->Product1_d;

        /* Product: '<S181>/Product2' */
        localB->Product2_os = localB->Product2_od * localB->Product2_od;

        /* Product: '<S186>/Product3' */
        localB->Product3_d2 = localB->is180degRot[2] / localB->sqrt_e;

        /* Product: '<S181>/Product3' */
        localB->Product3_f = localB->Product3_d2 * localB->Product3_d2;

        /* Sum: '<S181>/Sum' */
        localB->Sum_fi = ((localB->Product_mz + localB->Product1_fo) +
                          localB->Product2_os) + localB->Product3_f;

        /* Sqrt: '<S180>/sqrt' */
        localB->sqrt_e2 = sqrt(localB->Sum_fi);

        /* Product: '<S176>/Product2' */
        localB->Product2_at = localB->Product2_od / localB->sqrt_e2;

        /* Product: '<S177>/Product6' */
        localB->Product6_c = localB->Product2_at * localB->Product2_at;

        /* Product: '<S176>/Product3' */
        localB->Product3_b = localB->Product3_d2 / localB->sqrt_e2;

        /* Product: '<S177>/Product7' */
        localB->Product7_cz = localB->Product3_b * localB->Product3_b;

        /* Sum: '<S177>/Sum3' incorporates:
         *  Constant: '<S177>/Constant'
         */
        localB->Sum3_b = (0.5 - localB->Product6_c) - localB->Product7_cz;

        /* Gain: '<S177>/Gain2' */
        localB->Gain2_ce = 2.0 * localB->Sum3_b;

        /* Product: '<S177>/Product8' */
        localB->Product8_pp = localB->Sum_i[0] * localB->Gain2_ce;

        /* Product: '<S176>/Product1' */
        localB->Product1_j = localB->Product1_d / localB->sqrt_e2;

        /* Product: '<S177>/Product' */
        localB->Product_p = localB->Product1_j * localB->Product2_at;

        /* Product: '<S176>/Product' */
        localB->Product_d = localB->Product_i / localB->sqrt_e2;

        /* Product: '<S177>/Product1' */
        localB->Product1_ji = localB->Product_d * localB->Product3_b;

        /* Sum: '<S177>/Sum1' */
        localB->Sum1_a = localB->Product_p + localB->Product1_ji;

        /* Gain: '<S177>/Gain' */
        localB->Gain_n = 2.0 * localB->Sum1_a;

        /* Product: '<S177>/Product4' */
        localB->Product4_p = localB->Gain_n * localB->Sum_i[1];

        /* Product: '<S177>/Product2' */
        localB->Product2_am = localB->Product_d * localB->Product2_at;

        /* Product: '<S177>/Product3' */
        localB->Product3_jh = localB->Product1_j * localB->Product3_b;

        /* Sum: '<S177>/Sum2' */
        localB->Sum2_c = localB->Product3_jh - localB->Product2_am;

        /* Gain: '<S177>/Gain1' */
        localB->Gain1_c = 2.0 * localB->Sum2_c;

        /* Product: '<S177>/Product5' */
        localB->Product5_b = localB->Gain1_c * localB->Sum_i[2];

        /* Sum: '<S177>/Sum' */
        localB->Sum_j = (localB->Product8_pp + localB->Product4_p) +
          localB->Product5_b;

        /* Product: '<S178>/Product' */
        localB->Product_b = localB->Product1_j * localB->Product2_at;

        /* Product: '<S178>/Product1' */
        localB->Product1_mo = localB->Product_d * localB->Product3_b;

        /* Sum: '<S178>/Sum1' */
        localB->Sum1_pk = localB->Product_b - localB->Product1_mo;

        /* Gain: '<S178>/Gain' */
        localB->Gain_l = 2.0 * localB->Sum1_pk;

        /* Product: '<S178>/Product4' */
        localB->Product4_h = localB->Sum_i[0] * localB->Gain_l;

        /* Product: '<S178>/Product6' */
        localB->Product6_kv = localB->Product1_j * localB->Product1_j;

        /* Product: '<S178>/Product7' */
        localB->Product7_m = localB->Product3_b * localB->Product3_b;

        /* Sum: '<S178>/Sum3' incorporates:
         *  Constant: '<S178>/Constant'
         */
        localB->Sum3_d = (0.5 - localB->Product6_kv) - localB->Product7_m;

        /* Gain: '<S178>/Gain2' */
        localB->Gain2_p0 = 2.0 * localB->Sum3_d;

        /* Product: '<S178>/Product8' */
        localB->Product8_j = localB->Gain2_p0 * localB->Sum_i[1];

        /* Product: '<S178>/Product2' */
        localB->Product2_gn = localB->Product_d * localB->Product1_j;

        /* Product: '<S178>/Product3' */
        localB->Product3_nm = localB->Product2_at * localB->Product3_b;

        /* Sum: '<S178>/Sum2' */
        localB->Sum2_d = localB->Product2_gn + localB->Product3_nm;

        /* Gain: '<S178>/Gain1' */
        localB->Gain1_m = 2.0 * localB->Sum2_d;

        /* Product: '<S178>/Product5' */
        localB->Product5_nw = localB->Gain1_m * localB->Sum_i[2];

        /* Sum: '<S178>/Sum' */
        localB->Sum_m4 = (localB->Product4_h + localB->Product8_j) +
          localB->Product5_nw;

        /* Product: '<S179>/Product' */
        localB->Product_bs = localB->Product1_j * localB->Product3_b;

        /* Product: '<S179>/Product1' */
        localB->Product1_ie = localB->Product_d * localB->Product2_at;

        /* Sum: '<S179>/Sum1' */
        localB->Sum1_b = localB->Product_bs + localB->Product1_ie;

        /* Gain: '<S179>/Gain' */
        localB->Gain_iy = 2.0 * localB->Sum1_b;

        /* Product: '<S179>/Product4' */
        localB->Product4_lc = localB->Sum_i[0] * localB->Gain_iy;

        /* Product: '<S179>/Product2' */
        localB->Product2_h = localB->Product_d * localB->Product1_j;

        /* Product: '<S179>/Product3' */
        localB->Product3_ev = localB->Product2_at * localB->Product3_b;

        /* Sum: '<S179>/Sum2' */
        localB->Sum2_g = localB->Product3_ev - localB->Product2_h;

        /* Gain: '<S179>/Gain1' */
        localB->Gain1_ck = 2.0 * localB->Sum2_g;

        /* Product: '<S179>/Product5' */
        localB->Product5_i1 = localB->Gain1_ck * localB->Sum_i[1];

        /* Product: '<S179>/Product6' */
        localB->Product6_b = localB->Product1_j * localB->Product1_j;

        /* Product: '<S179>/Product7' */
        localB->Product7_hk = localB->Product2_at * localB->Product2_at;

        /* Sum: '<S179>/Sum3' incorporates:
         *  Constant: '<S179>/Constant'
         */
        localB->Sum3_o = (0.5 - localB->Product6_b) - localB->Product7_hk;

        /* Gain: '<S179>/Gain2' */
        localB->Gain2_d = 2.0 * localB->Sum3_o;

        /* Product: '<S179>/Product8' */
        localB->Product8_c = localB->Gain2_d * localB->Sum_i[2];

        /* Sum: '<S179>/Sum' */
        localB->Sum_ld = (localB->Product4_lc + localB->Product5_i1) +
          localB->Product8_c;

        /* SignalConversion generated from: '<S198>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_d[0] = localB->Sum_j;
        localB->TmpSignalConversionAtDotProdu_d[1] = localB->Sum_m4;
        localB->TmpSignalConversionAtDotProdu_d[2] = localB->Sum_ld;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  Sum: '<S213>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_d[0];
        u1 = asbCubeSatACS_ConstB.Sum_i[0] * u0;

        /* DotProduct: '<S198>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_d[0];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_d[0];
        tmp_2 = u0 * tmp_0;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  Sum: '<S213>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_d[1];
        u1 += asbCubeSatACS_ConstB.Sum_i[1] * u0;

        /* DotProduct: '<S198>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_d[1];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_d[1];
        tmp_2 += u0 * tmp_0;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  Sum: '<S213>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_d[2];
        u1 += asbCubeSatACS_ConstB.Sum_i[2] * u0;

        /* DotProduct: '<S198>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_d[2];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_d[2];
        tmp_2 += u0 * tmp_0;

        /* DotProduct: '<S198>/Dot Product3' */
        localB->DotProduct3_l = u1;

        /* DotProduct: '<S198>/Dot Product2' */
        localB->DotProduct2_gh = tmp_2;

        /* Product: '<S198>/Divide1' */
        localB->Divide1_f = asbCubeSatACS_ConstB.DotProduct1_h *
          localB->DotProduct2_gh;

        /* Sqrt: '<S198>/Sqrt3' */
        localB->Sqrt3_e = sqrt(localB->Divide1_f);

        /* Product: '<S198>/Divide' */
        localB->Divide_i = localB->DotProduct3_l / localB->Sqrt3_e;

        /* Bias: '<S198>/Bias' */
        localB->Bias_b = localB->Divide_i + -1.0;

        /* Abs: '<S198>/Abs' */
        localB->Abs_l = fabs(localB->Bias_b);

        /* Bias: '<S198>/Bias1' */
        localB->Bias1_e = localB->Divide_i + 1.0;

        /* Abs: '<S198>/Abs1' */
        localB->Abs1_l = fabs(localB->Bias1_e);

        /* If: '<S198>/If' */
        if (localB->Abs_l < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
           *  ActionPort: '<S204>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem' */
        } else if (localB->Abs1_l < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S205>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S206>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem2' */
        }

        /* Switch: '<S141>/Switch' */
        if (localB->OR) {
          /* Switch: '<S141>/Switch' */
          localB->Switch[0] = localB->Product_i;
          localB->Switch[1] = localB->Product1_d;
          localB->Switch[2] = localB->Product2_od;
          localB->Switch[3] = localB->Product3_d2;
        } else {
          /* RelationalOperator: '<S199>/Compare' incorporates:
           *  Constant: '<S199>/Constant'
           */
          localB->Compare_j = (localB->Merge_f != -1.0);

          /* Switch: '<S163>/is 180deg Rot' */
          if (localB->Compare_j) {
            /* Product: '<S203>/j x i' */
            localB->jxi_d = asbCubeSatACS_ConstB.Sum_i[1] * localB->Sum_j;

            /* Product: '<S203>/i x k' */
            localB->ixk_a = asbCubeSatACS_ConstB.Sum_i[0] * localB->Sum_ld;

            /* Product: '<S203>/k x j' */
            localB->kxj_l = asbCubeSatACS_ConstB.Sum_i[2] * localB->Sum_m4;

            /* Product: '<S202>/i x j' */
            localB->ixj_k = asbCubeSatACS_ConstB.Sum_i[0] * localB->Sum_m4;

            /* Product: '<S202>/k x i' */
            localB->kxi_m = asbCubeSatACS_ConstB.Sum_i[2] * localB->Sum_j;

            /* Product: '<S202>/j x k' */
            localB->jxk_p = asbCubeSatACS_ConstB.Sum_i[1] * localB->Sum_ld;

            /* Sum: '<S197>/Sum' */
            localB->Sum_gy[0] = localB->jxk_p - localB->kxj_l;
            localB->Sum_gy[1] = localB->kxi_m - localB->ixk_a;
            localB->Sum_gy[2] = localB->ixj_k - localB->jxi_d;

            /* Switch: '<S163>/is 180deg Rot' */
            localB->is180degRot_m[0] = localB->Sum_gy[0];
            localB->is180degRot_m[1] = localB->Sum_gy[1];
            localB->is180degRot_m[2] = localB->Sum_gy[2];
          } else {
            /* Switch: '<S163>/is 180deg Rot' */
            localB->is180degRot_m[0] = asbCubeSatACS_ConstB.Sum_iv[0];
            localB->is180degRot_m[1] = asbCubeSatACS_ConstB.Sum_iv[1];
            localB->is180degRot_m[2] = asbCubeSatACS_ConstB.Sum_iv[2];
          }

          /* Product: '<S211>/Product3' */
          localB->Product3_jn = localB->is180degRot_m[2] * localB->
            is180degRot_m[2];

          /* Product: '<S211>/Product2' */
          localB->Product2_nf = localB->is180degRot_m[1] * localB->
            is180degRot_m[1];

          /* Product: '<S211>/Product1' */
          localB->Product1_az = localB->is180degRot_m[0] * localB->
            is180degRot_m[0];

          /* DotProduct: '<S163>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_d[0];
          u1 = localB->TmpSignalConversionAtDotProdu_d[0];
          tmp_0 = u0 * u1;

          /* DotProduct: '<S163>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_d[0];
          tmp_2 = asbCubeSatACS_ConstB.Sum_i[0] * u0;

          /* DotProduct: '<S163>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_d[1];
          u1 = localB->TmpSignalConversionAtDotProdu_d[1];
          tmp_0 += u0 * u1;

          /* DotProduct: '<S163>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_d[1];
          tmp_2 += asbCubeSatACS_ConstB.Sum_i[1] * u0;

          /* DotProduct: '<S163>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_d[2];
          u1 = localB->TmpSignalConversionAtDotProdu_d[2];
          tmp_0 += u0 * u1;

          /* DotProduct: '<S163>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_d[2];
          tmp_2 += asbCubeSatACS_ConstB.Sum_i[2] * u0;

          /* DotProduct: '<S163>/Dot Product2' */
          localB->DotProduct2_p = tmp_0;

          /* Product: '<S163>/Divide1' */
          localB->Divide1_d = asbCubeSatACS_ConstB.DotProduct1_j *
            localB->DotProduct2_p;

          /* Sqrt: '<S163>/Sqrt3' */
          localB->Sqrt3_o = sqrt(localB->Divide1_d);

          /* DotProduct: '<S163>/Dot Product3' */
          localB->DotProduct3_j = tmp_2;

          /* Sum: '<S163>/Add2' */
          localB->Add2_p = localB->DotProduct3_j + localB->Sqrt3_o;

          /* Product: '<S211>/Product' */
          localB->Product_o = localB->Add2_p * localB->Add2_p;

          /* Sum: '<S211>/Sum' */
          localB->Sum_o2 = ((localB->Product_o + localB->Product1_az) +
                            localB->Product2_nf) + localB->Product3_jn;

          /* Sqrt: '<S210>/sqrt' */
          localB->sqrt_ee = sqrt(localB->Sum_o2);

          /* Product: '<S201>/Product3' */
          localB->Product3_i = localB->is180degRot_m[2] / localB->sqrt_ee;

          /* Product: '<S172>/Product3' */
          localB->Product3_jp = localB->Product3_d2 * localB->Product3_i;

          /* Product: '<S201>/Product2' */
          localB->Product2_c = localB->is180degRot_m[1] / localB->sqrt_ee;

          /* Product: '<S172>/Product2' */
          localB->Product2_cn = localB->Product2_od * localB->Product2_c;

          /* Product: '<S201>/Product1' */
          localB->Product1_dr = localB->is180degRot_m[0] / localB->sqrt_ee;

          /* Product: '<S172>/Product1' */
          localB->Product1_j4 = localB->Product1_d * localB->Product1_dr;

          /* Product: '<S201>/Product' */
          localB->Product_or = localB->Add2_p / localB->sqrt_ee;

          /* Product: '<S172>/Product' */
          localB->Product_c = localB->Product_i * localB->Product_or;

          /* Sum: '<S172>/Sum' */
          localB->Sum_id = ((localB->Product_c - localB->Product1_j4) -
                            localB->Product2_cn) - localB->Product3_jp;

          /* Product: '<S173>/Product3' */
          localB->Product3_ic = localB->Product3_d2 * localB->Product2_c;

          /* Product: '<S173>/Product2' */
          localB->Product2_d = localB->Product2_od * localB->Product3_i;

          /* Product: '<S173>/Product1' */
          localB->Product1_nc = localB->Product1_d * localB->Product_or;

          /* Product: '<S173>/Product' */
          localB->Product_k = localB->Product_i * localB->Product1_dr;

          /* Sum: '<S173>/Sum' */
          localB->Sum_c = ((localB->Product_k + localB->Product1_nc) +
                           localB->Product2_d) - localB->Product3_ic;

          /* Product: '<S174>/Product3' */
          localB->Product3_ht = localB->Product3_d2 * localB->Product1_dr;

          /* Product: '<S174>/Product2' */
          localB->Product2_mx = localB->Product2_od * localB->Product_or;

          /* Product: '<S174>/Product1' */
          localB->Product1_jk = localB->Product1_d * localB->Product3_i;

          /* Product: '<S174>/Product' */
          localB->Product_kq = localB->Product_i * localB->Product2_c;

          /* Sum: '<S174>/Sum' */
          localB->Sum_ct = ((localB->Product_kq - localB->Product1_jk) +
                            localB->Product2_mx) + localB->Product3_ht;

          /* Product: '<S175>/Product3' */
          localB->Product3_fq = localB->Product3_d2 * localB->Product_or;

          /* Product: '<S175>/Product2' */
          localB->Product2_eb = localB->Product2_od * localB->Product1_dr;

          /* Product: '<S175>/Product1' */
          localB->Product1_ac = localB->Product1_d * localB->Product2_c;

          /* Product: '<S175>/Product' */
          localB->Product_gm = localB->Product_i * localB->Product3_i;

          /* Sum: '<S175>/Sum' */
          localB->Sum_g = ((localB->Product_gm + localB->Product1_ac) -
                           localB->Product2_eb) + localB->Product3_fq;

          /* Switch: '<S141>/Switch' */
          localB->Switch[0] = localB->Sum_id;
          localB->Switch[1] = localB->Sum_c;
          localB->Switch[2] = localB->Sum_ct;
          localB->Switch[3] = localB->Sum_g;
        }

        /* Merge: '<S3>/ Merge 1' incorporates:
         *  SignalConversion generated from: '<S6>/cmd_q_b2tgt'
         */
        localB->cmd_q_b2tgt[0] = localB->Switch[0];
        localB->cmd_q_b2tgt[1] = localB->Switch[1];
        localB->cmd_q_b2tgt[2] = localB->Switch[2];
        localB->cmd_q_b2tgt[3] = localB->Switch[3];

        /* Product: '<S241>/Product' */
        localB->Product_do = localB->Switch[0] * localB->Switch[0];

        /* Product: '<S241>/Product1' */
        localB->Product1_h = localB->Switch[1] * localB->Switch[1];

        /* Product: '<S241>/Product2' */
        localB->Product2_p = localB->Switch[2] * localB->Switch[2];

        /* Product: '<S241>/Product3' */
        localB->Product3_pz = localB->Switch[3] * localB->Switch[3];

        /* Sum: '<S241>/Sum' */
        localB->Sum_a = ((localB->Product_do + localB->Product1_h) +
                         localB->Product2_p) + localB->Product3_pz;

        /* Sqrt: '<S240>/sqrt' */
        localB->sqrt_k = sqrt(localB->Sum_a);

        /* Product: '<S235>/Product' */
        localB->Product_mw = localB->Switch[0] / localB->sqrt_k;

        /* Product: '<S235>/Product1' */
        localB->Product1_lc = localB->Switch[1] / localB->sqrt_k;

        /* Product: '<S235>/Product2' */
        localB->Product2_el = localB->Switch[2] / localB->sqrt_k;

        /* Product: '<S235>/Product3' */
        localB->Product3_e1 = localB->Switch[3] / localB->sqrt_k;

        /* Fcn: '<S138>/fcn3' */
        localB->fcn3 = (localB->Product1_lc * localB->Product3_e1 +
                        localB->Product_mw * localB->Product2_el) * 2.0;

        /* If: '<S236>/If' */
        if (localB->fcn3 > 1.0) {
          /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem' incorporates:
           *  ActionPort: '<S237>/Action Port'
           */
          /* Merge: '<S236>/Merge' incorporates:
           *  Constant: '<S237>/Constant'
           */
          localB->Merge_j = 1.0;

          /* End of Outputs for SubSystem: '<S236>/If Action Subsystem' */
        } else if (localB->fcn3 < -1.0) {
          /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S238>/Action Port'
           */
          /* Merge: '<S236>/Merge' incorporates:
           *  Constant: '<S238>/Constant'
           */
          localB->Merge_j = 1.0;

          /* End of Outputs for SubSystem: '<S236>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S239>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(localB->fcn3, &localB->Merge_j);

          /* End of Outputs for SubSystem: '<S236>/If Action Subsystem2' */
        }

        /* Fcn: '<S138>/fcn1' */
        localB->fcn1 = (localB->Product2_el * localB->Product3_e1 -
                        localB->Product_mw * localB->Product1_lc) * -2.0;

        /* Fcn: '<S138>/fcn2' */
        localB->fcn2 = ((localB->Product_mw * localB->Product_mw -
                         localB->Product1_lc * localB->Product1_lc) -
                        localB->Product2_el * localB->Product2_el) +
          localB->Product3_e1 * localB->Product3_e1;

        /* Trigonometry: '<S234>/Trigonometric Function1' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[0] = rt_atan2d_snf(localB->fcn1, localB->fcn2);

        /* Fcn: '<S138>/fcn4' */
        localB->fcn4 = (localB->Product1_lc * localB->Product2_el -
                        localB->Product_mw * localB->Product3_e1) * -2.0;

        /* Fcn: '<S138>/fcn5' */
        localB->fcn5 = ((localB->Product_mw * localB->Product_mw +
                         localB->Product1_lc * localB->Product1_lc) -
                        localB->Product2_el * localB->Product2_el) -
          localB->Product3_e1 * localB->Product3_e1;

        /* Trigonometry: '<S234>/Trigonometric Function3' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[2] = rt_atan2d_snf(localB->fcn4, localB->fcn5);

        /* Trigonometry: '<S234>/trigFcn' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        u0 = localB->Merge_j;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        localB->PointingCmd[1] = asin(u0);
      }
      break;

     default:
      /* During 'Transition': '<S3>:52' */
      if (*rtu_AttitudeMode == 1.0) {
        /* Transition: '<S3>:40' */
        localB->ControlMode = 2.0;
        localDW->is_On = asbCubeSatACS_IN_Earth;

        /* Product: '<S121>/Product' */
        localB->Product_cs = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* UnaryMinus: '<S8>/Unary Minus' */
        localB->UnaryMinus_e = -localB->BusConversion_InsertedFor_Point.q_eci2b
          [1];

        /* Product: '<S121>/Product1' */
        localB->Product1_p = localB->UnaryMinus_e * localB->UnaryMinus_e;

        /* UnaryMinus: '<S8>/Unary Minus1' */
        localB->UnaryMinus1_d = -localB->
          BusConversion_InsertedFor_Point.q_eci2b[2];

        /* Product: '<S121>/Product2' */
        localB->Product2_j = localB->UnaryMinus1_d * localB->UnaryMinus1_d;

        /* UnaryMinus: '<S8>/Unary Minus2' */
        localB->UnaryMinus2_f = -localB->
          BusConversion_InsertedFor_Point.q_eci2b[3];

        /* Product: '<S121>/Product3' */
        localB->Product3_ii = localB->UnaryMinus2_f * localB->UnaryMinus2_f;

        /* Sum: '<S121>/Sum' */
        localB->Sum_p4 = ((localB->Product_cs + localB->Product1_p) +
                          localB->Product2_j) + localB->Product3_ii;

        /* Sqrt: '<S120>/sqrt' */
        localB->sqrt_o5 = sqrt(localB->Sum_p4);

        /* Product: '<S119>/Product' */
        localB->Product_ks = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_o5;

        /* Product: '<S22>/Product' */
        localB->Product_bb = localB->Product_ks * localB->Product_ks;

        /* Product: '<S119>/Product1' */
        localB->Product1_l0 = localB->UnaryMinus_e / localB->sqrt_o5;

        /* UnaryMinus: '<S118>/Unary Minus' */
        localB->UnaryMinus_ec = -localB->Product1_l0;

        /* Product: '<S22>/Product1' */
        localB->Product1_me = localB->UnaryMinus_ec * localB->UnaryMinus_ec;

        /* Product: '<S119>/Product2' */
        localB->Product2_pc = localB->UnaryMinus1_d / localB->sqrt_o5;

        /* UnaryMinus: '<S118>/Unary Minus1' */
        localB->UnaryMinus1_e = -localB->Product2_pc;

        /* Product: '<S22>/Product2' */
        localB->Product2_i = localB->UnaryMinus1_e * localB->UnaryMinus1_e;

        /* Product: '<S119>/Product3' */
        localB->Product3_c3 = localB->UnaryMinus2_f / localB->sqrt_o5;

        /* UnaryMinus: '<S118>/Unary Minus2' */
        localB->UnaryMinus2_k = -localB->Product3_c3;

        /* Product: '<S22>/Product3' */
        localB->Product3_ff = localB->UnaryMinus2_k * localB->UnaryMinus2_k;

        /* Sum: '<S22>/Sum' */
        localB->Sum_ke = ((localB->Product_bb + localB->Product1_me) +
                          localB->Product2_i) + localB->Product3_ff;

        /* Sqrt: '<S21>/sqrt' */
        localB->sqrt_la = sqrt(localB->Sum_ke);

        /* Product: '<S17>/Product' */
        localB->Product_gl = localB->Product_ks / localB->sqrt_la;

        /* Product: '<S17>/Product1' */
        localB->Product1_gs = localB->UnaryMinus_ec / localB->sqrt_la;

        /* Product: '<S17>/Product2' */
        localB->Product2_ef = localB->UnaryMinus1_e / localB->sqrt_la;

        /* Product: '<S17>/Product3' */
        localB->Product3_fp = localB->UnaryMinus2_k / localB->sqrt_la;

        /* Product: '<S18>/Product' */
        localB->Product_fo = localB->Product1_gs * localB->Product2_ef;

        /* Product: '<S18>/Product1' */
        localB->Product1_b = localB->Product_gl * localB->Product3_fp;

        /* Sum: '<S18>/Sum1' */
        localB->Sum1_h = localB->Product_fo + localB->Product1_b;

        /* Gain: '<S18>/Gain' */
        localB->Gain_lp = 2.0 * localB->Sum1_h;

        /* Product: '<S18>/Product2' */
        localB->Product2_js = localB->Product_gl * localB->Product2_ef;

        /* Product: '<S18>/Product3' */
        localB->Product3_hw = localB->Product1_gs * localB->Product3_fp;

        /* Sum: '<S18>/Sum2' */
        localB->Sum2_i = localB->Product3_hw - localB->Product2_js;

        /* Gain: '<S18>/Gain1' */
        localB->Gain1_o = 2.0 * localB->Sum2_i;

        /* Product: '<S18>/Product6' */
        localB->Product6_m = localB->Product2_ef * localB->Product2_ef;

        /* Product: '<S18>/Product7' */
        localB->Product7_k2 = localB->Product3_fp * localB->Product3_fp;

        /* Sum: '<S18>/Sum3' incorporates:
         *  Constant: '<S18>/Constant'
         */
        localB->Sum3_c = (0.5 - localB->Product6_m) - localB->Product7_k2;

        /* Gain: '<S18>/Gain2' */
        localB->Gain2_cx = 2.0 * localB->Sum3_c;

        /* Product: '<S19>/Product' */
        localB->Product_pp = localB->Product1_gs * localB->Product2_ef;

        /* Product: '<S19>/Product1' */
        localB->Product1_p3 = localB->Product_gl * localB->Product3_fp;

        /* Sum: '<S19>/Sum1' */
        localB->Sum1_i = localB->Product_pp - localB->Product1_p3;

        /* Gain: '<S19>/Gain' */
        localB->Gain_ie = 2.0 * localB->Sum1_i;

        /* Product: '<S19>/Product2' */
        localB->Product2_f = localB->Product_gl * localB->Product1_gs;

        /* Product: '<S19>/Product3' */
        localB->Product3_m = localB->Product2_ef * localB->Product3_fp;

        /* Sum: '<S19>/Sum2' */
        localB->Sum2_f = localB->Product2_f + localB->Product3_m;

        /* Gain: '<S19>/Gain1' */
        localB->Gain1_l = 2.0 * localB->Sum2_f;

        /* Product: '<S19>/Product6' */
        localB->Product6_iz = localB->Product1_gs * localB->Product1_gs;

        /* Product: '<S19>/Product7' */
        localB->Product7_e = localB->Product3_fp * localB->Product3_fp;

        /* Sum: '<S19>/Sum3' incorporates:
         *  Constant: '<S19>/Constant'
         */
        localB->Sum3_op = (0.5 - localB->Product6_iz) - localB->Product7_e;

        /* Gain: '<S19>/Gain2' */
        localB->Gain2_e = 2.0 * localB->Sum3_op;

        /* Product: '<S20>/Product' */
        localB->Product_ce = localB->Product1_gs * localB->Product3_fp;

        /* Product: '<S20>/Product1' */
        localB->Product1_mx = localB->Product_gl * localB->Product2_ef;

        /* Sum: '<S20>/Sum1' */
        localB->Sum1_m = localB->Product_ce + localB->Product1_mx;

        /* Gain: '<S20>/Gain' */
        localB->Gain_ab = 2.0 * localB->Sum1_m;

        /* Product: '<S20>/Product2' */
        localB->Product2_av = localB->Product_gl * localB->Product1_gs;

        /* Product: '<S20>/Product3' */
        localB->Product3_cx = localB->Product2_ef * localB->Product3_fp;

        /* Sum: '<S20>/Sum2' */
        localB->Sum2_o = localB->Product3_cx - localB->Product2_av;

        /* Gain: '<S20>/Gain1' */
        localB->Gain1_g = 2.0 * localB->Sum2_o;

        /* Product: '<S20>/Product6' */
        localB->Product6_l = localB->Product1_gs * localB->Product1_gs;

        /* Product: '<S20>/Product7' */
        localB->Product7_l = localB->Product2_ef * localB->Product2_ef;

        /* Sum: '<S20>/Sum3' incorporates:
         *  Constant: '<S20>/Constant'
         */
        localB->Sum3_a = (0.5 - localB->Product6_l) - localB->Product7_l;

        /* Gain: '<S20>/Gain2' */
        localB->Gain2_o = 2.0 * localB->Sum3_a;

        /* Product: '<S38>/j x k' */
        localB->jxk_pl = localB->BusConversion_InsertedFor_Point.X_eci[1] *
          localB->BusConversion_InsertedFor_Point.V_eci[2];

        /* Product: '<S38>/k x i' */
        localB->kxi_a = localB->BusConversion_InsertedFor_Point.V_eci[0] *
          localB->BusConversion_InsertedFor_Point.X_eci[2];

        /* Product: '<S38>/i x j' */
        localB->ixj_d = localB->BusConversion_InsertedFor_Point.X_eci[0] *
          localB->BusConversion_InsertedFor_Point.V_eci[1];

        /* Product: '<S39>/k x j' */
        localB->kxj_e = localB->BusConversion_InsertedFor_Point.V_eci[1] *
          localB->BusConversion_InsertedFor_Point.X_eci[2];

        /* Product: '<S39>/i x k' */
        localB->ixk_g = localB->BusConversion_InsertedFor_Point.X_eci[0] *
          localB->BusConversion_InsertedFor_Point.V_eci[2];

        /* Product: '<S39>/j x i' */
        localB->jxi_g = localB->BusConversion_InsertedFor_Point.V_eci[0] *
          localB->BusConversion_InsertedFor_Point.X_eci[1];

        /* Sum: '<S32>/Sum' */
        localB->Sum_mp[0] = localB->jxk_pl - localB->kxj_e;
        localB->Sum_mp[1] = localB->kxi_a - localB->ixk_g;
        localB->Sum_mp[2] = localB->ixj_d - localB->jxi_g;

        /* Product: '<S40>/j x k' incorporates:
         *  Constant: '<S23>/Constant'
         */
        localB->jxk_c = 0.0 * localB->Sum_mp[2];

        /* Product: '<S40>/k x i' */
        localB->kxi_na = localB->Sum_mp[0];

        /* Product: '<S40>/i x j' incorporates:
         *  Constant: '<S23>/Constant'
         */
        localB->ixj_p = 0.0 * localB->Sum_mp[1];

        /* Product: '<S41>/k x j' */
        localB->kxj_d = localB->Sum_mp[1];

        /* Product: '<S41>/i x k' incorporates:
         *  Constant: '<S23>/Constant'
         */
        localB->ixk_h = 0.0 * localB->Sum_mp[2];

        /* Product: '<S41>/j x i' incorporates:
         *  Constant: '<S23>/Constant'
         */
        localB->jxi_gk = localB->Sum_mp[0] * 0.0;

        /* Sum: '<S34>/Sum' */
        localB->Sum_co[0] = localB->jxk_c - localB->kxj_d;
        localB->Sum_co[1] = localB->kxi_na - localB->ixk_h;
        localB->Sum_co[2] = localB->ixj_p - localB->jxi_gk;

        /* Product: '<S42>/j x k' */
        localB->jxk_o5 = localB->BusConversion_InsertedFor_Point.V_eci[1] *
          localB->Sum_mp[2];

        /* Product: '<S42>/k x i' */
        localB->kxi_f = localB->Sum_mp[0] *
          localB->BusConversion_InsertedFor_Point.V_eci[2];

        /* Product: '<S42>/i x j' */
        localB->ixj_lo = localB->BusConversion_InsertedFor_Point.V_eci[0] *
          localB->Sum_mp[1];

        /* Product: '<S43>/k x j' */
        localB->kxj_o = localB->Sum_mp[1] *
          localB->BusConversion_InsertedFor_Point.V_eci[2];

        /* Product: '<S43>/i x k' */
        localB->ixk_ab = localB->BusConversion_InsertedFor_Point.V_eci[0] *
          localB->Sum_mp[2];

        /* Product: '<S43>/j x i' */
        localB->jxi_j = localB->Sum_mp[0] *
          localB->BusConversion_InsertedFor_Point.V_eci[1];

        /* Sum: '<S35>/Sum' */
        localB->Sum_jr[0] = localB->jxk_o5 - localB->kxj_o;
        localB->Sum_jr[1] = localB->kxi_f - localB->ixk_ab;
        localB->Sum_jr[2] = localB->ixj_lo - localB->jxi_j;

        /* Gain: '<S10>/Gain' */
        localB->Gain_h[0] = -localB->BusConversion_InsertedFor_Point.X_eci[0];

        /* DotProduct: '<S23>/Dot Product' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[0];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[0];
        tmp_0 = u0 * u1;

        /* Product: '<S23>/divide2' incorporates:
         *  Constant: '<S23>/Constant2'
         */
        localB->divide2[0] = localB->Sum_jr[0] / 3.986004418E+14;

        /* Gain: '<S10>/Gain' */
        localB->Gain_h[1] = -localB->BusConversion_InsertedFor_Point.X_eci[1];

        /* DotProduct: '<S23>/Dot Product' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[1];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[1];
        tmp_0 += u0 * u1;

        /* Product: '<S23>/divide2' incorporates:
         *  Constant: '<S23>/Constant2'
         */
        localB->divide2[1] = localB->Sum_jr[1] / 3.986004418E+14;

        /* Gain: '<S10>/Gain' */
        localB->Gain_h[2] = -localB->BusConversion_InsertedFor_Point.X_eci[2];

        /* DotProduct: '<S23>/Dot Product' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[2];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[2];
        tmp_0 += u0 * u1;

        /* Product: '<S23>/divide2' incorporates:
         *  Constant: '<S23>/Constant2'
         */
        localB->divide2[2] = localB->Sum_jr[2] / 3.986004418E+14;

        /* Product: '<S18>/Product4' */
        localB->Product4_f = localB->Gain_lp * localB->Gain_h[1];

        /* Product: '<S18>/Product5' */
        localB->Product5_f = localB->Gain1_o * localB->Gain_h[2];

        /* Product: '<S18>/Product8' */
        localB->Product8_ao = localB->Gain_h[0] * localB->Gain2_cx;

        /* Sum: '<S18>/Sum' */
        localB->Sum_ah = (localB->Product8_ao + localB->Product4_f) +
          localB->Product5_f;

        /* Product: '<S19>/Product4' */
        localB->Product4_o = localB->Gain_h[0] * localB->Gain_ie;

        /* Product: '<S19>/Product5' */
        localB->Product5_ji = localB->Gain1_l * localB->Gain_h[2];

        /* Product: '<S19>/Product8' */
        localB->Product8_f = localB->Gain2_e * localB->Gain_h[1];

        /* Sum: '<S19>/Sum' */
        localB->Sum_pcb = (localB->Product4_o + localB->Product8_f) +
          localB->Product5_ji;

        /* Product: '<S20>/Product4' */
        localB->Product4_gi = localB->Gain_h[0] * localB->Gain_ab;

        /* Product: '<S20>/Product5' */
        localB->Product5_my = localB->Gain1_g * localB->Gain_h[1];

        /* Product: '<S20>/Product8' */
        localB->Product8_gb = localB->Gain2_o * localB->Gain_h[2];

        /* Sum: '<S20>/Sum' */
        localB->Sum_ml = (localB->Product4_gi + localB->Product5_my) +
          localB->Product8_gb;

        /* DotProduct: '<S23>/Dot Product' */
        localB->DotProduct = tmp_0;

        /* Sqrt: '<S23>/|r|' */
        localB->r = sqrt(localB->DotProduct);

        /* Product: '<S23>/divide3' */
        localB->divide3[0] = localB->BusConversion_InsertedFor_Point.X_eci[0] /
          localB->r;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
        localB->evxhmurr[0] = localB->divide2[0] - localB->divide3[0];

        /* DotProduct: '<S23>/Dot Product1' */
        u0 = localB->Sum_co[0];
        u1 = localB->evxhmurr[0];
        tmp_0 = u0 * u1;

        /* DotProduct: '<S23>/Dot Product2' */
        u0 = localB->Sum_co[0];
        u1 = localB->Sum_co[0];
        tmp_2 = u0 * u1;

        /* DotProduct: '<S23>/Dot Product3' */
        u0 = localB->Sum_mp[0];
        u1 = localB->Sum_mp[0];
        tmp_3 = u0 * u1;

        /* DotProduct: '<S23>/Dot Product4' */
        u0 = localB->evxhmurr[0];
        u1 = localB->evxhmurr[0];
        tmp_4 = u0 * u1;

        /* DotProduct: '<S23>/Dot Product5' */
        u0 = localB->evxhmurr[0];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[0];
        tmp = u0 * u1;

        /* DotProduct: '<S23>/Dot Product6' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[0];
        u1 = localB->BusConversion_InsertedFor_Point.V_eci[0];
        tmp_1 = u0 * u1;

        /* Product: '<S23>/divide3' */
        localB->divide3[1] = localB->BusConversion_InsertedFor_Point.X_eci[1] /
          localB->r;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
        localB->evxhmurr[1] = localB->divide2[1] - localB->divide3[1];

        /* DotProduct: '<S23>/Dot Product1' */
        u0 = localB->Sum_co[1];
        u1 = localB->evxhmurr[1];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product2' */
        u0 = localB->Sum_co[1];
        u1 = localB->Sum_co[1];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product3' */
        u0 = localB->Sum_mp[1];
        u1 = localB->Sum_mp[1];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product4' */
        u0 = localB->evxhmurr[1];
        u1 = localB->evxhmurr[1];
        tmp_4 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product5' */
        u0 = localB->evxhmurr[1];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[1];
        tmp += u0 * u1;

        /* DotProduct: '<S23>/Dot Product6' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[1];
        u1 = localB->BusConversion_InsertedFor_Point.V_eci[1];
        tmp_1 += u0 * u1;

        /* Product: '<S23>/divide3' */
        localB->divide3[2] = localB->BusConversion_InsertedFor_Point.X_eci[2] /
          localB->r;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
        localB->evxhmurr[2] = localB->divide2[2] - localB->divide3[2];

        /* DotProduct: '<S23>/Dot Product1' */
        u0 = localB->Sum_co[2];
        u1 = localB->evxhmurr[2];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product2' */
        u0 = localB->Sum_co[2];
        u1 = localB->Sum_co[2];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product3' */
        u0 = localB->Sum_mp[2];
        u1 = localB->Sum_mp[2];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product4' */
        u0 = localB->evxhmurr[2];
        u1 = localB->evxhmurr[2];
        tmp_4 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product5' */
        u0 = localB->evxhmurr[2];
        u1 = localB->BusConversion_InsertedFor_Point.X_eci[2];
        tmp += u0 * u1;

        /* DotProduct: '<S23>/Dot Product6' */
        u0 = localB->BusConversion_InsertedFor_Point.X_eci[2];
        u1 = localB->BusConversion_InsertedFor_Point.V_eci[2];
        tmp_1 += u0 * u1;

        /* DotProduct: '<S23>/Dot Product1' */
        localB->DotProduct1_b = tmp_0;

        /* DotProduct: '<S23>/Dot Product2' */
        localB->DotProduct2_m = tmp_2;

        /* DotProduct: '<S23>/Dot Product3' */
        localB->DotProduct3_h4 = tmp_3;

        /* DotProduct: '<S23>/Dot Product4' */
        localB->DotProduct4 = tmp_4;

        /* DotProduct: '<S23>/Dot Product5' */
        localB->DotProduct5 = tmp;

        /* DotProduct: '<S23>/Dot Product6' */
        localB->DotProduct6 = tmp_1;

        /* Sqrt: '<S23>/|n|' */
        localB->n = sqrt(localB->DotProduct2_m);

        /* Sqrt: '<S23>/|e|' */
        localB->e = sqrt(localB->DotProduct4);

        /* Product: '<S23>/Product' */
        localB->Product_k3 = localB->n * localB->e;

        /* Product: '<S23>/Product1' */
        localB->Product1_e = localB->e * localB->r;

        /* Product: '<S23>/divide' */
        localB->divide = localB->Sum_co[0] / localB->n;

        /* MinMax: '<S30>/Min' */
        u1 = localB->divide;
        if (!(u1 <= 1.0)) {
          u1 = 1.0;
        }

        /* MinMax: '<S30>/Min' */
        localB->Min = u1;

        /* MinMax: '<S30>/Max' */
        u1 = localB->Min;
        if ((u1 <= -1.0) || rtIsNaN(u1)) {
          u1 = -1.0;
        }

        /* MinMax: '<S30>/Max' */
        localB->Max = u1;

        /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
        u0 = localB->Max;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
        localB->RAANacosn_in = acos(u0);

        /* Switch: '<S23>/n_j < 0' */
        if (localB->Sum_co[1] >= 0.0) {
          /* Switch: '<S23>/n_j < 0' */
          localB->n_j0 = localB->RAANacosn_in;
        } else {
          /* Sum: '<S23>/Sum' incorporates:
           *  Constant: '<S23>/Constant1'
           */
          localB->Sum_e0 = 6.2831853071795862 - localB->RAANacosn_in;

          /* Switch: '<S23>/n_j < 0' */
          localB->n_j0 = localB->Sum_e0;
        }

        /* Sqrt: '<S23>/|h|' */
        localB->h = sqrt(localB->DotProduct3_h4);

        /* Product: '<S23>/divide1' */
        localB->divide1 = localB->Sum_mp[2] / localB->h;

        /* MinMax: '<S31>/Min' */
        u1 = localB->divide1;
        if (!(u1 <= 1.0)) {
          u1 = 1.0;
        }

        /* MinMax: '<S31>/Min' */
        localB->Min_n = u1;

        /* MinMax: '<S31>/Max' */
        u1 = localB->Min_n;
        if ((u1 <= -1.0) || rtIsNaN(u1)) {
          u1 = -1.0;
        }

        /* MinMax: '<S31>/Max' */
        localB->Max_p = u1;

        /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
        u0 = localB->Max_p;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
        localB->iacosh_kh = acos(u0);

        /* Product: '<S23>/divide4' */
        localB->divide4 = localB->DotProduct1_b / localB->Product_k3;

        /* MinMax: '<S29>/Min' */
        u1 = localB->divide4;
        if (!(u1 <= 1.0)) {
          u1 = 1.0;
        }

        /* MinMax: '<S29>/Min' */
        localB->Min_a = u1;

        /* MinMax: '<S29>/Max' */
        u1 = localB->Min_a;
        if ((u1 <= -1.0) || rtIsNaN(u1)) {
          u1 = -1.0;
        }

        /* MinMax: '<S29>/Max' */
        localB->Max_b = u1;

        /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
        u0 = localB->Max_b;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
        localB->argPacosnene = acos(u0);

        /* Switch: '<S23>/e_k < 0' */
        if (localB->evxhmurr[2] >= 0.0) {
          /* Switch: '<S23>/e_k < 0' */
          localB->e_k0 = localB->argPacosnene;
        } else {
          /* Sum: '<S23>/Sum1' incorporates:
           *  Constant: '<S23>/Constant3'
           */
          localB->Sum1_d0 = 6.2831853071795862 - localB->argPacosnene;

          /* Switch: '<S23>/e_k < 0' */
          localB->e_k0 = localB->Sum1_d0;
        }

        /* Product: '<S23>/divide5' */
        localB->divide5 = localB->DotProduct5 / localB->Product1_e;

        /* MinMax: '<S28>/Min' */
        u1 = localB->divide5;
        if (!(u1 <= 1.0)) {
          u1 = 1.0;
        }

        /* MinMax: '<S28>/Min' */
        localB->Min_ni = u1;

        /* MinMax: '<S28>/Max' */
        u1 = localB->Min_ni;
        if ((u1 <= -1.0) || rtIsNaN(u1)) {
          u1 = -1.0;
        }

        /* MinMax: '<S28>/Max' */
        localB->Max_pd = u1;

        /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
        u0 = localB->Max_pd;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
        localB->nuacoserer = acos(u0);

        /* Switch: '<S23>/r.v < 0' */
        if (localB->DotProduct6 >= 0.0) {
          /* Switch: '<S23>/r.v < 0' */
          localB->rv0 = localB->nuacoserer;
        } else {
          /* Sum: '<S23>/Sum2' incorporates:
           *  Constant: '<S23>/Constant4'
           */
          localB->Sum2_fk = 6.2831853071795862 - localB->nuacoserer;

          /* Switch: '<S23>/r.v < 0' */
          localB->rv0 = localB->Sum2_fk;
        }

        /* Sum: '<S23>/Sum3' */
        localB->Sum3_p = localB->e_k0 + localB->rv0;

        /* Gain: '<S33>/1//2' */
        localB->u2[0] = 0.5 * localB->n_j0;
        localB->u2[1] = 0.5 * localB->iacosh_kh;
        localB->u2[2] = 0.5 * localB->Sum3_p;

        /* Trigonometry: '<S33>/sincos' */
        u0 = localB->u2[0];
        u1 = sin(u0);
        u0 = cos(u0);
        localB->sincos_o1[0] = u1;
        localB->sincos_o2[0] = u0;
        u0 = localB->u2[1];
        u1 = sin(u0);
        u0 = cos(u0);
        localB->sincos_o1[1] = u1;
        localB->sincos_o2[1] = u0;
        u0 = localB->u2[2];
        u1 = sin(u0);
        u0 = cos(u0);
        localB->sincos_o1[2] = u1;
        localB->sincos_o2[2] = u0;

        /* Fcn: '<S33>/q0' */
        localB->q0 = localB->sincos_o2[0] * localB->sincos_o2[1] *
          localB->sincos_o2[2] - localB->sincos_o1[0] * localB->sincos_o2[1] *
          localB->sincos_o1[2];

        /* Product: '<S37>/Product' */
        localB->Product_gh = localB->q0 * localB->q0;

        /* Fcn: '<S33>/q1' */
        localB->q1 = localB->sincos_o2[0] * localB->sincos_o1[1] *
          localB->sincos_o2[2] + localB->sincos_o1[0] * localB->sincos_o1[1] *
          localB->sincos_o1[2];

        /* Product: '<S37>/Product1' */
        localB->Product1_g5 = localB->q1 * localB->q1;

        /* Fcn: '<S33>/q2' */
        localB->q2 = localB->sincos_o1[0] * localB->sincos_o1[1] *
          localB->sincos_o2[2] - localB->sincos_o2[0] * localB->sincos_o1[1] *
          localB->sincos_o1[2];

        /* Product: '<S37>/Product2' */
        localB->Product2_ay = localB->q2 * localB->q2;

        /* Fcn: '<S33>/q3' */
        localB->q3 = localB->sincos_o1[0] * localB->sincos_o2[1] *
          localB->sincos_o2[2] + localB->sincos_o2[0] * localB->sincos_o2[1] *
          localB->sincos_o1[2];

        /* Product: '<S37>/Product3' */
        localB->Product3_o = localB->q3 * localB->q3;

        /* Sum: '<S37>/Sum' */
        localB->Sum_b = ((localB->Product_gh + localB->Product1_g5) +
                         localB->Product2_ay) + localB->Product3_o;

        /* Sqrt: '<S36>/sqrt' */
        localB->sqrt_p = sqrt(localB->Sum_b);

        /* Product: '<S27>/Product' */
        localB->Product_pg = localB->q0 / localB->sqrt_p;

        /* Product: '<S27>/Product1' */
        localB->Product1_c = localB->q1 / localB->sqrt_p;

        /* Product: '<S27>/Product2' */
        localB->Product2_oj = localB->q2 / localB->sqrt_p;

        /* Product: '<S27>/Product3' */
        localB->Product3_ch = localB->q3 / localB->sqrt_p;

        /* Product: '<S49>/Product' */
        localB->Product_a = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* Product: '<S49>/Product1' */
        localB->Product1_hu = localB->UnaryMinus_e * localB->UnaryMinus_e;

        /* Product: '<S49>/Product2' */
        localB->Product2_dr = localB->UnaryMinus1_d * localB->UnaryMinus1_d;

        /* Product: '<S49>/Product3' */
        localB->Product3_do = localB->UnaryMinus2_f * localB->UnaryMinus2_f;

        /* Sum: '<S49>/Sum' */
        localB->Sum_cx = ((localB->Product_a + localB->Product1_hu) +
                          localB->Product2_dr) + localB->Product3_do;

        /* Sqrt: '<S48>/sqrt' */
        localB->sqrt_b = sqrt(localB->Sum_cx);

        /* Product: '<S26>/Product' */
        localB->Product_on = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_b;

        /* Product: '<S45>/Product' */
        localB->Product_ke = localB->Product_on * localB->Product1_c;

        /* Product: '<S26>/Product1' */
        localB->Product1_ar = localB->UnaryMinus_e / localB->sqrt_b;

        /* Product: '<S45>/Product1' */
        localB->Product1_en = localB->Product1_ar * localB->Product_pg;

        /* Product: '<S26>/Product2' */
        localB->Product2_ov = localB->UnaryMinus1_d / localB->sqrt_b;

        /* Product: '<S45>/Product2' */
        localB->Product2_gu = localB->Product2_ov * localB->Product3_ch;

        /* Product: '<S26>/Product3' */
        localB->Product3_hh = localB->UnaryMinus2_f / localB->sqrt_b;

        /* Product: '<S45>/Product3' */
        localB->Product3_hw3 = localB->Product3_hh * localB->Product2_oj;

        /* Sum: '<S45>/Sum' */
        localB->Sum_dh = ((localB->Product_ke + localB->Product1_en) +
                          localB->Product2_gu) - localB->Product3_hw3;

        /* UnaryMinus: '<S24>/Unary Minus' */
        localB->UnaryMinus_eq = -localB->Sum_dh;

        /* Product: '<S46>/Product' */
        localB->Product_orf = localB->Product_on * localB->Product2_oj;

        /* Product: '<S46>/Product1' */
        localB->Product1_gs1 = localB->Product1_ar * localB->Product3_ch;

        /* Product: '<S46>/Product2' */
        localB->Product2_amg = localB->Product2_ov * localB->Product_pg;

        /* Product: '<S46>/Product3' */
        localB->Product3_ou = localB->Product3_hh * localB->Product1_c;

        /* Sum: '<S46>/Sum' */
        localB->Sum_fc = ((localB->Product_orf - localB->Product1_gs1) +
                          localB->Product2_amg) + localB->Product3_ou;

        /* UnaryMinus: '<S24>/Unary Minus1' */
        localB->UnaryMinus1_o = -localB->Sum_fc;

        /* Product: '<S47>/Product' */
        localB->Product_hl = localB->Product_on * localB->Product3_ch;

        /* Product: '<S47>/Product1' */
        localB->Product1_iu = localB->Product1_ar * localB->Product2_oj;

        /* Product: '<S47>/Product2' */
        localB->Product2_m4 = localB->Product2_ov * localB->Product1_c;

        /* Product: '<S47>/Product3' */
        localB->Product3_ax = localB->Product3_hh * localB->Product_pg;

        /* Sum: '<S47>/Sum' */
        localB->Sum_cw = ((localB->Product_hl + localB->Product1_iu) -
                          localB->Product2_m4) + localB->Product3_ax;

        /* UnaryMinus: '<S24>/Unary Minus2' */
        localB->UnaryMinus2_e = -localB->Sum_cw;

        /* Product: '<S44>/Product' */
        localB->Product_e4 = localB->Product_on * localB->Product_pg;

        /* Product: '<S44>/Product1' */
        localB->Product1_o4 = localB->Product1_ar * localB->Product1_c;

        /* Product: '<S44>/Product2' */
        localB->Product2_do = localB->Product2_ov * localB->Product2_oj;

        /* Product: '<S44>/Product3' */
        localB->Product3_dd = localB->Product3_hh * localB->Product3_ch;

        /* Sum: '<S44>/Sum' */
        localB->Sum_bg = ((localB->Product_e4 - localB->Product1_o4) -
                          localB->Product2_do) - localB->Product3_dd;

        /* If: '<S50>/If' */
        if (asbCubeSatACS_ConstB.Abs_m < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
           *  ActionPort: '<S60>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem' */
        } else if (asbCubeSatACS_ConstB.Abs1_g < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S61>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S62>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem2' */
        }

        /* SignalConversion generated from: '<S51>/Dot Product1' */
        localB->TmpSignalConversionAtDotProdu_k[0] = localB->Sum_ah;
        localB->TmpSignalConversionAtDotProdu_k[1] = localB->Sum_pcb;
        localB->TmpSignalConversionAtDotProdu_k[2] = localB->Sum_ml;

        /* Product: '<S127>/Product' */
        localB->Product_pp0 = localB->Sum_bg * localB->Sum_bg;

        /* Product: '<S127>/Product1' */
        localB->Product1_hp = localB->UnaryMinus_eq * localB->UnaryMinus_eq;

        /* Product: '<S127>/Product2' */
        localB->Product2_fv = localB->UnaryMinus1_o * localB->UnaryMinus1_o;

        /* Product: '<S127>/Product3' */
        localB->Product3_k = localB->UnaryMinus2_e * localB->UnaryMinus2_e;

        /* Sum: '<S127>/Sum' */
        localB->Sum_ik = ((localB->Product_pp0 + localB->Product1_hp) +
                          localB->Product2_fv) + localB->Product3_k;

        /* Sqrt: '<S126>/sqrt' */
        localB->sqrt_g = sqrt(localB->Sum_ik);

        /* Product: '<S122>/Product2' */
        localB->Product2_ah = localB->UnaryMinus1_o / localB->sqrt_g;

        /* Product: '<S123>/Product6' */
        localB->Product6_g = localB->Product2_ah * localB->Product2_ah;

        /* Product: '<S122>/Product3' */
        localB->Product3_dn = localB->UnaryMinus2_e / localB->sqrt_g;

        /* Product: '<S123>/Product7' */
        localB->Product7_hr = localB->Product3_dn * localB->Product3_dn;

        /* Sum: '<S123>/Sum3' incorporates:
         *  Constant: '<S123>/Constant'
         */
        localB->Sum3_hf = (0.5 - localB->Product6_g) - localB->Product7_hr;

        /* Gain: '<S123>/Gain2' */
        localB->Gain2_dd = 2.0 * localB->Sum3_hf;

        /* Product: '<S123>/Product8' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product8_b = 0.0 * localB->Gain2_dd;

        /* Product: '<S122>/Product1' */
        localB->Product1_l1 = localB->UnaryMinus_eq / localB->sqrt_g;

        /* Product: '<S123>/Product' */
        localB->Product_co = localB->Product1_l1 * localB->Product2_ah;

        /* Product: '<S122>/Product' */
        localB->Product_ki = localB->Sum_bg / localB->sqrt_g;

        /* Product: '<S123>/Product1' */
        localB->Product1_hh = localB->Product_ki * localB->Product3_dn;

        /* Sum: '<S123>/Sum1' */
        localB->Sum1_ax = localB->Product_co + localB->Product1_hh;

        /* Gain: '<S123>/Gain' */
        localB->Gain_e = 2.0 * localB->Sum1_ax;

        /* Product: '<S123>/Product4' */
        localB->Product4_b = localB->Gain_e;

        /* Product: '<S123>/Product2' */
        localB->Product2_k3 = localB->Product_ki * localB->Product2_ah;

        /* Product: '<S123>/Product3' */
        localB->Product3_oa = localB->Product1_l1 * localB->Product3_dn;

        /* Sum: '<S123>/Sum2' */
        localB->Sum2_ib = localB->Product3_oa - localB->Product2_k3;

        /* Gain: '<S123>/Gain1' */
        localB->Gain1_lm = 2.0 * localB->Sum2_ib;

        /* Product: '<S123>/Product5' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product5_fa = localB->Gain1_lm * 0.0;

        /* Sum: '<S123>/Sum' */
        localB->Sum_mj = (localB->Product8_b + localB->Product4_b) +
          localB->Product5_fa;

        /* Product: '<S124>/Product' */
        localB->Product_i2 = localB->Product1_l1 * localB->Product2_ah;

        /* Product: '<S124>/Product1' */
        localB->Product1_ir = localB->Product_ki * localB->Product3_dn;

        /* Sum: '<S124>/Sum1' */
        localB->Sum1_g = localB->Product_i2 - localB->Product1_ir;

        /* Gain: '<S124>/Gain' */
        localB->Gain_gi = 2.0 * localB->Sum1_g;

        /* Product: '<S124>/Product4' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product4_oz = 0.0 * localB->Gain_gi;

        /* Product: '<S124>/Product6' */
        localB->Product6_gv = localB->Product1_l1 * localB->Product1_l1;

        /* Product: '<S124>/Product7' */
        localB->Product7_i = localB->Product3_dn * localB->Product3_dn;

        /* Sum: '<S124>/Sum3' incorporates:
         *  Constant: '<S124>/Constant'
         */
        localB->Sum3_cr = (0.5 - localB->Product6_gv) - localB->Product7_i;

        /* Gain: '<S124>/Gain2' */
        localB->Gain2_m = 2.0 * localB->Sum3_cr;

        /* Product: '<S124>/Product8' */
        localB->Product8_bm = localB->Gain2_m;

        /* Product: '<S124>/Product2' */
        localB->Product2_ps = localB->Product_ki * localB->Product1_l1;

        /* Product: '<S124>/Product3' */
        localB->Product3_b1 = localB->Product2_ah * localB->Product3_dn;

        /* Sum: '<S124>/Sum2' */
        localB->Sum2_a = localB->Product2_ps + localB->Product3_b1;

        /* Gain: '<S124>/Gain1' */
        localB->Gain1_h = 2.0 * localB->Sum2_a;

        /* Product: '<S124>/Product5' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product5_nv = localB->Gain1_h * 0.0;

        /* Sum: '<S124>/Sum' */
        localB->Sum_ia = (localB->Product4_oz + localB->Product8_bm) +
          localB->Product5_nv;

        /* Product: '<S125>/Product' */
        localB->Product_c2 = localB->Product1_l1 * localB->Product3_dn;

        /* Product: '<S125>/Product1' */
        localB->Product1_om = localB->Product_ki * localB->Product2_ah;

        /* Sum: '<S125>/Sum1' */
        localB->Sum1_h1 = localB->Product_c2 + localB->Product1_om;

        /* Gain: '<S125>/Gain' */
        localB->Gain_lx = 2.0 * localB->Sum1_h1;

        /* Product: '<S125>/Product4' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product4_fe = 0.0 * localB->Gain_lx;

        /* Product: '<S125>/Product2' */
        localB->Product2_gr = localB->Product_ki * localB->Product1_l1;

        /* Product: '<S125>/Product3' */
        localB->Product3_ju = localB->Product2_ah * localB->Product3_dn;

        /* Sum: '<S125>/Sum2' */
        localB->Sum2_h = localB->Product3_ju - localB->Product2_gr;

        /* Gain: '<S125>/Gain1' */
        localB->Gain1_b = 2.0 * localB->Sum2_h;

        /* Product: '<S125>/Product5' */
        localB->Product5_k = localB->Gain1_b;

        /* Product: '<S125>/Product6' */
        localB->Product6_bb = localB->Product1_l1 * localB->Product1_l1;

        /* Product: '<S125>/Product7' */
        localB->Product7_p = localB->Product2_ah * localB->Product2_ah;

        /* Sum: '<S125>/Sum3' incorporates:
         *  Constant: '<S125>/Constant'
         */
        localB->Sum3_n = (0.5 - localB->Product6_bb) - localB->Product7_p;

        /* Gain: '<S125>/Gain2' */
        localB->Gain2_a = 2.0 * localB->Sum3_n;

        /* Product: '<S125>/Product8' incorporates:
         *  Constant: '<S7>/secondaryConstraint'
         */
        localB->Product8_i = localB->Gain2_a * 0.0;

        /* Sum: '<S125>/Sum' */
        localB->Sum_kr = (localB->Product4_fe + localB->Product5_k) +
          localB->Product8_i;

        /* SignalConversion generated from: '<S51>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_j[0] = localB->Sum_mj;
        localB->TmpSignalConversionAtDotProdu_j[1] = localB->Sum_ia;
        localB->TmpSignalConversionAtDotProdu_j[2] = localB->Sum_kr;

        /* DotProduct: '<S51>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u1 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmp_0 = u0 * u1;

        /* DotProduct: '<S51>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u1 = localB->TmpSignalConversionAtDotProdu_k[0];
        tmp_2 = u0 * u1;

        /* DotProduct: '<S51>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_j[0];
        u1 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmp_3 = u0 * u1;

        /* DotProduct: '<S51>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u1 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u1 = localB->TmpSignalConversionAtDotProdu_k[1];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_j[1];
        u1 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u1 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u1 = localB->TmpSignalConversionAtDotProdu_k[2];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_j[2];
        u1 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S51>/Dot Product3' */
        localB->DotProduct3_o = tmp_0;

        /* DotProduct: '<S51>/Dot Product1' */
        localB->DotProduct1_n = tmp_2;

        /* DotProduct: '<S51>/Dot Product2' */
        localB->DotProduct2_c = tmp_3;

        /* Product: '<S51>/Divide1' */
        localB->Divide1_n = localB->DotProduct1_n * localB->DotProduct2_c;

        /* Sqrt: '<S51>/Sqrt3' */
        localB->Sqrt3_a = sqrt(localB->Divide1_n);

        /* Product: '<S51>/Divide' */
        localB->Divide_m = localB->DotProduct3_o / localB->Sqrt3_a;

        /* Bias: '<S51>/Bias' */
        localB->Bias_f = localB->Divide_m + -1.0;

        /* Abs: '<S51>/Abs' */
        localB->Abs_o = fabs(localB->Bias_f);

        /* Bias: '<S51>/Bias1' */
        localB->Bias1_p = localB->Divide_m + 1.0;

        /* Abs: '<S51>/Abs1' */
        localB->Abs1_o = fabs(localB->Bias1_p);

        /* If: '<S51>/If' */
        if (localB->Abs_o < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
           *  ActionPort: '<S63>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_o);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
        } else if (localB->Abs1_o < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S64>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_o);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S65>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_o);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S52>/Compare' incorporates:
         *  Constant: '<S52>/Constant'
         */
        localB->Compare_f = (localB->Merge_k != 0.0);

        /* RelationalOperator: '<S53>/Compare' incorporates:
         *  Constant: '<S53>/Constant'
         */
        localB->Compare_l = (localB->Merge_o != 0.0);

        /* Logic: '<S12>/OR' */
        localB->OR_c = (localB->Compare_f || localB->Compare_l);

        /* DotProduct: '<S56>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u1 = 0.0 * u0;

        /* DotProduct: '<S56>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        tmp_2 = tmp_0 * u0;

        /* DotProduct: '<S77>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        tmp_3 = 0.0 * u0;

        /* DotProduct: '<S77>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[0];
        u0 = localB->TmpSignalConversionAtDotProdu_k[0];
        tmp_4 = tmp_0 * u0;

        /* DotProduct: '<S56>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u1 += 0.0 * u0;

        /* DotProduct: '<S56>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        tmp_2 += tmp_0 * u0;

        /* DotProduct: '<S77>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        tmp_3 += 0.0 * u0;

        /* DotProduct: '<S77>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[1];
        u0 = localB->TmpSignalConversionAtDotProdu_k[1];
        tmp_4 += tmp_0 * u0;

        /* DotProduct: '<S56>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u1 += u0;

        /* DotProduct: '<S56>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        tmp_2 += tmp_0 * u0;

        /* DotProduct: '<S77>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        tmp_3 += u0;

        /* DotProduct: '<S77>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProdu_k[2];
        u0 = localB->TmpSignalConversionAtDotProdu_k[2];
        tmp_4 += tmp_0 * u0;

        /* DotProduct: '<S56>/Dot Product3' */
        localB->DotProduct3_n = u1;

        /* DotProduct: '<S56>/Dot Product2' */
        localB->DotProduct2_k = tmp_2;

        /* Product: '<S56>/Divide1' */
        localB->Divide1_nh = asbCubeSatACS_ConstB.DotProduct1_hl *
          localB->DotProduct2_k;

        /* Sqrt: '<S56>/Sqrt3' */
        localB->Sqrt3_n = sqrt(localB->Divide1_nh);

        /* Sum: '<S56>/Add2' */
        localB->Add2_c = localB->DotProduct3_n + localB->Sqrt3_n;

        /* Product: '<S90>/Product' */
        localB->Product_e0 = localB->Add2_c * localB->Add2_c;

        /* DotProduct: '<S77>/Dot Product3' */
        localB->DotProduct3_b = tmp_3;

        /* DotProduct: '<S77>/Dot Product2' */
        localB->DotProduct2_n = tmp_4;

        /* Product: '<S77>/Divide1' */
        localB->Divide1_nj = asbCubeSatACS_ConstB.DotProduct1_p *
          localB->DotProduct2_n;

        /* Sqrt: '<S77>/Sqrt3' */
        localB->Sqrt3_ko = sqrt(localB->Divide1_nj);

        /* Product: '<S77>/Divide' */
        localB->Divide_l = localB->DotProduct3_b / localB->Sqrt3_ko;

        /* Bias: '<S77>/Bias' */
        localB->Bias_a = localB->Divide_l + -1.0;

        /* Abs: '<S77>/Abs' */
        localB->Abs_m = fabs(localB->Bias_a);

        /* Bias: '<S77>/Bias1' */
        localB->Bias1_m = localB->Divide_l + 1.0;

        /* Abs: '<S77>/Abs1' */
        localB->Abs1_m = fabs(localB->Bias1_m);

        /* If: '<S77>/If' */
        if (localB->Abs_m < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
           *  ActionPort: '<S83>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_a);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
        } else if (localB->Abs1_m < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S84>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_a);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S85>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_a);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S78>/Compare' incorporates:
         *  Constant: '<S78>/Constant'
         */
        localB->Compare_fr = (localB->Merge_a != -1.0);

        /* Switch: '<S56>/is 180deg Rot' */
        if (localB->Compare_fr) {
          /* Product: '<S82>/j x i' incorporates:
           *  Constant: '<S7>/primaryAlignment'
           */
          localB->jxi_l = 0.0 * localB->Sum_ah;

          /* Product: '<S82>/i x k' incorporates:
           *  Constant: '<S7>/primaryAlignment'
           */
          localB->ixk_l = 0.0 * localB->Sum_ml;

          /* Product: '<S82>/k x j' */
          localB->kxj_b = localB->Sum_pcb;

          /* Product: '<S81>/i x j' incorporates:
           *  Constant: '<S7>/primaryAlignment'
           */
          localB->ixj_j = 0.0 * localB->Sum_pcb;

          /* Product: '<S81>/k x i' */
          localB->kxi_o = localB->Sum_ah;

          /* Product: '<S81>/j x k' incorporates:
           *  Constant: '<S7>/primaryAlignment'
           */
          localB->jxk_hle = 0.0 * localB->Sum_ml;

          /* Sum: '<S76>/Sum' */
          localB->Sum_do[0] = localB->jxk_hle - localB->kxj_b;
          localB->Sum_do[1] = localB->kxi_o - localB->ixk_l;
          localB->Sum_do[2] = localB->ixj_j - localB->jxi_l;

          /* Switch: '<S56>/is 180deg Rot' */
          localB->is180degRot_p[0] = localB->Sum_do[0];
          localB->is180degRot_p[1] = localB->Sum_do[1];
          localB->is180degRot_p[2] = localB->Sum_do[2];
        } else {
          /* Switch: '<S56>/is 180deg Rot' */
          localB->is180degRot_p[0] = asbCubeSatACS_ConstB.Sum_c[0];
          localB->is180degRot_p[1] = asbCubeSatACS_ConstB.Sum_c[1];
          localB->is180degRot_p[2] = asbCubeSatACS_ConstB.Sum_c[2];
        }

        /* Product: '<S90>/Product1' */
        localB->Product1_k = localB->is180degRot_p[0] * localB->is180degRot_p[0];

        /* Product: '<S90>/Product2' */
        localB->Product2_hd = localB->is180degRot_p[1] * localB->is180degRot_p[1];

        /* Product: '<S90>/Product3' */
        localB->Product3_hx = localB->is180degRot_p[2] * localB->is180degRot_p[2];

        /* Sum: '<S90>/Sum' */
        localB->Sum_p1 = ((localB->Product_e0 + localB->Product1_k) +
                          localB->Product2_hd) + localB->Product3_hx;

        /* Sqrt: '<S89>/sqrt' */
        localB->sqrt_e5 = sqrt(localB->Sum_p1);

        /* Product: '<S80>/Product' */
        localB->Product_fd = localB->Add2_c / localB->sqrt_e5;

        /* Product: '<S114>/j x k' */
        localB->jxk_i = localB->Sum_pcb * localB->Sum_kr;

        /* Product: '<S114>/k x i' */
        localB->kxi_p = localB->Sum_ml * localB->Sum_mj;

        /* Product: '<S114>/i x j' */
        localB->ixj_gk = localB->Sum_ah * localB->Sum_ia;

        /* Product: '<S115>/k x j' */
        localB->kxj_n = localB->Sum_ml * localB->Sum_ia;

        /* Product: '<S115>/i x k' */
        localB->ixk_hg = localB->Sum_ah * localB->Sum_kr;

        /* Product: '<S115>/j x i' */
        localB->jxi_dy = localB->Sum_pcb * localB->Sum_mj;

        /* Sum: '<S112>/Sum' */
        localB->Sum_ab[0] = localB->jxk_i - localB->kxj_n;
        localB->Sum_ab[1] = localB->kxi_p - localB->ixk_hg;
        localB->Sum_ab[2] = localB->ixj_gk - localB->jxi_dy;

        /* Product: '<S116>/j x k' */
        localB->jxk_h = localB->Sum_ab[1] * localB->Sum_ml;

        /* Product: '<S116>/k x i' */
        localB->kxi_f2 = localB->Sum_ab[2] * localB->Sum_ah;

        /* Product: '<S116>/i x j' */
        localB->ixj_e = localB->Sum_ab[0] * localB->Sum_pcb;

        /* Product: '<S117>/k x j' */
        localB->kxj_op = localB->Sum_ab[2] * localB->Sum_pcb;

        /* Product: '<S117>/i x k' */
        localB->ixk_k = localB->Sum_ab[0] * localB->Sum_ml;

        /* Product: '<S117>/j x i' */
        localB->jxi_g0 = localB->Sum_ab[1] * localB->Sum_ah;

        /* Sum: '<S113>/Sum' */
        localB->Sum_gf[0] = localB->jxk_h - localB->kxj_op;
        localB->Sum_gf[1] = localB->kxi_f2 - localB->ixk_k;
        localB->Sum_gf[2] = localB->ixj_e - localB->jxi_g0;

        /* Product: '<S80>/Product2' */
        localB->Product2_jl = localB->is180degRot_p[1] / localB->sqrt_e5;

        /* Product: '<S75>/Product' */
        localB->Product_l = localB->Product_fd * localB->Product_fd;

        /* Product: '<S80>/Product1' */
        localB->Product1_ex = localB->is180degRot_p[0] / localB->sqrt_e5;

        /* Product: '<S75>/Product1' */
        localB->Product1_ef = localB->Product1_ex * localB->Product1_ex;

        /* Product: '<S75>/Product2' */
        localB->Product2_b = localB->Product2_jl * localB->Product2_jl;

        /* Product: '<S80>/Product3' */
        localB->Product3_l = localB->is180degRot_p[2] / localB->sqrt_e5;

        /* Product: '<S75>/Product3' */
        localB->Product3_hv = localB->Product3_l * localB->Product3_l;

        /* Sum: '<S75>/Sum' */
        localB->Sum_j3 = ((localB->Product_l + localB->Product1_ef) +
                          localB->Product2_b) + localB->Product3_hv;

        /* Sqrt: '<S74>/sqrt' */
        localB->sqrt_bh = sqrt(localB->Sum_j3);

        /* Product: '<S70>/Product2' */
        localB->Product2_g5 = localB->Product2_jl / localB->sqrt_bh;

        /* Product: '<S71>/Product6' */
        localB->Product6_f = localB->Product2_g5 * localB->Product2_g5;

        /* Product: '<S70>/Product3' */
        localB->Product3_fb = localB->Product3_l / localB->sqrt_bh;

        /* Product: '<S71>/Product7' */
        localB->Product7_d = localB->Product3_fb * localB->Product3_fb;

        /* Sum: '<S71>/Sum3' incorporates:
         *  Constant: '<S71>/Constant'
         */
        localB->Sum3_dm = (0.5 - localB->Product6_f) - localB->Product7_d;

        /* Gain: '<S71>/Gain2' */
        localB->Gain2_mk = 2.0 * localB->Sum3_dm;

        /* Product: '<S71>/Product8' */
        localB->Product8_pc = localB->Sum_gf[0] * localB->Gain2_mk;

        /* Product: '<S70>/Product1' */
        localB->Product1_o5 = localB->Product1_ex / localB->sqrt_bh;

        /* Product: '<S71>/Product' */
        localB->Product_ak = localB->Product1_o5 * localB->Product2_g5;

        /* Product: '<S70>/Product' */
        localB->Product_im = localB->Product_fd / localB->sqrt_bh;

        /* Product: '<S71>/Product1' */
        localB->Product1_jv = localB->Product_im * localB->Product3_fb;

        /* Sum: '<S71>/Sum1' */
        localB->Sum1_jd = localB->Product_ak + localB->Product1_jv;

        /* Gain: '<S71>/Gain' */
        localB->Gain_bh = 2.0 * localB->Sum1_jd;

        /* Product: '<S71>/Product4' */
        localB->Product4_j = localB->Gain_bh * localB->Sum_gf[1];

        /* Product: '<S71>/Product2' */
        localB->Product2_ls = localB->Product_im * localB->Product2_g5;

        /* Product: '<S71>/Product3' */
        localB->Product3_kc = localB->Product1_o5 * localB->Product3_fb;

        /* Sum: '<S71>/Sum2' */
        localB->Sum2_d4 = localB->Product3_kc - localB->Product2_ls;

        /* Gain: '<S71>/Gain1' */
        localB->Gain1_a = 2.0 * localB->Sum2_d4;

        /* Product: '<S71>/Product5' */
        localB->Product5_jf = localB->Gain1_a * localB->Sum_gf[2];

        /* Sum: '<S71>/Sum' */
        localB->Sum_ev = (localB->Product8_pc + localB->Product4_j) +
          localB->Product5_jf;

        /* Product: '<S72>/Product' */
        localB->Product_j = localB->Product1_o5 * localB->Product2_g5;

        /* Product: '<S72>/Product1' */
        localB->Product1_bo = localB->Product_im * localB->Product3_fb;

        /* Sum: '<S72>/Sum1' */
        localB->Sum1_cy = localB->Product_j - localB->Product1_bo;

        /* Gain: '<S72>/Gain' */
        localB->Gain_n4 = 2.0 * localB->Sum1_cy;

        /* Product: '<S72>/Product4' */
        localB->Product4_mx = localB->Sum_gf[0] * localB->Gain_n4;

        /* Product: '<S72>/Product6' */
        localB->Product6_mq = localB->Product1_o5 * localB->Product1_o5;

        /* Product: '<S72>/Product7' */
        localB->Product7_cs = localB->Product3_fb * localB->Product3_fb;

        /* Sum: '<S72>/Sum3' incorporates:
         *  Constant: '<S72>/Constant'
         */
        localB->Sum3_g = (0.5 - localB->Product6_mq) - localB->Product7_cs;

        /* Gain: '<S72>/Gain2' */
        localB->Gain2_g = 2.0 * localB->Sum3_g;

        /* Product: '<S72>/Product8' */
        localB->Product8_cw = localB->Gain2_g * localB->Sum_gf[1];

        /* Product: '<S72>/Product2' */
        localB->Product2_a0 = localB->Product_im * localB->Product1_o5;

        /* Product: '<S72>/Product3' */
        localB->Product3_a4 = localB->Product2_g5 * localB->Product3_fb;

        /* Sum: '<S72>/Sum2' */
        localB->Sum2_j = localB->Product2_a0 + localB->Product3_a4;

        /* Gain: '<S72>/Gain1' */
        localB->Gain1_bl = 2.0 * localB->Sum2_j;

        /* Product: '<S72>/Product5' */
        localB->Product5_ge = localB->Gain1_bl * localB->Sum_gf[2];

        /* Sum: '<S72>/Sum' */
        localB->Sum_ow = (localB->Product4_mx + localB->Product8_cw) +
          localB->Product5_ge;

        /* Product: '<S73>/Product' */
        localB->Product_b3 = localB->Product1_o5 * localB->Product3_fb;

        /* Product: '<S73>/Product1' */
        localB->Product1_ph = localB->Product_im * localB->Product2_g5;

        /* Sum: '<S73>/Sum1' */
        localB->Sum1_b2 = localB->Product_b3 + localB->Product1_ph;

        /* Gain: '<S73>/Gain' */
        localB->Gain_lj = 2.0 * localB->Sum1_b2;

        /* Product: '<S73>/Product4' */
        localB->Product4_pw = localB->Sum_gf[0] * localB->Gain_lj;

        /* Product: '<S73>/Product2' */
        localB->Product2_cw = localB->Product_im * localB->Product1_o5;

        /* Product: '<S73>/Product3' */
        localB->Product3_ix = localB->Product2_g5 * localB->Product3_fb;

        /* Sum: '<S73>/Sum2' */
        localB->Sum2_dn = localB->Product3_ix - localB->Product2_cw;

        /* Gain: '<S73>/Gain1' */
        localB->Gain1_lm3 = 2.0 * localB->Sum2_dn;

        /* Product: '<S73>/Product5' */
        localB->Product5_jz = localB->Gain1_lm3 * localB->Sum_gf[1];

        /* Product: '<S73>/Product6' */
        localB->Product6_mo = localB->Product1_o5 * localB->Product1_o5;

        /* Product: '<S73>/Product7' */
        localB->Product7_mi = localB->Product2_g5 * localB->Product2_g5;

        /* Sum: '<S73>/Sum3' incorporates:
         *  Constant: '<S73>/Constant'
         */
        localB->Sum3_al = (0.5 - localB->Product6_mo) - localB->Product7_mi;

        /* Gain: '<S73>/Gain2' */
        localB->Gain2_pg = 2.0 * localB->Sum3_al;

        /* Product: '<S73>/Product8' */
        localB->Product8_bz = localB->Gain2_pg * localB->Sum_gf[2];

        /* Sum: '<S73>/Sum' */
        localB->Sum_on = (localB->Product4_pw + localB->Product5_jz) +
          localB->Product8_bz;

        /* SignalConversion generated from: '<S92>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_c[0] = localB->Sum_ev;
        localB->TmpSignalConversionAtDotProdu_c[1] = localB->Sum_ow;
        localB->TmpSignalConversionAtDotProdu_c[2] = localB->Sum_on;

        /* DotProduct: '<S92>/Dot Product3' incorporates:
         *  Sum: '<S107>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_c[0];
        u1 = asbCubeSatACS_ConstB.Sum_e[0] * u0;

        /* DotProduct: '<S92>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_c[0];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_c[0];
        tmp_2 = u0 * tmp_0;

        /* DotProduct: '<S92>/Dot Product3' incorporates:
         *  Sum: '<S107>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_c[1];
        u1 += asbCubeSatACS_ConstB.Sum_e[1] * u0;

        /* DotProduct: '<S92>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_c[1];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_c[1];
        tmp_2 += u0 * tmp_0;

        /* DotProduct: '<S92>/Dot Product3' incorporates:
         *  Sum: '<S107>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_c[2];
        u1 += asbCubeSatACS_ConstB.Sum_e[2] * u0;

        /* DotProduct: '<S92>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_c[2];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_c[2];
        tmp_2 += u0 * tmp_0;

        /* DotProduct: '<S92>/Dot Product3' */
        localB->DotProduct3_m = u1;

        /* DotProduct: '<S92>/Dot Product2' */
        localB->DotProduct2_ck = tmp_2;

        /* Product: '<S92>/Divide1' */
        localB->Divide1_dp = asbCubeSatACS_ConstB.DotProduct1_b *
          localB->DotProduct2_ck;

        /* Sqrt: '<S92>/Sqrt3' */
        localB->Sqrt3_av = sqrt(localB->Divide1_dp);

        /* Product: '<S92>/Divide' */
        localB->Divide_f = localB->DotProduct3_m / localB->Sqrt3_av;

        /* Bias: '<S92>/Bias' */
        localB->Bias_c = localB->Divide_f + -1.0;

        /* Abs: '<S92>/Abs' */
        localB->Abs_k = fabs(localB->Bias_c);

        /* Bias: '<S92>/Bias1' */
        localB->Bias1_fx = localB->Divide_f + 1.0;

        /* Abs: '<S92>/Abs1' */
        localB->Abs1_md = fabs(localB->Bias1_fx);

        /* If: '<S92>/If' */
        if (localB->Abs_k < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
           *  ActionPort: '<S98>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_di);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem' */
        } else if (localB->Abs1_md < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S99>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_di);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S100>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_di);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem2' */
        }

        /* Switch: '<S12>/Switch' */
        if (localB->OR_c) {
          /* Switch: '<S12>/Switch' */
          localB->Switch_p[0] = localB->Product_fd;
          localB->Switch_p[1] = localB->Product1_ex;
          localB->Switch_p[2] = localB->Product2_jl;
          localB->Switch_p[3] = localB->Product3_l;
        } else {
          /* RelationalOperator: '<S93>/Compare' incorporates:
           *  Constant: '<S93>/Constant'
           */
          localB->Compare_b = (localB->Merge_di != -1.0);

          /* Switch: '<S57>/is 180deg Rot' */
          if (localB->Compare_b) {
            /* Product: '<S97>/j x i' */
            localB->jxi_di = asbCubeSatACS_ConstB.Sum_e[1] * localB->Sum_ev;

            /* Product: '<S97>/i x k' */
            localB->ixk_i = asbCubeSatACS_ConstB.Sum_e[0] * localB->Sum_on;

            /* Product: '<S97>/k x j' */
            localB->kxj_eu = asbCubeSatACS_ConstB.Sum_e[2] * localB->Sum_ow;

            /* Product: '<S96>/i x j' */
            localB->ixj_h = asbCubeSatACS_ConstB.Sum_e[0] * localB->Sum_ow;

            /* Product: '<S96>/k x i' */
            localB->kxi_k = asbCubeSatACS_ConstB.Sum_e[2] * localB->Sum_ev;

            /* Product: '<S96>/j x k' */
            localB->jxk_hl = asbCubeSatACS_ConstB.Sum_e[1] * localB->Sum_on;

            /* Sum: '<S91>/Sum' */
            localB->Sum_gh[0] = localB->jxk_hl - localB->kxj_eu;
            localB->Sum_gh[1] = localB->kxi_k - localB->ixk_i;
            localB->Sum_gh[2] = localB->ixj_h - localB->jxi_di;

            /* Switch: '<S57>/is 180deg Rot' */
            localB->is180degRot_o[0] = localB->Sum_gh[0];
            localB->is180degRot_o[1] = localB->Sum_gh[1];
            localB->is180degRot_o[2] = localB->Sum_gh[2];
          } else {
            /* Switch: '<S57>/is 180deg Rot' */
            localB->is180degRot_o[0] = asbCubeSatACS_ConstB.Sum_ij[0];
            localB->is180degRot_o[1] = asbCubeSatACS_ConstB.Sum_ij[1];
            localB->is180degRot_o[2] = asbCubeSatACS_ConstB.Sum_ij[2];
          }

          /* Product: '<S105>/Product3' */
          localB->Product3_fl = localB->is180degRot_o[2] * localB->
            is180degRot_o[2];

          /* Product: '<S105>/Product2' */
          localB->Product2_jr = localB->is180degRot_o[1] * localB->
            is180degRot_o[1];

          /* Product: '<S105>/Product1' */
          localB->Product1_ig = localB->is180degRot_o[0] * localB->
            is180degRot_o[0];

          /* DotProduct: '<S57>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_c[0];
          u1 = localB->TmpSignalConversionAtDotProdu_c[0];
          tmp_0 = u0 * u1;

          /* DotProduct: '<S57>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_c[0];
          tmp_2 = asbCubeSatACS_ConstB.Sum_e[0] * u0;

          /* DotProduct: '<S57>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_c[1];
          u1 = localB->TmpSignalConversionAtDotProdu_c[1];
          tmp_0 += u0 * u1;

          /* DotProduct: '<S57>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_c[1];
          tmp_2 += asbCubeSatACS_ConstB.Sum_e[1] * u0;

          /* DotProduct: '<S57>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_c[2];
          u1 = localB->TmpSignalConversionAtDotProdu_c[2];
          tmp_0 += u0 * u1;

          /* DotProduct: '<S57>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_c[2];
          tmp_2 += asbCubeSatACS_ConstB.Sum_e[2] * u0;

          /* DotProduct: '<S57>/Dot Product2' */
          localB->DotProduct2_ci = tmp_0;

          /* Product: '<S57>/Divide1' */
          localB->Divide1_nv = asbCubeSatACS_ConstB.DotProduct1_d *
            localB->DotProduct2_ci;

          /* Sqrt: '<S57>/Sqrt3' */
          localB->Sqrt3_m = sqrt(localB->Divide1_nv);

          /* DotProduct: '<S57>/Dot Product3' */
          localB->DotProduct3_a = tmp_2;

          /* Sum: '<S57>/Add2' */
          localB->Add2_e = localB->DotProduct3_a + localB->Sqrt3_m;

          /* Product: '<S105>/Product' */
          localB->Product_f4 = localB->Add2_e * localB->Add2_e;

          /* Sum: '<S105>/Sum' */
          localB->Sum_gz = ((localB->Product_f4 + localB->Product1_ig) +
                            localB->Product2_jr) + localB->Product3_fl;

          /* Sqrt: '<S104>/sqrt' */
          localB->sqrt_c = sqrt(localB->Sum_gz);

          /* Product: '<S95>/Product3' */
          localB->Product3_md = localB->is180degRot_o[2] / localB->sqrt_c;

          /* Product: '<S66>/Product3' */
          localB->Product3_e5 = localB->Product3_l * localB->Product3_md;

          /* Product: '<S95>/Product2' */
          localB->Product2_pn = localB->is180degRot_o[1] / localB->sqrt_c;

          /* Product: '<S66>/Product2' */
          localB->Product2_iy = localB->Product2_jl * localB->Product2_pn;

          /* Product: '<S95>/Product1' */
          localB->Product1_di = localB->is180degRot_o[0] / localB->sqrt_c;

          /* Product: '<S66>/Product1' */
          localB->Product1_g4 = localB->Product1_ex * localB->Product1_di;

          /* Product: '<S95>/Product' */
          localB->Product_hb = localB->Add2_e / localB->sqrt_c;

          /* Product: '<S66>/Product' */
          localB->Product_ek = localB->Product_fd * localB->Product_hb;

          /* Sum: '<S66>/Sum' */
          localB->Sum_cu = ((localB->Product_ek - localB->Product1_g4) -
                            localB->Product2_iy) - localB->Product3_e5;

          /* Product: '<S67>/Product3' */
          localB->Product3_g = localB->Product3_l * localB->Product2_pn;

          /* Product: '<S67>/Product2' */
          localB->Product2_gy = localB->Product2_jl * localB->Product3_md;

          /* Product: '<S67>/Product1' */
          localB->Product1_kh = localB->Product1_ex * localB->Product_hb;

          /* Product: '<S67>/Product' */
          localB->Product_p5 = localB->Product_fd * localB->Product1_di;

          /* Sum: '<S67>/Sum' */
          localB->Sum_od = ((localB->Product_p5 + localB->Product1_kh) +
                            localB->Product2_gy) - localB->Product3_g;

          /* Product: '<S68>/Product3' */
          localB->Product3_mq = localB->Product3_l * localB->Product1_di;

          /* Product: '<S68>/Product2' */
          localB->Product2_o4z = localB->Product2_jl * localB->Product_hb;

          /* Product: '<S68>/Product1' */
          localB->Product1_iw = localB->Product1_ex * localB->Product3_md;

          /* Product: '<S68>/Product' */
          localB->Product_hu = localB->Product_fd * localB->Product2_pn;

          /* Sum: '<S68>/Sum' */
          localB->Sum_krr = ((localB->Product_hu - localB->Product1_iw) +
                             localB->Product2_o4z) + localB->Product3_mq;

          /* Product: '<S69>/Product3' */
          localB->Product3_ics = localB->Product3_l * localB->Product_hb;

          /* Product: '<S69>/Product2' */
          localB->Product2_au = localB->Product2_jl * localB->Product1_di;

          /* Product: '<S69>/Product1' */
          localB->Product1_a0 = localB->Product1_ex * localB->Product2_pn;

          /* Product: '<S69>/Product' */
          localB->Product_nm = localB->Product_fd * localB->Product3_md;

          /* Sum: '<S69>/Sum' */
          localB->Sum_mi = ((localB->Product_nm + localB->Product1_a0) -
                            localB->Product2_au) + localB->Product3_ics;

          /* Switch: '<S12>/Switch' */
          localB->Switch_p[0] = localB->Sum_cu;
          localB->Switch_p[1] = localB->Sum_od;
          localB->Switch_p[2] = localB->Sum_krr;
          localB->Switch_p[3] = localB->Sum_mi;
        }

        /* Merge: '<S3>/ Merge 1' incorporates:
         *  SignalConversion generated from: '<S5>/cmd_q_b2tgt'
         */
        localB->cmd_q_b2tgt[0] = localB->Switch_p[0];
        localB->cmd_q_b2tgt[1] = localB->Switch_p[1];
        localB->cmd_q_b2tgt[2] = localB->Switch_p[2];
        localB->cmd_q_b2tgt[3] = localB->Switch_p[3];

        /* Product: '<S135>/Product' */
        localB->Product_mx = localB->Switch_p[0] * localB->Switch_p[0];

        /* Product: '<S135>/Product1' */
        localB->Product1_fz = localB->Switch_p[1] * localB->Switch_p[1];

        /* Product: '<S135>/Product2' */
        localB->Product2_p4 = localB->Switch_p[2] * localB->Switch_p[2];

        /* Product: '<S135>/Product3' */
        localB->Product3_kb = localB->Switch_p[3] * localB->Switch_p[3];

        /* Sum: '<S135>/Sum' */
        localB->Sum_ka = ((localB->Product_mx + localB->Product1_fz) +
                          localB->Product2_p4) + localB->Product3_kb;

        /* Sqrt: '<S134>/sqrt' */
        localB->sqrt_j = sqrt(localB->Sum_ka);

        /* Product: '<S129>/Product' */
        localB->Product_j5 = localB->Switch_p[0] / localB->sqrt_j;

        /* Product: '<S129>/Product1' */
        localB->Product1_ik = localB->Switch_p[1] / localB->sqrt_j;

        /* Product: '<S129>/Product2' */
        localB->Product2_ev = localB->Switch_p[2] / localB->sqrt_j;

        /* Product: '<S129>/Product3' */
        localB->Product3_fq1 = localB->Switch_p[3] / localB->sqrt_j;

        /* Fcn: '<S9>/fcn3' */
        localB->fcn3_l = (localB->Product1_ik * localB->Product3_fq1 +
                          localB->Product_j5 * localB->Product2_ev) * 2.0;

        /* If: '<S130>/If' */
        if (localB->fcn3_l > 1.0) {
          /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem' incorporates:
           *  ActionPort: '<S131>/Action Port'
           */
          /* Merge: '<S130>/Merge' incorporates:
           *  Constant: '<S131>/Constant'
           */
          localB->Merge_c = 1.0;

          /* End of Outputs for SubSystem: '<S130>/If Action Subsystem' */
        } else if (localB->fcn3_l < -1.0) {
          /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S132>/Action Port'
           */
          /* Merge: '<S130>/Merge' incorporates:
           *  Constant: '<S132>/Constant'
           */
          localB->Merge_c = 1.0;

          /* End of Outputs for SubSystem: '<S130>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S133>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(localB->fcn3_l, &localB->Merge_c);

          /* End of Outputs for SubSystem: '<S130>/If Action Subsystem2' */
        }

        /* Fcn: '<S9>/fcn1' */
        localB->fcn1_l = (localB->Product2_ev * localB->Product3_fq1 -
                          localB->Product_j5 * localB->Product1_ik) * -2.0;

        /* Fcn: '<S9>/fcn2' */
        localB->fcn2_k = ((localB->Product_j5 * localB->Product_j5 -
                           localB->Product1_ik * localB->Product1_ik) -
                          localB->Product2_ev * localB->Product2_ev) +
          localB->Product3_fq1 * localB->Product3_fq1;

        /* Trigonometry: '<S128>/Trigonometric Function1' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[0] = rt_atan2d_snf(localB->fcn1_l, localB->fcn2_k);

        /* Fcn: '<S9>/fcn4' */
        localB->fcn4_e = (localB->Product1_ik * localB->Product2_ev -
                          localB->Product_j5 * localB->Product3_fq1) * -2.0;

        /* Fcn: '<S9>/fcn5' */
        localB->fcn5_p = ((localB->Product_j5 * localB->Product_j5 +
                           localB->Product1_ik * localB->Product1_ik) -
                          localB->Product2_ev * localB->Product2_ev) -
          localB->Product3_fq1 * localB->Product3_fq1;

        /* Trigonometry: '<S128>/Trigonometric Function3' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[2] = rt_atan2d_snf(localB->fcn4_e, localB->fcn5_p);

        /* Trigonometry: '<S128>/trigFcn' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        u0 = localB->Merge_c;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        localB->PointingCmd[1] = asin(u0);
      } else if (*rtu_AttitudeMode == 2.0) {
        /* Transition: '<S3>:51' */
        localB->ControlMode = 2.0;
        localDW->is_On = asbCubeSatACS_IN_Sun;

        /* Product: '<S155>/Product' */
        localB->Product = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* UnaryMinus: '<S137>/Unary Minus' */
        localB->UnaryMinus = -localB->BusConversion_InsertedFor_Point.q_eci2b[1];

        /* Product: '<S155>/Product1' */
        localB->Product1 = localB->UnaryMinus * localB->UnaryMinus;

        /* UnaryMinus: '<S137>/Unary Minus1' */
        localB->UnaryMinus1 = -localB->BusConversion_InsertedFor_Point.q_eci2b[2];

        /* Product: '<S155>/Product2' */
        localB->Product2 = localB->UnaryMinus1 * localB->UnaryMinus1;

        /* UnaryMinus: '<S137>/Unary Minus2' */
        localB->UnaryMinus2 = -localB->BusConversion_InsertedFor_Point.q_eci2b[3];

        /* Product: '<S155>/Product3' */
        localB->Product3 = localB->UnaryMinus2 * localB->UnaryMinus2;

        /* Sum: '<S155>/Sum' */
        localB->Sum_p = ((localB->Product + localB->Product1) + localB->Product2)
          + localB->Product3;

        /* Sqrt: '<S154>/sqrt' */
        localB->sqrt_f = sqrt(localB->Sum_p);

        /* Product: '<S153>/Product' */
        localB->Product_h = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_f;

        /* Product: '<S151>/Product' */
        localB->Product_g = localB->Product_h * localB->Product_h;

        /* Product: '<S153>/Product1' */
        localB->Product1_g = localB->UnaryMinus / localB->sqrt_f;

        /* UnaryMinus: '<S152>/Unary Minus' */
        localB->UnaryMinus_l = -localB->Product1_g;

        /* Product: '<S151>/Product1' */
        localB->Product1_gj = localB->UnaryMinus_l * localB->UnaryMinus_l;

        /* Product: '<S153>/Product2' */
        localB->Product2_e = localB->UnaryMinus1 / localB->sqrt_f;

        /* UnaryMinus: '<S152>/Unary Minus1' */
        localB->UnaryMinus1_j = -localB->Product2_e;

        /* Product: '<S151>/Product2' */
        localB->Product2_o = localB->UnaryMinus1_j * localB->UnaryMinus1_j;

        /* Product: '<S153>/Product3' */
        localB->Product3_e = localB->UnaryMinus2 / localB->sqrt_f;

        /* UnaryMinus: '<S152>/Unary Minus2' */
        localB->UnaryMinus2_m = -localB->Product3_e;

        /* Product: '<S151>/Product3' */
        localB->Product3_d = localB->UnaryMinus2_m * localB->UnaryMinus2_m;

        /* Sum: '<S151>/Sum' */
        localB->Sum_n = ((localB->Product_g + localB->Product1_gj) +
                         localB->Product2_o) + localB->Product3_d;

        /* Sqrt: '<S150>/sqrt' */
        localB->sqrt_o = sqrt(localB->Sum_n);

        /* Product: '<S146>/Product' */
        localB->Product_m = localB->Product_h / localB->sqrt_o;

        /* Product: '<S146>/Product1' */
        localB->Product1_l = localB->UnaryMinus_l / localB->sqrt_o;

        /* Product: '<S146>/Product2' */
        localB->Product2_g = localB->UnaryMinus1_j / localB->sqrt_o;

        /* Product: '<S146>/Product3' */
        localB->Product3_c = localB->UnaryMinus2_m / localB->sqrt_o;

        /* Product: '<S147>/Product' */
        localB->Product_hp = localB->Product1_l * localB->Product2_g;

        /* Product: '<S147>/Product1' */
        localB->Product1_n = localB->Product_m * localB->Product3_c;

        /* Sum: '<S147>/Sum1' */
        localB->Sum1 = localB->Product_hp + localB->Product1_n;

        /* Gain: '<S147>/Gain' */
        localB->Gain = 2.0 * localB->Sum1;

        /* Product: '<S147>/Product2' */
        localB->Product2_k = localB->Product_m * localB->Product2_g;

        /* Product: '<S147>/Product3' */
        localB->Product3_p = localB->Product1_l * localB->Product3_c;

        /* Sum: '<S147>/Sum2' */
        localB->Sum2 = localB->Product3_p - localB->Product2_k;

        /* Gain: '<S147>/Gain1' */
        localB->Gain1 = 2.0 * localB->Sum2;

        /* Product: '<S147>/Product6' */
        localB->Product6 = localB->Product2_g * localB->Product2_g;

        /* Product: '<S147>/Product7' */
        localB->Product7 = localB->Product3_c * localB->Product3_c;

        /* Sum: '<S147>/Sum3' incorporates:
         *  Constant: '<S147>/Constant'
         */
        localB->Sum3 = (0.5 - localB->Product6) - localB->Product7;

        /* Gain: '<S147>/Gain2' */
        localB->Gain2 = 2.0 * localB->Sum3;

        /* Product: '<S147>/Product4' */
        localB->Product4 = localB->Gain *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S147>/Product5' */
        localB->Product5 = localB->Gain1 *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Product: '<S147>/Product8' */
        localB->Product8 = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
          localB->Gain2;

        /* Sum: '<S147>/Sum' */
        localB->Sum_l = (localB->Product8 + localB->Product4) + localB->Product5;

        /* Product: '<S148>/Product' */
        localB->Product_gr = localB->Product1_l * localB->Product2_g;

        /* Product: '<S148>/Product1' */
        localB->Product1_ls = localB->Product_m * localB->Product3_c;

        /* Sum: '<S148>/Sum1' */
        localB->Sum1_d = localB->Product_gr - localB->Product1_ls;

        /* Gain: '<S148>/Gain' */
        localB->Gain_g = 2.0 * localB->Sum1_d;

        /* Product: '<S148>/Product2' */
        localB->Product2_l = localB->Product_m * localB->Product1_l;

        /* Product: '<S148>/Product3' */
        localB->Product3_j = localB->Product2_g * localB->Product3_c;

        /* Sum: '<S148>/Sum2' */
        localB->Sum2_e = localB->Product2_l + localB->Product3_j;

        /* Gain: '<S148>/Gain1' */
        localB->Gain1_p = 2.0 * localB->Sum2_e;

        /* Product: '<S148>/Product6' */
        localB->Product6_k = localB->Product1_l * localB->Product1_l;

        /* Product: '<S148>/Product7' */
        localB->Product7_n = localB->Product3_c * localB->Product3_c;

        /* Sum: '<S148>/Sum3' incorporates:
         *  Constant: '<S148>/Constant'
         */
        localB->Sum3_k = (0.5 - localB->Product6_k) - localB->Product7_n;

        /* Gain: '<S148>/Gain2' */
        localB->Gain2_l = 2.0 * localB->Sum3_k;

        /* Product: '<S148>/Product4' */
        localB->Product4_m = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0]
          * localB->Gain_g;

        /* Product: '<S148>/Product5' */
        localB->Product5_i = localB->Gain1_p *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Product: '<S148>/Product8' */
        localB->Product8_a = localB->Gain2_l *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Sum: '<S148>/Sum' */
        localB->Sum_m = (localB->Product4_m + localB->Product8_a) +
          localB->Product5_i;

        /* Product: '<S149>/Product' */
        localB->Product_h0 = localB->Product1_l * localB->Product3_c;

        /* Product: '<S149>/Product1' */
        localB->Product1_i = localB->Product_m * localB->Product2_g;

        /* Sum: '<S149>/Sum1' */
        localB->Sum1_p = localB->Product_h0 + localB->Product1_i;

        /* Gain: '<S149>/Gain' */
        localB->Gain_i = 2.0 * localB->Sum1_p;

        /* Product: '<S149>/Product2' */
        localB->Product2_ep = localB->Product_m * localB->Product1_l;

        /* Product: '<S149>/Product3' */
        localB->Product3_dl = localB->Product2_g * localB->Product3_c;

        /* Sum: '<S149>/Sum2' */
        localB->Sum2_p = localB->Product3_dl - localB->Product2_ep;

        /* Gain: '<S149>/Gain1' */
        localB->Gain1_j = 2.0 * localB->Sum2_p;

        /* Product: '<S149>/Product6' */
        localB->Product6_n = localB->Product1_l * localB->Product1_l;

        /* Product: '<S149>/Product7' */
        localB->Product7_k = localB->Product2_g * localB->Product2_g;

        /* Sum: '<S149>/Sum3' incorporates:
         *  Constant: '<S149>/Constant'
         */
        localB->Sum3_m = (0.5 - localB->Product6_n) - localB->Product7_k;

        /* Gain: '<S149>/Gain2' */
        localB->Gain2_p = 2.0 * localB->Sum3_m;

        /* Product: '<S149>/Product4' */
        localB->Product4_l = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0]
          * localB->Gain_i;

        /* Product: '<S149>/Product5' */
        localB->Product5_n = localB->Gain1_j *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S149>/Product8' */
        localB->Product8_g = localB->Gain2_p *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Sum: '<S149>/Sum' */
        localB->Sum_e = (localB->Product4_l + localB->Product5_n) +
          localB->Product8_g;

        /* If: '<S156>/If' */
        if (asbCubeSatACS_ConstB.Abs < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
           *  ActionPort: '<S166>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem' */
        } else if (asbCubeSatACS_ConstB.Abs1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S167>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S168>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem2' */
        }

        /* SignalConversion generated from: '<S157>/Dot Product1' */
        localB->TmpSignalConversionAtDotProduct[0] = localB->Sum_l;
        localB->TmpSignalConversionAtDotProduct[1] = localB->Sum_m;
        localB->TmpSignalConversionAtDotProduct[2] = localB->Sum_e;

        /* Product: '<S233>/Product' */
        localB->Product_hi = localB->Product_h * localB->Product_h;

        /* Product: '<S233>/Product1' */
        localB->Product1_a = localB->UnaryMinus_l * localB->UnaryMinus_l;

        /* Product: '<S233>/Product2' */
        localB->Product2_a = localB->UnaryMinus1_j * localB->UnaryMinus1_j;

        /* Product: '<S233>/Product3' */
        localB->Product3_eh = localB->UnaryMinus2_m * localB->UnaryMinus2_m;

        /* Sum: '<S233>/Sum' */
        localB->Sum_f = ((localB->Product_hi + localB->Product1_a) +
                         localB->Product2_a) + localB->Product3_eh;

        /* Sqrt: '<S232>/sqrt' */
        localB->sqrt_l = sqrt(localB->Sum_f);

        /* Product: '<S228>/Product2' */
        localB->Product2_o4 = localB->UnaryMinus1_j / localB->sqrt_l;

        /* Product: '<S229>/Product6' */
        localB->Product6_i = localB->Product2_o4 * localB->Product2_o4;

        /* Product: '<S228>/Product3' */
        localB->Product3_h = localB->UnaryMinus2_m / localB->sqrt_l;

        /* Product: '<S229>/Product7' */
        localB->Product7_c = localB->Product3_h * localB->Product3_h;

        /* Sum: '<S229>/Sum3' incorporates:
         *  Constant: '<S229>/Constant'
         */
        localB->Sum3_h = (0.5 - localB->Product6_i) - localB->Product7_c;

        /* Gain: '<S229>/Gain2' */
        localB->Gain2_k = 2.0 * localB->Sum3_h;

        /* Product: '<S229>/Product8' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product8_p = 0.0 * localB->Gain2_k;

        /* Product: '<S228>/Product1' */
        localB->Product1_f = localB->UnaryMinus_l / localB->sqrt_l;

        /* Product: '<S229>/Product' */
        localB->Product_f = localB->Product1_f * localB->Product2_o4;

        /* Product: '<S228>/Product' */
        localB->Product_e = localB->Product_h / localB->sqrt_l;

        /* Product: '<S229>/Product1' */
        localB->Product1_iz = localB->Product_e * localB->Product3_h;

        /* Sum: '<S229>/Sum1' */
        localB->Sum1_c = localB->Product_f + localB->Product1_iz;

        /* Gain: '<S229>/Gain' */
        localB->Gain_b = 2.0 * localB->Sum1_c;

        /* Product: '<S229>/Product4' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product4_c = localB->Gain_b * 0.0;

        /* Product: '<S229>/Product2' */
        localB->Product2_m = localB->Product_e * localB->Product2_o4;

        /* Product: '<S229>/Product3' */
        localB->Product3_a = localB->Product1_f * localB->Product3_h;

        /* Sum: '<S229>/Sum2' */
        localB->Sum2_l = localB->Product3_a - localB->Product2_m;

        /* Gain: '<S229>/Gain1' */
        localB->Gain1_i = 2.0 * localB->Sum2_l;

        /* Product: '<S229>/Product5' */
        localB->Product5_g = localB->Gain1_i;

        /* Sum: '<S229>/Sum' */
        localB->Sum_o = (localB->Product8_p + localB->Product4_c) +
          localB->Product5_g;

        /* Product: '<S230>/Product' */
        localB->Product_f0 = localB->Product1_f * localB->Product2_o4;

        /* Product: '<S230>/Product1' */
        localB->Product1_m = localB->Product_e * localB->Product3_h;

        /* Sum: '<S230>/Sum1' */
        localB->Sum1_n = localB->Product_f0 - localB->Product1_m;

        /* Gain: '<S230>/Gain' */
        localB->Gain_a = 2.0 * localB->Sum1_n;

        /* Product: '<S230>/Product4' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product4_g = 0.0 * localB->Gain_a;

        /* Product: '<S230>/Product6' */
        localB->Product6_h = localB->Product1_f * localB->Product1_f;

        /* Product: '<S230>/Product7' */
        localB->Product7_f = localB->Product3_h * localB->Product3_h;

        /* Sum: '<S230>/Sum3' incorporates:
         *  Constant: '<S230>/Constant'
         */
        localB->Sum3_i = (0.5 - localB->Product6_h) - localB->Product7_f;

        /* Gain: '<S230>/Gain2' */
        localB->Gain2_b = 2.0 * localB->Sum3_i;

        /* Product: '<S230>/Product8' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product8_o = localB->Gain2_b * 0.0;

        /* Product: '<S230>/Product2' */
        localB->Product2_ak = localB->Product_e * localB->Product1_f;

        /* Product: '<S230>/Product3' */
        localB->Product3_as = localB->Product2_o4 * localB->Product3_h;

        /* Sum: '<S230>/Sum2' */
        localB->Sum2_ls = localB->Product2_ak + localB->Product3_as;

        /* Gain: '<S230>/Gain1' */
        localB->Gain1_d = 2.0 * localB->Sum2_ls;

        /* Product: '<S230>/Product5' */
        localB->Product5_j = localB->Gain1_d;

        /* Sum: '<S230>/Sum' */
        localB->Sum_k = (localB->Product4_g + localB->Product8_o) +
          localB->Product5_j;

        /* Product: '<S231>/Product' */
        localB->Product_n = localB->Product1_f * localB->Product3_h;

        /* Product: '<S231>/Product1' */
        localB->Product1_o = localB->Product_e * localB->Product2_o4;

        /* Sum: '<S231>/Sum1' */
        localB->Sum1_j = localB->Product_n + localB->Product1_o;

        /* Gain: '<S231>/Gain' */
        localB->Gain_iw = 2.0 * localB->Sum1_j;

        /* Product: '<S231>/Product4' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product4_a = 0.0 * localB->Gain_iw;

        /* Product: '<S231>/Product2' */
        localB->Product2_n = localB->Product_e * localB->Product1_f;

        /* Product: '<S231>/Product3' */
        localB->Product3_n = localB->Product2_o4 * localB->Product3_h;

        /* Sum: '<S231>/Sum2' */
        localB->Sum2_k = localB->Product3_n - localB->Product2_n;

        /* Gain: '<S231>/Gain1' */
        localB->Gain1_io = 2.0 * localB->Sum2_k;

        /* Product: '<S231>/Product5' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         */
        localB->Product5_m = localB->Gain1_io * 0.0;

        /* Product: '<S231>/Product6' */
        localB->Product6_j = localB->Product1_f * localB->Product1_f;

        /* Product: '<S231>/Product7' */
        localB->Product7_h = localB->Product2_o4 * localB->Product2_o4;

        /* Sum: '<S231>/Sum3' incorporates:
         *  Constant: '<S231>/Constant'
         */
        localB->Sum3_f = (0.5 - localB->Product6_j) - localB->Product7_h;

        /* Gain: '<S231>/Gain2' */
        localB->Gain2_c = 2.0 * localB->Sum3_f;

        /* Product: '<S231>/Product8' */
        localB->Product8_e = localB->Gain2_c;

        /* Sum: '<S231>/Sum' */
        localB->Sum_nm = (localB->Product4_a + localB->Product5_m) +
          localB->Product8_e;

        /* SignalConversion generated from: '<S157>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_f[0] = localB->Sum_o;
        localB->TmpSignalConversionAtDotProdu_f[1] = localB->Sum_k;
        localB->TmpSignalConversionAtDotProdu_f[2] = localB->Sum_nm;

        /* DotProduct: '<S157>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        u1 = localB->TmpSignalConversionAtDotProdu_f[0];
        tmp_0 = u0 * u1;

        /* DotProduct: '<S157>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        u1 = localB->TmpSignalConversionAtDotProduct[0];
        tmp_2 = u0 * u1;

        /* DotProduct: '<S157>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_f[0];
        u1 = localB->TmpSignalConversionAtDotProdu_f[0];
        tmp_3 = u0 * u1;

        /* DotProduct: '<S157>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        u1 = localB->TmpSignalConversionAtDotProdu_f[1];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        u1 = localB->TmpSignalConversionAtDotProduct[1];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_f[1];
        u1 = localB->TmpSignalConversionAtDotProdu_f[1];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        u1 = localB->TmpSignalConversionAtDotProdu_f[2];
        tmp_0 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product1' */
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        u1 = localB->TmpSignalConversionAtDotProduct[2];
        tmp_2 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_f[2];
        u1 = localB->TmpSignalConversionAtDotProdu_f[2];
        tmp_3 += u0 * u1;

        /* DotProduct: '<S157>/Dot Product3' */
        localB->DotProduct3 = tmp_0;

        /* DotProduct: '<S157>/Dot Product1' */
        localB->DotProduct1 = tmp_2;

        /* DotProduct: '<S157>/Dot Product2' */
        localB->DotProduct2 = tmp_3;

        /* Product: '<S157>/Divide1' */
        localB->Divide1 = localB->DotProduct1 * localB->DotProduct2;

        /* Sqrt: '<S157>/Sqrt3' */
        localB->Sqrt3 = sqrt(localB->Divide1);

        /* Product: '<S157>/Divide' */
        localB->Divide = localB->DotProduct3 / localB->Sqrt3;

        /* Bias: '<S157>/Bias' */
        localB->Bias = localB->Divide + -1.0;

        /* Abs: '<S157>/Abs' */
        localB->Abs = fabs(localB->Bias);

        /* Bias: '<S157>/Bias1' */
        localB->Bias1 = localB->Divide + 1.0;

        /* Abs: '<S157>/Abs1' */
        localB->Abs1 = fabs(localB->Bias1);

        /* If: '<S157>/If' */
        if (localB->Abs < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
           *  ActionPort: '<S169>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_b);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem' */
        } else if (localB->Abs1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S170>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_b);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S171>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_b);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S158>/Compare' incorporates:
         *  Constant: '<S158>/Constant'
         */
        localB->Compare = (localB->Merge != 0.0);

        /* RelationalOperator: '<S159>/Compare' incorporates:
         *  Constant: '<S159>/Constant'
         */
        localB->Compare_c = (localB->Merge_b != 0.0);

        /* Logic: '<S141>/OR' */
        localB->OR = (localB->Compare || localB->Compare_c);

        /* DotProduct: '<S162>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        u1 = 0.0 * u0;

        /* DotProduct: '<S162>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[0];
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        tmp_2 = tmp_0 * u0;

        /* DotProduct: '<S183>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        tmp_3 = 0.0 * u0;

        /* DotProduct: '<S183>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[0];
        u0 = localB->TmpSignalConversionAtDotProduct[0];
        tmp_4 = tmp_0 * u0;

        /* DotProduct: '<S162>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        u1 += 0.0 * u0;

        /* DotProduct: '<S162>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[1];
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        tmp_2 += tmp_0 * u0;

        /* DotProduct: '<S183>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        tmp_3 += 0.0 * u0;

        /* DotProduct: '<S183>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[1];
        u0 = localB->TmpSignalConversionAtDotProduct[1];
        tmp_4 += tmp_0 * u0;

        /* DotProduct: '<S162>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        u1 += -u0;

        /* DotProduct: '<S162>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[2];
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        tmp_2 += tmp_0 * u0;

        /* DotProduct: '<S183>/Dot Product3' */
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        tmp_3 += -u0;

        /* DotProduct: '<S183>/Dot Product2' */
        tmp_0 = localB->TmpSignalConversionAtDotProduct[2];
        u0 = localB->TmpSignalConversionAtDotProduct[2];
        tmp_4 += tmp_0 * u0;

        /* DotProduct: '<S162>/Dot Product3' */
        localB->DotProduct3_h = u1;

        /* DotProduct: '<S162>/Dot Product2' */
        localB->DotProduct2_a = tmp_2;

        /* Product: '<S162>/Divide1' */
        localB->Divide1_a = asbCubeSatACS_ConstB.DotProduct1_l *
          localB->DotProduct2_a;

        /* Sqrt: '<S162>/Sqrt3' */
        localB->Sqrt3_k = sqrt(localB->Divide1_a);

        /* Sum: '<S162>/Add2' */
        localB->Add2 = localB->DotProduct3_h + localB->Sqrt3_k;

        /* Product: '<S196>/Product' */
        localB->Product_g0 = localB->Add2 * localB->Add2;

        /* DotProduct: '<S183>/Dot Product3' */
        localB->DotProduct3_k = tmp_3;

        /* DotProduct: '<S183>/Dot Product2' */
        localB->DotProduct2_g = tmp_4;

        /* Product: '<S183>/Divide1' */
        localB->Divide1_e = asbCubeSatACS_ConstB.DotProduct1_f *
          localB->DotProduct2_g;

        /* Sqrt: '<S183>/Sqrt3' */
        localB->Sqrt3_f = sqrt(localB->Divide1_e);

        /* Product: '<S183>/Divide' */
        localB->Divide_c = localB->DotProduct3_k / localB->Sqrt3_f;

        /* Bias: '<S183>/Bias' */
        localB->Bias_l = localB->Divide_c + -1.0;

        /* Abs: '<S183>/Abs' */
        localB->Abs_n = fabs(localB->Bias_l);

        /* Bias: '<S183>/Bias1' */
        localB->Bias1_f = localB->Divide_c + 1.0;

        /* Abs: '<S183>/Abs1' */
        localB->Abs1_p = fabs(localB->Bias1_f);

        /* If: '<S183>/If' */
        if (localB->Abs_n < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
           *  ActionPort: '<S189>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_d);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem' */
        } else if (localB->Abs1_p < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S190>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_d);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S191>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_d);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S184>/Compare' incorporates:
         *  Constant: '<S184>/Constant'
         */
        localB->Compare_m = (localB->Merge_d != -1.0);

        /* Switch: '<S162>/is 180deg Rot' */
        if (localB->Compare_m) {
          /* Product: '<S188>/j x i' incorporates:
           *  Constant: '<S136>/primaryAlignment'
           */
          localB->jxi_a = 0.0 * localB->Sum_l;

          /* Product: '<S188>/i x k' incorporates:
           *  Constant: '<S136>/primaryAlignment'
           */
          localB->ixk_o = 0.0 * localB->Sum_e;

          /* Product: '<S188>/k x j' */
          localB->kxj_j = -localB->Sum_m;

          /* Product: '<S187>/i x j' incorporates:
           *  Constant: '<S136>/primaryAlignment'
           */
          localB->ixj_l = 0.0 * localB->Sum_m;

          /* Product: '<S187>/k x i' */
          localB->kxi_n = -localB->Sum_l;

          /* Product: '<S187>/j x k' incorporates:
           *  Constant: '<S136>/primaryAlignment'
           */
          localB->jxk_n = 0.0 * localB->Sum_e;

          /* Sum: '<S182>/Sum' */
          localB->Sum_d[0] = localB->jxk_n - localB->kxj_j;
          localB->Sum_d[1] = localB->kxi_n - localB->ixk_o;
          localB->Sum_d[2] = localB->ixj_l - localB->jxi_a;

          /* Switch: '<S162>/is 180deg Rot' */
          localB->is180degRot[0] = localB->Sum_d[0];
          localB->is180degRot[1] = localB->Sum_d[1];
          localB->is180degRot[2] = localB->Sum_d[2];
        } else {
          /* Switch: '<S162>/is 180deg Rot' */
          localB->is180degRot[0] = asbCubeSatACS_ConstB.Sum[0];
          localB->is180degRot[1] = asbCubeSatACS_ConstB.Sum[1];
          localB->is180degRot[2] = asbCubeSatACS_ConstB.Sum[2];
        }

        /* Product: '<S196>/Product1' */
        localB->Product1_lm = localB->is180degRot[0] * localB->is180degRot[0];

        /* Product: '<S196>/Product2' */
        localB->Product2_n1 = localB->is180degRot[1] * localB->is180degRot[1];

        /* Product: '<S196>/Product3' */
        localB->Product3_cn = localB->is180degRot[2] * localB->is180degRot[2];

        /* Sum: '<S196>/Sum' */
        localB->Sum_oe = ((localB->Product_g0 + localB->Product1_lm) +
                          localB->Product2_n1) + localB->Product3_cn;

        /* Sqrt: '<S195>/sqrt' */
        localB->sqrt_e = sqrt(localB->Sum_oe);

        /* Product: '<S186>/Product' */
        localB->Product_i = localB->Add2 / localB->sqrt_e;

        /* Product: '<S220>/j x k' */
        localB->jxk = localB->Sum_m * localB->Sum_nm;

        /* Product: '<S220>/k x i' */
        localB->kxi = localB->Sum_e * localB->Sum_o;

        /* Product: '<S220>/i x j' */
        localB->ixj = localB->Sum_l * localB->Sum_k;

        /* Product: '<S221>/k x j' */
        localB->kxj = localB->Sum_e * localB->Sum_k;

        /* Product: '<S221>/i x k' */
        localB->ixk = localB->Sum_l * localB->Sum_nm;

        /* Product: '<S221>/j x i' */
        localB->jxi = localB->Sum_m * localB->Sum_o;

        /* Sum: '<S218>/Sum' */
        localB->Sum_pc[0] = localB->jxk - localB->kxj;
        localB->Sum_pc[1] = localB->kxi - localB->ixk;
        localB->Sum_pc[2] = localB->ixj - localB->jxi;

        /* Product: '<S222>/j x k' */
        localB->jxk_o = localB->Sum_pc[1] * localB->Sum_e;

        /* Product: '<S222>/k x i' */
        localB->kxi_c = localB->Sum_pc[2] * localB->Sum_l;

        /* Product: '<S222>/i x j' */
        localB->ixj_g = localB->Sum_pc[0] * localB->Sum_m;

        /* Product: '<S223>/k x j' */
        localB->kxj_k = localB->Sum_pc[2] * localB->Sum_m;

        /* Product: '<S223>/i x k' */
        localB->ixk_b = localB->Sum_pc[0] * localB->Sum_e;

        /* Product: '<S223>/j x i' */
        localB->jxi_n = localB->Sum_pc[1] * localB->Sum_l;

        /* Sum: '<S219>/Sum' */
        localB->Sum_i[0] = localB->jxk_o - localB->kxj_k;
        localB->Sum_i[1] = localB->kxi_c - localB->ixk_b;
        localB->Sum_i[2] = localB->ixj_g - localB->jxi_n;

        /* Product: '<S186>/Product2' */
        localB->Product2_od = localB->is180degRot[1] / localB->sqrt_e;

        /* Product: '<S181>/Product' */
        localB->Product_mz = localB->Product_i * localB->Product_i;

        /* Product: '<S186>/Product1' */
        localB->Product1_d = localB->is180degRot[0] / localB->sqrt_e;

        /* Product: '<S181>/Product1' */
        localB->Product1_fo = localB->Product1_d * localB->Product1_d;

        /* Product: '<S181>/Product2' */
        localB->Product2_os = localB->Product2_od * localB->Product2_od;

        /* Product: '<S186>/Product3' */
        localB->Product3_d2 = localB->is180degRot[2] / localB->sqrt_e;

        /* Product: '<S181>/Product3' */
        localB->Product3_f = localB->Product3_d2 * localB->Product3_d2;

        /* Sum: '<S181>/Sum' */
        localB->Sum_fi = ((localB->Product_mz + localB->Product1_fo) +
                          localB->Product2_os) + localB->Product3_f;

        /* Sqrt: '<S180>/sqrt' */
        localB->sqrt_e2 = sqrt(localB->Sum_fi);

        /* Product: '<S176>/Product2' */
        localB->Product2_at = localB->Product2_od / localB->sqrt_e2;

        /* Product: '<S177>/Product6' */
        localB->Product6_c = localB->Product2_at * localB->Product2_at;

        /* Product: '<S176>/Product3' */
        localB->Product3_b = localB->Product3_d2 / localB->sqrt_e2;

        /* Product: '<S177>/Product7' */
        localB->Product7_cz = localB->Product3_b * localB->Product3_b;

        /* Sum: '<S177>/Sum3' incorporates:
         *  Constant: '<S177>/Constant'
         */
        localB->Sum3_b = (0.5 - localB->Product6_c) - localB->Product7_cz;

        /* Gain: '<S177>/Gain2' */
        localB->Gain2_ce = 2.0 * localB->Sum3_b;

        /* Product: '<S177>/Product8' */
        localB->Product8_pp = localB->Sum_i[0] * localB->Gain2_ce;

        /* Product: '<S176>/Product1' */
        localB->Product1_j = localB->Product1_d / localB->sqrt_e2;

        /* Product: '<S177>/Product' */
        localB->Product_p = localB->Product1_j * localB->Product2_at;

        /* Product: '<S176>/Product' */
        localB->Product_d = localB->Product_i / localB->sqrt_e2;

        /* Product: '<S177>/Product1' */
        localB->Product1_ji = localB->Product_d * localB->Product3_b;

        /* Sum: '<S177>/Sum1' */
        localB->Sum1_a = localB->Product_p + localB->Product1_ji;

        /* Gain: '<S177>/Gain' */
        localB->Gain_n = 2.0 * localB->Sum1_a;

        /* Product: '<S177>/Product4' */
        localB->Product4_p = localB->Gain_n * localB->Sum_i[1];

        /* Product: '<S177>/Product2' */
        localB->Product2_am = localB->Product_d * localB->Product2_at;

        /* Product: '<S177>/Product3' */
        localB->Product3_jh = localB->Product1_j * localB->Product3_b;

        /* Sum: '<S177>/Sum2' */
        localB->Sum2_c = localB->Product3_jh - localB->Product2_am;

        /* Gain: '<S177>/Gain1' */
        localB->Gain1_c = 2.0 * localB->Sum2_c;

        /* Product: '<S177>/Product5' */
        localB->Product5_b = localB->Gain1_c * localB->Sum_i[2];

        /* Sum: '<S177>/Sum' */
        localB->Sum_j = (localB->Product8_pp + localB->Product4_p) +
          localB->Product5_b;

        /* Product: '<S178>/Product' */
        localB->Product_b = localB->Product1_j * localB->Product2_at;

        /* Product: '<S178>/Product1' */
        localB->Product1_mo = localB->Product_d * localB->Product3_b;

        /* Sum: '<S178>/Sum1' */
        localB->Sum1_pk = localB->Product_b - localB->Product1_mo;

        /* Gain: '<S178>/Gain' */
        localB->Gain_l = 2.0 * localB->Sum1_pk;

        /* Product: '<S178>/Product4' */
        localB->Product4_h = localB->Sum_i[0] * localB->Gain_l;

        /* Product: '<S178>/Product6' */
        localB->Product6_kv = localB->Product1_j * localB->Product1_j;

        /* Product: '<S178>/Product7' */
        localB->Product7_m = localB->Product3_b * localB->Product3_b;

        /* Sum: '<S178>/Sum3' incorporates:
         *  Constant: '<S178>/Constant'
         */
        localB->Sum3_d = (0.5 - localB->Product6_kv) - localB->Product7_m;

        /* Gain: '<S178>/Gain2' */
        localB->Gain2_p0 = 2.0 * localB->Sum3_d;

        /* Product: '<S178>/Product8' */
        localB->Product8_j = localB->Gain2_p0 * localB->Sum_i[1];

        /* Product: '<S178>/Product2' */
        localB->Product2_gn = localB->Product_d * localB->Product1_j;

        /* Product: '<S178>/Product3' */
        localB->Product3_nm = localB->Product2_at * localB->Product3_b;

        /* Sum: '<S178>/Sum2' */
        localB->Sum2_d = localB->Product2_gn + localB->Product3_nm;

        /* Gain: '<S178>/Gain1' */
        localB->Gain1_m = 2.0 * localB->Sum2_d;

        /* Product: '<S178>/Product5' */
        localB->Product5_nw = localB->Gain1_m * localB->Sum_i[2];

        /* Sum: '<S178>/Sum' */
        localB->Sum_m4 = (localB->Product4_h + localB->Product8_j) +
          localB->Product5_nw;

        /* Product: '<S179>/Product' */
        localB->Product_bs = localB->Product1_j * localB->Product3_b;

        /* Product: '<S179>/Product1' */
        localB->Product1_ie = localB->Product_d * localB->Product2_at;

        /* Sum: '<S179>/Sum1' */
        localB->Sum1_b = localB->Product_bs + localB->Product1_ie;

        /* Gain: '<S179>/Gain' */
        localB->Gain_iy = 2.0 * localB->Sum1_b;

        /* Product: '<S179>/Product4' */
        localB->Product4_lc = localB->Sum_i[0] * localB->Gain_iy;

        /* Product: '<S179>/Product2' */
        localB->Product2_h = localB->Product_d * localB->Product1_j;

        /* Product: '<S179>/Product3' */
        localB->Product3_ev = localB->Product2_at * localB->Product3_b;

        /* Sum: '<S179>/Sum2' */
        localB->Sum2_g = localB->Product3_ev - localB->Product2_h;

        /* Gain: '<S179>/Gain1' */
        localB->Gain1_ck = 2.0 * localB->Sum2_g;

        /* Product: '<S179>/Product5' */
        localB->Product5_i1 = localB->Gain1_ck * localB->Sum_i[1];

        /* Product: '<S179>/Product6' */
        localB->Product6_b = localB->Product1_j * localB->Product1_j;

        /* Product: '<S179>/Product7' */
        localB->Product7_hk = localB->Product2_at * localB->Product2_at;

        /* Sum: '<S179>/Sum3' incorporates:
         *  Constant: '<S179>/Constant'
         */
        localB->Sum3_o = (0.5 - localB->Product6_b) - localB->Product7_hk;

        /* Gain: '<S179>/Gain2' */
        localB->Gain2_d = 2.0 * localB->Sum3_o;

        /* Product: '<S179>/Product8' */
        localB->Product8_c = localB->Gain2_d * localB->Sum_i[2];

        /* Sum: '<S179>/Sum' */
        localB->Sum_ld = (localB->Product4_lc + localB->Product5_i1) +
          localB->Product8_c;

        /* SignalConversion generated from: '<S198>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_d[0] = localB->Sum_j;
        localB->TmpSignalConversionAtDotProdu_d[1] = localB->Sum_m4;
        localB->TmpSignalConversionAtDotProdu_d[2] = localB->Sum_ld;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  Sum: '<S213>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_d[0];
        u1 = asbCubeSatACS_ConstB.Sum_i[0] * u0;

        /* DotProduct: '<S198>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_d[0];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_d[0];
        tmp_2 = u0 * tmp_0;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  Sum: '<S213>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_d[1];
        u1 += asbCubeSatACS_ConstB.Sum_i[1] * u0;

        /* DotProduct: '<S198>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_d[1];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_d[1];
        tmp_2 += u0 * tmp_0;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  Sum: '<S213>/Sum'
         */
        u0 = localB->TmpSignalConversionAtDotProdu_d[2];
        u1 += asbCubeSatACS_ConstB.Sum_i[2] * u0;

        /* DotProduct: '<S198>/Dot Product2' */
        u0 = localB->TmpSignalConversionAtDotProdu_d[2];
        tmp_0 = localB->TmpSignalConversionAtDotProdu_d[2];
        tmp_2 += u0 * tmp_0;

        /* DotProduct: '<S198>/Dot Product3' */
        localB->DotProduct3_l = u1;

        /* DotProduct: '<S198>/Dot Product2' */
        localB->DotProduct2_gh = tmp_2;

        /* Product: '<S198>/Divide1' */
        localB->Divide1_f = asbCubeSatACS_ConstB.DotProduct1_h *
          localB->DotProduct2_gh;

        /* Sqrt: '<S198>/Sqrt3' */
        localB->Sqrt3_e = sqrt(localB->Divide1_f);

        /* Product: '<S198>/Divide' */
        localB->Divide_i = localB->DotProduct3_l / localB->Sqrt3_e;

        /* Bias: '<S198>/Bias' */
        localB->Bias_b = localB->Divide_i + -1.0;

        /* Abs: '<S198>/Abs' */
        localB->Abs_l = fabs(localB->Bias_b);

        /* Bias: '<S198>/Bias1' */
        localB->Bias1_e = localB->Divide_i + 1.0;

        /* Abs: '<S198>/Abs1' */
        localB->Abs1_l = fabs(localB->Bias1_e);

        /* If: '<S198>/If' */
        if (localB->Abs_l < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
           *  ActionPort: '<S204>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem' */
        } else if (localB->Abs1_l < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S205>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S206>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem2' */
        }

        /* Switch: '<S141>/Switch' */
        if (localB->OR) {
          /* Switch: '<S141>/Switch' */
          localB->Switch[0] = localB->Product_i;
          localB->Switch[1] = localB->Product1_d;
          localB->Switch[2] = localB->Product2_od;
          localB->Switch[3] = localB->Product3_d2;
        } else {
          /* RelationalOperator: '<S199>/Compare' incorporates:
           *  Constant: '<S199>/Constant'
           */
          localB->Compare_j = (localB->Merge_f != -1.0);

          /* Switch: '<S163>/is 180deg Rot' */
          if (localB->Compare_j) {
            /* Product: '<S203>/j x i' */
            localB->jxi_d = asbCubeSatACS_ConstB.Sum_i[1] * localB->Sum_j;

            /* Product: '<S203>/i x k' */
            localB->ixk_a = asbCubeSatACS_ConstB.Sum_i[0] * localB->Sum_ld;

            /* Product: '<S203>/k x j' */
            localB->kxj_l = asbCubeSatACS_ConstB.Sum_i[2] * localB->Sum_m4;

            /* Product: '<S202>/i x j' */
            localB->ixj_k = asbCubeSatACS_ConstB.Sum_i[0] * localB->Sum_m4;

            /* Product: '<S202>/k x i' */
            localB->kxi_m = asbCubeSatACS_ConstB.Sum_i[2] * localB->Sum_j;

            /* Product: '<S202>/j x k' */
            localB->jxk_p = asbCubeSatACS_ConstB.Sum_i[1] * localB->Sum_ld;

            /* Sum: '<S197>/Sum' */
            localB->Sum_gy[0] = localB->jxk_p - localB->kxj_l;
            localB->Sum_gy[1] = localB->kxi_m - localB->ixk_a;
            localB->Sum_gy[2] = localB->ixj_k - localB->jxi_d;

            /* Switch: '<S163>/is 180deg Rot' */
            localB->is180degRot_m[0] = localB->Sum_gy[0];
            localB->is180degRot_m[1] = localB->Sum_gy[1];
            localB->is180degRot_m[2] = localB->Sum_gy[2];
          } else {
            /* Switch: '<S163>/is 180deg Rot' */
            localB->is180degRot_m[0] = asbCubeSatACS_ConstB.Sum_iv[0];
            localB->is180degRot_m[1] = asbCubeSatACS_ConstB.Sum_iv[1];
            localB->is180degRot_m[2] = asbCubeSatACS_ConstB.Sum_iv[2];
          }

          /* Product: '<S211>/Product3' */
          localB->Product3_jn = localB->is180degRot_m[2] * localB->
            is180degRot_m[2];

          /* Product: '<S211>/Product2' */
          localB->Product2_nf = localB->is180degRot_m[1] * localB->
            is180degRot_m[1];

          /* Product: '<S211>/Product1' */
          localB->Product1_az = localB->is180degRot_m[0] * localB->
            is180degRot_m[0];

          /* DotProduct: '<S163>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_d[0];
          u1 = localB->TmpSignalConversionAtDotProdu_d[0];
          tmp_0 = u0 * u1;

          /* DotProduct: '<S163>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_d[0];
          tmp_2 = asbCubeSatACS_ConstB.Sum_i[0] * u0;

          /* DotProduct: '<S163>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_d[1];
          u1 = localB->TmpSignalConversionAtDotProdu_d[1];
          tmp_0 += u0 * u1;

          /* DotProduct: '<S163>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_d[1];
          tmp_2 += asbCubeSatACS_ConstB.Sum_i[1] * u0;

          /* DotProduct: '<S163>/Dot Product2' */
          u0 = localB->TmpSignalConversionAtDotProdu_d[2];
          u1 = localB->TmpSignalConversionAtDotProdu_d[2];
          tmp_0 += u0 * u1;

          /* DotProduct: '<S163>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = localB->TmpSignalConversionAtDotProdu_d[2];
          tmp_2 += asbCubeSatACS_ConstB.Sum_i[2] * u0;

          /* DotProduct: '<S163>/Dot Product2' */
          localB->DotProduct2_p = tmp_0;

          /* Product: '<S163>/Divide1' */
          localB->Divide1_d = asbCubeSatACS_ConstB.DotProduct1_j *
            localB->DotProduct2_p;

          /* Sqrt: '<S163>/Sqrt3' */
          localB->Sqrt3_o = sqrt(localB->Divide1_d);

          /* DotProduct: '<S163>/Dot Product3' */
          localB->DotProduct3_j = tmp_2;

          /* Sum: '<S163>/Add2' */
          localB->Add2_p = localB->DotProduct3_j + localB->Sqrt3_o;

          /* Product: '<S211>/Product' */
          localB->Product_o = localB->Add2_p * localB->Add2_p;

          /* Sum: '<S211>/Sum' */
          localB->Sum_o2 = ((localB->Product_o + localB->Product1_az) +
                            localB->Product2_nf) + localB->Product3_jn;

          /* Sqrt: '<S210>/sqrt' */
          localB->sqrt_ee = sqrt(localB->Sum_o2);

          /* Product: '<S201>/Product3' */
          localB->Product3_i = localB->is180degRot_m[2] / localB->sqrt_ee;

          /* Product: '<S172>/Product3' */
          localB->Product3_jp = localB->Product3_d2 * localB->Product3_i;

          /* Product: '<S201>/Product2' */
          localB->Product2_c = localB->is180degRot_m[1] / localB->sqrt_ee;

          /* Product: '<S172>/Product2' */
          localB->Product2_cn = localB->Product2_od * localB->Product2_c;

          /* Product: '<S201>/Product1' */
          localB->Product1_dr = localB->is180degRot_m[0] / localB->sqrt_ee;

          /* Product: '<S172>/Product1' */
          localB->Product1_j4 = localB->Product1_d * localB->Product1_dr;

          /* Product: '<S201>/Product' */
          localB->Product_or = localB->Add2_p / localB->sqrt_ee;

          /* Product: '<S172>/Product' */
          localB->Product_c = localB->Product_i * localB->Product_or;

          /* Sum: '<S172>/Sum' */
          localB->Sum_id = ((localB->Product_c - localB->Product1_j4) -
                            localB->Product2_cn) - localB->Product3_jp;

          /* Product: '<S173>/Product3' */
          localB->Product3_ic = localB->Product3_d2 * localB->Product2_c;

          /* Product: '<S173>/Product2' */
          localB->Product2_d = localB->Product2_od * localB->Product3_i;

          /* Product: '<S173>/Product1' */
          localB->Product1_nc = localB->Product1_d * localB->Product_or;

          /* Product: '<S173>/Product' */
          localB->Product_k = localB->Product_i * localB->Product1_dr;

          /* Sum: '<S173>/Sum' */
          localB->Sum_c = ((localB->Product_k + localB->Product1_nc) +
                           localB->Product2_d) - localB->Product3_ic;

          /* Product: '<S174>/Product3' */
          localB->Product3_ht = localB->Product3_d2 * localB->Product1_dr;

          /* Product: '<S174>/Product2' */
          localB->Product2_mx = localB->Product2_od * localB->Product_or;

          /* Product: '<S174>/Product1' */
          localB->Product1_jk = localB->Product1_d * localB->Product3_i;

          /* Product: '<S174>/Product' */
          localB->Product_kq = localB->Product_i * localB->Product2_c;

          /* Sum: '<S174>/Sum' */
          localB->Sum_ct = ((localB->Product_kq - localB->Product1_jk) +
                            localB->Product2_mx) + localB->Product3_ht;

          /* Product: '<S175>/Product3' */
          localB->Product3_fq = localB->Product3_d2 * localB->Product_or;

          /* Product: '<S175>/Product2' */
          localB->Product2_eb = localB->Product2_od * localB->Product1_dr;

          /* Product: '<S175>/Product1' */
          localB->Product1_ac = localB->Product1_d * localB->Product2_c;

          /* Product: '<S175>/Product' */
          localB->Product_gm = localB->Product_i * localB->Product3_i;

          /* Sum: '<S175>/Sum' */
          localB->Sum_g = ((localB->Product_gm + localB->Product1_ac) -
                           localB->Product2_eb) + localB->Product3_fq;

          /* Switch: '<S141>/Switch' */
          localB->Switch[0] = localB->Sum_id;
          localB->Switch[1] = localB->Sum_c;
          localB->Switch[2] = localB->Sum_ct;
          localB->Switch[3] = localB->Sum_g;
        }

        /* Merge: '<S3>/ Merge 1' incorporates:
         *  SignalConversion generated from: '<S6>/cmd_q_b2tgt'
         */
        localB->cmd_q_b2tgt[0] = localB->Switch[0];
        localB->cmd_q_b2tgt[1] = localB->Switch[1];
        localB->cmd_q_b2tgt[2] = localB->Switch[2];
        localB->cmd_q_b2tgt[3] = localB->Switch[3];

        /* Product: '<S241>/Product' */
        localB->Product_do = localB->Switch[0] * localB->Switch[0];

        /* Product: '<S241>/Product1' */
        localB->Product1_h = localB->Switch[1] * localB->Switch[1];

        /* Product: '<S241>/Product2' */
        localB->Product2_p = localB->Switch[2] * localB->Switch[2];

        /* Product: '<S241>/Product3' */
        localB->Product3_pz = localB->Switch[3] * localB->Switch[3];

        /* Sum: '<S241>/Sum' */
        localB->Sum_a = ((localB->Product_do + localB->Product1_h) +
                         localB->Product2_p) + localB->Product3_pz;

        /* Sqrt: '<S240>/sqrt' */
        localB->sqrt_k = sqrt(localB->Sum_a);

        /* Product: '<S235>/Product' */
        localB->Product_mw = localB->Switch[0] / localB->sqrt_k;

        /* Product: '<S235>/Product1' */
        localB->Product1_lc = localB->Switch[1] / localB->sqrt_k;

        /* Product: '<S235>/Product2' */
        localB->Product2_el = localB->Switch[2] / localB->sqrt_k;

        /* Product: '<S235>/Product3' */
        localB->Product3_e1 = localB->Switch[3] / localB->sqrt_k;

        /* Fcn: '<S138>/fcn3' */
        localB->fcn3 = (localB->Product1_lc * localB->Product3_e1 +
                        localB->Product_mw * localB->Product2_el) * 2.0;

        /* If: '<S236>/If' */
        if (localB->fcn3 > 1.0) {
          /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem' incorporates:
           *  ActionPort: '<S237>/Action Port'
           */
          /* Merge: '<S236>/Merge' incorporates:
           *  Constant: '<S237>/Constant'
           */
          localB->Merge_j = 1.0;

          /* End of Outputs for SubSystem: '<S236>/If Action Subsystem' */
        } else if (localB->fcn3 < -1.0) {
          /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S238>/Action Port'
           */
          /* Merge: '<S236>/Merge' incorporates:
           *  Constant: '<S238>/Constant'
           */
          localB->Merge_j = 1.0;

          /* End of Outputs for SubSystem: '<S236>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S239>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(localB->fcn3, &localB->Merge_j);

          /* End of Outputs for SubSystem: '<S236>/If Action Subsystem2' */
        }

        /* Fcn: '<S138>/fcn1' */
        localB->fcn1 = (localB->Product2_el * localB->Product3_e1 -
                        localB->Product_mw * localB->Product1_lc) * -2.0;

        /* Fcn: '<S138>/fcn2' */
        localB->fcn2 = ((localB->Product_mw * localB->Product_mw -
                         localB->Product1_lc * localB->Product1_lc) -
                        localB->Product2_el * localB->Product2_el) +
          localB->Product3_e1 * localB->Product3_e1;

        /* Trigonometry: '<S234>/Trigonometric Function1' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[0] = rt_atan2d_snf(localB->fcn1, localB->fcn2);

        /* Fcn: '<S138>/fcn4' */
        localB->fcn4 = (localB->Product1_lc * localB->Product2_el -
                        localB->Product_mw * localB->Product3_e1) * -2.0;

        /* Fcn: '<S138>/fcn5' */
        localB->fcn5 = ((localB->Product_mw * localB->Product_mw +
                         localB->Product1_lc * localB->Product1_lc) -
                        localB->Product2_el * localB->Product2_el) -
          localB->Product3_e1 * localB->Product3_e1;

        /* Trigonometry: '<S234>/Trigonometric Function3' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[2] = rt_atan2d_snf(localB->fcn4, localB->fcn5);

        /* Trigonometry: '<S234>/trigFcn' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        u0 = localB->Merge_j;
        if (u0 > 1.0) {
          u0 = 1.0;
        } else if (u0 < -1.0) {
          u0 = -1.0;
        }

        localB->PointingCmd[1] = asin(u0);
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Pointing Mode Selection' */

  /* BusCreator generated from: '<Root>/Bus Creator' */
  rty_ACSOut->AttitudeError.Roll = localB->PointingCmd[0];
  rty_ACSOut->AttitudeError.Pitch = localB->PointingCmd[1];
  rty_ACSOut->AttitudeError.Yaw = localB->PointingCmd[2];

  /* Gain: '<S280>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->ProportionalGain[0] = 5.5E-5 * localB->PointingCmd[0];

  /* DiscreteIntegrator: '<S275>/Integrator' */
  localB->Integrator[0] = localDW->Integrator_DSTATE[0];

  /* Gain: '<S267>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->DerivativeGain[0] = 0.017 * localB->PointingCmd[0];

  /* SampleTimeMath: '<S270>/Tsamp' incorporates:
   *  Gain: '<S267>/Derivative Gain'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Tsamp[0] = localB->DerivativeGain[0];

  /* Delay: '<S268>/UD' */
  localB->UD[0] = localDW->UD_DSTATE[0];

  /* Sum: '<S268>/Diff' incorporates:
   *  Delay: '<S268>/UD'
   *  SampleTimeMath: '<S270>/Tsamp'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Diff[0] = localB->Tsamp[0] - localB->UD[0];

  /* Sum: '<S284>/Sum' incorporates:
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Sum: '<S268>/Diff'
   */
  localB->Sum[0] = (localB->ProportionalGain[0] + localB->Integrator[0]) +
    localB->Diff[0];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[0] = localB->Sum[0];

  /* Gain: '<S280>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->ProportionalGain[1] = 5.5E-5 * localB->PointingCmd[1];

  /* DiscreteIntegrator: '<S275>/Integrator' */
  localB->Integrator[1] = localDW->Integrator_DSTATE[1];

  /* Gain: '<S267>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->DerivativeGain[1] = 0.017 * localB->PointingCmd[1];

  /* SampleTimeMath: '<S270>/Tsamp' incorporates:
   *  Gain: '<S267>/Derivative Gain'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Tsamp[1] = localB->DerivativeGain[1];

  /* Delay: '<S268>/UD' */
  localB->UD[1] = localDW->UD_DSTATE[1];

  /* Sum: '<S268>/Diff' incorporates:
   *  Delay: '<S268>/UD'
   *  SampleTimeMath: '<S270>/Tsamp'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Diff[1] = localB->Tsamp[1] - localB->UD[1];

  /* Sum: '<S284>/Sum' incorporates:
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Sum: '<S268>/Diff'
   */
  localB->Sum[1] = (localB->ProportionalGain[1] + localB->Integrator[1]) +
    localB->Diff[1];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[1] = localB->Sum[1];

  /* Gain: '<S280>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->ProportionalGain[2] = 5.5E-5 * localB->PointingCmd[2];

  /* DiscreteIntegrator: '<S275>/Integrator' */
  localB->Integrator[2] = localDW->Integrator_DSTATE[2];

  /* Gain: '<S267>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->DerivativeGain[2] = 0.017 * localB->PointingCmd[2];

  /* SampleTimeMath: '<S270>/Tsamp' incorporates:
   *  Gain: '<S267>/Derivative Gain'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Tsamp[2] = localB->DerivativeGain[2];

  /* Delay: '<S268>/UD' */
  localB->UD[2] = localDW->UD_DSTATE[2];

  /* Sum: '<S268>/Diff' incorporates:
   *  Delay: '<S268>/UD'
   *  SampleTimeMath: '<S270>/Tsamp'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Diff[2] = localB->Tsamp[2] - localB->UD[2];

  /* Sum: '<S284>/Sum' incorporates:
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Sum: '<S268>/Diff'
   */
  localB->Sum[2] = (localB->ProportionalGain[2] + localB->Integrator[2]) +
    localB->Diff[2];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[2] = localB->Sum[2];
  rty_ACSOut->cmd_q_b2tgt[0] = localB->cmd_q_b2tgt[0];
  rty_ACSOut->cmd_q_b2tgt[1] = localB->cmd_q_b2tgt[1];
  rty_ACSOut->cmd_q_b2tgt[2] = localB->cmd_q_b2tgt[2];
  rty_ACSOut->cmd_q_b2tgt[3] = localB->cmd_q_b2tgt[3];
  rty_ACSOut->NavMode = *rtu_AttitudeMode;

  /* Gain: '<S272>/Integral Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->IntegralGain[0] = 0.0 * localB->PointingCmd[0];
  localB->IntegralGain[1] = 0.0 * localB->PointingCmd[1];
  localB->IntegralGain[2] = 0.0 * localB->PointingCmd[2];
}

/* Update for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS_Update(B_asbCubeSatACS_c_T *localB, DW_asbCubeSatACS_f_T
  *localDW)
{
  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   */
  localDW->Integrator_DSTATE[0] += localB->IntegralGain[0];

  /* Update for Delay: '<S268>/UD' incorporates:
   *  SampleTimeMath: '<S270>/Tsamp'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localDW->UD_DSTATE[0] = localB->Tsamp[0];

  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   */
  localDW->Integrator_DSTATE[1] += localB->IntegralGain[1];

  /* Update for Delay: '<S268>/UD' incorporates:
   *  SampleTimeMath: '<S270>/Tsamp'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localDW->UD_DSTATE[1] = localB->Tsamp[1];

  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   */
  localDW->Integrator_DSTATE[2] += localB->IntegralGain[2];

  /* Update for Delay: '<S268>/UD' incorporates:
   *  SampleTimeMath: '<S270>/Tsamp'
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localDW->UD_DSTATE[2] = localB->Tsamp[2];
}

/* Model initialize function */
void asbCubeSatACS_initialize(const char_T **rt_errorStatus,
  RT_MODEL_asbCubeSatACS_T *const asbCubeSatACS_M, B_asbCubeSatACS_c_T *localB,
  DW_asbCubeSatACS_f_T *localDW)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(asbCubeSatACS_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_asbCubeSatACS_c_T));

  {
    localB->BusConversion_InsertedFor_Point = asbCubeSatACS_rtZStatesOutBus;
    localB->BusConversion_InsertedFor_Poi_e = asbCubeSatACS_rtZEnvBus;
    localB->ProportionalGain[0] = 0.0;
    localB->ProportionalGain[1] = 0.0;
    localB->ProportionalGain[2] = 0.0;
    localB->Integrator[0] = 0.0;
    localB->Integrator[1] = 0.0;
    localB->Integrator[2] = 0.0;
    localB->DerivativeGain[0] = 0.0;
    localB->DerivativeGain[1] = 0.0;
    localB->DerivativeGain[2] = 0.0;
    localB->Tsamp[0] = 0.0;
    localB->Tsamp[1] = 0.0;
    localB->Tsamp[2] = 0.0;
    localB->UD[0] = 0.0;
    localB->UD[1] = 0.0;
    localB->UD[2] = 0.0;
    localB->Diff[0] = 0.0;
    localB->Diff[1] = 0.0;
    localB->Diff[2] = 0.0;
    localB->Sum[0] = 0.0;
    localB->Sum[1] = 0.0;
    localB->Sum[2] = 0.0;
    localB->IntegralGain[0] = 0.0;
    localB->IntegralGain[1] = 0.0;
    localB->IntegralGain[2] = 0.0;
    localB->ControlMode = 0.0;
    localB->PointingCmd[0] = 0.0;
    localB->PointingCmd[1] = 0.0;
    localB->PointingCmd[2] = 0.0;
    localB->cmd_q_b2tgt[0] = 0.0;
    localB->cmd_q_b2tgt[1] = 0.0;
    localB->cmd_q_b2tgt[2] = 0.0;
    localB->cmd_q_b2tgt[3] = 0.0;
    localB->Product = 0.0;
    localB->UnaryMinus = 0.0;
    localB->Product1 = 0.0;
    localB->UnaryMinus1 = 0.0;
    localB->Product2 = 0.0;
    localB->UnaryMinus2 = 0.0;
    localB->Product3 = 0.0;
    localB->Sum_p = 0.0;
    localB->sqrt_f = 0.0;
    localB->Product_h = 0.0;
    localB->Product_g = 0.0;
    localB->Product1_g = 0.0;
    localB->UnaryMinus_l = 0.0;
    localB->Product1_gj = 0.0;
    localB->Product2_e = 0.0;
    localB->UnaryMinus1_j = 0.0;
    localB->Product2_o = 0.0;
    localB->Product3_e = 0.0;
    localB->UnaryMinus2_m = 0.0;
    localB->Product3_d = 0.0;
    localB->Sum_n = 0.0;
    localB->sqrt_o = 0.0;
    localB->Product_m = 0.0;
    localB->Product1_l = 0.0;
    localB->Product2_g = 0.0;
    localB->Product3_c = 0.0;
    localB->Product_hp = 0.0;
    localB->Product1_n = 0.0;
    localB->Sum1 = 0.0;
    localB->Gain = 0.0;
    localB->Product2_k = 0.0;
    localB->Product3_p = 0.0;
    localB->Sum2 = 0.0;
    localB->Gain1 = 0.0;
    localB->Product6 = 0.0;
    localB->Product7 = 0.0;
    localB->Sum3 = 0.0;
    localB->Gain2 = 0.0;
    localB->Product4 = 0.0;
    localB->Product5 = 0.0;
    localB->Product8 = 0.0;
    localB->Sum_l = 0.0;
    localB->Product_gr = 0.0;
    localB->Product1_ls = 0.0;
    localB->Sum1_d = 0.0;
    localB->Gain_g = 0.0;
    localB->Product2_l = 0.0;
    localB->Product3_j = 0.0;
    localB->Sum2_e = 0.0;
    localB->Gain1_p = 0.0;
    localB->Product6_k = 0.0;
    localB->Product7_n = 0.0;
    localB->Sum3_k = 0.0;
    localB->Gain2_l = 0.0;
    localB->Product4_m = 0.0;
    localB->Product5_i = 0.0;
    localB->Product8_a = 0.0;
    localB->Sum_m = 0.0;
    localB->Product_h0 = 0.0;
    localB->Product1_i = 0.0;
    localB->Sum1_p = 0.0;
    localB->Gain_i = 0.0;
    localB->Product2_ep = 0.0;
    localB->Product3_dl = 0.0;
    localB->Sum2_p = 0.0;
    localB->Gain1_j = 0.0;
    localB->Product6_n = 0.0;
    localB->Product7_k = 0.0;
    localB->Sum3_m = 0.0;
    localB->Gain2_p = 0.0;
    localB->Product4_l = 0.0;
    localB->Product5_n = 0.0;
    localB->Product8_g = 0.0;
    localB->Sum_e = 0.0;
    localB->Merge = 0.0;
    localB->TmpSignalConversionAtDotProduct[0] = 0.0;
    localB->TmpSignalConversionAtDotProduct[1] = 0.0;
    localB->TmpSignalConversionAtDotProduct[2] = 0.0;
    localB->Product_hi = 0.0;
    localB->Product1_a = 0.0;
    localB->Product2_a = 0.0;
    localB->Product3_eh = 0.0;
    localB->Sum_f = 0.0;
    localB->sqrt_l = 0.0;
    localB->Product2_o4 = 0.0;
    localB->Product6_i = 0.0;
    localB->Product3_h = 0.0;
    localB->Product7_c = 0.0;
    localB->Sum3_h = 0.0;
    localB->Gain2_k = 0.0;
    localB->Product8_p = 0.0;
    localB->Product1_f = 0.0;
    localB->Product_f = 0.0;
    localB->Product_e = 0.0;
    localB->Product1_iz = 0.0;
    localB->Sum1_c = 0.0;
    localB->Gain_b = 0.0;
    localB->Product4_c = 0.0;
    localB->Product2_m = 0.0;
    localB->Product3_a = 0.0;
    localB->Sum2_l = 0.0;
    localB->Gain1_i = 0.0;
    localB->Product5_g = 0.0;
    localB->Sum_o = 0.0;
    localB->Product_f0 = 0.0;
    localB->Product1_m = 0.0;
    localB->Sum1_n = 0.0;
    localB->Gain_a = 0.0;
    localB->Product4_g = 0.0;
    localB->Product6_h = 0.0;
    localB->Product7_f = 0.0;
    localB->Sum3_i = 0.0;
    localB->Gain2_b = 0.0;
    localB->Product8_o = 0.0;
    localB->Product2_ak = 0.0;
    localB->Product3_as = 0.0;
    localB->Sum2_ls = 0.0;
    localB->Gain1_d = 0.0;
    localB->Product5_j = 0.0;
    localB->Sum_k = 0.0;
    localB->Product_n = 0.0;
    localB->Product1_o = 0.0;
    localB->Sum1_j = 0.0;
    localB->Gain_iw = 0.0;
    localB->Product4_a = 0.0;
    localB->Product2_n = 0.0;
    localB->Product3_n = 0.0;
    localB->Sum2_k = 0.0;
    localB->Gain1_io = 0.0;
    localB->Product5_m = 0.0;
    localB->Product6_j = 0.0;
    localB->Product7_h = 0.0;
    localB->Sum3_f = 0.0;
    localB->Gain2_c = 0.0;
    localB->Product8_e = 0.0;
    localB->Sum_nm = 0.0;
    localB->TmpSignalConversionAtDotProdu_f[0] = 0.0;
    localB->TmpSignalConversionAtDotProdu_f[1] = 0.0;
    localB->TmpSignalConversionAtDotProdu_f[2] = 0.0;
    localB->DotProduct3 = 0.0;
    localB->DotProduct1 = 0.0;
    localB->DotProduct2 = 0.0;
    localB->Divide1 = 0.0;
    localB->Sqrt3 = 0.0;
    localB->Divide = 0.0;
    localB->Bias = 0.0;
    localB->Abs = 0.0;
    localB->Bias1 = 0.0;
    localB->Abs1 = 0.0;
    localB->Merge_b = 0.0;
    localB->DotProduct3_h = 0.0;
    localB->DotProduct2_a = 0.0;
    localB->Divide1_a = 0.0;
    localB->Sqrt3_k = 0.0;
    localB->Add2 = 0.0;
    localB->Product_g0 = 0.0;
    localB->DotProduct3_k = 0.0;
    localB->DotProduct2_g = 0.0;
    localB->Divide1_e = 0.0;
    localB->Sqrt3_f = 0.0;
    localB->Divide_c = 0.0;
    localB->Bias_l = 0.0;
    localB->Abs_n = 0.0;
    localB->Bias1_f = 0.0;
    localB->Abs1_p = 0.0;
    localB->Merge_d = 0.0;
    localB->is180degRot[0] = 0.0;
    localB->is180degRot[1] = 0.0;
    localB->is180degRot[2] = 0.0;
    localB->Product1_lm = 0.0;
    localB->Product2_n1 = 0.0;
    localB->Product3_cn = 0.0;
    localB->Sum_oe = 0.0;
    localB->sqrt_e = 0.0;
    localB->Product_i = 0.0;
    localB->jxk = 0.0;
    localB->kxi = 0.0;
    localB->ixj = 0.0;
    localB->kxj = 0.0;
    localB->ixk = 0.0;
    localB->jxi = 0.0;
    localB->Sum_pc[0] = 0.0;
    localB->Sum_pc[1] = 0.0;
    localB->Sum_pc[2] = 0.0;
    localB->jxk_o = 0.0;
    localB->kxi_c = 0.0;
    localB->ixj_g = 0.0;
    localB->kxj_k = 0.0;
    localB->ixk_b = 0.0;
    localB->jxi_n = 0.0;
    localB->Sum_i[0] = 0.0;
    localB->Sum_i[1] = 0.0;
    localB->Sum_i[2] = 0.0;
    localB->Product2_od = 0.0;
    localB->Product_mz = 0.0;
    localB->Product1_d = 0.0;
    localB->Product1_fo = 0.0;
    localB->Product2_os = 0.0;
    localB->Product3_d2 = 0.0;
    localB->Product3_f = 0.0;
    localB->Sum_fi = 0.0;
    localB->sqrt_e2 = 0.0;
    localB->Product2_at = 0.0;
    localB->Product6_c = 0.0;
    localB->Product3_b = 0.0;
    localB->Product7_cz = 0.0;
    localB->Sum3_b = 0.0;
    localB->Gain2_ce = 0.0;
    localB->Product8_pp = 0.0;
    localB->Product1_j = 0.0;
    localB->Product_p = 0.0;
    localB->Product_d = 0.0;
    localB->Product1_ji = 0.0;
    localB->Sum1_a = 0.0;
    localB->Gain_n = 0.0;
    localB->Product4_p = 0.0;
    localB->Product2_am = 0.0;
    localB->Product3_jh = 0.0;
    localB->Sum2_c = 0.0;
    localB->Gain1_c = 0.0;
    localB->Product5_b = 0.0;
    localB->Sum_j = 0.0;
    localB->Product_b = 0.0;
    localB->Product1_mo = 0.0;
    localB->Sum1_pk = 0.0;
    localB->Gain_l = 0.0;
    localB->Product4_h = 0.0;
    localB->Product6_kv = 0.0;
    localB->Product7_m = 0.0;
    localB->Sum3_d = 0.0;
    localB->Gain2_p0 = 0.0;
    localB->Product8_j = 0.0;
    localB->Product2_gn = 0.0;
    localB->Product3_nm = 0.0;
    localB->Sum2_d = 0.0;
    localB->Gain1_m = 0.0;
    localB->Product5_nw = 0.0;
    localB->Sum_m4 = 0.0;
    localB->Product_bs = 0.0;
    localB->Product1_ie = 0.0;
    localB->Sum1_b = 0.0;
    localB->Gain_iy = 0.0;
    localB->Product4_lc = 0.0;
    localB->Product2_h = 0.0;
    localB->Product3_ev = 0.0;
    localB->Sum2_g = 0.0;
    localB->Gain1_ck = 0.0;
    localB->Product5_i1 = 0.0;
    localB->Product6_b = 0.0;
    localB->Product7_hk = 0.0;
    localB->Sum3_o = 0.0;
    localB->Gain2_d = 0.0;
    localB->Product8_c = 0.0;
    localB->Sum_ld = 0.0;
    localB->TmpSignalConversionAtDotProdu_d[0] = 0.0;
    localB->TmpSignalConversionAtDotProdu_d[1] = 0.0;
    localB->TmpSignalConversionAtDotProdu_d[2] = 0.0;
    localB->DotProduct3_l = 0.0;
    localB->DotProduct2_gh = 0.0;
    localB->Divide1_f = 0.0;
    localB->Sqrt3_e = 0.0;
    localB->Divide_i = 0.0;
    localB->Bias_b = 0.0;
    localB->Abs_l = 0.0;
    localB->Bias1_e = 0.0;
    localB->Abs1_l = 0.0;
    localB->Merge_f = 0.0;
    localB->Switch[0] = 0.0;
    localB->Switch[1] = 0.0;
    localB->Switch[2] = 0.0;
    localB->Switch[3] = 0.0;
    localB->Product_do = 0.0;
    localB->Product1_h = 0.0;
    localB->Product2_p = 0.0;
    localB->Product3_pz = 0.0;
    localB->Sum_a = 0.0;
    localB->sqrt_k = 0.0;
    localB->Product_mw = 0.0;
    localB->Product1_lc = 0.0;
    localB->Product2_el = 0.0;
    localB->Product3_e1 = 0.0;
    localB->fcn3 = 0.0;
    localB->Merge_j = 0.0;
    localB->fcn1 = 0.0;
    localB->fcn2 = 0.0;
    localB->fcn4 = 0.0;
    localB->fcn5 = 0.0;
    localB->is180degRot_m[0] = 0.0;
    localB->is180degRot_m[1] = 0.0;
    localB->is180degRot_m[2] = 0.0;
    localB->Product3_jn = 0.0;
    localB->Product2_nf = 0.0;
    localB->Product1_az = 0.0;
    localB->DotProduct2_p = 0.0;
    localB->Divide1_d = 0.0;
    localB->Sqrt3_o = 0.0;
    localB->DotProduct3_j = 0.0;
    localB->Add2_p = 0.0;
    localB->Product_o = 0.0;
    localB->Sum_o2 = 0.0;
    localB->sqrt_ee = 0.0;
    localB->Product3_i = 0.0;
    localB->Product3_jp = 0.0;
    localB->Product2_c = 0.0;
    localB->Product2_cn = 0.0;
    localB->Product1_dr = 0.0;
    localB->Product1_j4 = 0.0;
    localB->Product_or = 0.0;
    localB->Product_c = 0.0;
    localB->Sum_id = 0.0;
    localB->Product3_ic = 0.0;
    localB->Product2_d = 0.0;
    localB->Product1_nc = 0.0;
    localB->Product_k = 0.0;
    localB->Sum_c = 0.0;
    localB->Product3_ht = 0.0;
    localB->Product2_mx = 0.0;
    localB->Product1_jk = 0.0;
    localB->Product_kq = 0.0;
    localB->Sum_ct = 0.0;
    localB->Product3_fq = 0.0;
    localB->Product2_eb = 0.0;
    localB->Product1_ac = 0.0;
    localB->Product_gm = 0.0;
    localB->Sum_g = 0.0;
    localB->jxi_d = 0.0;
    localB->ixk_a = 0.0;
    localB->kxj_l = 0.0;
    localB->ixj_k = 0.0;
    localB->kxi_m = 0.0;
    localB->jxk_p = 0.0;
    localB->Sum_gy[0] = 0.0;
    localB->Sum_gy[1] = 0.0;
    localB->Sum_gy[2] = 0.0;
    localB->jxi_a = 0.0;
    localB->ixk_o = 0.0;
    localB->kxj_j = 0.0;
    localB->ixj_l = 0.0;
    localB->kxi_n = 0.0;
    localB->jxk_n = 0.0;
    localB->Sum_d[0] = 0.0;
    localB->Sum_d[1] = 0.0;
    localB->Sum_d[2] = 0.0;
    localB->Gain_h[0] = 0.0;
    localB->Gain_h[1] = 0.0;
    localB->Gain_h[2] = 0.0;
    localB->Product_cs = 0.0;
    localB->UnaryMinus_e = 0.0;
    localB->Product1_p = 0.0;
    localB->UnaryMinus1_d = 0.0;
    localB->Product2_j = 0.0;
    localB->UnaryMinus2_f = 0.0;
    localB->Product3_ii = 0.0;
    localB->Sum_p4 = 0.0;
    localB->sqrt_o5 = 0.0;
    localB->Product_ks = 0.0;
    localB->Product_bb = 0.0;
    localB->Product1_l0 = 0.0;
    localB->UnaryMinus_ec = 0.0;
    localB->Product1_me = 0.0;
    localB->Product2_pc = 0.0;
    localB->UnaryMinus1_e = 0.0;
    localB->Product2_i = 0.0;
    localB->Product3_c3 = 0.0;
    localB->UnaryMinus2_k = 0.0;
    localB->Product3_ff = 0.0;
    localB->Sum_ke = 0.0;
    localB->sqrt_la = 0.0;
    localB->Product_gl = 0.0;
    localB->Product1_gs = 0.0;
    localB->Product2_ef = 0.0;
    localB->Product3_fp = 0.0;
    localB->Product_fo = 0.0;
    localB->Product1_b = 0.0;
    localB->Sum1_h = 0.0;
    localB->Gain_lp = 0.0;
    localB->Product2_js = 0.0;
    localB->Product3_hw = 0.0;
    localB->Sum2_i = 0.0;
    localB->Gain1_o = 0.0;
    localB->Product6_m = 0.0;
    localB->Product7_k2 = 0.0;
    localB->Sum3_c = 0.0;
    localB->Gain2_cx = 0.0;
    localB->Product4_f = 0.0;
    localB->Product5_f = 0.0;
    localB->Product8_ao = 0.0;
    localB->Sum_ah = 0.0;
    localB->Product_pp = 0.0;
    localB->Product1_p3 = 0.0;
    localB->Sum1_i = 0.0;
    localB->Gain_ie = 0.0;
    localB->Product2_f = 0.0;
    localB->Product3_m = 0.0;
    localB->Sum2_f = 0.0;
    localB->Gain1_l = 0.0;
    localB->Product6_iz = 0.0;
    localB->Product7_e = 0.0;
    localB->Sum3_op = 0.0;
    localB->Gain2_e = 0.0;
    localB->Product4_o = 0.0;
    localB->Product5_ji = 0.0;
    localB->Product8_f = 0.0;
    localB->Sum_pcb = 0.0;
    localB->Product_ce = 0.0;
    localB->Product1_mx = 0.0;
    localB->Sum1_m = 0.0;
    localB->Gain_ab = 0.0;
    localB->Product2_av = 0.0;
    localB->Product3_cx = 0.0;
    localB->Sum2_o = 0.0;
    localB->Gain1_g = 0.0;
    localB->Product6_l = 0.0;
    localB->Product7_l = 0.0;
    localB->Sum3_a = 0.0;
    localB->Gain2_o = 0.0;
    localB->Product4_gi = 0.0;
    localB->Product5_my = 0.0;
    localB->Product8_gb = 0.0;
    localB->Sum_ml = 0.0;
    localB->DotProduct = 0.0;
    localB->jxk_pl = 0.0;
    localB->kxi_a = 0.0;
    localB->ixj_d = 0.0;
    localB->kxj_e = 0.0;
    localB->ixk_g = 0.0;
    localB->jxi_g = 0.0;
    localB->Sum_mp[0] = 0.0;
    localB->Sum_mp[1] = 0.0;
    localB->Sum_mp[2] = 0.0;
    localB->jxk_c = 0.0;
    localB->kxi_na = 0.0;
    localB->ixj_p = 0.0;
    localB->kxj_d = 0.0;
    localB->ixk_h = 0.0;
    localB->jxi_gk = 0.0;
    localB->Sum_co[0] = 0.0;
    localB->Sum_co[1] = 0.0;
    localB->Sum_co[2] = 0.0;
    localB->jxk_o5 = 0.0;
    localB->kxi_f = 0.0;
    localB->ixj_lo = 0.0;
    localB->kxj_o = 0.0;
    localB->ixk_ab = 0.0;
    localB->jxi_j = 0.0;
    localB->Sum_jr[0] = 0.0;
    localB->Sum_jr[1] = 0.0;
    localB->Sum_jr[2] = 0.0;
    localB->divide2[0] = 0.0;
    localB->divide2[1] = 0.0;
    localB->divide2[2] = 0.0;
    localB->r = 0.0;
    localB->divide3[0] = 0.0;
    localB->divide3[1] = 0.0;
    localB->divide3[2] = 0.0;
    localB->evxhmurr[0] = 0.0;
    localB->evxhmurr[1] = 0.0;
    localB->evxhmurr[2] = 0.0;
    localB->DotProduct1_b = 0.0;
    localB->DotProduct2_m = 0.0;
    localB->DotProduct3_h4 = 0.0;
    localB->DotProduct4 = 0.0;
    localB->DotProduct5 = 0.0;
    localB->DotProduct6 = 0.0;
    localB->n = 0.0;
    localB->e = 0.0;
    localB->Product_k3 = 0.0;
    localB->Product1_e = 0.0;
    localB->divide = 0.0;
    localB->Min = 0.0;
    localB->Max = 0.0;
    localB->RAANacosn_in = 0.0;
    localB->n_j0 = 0.0;
    localB->h = 0.0;
    localB->divide1 = 0.0;
    localB->Min_n = 0.0;
    localB->Max_p = 0.0;
    localB->iacosh_kh = 0.0;
    localB->divide4 = 0.0;
    localB->Min_a = 0.0;
    localB->Max_b = 0.0;
    localB->argPacosnene = 0.0;
    localB->e_k0 = 0.0;
    localB->divide5 = 0.0;
    localB->Min_ni = 0.0;
    localB->Max_pd = 0.0;
    localB->nuacoserer = 0.0;
    localB->rv0 = 0.0;
    localB->Sum3_p = 0.0;
    localB->u2[0] = 0.0;
    localB->u2[1] = 0.0;
    localB->u2[2] = 0.0;
    localB->sincos_o1[0] = 0.0;
    localB->sincos_o1[1] = 0.0;
    localB->sincos_o1[2] = 0.0;
    localB->sincos_o2[0] = 0.0;
    localB->sincos_o2[1] = 0.0;
    localB->sincos_o2[2] = 0.0;
    localB->q0 = 0.0;
    localB->Product_gh = 0.0;
    localB->q1 = 0.0;
    localB->Product1_g5 = 0.0;
    localB->q2 = 0.0;
    localB->Product2_ay = 0.0;
    localB->q3 = 0.0;
    localB->Product3_o = 0.0;
    localB->Sum_b = 0.0;
    localB->sqrt_p = 0.0;
    localB->Product_pg = 0.0;
    localB->Product1_c = 0.0;
    localB->Product2_oj = 0.0;
    localB->Product3_ch = 0.0;
    localB->Product_a = 0.0;
    localB->Product1_hu = 0.0;
    localB->Product2_dr = 0.0;
    localB->Product3_do = 0.0;
    localB->Sum_cx = 0.0;
    localB->sqrt_b = 0.0;
    localB->Product_on = 0.0;
    localB->Product_ke = 0.0;
    localB->Product1_ar = 0.0;
    localB->Product1_en = 0.0;
    localB->Product2_ov = 0.0;
    localB->Product2_gu = 0.0;
    localB->Product3_hh = 0.0;
    localB->Product3_hw3 = 0.0;
    localB->Sum_dh = 0.0;
    localB->UnaryMinus_eq = 0.0;
    localB->Product_orf = 0.0;
    localB->Product1_gs1 = 0.0;
    localB->Product2_amg = 0.0;
    localB->Product3_ou = 0.0;
    localB->Sum_fc = 0.0;
    localB->UnaryMinus1_o = 0.0;
    localB->Product_hl = 0.0;
    localB->Product1_iu = 0.0;
    localB->Product2_m4 = 0.0;
    localB->Product3_ax = 0.0;
    localB->Sum_cw = 0.0;
    localB->UnaryMinus2_e = 0.0;
    localB->Product_e4 = 0.0;
    localB->Product1_o4 = 0.0;
    localB->Product2_do = 0.0;
    localB->Product3_dd = 0.0;
    localB->Sum_bg = 0.0;
    localB->Merge_k = 0.0;
    localB->TmpSignalConversionAtDotProdu_k[0] = 0.0;
    localB->TmpSignalConversionAtDotProdu_k[1] = 0.0;
    localB->TmpSignalConversionAtDotProdu_k[2] = 0.0;
    localB->Product_pp0 = 0.0;
    localB->Product1_hp = 0.0;
    localB->Product2_fv = 0.0;
    localB->Product3_k = 0.0;
    localB->Sum_ik = 0.0;
    localB->sqrt_g = 0.0;
    localB->Product2_ah = 0.0;
    localB->Product6_g = 0.0;
    localB->Product3_dn = 0.0;
    localB->Product7_hr = 0.0;
    localB->Sum3_hf = 0.0;
    localB->Gain2_dd = 0.0;
    localB->Product8_b = 0.0;
    localB->Product1_l1 = 0.0;
    localB->Product_co = 0.0;
    localB->Product_ki = 0.0;
    localB->Product1_hh = 0.0;
    localB->Sum1_ax = 0.0;
    localB->Gain_e = 0.0;
    localB->Product4_b = 0.0;
    localB->Product2_k3 = 0.0;
    localB->Product3_oa = 0.0;
    localB->Sum2_ib = 0.0;
    localB->Gain1_lm = 0.0;
    localB->Product5_fa = 0.0;
    localB->Sum_mj = 0.0;
    localB->Product_i2 = 0.0;
    localB->Product1_ir = 0.0;
    localB->Sum1_g = 0.0;
    localB->Gain_gi = 0.0;
    localB->Product4_oz = 0.0;
    localB->Product6_gv = 0.0;
    localB->Product7_i = 0.0;
    localB->Sum3_cr = 0.0;
    localB->Gain2_m = 0.0;
    localB->Product8_bm = 0.0;
    localB->Product2_ps = 0.0;
    localB->Product3_b1 = 0.0;
    localB->Sum2_a = 0.0;
    localB->Gain1_h = 0.0;
    localB->Product5_nv = 0.0;
    localB->Sum_ia = 0.0;
    localB->Product_c2 = 0.0;
    localB->Product1_om = 0.0;
    localB->Sum1_h1 = 0.0;
    localB->Gain_lx = 0.0;
    localB->Product4_fe = 0.0;
    localB->Product2_gr = 0.0;
    localB->Product3_ju = 0.0;
    localB->Sum2_h = 0.0;
    localB->Gain1_b = 0.0;
    localB->Product5_k = 0.0;
    localB->Product6_bb = 0.0;
    localB->Product7_p = 0.0;
    localB->Sum3_n = 0.0;
    localB->Gain2_a = 0.0;
    localB->Product8_i = 0.0;
    localB->Sum_kr = 0.0;
    localB->TmpSignalConversionAtDotProdu_j[0] = 0.0;
    localB->TmpSignalConversionAtDotProdu_j[1] = 0.0;
    localB->TmpSignalConversionAtDotProdu_j[2] = 0.0;
    localB->DotProduct3_o = 0.0;
    localB->DotProduct1_n = 0.0;
    localB->DotProduct2_c = 0.0;
    localB->Divide1_n = 0.0;
    localB->Sqrt3_a = 0.0;
    localB->Divide_m = 0.0;
    localB->Bias_f = 0.0;
    localB->Abs_o = 0.0;
    localB->Bias1_p = 0.0;
    localB->Abs1_o = 0.0;
    localB->Merge_o = 0.0;
    localB->DotProduct3_n = 0.0;
    localB->DotProduct2_k = 0.0;
    localB->Divide1_nh = 0.0;
    localB->Sqrt3_n = 0.0;
    localB->Add2_c = 0.0;
    localB->Product_e0 = 0.0;
    localB->DotProduct3_b = 0.0;
    localB->DotProduct2_n = 0.0;
    localB->Divide1_nj = 0.0;
    localB->Sqrt3_ko = 0.0;
    localB->Divide_l = 0.0;
    localB->Bias_a = 0.0;
    localB->Abs_m = 0.0;
    localB->Bias1_m = 0.0;
    localB->Abs1_m = 0.0;
    localB->Merge_a = 0.0;
    localB->is180degRot_p[0] = 0.0;
    localB->is180degRot_p[1] = 0.0;
    localB->is180degRot_p[2] = 0.0;
    localB->Product1_k = 0.0;
    localB->Product2_hd = 0.0;
    localB->Product3_hx = 0.0;
    localB->Sum_p1 = 0.0;
    localB->sqrt_e5 = 0.0;
    localB->Product_fd = 0.0;
    localB->jxk_i = 0.0;
    localB->kxi_p = 0.0;
    localB->ixj_gk = 0.0;
    localB->kxj_n = 0.0;
    localB->ixk_hg = 0.0;
    localB->jxi_dy = 0.0;
    localB->Sum_ab[0] = 0.0;
    localB->Sum_ab[1] = 0.0;
    localB->Sum_ab[2] = 0.0;
    localB->jxk_h = 0.0;
    localB->kxi_f2 = 0.0;
    localB->ixj_e = 0.0;
    localB->kxj_op = 0.0;
    localB->ixk_k = 0.0;
    localB->jxi_g0 = 0.0;
    localB->Sum_gf[0] = 0.0;
    localB->Sum_gf[1] = 0.0;
    localB->Sum_gf[2] = 0.0;
    localB->Product2_jl = 0.0;
    localB->Product_l = 0.0;
    localB->Product1_ex = 0.0;
    localB->Product1_ef = 0.0;
    localB->Product2_b = 0.0;
    localB->Product3_l = 0.0;
    localB->Product3_hv = 0.0;
    localB->Sum_j3 = 0.0;
    localB->sqrt_bh = 0.0;
    localB->Product2_g5 = 0.0;
    localB->Product6_f = 0.0;
    localB->Product3_fb = 0.0;
    localB->Product7_d = 0.0;
    localB->Sum3_dm = 0.0;
    localB->Gain2_mk = 0.0;
    localB->Product8_pc = 0.0;
    localB->Product1_o5 = 0.0;
    localB->Product_ak = 0.0;
    localB->Product_im = 0.0;
    localB->Product1_jv = 0.0;
    localB->Sum1_jd = 0.0;
    localB->Gain_bh = 0.0;
    localB->Product4_j = 0.0;
    localB->Product2_ls = 0.0;
    localB->Product3_kc = 0.0;
    localB->Sum2_d4 = 0.0;
    localB->Gain1_a = 0.0;
    localB->Product5_jf = 0.0;
    localB->Sum_ev = 0.0;
    localB->Product_j = 0.0;
    localB->Product1_bo = 0.0;
    localB->Sum1_cy = 0.0;
    localB->Gain_n4 = 0.0;
    localB->Product4_mx = 0.0;
    localB->Product6_mq = 0.0;
    localB->Product7_cs = 0.0;
    localB->Sum3_g = 0.0;
    localB->Gain2_g = 0.0;
    localB->Product8_cw = 0.0;
    localB->Product2_a0 = 0.0;
    localB->Product3_a4 = 0.0;
    localB->Sum2_j = 0.0;
    localB->Gain1_bl = 0.0;
    localB->Product5_ge = 0.0;
    localB->Sum_ow = 0.0;
    localB->Product_b3 = 0.0;
    localB->Product1_ph = 0.0;
    localB->Sum1_b2 = 0.0;
    localB->Gain_lj = 0.0;
    localB->Product4_pw = 0.0;
    localB->Product2_cw = 0.0;
    localB->Product3_ix = 0.0;
    localB->Sum2_dn = 0.0;
    localB->Gain1_lm3 = 0.0;
    localB->Product5_jz = 0.0;
    localB->Product6_mo = 0.0;
    localB->Product7_mi = 0.0;
    localB->Sum3_al = 0.0;
    localB->Gain2_pg = 0.0;
    localB->Product8_bz = 0.0;
    localB->Sum_on = 0.0;
    localB->TmpSignalConversionAtDotProdu_c[0] = 0.0;
    localB->TmpSignalConversionAtDotProdu_c[1] = 0.0;
    localB->TmpSignalConversionAtDotProdu_c[2] = 0.0;
    localB->DotProduct3_m = 0.0;
    localB->DotProduct2_ck = 0.0;
    localB->Divide1_dp = 0.0;
    localB->Sqrt3_av = 0.0;
    localB->Divide_f = 0.0;
    localB->Bias_c = 0.0;
    localB->Abs_k = 0.0;
    localB->Bias1_fx = 0.0;
    localB->Abs1_md = 0.0;
    localB->Merge_di = 0.0;
    localB->Switch_p[0] = 0.0;
    localB->Switch_p[1] = 0.0;
    localB->Switch_p[2] = 0.0;
    localB->Switch_p[3] = 0.0;
    localB->Product_mx = 0.0;
    localB->Product1_fz = 0.0;
    localB->Product2_p4 = 0.0;
    localB->Product3_kb = 0.0;
    localB->Sum_ka = 0.0;
    localB->sqrt_j = 0.0;
    localB->Product_j5 = 0.0;
    localB->Product1_ik = 0.0;
    localB->Product2_ev = 0.0;
    localB->Product3_fq1 = 0.0;
    localB->fcn3_l = 0.0;
    localB->Merge_c = 0.0;
    localB->fcn1_l = 0.0;
    localB->fcn2_k = 0.0;
    localB->fcn4_e = 0.0;
    localB->fcn5_p = 0.0;
    localB->is180degRot_o[0] = 0.0;
    localB->is180degRot_o[1] = 0.0;
    localB->is180degRot_o[2] = 0.0;
    localB->Product3_fl = 0.0;
    localB->Product2_jr = 0.0;
    localB->Product1_ig = 0.0;
    localB->DotProduct2_ci = 0.0;
    localB->Divide1_nv = 0.0;
    localB->Sqrt3_m = 0.0;
    localB->DotProduct3_a = 0.0;
    localB->Add2_e = 0.0;
    localB->Product_f4 = 0.0;
    localB->Sum_gz = 0.0;
    localB->sqrt_c = 0.0;
    localB->Product3_md = 0.0;
    localB->Product3_e5 = 0.0;
    localB->Product2_pn = 0.0;
    localB->Product2_iy = 0.0;
    localB->Product1_di = 0.0;
    localB->Product1_g4 = 0.0;
    localB->Product_hb = 0.0;
    localB->Product_ek = 0.0;
    localB->Sum_cu = 0.0;
    localB->Product3_g = 0.0;
    localB->Product2_gy = 0.0;
    localB->Product1_kh = 0.0;
    localB->Product_p5 = 0.0;
    localB->Sum_od = 0.0;
    localB->Product3_mq = 0.0;
    localB->Product2_o4z = 0.0;
    localB->Product1_iw = 0.0;
    localB->Product_hu = 0.0;
    localB->Sum_krr = 0.0;
    localB->Product3_ics = 0.0;
    localB->Product2_au = 0.0;
    localB->Product1_a0 = 0.0;
    localB->Product_nm = 0.0;
    localB->Sum_mi = 0.0;
    localB->jxi_di = 0.0;
    localB->ixk_i = 0.0;
    localB->kxj_eu = 0.0;
    localB->ixj_h = 0.0;
    localB->kxi_k = 0.0;
    localB->jxk_hl = 0.0;
    localB->Sum_gh[0] = 0.0;
    localB->Sum_gh[1] = 0.0;
    localB->Sum_gh[2] = 0.0;
    localB->jxi_l = 0.0;
    localB->ixk_l = 0.0;
    localB->kxj_b = 0.0;
    localB->ixj_j = 0.0;
    localB->kxi_o = 0.0;
    localB->jxk_hle = 0.0;
    localB->Sum_do[0] = 0.0;
    localB->Sum_do[1] = 0.0;
    localB->Sum_do[2] = 0.0;
    localB->Sum2_fk = 0.0;
    localB->Sum_e0 = 0.0;
    localB->Sum1_d0 = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_asbCubeSatACS_f_T));
  localDW->Integrator_DSTATE[0] = 0.0;
  localDW->Integrator_DSTATE[1] = 0.0;
  localDW->Integrator_DSTATE[2] = 0.0;
  localDW->UD_DSTATE[0] = 0.0;
  localDW->UD_DSTATE[1] = 0.0;
  localDW->UD_DSTATE[2] = 0.0;
}
