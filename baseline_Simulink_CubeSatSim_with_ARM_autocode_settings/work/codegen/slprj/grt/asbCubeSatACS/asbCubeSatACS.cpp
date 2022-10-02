/*
 * Code generation for system model 'asbCubeSatACS'
 *
 * Model                      : asbCubeSatACS
 * Model version              : 6.9
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C++ source code generated on : Wed Sep 28 18:39:11 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "asbCubeSatACS.h"
#include "rtwtypes.h"
#include "asbCubeSatACS_types.h"
#include <cmath>
#include "rt_atan2d_snf.h"
#include "asbCubeSatACS_private.h"
#include "asbCubeSatACS_capi.h"

extern "C" {

#include "rt_nonfinite.h"

}
/* Named constants for Chart: '<S1>/Pointing Mode Selection' */
  const uint8_T asbCubeSatACS_IN_Earth
{
  1U
};
const uint8_T asbCubeSatACS_IN_Off{ 1U };

const uint8_T asbCubeSatACS_IN_On{ 2U };

const uint8_T asbCubeSatACS_IN_Sun{ 2U };

const uint8_T asbCubeSatACS_IN_Transition{ 3U };

const uint8_T asbCubeSatAC_IN_NO_ACTIVE_CHILD{ 0U };

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
void asbCubeSatACS::asbCubeSatACS_IfActionSubsystem(real_T *rty_Out1)
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
void asbCubeSatACS::asbCubeSatAC_IfActionSubsystem1(real_T *rty_Out1)
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
void asbCubeSatACS::asbCubeSatAC_IfActionSubsystem2(real_T *rty_Out1)
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
void asbCubeSatACS::asbCubeSat_IfActionSubsystem2_p(real_T rtu_In, real_T
  *rty_OutOrig)
{
  /* SignalConversion generated from: '<S133>/In' */
  *rty_OutOrig = rtu_In;
}

/* System initialize for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS::init(ACSOutBus *rty_ACSOut)
{
  /* SystemInitialize for BusCreator generated from: '<Root>/Bus Creator' */
  rty_ACSOut->AttitudeError.Roll = 0.0;
  rty_ACSOut->AttitudeError.Pitch = 0.0;
  rty_ACSOut->AttitudeError.Yaw = 0.0;
}

/* System reset for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS::reset(void)
{
  /* SystemReset for Chart: '<S1>/Pointing Mode Selection' */
  asbCubeSatACS_DW.is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
  asbCubeSatACS_DW.is_active_c1_asbCubeSatACS = 0U;
  asbCubeSatACS_DW.is_c1_asbCubeSatACS = asbCubeSatAC_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  asbCubeSatACS_DW.Integrator_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  asbCubeSatACS_DW.UD_DSTATE[0] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  asbCubeSatACS_B.PointingCmd[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  asbCubeSatACS_DW.Integrator_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  asbCubeSatACS_DW.UD_DSTATE[1] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  asbCubeSatACS_B.PointingCmd[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  asbCubeSatACS_DW.Integrator_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S268>/UD' */
  asbCubeSatACS_DW.UD_DSTATE[2] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  asbCubeSatACS_B.PointingCmd[2] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge 1' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  asbCubeSatACS_B.cmd_q_b2tgt[0] = 0.0;
  asbCubeSatACS_B.cmd_q_b2tgt[1] = 0.0;
  asbCubeSatACS_B.cmd_q_b2tgt[2] = 0.0;
  asbCubeSatACS_B.cmd_q_b2tgt[3] = 0.0;

  /* SystemReset for Chart: '<S1>/Pointing Mode Selection' */
  asbCubeSatACS_B.ControlMode = 0.0;
}

/* Output and update for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS::step(const real_T *rtu_SensorsOut_utc_JD, const real_T
  rtu_SensorsOut_X_ecef[3], const real_T rtu_SensorsOut_V_ecef[3], const real_T
  rtu_SensorsOut_X_eci[3], const real_T rtu_SensorsOut_V_eci[3], const real_T
  rtu_SensorsOut_q_ecef2b[4], const real_T rtu_SensorsOut_q_eci2b[4], const
  real_T rtu_SensorsOut_Euler[3], const real_T rtu_SensorsOut_LatLonAlt[3],
  const real_T *rtu_SensorsOut_SunAngle, const boolean_T
  *rtu_SensorsOut_SunInView, const real_T *rtu_AttitudeMode, const real_T
  rtu_Environment_envAccel_ecef[3], const real_T rtu_Environment_envForces_body
  [3], const real_T rtu_Environment_envTorques_body[3], const real_T
  rtu_Environment_x_sun_eci[3], const real_T rtu_Environment_earthAngRate[3],
  ACSOutBus *rty_ACSOut)
{
  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.utc_JD =
    *rtu_SensorsOut_utc_JD;
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_ecef[0] =
    rtu_SensorsOut_X_ecef[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_ecef[0] =
    rtu_SensorsOut_V_ecef[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0] =
    rtu_SensorsOut_X_eci[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] =
    rtu_SensorsOut_V_eci[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_ecef[1] =
    rtu_SensorsOut_X_ecef[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_ecef[1] =
    rtu_SensorsOut_V_ecef[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1] =
    rtu_SensorsOut_X_eci[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1] =
    rtu_SensorsOut_V_eci[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_ecef[2] =
    rtu_SensorsOut_X_ecef[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_ecef[2] =
    rtu_SensorsOut_V_ecef[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2] =
    rtu_SensorsOut_X_eci[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2] =
    rtu_SensorsOut_V_eci[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_ecef2b[0] =
    rtu_SensorsOut_q_ecef2b[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] =
    rtu_SensorsOut_q_eci2b[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_ecef2b[1] =
    rtu_SensorsOut_q_ecef2b[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[1] =
    rtu_SensorsOut_q_eci2b[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_ecef2b[2] =
    rtu_SensorsOut_q_ecef2b[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[2] =
    rtu_SensorsOut_q_eci2b[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_ecef2b[3] =
    rtu_SensorsOut_q_ecef2b[3];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[3] =
    rtu_SensorsOut_q_eci2b[3];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.SunAngle =
    *rtu_SensorsOut_SunAngle;
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.SunInView =
    *rtu_SensorsOut_SunInView;
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.Euler[0] =
    rtu_SensorsOut_Euler[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.LatLonAlt[0] =
    rtu_SensorsOut_LatLonAlt[0];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envAccel_ecef[0] =
    rtu_Environment_envAccel_ecef[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envForces_body[0] =
    rtu_Environment_envForces_body[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envTorques_body[0] =
    rtu_Environment_envTorques_body[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[0] =
    rtu_Environment_x_sun_eci[0];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.earthAngRate[0] =
    rtu_Environment_earthAngRate[0];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.Euler[1] =
    rtu_SensorsOut_Euler[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.LatLonAlt[1] =
    rtu_SensorsOut_LatLonAlt[1];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envAccel_ecef[1] =
    rtu_Environment_envAccel_ecef[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envForces_body[1] =
    rtu_Environment_envForces_body[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envTorques_body[1] =
    rtu_Environment_envTorques_body[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[1] =
    rtu_Environment_x_sun_eci[1];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.earthAngRate[1] =
    rtu_Environment_earthAngRate[1];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.Euler[2] =
    rtu_SensorsOut_Euler[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Point.LatLonAlt[2] =
    rtu_SensorsOut_LatLonAlt[2];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envAccel_ecef[2] =
    rtu_Environment_envAccel_ecef[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envForces_body[2] =
    rtu_Environment_envForces_body[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.envTorques_body[2] =
    rtu_Environment_envTorques_body[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[2] =
    rtu_Environment_x_sun_eci[2];
  asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.earthAngRate[2] =
    rtu_Environment_earthAngRate[2];

  /* Chart: '<S1>/Pointing Mode Selection' */
  /* Gateway: Attitude Control/Pointing Mode Selection */
  /* During: Attitude Control/Pointing Mode Selection */
  if (asbCubeSatACS_DW.is_active_c1_asbCubeSatACS == 0U) {
    /* Entry: Attitude Control/Pointing Mode Selection */
    asbCubeSatACS_DW.is_active_c1_asbCubeSatACS = 1U;

    /* Entry Internal: Attitude Control/Pointing Mode Selection */
    /* Transition: '<S3>:6' */
    asbCubeSatACS_DW.is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    /* Merge: '<S3>/ Merge ' incorporates:
     *  Constant: '<S4>/TorqueCmds'
     *  SignalConversion generated from: '<S4>/PointingCmd'
     */
    asbCubeSatACS_B.PointingCmd[0] = 0.0;
    asbCubeSatACS_B.PointingCmd[1] = 0.0;
    asbCubeSatACS_B.PointingCmd[2] = 0.0;

    /* Merge: '<S3>/ Merge 1' incorporates:
     *  Constant: '<S4>/Unit quat'
     *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
     */
    asbCubeSatACS_B.cmd_q_b2tgt[0] = 1.0;
    asbCubeSatACS_B.cmd_q_b2tgt[1] = 0.0;
    asbCubeSatACS_B.cmd_q_b2tgt[2] = 0.0;
    asbCubeSatACS_B.cmd_q_b2tgt[3] = 0.0;
  } else if (asbCubeSatACS_DW.is_c1_asbCubeSatACS == asbCubeSatACS_IN_Off) {
    /* During 'Off': '<S3>:50' */
    if (*rtu_AttitudeMode != 0.0) {
      /* Transition: '<S3>:53' */
      asbCubeSatACS_B.ControlMode = 1.0;
      asbCubeSatACS_DW.is_c1_asbCubeSatACS = asbCubeSatACS_IN_On;

      /* Entry Internal 'On': '<S3>:37' */
      /* Transition: '<S3>:54' */
      asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Transition;
    } else {
      /* Merge: '<S3>/ Merge ' incorporates:
       *  Constant: '<S4>/TorqueCmds'
       *  SignalConversion generated from: '<S4>/PointingCmd'
       */
      asbCubeSatACS_B.PointingCmd[0] = 0.0;
      asbCubeSatACS_B.PointingCmd[1] = 0.0;
      asbCubeSatACS_B.PointingCmd[2] = 0.0;

      /* Merge: '<S3>/ Merge 1' incorporates:
       *  Constant: '<S4>/Unit quat'
       *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
       */
      asbCubeSatACS_B.cmd_q_b2tgt[0] = 1.0;
      asbCubeSatACS_B.cmd_q_b2tgt[1] = 0.0;
      asbCubeSatACS_B.cmd_q_b2tgt[2] = 0.0;
      asbCubeSatACS_B.cmd_q_b2tgt[3] = 0.0;
    }

    /* During 'On': '<S3>:37' */
  } else if (*rtu_AttitudeMode == 0.0) {
    /* Transition: '<S3>:41' */
    asbCubeSatACS_B.ControlMode = 0.0;

    /* Exit Internal 'On': '<S3>:37' */
    asbCubeSatACS_DW.is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
    asbCubeSatACS_DW.is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    /* Merge: '<S3>/ Merge ' incorporates:
     *  Constant: '<S4>/TorqueCmds'
     *  SignalConversion generated from: '<S4>/PointingCmd'
     */
    asbCubeSatACS_B.PointingCmd[0] = 0.0;
    asbCubeSatACS_B.PointingCmd[1] = 0.0;
    asbCubeSatACS_B.PointingCmd[2] = 0.0;

    /* Merge: '<S3>/ Merge 1' incorporates:
     *  Constant: '<S4>/Unit quat'
     *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
     */
    asbCubeSatACS_B.cmd_q_b2tgt[0] = 1.0;
    asbCubeSatACS_B.cmd_q_b2tgt[1] = 0.0;
    asbCubeSatACS_B.cmd_q_b2tgt[2] = 0.0;
    asbCubeSatACS_B.cmd_q_b2tgt[3] = 0.0;
  } else {
    switch (asbCubeSatACS_DW.is_On) {
     case asbCubeSatACS_IN_Earth:
      {
        /* During 'Earth': '<S3>:48' */
        if (*rtu_AttitudeMode == 2.0) {
          /* Transition: '<S3>:56' */
          asbCubeSatACS_B.ControlMode = 1.0;
          asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Transition;
        } else {
          real_T tmp;
          real_T tmp_0;
          real_T tmp_1;
          real_T tmp_2;
          real_T tmp_3;
          real_T tmp_4;
          real_T u;
          real_T u0;

          /* Product: '<S121>/Product' */
          asbCubeSatACS_B.Product_cs =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0];

          /* UnaryMinus: '<S8>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus_e =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[1];

          /* Product: '<S121>/Product1' */
          asbCubeSatACS_B.Product1_p = asbCubeSatACS_B.UnaryMinus_e *
            asbCubeSatACS_B.UnaryMinus_e;

          /* UnaryMinus: '<S8>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1_d =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[2];

          /* Product: '<S121>/Product2' */
          asbCubeSatACS_B.Product2_j = asbCubeSatACS_B.UnaryMinus1_d *
            asbCubeSatACS_B.UnaryMinus1_d;

          /* UnaryMinus: '<S8>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2_f =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[3];

          /* Product: '<S121>/Product3' */
          asbCubeSatACS_B.Product3_ii = asbCubeSatACS_B.UnaryMinus2_f *
            asbCubeSatACS_B.UnaryMinus2_f;

          /* Sum: '<S121>/Sum' */
          asbCubeSatACS_B.Sum_p4 = ((asbCubeSatACS_B.Product_cs +
            asbCubeSatACS_B.Product1_p) + asbCubeSatACS_B.Product2_j) +
            asbCubeSatACS_B.Product3_ii;

          /* Sqrt: '<S120>/sqrt' */
          asbCubeSatACS_B.sqrt_o5 = std::sqrt(asbCubeSatACS_B.Sum_p4);

          /* Product: '<S119>/Product' */
          asbCubeSatACS_B.Product_ks =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] /
            asbCubeSatACS_B.sqrt_o5;

          /* Product: '<S22>/Product' */
          asbCubeSatACS_B.Product_bb = asbCubeSatACS_B.Product_ks *
            asbCubeSatACS_B.Product_ks;

          /* Product: '<S119>/Product1' */
          asbCubeSatACS_B.Product1_l0 = asbCubeSatACS_B.UnaryMinus_e /
            asbCubeSatACS_B.sqrt_o5;

          /* UnaryMinus: '<S118>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus_ec = -asbCubeSatACS_B.Product1_l0;

          /* Product: '<S22>/Product1' */
          asbCubeSatACS_B.Product1_me = asbCubeSatACS_B.UnaryMinus_ec *
            asbCubeSatACS_B.UnaryMinus_ec;

          /* Product: '<S119>/Product2' */
          asbCubeSatACS_B.Product2_pc = asbCubeSatACS_B.UnaryMinus1_d /
            asbCubeSatACS_B.sqrt_o5;

          /* UnaryMinus: '<S118>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1_e = -asbCubeSatACS_B.Product2_pc;

          /* Product: '<S22>/Product2' */
          asbCubeSatACS_B.Product2_i = asbCubeSatACS_B.UnaryMinus1_e *
            asbCubeSatACS_B.UnaryMinus1_e;

          /* Product: '<S119>/Product3' */
          asbCubeSatACS_B.Product3_c3 = asbCubeSatACS_B.UnaryMinus2_f /
            asbCubeSatACS_B.sqrt_o5;

          /* UnaryMinus: '<S118>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2_k = -asbCubeSatACS_B.Product3_c3;

          /* Product: '<S22>/Product3' */
          asbCubeSatACS_B.Product3_ff = asbCubeSatACS_B.UnaryMinus2_k *
            asbCubeSatACS_B.UnaryMinus2_k;

          /* Sum: '<S22>/Sum' */
          asbCubeSatACS_B.Sum_ke = ((asbCubeSatACS_B.Product_bb +
            asbCubeSatACS_B.Product1_me) + asbCubeSatACS_B.Product2_i) +
            asbCubeSatACS_B.Product3_ff;

          /* Sqrt: '<S21>/sqrt' */
          asbCubeSatACS_B.sqrt_la = std::sqrt(asbCubeSatACS_B.Sum_ke);

          /* Product: '<S17>/Product' */
          asbCubeSatACS_B.Product_gl = asbCubeSatACS_B.Product_ks /
            asbCubeSatACS_B.sqrt_la;

          /* Product: '<S17>/Product1' */
          asbCubeSatACS_B.Product1_gs = asbCubeSatACS_B.UnaryMinus_ec /
            asbCubeSatACS_B.sqrt_la;

          /* Product: '<S17>/Product2' */
          asbCubeSatACS_B.Product2_ef = asbCubeSatACS_B.UnaryMinus1_e /
            asbCubeSatACS_B.sqrt_la;

          /* Product: '<S17>/Product3' */
          asbCubeSatACS_B.Product3_fp = asbCubeSatACS_B.UnaryMinus2_k /
            asbCubeSatACS_B.sqrt_la;

          /* Product: '<S18>/Product' */
          asbCubeSatACS_B.Product_fo = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product2_ef;

          /* Product: '<S18>/Product1' */
          asbCubeSatACS_B.Product1_b = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S18>/Sum1' */
          asbCubeSatACS_B.Sum1_h = asbCubeSatACS_B.Product_fo +
            asbCubeSatACS_B.Product1_b;

          /* Gain: '<S18>/Gain' */
          asbCubeSatACS_B.Gain_lp = 2.0 * asbCubeSatACS_B.Sum1_h;

          /* Product: '<S18>/Product2' */
          asbCubeSatACS_B.Product2_js = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product2_ef;

          /* Product: '<S18>/Product3' */
          asbCubeSatACS_B.Product3_hw = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S18>/Sum2' */
          asbCubeSatACS_B.Sum2_i = asbCubeSatACS_B.Product3_hw -
            asbCubeSatACS_B.Product2_js;

          /* Gain: '<S18>/Gain1' */
          asbCubeSatACS_B.Gain1_o = 2.0 * asbCubeSatACS_B.Sum2_i;

          /* Product: '<S18>/Product6' */
          asbCubeSatACS_B.Product6_m = asbCubeSatACS_B.Product2_ef *
            asbCubeSatACS_B.Product2_ef;

          /* Product: '<S18>/Product7' */
          asbCubeSatACS_B.Product7_k2 = asbCubeSatACS_B.Product3_fp *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S18>/Sum3' incorporates:
           *  Constant: '<S18>/Constant'
           */
          asbCubeSatACS_B.Sum3_c = (0.5 - asbCubeSatACS_B.Product6_m) -
            asbCubeSatACS_B.Product7_k2;

          /* Gain: '<S18>/Gain2' */
          asbCubeSatACS_B.Gain2_cx = 2.0 * asbCubeSatACS_B.Sum3_c;

          /* Product: '<S19>/Product' */
          asbCubeSatACS_B.Product_pp = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product2_ef;

          /* Product: '<S19>/Product1' */
          asbCubeSatACS_B.Product1_p3 = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S19>/Sum1' */
          asbCubeSatACS_B.Sum1_i = asbCubeSatACS_B.Product_pp -
            asbCubeSatACS_B.Product1_p3;

          /* Gain: '<S19>/Gain' */
          asbCubeSatACS_B.Gain_ie = 2.0 * asbCubeSatACS_B.Sum1_i;

          /* Product: '<S19>/Product2' */
          asbCubeSatACS_B.Product2_f = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product1_gs;

          /* Product: '<S19>/Product3' */
          asbCubeSatACS_B.Product3_m = asbCubeSatACS_B.Product2_ef *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S19>/Sum2' */
          asbCubeSatACS_B.Sum2_f = asbCubeSatACS_B.Product2_f +
            asbCubeSatACS_B.Product3_m;

          /* Gain: '<S19>/Gain1' */
          asbCubeSatACS_B.Gain1_l = 2.0 * asbCubeSatACS_B.Sum2_f;

          /* Product: '<S19>/Product6' */
          asbCubeSatACS_B.Product6_iz = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product1_gs;

          /* Product: '<S19>/Product7' */
          asbCubeSatACS_B.Product7_e = asbCubeSatACS_B.Product3_fp *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S19>/Sum3' incorporates:
           *  Constant: '<S19>/Constant'
           */
          asbCubeSatACS_B.Sum3_op = (0.5 - asbCubeSatACS_B.Product6_iz) -
            asbCubeSatACS_B.Product7_e;

          /* Gain: '<S19>/Gain2' */
          asbCubeSatACS_B.Gain2_e = 2.0 * asbCubeSatACS_B.Sum3_op;

          /* Product: '<S20>/Product' */
          asbCubeSatACS_B.Product_ce = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product3_fp;

          /* Product: '<S20>/Product1' */
          asbCubeSatACS_B.Product1_mx = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product2_ef;

          /* Sum: '<S20>/Sum1' */
          asbCubeSatACS_B.Sum1_m = asbCubeSatACS_B.Product_ce +
            asbCubeSatACS_B.Product1_mx;

          /* Gain: '<S20>/Gain' */
          asbCubeSatACS_B.Gain_ab = 2.0 * asbCubeSatACS_B.Sum1_m;

          /* Product: '<S20>/Product2' */
          asbCubeSatACS_B.Product2_av = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product1_gs;

          /* Product: '<S20>/Product3' */
          asbCubeSatACS_B.Product3_cx = asbCubeSatACS_B.Product2_ef *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S20>/Sum2' */
          asbCubeSatACS_B.Sum2_o = asbCubeSatACS_B.Product3_cx -
            asbCubeSatACS_B.Product2_av;

          /* Gain: '<S20>/Gain1' */
          asbCubeSatACS_B.Gain1_g = 2.0 * asbCubeSatACS_B.Sum2_o;

          /* Product: '<S20>/Product6' */
          asbCubeSatACS_B.Product6_l = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product1_gs;

          /* Product: '<S20>/Product7' */
          asbCubeSatACS_B.Product7_l = asbCubeSatACS_B.Product2_ef *
            asbCubeSatACS_B.Product2_ef;

          /* Sum: '<S20>/Sum3' incorporates:
           *  Constant: '<S20>/Constant'
           */
          asbCubeSatACS_B.Sum3_a = (0.5 - asbCubeSatACS_B.Product6_l) -
            asbCubeSatACS_B.Product7_l;

          /* Gain: '<S20>/Gain2' */
          asbCubeSatACS_B.Gain2_o = 2.0 * asbCubeSatACS_B.Sum3_a;

          /* Product: '<S38>/j x k' */
          asbCubeSatACS_B.jxk_pl =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];

          /* Product: '<S38>/k x i' */
          asbCubeSatACS_B.kxi_a =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];

          /* Product: '<S38>/i x j' */
          asbCubeSatACS_B.ixj_d =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1];

          /* Product: '<S39>/k x j' */
          asbCubeSatACS_B.kxj_e =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];

          /* Product: '<S39>/i x k' */
          asbCubeSatACS_B.ixk_g =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];

          /* Product: '<S39>/j x i' */
          asbCubeSatACS_B.jxi_g =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];

          /* Sum: '<S32>/Sum' */
          asbCubeSatACS_B.Sum_mp[0] = asbCubeSatACS_B.jxk_pl -
            asbCubeSatACS_B.kxj_e;
          asbCubeSatACS_B.Sum_mp[1] = asbCubeSatACS_B.kxi_a -
            asbCubeSatACS_B.ixk_g;
          asbCubeSatACS_B.Sum_mp[2] = asbCubeSatACS_B.ixj_d -
            asbCubeSatACS_B.jxi_g;

          /* Product: '<S40>/j x k' incorporates:
           *  Constant: '<S23>/Constant'
           */
          asbCubeSatACS_B.jxk_c = 0.0 * asbCubeSatACS_B.Sum_mp[2];

          /* Product: '<S40>/k x i' */
          asbCubeSatACS_B.kxi_na = asbCubeSatACS_B.Sum_mp[0];

          /* Product: '<S40>/i x j' incorporates:
           *  Constant: '<S23>/Constant'
           */
          asbCubeSatACS_B.ixj_p = 0.0 * asbCubeSatACS_B.Sum_mp[1];

          /* Product: '<S41>/k x j' */
          asbCubeSatACS_B.kxj_d = asbCubeSatACS_B.Sum_mp[1];

          /* Product: '<S41>/i x k' incorporates:
           *  Constant: '<S23>/Constant'
           */
          asbCubeSatACS_B.ixk_h = 0.0 * asbCubeSatACS_B.Sum_mp[2];

          /* Product: '<S41>/j x i' incorporates:
           *  Constant: '<S23>/Constant'
           */
          asbCubeSatACS_B.jxi_gk = asbCubeSatACS_B.Sum_mp[0] * 0.0;

          /* Sum: '<S34>/Sum' */
          asbCubeSatACS_B.Sum_co[0] = asbCubeSatACS_B.jxk_c -
            asbCubeSatACS_B.kxj_d;
          asbCubeSatACS_B.Sum_co[1] = asbCubeSatACS_B.kxi_na -
            asbCubeSatACS_B.ixk_h;
          asbCubeSatACS_B.Sum_co[2] = asbCubeSatACS_B.ixj_p -
            asbCubeSatACS_B.jxi_gk;

          /* Product: '<S42>/j x k' */
          asbCubeSatACS_B.jxk_o5 =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1] *
            asbCubeSatACS_B.Sum_mp[2];

          /* Product: '<S42>/k x i' */
          asbCubeSatACS_B.kxi_f = asbCubeSatACS_B.Sum_mp[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];

          /* Product: '<S42>/i x j' */
          asbCubeSatACS_B.ixj_lo =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] *
            asbCubeSatACS_B.Sum_mp[1];

          /* Product: '<S43>/k x j' */
          asbCubeSatACS_B.kxj_o = asbCubeSatACS_B.Sum_mp[1] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];

          /* Product: '<S43>/i x k' */
          asbCubeSatACS_B.ixk_ab =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] *
            asbCubeSatACS_B.Sum_mp[2];

          /* Product: '<S43>/j x i' */
          asbCubeSatACS_B.jxi_j = asbCubeSatACS_B.Sum_mp[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1];

          /* Sum: '<S35>/Sum' */
          asbCubeSatACS_B.Sum_jr[0] = asbCubeSatACS_B.jxk_o5 -
            asbCubeSatACS_B.kxj_o;
          asbCubeSatACS_B.Sum_jr[1] = asbCubeSatACS_B.kxi_f -
            asbCubeSatACS_B.ixk_ab;
          asbCubeSatACS_B.Sum_jr[2] = asbCubeSatACS_B.ixj_lo -
            asbCubeSatACS_B.jxi_j;

          /* Gain: '<S10>/Gain' */
          asbCubeSatACS_B.Gain_h[0] =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];

          /* DotProduct: '<S23>/Dot Product' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];
          tmp_0 = u0 * u;

          /* Product: '<S23>/divide2' incorporates:
           *  Constant: '<S23>/Constant2'
           */
          asbCubeSatACS_B.divide2[0] = asbCubeSatACS_B.Sum_jr[0] /
            3.986004418E+14;

          /* Gain: '<S10>/Gain' */
          asbCubeSatACS_B.Gain_h[1] =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];

          /* DotProduct: '<S23>/Dot Product' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];
          tmp_0 += u0 * u;

          /* Product: '<S23>/divide2' incorporates:
           *  Constant: '<S23>/Constant2'
           */
          asbCubeSatACS_B.divide2[1] = asbCubeSatACS_B.Sum_jr[1] /
            3.986004418E+14;

          /* Gain: '<S10>/Gain' */
          asbCubeSatACS_B.Gain_h[2] =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];

          /* DotProduct: '<S23>/Dot Product' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];
          tmp_0 += u0 * u;

          /* Product: '<S23>/divide2' incorporates:
           *  Constant: '<S23>/Constant2'
           */
          asbCubeSatACS_B.divide2[2] = asbCubeSatACS_B.Sum_jr[2] /
            3.986004418E+14;

          /* Product: '<S18>/Product4' */
          asbCubeSatACS_B.Product4_f = asbCubeSatACS_B.Gain_lp *
            asbCubeSatACS_B.Gain_h[1];

          /* Product: '<S18>/Product5' */
          asbCubeSatACS_B.Product5_f = asbCubeSatACS_B.Gain1_o *
            asbCubeSatACS_B.Gain_h[2];

          /* Product: '<S18>/Product8' */
          asbCubeSatACS_B.Product8_ao = asbCubeSatACS_B.Gain_h[0] *
            asbCubeSatACS_B.Gain2_cx;

          /* Sum: '<S18>/Sum' */
          asbCubeSatACS_B.Sum_ah = (asbCubeSatACS_B.Product8_ao +
            asbCubeSatACS_B.Product4_f) + asbCubeSatACS_B.Product5_f;

          /* Product: '<S19>/Product4' */
          asbCubeSatACS_B.Product4_o = asbCubeSatACS_B.Gain_h[0] *
            asbCubeSatACS_B.Gain_ie;

          /* Product: '<S19>/Product5' */
          asbCubeSatACS_B.Product5_ji = asbCubeSatACS_B.Gain1_l *
            asbCubeSatACS_B.Gain_h[2];

          /* Product: '<S19>/Product8' */
          asbCubeSatACS_B.Product8_f = asbCubeSatACS_B.Gain2_e *
            asbCubeSatACS_B.Gain_h[1];

          /* Sum: '<S19>/Sum' */
          asbCubeSatACS_B.Sum_pcb = (asbCubeSatACS_B.Product4_o +
            asbCubeSatACS_B.Product8_f) + asbCubeSatACS_B.Product5_ji;

          /* Product: '<S20>/Product4' */
          asbCubeSatACS_B.Product4_gi = asbCubeSatACS_B.Gain_h[0] *
            asbCubeSatACS_B.Gain_ab;

          /* Product: '<S20>/Product5' */
          asbCubeSatACS_B.Product5_my = asbCubeSatACS_B.Gain1_g *
            asbCubeSatACS_B.Gain_h[1];

          /* Product: '<S20>/Product8' */
          asbCubeSatACS_B.Product8_gb = asbCubeSatACS_B.Gain2_o *
            asbCubeSatACS_B.Gain_h[2];

          /* Sum: '<S20>/Sum' */
          asbCubeSatACS_B.Sum_ml = (asbCubeSatACS_B.Product4_gi +
            asbCubeSatACS_B.Product5_my) + asbCubeSatACS_B.Product8_gb;

          /* DotProduct: '<S23>/Dot Product' */
          asbCubeSatACS_B.DotProduct = tmp_0;

          /* Sqrt: '<S23>/|r|' */
          asbCubeSatACS_B.r = std::sqrt(asbCubeSatACS_B.DotProduct);

          /* Product: '<S23>/divide3' */
          asbCubeSatACS_B.divide3[0] =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0] /
            asbCubeSatACS_B.r;

          /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
          asbCubeSatACS_B.evxhmurr[0] = asbCubeSatACS_B.divide2[0] -
            asbCubeSatACS_B.divide3[0];

          /* DotProduct: '<S23>/Dot Product1' */
          u0 = asbCubeSatACS_B.Sum_co[0];
          u = asbCubeSatACS_B.evxhmurr[0];
          tmp_0 = u0 * u;

          /* DotProduct: '<S23>/Dot Product2' */
          u0 = asbCubeSatACS_B.Sum_co[0];
          u = asbCubeSatACS_B.Sum_co[0];
          tmp_2 = u0 * u;

          /* DotProduct: '<S23>/Dot Product3' */
          u0 = asbCubeSatACS_B.Sum_mp[0];
          u = asbCubeSatACS_B.Sum_mp[0];
          tmp_3 = u0 * u;

          /* DotProduct: '<S23>/Dot Product4' */
          u0 = asbCubeSatACS_B.evxhmurr[0];
          u = asbCubeSatACS_B.evxhmurr[0];
          tmp_4 = u0 * u;

          /* DotProduct: '<S23>/Dot Product5' */
          u0 = asbCubeSatACS_B.evxhmurr[0];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];
          tmp = u0 * u;

          /* DotProduct: '<S23>/Dot Product6' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0];
          tmp_1 = u0 * u;

          /* Product: '<S23>/divide3' */
          asbCubeSatACS_B.divide3[1] =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1] /
            asbCubeSatACS_B.r;

          /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
          asbCubeSatACS_B.evxhmurr[1] = asbCubeSatACS_B.divide2[1] -
            asbCubeSatACS_B.divide3[1];

          /* DotProduct: '<S23>/Dot Product1' */
          u0 = asbCubeSatACS_B.Sum_co[1];
          u = asbCubeSatACS_B.evxhmurr[1];
          tmp_0 += u0 * u;

          /* DotProduct: '<S23>/Dot Product2' */
          u0 = asbCubeSatACS_B.Sum_co[1];
          u = asbCubeSatACS_B.Sum_co[1];
          tmp_2 += u0 * u;

          /* DotProduct: '<S23>/Dot Product3' */
          u0 = asbCubeSatACS_B.Sum_mp[1];
          u = asbCubeSatACS_B.Sum_mp[1];
          tmp_3 += u0 * u;

          /* DotProduct: '<S23>/Dot Product4' */
          u0 = asbCubeSatACS_B.evxhmurr[1];
          u = asbCubeSatACS_B.evxhmurr[1];
          tmp_4 += u0 * u;

          /* DotProduct: '<S23>/Dot Product5' */
          u0 = asbCubeSatACS_B.evxhmurr[1];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];
          tmp += u0 * u;

          /* DotProduct: '<S23>/Dot Product6' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1];
          tmp_1 += u0 * u;

          /* Product: '<S23>/divide3' */
          asbCubeSatACS_B.divide3[2] =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2] /
            asbCubeSatACS_B.r;

          /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
          asbCubeSatACS_B.evxhmurr[2] = asbCubeSatACS_B.divide2[2] -
            asbCubeSatACS_B.divide3[2];

          /* DotProduct: '<S23>/Dot Product1' */
          u0 = asbCubeSatACS_B.Sum_co[2];
          u = asbCubeSatACS_B.evxhmurr[2];
          tmp_0 += u0 * u;

          /* DotProduct: '<S23>/Dot Product2' */
          u0 = asbCubeSatACS_B.Sum_co[2];
          u = asbCubeSatACS_B.Sum_co[2];
          tmp_2 += u0 * u;

          /* DotProduct: '<S23>/Dot Product3' */
          u0 = asbCubeSatACS_B.Sum_mp[2];
          u = asbCubeSatACS_B.Sum_mp[2];
          tmp_3 += u0 * u;

          /* DotProduct: '<S23>/Dot Product4' */
          u0 = asbCubeSatACS_B.evxhmurr[2];
          u = asbCubeSatACS_B.evxhmurr[2];
          tmp_4 += u0 * u;

          /* DotProduct: '<S23>/Dot Product5' */
          u0 = asbCubeSatACS_B.evxhmurr[2];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];
          tmp += u0 * u;

          /* DotProduct: '<S23>/Dot Product6' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];
          tmp_1 += u0 * u;

          /* DotProduct: '<S23>/Dot Product1' */
          asbCubeSatACS_B.DotProduct1_b = tmp_0;

          /* DotProduct: '<S23>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_m = tmp_2;

          /* DotProduct: '<S23>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_h4 = tmp_3;

          /* DotProduct: '<S23>/Dot Product4' */
          asbCubeSatACS_B.DotProduct4 = tmp_4;

          /* DotProduct: '<S23>/Dot Product5' */
          asbCubeSatACS_B.DotProduct5 = tmp;

          /* DotProduct: '<S23>/Dot Product6' */
          asbCubeSatACS_B.DotProduct6 = tmp_1;

          /* Sqrt: '<S23>/|n|' */
          asbCubeSatACS_B.n = std::sqrt(asbCubeSatACS_B.DotProduct2_m);

          /* Sqrt: '<S23>/|e|' */
          asbCubeSatACS_B.e = std::sqrt(asbCubeSatACS_B.DotProduct4);

          /* Product: '<S23>/Product' */
          asbCubeSatACS_B.Product_k3 = asbCubeSatACS_B.n * asbCubeSatACS_B.e;

          /* Product: '<S23>/Product1' */
          asbCubeSatACS_B.Product1_e = asbCubeSatACS_B.e * asbCubeSatACS_B.r;

          /* Product: '<S23>/divide' */
          asbCubeSatACS_B.divide = asbCubeSatACS_B.Sum_co[0] / asbCubeSatACS_B.n;

          /* MinMax: '<S30>/Min' incorporates:
           *  Constant: '<S30>/Constant'
           */
          u0 = std::fmin(asbCubeSatACS_B.divide, 1.0);

          /* MinMax: '<S30>/Min' */
          asbCubeSatACS_B.Min = u0;

          /* MinMax: '<S30>/Max' incorporates:
           *  Constant: '<S30>/Constant1'
           */
          u0 = std::fmax(-1.0, asbCubeSatACS_B.Min);

          /* MinMax: '<S30>/Max' */
          asbCubeSatACS_B.Max = u0;

          /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
          u0 = asbCubeSatACS_B.Max;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
          asbCubeSatACS_B.RAANacosn_in = std::acos(u0);

          /* Switch: '<S23>/n_j < 0' */
          if (asbCubeSatACS_B.Sum_co[1] >= 0.0) {
            /* Switch: '<S23>/n_j < 0' */
            asbCubeSatACS_B.n_j0 = asbCubeSatACS_B.RAANacosn_in;
          } else {
            /* Sum: '<S23>/Sum' incorporates:
             *  Constant: '<S23>/Constant1'
             */
            asbCubeSatACS_B.Sum_e0 = 6.2831853071795862 -
              asbCubeSatACS_B.RAANacosn_in;

            /* Switch: '<S23>/n_j < 0' */
            asbCubeSatACS_B.n_j0 = asbCubeSatACS_B.Sum_e0;
          }

          /* Sqrt: '<S23>/|h|' */
          asbCubeSatACS_B.h = std::sqrt(asbCubeSatACS_B.DotProduct3_h4);

          /* Product: '<S23>/divide1' */
          asbCubeSatACS_B.divide1 = asbCubeSatACS_B.Sum_mp[2] /
            asbCubeSatACS_B.h;

          /* MinMax: '<S31>/Min' incorporates:
           *  Constant: '<S31>/Constant'
           */
          u0 = std::fmin(asbCubeSatACS_B.divide1, 1.0);

          /* MinMax: '<S31>/Min' */
          asbCubeSatACS_B.Min_n = u0;

          /* MinMax: '<S31>/Max' incorporates:
           *  Constant: '<S31>/Constant1'
           */
          u0 = std::fmax(-1.0, asbCubeSatACS_B.Min_n);

          /* MinMax: '<S31>/Max' */
          asbCubeSatACS_B.Max_p = u0;

          /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
          u0 = asbCubeSatACS_B.Max_p;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
          asbCubeSatACS_B.iacosh_kh = std::acos(u0);

          /* Product: '<S23>/divide4' */
          asbCubeSatACS_B.divide4 = asbCubeSatACS_B.DotProduct1_b /
            asbCubeSatACS_B.Product_k3;

          /* MinMax: '<S29>/Min' incorporates:
           *  Constant: '<S29>/Constant'
           */
          u0 = std::fmin(asbCubeSatACS_B.divide4, 1.0);

          /* MinMax: '<S29>/Min' */
          asbCubeSatACS_B.Min_a = u0;

          /* MinMax: '<S29>/Max' incorporates:
           *  Constant: '<S29>/Constant1'
           */
          u0 = std::fmax(-1.0, asbCubeSatACS_B.Min_a);

          /* MinMax: '<S29>/Max' */
          asbCubeSatACS_B.Max_b = u0;

          /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
          u0 = asbCubeSatACS_B.Max_b;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
          asbCubeSatACS_B.argPacosnene = std::acos(u0);

          /* Switch: '<S23>/e_k < 0' */
          if (asbCubeSatACS_B.evxhmurr[2] >= 0.0) {
            /* Switch: '<S23>/e_k < 0' */
            asbCubeSatACS_B.e_k0 = asbCubeSatACS_B.argPacosnene;
          } else {
            /* Sum: '<S23>/Sum1' incorporates:
             *  Constant: '<S23>/Constant3'
             */
            asbCubeSatACS_B.Sum1_d0 = 6.2831853071795862 -
              asbCubeSatACS_B.argPacosnene;

            /* Switch: '<S23>/e_k < 0' */
            asbCubeSatACS_B.e_k0 = asbCubeSatACS_B.Sum1_d0;
          }

          /* Product: '<S23>/divide5' */
          asbCubeSatACS_B.divide5 = asbCubeSatACS_B.DotProduct5 /
            asbCubeSatACS_B.Product1_e;

          /* MinMax: '<S28>/Min' incorporates:
           *  Constant: '<S28>/Constant'
           */
          u0 = std::fmin(asbCubeSatACS_B.divide5, 1.0);

          /* MinMax: '<S28>/Min' */
          asbCubeSatACS_B.Min_ni = u0;

          /* MinMax: '<S28>/Max' incorporates:
           *  Constant: '<S28>/Constant1'
           */
          u0 = std::fmax(-1.0, asbCubeSatACS_B.Min_ni);

          /* MinMax: '<S28>/Max' */
          asbCubeSatACS_B.Max_pd = u0;

          /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
          u0 = asbCubeSatACS_B.Max_pd;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
          asbCubeSatACS_B.nuacoserer = std::acos(u0);

          /* Switch: '<S23>/r.v < 0' */
          if (asbCubeSatACS_B.DotProduct6 >= 0.0) {
            /* Switch: '<S23>/r.v < 0' */
            asbCubeSatACS_B.rv0 = asbCubeSatACS_B.nuacoserer;
          } else {
            /* Sum: '<S23>/Sum2' incorporates:
             *  Constant: '<S23>/Constant4'
             */
            asbCubeSatACS_B.Sum2_fk = 6.2831853071795862 -
              asbCubeSatACS_B.nuacoserer;

            /* Switch: '<S23>/r.v < 0' */
            asbCubeSatACS_B.rv0 = asbCubeSatACS_B.Sum2_fk;
          }

          /* Sum: '<S23>/Sum3' */
          asbCubeSatACS_B.Sum3_p = asbCubeSatACS_B.e_k0 + asbCubeSatACS_B.rv0;

          /* Gain: '<S33>/1//2' */
          asbCubeSatACS_B.u2[0] = 0.5 * asbCubeSatACS_B.n_j0;
          asbCubeSatACS_B.u2[1] = 0.5 * asbCubeSatACS_B.iacosh_kh;
          asbCubeSatACS_B.u2[2] = 0.5 * asbCubeSatACS_B.Sum3_p;

          /* Trigonometry: '<S33>/sincos' */
          u = asbCubeSatACS_B.u2[0];
          u0 = std::sin(u);
          u = std::cos(u);
          asbCubeSatACS_B.sincos_o1[0] = u0;
          asbCubeSatACS_B.sincos_o2[0] = u;
          u = asbCubeSatACS_B.u2[1];
          u0 = std::sin(u);
          u = std::cos(u);
          asbCubeSatACS_B.sincos_o1[1] = u0;
          asbCubeSatACS_B.sincos_o2[1] = u;
          u = asbCubeSatACS_B.u2[2];
          u0 = std::sin(u);
          u = std::cos(u);
          asbCubeSatACS_B.sincos_o1[2] = u0;
          asbCubeSatACS_B.sincos_o2[2] = u;

          /* Fcn: '<S33>/q0' */
          asbCubeSatACS_B.q0 = asbCubeSatACS_B.sincos_o2[0] *
            asbCubeSatACS_B.sincos_o2[1] * asbCubeSatACS_B.sincos_o2[2] -
            asbCubeSatACS_B.sincos_o1[0] * asbCubeSatACS_B.sincos_o2[1] *
            asbCubeSatACS_B.sincos_o1[2];

          /* Product: '<S37>/Product' */
          asbCubeSatACS_B.Product_gh = asbCubeSatACS_B.q0 * asbCubeSatACS_B.q0;

          /* Fcn: '<S33>/q1' */
          asbCubeSatACS_B.q1 = asbCubeSatACS_B.sincos_o2[0] *
            asbCubeSatACS_B.sincos_o1[1] * asbCubeSatACS_B.sincos_o2[2] +
            asbCubeSatACS_B.sincos_o1[0] * asbCubeSatACS_B.sincos_o1[1] *
            asbCubeSatACS_B.sincos_o1[2];

          /* Product: '<S37>/Product1' */
          asbCubeSatACS_B.Product1_g5 = asbCubeSatACS_B.q1 * asbCubeSatACS_B.q1;

          /* Fcn: '<S33>/q2' */
          asbCubeSatACS_B.q2 = asbCubeSatACS_B.sincos_o1[0] *
            asbCubeSatACS_B.sincos_o1[1] * asbCubeSatACS_B.sincos_o2[2] -
            asbCubeSatACS_B.sincos_o2[0] * asbCubeSatACS_B.sincos_o1[1] *
            asbCubeSatACS_B.sincos_o1[2];

          /* Product: '<S37>/Product2' */
          asbCubeSatACS_B.Product2_ay = asbCubeSatACS_B.q2 * asbCubeSatACS_B.q2;

          /* Fcn: '<S33>/q3' */
          asbCubeSatACS_B.q3 = asbCubeSatACS_B.sincos_o1[0] *
            asbCubeSatACS_B.sincos_o2[1] * asbCubeSatACS_B.sincos_o2[2] +
            asbCubeSatACS_B.sincos_o2[0] * asbCubeSatACS_B.sincos_o2[1] *
            asbCubeSatACS_B.sincos_o1[2];

          /* Product: '<S37>/Product3' */
          asbCubeSatACS_B.Product3_o = asbCubeSatACS_B.q3 * asbCubeSatACS_B.q3;

          /* Sum: '<S37>/Sum' */
          asbCubeSatACS_B.Sum_b = ((asbCubeSatACS_B.Product_gh +
            asbCubeSatACS_B.Product1_g5) + asbCubeSatACS_B.Product2_ay) +
            asbCubeSatACS_B.Product3_o;

          /* Sqrt: '<S36>/sqrt' */
          asbCubeSatACS_B.sqrt_p = std::sqrt(asbCubeSatACS_B.Sum_b);

          /* Product: '<S27>/Product' */
          asbCubeSatACS_B.Product_pg = asbCubeSatACS_B.q0 /
            asbCubeSatACS_B.sqrt_p;

          /* Product: '<S27>/Product1' */
          asbCubeSatACS_B.Product1_c = asbCubeSatACS_B.q1 /
            asbCubeSatACS_B.sqrt_p;

          /* Product: '<S27>/Product2' */
          asbCubeSatACS_B.Product2_oj = asbCubeSatACS_B.q2 /
            asbCubeSatACS_B.sqrt_p;

          /* Product: '<S27>/Product3' */
          asbCubeSatACS_B.Product3_ch = asbCubeSatACS_B.q3 /
            asbCubeSatACS_B.sqrt_p;

          /* Product: '<S49>/Product' */
          asbCubeSatACS_B.Product_a =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0];

          /* Product: '<S49>/Product1' */
          asbCubeSatACS_B.Product1_hu = asbCubeSatACS_B.UnaryMinus_e *
            asbCubeSatACS_B.UnaryMinus_e;

          /* Product: '<S49>/Product2' */
          asbCubeSatACS_B.Product2_dr = asbCubeSatACS_B.UnaryMinus1_d *
            asbCubeSatACS_B.UnaryMinus1_d;

          /* Product: '<S49>/Product3' */
          asbCubeSatACS_B.Product3_do = asbCubeSatACS_B.UnaryMinus2_f *
            asbCubeSatACS_B.UnaryMinus2_f;

          /* Sum: '<S49>/Sum' */
          asbCubeSatACS_B.Sum_cx = ((asbCubeSatACS_B.Product_a +
            asbCubeSatACS_B.Product1_hu) + asbCubeSatACS_B.Product2_dr) +
            asbCubeSatACS_B.Product3_do;

          /* Sqrt: '<S48>/sqrt' */
          asbCubeSatACS_B.sqrt_b = std::sqrt(asbCubeSatACS_B.Sum_cx);

          /* Product: '<S26>/Product' */
          asbCubeSatACS_B.Product_on =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] /
            asbCubeSatACS_B.sqrt_b;

          /* Product: '<S45>/Product' */
          asbCubeSatACS_B.Product_ke = asbCubeSatACS_B.Product_on *
            asbCubeSatACS_B.Product1_c;

          /* Product: '<S26>/Product1' */
          asbCubeSatACS_B.Product1_ar = asbCubeSatACS_B.UnaryMinus_e /
            asbCubeSatACS_B.sqrt_b;

          /* Product: '<S45>/Product1' */
          asbCubeSatACS_B.Product1_en = asbCubeSatACS_B.Product1_ar *
            asbCubeSatACS_B.Product_pg;

          /* Product: '<S26>/Product2' */
          asbCubeSatACS_B.Product2_ov = asbCubeSatACS_B.UnaryMinus1_d /
            asbCubeSatACS_B.sqrt_b;

          /* Product: '<S45>/Product2' */
          asbCubeSatACS_B.Product2_gu = asbCubeSatACS_B.Product2_ov *
            asbCubeSatACS_B.Product3_ch;

          /* Product: '<S26>/Product3' */
          asbCubeSatACS_B.Product3_hh = asbCubeSatACS_B.UnaryMinus2_f /
            asbCubeSatACS_B.sqrt_b;

          /* Product: '<S45>/Product3' */
          asbCubeSatACS_B.Product3_hw3 = asbCubeSatACS_B.Product3_hh *
            asbCubeSatACS_B.Product2_oj;

          /* Sum: '<S45>/Sum' */
          asbCubeSatACS_B.Sum_dh = ((asbCubeSatACS_B.Product_ke +
            asbCubeSatACS_B.Product1_en) + asbCubeSatACS_B.Product2_gu) -
            asbCubeSatACS_B.Product3_hw3;

          /* UnaryMinus: '<S24>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus_eq = -asbCubeSatACS_B.Sum_dh;

          /* Product: '<S46>/Product' */
          asbCubeSatACS_B.Product_orf = asbCubeSatACS_B.Product_on *
            asbCubeSatACS_B.Product2_oj;

          /* Product: '<S46>/Product1' */
          asbCubeSatACS_B.Product1_gs1 = asbCubeSatACS_B.Product1_ar *
            asbCubeSatACS_B.Product3_ch;

          /* Product: '<S46>/Product2' */
          asbCubeSatACS_B.Product2_amg = asbCubeSatACS_B.Product2_ov *
            asbCubeSatACS_B.Product_pg;

          /* Product: '<S46>/Product3' */
          asbCubeSatACS_B.Product3_ou = asbCubeSatACS_B.Product3_hh *
            asbCubeSatACS_B.Product1_c;

          /* Sum: '<S46>/Sum' */
          asbCubeSatACS_B.Sum_fc = ((asbCubeSatACS_B.Product_orf -
            asbCubeSatACS_B.Product1_gs1) + asbCubeSatACS_B.Product2_amg) +
            asbCubeSatACS_B.Product3_ou;

          /* UnaryMinus: '<S24>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1_o = -asbCubeSatACS_B.Sum_fc;

          /* Product: '<S47>/Product' */
          asbCubeSatACS_B.Product_hl = asbCubeSatACS_B.Product_on *
            asbCubeSatACS_B.Product3_ch;

          /* Product: '<S47>/Product1' */
          asbCubeSatACS_B.Product1_iu = asbCubeSatACS_B.Product1_ar *
            asbCubeSatACS_B.Product2_oj;

          /* Product: '<S47>/Product2' */
          asbCubeSatACS_B.Product2_m4 = asbCubeSatACS_B.Product2_ov *
            asbCubeSatACS_B.Product1_c;

          /* Product: '<S47>/Product3' */
          asbCubeSatACS_B.Product3_ax = asbCubeSatACS_B.Product3_hh *
            asbCubeSatACS_B.Product_pg;

          /* Sum: '<S47>/Sum' */
          asbCubeSatACS_B.Sum_cw = ((asbCubeSatACS_B.Product_hl +
            asbCubeSatACS_B.Product1_iu) - asbCubeSatACS_B.Product2_m4) +
            asbCubeSatACS_B.Product3_ax;

          /* UnaryMinus: '<S24>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2_e = -asbCubeSatACS_B.Sum_cw;

          /* Product: '<S44>/Product' */
          asbCubeSatACS_B.Product_e4 = asbCubeSatACS_B.Product_on *
            asbCubeSatACS_B.Product_pg;

          /* Product: '<S44>/Product1' */
          asbCubeSatACS_B.Product1_o4 = asbCubeSatACS_B.Product1_ar *
            asbCubeSatACS_B.Product1_c;

          /* Product: '<S44>/Product2' */
          asbCubeSatACS_B.Product2_do = asbCubeSatACS_B.Product2_ov *
            asbCubeSatACS_B.Product2_oj;

          /* Product: '<S44>/Product3' */
          asbCubeSatACS_B.Product3_dd = asbCubeSatACS_B.Product3_hh *
            asbCubeSatACS_B.Product3_ch;

          /* Sum: '<S44>/Sum' */
          asbCubeSatACS_B.Sum_bg = ((asbCubeSatACS_B.Product_e4 -
            asbCubeSatACS_B.Product1_o4) - asbCubeSatACS_B.Product2_do) -
            asbCubeSatACS_B.Product3_dd;

          /* If: '<S50>/If' */
          if (asbCubeSatACS_ConstB.Abs_m < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
             *  ActionPort: '<S60>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_k);

            /* End of Outputs for SubSystem: '<S50>/If Action Subsystem' */
          } else if (asbCubeSatACS_ConstB.Abs1_g < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S61>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_k);

            /* End of Outputs for SubSystem: '<S50>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S62>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_k);

            /* End of Outputs for SubSystem: '<S50>/If Action Subsystem2' */
          }

          /* SignalConversion generated from: '<S51>/Dot Product1' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0] =
            asbCubeSatACS_B.Sum_ah;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1] =
            asbCubeSatACS_B.Sum_pcb;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2] =
            asbCubeSatACS_B.Sum_ml;

          /* Product: '<S127>/Product' */
          asbCubeSatACS_B.Product_pp0 = asbCubeSatACS_B.Sum_bg *
            asbCubeSatACS_B.Sum_bg;

          /* Product: '<S127>/Product1' */
          asbCubeSatACS_B.Product1_hp = asbCubeSatACS_B.UnaryMinus_eq *
            asbCubeSatACS_B.UnaryMinus_eq;

          /* Product: '<S127>/Product2' */
          asbCubeSatACS_B.Product2_fv = asbCubeSatACS_B.UnaryMinus1_o *
            asbCubeSatACS_B.UnaryMinus1_o;

          /* Product: '<S127>/Product3' */
          asbCubeSatACS_B.Product3_k = asbCubeSatACS_B.UnaryMinus2_e *
            asbCubeSatACS_B.UnaryMinus2_e;

          /* Sum: '<S127>/Sum' */
          asbCubeSatACS_B.Sum_ik = ((asbCubeSatACS_B.Product_pp0 +
            asbCubeSatACS_B.Product1_hp) + asbCubeSatACS_B.Product2_fv) +
            asbCubeSatACS_B.Product3_k;

          /* Sqrt: '<S126>/sqrt' */
          asbCubeSatACS_B.sqrt_g = std::sqrt(asbCubeSatACS_B.Sum_ik);

          /* Product: '<S122>/Product2' */
          asbCubeSatACS_B.Product2_ah = asbCubeSatACS_B.UnaryMinus1_o /
            asbCubeSatACS_B.sqrt_g;

          /* Product: '<S123>/Product6' */
          asbCubeSatACS_B.Product6_g = asbCubeSatACS_B.Product2_ah *
            asbCubeSatACS_B.Product2_ah;

          /* Product: '<S122>/Product3' */
          asbCubeSatACS_B.Product3_dn = asbCubeSatACS_B.UnaryMinus2_e /
            asbCubeSatACS_B.sqrt_g;

          /* Product: '<S123>/Product7' */
          asbCubeSatACS_B.Product7_hr = asbCubeSatACS_B.Product3_dn *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S123>/Sum3' incorporates:
           *  Constant: '<S123>/Constant'
           */
          asbCubeSatACS_B.Sum3_hf = (0.5 - asbCubeSatACS_B.Product6_g) -
            asbCubeSatACS_B.Product7_hr;

          /* Gain: '<S123>/Gain2' */
          asbCubeSatACS_B.Gain2_dd = 2.0 * asbCubeSatACS_B.Sum3_hf;

          /* Product: '<S123>/Product8' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product8_b = 0.0 * asbCubeSatACS_B.Gain2_dd;

          /* Product: '<S122>/Product1' */
          asbCubeSatACS_B.Product1_l1 = asbCubeSatACS_B.UnaryMinus_eq /
            asbCubeSatACS_B.sqrt_g;

          /* Product: '<S123>/Product' */
          asbCubeSatACS_B.Product_co = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product2_ah;

          /* Product: '<S122>/Product' */
          asbCubeSatACS_B.Product_ki = asbCubeSatACS_B.Sum_bg /
            asbCubeSatACS_B.sqrt_g;

          /* Product: '<S123>/Product1' */
          asbCubeSatACS_B.Product1_hh = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S123>/Sum1' */
          asbCubeSatACS_B.Sum1_ax = asbCubeSatACS_B.Product_co +
            asbCubeSatACS_B.Product1_hh;

          /* Gain: '<S123>/Gain' */
          asbCubeSatACS_B.Gain_e = 2.0 * asbCubeSatACS_B.Sum1_ax;

          /* Product: '<S123>/Product4' */
          asbCubeSatACS_B.Product4_b = asbCubeSatACS_B.Gain_e;

          /* Product: '<S123>/Product2' */
          asbCubeSatACS_B.Product2_k3 = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product2_ah;

          /* Product: '<S123>/Product3' */
          asbCubeSatACS_B.Product3_oa = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S123>/Sum2' */
          asbCubeSatACS_B.Sum2_ib = asbCubeSatACS_B.Product3_oa -
            asbCubeSatACS_B.Product2_k3;

          /* Gain: '<S123>/Gain1' */
          asbCubeSatACS_B.Gain1_lm = 2.0 * asbCubeSatACS_B.Sum2_ib;

          /* Product: '<S123>/Product5' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product5_fa = asbCubeSatACS_B.Gain1_lm * 0.0;

          /* Sum: '<S123>/Sum' */
          asbCubeSatACS_B.Sum_mj = (asbCubeSatACS_B.Product8_b +
            asbCubeSatACS_B.Product4_b) + asbCubeSatACS_B.Product5_fa;

          /* Product: '<S124>/Product' */
          asbCubeSatACS_B.Product_i2 = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product2_ah;

          /* Product: '<S124>/Product1' */
          asbCubeSatACS_B.Product1_ir = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S124>/Sum1' */
          asbCubeSatACS_B.Sum1_g = asbCubeSatACS_B.Product_i2 -
            asbCubeSatACS_B.Product1_ir;

          /* Gain: '<S124>/Gain' */
          asbCubeSatACS_B.Gain_gi = 2.0 * asbCubeSatACS_B.Sum1_g;

          /* Product: '<S124>/Product4' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_oz = 0.0 * asbCubeSatACS_B.Gain_gi;

          /* Product: '<S124>/Product6' */
          asbCubeSatACS_B.Product6_gv = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product1_l1;

          /* Product: '<S124>/Product7' */
          asbCubeSatACS_B.Product7_i = asbCubeSatACS_B.Product3_dn *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S124>/Sum3' incorporates:
           *  Constant: '<S124>/Constant'
           */
          asbCubeSatACS_B.Sum3_cr = (0.5 - asbCubeSatACS_B.Product6_gv) -
            asbCubeSatACS_B.Product7_i;

          /* Gain: '<S124>/Gain2' */
          asbCubeSatACS_B.Gain2_m = 2.0 * asbCubeSatACS_B.Sum3_cr;

          /* Product: '<S124>/Product8' */
          asbCubeSatACS_B.Product8_bm = asbCubeSatACS_B.Gain2_m;

          /* Product: '<S124>/Product2' */
          asbCubeSatACS_B.Product2_ps = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product1_l1;

          /* Product: '<S124>/Product3' */
          asbCubeSatACS_B.Product3_b1 = asbCubeSatACS_B.Product2_ah *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S124>/Sum2' */
          asbCubeSatACS_B.Sum2_a = asbCubeSatACS_B.Product2_ps +
            asbCubeSatACS_B.Product3_b1;

          /* Gain: '<S124>/Gain1' */
          asbCubeSatACS_B.Gain1_h = 2.0 * asbCubeSatACS_B.Sum2_a;

          /* Product: '<S124>/Product5' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product5_nv = asbCubeSatACS_B.Gain1_h * 0.0;

          /* Sum: '<S124>/Sum' */
          asbCubeSatACS_B.Sum_ia = (asbCubeSatACS_B.Product4_oz +
            asbCubeSatACS_B.Product8_bm) + asbCubeSatACS_B.Product5_nv;

          /* Product: '<S125>/Product' */
          asbCubeSatACS_B.Product_c2 = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product3_dn;

          /* Product: '<S125>/Product1' */
          asbCubeSatACS_B.Product1_om = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product2_ah;

          /* Sum: '<S125>/Sum1' */
          asbCubeSatACS_B.Sum1_h1 = asbCubeSatACS_B.Product_c2 +
            asbCubeSatACS_B.Product1_om;

          /* Gain: '<S125>/Gain' */
          asbCubeSatACS_B.Gain_lx = 2.0 * asbCubeSatACS_B.Sum1_h1;

          /* Product: '<S125>/Product4' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_fe = 0.0 * asbCubeSatACS_B.Gain_lx;

          /* Product: '<S125>/Product2' */
          asbCubeSatACS_B.Product2_gr = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product1_l1;

          /* Product: '<S125>/Product3' */
          asbCubeSatACS_B.Product3_ju = asbCubeSatACS_B.Product2_ah *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S125>/Sum2' */
          asbCubeSatACS_B.Sum2_h = asbCubeSatACS_B.Product3_ju -
            asbCubeSatACS_B.Product2_gr;

          /* Gain: '<S125>/Gain1' */
          asbCubeSatACS_B.Gain1_b = 2.0 * asbCubeSatACS_B.Sum2_h;

          /* Product: '<S125>/Product5' */
          asbCubeSatACS_B.Product5_k = asbCubeSatACS_B.Gain1_b;

          /* Product: '<S125>/Product6' */
          asbCubeSatACS_B.Product6_bb = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product1_l1;

          /* Product: '<S125>/Product7' */
          asbCubeSatACS_B.Product7_p = asbCubeSatACS_B.Product2_ah *
            asbCubeSatACS_B.Product2_ah;

          /* Sum: '<S125>/Sum3' incorporates:
           *  Constant: '<S125>/Constant'
           */
          asbCubeSatACS_B.Sum3_n = (0.5 - asbCubeSatACS_B.Product6_bb) -
            asbCubeSatACS_B.Product7_p;

          /* Gain: '<S125>/Gain2' */
          asbCubeSatACS_B.Gain2_a = 2.0 * asbCubeSatACS_B.Sum3_n;

          /* Product: '<S125>/Product8' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product8_i = asbCubeSatACS_B.Gain2_a * 0.0;

          /* Sum: '<S125>/Sum' */
          asbCubeSatACS_B.Sum_kr = (asbCubeSatACS_B.Product4_fe +
            asbCubeSatACS_B.Product5_k) + asbCubeSatACS_B.Product8_i;

          /* SignalConversion generated from: '<S51>/Dot Product2' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[0] =
            asbCubeSatACS_B.Sum_mj;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[1] =
            asbCubeSatACS_B.Sum_ia;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[2] =
            asbCubeSatACS_B.Sum_kr;

          /* DotProduct: '<S51>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[0];
          tmp_0 = u0 * u;

          /* DotProduct: '<S51>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          tmp_2 = u0 * u;

          /* DotProduct: '<S51>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[0];
          tmp_3 = u0 * u;

          /* DotProduct: '<S51>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[1];
          tmp_0 += u0 * u;

          /* DotProduct: '<S51>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          tmp_2 += u0 * u;

          /* DotProduct: '<S51>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[1];
          tmp_3 += u0 * u;

          /* DotProduct: '<S51>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[2];
          tmp_0 += u0 * u;

          /* DotProduct: '<S51>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          tmp_2 += u0 * u;

          /* DotProduct: '<S51>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[2];
          tmp_3 += u0 * u;

          /* DotProduct: '<S51>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_o = tmp_0;

          /* DotProduct: '<S51>/Dot Product1' */
          asbCubeSatACS_B.DotProduct1_n = tmp_2;

          /* DotProduct: '<S51>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_c = tmp_3;

          /* Product: '<S51>/Divide1' */
          asbCubeSatACS_B.Divide1_n = asbCubeSatACS_B.DotProduct1_n *
            asbCubeSatACS_B.DotProduct2_c;

          /* Sqrt: '<S51>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_a = std::sqrt(asbCubeSatACS_B.Divide1_n);

          /* Product: '<S51>/Divide' */
          asbCubeSatACS_B.Divide_m = asbCubeSatACS_B.DotProduct3_o /
            asbCubeSatACS_B.Sqrt3_a;

          /* Bias: '<S51>/Bias' */
          asbCubeSatACS_B.Bias_f = asbCubeSatACS_B.Divide_m + -1.0;

          /* Abs: '<S51>/Abs' */
          asbCubeSatACS_B.Abs_o = std::abs(asbCubeSatACS_B.Bias_f);

          /* Bias: '<S51>/Bias1' */
          asbCubeSatACS_B.Bias1_p = asbCubeSatACS_B.Divide_m + 1.0;

          /* Abs: '<S51>/Abs1' */
          asbCubeSatACS_B.Abs1_o = std::abs(asbCubeSatACS_B.Bias1_p);

          /* If: '<S51>/If' */
          if (asbCubeSatACS_B.Abs_o < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
             *  ActionPort: '<S63>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_o);

            /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_o < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S64>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_o);

            /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S65>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_o);

            /* End of Outputs for SubSystem: '<S51>/If Action Subsystem2' */
          }

          /* RelationalOperator: '<S52>/Compare' incorporates:
           *  Constant: '<S52>/Constant'
           */
          asbCubeSatACS_B.Compare_f = (asbCubeSatACS_B.Merge_k != 0.0);

          /* RelationalOperator: '<S53>/Compare' incorporates:
           *  Constant: '<S53>/Constant'
           */
          asbCubeSatACS_B.Compare_l = (asbCubeSatACS_B.Merge_o != 0.0);

          /* Logic: '<S12>/OR' */
          asbCubeSatACS_B.OR_c = (asbCubeSatACS_B.Compare_f ||
            asbCubeSatACS_B.Compare_l);

          /* DotProduct: '<S56>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u = 0.0 * u0;

          /* DotProduct: '<S56>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          tmp_2 = tmp_0 * u0;

          /* DotProduct: '<S77>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          tmp_3 = 0.0 * u0;

          /* DotProduct: '<S77>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          tmp_4 = tmp_0 * u0;

          /* DotProduct: '<S56>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u += 0.0 * u0;

          /* DotProduct: '<S56>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          tmp_2 += tmp_0 * u0;

          /* DotProduct: '<S77>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          tmp_3 += 0.0 * u0;

          /* DotProduct: '<S77>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          tmp_4 += tmp_0 * u0;

          /* DotProduct: '<S56>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u += u0;

          /* DotProduct: '<S56>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          tmp_2 += tmp_0 * u0;

          /* DotProduct: '<S77>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          tmp_3 += u0;

          /* DotProduct: '<S77>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          tmp_4 += tmp_0 * u0;

          /* DotProduct: '<S56>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_n = u;

          /* DotProduct: '<S56>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_k = tmp_2;

          /* Product: '<S56>/Divide1' */
          asbCubeSatACS_B.Divide1_nh = asbCubeSatACS_ConstB.DotProduct1_hl *
            asbCubeSatACS_B.DotProduct2_k;

          /* Sqrt: '<S56>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_n = std::sqrt(asbCubeSatACS_B.Divide1_nh);

          /* Sum: '<S56>/Add2' */
          asbCubeSatACS_B.Add2_c = asbCubeSatACS_B.DotProduct3_n +
            asbCubeSatACS_B.Sqrt3_n;

          /* Product: '<S90>/Product' */
          asbCubeSatACS_B.Product_e0 = asbCubeSatACS_B.Add2_c *
            asbCubeSatACS_B.Add2_c;

          /* DotProduct: '<S77>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_b = tmp_3;

          /* DotProduct: '<S77>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_n = tmp_4;

          /* Product: '<S77>/Divide1' */
          asbCubeSatACS_B.Divide1_nj = asbCubeSatACS_ConstB.DotProduct1_p *
            asbCubeSatACS_B.DotProduct2_n;

          /* Sqrt: '<S77>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_ko = std::sqrt(asbCubeSatACS_B.Divide1_nj);

          /* Product: '<S77>/Divide' */
          asbCubeSatACS_B.Divide_l = asbCubeSatACS_B.DotProduct3_b /
            asbCubeSatACS_B.Sqrt3_ko;

          /* Bias: '<S77>/Bias' */
          asbCubeSatACS_B.Bias_a = asbCubeSatACS_B.Divide_l + -1.0;

          /* Abs: '<S77>/Abs' */
          asbCubeSatACS_B.Abs_m = std::abs(asbCubeSatACS_B.Bias_a);

          /* Bias: '<S77>/Bias1' */
          asbCubeSatACS_B.Bias1_m = asbCubeSatACS_B.Divide_l + 1.0;

          /* Abs: '<S77>/Abs1' */
          asbCubeSatACS_B.Abs1_m = std::abs(asbCubeSatACS_B.Bias1_m);

          /* If: '<S77>/If' */
          if (asbCubeSatACS_B.Abs_m < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
             *  ActionPort: '<S83>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_a);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_m < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S84>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_a);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S85>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_a);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem2' */
          }

          /* RelationalOperator: '<S78>/Compare' incorporates:
           *  Constant: '<S78>/Constant'
           */
          asbCubeSatACS_B.Compare_fr = (asbCubeSatACS_B.Merge_a != -1.0);

          /* Switch: '<S56>/is 180deg Rot' */
          if (asbCubeSatACS_B.Compare_fr) {
            /* Product: '<S82>/j x i' incorporates:
             *  Constant: '<S7>/primaryAlignment'
             */
            asbCubeSatACS_B.jxi_l = 0.0 * asbCubeSatACS_B.Sum_ah;

            /* Product: '<S82>/i x k' incorporates:
             *  Constant: '<S7>/primaryAlignment'
             */
            asbCubeSatACS_B.ixk_l = 0.0 * asbCubeSatACS_B.Sum_ml;

            /* Product: '<S82>/k x j' */
            asbCubeSatACS_B.kxj_b = asbCubeSatACS_B.Sum_pcb;

            /* Product: '<S81>/i x j' incorporates:
             *  Constant: '<S7>/primaryAlignment'
             */
            asbCubeSatACS_B.ixj_j = 0.0 * asbCubeSatACS_B.Sum_pcb;

            /* Product: '<S81>/k x i' */
            asbCubeSatACS_B.kxi_o = asbCubeSatACS_B.Sum_ah;

            /* Product: '<S81>/j x k' incorporates:
             *  Constant: '<S7>/primaryAlignment'
             */
            asbCubeSatACS_B.jxk_hle = 0.0 * asbCubeSatACS_B.Sum_ml;

            /* Sum: '<S76>/Sum' */
            asbCubeSatACS_B.Sum_do[0] = asbCubeSatACS_B.jxk_hle -
              asbCubeSatACS_B.kxj_b;
            asbCubeSatACS_B.Sum_do[1] = asbCubeSatACS_B.kxi_o -
              asbCubeSatACS_B.ixk_l;
            asbCubeSatACS_B.Sum_do[2] = asbCubeSatACS_B.ixj_j -
              asbCubeSatACS_B.jxi_l;

            /* Switch: '<S56>/is 180deg Rot' */
            asbCubeSatACS_B.is180degRot_p[0] = asbCubeSatACS_B.Sum_do[0];
            asbCubeSatACS_B.is180degRot_p[1] = asbCubeSatACS_B.Sum_do[1];
            asbCubeSatACS_B.is180degRot_p[2] = asbCubeSatACS_B.Sum_do[2];
          } else {
            /* Switch: '<S56>/is 180deg Rot' */
            asbCubeSatACS_B.is180degRot_p[0] = asbCubeSatACS_ConstB.Sum_c[0];
            asbCubeSatACS_B.is180degRot_p[1] = asbCubeSatACS_ConstB.Sum_c[1];
            asbCubeSatACS_B.is180degRot_p[2] = asbCubeSatACS_ConstB.Sum_c[2];
          }

          /* Product: '<S90>/Product1' */
          asbCubeSatACS_B.Product1_k = asbCubeSatACS_B.is180degRot_p[0] *
            asbCubeSatACS_B.is180degRot_p[0];

          /* Product: '<S90>/Product2' */
          asbCubeSatACS_B.Product2_hd = asbCubeSatACS_B.is180degRot_p[1] *
            asbCubeSatACS_B.is180degRot_p[1];

          /* Product: '<S90>/Product3' */
          asbCubeSatACS_B.Product3_hx = asbCubeSatACS_B.is180degRot_p[2] *
            asbCubeSatACS_B.is180degRot_p[2];

          /* Sum: '<S90>/Sum' */
          asbCubeSatACS_B.Sum_p1 = ((asbCubeSatACS_B.Product_e0 +
            asbCubeSatACS_B.Product1_k) + asbCubeSatACS_B.Product2_hd) +
            asbCubeSatACS_B.Product3_hx;

          /* Sqrt: '<S89>/sqrt' */
          asbCubeSatACS_B.sqrt_e5 = std::sqrt(asbCubeSatACS_B.Sum_p1);

          /* Product: '<S80>/Product' */
          asbCubeSatACS_B.Product_fd = asbCubeSatACS_B.Add2_c /
            asbCubeSatACS_B.sqrt_e5;

          /* Product: '<S114>/j x k' */
          asbCubeSatACS_B.jxk_i = asbCubeSatACS_B.Sum_pcb *
            asbCubeSatACS_B.Sum_kr;

          /* Product: '<S114>/k x i' */
          asbCubeSatACS_B.kxi_p = asbCubeSatACS_B.Sum_ml *
            asbCubeSatACS_B.Sum_mj;

          /* Product: '<S114>/i x j' */
          asbCubeSatACS_B.ixj_gk = asbCubeSatACS_B.Sum_ah *
            asbCubeSatACS_B.Sum_ia;

          /* Product: '<S115>/k x j' */
          asbCubeSatACS_B.kxj_n = asbCubeSatACS_B.Sum_ml *
            asbCubeSatACS_B.Sum_ia;

          /* Product: '<S115>/i x k' */
          asbCubeSatACS_B.ixk_hg = asbCubeSatACS_B.Sum_ah *
            asbCubeSatACS_B.Sum_kr;

          /* Product: '<S115>/j x i' */
          asbCubeSatACS_B.jxi_dy = asbCubeSatACS_B.Sum_pcb *
            asbCubeSatACS_B.Sum_mj;

          /* Sum: '<S112>/Sum' */
          asbCubeSatACS_B.Sum_ab[0] = asbCubeSatACS_B.jxk_i -
            asbCubeSatACS_B.kxj_n;
          asbCubeSatACS_B.Sum_ab[1] = asbCubeSatACS_B.kxi_p -
            asbCubeSatACS_B.ixk_hg;
          asbCubeSatACS_B.Sum_ab[2] = asbCubeSatACS_B.ixj_gk -
            asbCubeSatACS_B.jxi_dy;

          /* Product: '<S116>/j x k' */
          asbCubeSatACS_B.jxk_h = asbCubeSatACS_B.Sum_ab[1] *
            asbCubeSatACS_B.Sum_ml;

          /* Product: '<S116>/k x i' */
          asbCubeSatACS_B.kxi_f2 = asbCubeSatACS_B.Sum_ab[2] *
            asbCubeSatACS_B.Sum_ah;

          /* Product: '<S116>/i x j' */
          asbCubeSatACS_B.ixj_e = asbCubeSatACS_B.Sum_ab[0] *
            asbCubeSatACS_B.Sum_pcb;

          /* Product: '<S117>/k x j' */
          asbCubeSatACS_B.kxj_op = asbCubeSatACS_B.Sum_ab[2] *
            asbCubeSatACS_B.Sum_pcb;

          /* Product: '<S117>/i x k' */
          asbCubeSatACS_B.ixk_k = asbCubeSatACS_B.Sum_ab[0] *
            asbCubeSatACS_B.Sum_ml;

          /* Product: '<S117>/j x i' */
          asbCubeSatACS_B.jxi_g0 = asbCubeSatACS_B.Sum_ab[1] *
            asbCubeSatACS_B.Sum_ah;

          /* Sum: '<S113>/Sum' */
          asbCubeSatACS_B.Sum_gf[0] = asbCubeSatACS_B.jxk_h -
            asbCubeSatACS_B.kxj_op;
          asbCubeSatACS_B.Sum_gf[1] = asbCubeSatACS_B.kxi_f2 -
            asbCubeSatACS_B.ixk_k;
          asbCubeSatACS_B.Sum_gf[2] = asbCubeSatACS_B.ixj_e -
            asbCubeSatACS_B.jxi_g0;

          /* Product: '<S80>/Product2' */
          asbCubeSatACS_B.Product2_jl = asbCubeSatACS_B.is180degRot_p[1] /
            asbCubeSatACS_B.sqrt_e5;

          /* Product: '<S75>/Product' */
          asbCubeSatACS_B.Product_l = asbCubeSatACS_B.Product_fd *
            asbCubeSatACS_B.Product_fd;

          /* Product: '<S80>/Product1' */
          asbCubeSatACS_B.Product1_ex = asbCubeSatACS_B.is180degRot_p[0] /
            asbCubeSatACS_B.sqrt_e5;

          /* Product: '<S75>/Product1' */
          asbCubeSatACS_B.Product1_ef = asbCubeSatACS_B.Product1_ex *
            asbCubeSatACS_B.Product1_ex;

          /* Product: '<S75>/Product2' */
          asbCubeSatACS_B.Product2_b = asbCubeSatACS_B.Product2_jl *
            asbCubeSatACS_B.Product2_jl;

          /* Product: '<S80>/Product3' */
          asbCubeSatACS_B.Product3_l = asbCubeSatACS_B.is180degRot_p[2] /
            asbCubeSatACS_B.sqrt_e5;

          /* Product: '<S75>/Product3' */
          asbCubeSatACS_B.Product3_hv = asbCubeSatACS_B.Product3_l *
            asbCubeSatACS_B.Product3_l;

          /* Sum: '<S75>/Sum' */
          asbCubeSatACS_B.Sum_j3 = ((asbCubeSatACS_B.Product_l +
            asbCubeSatACS_B.Product1_ef) + asbCubeSatACS_B.Product2_b) +
            asbCubeSatACS_B.Product3_hv;

          /* Sqrt: '<S74>/sqrt' */
          asbCubeSatACS_B.sqrt_bh = std::sqrt(asbCubeSatACS_B.Sum_j3);

          /* Product: '<S70>/Product2' */
          asbCubeSatACS_B.Product2_g5 = asbCubeSatACS_B.Product2_jl /
            asbCubeSatACS_B.sqrt_bh;

          /* Product: '<S71>/Product6' */
          asbCubeSatACS_B.Product6_f = asbCubeSatACS_B.Product2_g5 *
            asbCubeSatACS_B.Product2_g5;

          /* Product: '<S70>/Product3' */
          asbCubeSatACS_B.Product3_fb = asbCubeSatACS_B.Product3_l /
            asbCubeSatACS_B.sqrt_bh;

          /* Product: '<S71>/Product7' */
          asbCubeSatACS_B.Product7_d = asbCubeSatACS_B.Product3_fb *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S71>/Sum3' incorporates:
           *  Constant: '<S71>/Constant'
           */
          asbCubeSatACS_B.Sum3_dm = (0.5 - asbCubeSatACS_B.Product6_f) -
            asbCubeSatACS_B.Product7_d;

          /* Gain: '<S71>/Gain2' */
          asbCubeSatACS_B.Gain2_mk = 2.0 * asbCubeSatACS_B.Sum3_dm;

          /* Product: '<S71>/Product8' */
          asbCubeSatACS_B.Product8_pc = asbCubeSatACS_B.Sum_gf[0] *
            asbCubeSatACS_B.Gain2_mk;

          /* Product: '<S70>/Product1' */
          asbCubeSatACS_B.Product1_o5 = asbCubeSatACS_B.Product1_ex /
            asbCubeSatACS_B.sqrt_bh;

          /* Product: '<S71>/Product' */
          asbCubeSatACS_B.Product_ak = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product2_g5;

          /* Product: '<S70>/Product' */
          asbCubeSatACS_B.Product_im = asbCubeSatACS_B.Product_fd /
            asbCubeSatACS_B.sqrt_bh;

          /* Product: '<S71>/Product1' */
          asbCubeSatACS_B.Product1_jv = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S71>/Sum1' */
          asbCubeSatACS_B.Sum1_jd = asbCubeSatACS_B.Product_ak +
            asbCubeSatACS_B.Product1_jv;

          /* Gain: '<S71>/Gain' */
          asbCubeSatACS_B.Gain_bh = 2.0 * asbCubeSatACS_B.Sum1_jd;

          /* Product: '<S71>/Product4' */
          asbCubeSatACS_B.Product4_j = asbCubeSatACS_B.Gain_bh *
            asbCubeSatACS_B.Sum_gf[1];

          /* Product: '<S71>/Product2' */
          asbCubeSatACS_B.Product2_ls = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product2_g5;

          /* Product: '<S71>/Product3' */
          asbCubeSatACS_B.Product3_kc = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S71>/Sum2' */
          asbCubeSatACS_B.Sum2_d4 = asbCubeSatACS_B.Product3_kc -
            asbCubeSatACS_B.Product2_ls;

          /* Gain: '<S71>/Gain1' */
          asbCubeSatACS_B.Gain1_a = 2.0 * asbCubeSatACS_B.Sum2_d4;

          /* Product: '<S71>/Product5' */
          asbCubeSatACS_B.Product5_jf = asbCubeSatACS_B.Gain1_a *
            asbCubeSatACS_B.Sum_gf[2];

          /* Sum: '<S71>/Sum' */
          asbCubeSatACS_B.Sum_ev = (asbCubeSatACS_B.Product8_pc +
            asbCubeSatACS_B.Product4_j) + asbCubeSatACS_B.Product5_jf;

          /* Product: '<S72>/Product' */
          asbCubeSatACS_B.Product_j = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product2_g5;

          /* Product: '<S72>/Product1' */
          asbCubeSatACS_B.Product1_bo = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S72>/Sum1' */
          asbCubeSatACS_B.Sum1_cy = asbCubeSatACS_B.Product_j -
            asbCubeSatACS_B.Product1_bo;

          /* Gain: '<S72>/Gain' */
          asbCubeSatACS_B.Gain_n4 = 2.0 * asbCubeSatACS_B.Sum1_cy;

          /* Product: '<S72>/Product4' */
          asbCubeSatACS_B.Product4_mx = asbCubeSatACS_B.Sum_gf[0] *
            asbCubeSatACS_B.Gain_n4;

          /* Product: '<S72>/Product6' */
          asbCubeSatACS_B.Product6_mq = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product1_o5;

          /* Product: '<S72>/Product7' */
          asbCubeSatACS_B.Product7_cs = asbCubeSatACS_B.Product3_fb *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S72>/Sum3' incorporates:
           *  Constant: '<S72>/Constant'
           */
          asbCubeSatACS_B.Sum3_g = (0.5 - asbCubeSatACS_B.Product6_mq) -
            asbCubeSatACS_B.Product7_cs;

          /* Gain: '<S72>/Gain2' */
          asbCubeSatACS_B.Gain2_g = 2.0 * asbCubeSatACS_B.Sum3_g;

          /* Product: '<S72>/Product8' */
          asbCubeSatACS_B.Product8_cw = asbCubeSatACS_B.Gain2_g *
            asbCubeSatACS_B.Sum_gf[1];

          /* Product: '<S72>/Product2' */
          asbCubeSatACS_B.Product2_a0 = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product1_o5;

          /* Product: '<S72>/Product3' */
          asbCubeSatACS_B.Product3_a4 = asbCubeSatACS_B.Product2_g5 *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S72>/Sum2' */
          asbCubeSatACS_B.Sum2_j = asbCubeSatACS_B.Product2_a0 +
            asbCubeSatACS_B.Product3_a4;

          /* Gain: '<S72>/Gain1' */
          asbCubeSatACS_B.Gain1_bl = 2.0 * asbCubeSatACS_B.Sum2_j;

          /* Product: '<S72>/Product5' */
          asbCubeSatACS_B.Product5_ge = asbCubeSatACS_B.Gain1_bl *
            asbCubeSatACS_B.Sum_gf[2];

          /* Sum: '<S72>/Sum' */
          asbCubeSatACS_B.Sum_ow = (asbCubeSatACS_B.Product4_mx +
            asbCubeSatACS_B.Product8_cw) + asbCubeSatACS_B.Product5_ge;

          /* Product: '<S73>/Product' */
          asbCubeSatACS_B.Product_b3 = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product3_fb;

          /* Product: '<S73>/Product1' */
          asbCubeSatACS_B.Product1_ph = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product2_g5;

          /* Sum: '<S73>/Sum1' */
          asbCubeSatACS_B.Sum1_b2 = asbCubeSatACS_B.Product_b3 +
            asbCubeSatACS_B.Product1_ph;

          /* Gain: '<S73>/Gain' */
          asbCubeSatACS_B.Gain_lj = 2.0 * asbCubeSatACS_B.Sum1_b2;

          /* Product: '<S73>/Product4' */
          asbCubeSatACS_B.Product4_pw = asbCubeSatACS_B.Sum_gf[0] *
            asbCubeSatACS_B.Gain_lj;

          /* Product: '<S73>/Product2' */
          asbCubeSatACS_B.Product2_cw = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product1_o5;

          /* Product: '<S73>/Product3' */
          asbCubeSatACS_B.Product3_ix = asbCubeSatACS_B.Product2_g5 *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S73>/Sum2' */
          asbCubeSatACS_B.Sum2_dn = asbCubeSatACS_B.Product3_ix -
            asbCubeSatACS_B.Product2_cw;

          /* Gain: '<S73>/Gain1' */
          asbCubeSatACS_B.Gain1_lm3 = 2.0 * asbCubeSatACS_B.Sum2_dn;

          /* Product: '<S73>/Product5' */
          asbCubeSatACS_B.Product5_jz = asbCubeSatACS_B.Gain1_lm3 *
            asbCubeSatACS_B.Sum_gf[1];

          /* Product: '<S73>/Product6' */
          asbCubeSatACS_B.Product6_mo = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product1_o5;

          /* Product: '<S73>/Product7' */
          asbCubeSatACS_B.Product7_mi = asbCubeSatACS_B.Product2_g5 *
            asbCubeSatACS_B.Product2_g5;

          /* Sum: '<S73>/Sum3' incorporates:
           *  Constant: '<S73>/Constant'
           */
          asbCubeSatACS_B.Sum3_al = (0.5 - asbCubeSatACS_B.Product6_mo) -
            asbCubeSatACS_B.Product7_mi;

          /* Gain: '<S73>/Gain2' */
          asbCubeSatACS_B.Gain2_pg = 2.0 * asbCubeSatACS_B.Sum3_al;

          /* Product: '<S73>/Product8' */
          asbCubeSatACS_B.Product8_bz = asbCubeSatACS_B.Gain2_pg *
            asbCubeSatACS_B.Sum_gf[2];

          /* Sum: '<S73>/Sum' */
          asbCubeSatACS_B.Sum_on = (asbCubeSatACS_B.Product4_pw +
            asbCubeSatACS_B.Product5_jz) + asbCubeSatACS_B.Product8_bz;

          /* SignalConversion generated from: '<S92>/Dot Product2' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0] =
            asbCubeSatACS_B.Sum_ev;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1] =
            asbCubeSatACS_B.Sum_ow;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2] =
            asbCubeSatACS_B.Sum_on;

          /* DotProduct: '<S92>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
          u = asbCubeSatACS_ConstB.Sum_e[0] * u0;

          /* DotProduct: '<S92>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
          tmp_2 = u0 * tmp_0;

          /* DotProduct: '<S92>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
          u += asbCubeSatACS_ConstB.Sum_e[1] * u0;

          /* DotProduct: '<S92>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
          tmp_2 += u0 * tmp_0;

          /* DotProduct: '<S92>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
          u += asbCubeSatACS_ConstB.Sum_e[2] * u0;

          /* DotProduct: '<S92>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
          tmp_2 += u0 * tmp_0;

          /* DotProduct: '<S92>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_m = u;

          /* DotProduct: '<S92>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_ck = tmp_2;

          /* Product: '<S92>/Divide1' */
          asbCubeSatACS_B.Divide1_dp = asbCubeSatACS_ConstB.DotProduct1_b *
            asbCubeSatACS_B.DotProduct2_ck;

          /* Sqrt: '<S92>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_av = std::sqrt(asbCubeSatACS_B.Divide1_dp);

          /* Product: '<S92>/Divide' */
          asbCubeSatACS_B.Divide_f = asbCubeSatACS_B.DotProduct3_m /
            asbCubeSatACS_B.Sqrt3_av;

          /* Bias: '<S92>/Bias' */
          asbCubeSatACS_B.Bias_c = asbCubeSatACS_B.Divide_f + -1.0;

          /* Abs: '<S92>/Abs' */
          asbCubeSatACS_B.Abs_k = std::abs(asbCubeSatACS_B.Bias_c);

          /* Bias: '<S92>/Bias1' */
          asbCubeSatACS_B.Bias1_fx = asbCubeSatACS_B.Divide_f + 1.0;

          /* Abs: '<S92>/Abs1' */
          asbCubeSatACS_B.Abs1_md = std::abs(asbCubeSatACS_B.Bias1_fx);

          /* If: '<S92>/If' */
          if (asbCubeSatACS_B.Abs_k < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
             *  ActionPort: '<S98>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_di);

            /* End of Outputs for SubSystem: '<S92>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_md < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S99>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_di);

            /* End of Outputs for SubSystem: '<S92>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S100>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_di);

            /* End of Outputs for SubSystem: '<S92>/If Action Subsystem2' */
          }

          /* Switch: '<S12>/Switch' */
          if (asbCubeSatACS_B.OR_c) {
            /* Switch: '<S12>/Switch' */
            asbCubeSatACS_B.Switch_p[0] = asbCubeSatACS_B.Product_fd;
            asbCubeSatACS_B.Switch_p[1] = asbCubeSatACS_B.Product1_ex;
            asbCubeSatACS_B.Switch_p[2] = asbCubeSatACS_B.Product2_jl;
            asbCubeSatACS_B.Switch_p[3] = asbCubeSatACS_B.Product3_l;
          } else {
            /* RelationalOperator: '<S93>/Compare' incorporates:
             *  Constant: '<S93>/Constant'
             */
            asbCubeSatACS_B.Compare_b = (asbCubeSatACS_B.Merge_di != -1.0);

            /* Switch: '<S57>/is 180deg Rot' */
            if (asbCubeSatACS_B.Compare_b) {
              /* Product: '<S97>/j x i' */
              asbCubeSatACS_B.jxi_di = asbCubeSatACS_ConstB.Sum_e[1] *
                asbCubeSatACS_B.Sum_ev;

              /* Product: '<S97>/i x k' */
              asbCubeSatACS_B.ixk_i = asbCubeSatACS_ConstB.Sum_e[0] *
                asbCubeSatACS_B.Sum_on;

              /* Product: '<S97>/k x j' */
              asbCubeSatACS_B.kxj_eu = asbCubeSatACS_ConstB.Sum_e[2] *
                asbCubeSatACS_B.Sum_ow;

              /* Product: '<S96>/i x j' */
              asbCubeSatACS_B.ixj_h = asbCubeSatACS_ConstB.Sum_e[0] *
                asbCubeSatACS_B.Sum_ow;

              /* Product: '<S96>/k x i' */
              asbCubeSatACS_B.kxi_k = asbCubeSatACS_ConstB.Sum_e[2] *
                asbCubeSatACS_B.Sum_ev;

              /* Product: '<S96>/j x k' */
              asbCubeSatACS_B.jxk_hl = asbCubeSatACS_ConstB.Sum_e[1] *
                asbCubeSatACS_B.Sum_on;

              /* Sum: '<S91>/Sum' */
              asbCubeSatACS_B.Sum_gh[0] = asbCubeSatACS_B.jxk_hl -
                asbCubeSatACS_B.kxj_eu;
              asbCubeSatACS_B.Sum_gh[1] = asbCubeSatACS_B.kxi_k -
                asbCubeSatACS_B.ixk_i;
              asbCubeSatACS_B.Sum_gh[2] = asbCubeSatACS_B.ixj_h -
                asbCubeSatACS_B.jxi_di;

              /* Switch: '<S57>/is 180deg Rot' */
              asbCubeSatACS_B.is180degRot_o[0] = asbCubeSatACS_B.Sum_gh[0];
              asbCubeSatACS_B.is180degRot_o[1] = asbCubeSatACS_B.Sum_gh[1];
              asbCubeSatACS_B.is180degRot_o[2] = asbCubeSatACS_B.Sum_gh[2];
            } else {
              /* Switch: '<S57>/is 180deg Rot' */
              asbCubeSatACS_B.is180degRot_o[0] = asbCubeSatACS_ConstB.Sum_ij[0];
              asbCubeSatACS_B.is180degRot_o[1] = asbCubeSatACS_ConstB.Sum_ij[1];
              asbCubeSatACS_B.is180degRot_o[2] = asbCubeSatACS_ConstB.Sum_ij[2];
            }

            /* Product: '<S105>/Product3' */
            asbCubeSatACS_B.Product3_fl = asbCubeSatACS_B.is180degRot_o[2] *
              asbCubeSatACS_B.is180degRot_o[2];

            /* Product: '<S105>/Product2' */
            asbCubeSatACS_B.Product2_jr = asbCubeSatACS_B.is180degRot_o[1] *
              asbCubeSatACS_B.is180degRot_o[1];

            /* Product: '<S105>/Product1' */
            asbCubeSatACS_B.Product1_ig = asbCubeSatACS_B.is180degRot_o[0] *
              asbCubeSatACS_B.is180degRot_o[0];

            /* DotProduct: '<S57>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
            tmp_0 = u0 * u;

            /* DotProduct: '<S57>/Dot Product3' incorporates:
             *  Sum: '<S107>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
            tmp_2 = asbCubeSatACS_ConstB.Sum_e[0] * u0;

            /* DotProduct: '<S57>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
            tmp_0 += u0 * u;

            /* DotProduct: '<S57>/Dot Product3' incorporates:
             *  Sum: '<S107>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
            tmp_2 += asbCubeSatACS_ConstB.Sum_e[1] * u0;

            /* DotProduct: '<S57>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
            tmp_0 += u0 * u;

            /* DotProduct: '<S57>/Dot Product3' incorporates:
             *  Sum: '<S107>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
            tmp_2 += asbCubeSatACS_ConstB.Sum_e[2] * u0;

            /* DotProduct: '<S57>/Dot Product2' */
            asbCubeSatACS_B.DotProduct2_ci = tmp_0;

            /* Product: '<S57>/Divide1' */
            asbCubeSatACS_B.Divide1_nv = asbCubeSatACS_ConstB.DotProduct1_d *
              asbCubeSatACS_B.DotProduct2_ci;

            /* Sqrt: '<S57>/Sqrt3' */
            asbCubeSatACS_B.Sqrt3_m = std::sqrt(asbCubeSatACS_B.Divide1_nv);

            /* DotProduct: '<S57>/Dot Product3' */
            asbCubeSatACS_B.DotProduct3_a = tmp_2;

            /* Sum: '<S57>/Add2' */
            asbCubeSatACS_B.Add2_e = asbCubeSatACS_B.DotProduct3_a +
              asbCubeSatACS_B.Sqrt3_m;

            /* Product: '<S105>/Product' */
            asbCubeSatACS_B.Product_f4 = asbCubeSatACS_B.Add2_e *
              asbCubeSatACS_B.Add2_e;

            /* Sum: '<S105>/Sum' */
            asbCubeSatACS_B.Sum_gz = ((asbCubeSatACS_B.Product_f4 +
              asbCubeSatACS_B.Product1_ig) + asbCubeSatACS_B.Product2_jr) +
              asbCubeSatACS_B.Product3_fl;

            /* Sqrt: '<S104>/sqrt' */
            asbCubeSatACS_B.sqrt_c = std::sqrt(asbCubeSatACS_B.Sum_gz);

            /* Product: '<S95>/Product3' */
            asbCubeSatACS_B.Product3_md = asbCubeSatACS_B.is180degRot_o[2] /
              asbCubeSatACS_B.sqrt_c;

            /* Product: '<S66>/Product3' */
            asbCubeSatACS_B.Product3_e5 = asbCubeSatACS_B.Product3_l *
              asbCubeSatACS_B.Product3_md;

            /* Product: '<S95>/Product2' */
            asbCubeSatACS_B.Product2_pn = asbCubeSatACS_B.is180degRot_o[1] /
              asbCubeSatACS_B.sqrt_c;

            /* Product: '<S66>/Product2' */
            asbCubeSatACS_B.Product2_iy = asbCubeSatACS_B.Product2_jl *
              asbCubeSatACS_B.Product2_pn;

            /* Product: '<S95>/Product1' */
            asbCubeSatACS_B.Product1_di = asbCubeSatACS_B.is180degRot_o[0] /
              asbCubeSatACS_B.sqrt_c;

            /* Product: '<S66>/Product1' */
            asbCubeSatACS_B.Product1_g4 = asbCubeSatACS_B.Product1_ex *
              asbCubeSatACS_B.Product1_di;

            /* Product: '<S95>/Product' */
            asbCubeSatACS_B.Product_hb = asbCubeSatACS_B.Add2_e /
              asbCubeSatACS_B.sqrt_c;

            /* Product: '<S66>/Product' */
            asbCubeSatACS_B.Product_ek = asbCubeSatACS_B.Product_fd *
              asbCubeSatACS_B.Product_hb;

            /* Sum: '<S66>/Sum' */
            asbCubeSatACS_B.Sum_cu = ((asbCubeSatACS_B.Product_ek -
              asbCubeSatACS_B.Product1_g4) - asbCubeSatACS_B.Product2_iy) -
              asbCubeSatACS_B.Product3_e5;

            /* Product: '<S67>/Product3' */
            asbCubeSatACS_B.Product3_g = asbCubeSatACS_B.Product3_l *
              asbCubeSatACS_B.Product2_pn;

            /* Product: '<S67>/Product2' */
            asbCubeSatACS_B.Product2_gy = asbCubeSatACS_B.Product2_jl *
              asbCubeSatACS_B.Product3_md;

            /* Product: '<S67>/Product1' */
            asbCubeSatACS_B.Product1_kh = asbCubeSatACS_B.Product1_ex *
              asbCubeSatACS_B.Product_hb;

            /* Product: '<S67>/Product' */
            asbCubeSatACS_B.Product_p5 = asbCubeSatACS_B.Product_fd *
              asbCubeSatACS_B.Product1_di;

            /* Sum: '<S67>/Sum' */
            asbCubeSatACS_B.Sum_od = ((asbCubeSatACS_B.Product_p5 +
              asbCubeSatACS_B.Product1_kh) + asbCubeSatACS_B.Product2_gy) -
              asbCubeSatACS_B.Product3_g;

            /* Product: '<S68>/Product3' */
            asbCubeSatACS_B.Product3_mq = asbCubeSatACS_B.Product3_l *
              asbCubeSatACS_B.Product1_di;

            /* Product: '<S68>/Product2' */
            asbCubeSatACS_B.Product2_o4z = asbCubeSatACS_B.Product2_jl *
              asbCubeSatACS_B.Product_hb;

            /* Product: '<S68>/Product1' */
            asbCubeSatACS_B.Product1_iw = asbCubeSatACS_B.Product1_ex *
              asbCubeSatACS_B.Product3_md;

            /* Product: '<S68>/Product' */
            asbCubeSatACS_B.Product_hu = asbCubeSatACS_B.Product_fd *
              asbCubeSatACS_B.Product2_pn;

            /* Sum: '<S68>/Sum' */
            asbCubeSatACS_B.Sum_krr = ((asbCubeSatACS_B.Product_hu -
              asbCubeSatACS_B.Product1_iw) + asbCubeSatACS_B.Product2_o4z) +
              asbCubeSatACS_B.Product3_mq;

            /* Product: '<S69>/Product3' */
            asbCubeSatACS_B.Product3_ics = asbCubeSatACS_B.Product3_l *
              asbCubeSatACS_B.Product_hb;

            /* Product: '<S69>/Product2' */
            asbCubeSatACS_B.Product2_au = asbCubeSatACS_B.Product2_jl *
              asbCubeSatACS_B.Product1_di;

            /* Product: '<S69>/Product1' */
            asbCubeSatACS_B.Product1_a0 = asbCubeSatACS_B.Product1_ex *
              asbCubeSatACS_B.Product2_pn;

            /* Product: '<S69>/Product' */
            asbCubeSatACS_B.Product_nm = asbCubeSatACS_B.Product_fd *
              asbCubeSatACS_B.Product3_md;

            /* Sum: '<S69>/Sum' */
            asbCubeSatACS_B.Sum_mi = ((asbCubeSatACS_B.Product_nm +
              asbCubeSatACS_B.Product1_a0) - asbCubeSatACS_B.Product2_au) +
              asbCubeSatACS_B.Product3_ics;

            /* Switch: '<S12>/Switch' */
            asbCubeSatACS_B.Switch_p[0] = asbCubeSatACS_B.Sum_cu;
            asbCubeSatACS_B.Switch_p[1] = asbCubeSatACS_B.Sum_od;
            asbCubeSatACS_B.Switch_p[2] = asbCubeSatACS_B.Sum_krr;
            asbCubeSatACS_B.Switch_p[3] = asbCubeSatACS_B.Sum_mi;
          }

          /* Merge: '<S3>/ Merge 1' incorporates:
           *  SignalConversion generated from: '<S5>/cmd_q_b2tgt'
           */
          asbCubeSatACS_B.cmd_q_b2tgt[0] = asbCubeSatACS_B.Switch_p[0];
          asbCubeSatACS_B.cmd_q_b2tgt[1] = asbCubeSatACS_B.Switch_p[1];
          asbCubeSatACS_B.cmd_q_b2tgt[2] = asbCubeSatACS_B.Switch_p[2];
          asbCubeSatACS_B.cmd_q_b2tgt[3] = asbCubeSatACS_B.Switch_p[3];

          /* Product: '<S135>/Product' */
          asbCubeSatACS_B.Product_mx = asbCubeSatACS_B.Switch_p[0] *
            asbCubeSatACS_B.Switch_p[0];

          /* Product: '<S135>/Product1' */
          asbCubeSatACS_B.Product1_fz = asbCubeSatACS_B.Switch_p[1] *
            asbCubeSatACS_B.Switch_p[1];

          /* Product: '<S135>/Product2' */
          asbCubeSatACS_B.Product2_p4 = asbCubeSatACS_B.Switch_p[2] *
            asbCubeSatACS_B.Switch_p[2];

          /* Product: '<S135>/Product3' */
          asbCubeSatACS_B.Product3_kb = asbCubeSatACS_B.Switch_p[3] *
            asbCubeSatACS_B.Switch_p[3];

          /* Sum: '<S135>/Sum' */
          asbCubeSatACS_B.Sum_ka = ((asbCubeSatACS_B.Product_mx +
            asbCubeSatACS_B.Product1_fz) + asbCubeSatACS_B.Product2_p4) +
            asbCubeSatACS_B.Product3_kb;

          /* Sqrt: '<S134>/sqrt' */
          asbCubeSatACS_B.sqrt_j = std::sqrt(asbCubeSatACS_B.Sum_ka);

          /* Product: '<S129>/Product' */
          asbCubeSatACS_B.Product_j5 = asbCubeSatACS_B.Switch_p[0] /
            asbCubeSatACS_B.sqrt_j;

          /* Product: '<S129>/Product1' */
          asbCubeSatACS_B.Product1_ik = asbCubeSatACS_B.Switch_p[1] /
            asbCubeSatACS_B.sqrt_j;

          /* Product: '<S129>/Product2' */
          asbCubeSatACS_B.Product2_ev = asbCubeSatACS_B.Switch_p[2] /
            asbCubeSatACS_B.sqrt_j;

          /* Product: '<S129>/Product3' */
          asbCubeSatACS_B.Product3_fq1 = asbCubeSatACS_B.Switch_p[3] /
            asbCubeSatACS_B.sqrt_j;

          /* Fcn: '<S9>/fcn3' */
          asbCubeSatACS_B.fcn3_l = (asbCubeSatACS_B.Product1_ik *
            asbCubeSatACS_B.Product3_fq1 + asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product2_ev) * 2.0;

          /* If: '<S130>/If' */
          if (asbCubeSatACS_B.fcn3_l > 1.0) {
            /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem' incorporates:
             *  ActionPort: '<S131>/Action Port'
             */
            /* Merge: '<S130>/Merge' incorporates:
             *  Constant: '<S131>/Constant'
             */
            asbCubeSatACS_B.Merge_c = 1.0;

            /* End of Outputs for SubSystem: '<S130>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.fcn3_l < -1.0) {
            /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S132>/Action Port'
             */
            /* Merge: '<S130>/Merge' incorporates:
             *  Constant: '<S132>/Constant'
             */
            asbCubeSatACS_B.Merge_c = 1.0;

            /* End of Outputs for SubSystem: '<S130>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S133>/Action Port'
             */
            asbCubeSat_IfActionSubsystem2_p(asbCubeSatACS_B.fcn3_l,
              &asbCubeSatACS_B.Merge_c);

            /* End of Outputs for SubSystem: '<S130>/If Action Subsystem2' */
          }

          /* Fcn: '<S9>/fcn1' */
          asbCubeSatACS_B.fcn1_l = (asbCubeSatACS_B.Product2_ev *
            asbCubeSatACS_B.Product3_fq1 - asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product1_ik) * -2.0;

          /* Fcn: '<S9>/fcn2' */
          asbCubeSatACS_B.fcn2_k = ((asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product_j5 - asbCubeSatACS_B.Product1_ik *
            asbCubeSatACS_B.Product1_ik) - asbCubeSatACS_B.Product2_ev *
            asbCubeSatACS_B.Product2_ev) + asbCubeSatACS_B.Product3_fq1 *
            asbCubeSatACS_B.Product3_fq1;

          /* Trigonometry: '<S128>/Trigonometric Function1' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          asbCubeSatACS_B.PointingCmd[0] = rt_atan2d_snf(asbCubeSatACS_B.fcn1_l,
            asbCubeSatACS_B.fcn2_k);

          /* Fcn: '<S9>/fcn4' */
          asbCubeSatACS_B.fcn4_e = (asbCubeSatACS_B.Product1_ik *
            asbCubeSatACS_B.Product2_ev - asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product3_fq1) * -2.0;

          /* Fcn: '<S9>/fcn5' */
          asbCubeSatACS_B.fcn5_p = ((asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product_j5 + asbCubeSatACS_B.Product1_ik *
            asbCubeSatACS_B.Product1_ik) - asbCubeSatACS_B.Product2_ev *
            asbCubeSatACS_B.Product2_ev) - asbCubeSatACS_B.Product3_fq1 *
            asbCubeSatACS_B.Product3_fq1;

          /* Trigonometry: '<S128>/Trigonometric Function3' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          asbCubeSatACS_B.PointingCmd[2] = rt_atan2d_snf(asbCubeSatACS_B.fcn4_e,
            asbCubeSatACS_B.fcn5_p);

          /* Trigonometry: '<S128>/trigFcn' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          u0 = asbCubeSatACS_B.Merge_c;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          asbCubeSatACS_B.PointingCmd[1] = std::asin(u0);
        }
      }
      break;

     case asbCubeSatACS_IN_Sun:
      {
        /* During 'Sun': '<S3>:49' */
        if (*rtu_AttitudeMode == 1.0) {
          /* Transition: '<S3>:55' */
          asbCubeSatACS_B.ControlMode = 1.0;
          asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Transition;
        } else {
          real_T tmp_0;
          real_T tmp_2;
          real_T tmp_3;
          real_T tmp_4;
          real_T u;
          real_T u0;

          /* Product: '<S155>/Product' */
          asbCubeSatACS_B.Product =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0];

          /* UnaryMinus: '<S137>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[1];

          /* Product: '<S155>/Product1' */
          asbCubeSatACS_B.Product1 = asbCubeSatACS_B.UnaryMinus *
            asbCubeSatACS_B.UnaryMinus;

          /* UnaryMinus: '<S137>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1 =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[2];

          /* Product: '<S155>/Product2' */
          asbCubeSatACS_B.Product2 = asbCubeSatACS_B.UnaryMinus1 *
            asbCubeSatACS_B.UnaryMinus1;

          /* UnaryMinus: '<S137>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2 =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[3];

          /* Product: '<S155>/Product3' */
          asbCubeSatACS_B.Product3 = asbCubeSatACS_B.UnaryMinus2 *
            asbCubeSatACS_B.UnaryMinus2;

          /* Sum: '<S155>/Sum' */
          asbCubeSatACS_B.Sum_p = ((asbCubeSatACS_B.Product +
            asbCubeSatACS_B.Product1) + asbCubeSatACS_B.Product2) +
            asbCubeSatACS_B.Product3;

          /* Sqrt: '<S154>/sqrt' */
          asbCubeSatACS_B.sqrt_f = std::sqrt(asbCubeSatACS_B.Sum_p);

          /* Product: '<S153>/Product' */
          asbCubeSatACS_B.Product_h =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] /
            asbCubeSatACS_B.sqrt_f;

          /* Product: '<S151>/Product' */
          asbCubeSatACS_B.Product_g = asbCubeSatACS_B.Product_h *
            asbCubeSatACS_B.Product_h;

          /* Product: '<S153>/Product1' */
          asbCubeSatACS_B.Product1_g = asbCubeSatACS_B.UnaryMinus /
            asbCubeSatACS_B.sqrt_f;

          /* UnaryMinus: '<S152>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus_l = -asbCubeSatACS_B.Product1_g;

          /* Product: '<S151>/Product1' */
          asbCubeSatACS_B.Product1_gj = asbCubeSatACS_B.UnaryMinus_l *
            asbCubeSatACS_B.UnaryMinus_l;

          /* Product: '<S153>/Product2' */
          asbCubeSatACS_B.Product2_e = asbCubeSatACS_B.UnaryMinus1 /
            asbCubeSatACS_B.sqrt_f;

          /* UnaryMinus: '<S152>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1_j = -asbCubeSatACS_B.Product2_e;

          /* Product: '<S151>/Product2' */
          asbCubeSatACS_B.Product2_o = asbCubeSatACS_B.UnaryMinus1_j *
            asbCubeSatACS_B.UnaryMinus1_j;

          /* Product: '<S153>/Product3' */
          asbCubeSatACS_B.Product3_e = asbCubeSatACS_B.UnaryMinus2 /
            asbCubeSatACS_B.sqrt_f;

          /* UnaryMinus: '<S152>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2_m = -asbCubeSatACS_B.Product3_e;

          /* Product: '<S151>/Product3' */
          asbCubeSatACS_B.Product3_d = asbCubeSatACS_B.UnaryMinus2_m *
            asbCubeSatACS_B.UnaryMinus2_m;

          /* Sum: '<S151>/Sum' */
          asbCubeSatACS_B.Sum_n = ((asbCubeSatACS_B.Product_g +
            asbCubeSatACS_B.Product1_gj) + asbCubeSatACS_B.Product2_o) +
            asbCubeSatACS_B.Product3_d;

          /* Sqrt: '<S150>/sqrt' */
          asbCubeSatACS_B.sqrt_o = std::sqrt(asbCubeSatACS_B.Sum_n);

          /* Product: '<S146>/Product' */
          asbCubeSatACS_B.Product_m = asbCubeSatACS_B.Product_h /
            asbCubeSatACS_B.sqrt_o;

          /* Product: '<S146>/Product1' */
          asbCubeSatACS_B.Product1_l = asbCubeSatACS_B.UnaryMinus_l /
            asbCubeSatACS_B.sqrt_o;

          /* Product: '<S146>/Product2' */
          asbCubeSatACS_B.Product2_g = asbCubeSatACS_B.UnaryMinus1_j /
            asbCubeSatACS_B.sqrt_o;

          /* Product: '<S146>/Product3' */
          asbCubeSatACS_B.Product3_c = asbCubeSatACS_B.UnaryMinus2_m /
            asbCubeSatACS_B.sqrt_o;

          /* Product: '<S147>/Product' */
          asbCubeSatACS_B.Product_hp = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product2_g;

          /* Product: '<S147>/Product1' */
          asbCubeSatACS_B.Product1_n = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S147>/Sum1' */
          asbCubeSatACS_B.Sum1 = asbCubeSatACS_B.Product_hp +
            asbCubeSatACS_B.Product1_n;

          /* Gain: '<S147>/Gain' */
          asbCubeSatACS_B.Gain = 2.0 * asbCubeSatACS_B.Sum1;

          /* Product: '<S147>/Product2' */
          asbCubeSatACS_B.Product2_k = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product2_g;

          /* Product: '<S147>/Product3' */
          asbCubeSatACS_B.Product3_p = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S147>/Sum2' */
          asbCubeSatACS_B.Sum2 = asbCubeSatACS_B.Product3_p -
            asbCubeSatACS_B.Product2_k;

          /* Gain: '<S147>/Gain1' */
          asbCubeSatACS_B.Gain1 = 2.0 * asbCubeSatACS_B.Sum2;

          /* Product: '<S147>/Product6' */
          asbCubeSatACS_B.Product6 = asbCubeSatACS_B.Product2_g *
            asbCubeSatACS_B.Product2_g;

          /* Product: '<S147>/Product7' */
          asbCubeSatACS_B.Product7 = asbCubeSatACS_B.Product3_c *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S147>/Sum3' incorporates:
           *  Constant: '<S147>/Constant'
           */
          asbCubeSatACS_B.Sum3 = (0.5 - asbCubeSatACS_B.Product6) -
            asbCubeSatACS_B.Product7;

          /* Gain: '<S147>/Gain2' */
          asbCubeSatACS_B.Gain2 = 2.0 * asbCubeSatACS_B.Sum3;

          /* Product: '<S147>/Product4' */
          asbCubeSatACS_B.Product4 = asbCubeSatACS_B.Gain *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

          /* Product: '<S147>/Product5' */
          asbCubeSatACS_B.Product5 = asbCubeSatACS_B.Gain1 *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

          /* Product: '<S147>/Product8' */
          asbCubeSatACS_B.Product8 =
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
            asbCubeSatACS_B.Gain2;

          /* Sum: '<S147>/Sum' */
          asbCubeSatACS_B.Sum_l = (asbCubeSatACS_B.Product8 +
            asbCubeSatACS_B.Product4) + asbCubeSatACS_B.Product5;

          /* Product: '<S148>/Product' */
          asbCubeSatACS_B.Product_gr = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product2_g;

          /* Product: '<S148>/Product1' */
          asbCubeSatACS_B.Product1_ls = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S148>/Sum1' */
          asbCubeSatACS_B.Sum1_d = asbCubeSatACS_B.Product_gr -
            asbCubeSatACS_B.Product1_ls;

          /* Gain: '<S148>/Gain' */
          asbCubeSatACS_B.Gain_g = 2.0 * asbCubeSatACS_B.Sum1_d;

          /* Product: '<S148>/Product2' */
          asbCubeSatACS_B.Product2_l = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product1_l;

          /* Product: '<S148>/Product3' */
          asbCubeSatACS_B.Product3_j = asbCubeSatACS_B.Product2_g *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S148>/Sum2' */
          asbCubeSatACS_B.Sum2_e = asbCubeSatACS_B.Product2_l +
            asbCubeSatACS_B.Product3_j;

          /* Gain: '<S148>/Gain1' */
          asbCubeSatACS_B.Gain1_p = 2.0 * asbCubeSatACS_B.Sum2_e;

          /* Product: '<S148>/Product6' */
          asbCubeSatACS_B.Product6_k = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product1_l;

          /* Product: '<S148>/Product7' */
          asbCubeSatACS_B.Product7_n = asbCubeSatACS_B.Product3_c *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S148>/Sum3' incorporates:
           *  Constant: '<S148>/Constant'
           */
          asbCubeSatACS_B.Sum3_k = (0.5 - asbCubeSatACS_B.Product6_k) -
            asbCubeSatACS_B.Product7_n;

          /* Gain: '<S148>/Gain2' */
          asbCubeSatACS_B.Gain2_l = 2.0 * asbCubeSatACS_B.Sum3_k;

          /* Product: '<S148>/Product4' */
          asbCubeSatACS_B.Product4_m =
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
            asbCubeSatACS_B.Gain_g;

          /* Product: '<S148>/Product5' */
          asbCubeSatACS_B.Product5_i = asbCubeSatACS_B.Gain1_p *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

          /* Product: '<S148>/Product8' */
          asbCubeSatACS_B.Product8_a = asbCubeSatACS_B.Gain2_l *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

          /* Sum: '<S148>/Sum' */
          asbCubeSatACS_B.Sum_m = (asbCubeSatACS_B.Product4_m +
            asbCubeSatACS_B.Product8_a) + asbCubeSatACS_B.Product5_i;

          /* Product: '<S149>/Product' */
          asbCubeSatACS_B.Product_h0 = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product3_c;

          /* Product: '<S149>/Product1' */
          asbCubeSatACS_B.Product1_i = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product2_g;

          /* Sum: '<S149>/Sum1' */
          asbCubeSatACS_B.Sum1_p = asbCubeSatACS_B.Product_h0 +
            asbCubeSatACS_B.Product1_i;

          /* Gain: '<S149>/Gain' */
          asbCubeSatACS_B.Gain_i = 2.0 * asbCubeSatACS_B.Sum1_p;

          /* Product: '<S149>/Product2' */
          asbCubeSatACS_B.Product2_ep = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product1_l;

          /* Product: '<S149>/Product3' */
          asbCubeSatACS_B.Product3_dl = asbCubeSatACS_B.Product2_g *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S149>/Sum2' */
          asbCubeSatACS_B.Sum2_p = asbCubeSatACS_B.Product3_dl -
            asbCubeSatACS_B.Product2_ep;

          /* Gain: '<S149>/Gain1' */
          asbCubeSatACS_B.Gain1_j = 2.0 * asbCubeSatACS_B.Sum2_p;

          /* Product: '<S149>/Product6' */
          asbCubeSatACS_B.Product6_n = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product1_l;

          /* Product: '<S149>/Product7' */
          asbCubeSatACS_B.Product7_k = asbCubeSatACS_B.Product2_g *
            asbCubeSatACS_B.Product2_g;

          /* Sum: '<S149>/Sum3' incorporates:
           *  Constant: '<S149>/Constant'
           */
          asbCubeSatACS_B.Sum3_m = (0.5 - asbCubeSatACS_B.Product6_n) -
            asbCubeSatACS_B.Product7_k;

          /* Gain: '<S149>/Gain2' */
          asbCubeSatACS_B.Gain2_p = 2.0 * asbCubeSatACS_B.Sum3_m;

          /* Product: '<S149>/Product4' */
          asbCubeSatACS_B.Product4_l =
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
            asbCubeSatACS_B.Gain_i;

          /* Product: '<S149>/Product5' */
          asbCubeSatACS_B.Product5_n = asbCubeSatACS_B.Gain1_j *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

          /* Product: '<S149>/Product8' */
          asbCubeSatACS_B.Product8_g = asbCubeSatACS_B.Gain2_p *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

          /* Sum: '<S149>/Sum' */
          asbCubeSatACS_B.Sum_e = (asbCubeSatACS_B.Product4_l +
            asbCubeSatACS_B.Product5_n) + asbCubeSatACS_B.Product8_g;

          /* If: '<S156>/If' */
          if (asbCubeSatACS_ConstB.Abs < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
             *  ActionPort: '<S166>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge);

            /* End of Outputs for SubSystem: '<S156>/If Action Subsystem' */
          } else if (asbCubeSatACS_ConstB.Abs1 < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S167>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge);

            /* End of Outputs for SubSystem: '<S156>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S168>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge);

            /* End of Outputs for SubSystem: '<S156>/If Action Subsystem2' */
          }

          /* SignalConversion generated from: '<S157>/Dot Product1' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0] =
            asbCubeSatACS_B.Sum_l;
          asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1] =
            asbCubeSatACS_B.Sum_m;
          asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2] =
            asbCubeSatACS_B.Sum_e;

          /* Product: '<S233>/Product' */
          asbCubeSatACS_B.Product_hi = asbCubeSatACS_B.Product_h *
            asbCubeSatACS_B.Product_h;

          /* Product: '<S233>/Product1' */
          asbCubeSatACS_B.Product1_a = asbCubeSatACS_B.UnaryMinus_l *
            asbCubeSatACS_B.UnaryMinus_l;

          /* Product: '<S233>/Product2' */
          asbCubeSatACS_B.Product2_a = asbCubeSatACS_B.UnaryMinus1_j *
            asbCubeSatACS_B.UnaryMinus1_j;

          /* Product: '<S233>/Product3' */
          asbCubeSatACS_B.Product3_eh = asbCubeSatACS_B.UnaryMinus2_m *
            asbCubeSatACS_B.UnaryMinus2_m;

          /* Sum: '<S233>/Sum' */
          asbCubeSatACS_B.Sum_f = ((asbCubeSatACS_B.Product_hi +
            asbCubeSatACS_B.Product1_a) + asbCubeSatACS_B.Product2_a) +
            asbCubeSatACS_B.Product3_eh;

          /* Sqrt: '<S232>/sqrt' */
          asbCubeSatACS_B.sqrt_l = std::sqrt(asbCubeSatACS_B.Sum_f);

          /* Product: '<S228>/Product2' */
          asbCubeSatACS_B.Product2_o4 = asbCubeSatACS_B.UnaryMinus1_j /
            asbCubeSatACS_B.sqrt_l;

          /* Product: '<S229>/Product6' */
          asbCubeSatACS_B.Product6_i = asbCubeSatACS_B.Product2_o4 *
            asbCubeSatACS_B.Product2_o4;

          /* Product: '<S228>/Product3' */
          asbCubeSatACS_B.Product3_h = asbCubeSatACS_B.UnaryMinus2_m /
            asbCubeSatACS_B.sqrt_l;

          /* Product: '<S229>/Product7' */
          asbCubeSatACS_B.Product7_c = asbCubeSatACS_B.Product3_h *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S229>/Sum3' incorporates:
           *  Constant: '<S229>/Constant'
           */
          asbCubeSatACS_B.Sum3_h = (0.5 - asbCubeSatACS_B.Product6_i) -
            asbCubeSatACS_B.Product7_c;

          /* Gain: '<S229>/Gain2' */
          asbCubeSatACS_B.Gain2_k = 2.0 * asbCubeSatACS_B.Sum3_h;

          /* Product: '<S229>/Product8' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product8_p = 0.0 * asbCubeSatACS_B.Gain2_k;

          /* Product: '<S228>/Product1' */
          asbCubeSatACS_B.Product1_f = asbCubeSatACS_B.UnaryMinus_l /
            asbCubeSatACS_B.sqrt_l;

          /* Product: '<S229>/Product' */
          asbCubeSatACS_B.Product_f = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product2_o4;

          /* Product: '<S228>/Product' */
          asbCubeSatACS_B.Product_e = asbCubeSatACS_B.Product_h /
            asbCubeSatACS_B.sqrt_l;

          /* Product: '<S229>/Product1' */
          asbCubeSatACS_B.Product1_iz = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S229>/Sum1' */
          asbCubeSatACS_B.Sum1_c = asbCubeSatACS_B.Product_f +
            asbCubeSatACS_B.Product1_iz;

          /* Gain: '<S229>/Gain' */
          asbCubeSatACS_B.Gain_b = 2.0 * asbCubeSatACS_B.Sum1_c;

          /* Product: '<S229>/Product4' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_c = asbCubeSatACS_B.Gain_b * 0.0;

          /* Product: '<S229>/Product2' */
          asbCubeSatACS_B.Product2_m = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product2_o4;

          /* Product: '<S229>/Product3' */
          asbCubeSatACS_B.Product3_a = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S229>/Sum2' */
          asbCubeSatACS_B.Sum2_l = asbCubeSatACS_B.Product3_a -
            asbCubeSatACS_B.Product2_m;

          /* Gain: '<S229>/Gain1' */
          asbCubeSatACS_B.Gain1_i = 2.0 * asbCubeSatACS_B.Sum2_l;

          /* Product: '<S229>/Product5' */
          asbCubeSatACS_B.Product5_g = asbCubeSatACS_B.Gain1_i;

          /* Sum: '<S229>/Sum' */
          asbCubeSatACS_B.Sum_o = (asbCubeSatACS_B.Product8_p +
            asbCubeSatACS_B.Product4_c) + asbCubeSatACS_B.Product5_g;

          /* Product: '<S230>/Product' */
          asbCubeSatACS_B.Product_f0 = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product2_o4;

          /* Product: '<S230>/Product1' */
          asbCubeSatACS_B.Product1_m = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S230>/Sum1' */
          asbCubeSatACS_B.Sum1_n = asbCubeSatACS_B.Product_f0 -
            asbCubeSatACS_B.Product1_m;

          /* Gain: '<S230>/Gain' */
          asbCubeSatACS_B.Gain_a = 2.0 * asbCubeSatACS_B.Sum1_n;

          /* Product: '<S230>/Product4' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_g = 0.0 * asbCubeSatACS_B.Gain_a;

          /* Product: '<S230>/Product6' */
          asbCubeSatACS_B.Product6_h = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product1_f;

          /* Product: '<S230>/Product7' */
          asbCubeSatACS_B.Product7_f = asbCubeSatACS_B.Product3_h *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S230>/Sum3' incorporates:
           *  Constant: '<S230>/Constant'
           */
          asbCubeSatACS_B.Sum3_i = (0.5 - asbCubeSatACS_B.Product6_h) -
            asbCubeSatACS_B.Product7_f;

          /* Gain: '<S230>/Gain2' */
          asbCubeSatACS_B.Gain2_b = 2.0 * asbCubeSatACS_B.Sum3_i;

          /* Product: '<S230>/Product8' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product8_o = asbCubeSatACS_B.Gain2_b * 0.0;

          /* Product: '<S230>/Product2' */
          asbCubeSatACS_B.Product2_ak = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product1_f;

          /* Product: '<S230>/Product3' */
          asbCubeSatACS_B.Product3_as = asbCubeSatACS_B.Product2_o4 *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S230>/Sum2' */
          asbCubeSatACS_B.Sum2_ls = asbCubeSatACS_B.Product2_ak +
            asbCubeSatACS_B.Product3_as;

          /* Gain: '<S230>/Gain1' */
          asbCubeSatACS_B.Gain1_d = 2.0 * asbCubeSatACS_B.Sum2_ls;

          /* Product: '<S230>/Product5' */
          asbCubeSatACS_B.Product5_j = asbCubeSatACS_B.Gain1_d;

          /* Sum: '<S230>/Sum' */
          asbCubeSatACS_B.Sum_k = (asbCubeSatACS_B.Product4_g +
            asbCubeSatACS_B.Product8_o) + asbCubeSatACS_B.Product5_j;

          /* Product: '<S231>/Product' */
          asbCubeSatACS_B.Product_n = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product3_h;

          /* Product: '<S231>/Product1' */
          asbCubeSatACS_B.Product1_o = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product2_o4;

          /* Sum: '<S231>/Sum1' */
          asbCubeSatACS_B.Sum1_j = asbCubeSatACS_B.Product_n +
            asbCubeSatACS_B.Product1_o;

          /* Gain: '<S231>/Gain' */
          asbCubeSatACS_B.Gain_iw = 2.0 * asbCubeSatACS_B.Sum1_j;

          /* Product: '<S231>/Product4' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_a = 0.0 * asbCubeSatACS_B.Gain_iw;

          /* Product: '<S231>/Product2' */
          asbCubeSatACS_B.Product2_n = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product1_f;

          /* Product: '<S231>/Product3' */
          asbCubeSatACS_B.Product3_n = asbCubeSatACS_B.Product2_o4 *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S231>/Sum2' */
          asbCubeSatACS_B.Sum2_k = asbCubeSatACS_B.Product3_n -
            asbCubeSatACS_B.Product2_n;

          /* Gain: '<S231>/Gain1' */
          asbCubeSatACS_B.Gain1_io = 2.0 * asbCubeSatACS_B.Sum2_k;

          /* Product: '<S231>/Product5' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product5_m = asbCubeSatACS_B.Gain1_io * 0.0;

          /* Product: '<S231>/Product6' */
          asbCubeSatACS_B.Product6_j = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product1_f;

          /* Product: '<S231>/Product7' */
          asbCubeSatACS_B.Product7_h = asbCubeSatACS_B.Product2_o4 *
            asbCubeSatACS_B.Product2_o4;

          /* Sum: '<S231>/Sum3' incorporates:
           *  Constant: '<S231>/Constant'
           */
          asbCubeSatACS_B.Sum3_f = (0.5 - asbCubeSatACS_B.Product6_j) -
            asbCubeSatACS_B.Product7_h;

          /* Gain: '<S231>/Gain2' */
          asbCubeSatACS_B.Gain2_c = 2.0 * asbCubeSatACS_B.Sum3_f;

          /* Product: '<S231>/Product8' */
          asbCubeSatACS_B.Product8_e = asbCubeSatACS_B.Gain2_c;

          /* Sum: '<S231>/Sum' */
          asbCubeSatACS_B.Sum_nm = (asbCubeSatACS_B.Product4_a +
            asbCubeSatACS_B.Product5_m) + asbCubeSatACS_B.Product8_e;

          /* SignalConversion generated from: '<S157>/Dot Product2' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[0] =
            asbCubeSatACS_B.Sum_o;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[1] =
            asbCubeSatACS_B.Sum_k;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[2] =
            asbCubeSatACS_B.Sum_nm;

          /* DotProduct: '<S157>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[0];
          tmp_0 = u0 * u;

          /* DotProduct: '<S157>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          tmp_2 = u0 * u;

          /* DotProduct: '<S157>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[0];
          tmp_3 = u0 * u;

          /* DotProduct: '<S157>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[1];
          tmp_0 += u0 * u;

          /* DotProduct: '<S157>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          tmp_2 += u0 * u;

          /* DotProduct: '<S157>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[1];
          tmp_3 += u0 * u;

          /* DotProduct: '<S157>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[2];
          tmp_0 += u0 * u;

          /* DotProduct: '<S157>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          tmp_2 += u0 * u;

          /* DotProduct: '<S157>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[2];
          tmp_3 += u0 * u;

          /* DotProduct: '<S157>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3 = tmp_0;

          /* DotProduct: '<S157>/Dot Product1' */
          asbCubeSatACS_B.DotProduct1 = tmp_2;

          /* DotProduct: '<S157>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2 = tmp_3;

          /* Product: '<S157>/Divide1' */
          asbCubeSatACS_B.Divide1 = asbCubeSatACS_B.DotProduct1 *
            asbCubeSatACS_B.DotProduct2;

          /* Sqrt: '<S157>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3 = std::sqrt(asbCubeSatACS_B.Divide1);

          /* Product: '<S157>/Divide' */
          asbCubeSatACS_B.Divide = asbCubeSatACS_B.DotProduct3 /
            asbCubeSatACS_B.Sqrt3;

          /* Bias: '<S157>/Bias' */
          asbCubeSatACS_B.Bias = asbCubeSatACS_B.Divide + -1.0;

          /* Abs: '<S157>/Abs' */
          asbCubeSatACS_B.Abs = std::abs(asbCubeSatACS_B.Bias);

          /* Bias: '<S157>/Bias1' */
          asbCubeSatACS_B.Bias1 = asbCubeSatACS_B.Divide + 1.0;

          /* Abs: '<S157>/Abs1' */
          asbCubeSatACS_B.Abs1 = std::abs(asbCubeSatACS_B.Bias1);

          /* If: '<S157>/If' */
          if (asbCubeSatACS_B.Abs < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
             *  ActionPort: '<S169>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_b);

            /* End of Outputs for SubSystem: '<S157>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1 < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S170>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_b);

            /* End of Outputs for SubSystem: '<S157>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S171>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_b);

            /* End of Outputs for SubSystem: '<S157>/If Action Subsystem2' */
          }

          /* RelationalOperator: '<S158>/Compare' incorporates:
           *  Constant: '<S158>/Constant'
           */
          asbCubeSatACS_B.Compare = (asbCubeSatACS_B.Merge != 0.0);

          /* RelationalOperator: '<S159>/Compare' incorporates:
           *  Constant: '<S159>/Constant'
           */
          asbCubeSatACS_B.Compare_c = (asbCubeSatACS_B.Merge_b != 0.0);

          /* Logic: '<S141>/OR' */
          asbCubeSatACS_B.OR = (asbCubeSatACS_B.Compare ||
                                asbCubeSatACS_B.Compare_c);

          /* DotProduct: '<S162>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u = 0.0 * u0;

          /* DotProduct: '<S162>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          tmp_2 = tmp_0 * u0;

          /* DotProduct: '<S183>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          tmp_3 = 0.0 * u0;

          /* DotProduct: '<S183>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          tmp_4 = tmp_0 * u0;

          /* DotProduct: '<S162>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u += 0.0 * u0;

          /* DotProduct: '<S162>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          tmp_2 += tmp_0 * u0;

          /* DotProduct: '<S183>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          tmp_3 += 0.0 * u0;

          /* DotProduct: '<S183>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          tmp_4 += tmp_0 * u0;

          /* DotProduct: '<S162>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u += -u0;

          /* DotProduct: '<S162>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          tmp_2 += tmp_0 * u0;

          /* DotProduct: '<S183>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          tmp_3 += -u0;

          /* DotProduct: '<S183>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          tmp_4 += tmp_0 * u0;

          /* DotProduct: '<S162>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_h = u;

          /* DotProduct: '<S162>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_a = tmp_2;

          /* Product: '<S162>/Divide1' */
          asbCubeSatACS_B.Divide1_a = asbCubeSatACS_ConstB.DotProduct1_l *
            asbCubeSatACS_B.DotProduct2_a;

          /* Sqrt: '<S162>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_k = std::sqrt(asbCubeSatACS_B.Divide1_a);

          /* Sum: '<S162>/Add2' */
          asbCubeSatACS_B.Add2 = asbCubeSatACS_B.DotProduct3_h +
            asbCubeSatACS_B.Sqrt3_k;

          /* Product: '<S196>/Product' */
          asbCubeSatACS_B.Product_g0 = asbCubeSatACS_B.Add2 *
            asbCubeSatACS_B.Add2;

          /* DotProduct: '<S183>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_k = tmp_3;

          /* DotProduct: '<S183>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_g = tmp_4;

          /* Product: '<S183>/Divide1' */
          asbCubeSatACS_B.Divide1_e = asbCubeSatACS_ConstB.DotProduct1_f *
            asbCubeSatACS_B.DotProduct2_g;

          /* Sqrt: '<S183>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_f = std::sqrt(asbCubeSatACS_B.Divide1_e);

          /* Product: '<S183>/Divide' */
          asbCubeSatACS_B.Divide_c = asbCubeSatACS_B.DotProduct3_k /
            asbCubeSatACS_B.Sqrt3_f;

          /* Bias: '<S183>/Bias' */
          asbCubeSatACS_B.Bias_l = asbCubeSatACS_B.Divide_c + -1.0;

          /* Abs: '<S183>/Abs' */
          asbCubeSatACS_B.Abs_n = std::abs(asbCubeSatACS_B.Bias_l);

          /* Bias: '<S183>/Bias1' */
          asbCubeSatACS_B.Bias1_f = asbCubeSatACS_B.Divide_c + 1.0;

          /* Abs: '<S183>/Abs1' */
          asbCubeSatACS_B.Abs1_p = std::abs(asbCubeSatACS_B.Bias1_f);

          /* If: '<S183>/If' */
          if (asbCubeSatACS_B.Abs_n < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
             *  ActionPort: '<S189>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_d);

            /* End of Outputs for SubSystem: '<S183>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_p < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S190>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_d);

            /* End of Outputs for SubSystem: '<S183>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S191>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_d);

            /* End of Outputs for SubSystem: '<S183>/If Action Subsystem2' */
          }

          /* RelationalOperator: '<S184>/Compare' incorporates:
           *  Constant: '<S184>/Constant'
           */
          asbCubeSatACS_B.Compare_m = (asbCubeSatACS_B.Merge_d != -1.0);

          /* Switch: '<S162>/is 180deg Rot' */
          if (asbCubeSatACS_B.Compare_m) {
            /* Product: '<S188>/j x i' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             */
            asbCubeSatACS_B.jxi_a = 0.0 * asbCubeSatACS_B.Sum_l;

            /* Product: '<S188>/i x k' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             */
            asbCubeSatACS_B.ixk_o = 0.0 * asbCubeSatACS_B.Sum_e;

            /* Product: '<S188>/k x j' */
            asbCubeSatACS_B.kxj_j = -asbCubeSatACS_B.Sum_m;

            /* Product: '<S187>/i x j' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             */
            asbCubeSatACS_B.ixj_l = 0.0 * asbCubeSatACS_B.Sum_m;

            /* Product: '<S187>/k x i' */
            asbCubeSatACS_B.kxi_n = -asbCubeSatACS_B.Sum_l;

            /* Product: '<S187>/j x k' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             */
            asbCubeSatACS_B.jxk_n = 0.0 * asbCubeSatACS_B.Sum_e;

            /* Sum: '<S182>/Sum' */
            asbCubeSatACS_B.Sum_d[0] = asbCubeSatACS_B.jxk_n -
              asbCubeSatACS_B.kxj_j;
            asbCubeSatACS_B.Sum_d[1] = asbCubeSatACS_B.kxi_n -
              asbCubeSatACS_B.ixk_o;
            asbCubeSatACS_B.Sum_d[2] = asbCubeSatACS_B.ixj_l -
              asbCubeSatACS_B.jxi_a;

            /* Switch: '<S162>/is 180deg Rot' */
            asbCubeSatACS_B.is180degRot[0] = asbCubeSatACS_B.Sum_d[0];
            asbCubeSatACS_B.is180degRot[1] = asbCubeSatACS_B.Sum_d[1];
            asbCubeSatACS_B.is180degRot[2] = asbCubeSatACS_B.Sum_d[2];
          } else {
            /* Switch: '<S162>/is 180deg Rot' */
            asbCubeSatACS_B.is180degRot[0] = asbCubeSatACS_ConstB.Sum[0];
            asbCubeSatACS_B.is180degRot[1] = asbCubeSatACS_ConstB.Sum[1];
            asbCubeSatACS_B.is180degRot[2] = asbCubeSatACS_ConstB.Sum[2];
          }

          /* Product: '<S196>/Product1' */
          asbCubeSatACS_B.Product1_lm = asbCubeSatACS_B.is180degRot[0] *
            asbCubeSatACS_B.is180degRot[0];

          /* Product: '<S196>/Product2' */
          asbCubeSatACS_B.Product2_n1 = asbCubeSatACS_B.is180degRot[1] *
            asbCubeSatACS_B.is180degRot[1];

          /* Product: '<S196>/Product3' */
          asbCubeSatACS_B.Product3_cn = asbCubeSatACS_B.is180degRot[2] *
            asbCubeSatACS_B.is180degRot[2];

          /* Sum: '<S196>/Sum' */
          asbCubeSatACS_B.Sum_oe = ((asbCubeSatACS_B.Product_g0 +
            asbCubeSatACS_B.Product1_lm) + asbCubeSatACS_B.Product2_n1) +
            asbCubeSatACS_B.Product3_cn;

          /* Sqrt: '<S195>/sqrt' */
          asbCubeSatACS_B.sqrt_e = std::sqrt(asbCubeSatACS_B.Sum_oe);

          /* Product: '<S186>/Product' */
          asbCubeSatACS_B.Product_i = asbCubeSatACS_B.Add2 /
            asbCubeSatACS_B.sqrt_e;

          /* Product: '<S220>/j x k' */
          asbCubeSatACS_B.jxk = asbCubeSatACS_B.Sum_m * asbCubeSatACS_B.Sum_nm;

          /* Product: '<S220>/k x i' */
          asbCubeSatACS_B.kxi = asbCubeSatACS_B.Sum_e * asbCubeSatACS_B.Sum_o;

          /* Product: '<S220>/i x j' */
          asbCubeSatACS_B.ixj = asbCubeSatACS_B.Sum_l * asbCubeSatACS_B.Sum_k;

          /* Product: '<S221>/k x j' */
          asbCubeSatACS_B.kxj = asbCubeSatACS_B.Sum_e * asbCubeSatACS_B.Sum_k;

          /* Product: '<S221>/i x k' */
          asbCubeSatACS_B.ixk = asbCubeSatACS_B.Sum_l * asbCubeSatACS_B.Sum_nm;

          /* Product: '<S221>/j x i' */
          asbCubeSatACS_B.jxi = asbCubeSatACS_B.Sum_m * asbCubeSatACS_B.Sum_o;

          /* Sum: '<S218>/Sum' */
          asbCubeSatACS_B.Sum_pc[0] = asbCubeSatACS_B.jxk - asbCubeSatACS_B.kxj;
          asbCubeSatACS_B.Sum_pc[1] = asbCubeSatACS_B.kxi - asbCubeSatACS_B.ixk;
          asbCubeSatACS_B.Sum_pc[2] = asbCubeSatACS_B.ixj - asbCubeSatACS_B.jxi;

          /* Product: '<S222>/j x k' */
          asbCubeSatACS_B.jxk_o = asbCubeSatACS_B.Sum_pc[1] *
            asbCubeSatACS_B.Sum_e;

          /* Product: '<S222>/k x i' */
          asbCubeSatACS_B.kxi_c = asbCubeSatACS_B.Sum_pc[2] *
            asbCubeSatACS_B.Sum_l;

          /* Product: '<S222>/i x j' */
          asbCubeSatACS_B.ixj_g = asbCubeSatACS_B.Sum_pc[0] *
            asbCubeSatACS_B.Sum_m;

          /* Product: '<S223>/k x j' */
          asbCubeSatACS_B.kxj_k = asbCubeSatACS_B.Sum_pc[2] *
            asbCubeSatACS_B.Sum_m;

          /* Product: '<S223>/i x k' */
          asbCubeSatACS_B.ixk_b = asbCubeSatACS_B.Sum_pc[0] *
            asbCubeSatACS_B.Sum_e;

          /* Product: '<S223>/j x i' */
          asbCubeSatACS_B.jxi_n = asbCubeSatACS_B.Sum_pc[1] *
            asbCubeSatACS_B.Sum_l;

          /* Sum: '<S219>/Sum' */
          asbCubeSatACS_B.Sum_i[0] = asbCubeSatACS_B.jxk_o -
            asbCubeSatACS_B.kxj_k;
          asbCubeSatACS_B.Sum_i[1] = asbCubeSatACS_B.kxi_c -
            asbCubeSatACS_B.ixk_b;
          asbCubeSatACS_B.Sum_i[2] = asbCubeSatACS_B.ixj_g -
            asbCubeSatACS_B.jxi_n;

          /* Product: '<S186>/Product2' */
          asbCubeSatACS_B.Product2_od = asbCubeSatACS_B.is180degRot[1] /
            asbCubeSatACS_B.sqrt_e;

          /* Product: '<S181>/Product' */
          asbCubeSatACS_B.Product_mz = asbCubeSatACS_B.Product_i *
            asbCubeSatACS_B.Product_i;

          /* Product: '<S186>/Product1' */
          asbCubeSatACS_B.Product1_d = asbCubeSatACS_B.is180degRot[0] /
            asbCubeSatACS_B.sqrt_e;

          /* Product: '<S181>/Product1' */
          asbCubeSatACS_B.Product1_fo = asbCubeSatACS_B.Product1_d *
            asbCubeSatACS_B.Product1_d;

          /* Product: '<S181>/Product2' */
          asbCubeSatACS_B.Product2_os = asbCubeSatACS_B.Product2_od *
            asbCubeSatACS_B.Product2_od;

          /* Product: '<S186>/Product3' */
          asbCubeSatACS_B.Product3_d2 = asbCubeSatACS_B.is180degRot[2] /
            asbCubeSatACS_B.sqrt_e;

          /* Product: '<S181>/Product3' */
          asbCubeSatACS_B.Product3_f = asbCubeSatACS_B.Product3_d2 *
            asbCubeSatACS_B.Product3_d2;

          /* Sum: '<S181>/Sum' */
          asbCubeSatACS_B.Sum_fi = ((asbCubeSatACS_B.Product_mz +
            asbCubeSatACS_B.Product1_fo) + asbCubeSatACS_B.Product2_os) +
            asbCubeSatACS_B.Product3_f;

          /* Sqrt: '<S180>/sqrt' */
          asbCubeSatACS_B.sqrt_e2 = std::sqrt(asbCubeSatACS_B.Sum_fi);

          /* Product: '<S176>/Product2' */
          asbCubeSatACS_B.Product2_at = asbCubeSatACS_B.Product2_od /
            asbCubeSatACS_B.sqrt_e2;

          /* Product: '<S177>/Product6' */
          asbCubeSatACS_B.Product6_c = asbCubeSatACS_B.Product2_at *
            asbCubeSatACS_B.Product2_at;

          /* Product: '<S176>/Product3' */
          asbCubeSatACS_B.Product3_b = asbCubeSatACS_B.Product3_d2 /
            asbCubeSatACS_B.sqrt_e2;

          /* Product: '<S177>/Product7' */
          asbCubeSatACS_B.Product7_cz = asbCubeSatACS_B.Product3_b *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S177>/Sum3' incorporates:
           *  Constant: '<S177>/Constant'
           */
          asbCubeSatACS_B.Sum3_b = (0.5 - asbCubeSatACS_B.Product6_c) -
            asbCubeSatACS_B.Product7_cz;

          /* Gain: '<S177>/Gain2' */
          asbCubeSatACS_B.Gain2_ce = 2.0 * asbCubeSatACS_B.Sum3_b;

          /* Product: '<S177>/Product8' */
          asbCubeSatACS_B.Product8_pp = asbCubeSatACS_B.Sum_i[0] *
            asbCubeSatACS_B.Gain2_ce;

          /* Product: '<S176>/Product1' */
          asbCubeSatACS_B.Product1_j = asbCubeSatACS_B.Product1_d /
            asbCubeSatACS_B.sqrt_e2;

          /* Product: '<S177>/Product' */
          asbCubeSatACS_B.Product_p = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product2_at;

          /* Product: '<S176>/Product' */
          asbCubeSatACS_B.Product_d = asbCubeSatACS_B.Product_i /
            asbCubeSatACS_B.sqrt_e2;

          /* Product: '<S177>/Product1' */
          asbCubeSatACS_B.Product1_ji = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S177>/Sum1' */
          asbCubeSatACS_B.Sum1_a = asbCubeSatACS_B.Product_p +
            asbCubeSatACS_B.Product1_ji;

          /* Gain: '<S177>/Gain' */
          asbCubeSatACS_B.Gain_n = 2.0 * asbCubeSatACS_B.Sum1_a;

          /* Product: '<S177>/Product4' */
          asbCubeSatACS_B.Product4_p = asbCubeSatACS_B.Gain_n *
            asbCubeSatACS_B.Sum_i[1];

          /* Product: '<S177>/Product2' */
          asbCubeSatACS_B.Product2_am = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product2_at;

          /* Product: '<S177>/Product3' */
          asbCubeSatACS_B.Product3_jh = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S177>/Sum2' */
          asbCubeSatACS_B.Sum2_c = asbCubeSatACS_B.Product3_jh -
            asbCubeSatACS_B.Product2_am;

          /* Gain: '<S177>/Gain1' */
          asbCubeSatACS_B.Gain1_c = 2.0 * asbCubeSatACS_B.Sum2_c;

          /* Product: '<S177>/Product5' */
          asbCubeSatACS_B.Product5_b = asbCubeSatACS_B.Gain1_c *
            asbCubeSatACS_B.Sum_i[2];

          /* Sum: '<S177>/Sum' */
          asbCubeSatACS_B.Sum_j = (asbCubeSatACS_B.Product8_pp +
            asbCubeSatACS_B.Product4_p) + asbCubeSatACS_B.Product5_b;

          /* Product: '<S178>/Product' */
          asbCubeSatACS_B.Product_b = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product2_at;

          /* Product: '<S178>/Product1' */
          asbCubeSatACS_B.Product1_mo = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S178>/Sum1' */
          asbCubeSatACS_B.Sum1_pk = asbCubeSatACS_B.Product_b -
            asbCubeSatACS_B.Product1_mo;

          /* Gain: '<S178>/Gain' */
          asbCubeSatACS_B.Gain_l = 2.0 * asbCubeSatACS_B.Sum1_pk;

          /* Product: '<S178>/Product4' */
          asbCubeSatACS_B.Product4_h = asbCubeSatACS_B.Sum_i[0] *
            asbCubeSatACS_B.Gain_l;

          /* Product: '<S178>/Product6' */
          asbCubeSatACS_B.Product6_kv = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product1_j;

          /* Product: '<S178>/Product7' */
          asbCubeSatACS_B.Product7_m = asbCubeSatACS_B.Product3_b *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S178>/Sum3' incorporates:
           *  Constant: '<S178>/Constant'
           */
          asbCubeSatACS_B.Sum3_d = (0.5 - asbCubeSatACS_B.Product6_kv) -
            asbCubeSatACS_B.Product7_m;

          /* Gain: '<S178>/Gain2' */
          asbCubeSatACS_B.Gain2_p0 = 2.0 * asbCubeSatACS_B.Sum3_d;

          /* Product: '<S178>/Product8' */
          asbCubeSatACS_B.Product8_j = asbCubeSatACS_B.Gain2_p0 *
            asbCubeSatACS_B.Sum_i[1];

          /* Product: '<S178>/Product2' */
          asbCubeSatACS_B.Product2_gn = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product1_j;

          /* Product: '<S178>/Product3' */
          asbCubeSatACS_B.Product3_nm = asbCubeSatACS_B.Product2_at *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S178>/Sum2' */
          asbCubeSatACS_B.Sum2_d = asbCubeSatACS_B.Product2_gn +
            asbCubeSatACS_B.Product3_nm;

          /* Gain: '<S178>/Gain1' */
          asbCubeSatACS_B.Gain1_m = 2.0 * asbCubeSatACS_B.Sum2_d;

          /* Product: '<S178>/Product5' */
          asbCubeSatACS_B.Product5_nw = asbCubeSatACS_B.Gain1_m *
            asbCubeSatACS_B.Sum_i[2];

          /* Sum: '<S178>/Sum' */
          asbCubeSatACS_B.Sum_m4 = (asbCubeSatACS_B.Product4_h +
            asbCubeSatACS_B.Product8_j) + asbCubeSatACS_B.Product5_nw;

          /* Product: '<S179>/Product' */
          asbCubeSatACS_B.Product_bs = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product3_b;

          /* Product: '<S179>/Product1' */
          asbCubeSatACS_B.Product1_ie = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product2_at;

          /* Sum: '<S179>/Sum1' */
          asbCubeSatACS_B.Sum1_b = asbCubeSatACS_B.Product_bs +
            asbCubeSatACS_B.Product1_ie;

          /* Gain: '<S179>/Gain' */
          asbCubeSatACS_B.Gain_iy = 2.0 * asbCubeSatACS_B.Sum1_b;

          /* Product: '<S179>/Product4' */
          asbCubeSatACS_B.Product4_lc = asbCubeSatACS_B.Sum_i[0] *
            asbCubeSatACS_B.Gain_iy;

          /* Product: '<S179>/Product2' */
          asbCubeSatACS_B.Product2_h = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product1_j;

          /* Product: '<S179>/Product3' */
          asbCubeSatACS_B.Product3_ev = asbCubeSatACS_B.Product2_at *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S179>/Sum2' */
          asbCubeSatACS_B.Sum2_g = asbCubeSatACS_B.Product3_ev -
            asbCubeSatACS_B.Product2_h;

          /* Gain: '<S179>/Gain1' */
          asbCubeSatACS_B.Gain1_ck = 2.0 * asbCubeSatACS_B.Sum2_g;

          /* Product: '<S179>/Product5' */
          asbCubeSatACS_B.Product5_i1 = asbCubeSatACS_B.Gain1_ck *
            asbCubeSatACS_B.Sum_i[1];

          /* Product: '<S179>/Product6' */
          asbCubeSatACS_B.Product6_b = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product1_j;

          /* Product: '<S179>/Product7' */
          asbCubeSatACS_B.Product7_hk = asbCubeSatACS_B.Product2_at *
            asbCubeSatACS_B.Product2_at;

          /* Sum: '<S179>/Sum3' incorporates:
           *  Constant: '<S179>/Constant'
           */
          asbCubeSatACS_B.Sum3_o = (0.5 - asbCubeSatACS_B.Product6_b) -
            asbCubeSatACS_B.Product7_hk;

          /* Gain: '<S179>/Gain2' */
          asbCubeSatACS_B.Gain2_d = 2.0 * asbCubeSatACS_B.Sum3_o;

          /* Product: '<S179>/Product8' */
          asbCubeSatACS_B.Product8_c = asbCubeSatACS_B.Gain2_d *
            asbCubeSatACS_B.Sum_i[2];

          /* Sum: '<S179>/Sum' */
          asbCubeSatACS_B.Sum_ld = (asbCubeSatACS_B.Product4_lc +
            asbCubeSatACS_B.Product5_i1) + asbCubeSatACS_B.Product8_c;

          /* SignalConversion generated from: '<S198>/Dot Product2' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0] =
            asbCubeSatACS_B.Sum_j;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1] =
            asbCubeSatACS_B.Sum_m4;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2] =
            asbCubeSatACS_B.Sum_ld;

          /* DotProduct: '<S198>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
          u = asbCubeSatACS_ConstB.Sum_i[0] * u0;

          /* DotProduct: '<S198>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
          tmp_2 = u0 * tmp_0;

          /* DotProduct: '<S198>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
          u += asbCubeSatACS_ConstB.Sum_i[1] * u0;

          /* DotProduct: '<S198>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
          tmp_2 += u0 * tmp_0;

          /* DotProduct: '<S198>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
          u += asbCubeSatACS_ConstB.Sum_i[2] * u0;

          /* DotProduct: '<S198>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
          tmp_2 += u0 * tmp_0;

          /* DotProduct: '<S198>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_l = u;

          /* DotProduct: '<S198>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_gh = tmp_2;

          /* Product: '<S198>/Divide1' */
          asbCubeSatACS_B.Divide1_f = asbCubeSatACS_ConstB.DotProduct1_h *
            asbCubeSatACS_B.DotProduct2_gh;

          /* Sqrt: '<S198>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_e = std::sqrt(asbCubeSatACS_B.Divide1_f);

          /* Product: '<S198>/Divide' */
          asbCubeSatACS_B.Divide_i = asbCubeSatACS_B.DotProduct3_l /
            asbCubeSatACS_B.Sqrt3_e;

          /* Bias: '<S198>/Bias' */
          asbCubeSatACS_B.Bias_b = asbCubeSatACS_B.Divide_i + -1.0;

          /* Abs: '<S198>/Abs' */
          asbCubeSatACS_B.Abs_l = std::abs(asbCubeSatACS_B.Bias_b);

          /* Bias: '<S198>/Bias1' */
          asbCubeSatACS_B.Bias1_e = asbCubeSatACS_B.Divide_i + 1.0;

          /* Abs: '<S198>/Abs1' */
          asbCubeSatACS_B.Abs1_l = std::abs(asbCubeSatACS_B.Bias1_e);

          /* If: '<S198>/If' */
          if (asbCubeSatACS_B.Abs_l < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
             *  ActionPort: '<S204>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_f);

            /* End of Outputs for SubSystem: '<S198>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_l < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S205>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_f);

            /* End of Outputs for SubSystem: '<S198>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S206>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_f);

            /* End of Outputs for SubSystem: '<S198>/If Action Subsystem2' */
          }

          /* Switch: '<S141>/Switch' */
          if (asbCubeSatACS_B.OR) {
            /* Switch: '<S141>/Switch' */
            asbCubeSatACS_B.Switch[0] = asbCubeSatACS_B.Product_i;
            asbCubeSatACS_B.Switch[1] = asbCubeSatACS_B.Product1_d;
            asbCubeSatACS_B.Switch[2] = asbCubeSatACS_B.Product2_od;
            asbCubeSatACS_B.Switch[3] = asbCubeSatACS_B.Product3_d2;
          } else {
            /* RelationalOperator: '<S199>/Compare' incorporates:
             *  Constant: '<S199>/Constant'
             */
            asbCubeSatACS_B.Compare_j = (asbCubeSatACS_B.Merge_f != -1.0);

            /* Switch: '<S163>/is 180deg Rot' */
            if (asbCubeSatACS_B.Compare_j) {
              /* Product: '<S203>/j x i' */
              asbCubeSatACS_B.jxi_d = asbCubeSatACS_ConstB.Sum_i[1] *
                asbCubeSatACS_B.Sum_j;

              /* Product: '<S203>/i x k' */
              asbCubeSatACS_B.ixk_a = asbCubeSatACS_ConstB.Sum_i[0] *
                asbCubeSatACS_B.Sum_ld;

              /* Product: '<S203>/k x j' */
              asbCubeSatACS_B.kxj_l = asbCubeSatACS_ConstB.Sum_i[2] *
                asbCubeSatACS_B.Sum_m4;

              /* Product: '<S202>/i x j' */
              asbCubeSatACS_B.ixj_k = asbCubeSatACS_ConstB.Sum_i[0] *
                asbCubeSatACS_B.Sum_m4;

              /* Product: '<S202>/k x i' */
              asbCubeSatACS_B.kxi_m = asbCubeSatACS_ConstB.Sum_i[2] *
                asbCubeSatACS_B.Sum_j;

              /* Product: '<S202>/j x k' */
              asbCubeSatACS_B.jxk_p = asbCubeSatACS_ConstB.Sum_i[1] *
                asbCubeSatACS_B.Sum_ld;

              /* Sum: '<S197>/Sum' */
              asbCubeSatACS_B.Sum_gy[0] = asbCubeSatACS_B.jxk_p -
                asbCubeSatACS_B.kxj_l;
              asbCubeSatACS_B.Sum_gy[1] = asbCubeSatACS_B.kxi_m -
                asbCubeSatACS_B.ixk_a;
              asbCubeSatACS_B.Sum_gy[2] = asbCubeSatACS_B.ixj_k -
                asbCubeSatACS_B.jxi_d;

              /* Switch: '<S163>/is 180deg Rot' */
              asbCubeSatACS_B.is180degRot_m[0] = asbCubeSatACS_B.Sum_gy[0];
              asbCubeSatACS_B.is180degRot_m[1] = asbCubeSatACS_B.Sum_gy[1];
              asbCubeSatACS_B.is180degRot_m[2] = asbCubeSatACS_B.Sum_gy[2];
            } else {
              /* Switch: '<S163>/is 180deg Rot' */
              asbCubeSatACS_B.is180degRot_m[0] = asbCubeSatACS_ConstB.Sum_iv[0];
              asbCubeSatACS_B.is180degRot_m[1] = asbCubeSatACS_ConstB.Sum_iv[1];
              asbCubeSatACS_B.is180degRot_m[2] = asbCubeSatACS_ConstB.Sum_iv[2];
            }

            /* Product: '<S211>/Product3' */
            asbCubeSatACS_B.Product3_jn = asbCubeSatACS_B.is180degRot_m[2] *
              asbCubeSatACS_B.is180degRot_m[2];

            /* Product: '<S211>/Product2' */
            asbCubeSatACS_B.Product2_nf = asbCubeSatACS_B.is180degRot_m[1] *
              asbCubeSatACS_B.is180degRot_m[1];

            /* Product: '<S211>/Product1' */
            asbCubeSatACS_B.Product1_az = asbCubeSatACS_B.is180degRot_m[0] *
              asbCubeSatACS_B.is180degRot_m[0];

            /* DotProduct: '<S163>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
            tmp_0 = u0 * u;

            /* DotProduct: '<S163>/Dot Product3' incorporates:
             *  Sum: '<S213>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
            tmp_2 = asbCubeSatACS_ConstB.Sum_i[0] * u0;

            /* DotProduct: '<S163>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
            tmp_0 += u0 * u;

            /* DotProduct: '<S163>/Dot Product3' incorporates:
             *  Sum: '<S213>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
            tmp_2 += asbCubeSatACS_ConstB.Sum_i[1] * u0;

            /* DotProduct: '<S163>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
            tmp_0 += u0 * u;

            /* DotProduct: '<S163>/Dot Product3' incorporates:
             *  Sum: '<S213>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
            tmp_2 += asbCubeSatACS_ConstB.Sum_i[2] * u0;

            /* DotProduct: '<S163>/Dot Product2' */
            asbCubeSatACS_B.DotProduct2_p = tmp_0;

            /* Product: '<S163>/Divide1' */
            asbCubeSatACS_B.Divide1_d = asbCubeSatACS_ConstB.DotProduct1_j *
              asbCubeSatACS_B.DotProduct2_p;

            /* Sqrt: '<S163>/Sqrt3' */
            asbCubeSatACS_B.Sqrt3_o = std::sqrt(asbCubeSatACS_B.Divide1_d);

            /* DotProduct: '<S163>/Dot Product3' */
            asbCubeSatACS_B.DotProduct3_j = tmp_2;

            /* Sum: '<S163>/Add2' */
            asbCubeSatACS_B.Add2_p = asbCubeSatACS_B.DotProduct3_j +
              asbCubeSatACS_B.Sqrt3_o;

            /* Product: '<S211>/Product' */
            asbCubeSatACS_B.Product_o = asbCubeSatACS_B.Add2_p *
              asbCubeSatACS_B.Add2_p;

            /* Sum: '<S211>/Sum' */
            asbCubeSatACS_B.Sum_o2 = ((asbCubeSatACS_B.Product_o +
              asbCubeSatACS_B.Product1_az) + asbCubeSatACS_B.Product2_nf) +
              asbCubeSatACS_B.Product3_jn;

            /* Sqrt: '<S210>/sqrt' */
            asbCubeSatACS_B.sqrt_ee = std::sqrt(asbCubeSatACS_B.Sum_o2);

            /* Product: '<S201>/Product3' */
            asbCubeSatACS_B.Product3_i = asbCubeSatACS_B.is180degRot_m[2] /
              asbCubeSatACS_B.sqrt_ee;

            /* Product: '<S172>/Product3' */
            asbCubeSatACS_B.Product3_jp = asbCubeSatACS_B.Product3_d2 *
              asbCubeSatACS_B.Product3_i;

            /* Product: '<S201>/Product2' */
            asbCubeSatACS_B.Product2_c = asbCubeSatACS_B.is180degRot_m[1] /
              asbCubeSatACS_B.sqrt_ee;

            /* Product: '<S172>/Product2' */
            asbCubeSatACS_B.Product2_cn = asbCubeSatACS_B.Product2_od *
              asbCubeSatACS_B.Product2_c;

            /* Product: '<S201>/Product1' */
            asbCubeSatACS_B.Product1_dr = asbCubeSatACS_B.is180degRot_m[0] /
              asbCubeSatACS_B.sqrt_ee;

            /* Product: '<S172>/Product1' */
            asbCubeSatACS_B.Product1_j4 = asbCubeSatACS_B.Product1_d *
              asbCubeSatACS_B.Product1_dr;

            /* Product: '<S201>/Product' */
            asbCubeSatACS_B.Product_or = asbCubeSatACS_B.Add2_p /
              asbCubeSatACS_B.sqrt_ee;

            /* Product: '<S172>/Product' */
            asbCubeSatACS_B.Product_c = asbCubeSatACS_B.Product_i *
              asbCubeSatACS_B.Product_or;

            /* Sum: '<S172>/Sum' */
            asbCubeSatACS_B.Sum_id = ((asbCubeSatACS_B.Product_c -
              asbCubeSatACS_B.Product1_j4) - asbCubeSatACS_B.Product2_cn) -
              asbCubeSatACS_B.Product3_jp;

            /* Product: '<S173>/Product3' */
            asbCubeSatACS_B.Product3_ic = asbCubeSatACS_B.Product3_d2 *
              asbCubeSatACS_B.Product2_c;

            /* Product: '<S173>/Product2' */
            asbCubeSatACS_B.Product2_d = asbCubeSatACS_B.Product2_od *
              asbCubeSatACS_B.Product3_i;

            /* Product: '<S173>/Product1' */
            asbCubeSatACS_B.Product1_nc = asbCubeSatACS_B.Product1_d *
              asbCubeSatACS_B.Product_or;

            /* Product: '<S173>/Product' */
            asbCubeSatACS_B.Product_k = asbCubeSatACS_B.Product_i *
              asbCubeSatACS_B.Product1_dr;

            /* Sum: '<S173>/Sum' */
            asbCubeSatACS_B.Sum_c = ((asbCubeSatACS_B.Product_k +
              asbCubeSatACS_B.Product1_nc) + asbCubeSatACS_B.Product2_d) -
              asbCubeSatACS_B.Product3_ic;

            /* Product: '<S174>/Product3' */
            asbCubeSatACS_B.Product3_ht = asbCubeSatACS_B.Product3_d2 *
              asbCubeSatACS_B.Product1_dr;

            /* Product: '<S174>/Product2' */
            asbCubeSatACS_B.Product2_mx = asbCubeSatACS_B.Product2_od *
              asbCubeSatACS_B.Product_or;

            /* Product: '<S174>/Product1' */
            asbCubeSatACS_B.Product1_jk = asbCubeSatACS_B.Product1_d *
              asbCubeSatACS_B.Product3_i;

            /* Product: '<S174>/Product' */
            asbCubeSatACS_B.Product_kq = asbCubeSatACS_B.Product_i *
              asbCubeSatACS_B.Product2_c;

            /* Sum: '<S174>/Sum' */
            asbCubeSatACS_B.Sum_ct = ((asbCubeSatACS_B.Product_kq -
              asbCubeSatACS_B.Product1_jk) + asbCubeSatACS_B.Product2_mx) +
              asbCubeSatACS_B.Product3_ht;

            /* Product: '<S175>/Product3' */
            asbCubeSatACS_B.Product3_fq = asbCubeSatACS_B.Product3_d2 *
              asbCubeSatACS_B.Product_or;

            /* Product: '<S175>/Product2' */
            asbCubeSatACS_B.Product2_eb = asbCubeSatACS_B.Product2_od *
              asbCubeSatACS_B.Product1_dr;

            /* Product: '<S175>/Product1' */
            asbCubeSatACS_B.Product1_ac = asbCubeSatACS_B.Product1_d *
              asbCubeSatACS_B.Product2_c;

            /* Product: '<S175>/Product' */
            asbCubeSatACS_B.Product_gm = asbCubeSatACS_B.Product_i *
              asbCubeSatACS_B.Product3_i;

            /* Sum: '<S175>/Sum' */
            asbCubeSatACS_B.Sum_g = ((asbCubeSatACS_B.Product_gm +
              asbCubeSatACS_B.Product1_ac) - asbCubeSatACS_B.Product2_eb) +
              asbCubeSatACS_B.Product3_fq;

            /* Switch: '<S141>/Switch' */
            asbCubeSatACS_B.Switch[0] = asbCubeSatACS_B.Sum_id;
            asbCubeSatACS_B.Switch[1] = asbCubeSatACS_B.Sum_c;
            asbCubeSatACS_B.Switch[2] = asbCubeSatACS_B.Sum_ct;
            asbCubeSatACS_B.Switch[3] = asbCubeSatACS_B.Sum_g;
          }

          /* Merge: '<S3>/ Merge 1' incorporates:
           *  SignalConversion generated from: '<S6>/cmd_q_b2tgt'
           */
          asbCubeSatACS_B.cmd_q_b2tgt[0] = asbCubeSatACS_B.Switch[0];
          asbCubeSatACS_B.cmd_q_b2tgt[1] = asbCubeSatACS_B.Switch[1];
          asbCubeSatACS_B.cmd_q_b2tgt[2] = asbCubeSatACS_B.Switch[2];
          asbCubeSatACS_B.cmd_q_b2tgt[3] = asbCubeSatACS_B.Switch[3];

          /* Product: '<S241>/Product' */
          asbCubeSatACS_B.Product_do = asbCubeSatACS_B.Switch[0] *
            asbCubeSatACS_B.Switch[0];

          /* Product: '<S241>/Product1' */
          asbCubeSatACS_B.Product1_h = asbCubeSatACS_B.Switch[1] *
            asbCubeSatACS_B.Switch[1];

          /* Product: '<S241>/Product2' */
          asbCubeSatACS_B.Product2_p = asbCubeSatACS_B.Switch[2] *
            asbCubeSatACS_B.Switch[2];

          /* Product: '<S241>/Product3' */
          asbCubeSatACS_B.Product3_pz = asbCubeSatACS_B.Switch[3] *
            asbCubeSatACS_B.Switch[3];

          /* Sum: '<S241>/Sum' */
          asbCubeSatACS_B.Sum_a = ((asbCubeSatACS_B.Product_do +
            asbCubeSatACS_B.Product1_h) + asbCubeSatACS_B.Product2_p) +
            asbCubeSatACS_B.Product3_pz;

          /* Sqrt: '<S240>/sqrt' */
          asbCubeSatACS_B.sqrt_k = std::sqrt(asbCubeSatACS_B.Sum_a);

          /* Product: '<S235>/Product' */
          asbCubeSatACS_B.Product_mw = asbCubeSatACS_B.Switch[0] /
            asbCubeSatACS_B.sqrt_k;

          /* Product: '<S235>/Product1' */
          asbCubeSatACS_B.Product1_lc = asbCubeSatACS_B.Switch[1] /
            asbCubeSatACS_B.sqrt_k;

          /* Product: '<S235>/Product2' */
          asbCubeSatACS_B.Product2_el = asbCubeSatACS_B.Switch[2] /
            asbCubeSatACS_B.sqrt_k;

          /* Product: '<S235>/Product3' */
          asbCubeSatACS_B.Product3_e1 = asbCubeSatACS_B.Switch[3] /
            asbCubeSatACS_B.sqrt_k;

          /* Fcn: '<S138>/fcn3' */
          asbCubeSatACS_B.fcn3 = (asbCubeSatACS_B.Product1_lc *
            asbCubeSatACS_B.Product3_e1 + asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product2_el) * 2.0;

          /* If: '<S236>/If' */
          if (asbCubeSatACS_B.fcn3 > 1.0) {
            /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem' incorporates:
             *  ActionPort: '<S237>/Action Port'
             */
            /* Merge: '<S236>/Merge' incorporates:
             *  Constant: '<S237>/Constant'
             */
            asbCubeSatACS_B.Merge_j = 1.0;

            /* End of Outputs for SubSystem: '<S236>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.fcn3 < -1.0) {
            /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S238>/Action Port'
             */
            /* Merge: '<S236>/Merge' incorporates:
             *  Constant: '<S238>/Constant'
             */
            asbCubeSatACS_B.Merge_j = 1.0;

            /* End of Outputs for SubSystem: '<S236>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S239>/Action Port'
             */
            asbCubeSat_IfActionSubsystem2_p(asbCubeSatACS_B.fcn3,
              &asbCubeSatACS_B.Merge_j);

            /* End of Outputs for SubSystem: '<S236>/If Action Subsystem2' */
          }

          /* Fcn: '<S138>/fcn1' */
          asbCubeSatACS_B.fcn1 = (asbCubeSatACS_B.Product2_el *
            asbCubeSatACS_B.Product3_e1 - asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product1_lc) * -2.0;

          /* Fcn: '<S138>/fcn2' */
          asbCubeSatACS_B.fcn2 = ((asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product_mw - asbCubeSatACS_B.Product1_lc *
            asbCubeSatACS_B.Product1_lc) - asbCubeSatACS_B.Product2_el *
            asbCubeSatACS_B.Product2_el) + asbCubeSatACS_B.Product3_e1 *
            asbCubeSatACS_B.Product3_e1;

          /* Trigonometry: '<S234>/Trigonometric Function1' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          asbCubeSatACS_B.PointingCmd[0] = rt_atan2d_snf(asbCubeSatACS_B.fcn1,
            asbCubeSatACS_B.fcn2);

          /* Fcn: '<S138>/fcn4' */
          asbCubeSatACS_B.fcn4 = (asbCubeSatACS_B.Product1_lc *
            asbCubeSatACS_B.Product2_el - asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product3_e1) * -2.0;

          /* Fcn: '<S138>/fcn5' */
          asbCubeSatACS_B.fcn5 = ((asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product_mw + asbCubeSatACS_B.Product1_lc *
            asbCubeSatACS_B.Product1_lc) - asbCubeSatACS_B.Product2_el *
            asbCubeSatACS_B.Product2_el) - asbCubeSatACS_B.Product3_e1 *
            asbCubeSatACS_B.Product3_e1;

          /* Trigonometry: '<S234>/Trigonometric Function3' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          asbCubeSatACS_B.PointingCmd[2] = rt_atan2d_snf(asbCubeSatACS_B.fcn4,
            asbCubeSatACS_B.fcn5);

          /* Trigonometry: '<S234>/trigFcn' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          u0 = asbCubeSatACS_B.Merge_j;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          asbCubeSatACS_B.PointingCmd[1] = std::asin(u0);
        }
      }
      break;

     default:
      {
        /* During 'Transition': '<S3>:52' */
        if (*rtu_AttitudeMode == 1.0) {
          real_T tmp;
          real_T tmp_0;
          real_T tmp_1;
          real_T tmp_2;
          real_T tmp_3;
          real_T tmp_4;
          real_T u;
          real_T u0;

          /* Transition: '<S3>:40' */
          asbCubeSatACS_B.ControlMode = 2.0;
          asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Earth;

          /* Product: '<S121>/Product' */
          asbCubeSatACS_B.Product_cs =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0];

          /* UnaryMinus: '<S8>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus_e =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[1];

          /* Product: '<S121>/Product1' */
          asbCubeSatACS_B.Product1_p = asbCubeSatACS_B.UnaryMinus_e *
            asbCubeSatACS_B.UnaryMinus_e;

          /* UnaryMinus: '<S8>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1_d =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[2];

          /* Product: '<S121>/Product2' */
          asbCubeSatACS_B.Product2_j = asbCubeSatACS_B.UnaryMinus1_d *
            asbCubeSatACS_B.UnaryMinus1_d;

          /* UnaryMinus: '<S8>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2_f =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[3];

          /* Product: '<S121>/Product3' */
          asbCubeSatACS_B.Product3_ii = asbCubeSatACS_B.UnaryMinus2_f *
            asbCubeSatACS_B.UnaryMinus2_f;

          /* Sum: '<S121>/Sum' */
          asbCubeSatACS_B.Sum_p4 = ((asbCubeSatACS_B.Product_cs +
            asbCubeSatACS_B.Product1_p) + asbCubeSatACS_B.Product2_j) +
            asbCubeSatACS_B.Product3_ii;

          /* Sqrt: '<S120>/sqrt' */
          asbCubeSatACS_B.sqrt_o5 = std::sqrt(asbCubeSatACS_B.Sum_p4);

          /* Product: '<S119>/Product' */
          asbCubeSatACS_B.Product_ks =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] /
            asbCubeSatACS_B.sqrt_o5;

          /* Product: '<S22>/Product' */
          asbCubeSatACS_B.Product_bb = asbCubeSatACS_B.Product_ks *
            asbCubeSatACS_B.Product_ks;

          /* Product: '<S119>/Product1' */
          asbCubeSatACS_B.Product1_l0 = asbCubeSatACS_B.UnaryMinus_e /
            asbCubeSatACS_B.sqrt_o5;

          /* UnaryMinus: '<S118>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus_ec = -asbCubeSatACS_B.Product1_l0;

          /* Product: '<S22>/Product1' */
          asbCubeSatACS_B.Product1_me = asbCubeSatACS_B.UnaryMinus_ec *
            asbCubeSatACS_B.UnaryMinus_ec;

          /* Product: '<S119>/Product2' */
          asbCubeSatACS_B.Product2_pc = asbCubeSatACS_B.UnaryMinus1_d /
            asbCubeSatACS_B.sqrt_o5;

          /* UnaryMinus: '<S118>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1_e = -asbCubeSatACS_B.Product2_pc;

          /* Product: '<S22>/Product2' */
          asbCubeSatACS_B.Product2_i = asbCubeSatACS_B.UnaryMinus1_e *
            asbCubeSatACS_B.UnaryMinus1_e;

          /* Product: '<S119>/Product3' */
          asbCubeSatACS_B.Product3_c3 = asbCubeSatACS_B.UnaryMinus2_f /
            asbCubeSatACS_B.sqrt_o5;

          /* UnaryMinus: '<S118>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2_k = -asbCubeSatACS_B.Product3_c3;

          /* Product: '<S22>/Product3' */
          asbCubeSatACS_B.Product3_ff = asbCubeSatACS_B.UnaryMinus2_k *
            asbCubeSatACS_B.UnaryMinus2_k;

          /* Sum: '<S22>/Sum' */
          asbCubeSatACS_B.Sum_ke = ((asbCubeSatACS_B.Product_bb +
            asbCubeSatACS_B.Product1_me) + asbCubeSatACS_B.Product2_i) +
            asbCubeSatACS_B.Product3_ff;

          /* Sqrt: '<S21>/sqrt' */
          asbCubeSatACS_B.sqrt_la = std::sqrt(asbCubeSatACS_B.Sum_ke);

          /* Product: '<S17>/Product' */
          asbCubeSatACS_B.Product_gl = asbCubeSatACS_B.Product_ks /
            asbCubeSatACS_B.sqrt_la;

          /* Product: '<S17>/Product1' */
          asbCubeSatACS_B.Product1_gs = asbCubeSatACS_B.UnaryMinus_ec /
            asbCubeSatACS_B.sqrt_la;

          /* Product: '<S17>/Product2' */
          asbCubeSatACS_B.Product2_ef = asbCubeSatACS_B.UnaryMinus1_e /
            asbCubeSatACS_B.sqrt_la;

          /* Product: '<S17>/Product3' */
          asbCubeSatACS_B.Product3_fp = asbCubeSatACS_B.UnaryMinus2_k /
            asbCubeSatACS_B.sqrt_la;

          /* Product: '<S18>/Product' */
          asbCubeSatACS_B.Product_fo = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product2_ef;

          /* Product: '<S18>/Product1' */
          asbCubeSatACS_B.Product1_b = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S18>/Sum1' */
          asbCubeSatACS_B.Sum1_h = asbCubeSatACS_B.Product_fo +
            asbCubeSatACS_B.Product1_b;

          /* Gain: '<S18>/Gain' */
          asbCubeSatACS_B.Gain_lp = 2.0 * asbCubeSatACS_B.Sum1_h;

          /* Product: '<S18>/Product2' */
          asbCubeSatACS_B.Product2_js = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product2_ef;

          /* Product: '<S18>/Product3' */
          asbCubeSatACS_B.Product3_hw = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S18>/Sum2' */
          asbCubeSatACS_B.Sum2_i = asbCubeSatACS_B.Product3_hw -
            asbCubeSatACS_B.Product2_js;

          /* Gain: '<S18>/Gain1' */
          asbCubeSatACS_B.Gain1_o = 2.0 * asbCubeSatACS_B.Sum2_i;

          /* Product: '<S18>/Product6' */
          asbCubeSatACS_B.Product6_m = asbCubeSatACS_B.Product2_ef *
            asbCubeSatACS_B.Product2_ef;

          /* Product: '<S18>/Product7' */
          asbCubeSatACS_B.Product7_k2 = asbCubeSatACS_B.Product3_fp *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S18>/Sum3' incorporates:
           *  Constant: '<S18>/Constant'
           */
          asbCubeSatACS_B.Sum3_c = (0.5 - asbCubeSatACS_B.Product6_m) -
            asbCubeSatACS_B.Product7_k2;

          /* Gain: '<S18>/Gain2' */
          asbCubeSatACS_B.Gain2_cx = 2.0 * asbCubeSatACS_B.Sum3_c;

          /* Product: '<S19>/Product' */
          asbCubeSatACS_B.Product_pp = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product2_ef;

          /* Product: '<S19>/Product1' */
          asbCubeSatACS_B.Product1_p3 = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S19>/Sum1' */
          asbCubeSatACS_B.Sum1_i = asbCubeSatACS_B.Product_pp -
            asbCubeSatACS_B.Product1_p3;

          /* Gain: '<S19>/Gain' */
          asbCubeSatACS_B.Gain_ie = 2.0 * asbCubeSatACS_B.Sum1_i;

          /* Product: '<S19>/Product2' */
          asbCubeSatACS_B.Product2_f = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product1_gs;

          /* Product: '<S19>/Product3' */
          asbCubeSatACS_B.Product3_m = asbCubeSatACS_B.Product2_ef *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S19>/Sum2' */
          asbCubeSatACS_B.Sum2_f = asbCubeSatACS_B.Product2_f +
            asbCubeSatACS_B.Product3_m;

          /* Gain: '<S19>/Gain1' */
          asbCubeSatACS_B.Gain1_l = 2.0 * asbCubeSatACS_B.Sum2_f;

          /* Product: '<S19>/Product6' */
          asbCubeSatACS_B.Product6_iz = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product1_gs;

          /* Product: '<S19>/Product7' */
          asbCubeSatACS_B.Product7_e = asbCubeSatACS_B.Product3_fp *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S19>/Sum3' incorporates:
           *  Constant: '<S19>/Constant'
           */
          asbCubeSatACS_B.Sum3_op = (0.5 - asbCubeSatACS_B.Product6_iz) -
            asbCubeSatACS_B.Product7_e;

          /* Gain: '<S19>/Gain2' */
          asbCubeSatACS_B.Gain2_e = 2.0 * asbCubeSatACS_B.Sum3_op;

          /* Product: '<S20>/Product' */
          asbCubeSatACS_B.Product_ce = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product3_fp;

          /* Product: '<S20>/Product1' */
          asbCubeSatACS_B.Product1_mx = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product2_ef;

          /* Sum: '<S20>/Sum1' */
          asbCubeSatACS_B.Sum1_m = asbCubeSatACS_B.Product_ce +
            asbCubeSatACS_B.Product1_mx;

          /* Gain: '<S20>/Gain' */
          asbCubeSatACS_B.Gain_ab = 2.0 * asbCubeSatACS_B.Sum1_m;

          /* Product: '<S20>/Product2' */
          asbCubeSatACS_B.Product2_av = asbCubeSatACS_B.Product_gl *
            asbCubeSatACS_B.Product1_gs;

          /* Product: '<S20>/Product3' */
          asbCubeSatACS_B.Product3_cx = asbCubeSatACS_B.Product2_ef *
            asbCubeSatACS_B.Product3_fp;

          /* Sum: '<S20>/Sum2' */
          asbCubeSatACS_B.Sum2_o = asbCubeSatACS_B.Product3_cx -
            asbCubeSatACS_B.Product2_av;

          /* Gain: '<S20>/Gain1' */
          asbCubeSatACS_B.Gain1_g = 2.0 * asbCubeSatACS_B.Sum2_o;

          /* Product: '<S20>/Product6' */
          asbCubeSatACS_B.Product6_l = asbCubeSatACS_B.Product1_gs *
            asbCubeSatACS_B.Product1_gs;

          /* Product: '<S20>/Product7' */
          asbCubeSatACS_B.Product7_l = asbCubeSatACS_B.Product2_ef *
            asbCubeSatACS_B.Product2_ef;

          /* Sum: '<S20>/Sum3' incorporates:
           *  Constant: '<S20>/Constant'
           */
          asbCubeSatACS_B.Sum3_a = (0.5 - asbCubeSatACS_B.Product6_l) -
            asbCubeSatACS_B.Product7_l;

          /* Gain: '<S20>/Gain2' */
          asbCubeSatACS_B.Gain2_o = 2.0 * asbCubeSatACS_B.Sum3_a;

          /* Product: '<S38>/j x k' */
          asbCubeSatACS_B.jxk_pl =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];

          /* Product: '<S38>/k x i' */
          asbCubeSatACS_B.kxi_a =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];

          /* Product: '<S38>/i x j' */
          asbCubeSatACS_B.ixj_d =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1];

          /* Product: '<S39>/k x j' */
          asbCubeSatACS_B.kxj_e =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];

          /* Product: '<S39>/i x k' */
          asbCubeSatACS_B.ixk_g =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];

          /* Product: '<S39>/j x i' */
          asbCubeSatACS_B.jxi_g =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];

          /* Sum: '<S32>/Sum' */
          asbCubeSatACS_B.Sum_mp[0] = asbCubeSatACS_B.jxk_pl -
            asbCubeSatACS_B.kxj_e;
          asbCubeSatACS_B.Sum_mp[1] = asbCubeSatACS_B.kxi_a -
            asbCubeSatACS_B.ixk_g;
          asbCubeSatACS_B.Sum_mp[2] = asbCubeSatACS_B.ixj_d -
            asbCubeSatACS_B.jxi_g;

          /* Product: '<S40>/j x k' incorporates:
           *  Constant: '<S23>/Constant'
           */
          asbCubeSatACS_B.jxk_c = 0.0 * asbCubeSatACS_B.Sum_mp[2];

          /* Product: '<S40>/k x i' */
          asbCubeSatACS_B.kxi_na = asbCubeSatACS_B.Sum_mp[0];

          /* Product: '<S40>/i x j' incorporates:
           *  Constant: '<S23>/Constant'
           */
          asbCubeSatACS_B.ixj_p = 0.0 * asbCubeSatACS_B.Sum_mp[1];

          /* Product: '<S41>/k x j' */
          asbCubeSatACS_B.kxj_d = asbCubeSatACS_B.Sum_mp[1];

          /* Product: '<S41>/i x k' incorporates:
           *  Constant: '<S23>/Constant'
           */
          asbCubeSatACS_B.ixk_h = 0.0 * asbCubeSatACS_B.Sum_mp[2];

          /* Product: '<S41>/j x i' incorporates:
           *  Constant: '<S23>/Constant'
           */
          asbCubeSatACS_B.jxi_gk = asbCubeSatACS_B.Sum_mp[0] * 0.0;

          /* Sum: '<S34>/Sum' */
          asbCubeSatACS_B.Sum_co[0] = asbCubeSatACS_B.jxk_c -
            asbCubeSatACS_B.kxj_d;
          asbCubeSatACS_B.Sum_co[1] = asbCubeSatACS_B.kxi_na -
            asbCubeSatACS_B.ixk_h;
          asbCubeSatACS_B.Sum_co[2] = asbCubeSatACS_B.ixj_p -
            asbCubeSatACS_B.jxi_gk;

          /* Product: '<S42>/j x k' */
          asbCubeSatACS_B.jxk_o5 =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1] *
            asbCubeSatACS_B.Sum_mp[2];

          /* Product: '<S42>/k x i' */
          asbCubeSatACS_B.kxi_f = asbCubeSatACS_B.Sum_mp[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];

          /* Product: '<S42>/i x j' */
          asbCubeSatACS_B.ixj_lo =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] *
            asbCubeSatACS_B.Sum_mp[1];

          /* Product: '<S43>/k x j' */
          asbCubeSatACS_B.kxj_o = asbCubeSatACS_B.Sum_mp[1] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];

          /* Product: '<S43>/i x k' */
          asbCubeSatACS_B.ixk_ab =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0] *
            asbCubeSatACS_B.Sum_mp[2];

          /* Product: '<S43>/j x i' */
          asbCubeSatACS_B.jxi_j = asbCubeSatACS_B.Sum_mp[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1];

          /* Sum: '<S35>/Sum' */
          asbCubeSatACS_B.Sum_jr[0] = asbCubeSatACS_B.jxk_o5 -
            asbCubeSatACS_B.kxj_o;
          asbCubeSatACS_B.Sum_jr[1] = asbCubeSatACS_B.kxi_f -
            asbCubeSatACS_B.ixk_ab;
          asbCubeSatACS_B.Sum_jr[2] = asbCubeSatACS_B.ixj_lo -
            asbCubeSatACS_B.jxi_j;

          /* Gain: '<S10>/Gain' */
          asbCubeSatACS_B.Gain_h[0] =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];

          /* DotProduct: '<S23>/Dot Product' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];
          tmp_0 = u0 * u;

          /* Product: '<S23>/divide2' incorporates:
           *  Constant: '<S23>/Constant2'
           */
          asbCubeSatACS_B.divide2[0] = asbCubeSatACS_B.Sum_jr[0] /
            3.986004418E+14;

          /* Gain: '<S10>/Gain' */
          asbCubeSatACS_B.Gain_h[1] =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];

          /* DotProduct: '<S23>/Dot Product' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];
          tmp_0 += u0 * u;

          /* Product: '<S23>/divide2' incorporates:
           *  Constant: '<S23>/Constant2'
           */
          asbCubeSatACS_B.divide2[1] = asbCubeSatACS_B.Sum_jr[1] /
            3.986004418E+14;

          /* Gain: '<S10>/Gain' */
          asbCubeSatACS_B.Gain_h[2] =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];

          /* DotProduct: '<S23>/Dot Product' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];
          tmp_0 += u0 * u;

          /* Product: '<S23>/divide2' incorporates:
           *  Constant: '<S23>/Constant2'
           */
          asbCubeSatACS_B.divide2[2] = asbCubeSatACS_B.Sum_jr[2] /
            3.986004418E+14;

          /* Product: '<S18>/Product4' */
          asbCubeSatACS_B.Product4_f = asbCubeSatACS_B.Gain_lp *
            asbCubeSatACS_B.Gain_h[1];

          /* Product: '<S18>/Product5' */
          asbCubeSatACS_B.Product5_f = asbCubeSatACS_B.Gain1_o *
            asbCubeSatACS_B.Gain_h[2];

          /* Product: '<S18>/Product8' */
          asbCubeSatACS_B.Product8_ao = asbCubeSatACS_B.Gain_h[0] *
            asbCubeSatACS_B.Gain2_cx;

          /* Sum: '<S18>/Sum' */
          asbCubeSatACS_B.Sum_ah = (asbCubeSatACS_B.Product8_ao +
            asbCubeSatACS_B.Product4_f) + asbCubeSatACS_B.Product5_f;

          /* Product: '<S19>/Product4' */
          asbCubeSatACS_B.Product4_o = asbCubeSatACS_B.Gain_h[0] *
            asbCubeSatACS_B.Gain_ie;

          /* Product: '<S19>/Product5' */
          asbCubeSatACS_B.Product5_ji = asbCubeSatACS_B.Gain1_l *
            asbCubeSatACS_B.Gain_h[2];

          /* Product: '<S19>/Product8' */
          asbCubeSatACS_B.Product8_f = asbCubeSatACS_B.Gain2_e *
            asbCubeSatACS_B.Gain_h[1];

          /* Sum: '<S19>/Sum' */
          asbCubeSatACS_B.Sum_pcb = (asbCubeSatACS_B.Product4_o +
            asbCubeSatACS_B.Product8_f) + asbCubeSatACS_B.Product5_ji;

          /* Product: '<S20>/Product4' */
          asbCubeSatACS_B.Product4_gi = asbCubeSatACS_B.Gain_h[0] *
            asbCubeSatACS_B.Gain_ab;

          /* Product: '<S20>/Product5' */
          asbCubeSatACS_B.Product5_my = asbCubeSatACS_B.Gain1_g *
            asbCubeSatACS_B.Gain_h[1];

          /* Product: '<S20>/Product8' */
          asbCubeSatACS_B.Product8_gb = asbCubeSatACS_B.Gain2_o *
            asbCubeSatACS_B.Gain_h[2];

          /* Sum: '<S20>/Sum' */
          asbCubeSatACS_B.Sum_ml = (asbCubeSatACS_B.Product4_gi +
            asbCubeSatACS_B.Product5_my) + asbCubeSatACS_B.Product8_gb;

          /* DotProduct: '<S23>/Dot Product' */
          asbCubeSatACS_B.DotProduct = tmp_0;

          /* Sqrt: '<S23>/|r|' */
          asbCubeSatACS_B.r = std::sqrt(asbCubeSatACS_B.DotProduct);

          /* Product: '<S23>/divide3' */
          asbCubeSatACS_B.divide3[0] =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0] /
            asbCubeSatACS_B.r;

          /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
          asbCubeSatACS_B.evxhmurr[0] = asbCubeSatACS_B.divide2[0] -
            asbCubeSatACS_B.divide3[0];

          /* DotProduct: '<S23>/Dot Product1' */
          u0 = asbCubeSatACS_B.Sum_co[0];
          u = asbCubeSatACS_B.evxhmurr[0];
          tmp_0 = u0 * u;

          /* DotProduct: '<S23>/Dot Product2' */
          u0 = asbCubeSatACS_B.Sum_co[0];
          u = asbCubeSatACS_B.Sum_co[0];
          tmp_2 = u0 * u;

          /* DotProduct: '<S23>/Dot Product3' */
          u0 = asbCubeSatACS_B.Sum_mp[0];
          u = asbCubeSatACS_B.Sum_mp[0];
          tmp_3 = u0 * u;

          /* DotProduct: '<S23>/Dot Product4' */
          u0 = asbCubeSatACS_B.evxhmurr[0];
          u = asbCubeSatACS_B.evxhmurr[0];
          tmp_4 = u0 * u;

          /* DotProduct: '<S23>/Dot Product5' */
          u0 = asbCubeSatACS_B.evxhmurr[0];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];
          tmp = u0 * u;

          /* DotProduct: '<S23>/Dot Product6' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[0];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[0];
          tmp_1 = u0 * u;

          /* Product: '<S23>/divide3' */
          asbCubeSatACS_B.divide3[1] =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1] /
            asbCubeSatACS_B.r;

          /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
          asbCubeSatACS_B.evxhmurr[1] = asbCubeSatACS_B.divide2[1] -
            asbCubeSatACS_B.divide3[1];

          /* DotProduct: '<S23>/Dot Product1' */
          u0 = asbCubeSatACS_B.Sum_co[1];
          u = asbCubeSatACS_B.evxhmurr[1];
          tmp_0 += u0 * u;

          /* DotProduct: '<S23>/Dot Product2' */
          u0 = asbCubeSatACS_B.Sum_co[1];
          u = asbCubeSatACS_B.Sum_co[1];
          tmp_2 += u0 * u;

          /* DotProduct: '<S23>/Dot Product3' */
          u0 = asbCubeSatACS_B.Sum_mp[1];
          u = asbCubeSatACS_B.Sum_mp[1];
          tmp_3 += u0 * u;

          /* DotProduct: '<S23>/Dot Product4' */
          u0 = asbCubeSatACS_B.evxhmurr[1];
          u = asbCubeSatACS_B.evxhmurr[1];
          tmp_4 += u0 * u;

          /* DotProduct: '<S23>/Dot Product5' */
          u0 = asbCubeSatACS_B.evxhmurr[1];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];
          tmp += u0 * u;

          /* DotProduct: '<S23>/Dot Product6' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[1];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[1];
          tmp_1 += u0 * u;

          /* Product: '<S23>/divide3' */
          asbCubeSatACS_B.divide3[2] =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2] /
            asbCubeSatACS_B.r;

          /* Sum: '<S23>/e = (v x h) // mu - r // |r|' */
          asbCubeSatACS_B.evxhmurr[2] = asbCubeSatACS_B.divide2[2] -
            asbCubeSatACS_B.divide3[2];

          /* DotProduct: '<S23>/Dot Product1' */
          u0 = asbCubeSatACS_B.Sum_co[2];
          u = asbCubeSatACS_B.evxhmurr[2];
          tmp_0 += u0 * u;

          /* DotProduct: '<S23>/Dot Product2' */
          u0 = asbCubeSatACS_B.Sum_co[2];
          u = asbCubeSatACS_B.Sum_co[2];
          tmp_2 += u0 * u;

          /* DotProduct: '<S23>/Dot Product3' */
          u0 = asbCubeSatACS_B.Sum_mp[2];
          u = asbCubeSatACS_B.Sum_mp[2];
          tmp_3 += u0 * u;

          /* DotProduct: '<S23>/Dot Product4' */
          u0 = asbCubeSatACS_B.evxhmurr[2];
          u = asbCubeSatACS_B.evxhmurr[2];
          tmp_4 += u0 * u;

          /* DotProduct: '<S23>/Dot Product5' */
          u0 = asbCubeSatACS_B.evxhmurr[2];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];
          tmp += u0 * u;

          /* DotProduct: '<S23>/Dot Product6' */
          u0 = asbCubeSatACS_B.BusConversion_InsertedFor_Point.X_eci[2];
          u = asbCubeSatACS_B.BusConversion_InsertedFor_Point.V_eci[2];
          tmp_1 += u0 * u;

          /* DotProduct: '<S23>/Dot Product1' */
          asbCubeSatACS_B.DotProduct1_b = tmp_0;

          /* DotProduct: '<S23>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_m = tmp_2;

          /* DotProduct: '<S23>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_h4 = tmp_3;

          /* DotProduct: '<S23>/Dot Product4' */
          asbCubeSatACS_B.DotProduct4 = tmp_4;

          /* DotProduct: '<S23>/Dot Product5' */
          asbCubeSatACS_B.DotProduct5 = tmp;

          /* DotProduct: '<S23>/Dot Product6' */
          asbCubeSatACS_B.DotProduct6 = tmp_1;

          /* Sqrt: '<S23>/|n|' */
          asbCubeSatACS_B.n = std::sqrt(asbCubeSatACS_B.DotProduct2_m);

          /* Sqrt: '<S23>/|e|' */
          asbCubeSatACS_B.e = std::sqrt(asbCubeSatACS_B.DotProduct4);

          /* Product: '<S23>/Product' */
          asbCubeSatACS_B.Product_k3 = asbCubeSatACS_B.n * asbCubeSatACS_B.e;

          /* Product: '<S23>/Product1' */
          asbCubeSatACS_B.Product1_e = asbCubeSatACS_B.e * asbCubeSatACS_B.r;

          /* Product: '<S23>/divide' */
          asbCubeSatACS_B.divide = asbCubeSatACS_B.Sum_co[0] / asbCubeSatACS_B.n;

          /* MinMax: '<S30>/Min' incorporates:
           *  Constant: '<S30>/Constant'
           */
          u0 = std::fmin(asbCubeSatACS_B.divide, 1.0);

          /* MinMax: '<S30>/Min' */
          asbCubeSatACS_B.Min = u0;

          /* MinMax: '<S30>/Max' incorporates:
           *  Constant: '<S30>/Constant1'
           */
          u0 = std::fmax(-1.0, asbCubeSatACS_B.Min);

          /* MinMax: '<S30>/Max' */
          asbCubeSatACS_B.Max = u0;

          /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
          u0 = asbCubeSatACS_B.Max;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
          asbCubeSatACS_B.RAANacosn_in = std::acos(u0);

          /* Switch: '<S23>/n_j < 0' */
          if (asbCubeSatACS_B.Sum_co[1] >= 0.0) {
            /* Switch: '<S23>/n_j < 0' */
            asbCubeSatACS_B.n_j0 = asbCubeSatACS_B.RAANacosn_in;
          } else {
            /* Sum: '<S23>/Sum' incorporates:
             *  Constant: '<S23>/Constant1'
             */
            asbCubeSatACS_B.Sum_e0 = 6.2831853071795862 -
              asbCubeSatACS_B.RAANacosn_in;

            /* Switch: '<S23>/n_j < 0' */
            asbCubeSatACS_B.n_j0 = asbCubeSatACS_B.Sum_e0;
          }

          /* Sqrt: '<S23>/|h|' */
          asbCubeSatACS_B.h = std::sqrt(asbCubeSatACS_B.DotProduct3_h4);

          /* Product: '<S23>/divide1' */
          asbCubeSatACS_B.divide1 = asbCubeSatACS_B.Sum_mp[2] /
            asbCubeSatACS_B.h;

          /* MinMax: '<S31>/Min' incorporates:
           *  Constant: '<S31>/Constant'
           */
          u0 = std::fmin(asbCubeSatACS_B.divide1, 1.0);

          /* MinMax: '<S31>/Min' */
          asbCubeSatACS_B.Min_n = u0;

          /* MinMax: '<S31>/Max' incorporates:
           *  Constant: '<S31>/Constant1'
           */
          u0 = std::fmax(-1.0, asbCubeSatACS_B.Min_n);

          /* MinMax: '<S31>/Max' */
          asbCubeSatACS_B.Max_p = u0;

          /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
          u0 = asbCubeSatACS_B.Max_p;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
          asbCubeSatACS_B.iacosh_kh = std::acos(u0);

          /* Product: '<S23>/divide4' */
          asbCubeSatACS_B.divide4 = asbCubeSatACS_B.DotProduct1_b /
            asbCubeSatACS_B.Product_k3;

          /* MinMax: '<S29>/Min' incorporates:
           *  Constant: '<S29>/Constant'
           */
          u0 = std::fmin(asbCubeSatACS_B.divide4, 1.0);

          /* MinMax: '<S29>/Min' */
          asbCubeSatACS_B.Min_a = u0;

          /* MinMax: '<S29>/Max' incorporates:
           *  Constant: '<S29>/Constant1'
           */
          u0 = std::fmax(-1.0, asbCubeSatACS_B.Min_a);

          /* MinMax: '<S29>/Max' */
          asbCubeSatACS_B.Max_b = u0;

          /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
          u0 = asbCubeSatACS_B.Max_b;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
          asbCubeSatACS_B.argPacosnene = std::acos(u0);

          /* Switch: '<S23>/e_k < 0' */
          if (asbCubeSatACS_B.evxhmurr[2] >= 0.0) {
            /* Switch: '<S23>/e_k < 0' */
            asbCubeSatACS_B.e_k0 = asbCubeSatACS_B.argPacosnene;
          } else {
            /* Sum: '<S23>/Sum1' incorporates:
             *  Constant: '<S23>/Constant3'
             */
            asbCubeSatACS_B.Sum1_d0 = 6.2831853071795862 -
              asbCubeSatACS_B.argPacosnene;

            /* Switch: '<S23>/e_k < 0' */
            asbCubeSatACS_B.e_k0 = asbCubeSatACS_B.Sum1_d0;
          }

          /* Product: '<S23>/divide5' */
          asbCubeSatACS_B.divide5 = asbCubeSatACS_B.DotProduct5 /
            asbCubeSatACS_B.Product1_e;

          /* MinMax: '<S28>/Min' incorporates:
           *  Constant: '<S28>/Constant'
           */
          u0 = std::fmin(asbCubeSatACS_B.divide5, 1.0);

          /* MinMax: '<S28>/Min' */
          asbCubeSatACS_B.Min_ni = u0;

          /* MinMax: '<S28>/Max' incorporates:
           *  Constant: '<S28>/Constant1'
           */
          u0 = std::fmax(-1.0, asbCubeSatACS_B.Min_ni);

          /* MinMax: '<S28>/Max' */
          asbCubeSatACS_B.Max_pd = u0;

          /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
          u0 = asbCubeSatACS_B.Max_pd;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
          asbCubeSatACS_B.nuacoserer = std::acos(u0);

          /* Switch: '<S23>/r.v < 0' */
          if (asbCubeSatACS_B.DotProduct6 >= 0.0) {
            /* Switch: '<S23>/r.v < 0' */
            asbCubeSatACS_B.rv0 = asbCubeSatACS_B.nuacoserer;
          } else {
            /* Sum: '<S23>/Sum2' incorporates:
             *  Constant: '<S23>/Constant4'
             */
            asbCubeSatACS_B.Sum2_fk = 6.2831853071795862 -
              asbCubeSatACS_B.nuacoserer;

            /* Switch: '<S23>/r.v < 0' */
            asbCubeSatACS_B.rv0 = asbCubeSatACS_B.Sum2_fk;
          }

          /* Sum: '<S23>/Sum3' */
          asbCubeSatACS_B.Sum3_p = asbCubeSatACS_B.e_k0 + asbCubeSatACS_B.rv0;

          /* Gain: '<S33>/1//2' */
          asbCubeSatACS_B.u2[0] = 0.5 * asbCubeSatACS_B.n_j0;
          asbCubeSatACS_B.u2[1] = 0.5 * asbCubeSatACS_B.iacosh_kh;
          asbCubeSatACS_B.u2[2] = 0.5 * asbCubeSatACS_B.Sum3_p;

          /* Trigonometry: '<S33>/sincos' */
          u = asbCubeSatACS_B.u2[0];
          u0 = std::sin(u);
          u = std::cos(u);
          asbCubeSatACS_B.sincos_o1[0] = u0;
          asbCubeSatACS_B.sincos_o2[0] = u;
          u = asbCubeSatACS_B.u2[1];
          u0 = std::sin(u);
          u = std::cos(u);
          asbCubeSatACS_B.sincos_o1[1] = u0;
          asbCubeSatACS_B.sincos_o2[1] = u;
          u = asbCubeSatACS_B.u2[2];
          u0 = std::sin(u);
          u = std::cos(u);
          asbCubeSatACS_B.sincos_o1[2] = u0;
          asbCubeSatACS_B.sincos_o2[2] = u;

          /* Fcn: '<S33>/q0' */
          asbCubeSatACS_B.q0 = asbCubeSatACS_B.sincos_o2[0] *
            asbCubeSatACS_B.sincos_o2[1] * asbCubeSatACS_B.sincos_o2[2] -
            asbCubeSatACS_B.sincos_o1[0] * asbCubeSatACS_B.sincos_o2[1] *
            asbCubeSatACS_B.sincos_o1[2];

          /* Product: '<S37>/Product' */
          asbCubeSatACS_B.Product_gh = asbCubeSatACS_B.q0 * asbCubeSatACS_B.q0;

          /* Fcn: '<S33>/q1' */
          asbCubeSatACS_B.q1 = asbCubeSatACS_B.sincos_o2[0] *
            asbCubeSatACS_B.sincos_o1[1] * asbCubeSatACS_B.sincos_o2[2] +
            asbCubeSatACS_B.sincos_o1[0] * asbCubeSatACS_B.sincos_o1[1] *
            asbCubeSatACS_B.sincos_o1[2];

          /* Product: '<S37>/Product1' */
          asbCubeSatACS_B.Product1_g5 = asbCubeSatACS_B.q1 * asbCubeSatACS_B.q1;

          /* Fcn: '<S33>/q2' */
          asbCubeSatACS_B.q2 = asbCubeSatACS_B.sincos_o1[0] *
            asbCubeSatACS_B.sincos_o1[1] * asbCubeSatACS_B.sincos_o2[2] -
            asbCubeSatACS_B.sincos_o2[0] * asbCubeSatACS_B.sincos_o1[1] *
            asbCubeSatACS_B.sincos_o1[2];

          /* Product: '<S37>/Product2' */
          asbCubeSatACS_B.Product2_ay = asbCubeSatACS_B.q2 * asbCubeSatACS_B.q2;

          /* Fcn: '<S33>/q3' */
          asbCubeSatACS_B.q3 = asbCubeSatACS_B.sincos_o1[0] *
            asbCubeSatACS_B.sincos_o2[1] * asbCubeSatACS_B.sincos_o2[2] +
            asbCubeSatACS_B.sincos_o2[0] * asbCubeSatACS_B.sincos_o2[1] *
            asbCubeSatACS_B.sincos_o1[2];

          /* Product: '<S37>/Product3' */
          asbCubeSatACS_B.Product3_o = asbCubeSatACS_B.q3 * asbCubeSatACS_B.q3;

          /* Sum: '<S37>/Sum' */
          asbCubeSatACS_B.Sum_b = ((asbCubeSatACS_B.Product_gh +
            asbCubeSatACS_B.Product1_g5) + asbCubeSatACS_B.Product2_ay) +
            asbCubeSatACS_B.Product3_o;

          /* Sqrt: '<S36>/sqrt' */
          asbCubeSatACS_B.sqrt_p = std::sqrt(asbCubeSatACS_B.Sum_b);

          /* Product: '<S27>/Product' */
          asbCubeSatACS_B.Product_pg = asbCubeSatACS_B.q0 /
            asbCubeSatACS_B.sqrt_p;

          /* Product: '<S27>/Product1' */
          asbCubeSatACS_B.Product1_c = asbCubeSatACS_B.q1 /
            asbCubeSatACS_B.sqrt_p;

          /* Product: '<S27>/Product2' */
          asbCubeSatACS_B.Product2_oj = asbCubeSatACS_B.q2 /
            asbCubeSatACS_B.sqrt_p;

          /* Product: '<S27>/Product3' */
          asbCubeSatACS_B.Product3_ch = asbCubeSatACS_B.q3 /
            asbCubeSatACS_B.sqrt_p;

          /* Product: '<S49>/Product' */
          asbCubeSatACS_B.Product_a =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0];

          /* Product: '<S49>/Product1' */
          asbCubeSatACS_B.Product1_hu = asbCubeSatACS_B.UnaryMinus_e *
            asbCubeSatACS_B.UnaryMinus_e;

          /* Product: '<S49>/Product2' */
          asbCubeSatACS_B.Product2_dr = asbCubeSatACS_B.UnaryMinus1_d *
            asbCubeSatACS_B.UnaryMinus1_d;

          /* Product: '<S49>/Product3' */
          asbCubeSatACS_B.Product3_do = asbCubeSatACS_B.UnaryMinus2_f *
            asbCubeSatACS_B.UnaryMinus2_f;

          /* Sum: '<S49>/Sum' */
          asbCubeSatACS_B.Sum_cx = ((asbCubeSatACS_B.Product_a +
            asbCubeSatACS_B.Product1_hu) + asbCubeSatACS_B.Product2_dr) +
            asbCubeSatACS_B.Product3_do;

          /* Sqrt: '<S48>/sqrt' */
          asbCubeSatACS_B.sqrt_b = std::sqrt(asbCubeSatACS_B.Sum_cx);

          /* Product: '<S26>/Product' */
          asbCubeSatACS_B.Product_on =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] /
            asbCubeSatACS_B.sqrt_b;

          /* Product: '<S45>/Product' */
          asbCubeSatACS_B.Product_ke = asbCubeSatACS_B.Product_on *
            asbCubeSatACS_B.Product1_c;

          /* Product: '<S26>/Product1' */
          asbCubeSatACS_B.Product1_ar = asbCubeSatACS_B.UnaryMinus_e /
            asbCubeSatACS_B.sqrt_b;

          /* Product: '<S45>/Product1' */
          asbCubeSatACS_B.Product1_en = asbCubeSatACS_B.Product1_ar *
            asbCubeSatACS_B.Product_pg;

          /* Product: '<S26>/Product2' */
          asbCubeSatACS_B.Product2_ov = asbCubeSatACS_B.UnaryMinus1_d /
            asbCubeSatACS_B.sqrt_b;

          /* Product: '<S45>/Product2' */
          asbCubeSatACS_B.Product2_gu = asbCubeSatACS_B.Product2_ov *
            asbCubeSatACS_B.Product3_ch;

          /* Product: '<S26>/Product3' */
          asbCubeSatACS_B.Product3_hh = asbCubeSatACS_B.UnaryMinus2_f /
            asbCubeSatACS_B.sqrt_b;

          /* Product: '<S45>/Product3' */
          asbCubeSatACS_B.Product3_hw3 = asbCubeSatACS_B.Product3_hh *
            asbCubeSatACS_B.Product2_oj;

          /* Sum: '<S45>/Sum' */
          asbCubeSatACS_B.Sum_dh = ((asbCubeSatACS_B.Product_ke +
            asbCubeSatACS_B.Product1_en) + asbCubeSatACS_B.Product2_gu) -
            asbCubeSatACS_B.Product3_hw3;

          /* UnaryMinus: '<S24>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus_eq = -asbCubeSatACS_B.Sum_dh;

          /* Product: '<S46>/Product' */
          asbCubeSatACS_B.Product_orf = asbCubeSatACS_B.Product_on *
            asbCubeSatACS_B.Product2_oj;

          /* Product: '<S46>/Product1' */
          asbCubeSatACS_B.Product1_gs1 = asbCubeSatACS_B.Product1_ar *
            asbCubeSatACS_B.Product3_ch;

          /* Product: '<S46>/Product2' */
          asbCubeSatACS_B.Product2_amg = asbCubeSatACS_B.Product2_ov *
            asbCubeSatACS_B.Product_pg;

          /* Product: '<S46>/Product3' */
          asbCubeSatACS_B.Product3_ou = asbCubeSatACS_B.Product3_hh *
            asbCubeSatACS_B.Product1_c;

          /* Sum: '<S46>/Sum' */
          asbCubeSatACS_B.Sum_fc = ((asbCubeSatACS_B.Product_orf -
            asbCubeSatACS_B.Product1_gs1) + asbCubeSatACS_B.Product2_amg) +
            asbCubeSatACS_B.Product3_ou;

          /* UnaryMinus: '<S24>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1_o = -asbCubeSatACS_B.Sum_fc;

          /* Product: '<S47>/Product' */
          asbCubeSatACS_B.Product_hl = asbCubeSatACS_B.Product_on *
            asbCubeSatACS_B.Product3_ch;

          /* Product: '<S47>/Product1' */
          asbCubeSatACS_B.Product1_iu = asbCubeSatACS_B.Product1_ar *
            asbCubeSatACS_B.Product2_oj;

          /* Product: '<S47>/Product2' */
          asbCubeSatACS_B.Product2_m4 = asbCubeSatACS_B.Product2_ov *
            asbCubeSatACS_B.Product1_c;

          /* Product: '<S47>/Product3' */
          asbCubeSatACS_B.Product3_ax = asbCubeSatACS_B.Product3_hh *
            asbCubeSatACS_B.Product_pg;

          /* Sum: '<S47>/Sum' */
          asbCubeSatACS_B.Sum_cw = ((asbCubeSatACS_B.Product_hl +
            asbCubeSatACS_B.Product1_iu) - asbCubeSatACS_B.Product2_m4) +
            asbCubeSatACS_B.Product3_ax;

          /* UnaryMinus: '<S24>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2_e = -asbCubeSatACS_B.Sum_cw;

          /* Product: '<S44>/Product' */
          asbCubeSatACS_B.Product_e4 = asbCubeSatACS_B.Product_on *
            asbCubeSatACS_B.Product_pg;

          /* Product: '<S44>/Product1' */
          asbCubeSatACS_B.Product1_o4 = asbCubeSatACS_B.Product1_ar *
            asbCubeSatACS_B.Product1_c;

          /* Product: '<S44>/Product2' */
          asbCubeSatACS_B.Product2_do = asbCubeSatACS_B.Product2_ov *
            asbCubeSatACS_B.Product2_oj;

          /* Product: '<S44>/Product3' */
          asbCubeSatACS_B.Product3_dd = asbCubeSatACS_B.Product3_hh *
            asbCubeSatACS_B.Product3_ch;

          /* Sum: '<S44>/Sum' */
          asbCubeSatACS_B.Sum_bg = ((asbCubeSatACS_B.Product_e4 -
            asbCubeSatACS_B.Product1_o4) - asbCubeSatACS_B.Product2_do) -
            asbCubeSatACS_B.Product3_dd;

          /* If: '<S50>/If' */
          if (asbCubeSatACS_ConstB.Abs_m < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
             *  ActionPort: '<S60>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_k);

            /* End of Outputs for SubSystem: '<S50>/If Action Subsystem' */
          } else if (asbCubeSatACS_ConstB.Abs1_g < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S61>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_k);

            /* End of Outputs for SubSystem: '<S50>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S62>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_k);

            /* End of Outputs for SubSystem: '<S50>/If Action Subsystem2' */
          }

          /* SignalConversion generated from: '<S51>/Dot Product1' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0] =
            asbCubeSatACS_B.Sum_ah;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1] =
            asbCubeSatACS_B.Sum_pcb;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2] =
            asbCubeSatACS_B.Sum_ml;

          /* Product: '<S127>/Product' */
          asbCubeSatACS_B.Product_pp0 = asbCubeSatACS_B.Sum_bg *
            asbCubeSatACS_B.Sum_bg;

          /* Product: '<S127>/Product1' */
          asbCubeSatACS_B.Product1_hp = asbCubeSatACS_B.UnaryMinus_eq *
            asbCubeSatACS_B.UnaryMinus_eq;

          /* Product: '<S127>/Product2' */
          asbCubeSatACS_B.Product2_fv = asbCubeSatACS_B.UnaryMinus1_o *
            asbCubeSatACS_B.UnaryMinus1_o;

          /* Product: '<S127>/Product3' */
          asbCubeSatACS_B.Product3_k = asbCubeSatACS_B.UnaryMinus2_e *
            asbCubeSatACS_B.UnaryMinus2_e;

          /* Sum: '<S127>/Sum' */
          asbCubeSatACS_B.Sum_ik = ((asbCubeSatACS_B.Product_pp0 +
            asbCubeSatACS_B.Product1_hp) + asbCubeSatACS_B.Product2_fv) +
            asbCubeSatACS_B.Product3_k;

          /* Sqrt: '<S126>/sqrt' */
          asbCubeSatACS_B.sqrt_g = std::sqrt(asbCubeSatACS_B.Sum_ik);

          /* Product: '<S122>/Product2' */
          asbCubeSatACS_B.Product2_ah = asbCubeSatACS_B.UnaryMinus1_o /
            asbCubeSatACS_B.sqrt_g;

          /* Product: '<S123>/Product6' */
          asbCubeSatACS_B.Product6_g = asbCubeSatACS_B.Product2_ah *
            asbCubeSatACS_B.Product2_ah;

          /* Product: '<S122>/Product3' */
          asbCubeSatACS_B.Product3_dn = asbCubeSatACS_B.UnaryMinus2_e /
            asbCubeSatACS_B.sqrt_g;

          /* Product: '<S123>/Product7' */
          asbCubeSatACS_B.Product7_hr = asbCubeSatACS_B.Product3_dn *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S123>/Sum3' incorporates:
           *  Constant: '<S123>/Constant'
           */
          asbCubeSatACS_B.Sum3_hf = (0.5 - asbCubeSatACS_B.Product6_g) -
            asbCubeSatACS_B.Product7_hr;

          /* Gain: '<S123>/Gain2' */
          asbCubeSatACS_B.Gain2_dd = 2.0 * asbCubeSatACS_B.Sum3_hf;

          /* Product: '<S123>/Product8' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product8_b = 0.0 * asbCubeSatACS_B.Gain2_dd;

          /* Product: '<S122>/Product1' */
          asbCubeSatACS_B.Product1_l1 = asbCubeSatACS_B.UnaryMinus_eq /
            asbCubeSatACS_B.sqrt_g;

          /* Product: '<S123>/Product' */
          asbCubeSatACS_B.Product_co = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product2_ah;

          /* Product: '<S122>/Product' */
          asbCubeSatACS_B.Product_ki = asbCubeSatACS_B.Sum_bg /
            asbCubeSatACS_B.sqrt_g;

          /* Product: '<S123>/Product1' */
          asbCubeSatACS_B.Product1_hh = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S123>/Sum1' */
          asbCubeSatACS_B.Sum1_ax = asbCubeSatACS_B.Product_co +
            asbCubeSatACS_B.Product1_hh;

          /* Gain: '<S123>/Gain' */
          asbCubeSatACS_B.Gain_e = 2.0 * asbCubeSatACS_B.Sum1_ax;

          /* Product: '<S123>/Product4' */
          asbCubeSatACS_B.Product4_b = asbCubeSatACS_B.Gain_e;

          /* Product: '<S123>/Product2' */
          asbCubeSatACS_B.Product2_k3 = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product2_ah;

          /* Product: '<S123>/Product3' */
          asbCubeSatACS_B.Product3_oa = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S123>/Sum2' */
          asbCubeSatACS_B.Sum2_ib = asbCubeSatACS_B.Product3_oa -
            asbCubeSatACS_B.Product2_k3;

          /* Gain: '<S123>/Gain1' */
          asbCubeSatACS_B.Gain1_lm = 2.0 * asbCubeSatACS_B.Sum2_ib;

          /* Product: '<S123>/Product5' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product5_fa = asbCubeSatACS_B.Gain1_lm * 0.0;

          /* Sum: '<S123>/Sum' */
          asbCubeSatACS_B.Sum_mj = (asbCubeSatACS_B.Product8_b +
            asbCubeSatACS_B.Product4_b) + asbCubeSatACS_B.Product5_fa;

          /* Product: '<S124>/Product' */
          asbCubeSatACS_B.Product_i2 = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product2_ah;

          /* Product: '<S124>/Product1' */
          asbCubeSatACS_B.Product1_ir = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S124>/Sum1' */
          asbCubeSatACS_B.Sum1_g = asbCubeSatACS_B.Product_i2 -
            asbCubeSatACS_B.Product1_ir;

          /* Gain: '<S124>/Gain' */
          asbCubeSatACS_B.Gain_gi = 2.0 * asbCubeSatACS_B.Sum1_g;

          /* Product: '<S124>/Product4' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_oz = 0.0 * asbCubeSatACS_B.Gain_gi;

          /* Product: '<S124>/Product6' */
          asbCubeSatACS_B.Product6_gv = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product1_l1;

          /* Product: '<S124>/Product7' */
          asbCubeSatACS_B.Product7_i = asbCubeSatACS_B.Product3_dn *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S124>/Sum3' incorporates:
           *  Constant: '<S124>/Constant'
           */
          asbCubeSatACS_B.Sum3_cr = (0.5 - asbCubeSatACS_B.Product6_gv) -
            asbCubeSatACS_B.Product7_i;

          /* Gain: '<S124>/Gain2' */
          asbCubeSatACS_B.Gain2_m = 2.0 * asbCubeSatACS_B.Sum3_cr;

          /* Product: '<S124>/Product8' */
          asbCubeSatACS_B.Product8_bm = asbCubeSatACS_B.Gain2_m;

          /* Product: '<S124>/Product2' */
          asbCubeSatACS_B.Product2_ps = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product1_l1;

          /* Product: '<S124>/Product3' */
          asbCubeSatACS_B.Product3_b1 = asbCubeSatACS_B.Product2_ah *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S124>/Sum2' */
          asbCubeSatACS_B.Sum2_a = asbCubeSatACS_B.Product2_ps +
            asbCubeSatACS_B.Product3_b1;

          /* Gain: '<S124>/Gain1' */
          asbCubeSatACS_B.Gain1_h = 2.0 * asbCubeSatACS_B.Sum2_a;

          /* Product: '<S124>/Product5' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product5_nv = asbCubeSatACS_B.Gain1_h * 0.0;

          /* Sum: '<S124>/Sum' */
          asbCubeSatACS_B.Sum_ia = (asbCubeSatACS_B.Product4_oz +
            asbCubeSatACS_B.Product8_bm) + asbCubeSatACS_B.Product5_nv;

          /* Product: '<S125>/Product' */
          asbCubeSatACS_B.Product_c2 = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product3_dn;

          /* Product: '<S125>/Product1' */
          asbCubeSatACS_B.Product1_om = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product2_ah;

          /* Sum: '<S125>/Sum1' */
          asbCubeSatACS_B.Sum1_h1 = asbCubeSatACS_B.Product_c2 +
            asbCubeSatACS_B.Product1_om;

          /* Gain: '<S125>/Gain' */
          asbCubeSatACS_B.Gain_lx = 2.0 * asbCubeSatACS_B.Sum1_h1;

          /* Product: '<S125>/Product4' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_fe = 0.0 * asbCubeSatACS_B.Gain_lx;

          /* Product: '<S125>/Product2' */
          asbCubeSatACS_B.Product2_gr = asbCubeSatACS_B.Product_ki *
            asbCubeSatACS_B.Product1_l1;

          /* Product: '<S125>/Product3' */
          asbCubeSatACS_B.Product3_ju = asbCubeSatACS_B.Product2_ah *
            asbCubeSatACS_B.Product3_dn;

          /* Sum: '<S125>/Sum2' */
          asbCubeSatACS_B.Sum2_h = asbCubeSatACS_B.Product3_ju -
            asbCubeSatACS_B.Product2_gr;

          /* Gain: '<S125>/Gain1' */
          asbCubeSatACS_B.Gain1_b = 2.0 * asbCubeSatACS_B.Sum2_h;

          /* Product: '<S125>/Product5' */
          asbCubeSatACS_B.Product5_k = asbCubeSatACS_B.Gain1_b;

          /* Product: '<S125>/Product6' */
          asbCubeSatACS_B.Product6_bb = asbCubeSatACS_B.Product1_l1 *
            asbCubeSatACS_B.Product1_l1;

          /* Product: '<S125>/Product7' */
          asbCubeSatACS_B.Product7_p = asbCubeSatACS_B.Product2_ah *
            asbCubeSatACS_B.Product2_ah;

          /* Sum: '<S125>/Sum3' incorporates:
           *  Constant: '<S125>/Constant'
           */
          asbCubeSatACS_B.Sum3_n = (0.5 - asbCubeSatACS_B.Product6_bb) -
            asbCubeSatACS_B.Product7_p;

          /* Gain: '<S125>/Gain2' */
          asbCubeSatACS_B.Gain2_a = 2.0 * asbCubeSatACS_B.Sum3_n;

          /* Product: '<S125>/Product8' incorporates:
           *  Constant: '<S7>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product8_i = asbCubeSatACS_B.Gain2_a * 0.0;

          /* Sum: '<S125>/Sum' */
          asbCubeSatACS_B.Sum_kr = (asbCubeSatACS_B.Product4_fe +
            asbCubeSatACS_B.Product5_k) + asbCubeSatACS_B.Product8_i;

          /* SignalConversion generated from: '<S51>/Dot Product2' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[0] =
            asbCubeSatACS_B.Sum_mj;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[1] =
            asbCubeSatACS_B.Sum_ia;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[2] =
            asbCubeSatACS_B.Sum_kr;

          /* DotProduct: '<S51>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[0];
          tmp_0 = u0 * u;

          /* DotProduct: '<S51>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          tmp_2 = u0 * u;

          /* DotProduct: '<S51>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[0];
          tmp_3 = u0 * u;

          /* DotProduct: '<S51>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[1];
          tmp_0 += u0 * u;

          /* DotProduct: '<S51>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          tmp_2 += u0 * u;

          /* DotProduct: '<S51>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[1];
          tmp_3 += u0 * u;

          /* DotProduct: '<S51>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[2];
          tmp_0 += u0 * u;

          /* DotProduct: '<S51>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          tmp_2 += u0 * u;

          /* DotProduct: '<S51>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_j[2];
          tmp_3 += u0 * u;

          /* DotProduct: '<S51>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_o = tmp_0;

          /* DotProduct: '<S51>/Dot Product1' */
          asbCubeSatACS_B.DotProduct1_n = tmp_2;

          /* DotProduct: '<S51>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_c = tmp_3;

          /* Product: '<S51>/Divide1' */
          asbCubeSatACS_B.Divide1_n = asbCubeSatACS_B.DotProduct1_n *
            asbCubeSatACS_B.DotProduct2_c;

          /* Sqrt: '<S51>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_a = std::sqrt(asbCubeSatACS_B.Divide1_n);

          /* Product: '<S51>/Divide' */
          asbCubeSatACS_B.Divide_m = asbCubeSatACS_B.DotProduct3_o /
            asbCubeSatACS_B.Sqrt3_a;

          /* Bias: '<S51>/Bias' */
          asbCubeSatACS_B.Bias_f = asbCubeSatACS_B.Divide_m + -1.0;

          /* Abs: '<S51>/Abs' */
          asbCubeSatACS_B.Abs_o = std::abs(asbCubeSatACS_B.Bias_f);

          /* Bias: '<S51>/Bias1' */
          asbCubeSatACS_B.Bias1_p = asbCubeSatACS_B.Divide_m + 1.0;

          /* Abs: '<S51>/Abs1' */
          asbCubeSatACS_B.Abs1_o = std::abs(asbCubeSatACS_B.Bias1_p);

          /* If: '<S51>/If' */
          if (asbCubeSatACS_B.Abs_o < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
             *  ActionPort: '<S63>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_o);

            /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_o < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S64>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_o);

            /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S65>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_o);

            /* End of Outputs for SubSystem: '<S51>/If Action Subsystem2' */
          }

          /* RelationalOperator: '<S52>/Compare' incorporates:
           *  Constant: '<S52>/Constant'
           */
          asbCubeSatACS_B.Compare_f = (asbCubeSatACS_B.Merge_k != 0.0);

          /* RelationalOperator: '<S53>/Compare' incorporates:
           *  Constant: '<S53>/Constant'
           */
          asbCubeSatACS_B.Compare_l = (asbCubeSatACS_B.Merge_o != 0.0);

          /* Logic: '<S12>/OR' */
          asbCubeSatACS_B.OR_c = (asbCubeSatACS_B.Compare_f ||
            asbCubeSatACS_B.Compare_l);

          /* DotProduct: '<S56>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u = 0.0 * u0;

          /* DotProduct: '<S56>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          tmp_2 = tmp_0 * u0;

          /* DotProduct: '<S77>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          tmp_3 = 0.0 * u0;

          /* DotProduct: '<S77>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[0];
          tmp_4 = tmp_0 * u0;

          /* DotProduct: '<S56>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u += 0.0 * u0;

          /* DotProduct: '<S56>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          tmp_2 += tmp_0 * u0;

          /* DotProduct: '<S77>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          tmp_3 += 0.0 * u0;

          /* DotProduct: '<S77>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[1];
          tmp_4 += tmp_0 * u0;

          /* DotProduct: '<S56>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u += u0;

          /* DotProduct: '<S56>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          tmp_2 += tmp_0 * u0;

          /* DotProduct: '<S77>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          tmp_3 += u0;

          /* DotProduct: '<S77>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_k[2];
          tmp_4 += tmp_0 * u0;

          /* DotProduct: '<S56>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_n = u;

          /* DotProduct: '<S56>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_k = tmp_2;

          /* Product: '<S56>/Divide1' */
          asbCubeSatACS_B.Divide1_nh = asbCubeSatACS_ConstB.DotProduct1_hl *
            asbCubeSatACS_B.DotProduct2_k;

          /* Sqrt: '<S56>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_n = std::sqrt(asbCubeSatACS_B.Divide1_nh);

          /* Sum: '<S56>/Add2' */
          asbCubeSatACS_B.Add2_c = asbCubeSatACS_B.DotProduct3_n +
            asbCubeSatACS_B.Sqrt3_n;

          /* Product: '<S90>/Product' */
          asbCubeSatACS_B.Product_e0 = asbCubeSatACS_B.Add2_c *
            asbCubeSatACS_B.Add2_c;

          /* DotProduct: '<S77>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_b = tmp_3;

          /* DotProduct: '<S77>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_n = tmp_4;

          /* Product: '<S77>/Divide1' */
          asbCubeSatACS_B.Divide1_nj = asbCubeSatACS_ConstB.DotProduct1_p *
            asbCubeSatACS_B.DotProduct2_n;

          /* Sqrt: '<S77>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_ko = std::sqrt(asbCubeSatACS_B.Divide1_nj);

          /* Product: '<S77>/Divide' */
          asbCubeSatACS_B.Divide_l = asbCubeSatACS_B.DotProduct3_b /
            asbCubeSatACS_B.Sqrt3_ko;

          /* Bias: '<S77>/Bias' */
          asbCubeSatACS_B.Bias_a = asbCubeSatACS_B.Divide_l + -1.0;

          /* Abs: '<S77>/Abs' */
          asbCubeSatACS_B.Abs_m = std::abs(asbCubeSatACS_B.Bias_a);

          /* Bias: '<S77>/Bias1' */
          asbCubeSatACS_B.Bias1_m = asbCubeSatACS_B.Divide_l + 1.0;

          /* Abs: '<S77>/Abs1' */
          asbCubeSatACS_B.Abs1_m = std::abs(asbCubeSatACS_B.Bias1_m);

          /* If: '<S77>/If' */
          if (asbCubeSatACS_B.Abs_m < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
             *  ActionPort: '<S83>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_a);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_m < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S84>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_a);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S85>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_a);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem2' */
          }

          /* RelationalOperator: '<S78>/Compare' incorporates:
           *  Constant: '<S78>/Constant'
           */
          asbCubeSatACS_B.Compare_fr = (asbCubeSatACS_B.Merge_a != -1.0);

          /* Switch: '<S56>/is 180deg Rot' */
          if (asbCubeSatACS_B.Compare_fr) {
            /* Product: '<S82>/j x i' incorporates:
             *  Constant: '<S7>/primaryAlignment'
             */
            asbCubeSatACS_B.jxi_l = 0.0 * asbCubeSatACS_B.Sum_ah;

            /* Product: '<S82>/i x k' incorporates:
             *  Constant: '<S7>/primaryAlignment'
             */
            asbCubeSatACS_B.ixk_l = 0.0 * asbCubeSatACS_B.Sum_ml;

            /* Product: '<S82>/k x j' */
            asbCubeSatACS_B.kxj_b = asbCubeSatACS_B.Sum_pcb;

            /* Product: '<S81>/i x j' incorporates:
             *  Constant: '<S7>/primaryAlignment'
             */
            asbCubeSatACS_B.ixj_j = 0.0 * asbCubeSatACS_B.Sum_pcb;

            /* Product: '<S81>/k x i' */
            asbCubeSatACS_B.kxi_o = asbCubeSatACS_B.Sum_ah;

            /* Product: '<S81>/j x k' incorporates:
             *  Constant: '<S7>/primaryAlignment'
             */
            asbCubeSatACS_B.jxk_hle = 0.0 * asbCubeSatACS_B.Sum_ml;

            /* Sum: '<S76>/Sum' */
            asbCubeSatACS_B.Sum_do[0] = asbCubeSatACS_B.jxk_hle -
              asbCubeSatACS_B.kxj_b;
            asbCubeSatACS_B.Sum_do[1] = asbCubeSatACS_B.kxi_o -
              asbCubeSatACS_B.ixk_l;
            asbCubeSatACS_B.Sum_do[2] = asbCubeSatACS_B.ixj_j -
              asbCubeSatACS_B.jxi_l;

            /* Switch: '<S56>/is 180deg Rot' */
            asbCubeSatACS_B.is180degRot_p[0] = asbCubeSatACS_B.Sum_do[0];
            asbCubeSatACS_B.is180degRot_p[1] = asbCubeSatACS_B.Sum_do[1];
            asbCubeSatACS_B.is180degRot_p[2] = asbCubeSatACS_B.Sum_do[2];
          } else {
            /* Switch: '<S56>/is 180deg Rot' */
            asbCubeSatACS_B.is180degRot_p[0] = asbCubeSatACS_ConstB.Sum_c[0];
            asbCubeSatACS_B.is180degRot_p[1] = asbCubeSatACS_ConstB.Sum_c[1];
            asbCubeSatACS_B.is180degRot_p[2] = asbCubeSatACS_ConstB.Sum_c[2];
          }

          /* Product: '<S90>/Product1' */
          asbCubeSatACS_B.Product1_k = asbCubeSatACS_B.is180degRot_p[0] *
            asbCubeSatACS_B.is180degRot_p[0];

          /* Product: '<S90>/Product2' */
          asbCubeSatACS_B.Product2_hd = asbCubeSatACS_B.is180degRot_p[1] *
            asbCubeSatACS_B.is180degRot_p[1];

          /* Product: '<S90>/Product3' */
          asbCubeSatACS_B.Product3_hx = asbCubeSatACS_B.is180degRot_p[2] *
            asbCubeSatACS_B.is180degRot_p[2];

          /* Sum: '<S90>/Sum' */
          asbCubeSatACS_B.Sum_p1 = ((asbCubeSatACS_B.Product_e0 +
            asbCubeSatACS_B.Product1_k) + asbCubeSatACS_B.Product2_hd) +
            asbCubeSatACS_B.Product3_hx;

          /* Sqrt: '<S89>/sqrt' */
          asbCubeSatACS_B.sqrt_e5 = std::sqrt(asbCubeSatACS_B.Sum_p1);

          /* Product: '<S80>/Product' */
          asbCubeSatACS_B.Product_fd = asbCubeSatACS_B.Add2_c /
            asbCubeSatACS_B.sqrt_e5;

          /* Product: '<S114>/j x k' */
          asbCubeSatACS_B.jxk_i = asbCubeSatACS_B.Sum_pcb *
            asbCubeSatACS_B.Sum_kr;

          /* Product: '<S114>/k x i' */
          asbCubeSatACS_B.kxi_p = asbCubeSatACS_B.Sum_ml *
            asbCubeSatACS_B.Sum_mj;

          /* Product: '<S114>/i x j' */
          asbCubeSatACS_B.ixj_gk = asbCubeSatACS_B.Sum_ah *
            asbCubeSatACS_B.Sum_ia;

          /* Product: '<S115>/k x j' */
          asbCubeSatACS_B.kxj_n = asbCubeSatACS_B.Sum_ml *
            asbCubeSatACS_B.Sum_ia;

          /* Product: '<S115>/i x k' */
          asbCubeSatACS_B.ixk_hg = asbCubeSatACS_B.Sum_ah *
            asbCubeSatACS_B.Sum_kr;

          /* Product: '<S115>/j x i' */
          asbCubeSatACS_B.jxi_dy = asbCubeSatACS_B.Sum_pcb *
            asbCubeSatACS_B.Sum_mj;

          /* Sum: '<S112>/Sum' */
          asbCubeSatACS_B.Sum_ab[0] = asbCubeSatACS_B.jxk_i -
            asbCubeSatACS_B.kxj_n;
          asbCubeSatACS_B.Sum_ab[1] = asbCubeSatACS_B.kxi_p -
            asbCubeSatACS_B.ixk_hg;
          asbCubeSatACS_B.Sum_ab[2] = asbCubeSatACS_B.ixj_gk -
            asbCubeSatACS_B.jxi_dy;

          /* Product: '<S116>/j x k' */
          asbCubeSatACS_B.jxk_h = asbCubeSatACS_B.Sum_ab[1] *
            asbCubeSatACS_B.Sum_ml;

          /* Product: '<S116>/k x i' */
          asbCubeSatACS_B.kxi_f2 = asbCubeSatACS_B.Sum_ab[2] *
            asbCubeSatACS_B.Sum_ah;

          /* Product: '<S116>/i x j' */
          asbCubeSatACS_B.ixj_e = asbCubeSatACS_B.Sum_ab[0] *
            asbCubeSatACS_B.Sum_pcb;

          /* Product: '<S117>/k x j' */
          asbCubeSatACS_B.kxj_op = asbCubeSatACS_B.Sum_ab[2] *
            asbCubeSatACS_B.Sum_pcb;

          /* Product: '<S117>/i x k' */
          asbCubeSatACS_B.ixk_k = asbCubeSatACS_B.Sum_ab[0] *
            asbCubeSatACS_B.Sum_ml;

          /* Product: '<S117>/j x i' */
          asbCubeSatACS_B.jxi_g0 = asbCubeSatACS_B.Sum_ab[1] *
            asbCubeSatACS_B.Sum_ah;

          /* Sum: '<S113>/Sum' */
          asbCubeSatACS_B.Sum_gf[0] = asbCubeSatACS_B.jxk_h -
            asbCubeSatACS_B.kxj_op;
          asbCubeSatACS_B.Sum_gf[1] = asbCubeSatACS_B.kxi_f2 -
            asbCubeSatACS_B.ixk_k;
          asbCubeSatACS_B.Sum_gf[2] = asbCubeSatACS_B.ixj_e -
            asbCubeSatACS_B.jxi_g0;

          /* Product: '<S80>/Product2' */
          asbCubeSatACS_B.Product2_jl = asbCubeSatACS_B.is180degRot_p[1] /
            asbCubeSatACS_B.sqrt_e5;

          /* Product: '<S75>/Product' */
          asbCubeSatACS_B.Product_l = asbCubeSatACS_B.Product_fd *
            asbCubeSatACS_B.Product_fd;

          /* Product: '<S80>/Product1' */
          asbCubeSatACS_B.Product1_ex = asbCubeSatACS_B.is180degRot_p[0] /
            asbCubeSatACS_B.sqrt_e5;

          /* Product: '<S75>/Product1' */
          asbCubeSatACS_B.Product1_ef = asbCubeSatACS_B.Product1_ex *
            asbCubeSatACS_B.Product1_ex;

          /* Product: '<S75>/Product2' */
          asbCubeSatACS_B.Product2_b = asbCubeSatACS_B.Product2_jl *
            asbCubeSatACS_B.Product2_jl;

          /* Product: '<S80>/Product3' */
          asbCubeSatACS_B.Product3_l = asbCubeSatACS_B.is180degRot_p[2] /
            asbCubeSatACS_B.sqrt_e5;

          /* Product: '<S75>/Product3' */
          asbCubeSatACS_B.Product3_hv = asbCubeSatACS_B.Product3_l *
            asbCubeSatACS_B.Product3_l;

          /* Sum: '<S75>/Sum' */
          asbCubeSatACS_B.Sum_j3 = ((asbCubeSatACS_B.Product_l +
            asbCubeSatACS_B.Product1_ef) + asbCubeSatACS_B.Product2_b) +
            asbCubeSatACS_B.Product3_hv;

          /* Sqrt: '<S74>/sqrt' */
          asbCubeSatACS_B.sqrt_bh = std::sqrt(asbCubeSatACS_B.Sum_j3);

          /* Product: '<S70>/Product2' */
          asbCubeSatACS_B.Product2_g5 = asbCubeSatACS_B.Product2_jl /
            asbCubeSatACS_B.sqrt_bh;

          /* Product: '<S71>/Product6' */
          asbCubeSatACS_B.Product6_f = asbCubeSatACS_B.Product2_g5 *
            asbCubeSatACS_B.Product2_g5;

          /* Product: '<S70>/Product3' */
          asbCubeSatACS_B.Product3_fb = asbCubeSatACS_B.Product3_l /
            asbCubeSatACS_B.sqrt_bh;

          /* Product: '<S71>/Product7' */
          asbCubeSatACS_B.Product7_d = asbCubeSatACS_B.Product3_fb *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S71>/Sum3' incorporates:
           *  Constant: '<S71>/Constant'
           */
          asbCubeSatACS_B.Sum3_dm = (0.5 - asbCubeSatACS_B.Product6_f) -
            asbCubeSatACS_B.Product7_d;

          /* Gain: '<S71>/Gain2' */
          asbCubeSatACS_B.Gain2_mk = 2.0 * asbCubeSatACS_B.Sum3_dm;

          /* Product: '<S71>/Product8' */
          asbCubeSatACS_B.Product8_pc = asbCubeSatACS_B.Sum_gf[0] *
            asbCubeSatACS_B.Gain2_mk;

          /* Product: '<S70>/Product1' */
          asbCubeSatACS_B.Product1_o5 = asbCubeSatACS_B.Product1_ex /
            asbCubeSatACS_B.sqrt_bh;

          /* Product: '<S71>/Product' */
          asbCubeSatACS_B.Product_ak = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product2_g5;

          /* Product: '<S70>/Product' */
          asbCubeSatACS_B.Product_im = asbCubeSatACS_B.Product_fd /
            asbCubeSatACS_B.sqrt_bh;

          /* Product: '<S71>/Product1' */
          asbCubeSatACS_B.Product1_jv = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S71>/Sum1' */
          asbCubeSatACS_B.Sum1_jd = asbCubeSatACS_B.Product_ak +
            asbCubeSatACS_B.Product1_jv;

          /* Gain: '<S71>/Gain' */
          asbCubeSatACS_B.Gain_bh = 2.0 * asbCubeSatACS_B.Sum1_jd;

          /* Product: '<S71>/Product4' */
          asbCubeSatACS_B.Product4_j = asbCubeSatACS_B.Gain_bh *
            asbCubeSatACS_B.Sum_gf[1];

          /* Product: '<S71>/Product2' */
          asbCubeSatACS_B.Product2_ls = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product2_g5;

          /* Product: '<S71>/Product3' */
          asbCubeSatACS_B.Product3_kc = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S71>/Sum2' */
          asbCubeSatACS_B.Sum2_d4 = asbCubeSatACS_B.Product3_kc -
            asbCubeSatACS_B.Product2_ls;

          /* Gain: '<S71>/Gain1' */
          asbCubeSatACS_B.Gain1_a = 2.0 * asbCubeSatACS_B.Sum2_d4;

          /* Product: '<S71>/Product5' */
          asbCubeSatACS_B.Product5_jf = asbCubeSatACS_B.Gain1_a *
            asbCubeSatACS_B.Sum_gf[2];

          /* Sum: '<S71>/Sum' */
          asbCubeSatACS_B.Sum_ev = (asbCubeSatACS_B.Product8_pc +
            asbCubeSatACS_B.Product4_j) + asbCubeSatACS_B.Product5_jf;

          /* Product: '<S72>/Product' */
          asbCubeSatACS_B.Product_j = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product2_g5;

          /* Product: '<S72>/Product1' */
          asbCubeSatACS_B.Product1_bo = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S72>/Sum1' */
          asbCubeSatACS_B.Sum1_cy = asbCubeSatACS_B.Product_j -
            asbCubeSatACS_B.Product1_bo;

          /* Gain: '<S72>/Gain' */
          asbCubeSatACS_B.Gain_n4 = 2.0 * asbCubeSatACS_B.Sum1_cy;

          /* Product: '<S72>/Product4' */
          asbCubeSatACS_B.Product4_mx = asbCubeSatACS_B.Sum_gf[0] *
            asbCubeSatACS_B.Gain_n4;

          /* Product: '<S72>/Product6' */
          asbCubeSatACS_B.Product6_mq = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product1_o5;

          /* Product: '<S72>/Product7' */
          asbCubeSatACS_B.Product7_cs = asbCubeSatACS_B.Product3_fb *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S72>/Sum3' incorporates:
           *  Constant: '<S72>/Constant'
           */
          asbCubeSatACS_B.Sum3_g = (0.5 - asbCubeSatACS_B.Product6_mq) -
            asbCubeSatACS_B.Product7_cs;

          /* Gain: '<S72>/Gain2' */
          asbCubeSatACS_B.Gain2_g = 2.0 * asbCubeSatACS_B.Sum3_g;

          /* Product: '<S72>/Product8' */
          asbCubeSatACS_B.Product8_cw = asbCubeSatACS_B.Gain2_g *
            asbCubeSatACS_B.Sum_gf[1];

          /* Product: '<S72>/Product2' */
          asbCubeSatACS_B.Product2_a0 = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product1_o5;

          /* Product: '<S72>/Product3' */
          asbCubeSatACS_B.Product3_a4 = asbCubeSatACS_B.Product2_g5 *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S72>/Sum2' */
          asbCubeSatACS_B.Sum2_j = asbCubeSatACS_B.Product2_a0 +
            asbCubeSatACS_B.Product3_a4;

          /* Gain: '<S72>/Gain1' */
          asbCubeSatACS_B.Gain1_bl = 2.0 * asbCubeSatACS_B.Sum2_j;

          /* Product: '<S72>/Product5' */
          asbCubeSatACS_B.Product5_ge = asbCubeSatACS_B.Gain1_bl *
            asbCubeSatACS_B.Sum_gf[2];

          /* Sum: '<S72>/Sum' */
          asbCubeSatACS_B.Sum_ow = (asbCubeSatACS_B.Product4_mx +
            asbCubeSatACS_B.Product8_cw) + asbCubeSatACS_B.Product5_ge;

          /* Product: '<S73>/Product' */
          asbCubeSatACS_B.Product_b3 = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product3_fb;

          /* Product: '<S73>/Product1' */
          asbCubeSatACS_B.Product1_ph = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product2_g5;

          /* Sum: '<S73>/Sum1' */
          asbCubeSatACS_B.Sum1_b2 = asbCubeSatACS_B.Product_b3 +
            asbCubeSatACS_B.Product1_ph;

          /* Gain: '<S73>/Gain' */
          asbCubeSatACS_B.Gain_lj = 2.0 * asbCubeSatACS_B.Sum1_b2;

          /* Product: '<S73>/Product4' */
          asbCubeSatACS_B.Product4_pw = asbCubeSatACS_B.Sum_gf[0] *
            asbCubeSatACS_B.Gain_lj;

          /* Product: '<S73>/Product2' */
          asbCubeSatACS_B.Product2_cw = asbCubeSatACS_B.Product_im *
            asbCubeSatACS_B.Product1_o5;

          /* Product: '<S73>/Product3' */
          asbCubeSatACS_B.Product3_ix = asbCubeSatACS_B.Product2_g5 *
            asbCubeSatACS_B.Product3_fb;

          /* Sum: '<S73>/Sum2' */
          asbCubeSatACS_B.Sum2_dn = asbCubeSatACS_B.Product3_ix -
            asbCubeSatACS_B.Product2_cw;

          /* Gain: '<S73>/Gain1' */
          asbCubeSatACS_B.Gain1_lm3 = 2.0 * asbCubeSatACS_B.Sum2_dn;

          /* Product: '<S73>/Product5' */
          asbCubeSatACS_B.Product5_jz = asbCubeSatACS_B.Gain1_lm3 *
            asbCubeSatACS_B.Sum_gf[1];

          /* Product: '<S73>/Product6' */
          asbCubeSatACS_B.Product6_mo = asbCubeSatACS_B.Product1_o5 *
            asbCubeSatACS_B.Product1_o5;

          /* Product: '<S73>/Product7' */
          asbCubeSatACS_B.Product7_mi = asbCubeSatACS_B.Product2_g5 *
            asbCubeSatACS_B.Product2_g5;

          /* Sum: '<S73>/Sum3' incorporates:
           *  Constant: '<S73>/Constant'
           */
          asbCubeSatACS_B.Sum3_al = (0.5 - asbCubeSatACS_B.Product6_mo) -
            asbCubeSatACS_B.Product7_mi;

          /* Gain: '<S73>/Gain2' */
          asbCubeSatACS_B.Gain2_pg = 2.0 * asbCubeSatACS_B.Sum3_al;

          /* Product: '<S73>/Product8' */
          asbCubeSatACS_B.Product8_bz = asbCubeSatACS_B.Gain2_pg *
            asbCubeSatACS_B.Sum_gf[2];

          /* Sum: '<S73>/Sum' */
          asbCubeSatACS_B.Sum_on = (asbCubeSatACS_B.Product4_pw +
            asbCubeSatACS_B.Product5_jz) + asbCubeSatACS_B.Product8_bz;

          /* SignalConversion generated from: '<S92>/Dot Product2' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0] =
            asbCubeSatACS_B.Sum_ev;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1] =
            asbCubeSatACS_B.Sum_ow;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2] =
            asbCubeSatACS_B.Sum_on;

          /* DotProduct: '<S92>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
          u = asbCubeSatACS_ConstB.Sum_e[0] * u0;

          /* DotProduct: '<S92>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
          tmp_2 = u0 * tmp_0;

          /* DotProduct: '<S92>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
          u += asbCubeSatACS_ConstB.Sum_e[1] * u0;

          /* DotProduct: '<S92>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
          tmp_2 += u0 * tmp_0;

          /* DotProduct: '<S92>/Dot Product3' incorporates:
           *  Sum: '<S107>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
          u += asbCubeSatACS_ConstB.Sum_e[2] * u0;

          /* DotProduct: '<S92>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
          tmp_2 += u0 * tmp_0;

          /* DotProduct: '<S92>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_m = u;

          /* DotProduct: '<S92>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_ck = tmp_2;

          /* Product: '<S92>/Divide1' */
          asbCubeSatACS_B.Divide1_dp = asbCubeSatACS_ConstB.DotProduct1_b *
            asbCubeSatACS_B.DotProduct2_ck;

          /* Sqrt: '<S92>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_av = std::sqrt(asbCubeSatACS_B.Divide1_dp);

          /* Product: '<S92>/Divide' */
          asbCubeSatACS_B.Divide_f = asbCubeSatACS_B.DotProduct3_m /
            asbCubeSatACS_B.Sqrt3_av;

          /* Bias: '<S92>/Bias' */
          asbCubeSatACS_B.Bias_c = asbCubeSatACS_B.Divide_f + -1.0;

          /* Abs: '<S92>/Abs' */
          asbCubeSatACS_B.Abs_k = std::abs(asbCubeSatACS_B.Bias_c);

          /* Bias: '<S92>/Bias1' */
          asbCubeSatACS_B.Bias1_fx = asbCubeSatACS_B.Divide_f + 1.0;

          /* Abs: '<S92>/Abs1' */
          asbCubeSatACS_B.Abs1_md = std::abs(asbCubeSatACS_B.Bias1_fx);

          /* If: '<S92>/If' */
          if (asbCubeSatACS_B.Abs_k < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
             *  ActionPort: '<S98>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_di);

            /* End of Outputs for SubSystem: '<S92>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_md < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S99>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_di);

            /* End of Outputs for SubSystem: '<S92>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S100>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_di);

            /* End of Outputs for SubSystem: '<S92>/If Action Subsystem2' */
          }

          /* Switch: '<S12>/Switch' */
          if (asbCubeSatACS_B.OR_c) {
            /* Switch: '<S12>/Switch' */
            asbCubeSatACS_B.Switch_p[0] = asbCubeSatACS_B.Product_fd;
            asbCubeSatACS_B.Switch_p[1] = asbCubeSatACS_B.Product1_ex;
            asbCubeSatACS_B.Switch_p[2] = asbCubeSatACS_B.Product2_jl;
            asbCubeSatACS_B.Switch_p[3] = asbCubeSatACS_B.Product3_l;
          } else {
            /* RelationalOperator: '<S93>/Compare' incorporates:
             *  Constant: '<S93>/Constant'
             */
            asbCubeSatACS_B.Compare_b = (asbCubeSatACS_B.Merge_di != -1.0);

            /* Switch: '<S57>/is 180deg Rot' */
            if (asbCubeSatACS_B.Compare_b) {
              /* Product: '<S97>/j x i' */
              asbCubeSatACS_B.jxi_di = asbCubeSatACS_ConstB.Sum_e[1] *
                asbCubeSatACS_B.Sum_ev;

              /* Product: '<S97>/i x k' */
              asbCubeSatACS_B.ixk_i = asbCubeSatACS_ConstB.Sum_e[0] *
                asbCubeSatACS_B.Sum_on;

              /* Product: '<S97>/k x j' */
              asbCubeSatACS_B.kxj_eu = asbCubeSatACS_ConstB.Sum_e[2] *
                asbCubeSatACS_B.Sum_ow;

              /* Product: '<S96>/i x j' */
              asbCubeSatACS_B.ixj_h = asbCubeSatACS_ConstB.Sum_e[0] *
                asbCubeSatACS_B.Sum_ow;

              /* Product: '<S96>/k x i' */
              asbCubeSatACS_B.kxi_k = asbCubeSatACS_ConstB.Sum_e[2] *
                asbCubeSatACS_B.Sum_ev;

              /* Product: '<S96>/j x k' */
              asbCubeSatACS_B.jxk_hl = asbCubeSatACS_ConstB.Sum_e[1] *
                asbCubeSatACS_B.Sum_on;

              /* Sum: '<S91>/Sum' */
              asbCubeSatACS_B.Sum_gh[0] = asbCubeSatACS_B.jxk_hl -
                asbCubeSatACS_B.kxj_eu;
              asbCubeSatACS_B.Sum_gh[1] = asbCubeSatACS_B.kxi_k -
                asbCubeSatACS_B.ixk_i;
              asbCubeSatACS_B.Sum_gh[2] = asbCubeSatACS_B.ixj_h -
                asbCubeSatACS_B.jxi_di;

              /* Switch: '<S57>/is 180deg Rot' */
              asbCubeSatACS_B.is180degRot_o[0] = asbCubeSatACS_B.Sum_gh[0];
              asbCubeSatACS_B.is180degRot_o[1] = asbCubeSatACS_B.Sum_gh[1];
              asbCubeSatACS_B.is180degRot_o[2] = asbCubeSatACS_B.Sum_gh[2];
            } else {
              /* Switch: '<S57>/is 180deg Rot' */
              asbCubeSatACS_B.is180degRot_o[0] = asbCubeSatACS_ConstB.Sum_ij[0];
              asbCubeSatACS_B.is180degRot_o[1] = asbCubeSatACS_ConstB.Sum_ij[1];
              asbCubeSatACS_B.is180degRot_o[2] = asbCubeSatACS_ConstB.Sum_ij[2];
            }

            /* Product: '<S105>/Product3' */
            asbCubeSatACS_B.Product3_fl = asbCubeSatACS_B.is180degRot_o[2] *
              asbCubeSatACS_B.is180degRot_o[2];

            /* Product: '<S105>/Product2' */
            asbCubeSatACS_B.Product2_jr = asbCubeSatACS_B.is180degRot_o[1] *
              asbCubeSatACS_B.is180degRot_o[1];

            /* Product: '<S105>/Product1' */
            asbCubeSatACS_B.Product1_ig = asbCubeSatACS_B.is180degRot_o[0] *
              asbCubeSatACS_B.is180degRot_o[0];

            /* DotProduct: '<S57>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
            tmp_0 = u0 * u;

            /* DotProduct: '<S57>/Dot Product3' incorporates:
             *  Sum: '<S107>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[0];
            tmp_2 = asbCubeSatACS_ConstB.Sum_e[0] * u0;

            /* DotProduct: '<S57>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
            tmp_0 += u0 * u;

            /* DotProduct: '<S57>/Dot Product3' incorporates:
             *  Sum: '<S107>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[1];
            tmp_2 += asbCubeSatACS_ConstB.Sum_e[1] * u0;

            /* DotProduct: '<S57>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
            tmp_0 += u0 * u;

            /* DotProduct: '<S57>/Dot Product3' incorporates:
             *  Sum: '<S107>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_c[2];
            tmp_2 += asbCubeSatACS_ConstB.Sum_e[2] * u0;

            /* DotProduct: '<S57>/Dot Product2' */
            asbCubeSatACS_B.DotProduct2_ci = tmp_0;

            /* Product: '<S57>/Divide1' */
            asbCubeSatACS_B.Divide1_nv = asbCubeSatACS_ConstB.DotProduct1_d *
              asbCubeSatACS_B.DotProduct2_ci;

            /* Sqrt: '<S57>/Sqrt3' */
            asbCubeSatACS_B.Sqrt3_m = std::sqrt(asbCubeSatACS_B.Divide1_nv);

            /* DotProduct: '<S57>/Dot Product3' */
            asbCubeSatACS_B.DotProduct3_a = tmp_2;

            /* Sum: '<S57>/Add2' */
            asbCubeSatACS_B.Add2_e = asbCubeSatACS_B.DotProduct3_a +
              asbCubeSatACS_B.Sqrt3_m;

            /* Product: '<S105>/Product' */
            asbCubeSatACS_B.Product_f4 = asbCubeSatACS_B.Add2_e *
              asbCubeSatACS_B.Add2_e;

            /* Sum: '<S105>/Sum' */
            asbCubeSatACS_B.Sum_gz = ((asbCubeSatACS_B.Product_f4 +
              asbCubeSatACS_B.Product1_ig) + asbCubeSatACS_B.Product2_jr) +
              asbCubeSatACS_B.Product3_fl;

            /* Sqrt: '<S104>/sqrt' */
            asbCubeSatACS_B.sqrt_c = std::sqrt(asbCubeSatACS_B.Sum_gz);

            /* Product: '<S95>/Product3' */
            asbCubeSatACS_B.Product3_md = asbCubeSatACS_B.is180degRot_o[2] /
              asbCubeSatACS_B.sqrt_c;

            /* Product: '<S66>/Product3' */
            asbCubeSatACS_B.Product3_e5 = asbCubeSatACS_B.Product3_l *
              asbCubeSatACS_B.Product3_md;

            /* Product: '<S95>/Product2' */
            asbCubeSatACS_B.Product2_pn = asbCubeSatACS_B.is180degRot_o[1] /
              asbCubeSatACS_B.sqrt_c;

            /* Product: '<S66>/Product2' */
            asbCubeSatACS_B.Product2_iy = asbCubeSatACS_B.Product2_jl *
              asbCubeSatACS_B.Product2_pn;

            /* Product: '<S95>/Product1' */
            asbCubeSatACS_B.Product1_di = asbCubeSatACS_B.is180degRot_o[0] /
              asbCubeSatACS_B.sqrt_c;

            /* Product: '<S66>/Product1' */
            asbCubeSatACS_B.Product1_g4 = asbCubeSatACS_B.Product1_ex *
              asbCubeSatACS_B.Product1_di;

            /* Product: '<S95>/Product' */
            asbCubeSatACS_B.Product_hb = asbCubeSatACS_B.Add2_e /
              asbCubeSatACS_B.sqrt_c;

            /* Product: '<S66>/Product' */
            asbCubeSatACS_B.Product_ek = asbCubeSatACS_B.Product_fd *
              asbCubeSatACS_B.Product_hb;

            /* Sum: '<S66>/Sum' */
            asbCubeSatACS_B.Sum_cu = ((asbCubeSatACS_B.Product_ek -
              asbCubeSatACS_B.Product1_g4) - asbCubeSatACS_B.Product2_iy) -
              asbCubeSatACS_B.Product3_e5;

            /* Product: '<S67>/Product3' */
            asbCubeSatACS_B.Product3_g = asbCubeSatACS_B.Product3_l *
              asbCubeSatACS_B.Product2_pn;

            /* Product: '<S67>/Product2' */
            asbCubeSatACS_B.Product2_gy = asbCubeSatACS_B.Product2_jl *
              asbCubeSatACS_B.Product3_md;

            /* Product: '<S67>/Product1' */
            asbCubeSatACS_B.Product1_kh = asbCubeSatACS_B.Product1_ex *
              asbCubeSatACS_B.Product_hb;

            /* Product: '<S67>/Product' */
            asbCubeSatACS_B.Product_p5 = asbCubeSatACS_B.Product_fd *
              asbCubeSatACS_B.Product1_di;

            /* Sum: '<S67>/Sum' */
            asbCubeSatACS_B.Sum_od = ((asbCubeSatACS_B.Product_p5 +
              asbCubeSatACS_B.Product1_kh) + asbCubeSatACS_B.Product2_gy) -
              asbCubeSatACS_B.Product3_g;

            /* Product: '<S68>/Product3' */
            asbCubeSatACS_B.Product3_mq = asbCubeSatACS_B.Product3_l *
              asbCubeSatACS_B.Product1_di;

            /* Product: '<S68>/Product2' */
            asbCubeSatACS_B.Product2_o4z = asbCubeSatACS_B.Product2_jl *
              asbCubeSatACS_B.Product_hb;

            /* Product: '<S68>/Product1' */
            asbCubeSatACS_B.Product1_iw = asbCubeSatACS_B.Product1_ex *
              asbCubeSatACS_B.Product3_md;

            /* Product: '<S68>/Product' */
            asbCubeSatACS_B.Product_hu = asbCubeSatACS_B.Product_fd *
              asbCubeSatACS_B.Product2_pn;

            /* Sum: '<S68>/Sum' */
            asbCubeSatACS_B.Sum_krr = ((asbCubeSatACS_B.Product_hu -
              asbCubeSatACS_B.Product1_iw) + asbCubeSatACS_B.Product2_o4z) +
              asbCubeSatACS_B.Product3_mq;

            /* Product: '<S69>/Product3' */
            asbCubeSatACS_B.Product3_ics = asbCubeSatACS_B.Product3_l *
              asbCubeSatACS_B.Product_hb;

            /* Product: '<S69>/Product2' */
            asbCubeSatACS_B.Product2_au = asbCubeSatACS_B.Product2_jl *
              asbCubeSatACS_B.Product1_di;

            /* Product: '<S69>/Product1' */
            asbCubeSatACS_B.Product1_a0 = asbCubeSatACS_B.Product1_ex *
              asbCubeSatACS_B.Product2_pn;

            /* Product: '<S69>/Product' */
            asbCubeSatACS_B.Product_nm = asbCubeSatACS_B.Product_fd *
              asbCubeSatACS_B.Product3_md;

            /* Sum: '<S69>/Sum' */
            asbCubeSatACS_B.Sum_mi = ((asbCubeSatACS_B.Product_nm +
              asbCubeSatACS_B.Product1_a0) - asbCubeSatACS_B.Product2_au) +
              asbCubeSatACS_B.Product3_ics;

            /* Switch: '<S12>/Switch' */
            asbCubeSatACS_B.Switch_p[0] = asbCubeSatACS_B.Sum_cu;
            asbCubeSatACS_B.Switch_p[1] = asbCubeSatACS_B.Sum_od;
            asbCubeSatACS_B.Switch_p[2] = asbCubeSatACS_B.Sum_krr;
            asbCubeSatACS_B.Switch_p[3] = asbCubeSatACS_B.Sum_mi;
          }

          /* Merge: '<S3>/ Merge 1' incorporates:
           *  SignalConversion generated from: '<S5>/cmd_q_b2tgt'
           */
          asbCubeSatACS_B.cmd_q_b2tgt[0] = asbCubeSatACS_B.Switch_p[0];
          asbCubeSatACS_B.cmd_q_b2tgt[1] = asbCubeSatACS_B.Switch_p[1];
          asbCubeSatACS_B.cmd_q_b2tgt[2] = asbCubeSatACS_B.Switch_p[2];
          asbCubeSatACS_B.cmd_q_b2tgt[3] = asbCubeSatACS_B.Switch_p[3];

          /* Product: '<S135>/Product' */
          asbCubeSatACS_B.Product_mx = asbCubeSatACS_B.Switch_p[0] *
            asbCubeSatACS_B.Switch_p[0];

          /* Product: '<S135>/Product1' */
          asbCubeSatACS_B.Product1_fz = asbCubeSatACS_B.Switch_p[1] *
            asbCubeSatACS_B.Switch_p[1];

          /* Product: '<S135>/Product2' */
          asbCubeSatACS_B.Product2_p4 = asbCubeSatACS_B.Switch_p[2] *
            asbCubeSatACS_B.Switch_p[2];

          /* Product: '<S135>/Product3' */
          asbCubeSatACS_B.Product3_kb = asbCubeSatACS_B.Switch_p[3] *
            asbCubeSatACS_B.Switch_p[3];

          /* Sum: '<S135>/Sum' */
          asbCubeSatACS_B.Sum_ka = ((asbCubeSatACS_B.Product_mx +
            asbCubeSatACS_B.Product1_fz) + asbCubeSatACS_B.Product2_p4) +
            asbCubeSatACS_B.Product3_kb;

          /* Sqrt: '<S134>/sqrt' */
          asbCubeSatACS_B.sqrt_j = std::sqrt(asbCubeSatACS_B.Sum_ka);

          /* Product: '<S129>/Product' */
          asbCubeSatACS_B.Product_j5 = asbCubeSatACS_B.Switch_p[0] /
            asbCubeSatACS_B.sqrt_j;

          /* Product: '<S129>/Product1' */
          asbCubeSatACS_B.Product1_ik = asbCubeSatACS_B.Switch_p[1] /
            asbCubeSatACS_B.sqrt_j;

          /* Product: '<S129>/Product2' */
          asbCubeSatACS_B.Product2_ev = asbCubeSatACS_B.Switch_p[2] /
            asbCubeSatACS_B.sqrt_j;

          /* Product: '<S129>/Product3' */
          asbCubeSatACS_B.Product3_fq1 = asbCubeSatACS_B.Switch_p[3] /
            asbCubeSatACS_B.sqrt_j;

          /* Fcn: '<S9>/fcn3' */
          asbCubeSatACS_B.fcn3_l = (asbCubeSatACS_B.Product1_ik *
            asbCubeSatACS_B.Product3_fq1 + asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product2_ev) * 2.0;

          /* If: '<S130>/If' */
          if (asbCubeSatACS_B.fcn3_l > 1.0) {
            /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem' incorporates:
             *  ActionPort: '<S131>/Action Port'
             */
            /* Merge: '<S130>/Merge' incorporates:
             *  Constant: '<S131>/Constant'
             */
            asbCubeSatACS_B.Merge_c = 1.0;

            /* End of Outputs for SubSystem: '<S130>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.fcn3_l < -1.0) {
            /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S132>/Action Port'
             */
            /* Merge: '<S130>/Merge' incorporates:
             *  Constant: '<S132>/Constant'
             */
            asbCubeSatACS_B.Merge_c = 1.0;

            /* End of Outputs for SubSystem: '<S130>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S133>/Action Port'
             */
            asbCubeSat_IfActionSubsystem2_p(asbCubeSatACS_B.fcn3_l,
              &asbCubeSatACS_B.Merge_c);

            /* End of Outputs for SubSystem: '<S130>/If Action Subsystem2' */
          }

          /* Fcn: '<S9>/fcn1' */
          asbCubeSatACS_B.fcn1_l = (asbCubeSatACS_B.Product2_ev *
            asbCubeSatACS_B.Product3_fq1 - asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product1_ik) * -2.0;

          /* Fcn: '<S9>/fcn2' */
          asbCubeSatACS_B.fcn2_k = ((asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product_j5 - asbCubeSatACS_B.Product1_ik *
            asbCubeSatACS_B.Product1_ik) - asbCubeSatACS_B.Product2_ev *
            asbCubeSatACS_B.Product2_ev) + asbCubeSatACS_B.Product3_fq1 *
            asbCubeSatACS_B.Product3_fq1;

          /* Trigonometry: '<S128>/Trigonometric Function1' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          asbCubeSatACS_B.PointingCmd[0] = rt_atan2d_snf(asbCubeSatACS_B.fcn1_l,
            asbCubeSatACS_B.fcn2_k);

          /* Fcn: '<S9>/fcn4' */
          asbCubeSatACS_B.fcn4_e = (asbCubeSatACS_B.Product1_ik *
            asbCubeSatACS_B.Product2_ev - asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product3_fq1) * -2.0;

          /* Fcn: '<S9>/fcn5' */
          asbCubeSatACS_B.fcn5_p = ((asbCubeSatACS_B.Product_j5 *
            asbCubeSatACS_B.Product_j5 + asbCubeSatACS_B.Product1_ik *
            asbCubeSatACS_B.Product1_ik) - asbCubeSatACS_B.Product2_ev *
            asbCubeSatACS_B.Product2_ev) - asbCubeSatACS_B.Product3_fq1 *
            asbCubeSatACS_B.Product3_fq1;

          /* Trigonometry: '<S128>/Trigonometric Function3' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          asbCubeSatACS_B.PointingCmd[2] = rt_atan2d_snf(asbCubeSatACS_B.fcn4_e,
            asbCubeSatACS_B.fcn5_p);

          /* Trigonometry: '<S128>/trigFcn' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          u0 = asbCubeSatACS_B.Merge_c;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          asbCubeSatACS_B.PointingCmd[1] = std::asin(u0);
        } else if (*rtu_AttitudeMode == 2.0) {
          real_T tmp_0;
          real_T tmp_2;
          real_T tmp_3;
          real_T tmp_4;
          real_T u;
          real_T u0;

          /* Transition: '<S3>:51' */
          asbCubeSatACS_B.ControlMode = 2.0;
          asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Sun;

          /* Product: '<S155>/Product' */
          asbCubeSatACS_B.Product =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] *
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0];

          /* UnaryMinus: '<S137>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[1];

          /* Product: '<S155>/Product1' */
          asbCubeSatACS_B.Product1 = asbCubeSatACS_B.UnaryMinus *
            asbCubeSatACS_B.UnaryMinus;

          /* UnaryMinus: '<S137>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1 =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[2];

          /* Product: '<S155>/Product2' */
          asbCubeSatACS_B.Product2 = asbCubeSatACS_B.UnaryMinus1 *
            asbCubeSatACS_B.UnaryMinus1;

          /* UnaryMinus: '<S137>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2 =
            -asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[3];

          /* Product: '<S155>/Product3' */
          asbCubeSatACS_B.Product3 = asbCubeSatACS_B.UnaryMinus2 *
            asbCubeSatACS_B.UnaryMinus2;

          /* Sum: '<S155>/Sum' */
          asbCubeSatACS_B.Sum_p = ((asbCubeSatACS_B.Product +
            asbCubeSatACS_B.Product1) + asbCubeSatACS_B.Product2) +
            asbCubeSatACS_B.Product3;

          /* Sqrt: '<S154>/sqrt' */
          asbCubeSatACS_B.sqrt_f = std::sqrt(asbCubeSatACS_B.Sum_p);

          /* Product: '<S153>/Product' */
          asbCubeSatACS_B.Product_h =
            asbCubeSatACS_B.BusConversion_InsertedFor_Point.q_eci2b[0] /
            asbCubeSatACS_B.sqrt_f;

          /* Product: '<S151>/Product' */
          asbCubeSatACS_B.Product_g = asbCubeSatACS_B.Product_h *
            asbCubeSatACS_B.Product_h;

          /* Product: '<S153>/Product1' */
          asbCubeSatACS_B.Product1_g = asbCubeSatACS_B.UnaryMinus /
            asbCubeSatACS_B.sqrt_f;

          /* UnaryMinus: '<S152>/Unary Minus' */
          asbCubeSatACS_B.UnaryMinus_l = -asbCubeSatACS_B.Product1_g;

          /* Product: '<S151>/Product1' */
          asbCubeSatACS_B.Product1_gj = asbCubeSatACS_B.UnaryMinus_l *
            asbCubeSatACS_B.UnaryMinus_l;

          /* Product: '<S153>/Product2' */
          asbCubeSatACS_B.Product2_e = asbCubeSatACS_B.UnaryMinus1 /
            asbCubeSatACS_B.sqrt_f;

          /* UnaryMinus: '<S152>/Unary Minus1' */
          asbCubeSatACS_B.UnaryMinus1_j = -asbCubeSatACS_B.Product2_e;

          /* Product: '<S151>/Product2' */
          asbCubeSatACS_B.Product2_o = asbCubeSatACS_B.UnaryMinus1_j *
            asbCubeSatACS_B.UnaryMinus1_j;

          /* Product: '<S153>/Product3' */
          asbCubeSatACS_B.Product3_e = asbCubeSatACS_B.UnaryMinus2 /
            asbCubeSatACS_B.sqrt_f;

          /* UnaryMinus: '<S152>/Unary Minus2' */
          asbCubeSatACS_B.UnaryMinus2_m = -asbCubeSatACS_B.Product3_e;

          /* Product: '<S151>/Product3' */
          asbCubeSatACS_B.Product3_d = asbCubeSatACS_B.UnaryMinus2_m *
            asbCubeSatACS_B.UnaryMinus2_m;

          /* Sum: '<S151>/Sum' */
          asbCubeSatACS_B.Sum_n = ((asbCubeSatACS_B.Product_g +
            asbCubeSatACS_B.Product1_gj) + asbCubeSatACS_B.Product2_o) +
            asbCubeSatACS_B.Product3_d;

          /* Sqrt: '<S150>/sqrt' */
          asbCubeSatACS_B.sqrt_o = std::sqrt(asbCubeSatACS_B.Sum_n);

          /* Product: '<S146>/Product' */
          asbCubeSatACS_B.Product_m = asbCubeSatACS_B.Product_h /
            asbCubeSatACS_B.sqrt_o;

          /* Product: '<S146>/Product1' */
          asbCubeSatACS_B.Product1_l = asbCubeSatACS_B.UnaryMinus_l /
            asbCubeSatACS_B.sqrt_o;

          /* Product: '<S146>/Product2' */
          asbCubeSatACS_B.Product2_g = asbCubeSatACS_B.UnaryMinus1_j /
            asbCubeSatACS_B.sqrt_o;

          /* Product: '<S146>/Product3' */
          asbCubeSatACS_B.Product3_c = asbCubeSatACS_B.UnaryMinus2_m /
            asbCubeSatACS_B.sqrt_o;

          /* Product: '<S147>/Product' */
          asbCubeSatACS_B.Product_hp = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product2_g;

          /* Product: '<S147>/Product1' */
          asbCubeSatACS_B.Product1_n = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S147>/Sum1' */
          asbCubeSatACS_B.Sum1 = asbCubeSatACS_B.Product_hp +
            asbCubeSatACS_B.Product1_n;

          /* Gain: '<S147>/Gain' */
          asbCubeSatACS_B.Gain = 2.0 * asbCubeSatACS_B.Sum1;

          /* Product: '<S147>/Product2' */
          asbCubeSatACS_B.Product2_k = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product2_g;

          /* Product: '<S147>/Product3' */
          asbCubeSatACS_B.Product3_p = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S147>/Sum2' */
          asbCubeSatACS_B.Sum2 = asbCubeSatACS_B.Product3_p -
            asbCubeSatACS_B.Product2_k;

          /* Gain: '<S147>/Gain1' */
          asbCubeSatACS_B.Gain1 = 2.0 * asbCubeSatACS_B.Sum2;

          /* Product: '<S147>/Product6' */
          asbCubeSatACS_B.Product6 = asbCubeSatACS_B.Product2_g *
            asbCubeSatACS_B.Product2_g;

          /* Product: '<S147>/Product7' */
          asbCubeSatACS_B.Product7 = asbCubeSatACS_B.Product3_c *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S147>/Sum3' incorporates:
           *  Constant: '<S147>/Constant'
           */
          asbCubeSatACS_B.Sum3 = (0.5 - asbCubeSatACS_B.Product6) -
            asbCubeSatACS_B.Product7;

          /* Gain: '<S147>/Gain2' */
          asbCubeSatACS_B.Gain2 = 2.0 * asbCubeSatACS_B.Sum3;

          /* Product: '<S147>/Product4' */
          asbCubeSatACS_B.Product4 = asbCubeSatACS_B.Gain *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

          /* Product: '<S147>/Product5' */
          asbCubeSatACS_B.Product5 = asbCubeSatACS_B.Gain1 *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

          /* Product: '<S147>/Product8' */
          asbCubeSatACS_B.Product8 =
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
            asbCubeSatACS_B.Gain2;

          /* Sum: '<S147>/Sum' */
          asbCubeSatACS_B.Sum_l = (asbCubeSatACS_B.Product8 +
            asbCubeSatACS_B.Product4) + asbCubeSatACS_B.Product5;

          /* Product: '<S148>/Product' */
          asbCubeSatACS_B.Product_gr = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product2_g;

          /* Product: '<S148>/Product1' */
          asbCubeSatACS_B.Product1_ls = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S148>/Sum1' */
          asbCubeSatACS_B.Sum1_d = asbCubeSatACS_B.Product_gr -
            asbCubeSatACS_B.Product1_ls;

          /* Gain: '<S148>/Gain' */
          asbCubeSatACS_B.Gain_g = 2.0 * asbCubeSatACS_B.Sum1_d;

          /* Product: '<S148>/Product2' */
          asbCubeSatACS_B.Product2_l = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product1_l;

          /* Product: '<S148>/Product3' */
          asbCubeSatACS_B.Product3_j = asbCubeSatACS_B.Product2_g *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S148>/Sum2' */
          asbCubeSatACS_B.Sum2_e = asbCubeSatACS_B.Product2_l +
            asbCubeSatACS_B.Product3_j;

          /* Gain: '<S148>/Gain1' */
          asbCubeSatACS_B.Gain1_p = 2.0 * asbCubeSatACS_B.Sum2_e;

          /* Product: '<S148>/Product6' */
          asbCubeSatACS_B.Product6_k = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product1_l;

          /* Product: '<S148>/Product7' */
          asbCubeSatACS_B.Product7_n = asbCubeSatACS_B.Product3_c *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S148>/Sum3' incorporates:
           *  Constant: '<S148>/Constant'
           */
          asbCubeSatACS_B.Sum3_k = (0.5 - asbCubeSatACS_B.Product6_k) -
            asbCubeSatACS_B.Product7_n;

          /* Gain: '<S148>/Gain2' */
          asbCubeSatACS_B.Gain2_l = 2.0 * asbCubeSatACS_B.Sum3_k;

          /* Product: '<S148>/Product4' */
          asbCubeSatACS_B.Product4_m =
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
            asbCubeSatACS_B.Gain_g;

          /* Product: '<S148>/Product5' */
          asbCubeSatACS_B.Product5_i = asbCubeSatACS_B.Gain1_p *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

          /* Product: '<S148>/Product8' */
          asbCubeSatACS_B.Product8_a = asbCubeSatACS_B.Gain2_l *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

          /* Sum: '<S148>/Sum' */
          asbCubeSatACS_B.Sum_m = (asbCubeSatACS_B.Product4_m +
            asbCubeSatACS_B.Product8_a) + asbCubeSatACS_B.Product5_i;

          /* Product: '<S149>/Product' */
          asbCubeSatACS_B.Product_h0 = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product3_c;

          /* Product: '<S149>/Product1' */
          asbCubeSatACS_B.Product1_i = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product2_g;

          /* Sum: '<S149>/Sum1' */
          asbCubeSatACS_B.Sum1_p = asbCubeSatACS_B.Product_h0 +
            asbCubeSatACS_B.Product1_i;

          /* Gain: '<S149>/Gain' */
          asbCubeSatACS_B.Gain_i = 2.0 * asbCubeSatACS_B.Sum1_p;

          /* Product: '<S149>/Product2' */
          asbCubeSatACS_B.Product2_ep = asbCubeSatACS_B.Product_m *
            asbCubeSatACS_B.Product1_l;

          /* Product: '<S149>/Product3' */
          asbCubeSatACS_B.Product3_dl = asbCubeSatACS_B.Product2_g *
            asbCubeSatACS_B.Product3_c;

          /* Sum: '<S149>/Sum2' */
          asbCubeSatACS_B.Sum2_p = asbCubeSatACS_B.Product3_dl -
            asbCubeSatACS_B.Product2_ep;

          /* Gain: '<S149>/Gain1' */
          asbCubeSatACS_B.Gain1_j = 2.0 * asbCubeSatACS_B.Sum2_p;

          /* Product: '<S149>/Product6' */
          asbCubeSatACS_B.Product6_n = asbCubeSatACS_B.Product1_l *
            asbCubeSatACS_B.Product1_l;

          /* Product: '<S149>/Product7' */
          asbCubeSatACS_B.Product7_k = asbCubeSatACS_B.Product2_g *
            asbCubeSatACS_B.Product2_g;

          /* Sum: '<S149>/Sum3' incorporates:
           *  Constant: '<S149>/Constant'
           */
          asbCubeSatACS_B.Sum3_m = (0.5 - asbCubeSatACS_B.Product6_n) -
            asbCubeSatACS_B.Product7_k;

          /* Gain: '<S149>/Gain2' */
          asbCubeSatACS_B.Gain2_p = 2.0 * asbCubeSatACS_B.Sum3_m;

          /* Product: '<S149>/Product4' */
          asbCubeSatACS_B.Product4_l =
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
            asbCubeSatACS_B.Gain_i;

          /* Product: '<S149>/Product5' */
          asbCubeSatACS_B.Product5_n = asbCubeSatACS_B.Gain1_j *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

          /* Product: '<S149>/Product8' */
          asbCubeSatACS_B.Product8_g = asbCubeSatACS_B.Gain2_p *
            asbCubeSatACS_B.BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

          /* Sum: '<S149>/Sum' */
          asbCubeSatACS_B.Sum_e = (asbCubeSatACS_B.Product4_l +
            asbCubeSatACS_B.Product5_n) + asbCubeSatACS_B.Product8_g;

          /* If: '<S156>/If' */
          if (asbCubeSatACS_ConstB.Abs < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
             *  ActionPort: '<S166>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge);

            /* End of Outputs for SubSystem: '<S156>/If Action Subsystem' */
          } else if (asbCubeSatACS_ConstB.Abs1 < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S167>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge);

            /* End of Outputs for SubSystem: '<S156>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S168>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge);

            /* End of Outputs for SubSystem: '<S156>/If Action Subsystem2' */
          }

          /* SignalConversion generated from: '<S157>/Dot Product1' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0] =
            asbCubeSatACS_B.Sum_l;
          asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1] =
            asbCubeSatACS_B.Sum_m;
          asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2] =
            asbCubeSatACS_B.Sum_e;

          /* Product: '<S233>/Product' */
          asbCubeSatACS_B.Product_hi = asbCubeSatACS_B.Product_h *
            asbCubeSatACS_B.Product_h;

          /* Product: '<S233>/Product1' */
          asbCubeSatACS_B.Product1_a = asbCubeSatACS_B.UnaryMinus_l *
            asbCubeSatACS_B.UnaryMinus_l;

          /* Product: '<S233>/Product2' */
          asbCubeSatACS_B.Product2_a = asbCubeSatACS_B.UnaryMinus1_j *
            asbCubeSatACS_B.UnaryMinus1_j;

          /* Product: '<S233>/Product3' */
          asbCubeSatACS_B.Product3_eh = asbCubeSatACS_B.UnaryMinus2_m *
            asbCubeSatACS_B.UnaryMinus2_m;

          /* Sum: '<S233>/Sum' */
          asbCubeSatACS_B.Sum_f = ((asbCubeSatACS_B.Product_hi +
            asbCubeSatACS_B.Product1_a) + asbCubeSatACS_B.Product2_a) +
            asbCubeSatACS_B.Product3_eh;

          /* Sqrt: '<S232>/sqrt' */
          asbCubeSatACS_B.sqrt_l = std::sqrt(asbCubeSatACS_B.Sum_f);

          /* Product: '<S228>/Product2' */
          asbCubeSatACS_B.Product2_o4 = asbCubeSatACS_B.UnaryMinus1_j /
            asbCubeSatACS_B.sqrt_l;

          /* Product: '<S229>/Product6' */
          asbCubeSatACS_B.Product6_i = asbCubeSatACS_B.Product2_o4 *
            asbCubeSatACS_B.Product2_o4;

          /* Product: '<S228>/Product3' */
          asbCubeSatACS_B.Product3_h = asbCubeSatACS_B.UnaryMinus2_m /
            asbCubeSatACS_B.sqrt_l;

          /* Product: '<S229>/Product7' */
          asbCubeSatACS_B.Product7_c = asbCubeSatACS_B.Product3_h *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S229>/Sum3' incorporates:
           *  Constant: '<S229>/Constant'
           */
          asbCubeSatACS_B.Sum3_h = (0.5 - asbCubeSatACS_B.Product6_i) -
            asbCubeSatACS_B.Product7_c;

          /* Gain: '<S229>/Gain2' */
          asbCubeSatACS_B.Gain2_k = 2.0 * asbCubeSatACS_B.Sum3_h;

          /* Product: '<S229>/Product8' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product8_p = 0.0 * asbCubeSatACS_B.Gain2_k;

          /* Product: '<S228>/Product1' */
          asbCubeSatACS_B.Product1_f = asbCubeSatACS_B.UnaryMinus_l /
            asbCubeSatACS_B.sqrt_l;

          /* Product: '<S229>/Product' */
          asbCubeSatACS_B.Product_f = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product2_o4;

          /* Product: '<S228>/Product' */
          asbCubeSatACS_B.Product_e = asbCubeSatACS_B.Product_h /
            asbCubeSatACS_B.sqrt_l;

          /* Product: '<S229>/Product1' */
          asbCubeSatACS_B.Product1_iz = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S229>/Sum1' */
          asbCubeSatACS_B.Sum1_c = asbCubeSatACS_B.Product_f +
            asbCubeSatACS_B.Product1_iz;

          /* Gain: '<S229>/Gain' */
          asbCubeSatACS_B.Gain_b = 2.0 * asbCubeSatACS_B.Sum1_c;

          /* Product: '<S229>/Product4' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_c = asbCubeSatACS_B.Gain_b * 0.0;

          /* Product: '<S229>/Product2' */
          asbCubeSatACS_B.Product2_m = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product2_o4;

          /* Product: '<S229>/Product3' */
          asbCubeSatACS_B.Product3_a = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S229>/Sum2' */
          asbCubeSatACS_B.Sum2_l = asbCubeSatACS_B.Product3_a -
            asbCubeSatACS_B.Product2_m;

          /* Gain: '<S229>/Gain1' */
          asbCubeSatACS_B.Gain1_i = 2.0 * asbCubeSatACS_B.Sum2_l;

          /* Product: '<S229>/Product5' */
          asbCubeSatACS_B.Product5_g = asbCubeSatACS_B.Gain1_i;

          /* Sum: '<S229>/Sum' */
          asbCubeSatACS_B.Sum_o = (asbCubeSatACS_B.Product8_p +
            asbCubeSatACS_B.Product4_c) + asbCubeSatACS_B.Product5_g;

          /* Product: '<S230>/Product' */
          asbCubeSatACS_B.Product_f0 = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product2_o4;

          /* Product: '<S230>/Product1' */
          asbCubeSatACS_B.Product1_m = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S230>/Sum1' */
          asbCubeSatACS_B.Sum1_n = asbCubeSatACS_B.Product_f0 -
            asbCubeSatACS_B.Product1_m;

          /* Gain: '<S230>/Gain' */
          asbCubeSatACS_B.Gain_a = 2.0 * asbCubeSatACS_B.Sum1_n;

          /* Product: '<S230>/Product4' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_g = 0.0 * asbCubeSatACS_B.Gain_a;

          /* Product: '<S230>/Product6' */
          asbCubeSatACS_B.Product6_h = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product1_f;

          /* Product: '<S230>/Product7' */
          asbCubeSatACS_B.Product7_f = asbCubeSatACS_B.Product3_h *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S230>/Sum3' incorporates:
           *  Constant: '<S230>/Constant'
           */
          asbCubeSatACS_B.Sum3_i = (0.5 - asbCubeSatACS_B.Product6_h) -
            asbCubeSatACS_B.Product7_f;

          /* Gain: '<S230>/Gain2' */
          asbCubeSatACS_B.Gain2_b = 2.0 * asbCubeSatACS_B.Sum3_i;

          /* Product: '<S230>/Product8' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product8_o = asbCubeSatACS_B.Gain2_b * 0.0;

          /* Product: '<S230>/Product2' */
          asbCubeSatACS_B.Product2_ak = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product1_f;

          /* Product: '<S230>/Product3' */
          asbCubeSatACS_B.Product3_as = asbCubeSatACS_B.Product2_o4 *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S230>/Sum2' */
          asbCubeSatACS_B.Sum2_ls = asbCubeSatACS_B.Product2_ak +
            asbCubeSatACS_B.Product3_as;

          /* Gain: '<S230>/Gain1' */
          asbCubeSatACS_B.Gain1_d = 2.0 * asbCubeSatACS_B.Sum2_ls;

          /* Product: '<S230>/Product5' */
          asbCubeSatACS_B.Product5_j = asbCubeSatACS_B.Gain1_d;

          /* Sum: '<S230>/Sum' */
          asbCubeSatACS_B.Sum_k = (asbCubeSatACS_B.Product4_g +
            asbCubeSatACS_B.Product8_o) + asbCubeSatACS_B.Product5_j;

          /* Product: '<S231>/Product' */
          asbCubeSatACS_B.Product_n = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product3_h;

          /* Product: '<S231>/Product1' */
          asbCubeSatACS_B.Product1_o = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product2_o4;

          /* Sum: '<S231>/Sum1' */
          asbCubeSatACS_B.Sum1_j = asbCubeSatACS_B.Product_n +
            asbCubeSatACS_B.Product1_o;

          /* Gain: '<S231>/Gain' */
          asbCubeSatACS_B.Gain_iw = 2.0 * asbCubeSatACS_B.Sum1_j;

          /* Product: '<S231>/Product4' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product4_a = 0.0 * asbCubeSatACS_B.Gain_iw;

          /* Product: '<S231>/Product2' */
          asbCubeSatACS_B.Product2_n = asbCubeSatACS_B.Product_e *
            asbCubeSatACS_B.Product1_f;

          /* Product: '<S231>/Product3' */
          asbCubeSatACS_B.Product3_n = asbCubeSatACS_B.Product2_o4 *
            asbCubeSatACS_B.Product3_h;

          /* Sum: '<S231>/Sum2' */
          asbCubeSatACS_B.Sum2_k = asbCubeSatACS_B.Product3_n -
            asbCubeSatACS_B.Product2_n;

          /* Gain: '<S231>/Gain1' */
          asbCubeSatACS_B.Gain1_io = 2.0 * asbCubeSatACS_B.Sum2_k;

          /* Product: '<S231>/Product5' incorporates:
           *  Constant: '<S136>/secondaryConstraint'
           */
          asbCubeSatACS_B.Product5_m = asbCubeSatACS_B.Gain1_io * 0.0;

          /* Product: '<S231>/Product6' */
          asbCubeSatACS_B.Product6_j = asbCubeSatACS_B.Product1_f *
            asbCubeSatACS_B.Product1_f;

          /* Product: '<S231>/Product7' */
          asbCubeSatACS_B.Product7_h = asbCubeSatACS_B.Product2_o4 *
            asbCubeSatACS_B.Product2_o4;

          /* Sum: '<S231>/Sum3' incorporates:
           *  Constant: '<S231>/Constant'
           */
          asbCubeSatACS_B.Sum3_f = (0.5 - asbCubeSatACS_B.Product6_j) -
            asbCubeSatACS_B.Product7_h;

          /* Gain: '<S231>/Gain2' */
          asbCubeSatACS_B.Gain2_c = 2.0 * asbCubeSatACS_B.Sum3_f;

          /* Product: '<S231>/Product8' */
          asbCubeSatACS_B.Product8_e = asbCubeSatACS_B.Gain2_c;

          /* Sum: '<S231>/Sum' */
          asbCubeSatACS_B.Sum_nm = (asbCubeSatACS_B.Product4_a +
            asbCubeSatACS_B.Product5_m) + asbCubeSatACS_B.Product8_e;

          /* SignalConversion generated from: '<S157>/Dot Product2' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[0] =
            asbCubeSatACS_B.Sum_o;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[1] =
            asbCubeSatACS_B.Sum_k;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[2] =
            asbCubeSatACS_B.Sum_nm;

          /* DotProduct: '<S157>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[0];
          tmp_0 = u0 * u;

          /* DotProduct: '<S157>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          tmp_2 = u0 * u;

          /* DotProduct: '<S157>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[0];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[0];
          tmp_3 = u0 * u;

          /* DotProduct: '<S157>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[1];
          tmp_0 += u0 * u;

          /* DotProduct: '<S157>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          tmp_2 += u0 * u;

          /* DotProduct: '<S157>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[1];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[1];
          tmp_3 += u0 * u;

          /* DotProduct: '<S157>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[2];
          tmp_0 += u0 * u;

          /* DotProduct: '<S157>/Dot Product1' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          tmp_2 += u0 * u;

          /* DotProduct: '<S157>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[2];
          u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_f[2];
          tmp_3 += u0 * u;

          /* DotProduct: '<S157>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3 = tmp_0;

          /* DotProduct: '<S157>/Dot Product1' */
          asbCubeSatACS_B.DotProduct1 = tmp_2;

          /* DotProduct: '<S157>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2 = tmp_3;

          /* Product: '<S157>/Divide1' */
          asbCubeSatACS_B.Divide1 = asbCubeSatACS_B.DotProduct1 *
            asbCubeSatACS_B.DotProduct2;

          /* Sqrt: '<S157>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3 = std::sqrt(asbCubeSatACS_B.Divide1);

          /* Product: '<S157>/Divide' */
          asbCubeSatACS_B.Divide = asbCubeSatACS_B.DotProduct3 /
            asbCubeSatACS_B.Sqrt3;

          /* Bias: '<S157>/Bias' */
          asbCubeSatACS_B.Bias = asbCubeSatACS_B.Divide + -1.0;

          /* Abs: '<S157>/Abs' */
          asbCubeSatACS_B.Abs = std::abs(asbCubeSatACS_B.Bias);

          /* Bias: '<S157>/Bias1' */
          asbCubeSatACS_B.Bias1 = asbCubeSatACS_B.Divide + 1.0;

          /* Abs: '<S157>/Abs1' */
          asbCubeSatACS_B.Abs1 = std::abs(asbCubeSatACS_B.Bias1);

          /* If: '<S157>/If' */
          if (asbCubeSatACS_B.Abs < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
             *  ActionPort: '<S169>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_b);

            /* End of Outputs for SubSystem: '<S157>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1 < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S170>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_b);

            /* End of Outputs for SubSystem: '<S157>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S171>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_b);

            /* End of Outputs for SubSystem: '<S157>/If Action Subsystem2' */
          }

          /* RelationalOperator: '<S158>/Compare' incorporates:
           *  Constant: '<S158>/Constant'
           */
          asbCubeSatACS_B.Compare = (asbCubeSatACS_B.Merge != 0.0);

          /* RelationalOperator: '<S159>/Compare' incorporates:
           *  Constant: '<S159>/Constant'
           */
          asbCubeSatACS_B.Compare_c = (asbCubeSatACS_B.Merge_b != 0.0);

          /* Logic: '<S141>/OR' */
          asbCubeSatACS_B.OR = (asbCubeSatACS_B.Compare ||
                                asbCubeSatACS_B.Compare_c);

          /* DotProduct: '<S162>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u = 0.0 * u0;

          /* DotProduct: '<S162>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          tmp_2 = tmp_0 * u0;

          /* DotProduct: '<S183>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          tmp_3 = 0.0 * u0;

          /* DotProduct: '<S183>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[0];
          tmp_4 = tmp_0 * u0;

          /* DotProduct: '<S162>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u += 0.0 * u0;

          /* DotProduct: '<S162>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          tmp_2 += tmp_0 * u0;

          /* DotProduct: '<S183>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          tmp_3 += 0.0 * u0;

          /* DotProduct: '<S183>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[1];
          tmp_4 += tmp_0 * u0;

          /* DotProduct: '<S162>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u += -u0;

          /* DotProduct: '<S162>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          tmp_2 += tmp_0 * u0;

          /* DotProduct: '<S183>/Dot Product3' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          tmp_3 += -u0;

          /* DotProduct: '<S183>/Dot Product2' */
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProduct[2];
          tmp_4 += tmp_0 * u0;

          /* DotProduct: '<S162>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_h = u;

          /* DotProduct: '<S162>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_a = tmp_2;

          /* Product: '<S162>/Divide1' */
          asbCubeSatACS_B.Divide1_a = asbCubeSatACS_ConstB.DotProduct1_l *
            asbCubeSatACS_B.DotProduct2_a;

          /* Sqrt: '<S162>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_k = std::sqrt(asbCubeSatACS_B.Divide1_a);

          /* Sum: '<S162>/Add2' */
          asbCubeSatACS_B.Add2 = asbCubeSatACS_B.DotProduct3_h +
            asbCubeSatACS_B.Sqrt3_k;

          /* Product: '<S196>/Product' */
          asbCubeSatACS_B.Product_g0 = asbCubeSatACS_B.Add2 *
            asbCubeSatACS_B.Add2;

          /* DotProduct: '<S183>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_k = tmp_3;

          /* DotProduct: '<S183>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_g = tmp_4;

          /* Product: '<S183>/Divide1' */
          asbCubeSatACS_B.Divide1_e = asbCubeSatACS_ConstB.DotProduct1_f *
            asbCubeSatACS_B.DotProduct2_g;

          /* Sqrt: '<S183>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_f = std::sqrt(asbCubeSatACS_B.Divide1_e);

          /* Product: '<S183>/Divide' */
          asbCubeSatACS_B.Divide_c = asbCubeSatACS_B.DotProduct3_k /
            asbCubeSatACS_B.Sqrt3_f;

          /* Bias: '<S183>/Bias' */
          asbCubeSatACS_B.Bias_l = asbCubeSatACS_B.Divide_c + -1.0;

          /* Abs: '<S183>/Abs' */
          asbCubeSatACS_B.Abs_n = std::abs(asbCubeSatACS_B.Bias_l);

          /* Bias: '<S183>/Bias1' */
          asbCubeSatACS_B.Bias1_f = asbCubeSatACS_B.Divide_c + 1.0;

          /* Abs: '<S183>/Abs1' */
          asbCubeSatACS_B.Abs1_p = std::abs(asbCubeSatACS_B.Bias1_f);

          /* If: '<S183>/If' */
          if (asbCubeSatACS_B.Abs_n < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
             *  ActionPort: '<S189>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_d);

            /* End of Outputs for SubSystem: '<S183>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_p < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S190>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_d);

            /* End of Outputs for SubSystem: '<S183>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S191>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_d);

            /* End of Outputs for SubSystem: '<S183>/If Action Subsystem2' */
          }

          /* RelationalOperator: '<S184>/Compare' incorporates:
           *  Constant: '<S184>/Constant'
           */
          asbCubeSatACS_B.Compare_m = (asbCubeSatACS_B.Merge_d != -1.0);

          /* Switch: '<S162>/is 180deg Rot' */
          if (asbCubeSatACS_B.Compare_m) {
            /* Product: '<S188>/j x i' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             */
            asbCubeSatACS_B.jxi_a = 0.0 * asbCubeSatACS_B.Sum_l;

            /* Product: '<S188>/i x k' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             */
            asbCubeSatACS_B.ixk_o = 0.0 * asbCubeSatACS_B.Sum_e;

            /* Product: '<S188>/k x j' */
            asbCubeSatACS_B.kxj_j = -asbCubeSatACS_B.Sum_m;

            /* Product: '<S187>/i x j' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             */
            asbCubeSatACS_B.ixj_l = 0.0 * asbCubeSatACS_B.Sum_m;

            /* Product: '<S187>/k x i' */
            asbCubeSatACS_B.kxi_n = -asbCubeSatACS_B.Sum_l;

            /* Product: '<S187>/j x k' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             */
            asbCubeSatACS_B.jxk_n = 0.0 * asbCubeSatACS_B.Sum_e;

            /* Sum: '<S182>/Sum' */
            asbCubeSatACS_B.Sum_d[0] = asbCubeSatACS_B.jxk_n -
              asbCubeSatACS_B.kxj_j;
            asbCubeSatACS_B.Sum_d[1] = asbCubeSatACS_B.kxi_n -
              asbCubeSatACS_B.ixk_o;
            asbCubeSatACS_B.Sum_d[2] = asbCubeSatACS_B.ixj_l -
              asbCubeSatACS_B.jxi_a;

            /* Switch: '<S162>/is 180deg Rot' */
            asbCubeSatACS_B.is180degRot[0] = asbCubeSatACS_B.Sum_d[0];
            asbCubeSatACS_B.is180degRot[1] = asbCubeSatACS_B.Sum_d[1];
            asbCubeSatACS_B.is180degRot[2] = asbCubeSatACS_B.Sum_d[2];
          } else {
            /* Switch: '<S162>/is 180deg Rot' */
            asbCubeSatACS_B.is180degRot[0] = asbCubeSatACS_ConstB.Sum[0];
            asbCubeSatACS_B.is180degRot[1] = asbCubeSatACS_ConstB.Sum[1];
            asbCubeSatACS_B.is180degRot[2] = asbCubeSatACS_ConstB.Sum[2];
          }

          /* Product: '<S196>/Product1' */
          asbCubeSatACS_B.Product1_lm = asbCubeSatACS_B.is180degRot[0] *
            asbCubeSatACS_B.is180degRot[0];

          /* Product: '<S196>/Product2' */
          asbCubeSatACS_B.Product2_n1 = asbCubeSatACS_B.is180degRot[1] *
            asbCubeSatACS_B.is180degRot[1];

          /* Product: '<S196>/Product3' */
          asbCubeSatACS_B.Product3_cn = asbCubeSatACS_B.is180degRot[2] *
            asbCubeSatACS_B.is180degRot[2];

          /* Sum: '<S196>/Sum' */
          asbCubeSatACS_B.Sum_oe = ((asbCubeSatACS_B.Product_g0 +
            asbCubeSatACS_B.Product1_lm) + asbCubeSatACS_B.Product2_n1) +
            asbCubeSatACS_B.Product3_cn;

          /* Sqrt: '<S195>/sqrt' */
          asbCubeSatACS_B.sqrt_e = std::sqrt(asbCubeSatACS_B.Sum_oe);

          /* Product: '<S186>/Product' */
          asbCubeSatACS_B.Product_i = asbCubeSatACS_B.Add2 /
            asbCubeSatACS_B.sqrt_e;

          /* Product: '<S220>/j x k' */
          asbCubeSatACS_B.jxk = asbCubeSatACS_B.Sum_m * asbCubeSatACS_B.Sum_nm;

          /* Product: '<S220>/k x i' */
          asbCubeSatACS_B.kxi = asbCubeSatACS_B.Sum_e * asbCubeSatACS_B.Sum_o;

          /* Product: '<S220>/i x j' */
          asbCubeSatACS_B.ixj = asbCubeSatACS_B.Sum_l * asbCubeSatACS_B.Sum_k;

          /* Product: '<S221>/k x j' */
          asbCubeSatACS_B.kxj = asbCubeSatACS_B.Sum_e * asbCubeSatACS_B.Sum_k;

          /* Product: '<S221>/i x k' */
          asbCubeSatACS_B.ixk = asbCubeSatACS_B.Sum_l * asbCubeSatACS_B.Sum_nm;

          /* Product: '<S221>/j x i' */
          asbCubeSatACS_B.jxi = asbCubeSatACS_B.Sum_m * asbCubeSatACS_B.Sum_o;

          /* Sum: '<S218>/Sum' */
          asbCubeSatACS_B.Sum_pc[0] = asbCubeSatACS_B.jxk - asbCubeSatACS_B.kxj;
          asbCubeSatACS_B.Sum_pc[1] = asbCubeSatACS_B.kxi - asbCubeSatACS_B.ixk;
          asbCubeSatACS_B.Sum_pc[2] = asbCubeSatACS_B.ixj - asbCubeSatACS_B.jxi;

          /* Product: '<S222>/j x k' */
          asbCubeSatACS_B.jxk_o = asbCubeSatACS_B.Sum_pc[1] *
            asbCubeSatACS_B.Sum_e;

          /* Product: '<S222>/k x i' */
          asbCubeSatACS_B.kxi_c = asbCubeSatACS_B.Sum_pc[2] *
            asbCubeSatACS_B.Sum_l;

          /* Product: '<S222>/i x j' */
          asbCubeSatACS_B.ixj_g = asbCubeSatACS_B.Sum_pc[0] *
            asbCubeSatACS_B.Sum_m;

          /* Product: '<S223>/k x j' */
          asbCubeSatACS_B.kxj_k = asbCubeSatACS_B.Sum_pc[2] *
            asbCubeSatACS_B.Sum_m;

          /* Product: '<S223>/i x k' */
          asbCubeSatACS_B.ixk_b = asbCubeSatACS_B.Sum_pc[0] *
            asbCubeSatACS_B.Sum_e;

          /* Product: '<S223>/j x i' */
          asbCubeSatACS_B.jxi_n = asbCubeSatACS_B.Sum_pc[1] *
            asbCubeSatACS_B.Sum_l;

          /* Sum: '<S219>/Sum' */
          asbCubeSatACS_B.Sum_i[0] = asbCubeSatACS_B.jxk_o -
            asbCubeSatACS_B.kxj_k;
          asbCubeSatACS_B.Sum_i[1] = asbCubeSatACS_B.kxi_c -
            asbCubeSatACS_B.ixk_b;
          asbCubeSatACS_B.Sum_i[2] = asbCubeSatACS_B.ixj_g -
            asbCubeSatACS_B.jxi_n;

          /* Product: '<S186>/Product2' */
          asbCubeSatACS_B.Product2_od = asbCubeSatACS_B.is180degRot[1] /
            asbCubeSatACS_B.sqrt_e;

          /* Product: '<S181>/Product' */
          asbCubeSatACS_B.Product_mz = asbCubeSatACS_B.Product_i *
            asbCubeSatACS_B.Product_i;

          /* Product: '<S186>/Product1' */
          asbCubeSatACS_B.Product1_d = asbCubeSatACS_B.is180degRot[0] /
            asbCubeSatACS_B.sqrt_e;

          /* Product: '<S181>/Product1' */
          asbCubeSatACS_B.Product1_fo = asbCubeSatACS_B.Product1_d *
            asbCubeSatACS_B.Product1_d;

          /* Product: '<S181>/Product2' */
          asbCubeSatACS_B.Product2_os = asbCubeSatACS_B.Product2_od *
            asbCubeSatACS_B.Product2_od;

          /* Product: '<S186>/Product3' */
          asbCubeSatACS_B.Product3_d2 = asbCubeSatACS_B.is180degRot[2] /
            asbCubeSatACS_B.sqrt_e;

          /* Product: '<S181>/Product3' */
          asbCubeSatACS_B.Product3_f = asbCubeSatACS_B.Product3_d2 *
            asbCubeSatACS_B.Product3_d2;

          /* Sum: '<S181>/Sum' */
          asbCubeSatACS_B.Sum_fi = ((asbCubeSatACS_B.Product_mz +
            asbCubeSatACS_B.Product1_fo) + asbCubeSatACS_B.Product2_os) +
            asbCubeSatACS_B.Product3_f;

          /* Sqrt: '<S180>/sqrt' */
          asbCubeSatACS_B.sqrt_e2 = std::sqrt(asbCubeSatACS_B.Sum_fi);

          /* Product: '<S176>/Product2' */
          asbCubeSatACS_B.Product2_at = asbCubeSatACS_B.Product2_od /
            asbCubeSatACS_B.sqrt_e2;

          /* Product: '<S177>/Product6' */
          asbCubeSatACS_B.Product6_c = asbCubeSatACS_B.Product2_at *
            asbCubeSatACS_B.Product2_at;

          /* Product: '<S176>/Product3' */
          asbCubeSatACS_B.Product3_b = asbCubeSatACS_B.Product3_d2 /
            asbCubeSatACS_B.sqrt_e2;

          /* Product: '<S177>/Product7' */
          asbCubeSatACS_B.Product7_cz = asbCubeSatACS_B.Product3_b *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S177>/Sum3' incorporates:
           *  Constant: '<S177>/Constant'
           */
          asbCubeSatACS_B.Sum3_b = (0.5 - asbCubeSatACS_B.Product6_c) -
            asbCubeSatACS_B.Product7_cz;

          /* Gain: '<S177>/Gain2' */
          asbCubeSatACS_B.Gain2_ce = 2.0 * asbCubeSatACS_B.Sum3_b;

          /* Product: '<S177>/Product8' */
          asbCubeSatACS_B.Product8_pp = asbCubeSatACS_B.Sum_i[0] *
            asbCubeSatACS_B.Gain2_ce;

          /* Product: '<S176>/Product1' */
          asbCubeSatACS_B.Product1_j = asbCubeSatACS_B.Product1_d /
            asbCubeSatACS_B.sqrt_e2;

          /* Product: '<S177>/Product' */
          asbCubeSatACS_B.Product_p = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product2_at;

          /* Product: '<S176>/Product' */
          asbCubeSatACS_B.Product_d = asbCubeSatACS_B.Product_i /
            asbCubeSatACS_B.sqrt_e2;

          /* Product: '<S177>/Product1' */
          asbCubeSatACS_B.Product1_ji = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S177>/Sum1' */
          asbCubeSatACS_B.Sum1_a = asbCubeSatACS_B.Product_p +
            asbCubeSatACS_B.Product1_ji;

          /* Gain: '<S177>/Gain' */
          asbCubeSatACS_B.Gain_n = 2.0 * asbCubeSatACS_B.Sum1_a;

          /* Product: '<S177>/Product4' */
          asbCubeSatACS_B.Product4_p = asbCubeSatACS_B.Gain_n *
            asbCubeSatACS_B.Sum_i[1];

          /* Product: '<S177>/Product2' */
          asbCubeSatACS_B.Product2_am = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product2_at;

          /* Product: '<S177>/Product3' */
          asbCubeSatACS_B.Product3_jh = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S177>/Sum2' */
          asbCubeSatACS_B.Sum2_c = asbCubeSatACS_B.Product3_jh -
            asbCubeSatACS_B.Product2_am;

          /* Gain: '<S177>/Gain1' */
          asbCubeSatACS_B.Gain1_c = 2.0 * asbCubeSatACS_B.Sum2_c;

          /* Product: '<S177>/Product5' */
          asbCubeSatACS_B.Product5_b = asbCubeSatACS_B.Gain1_c *
            asbCubeSatACS_B.Sum_i[2];

          /* Sum: '<S177>/Sum' */
          asbCubeSatACS_B.Sum_j = (asbCubeSatACS_B.Product8_pp +
            asbCubeSatACS_B.Product4_p) + asbCubeSatACS_B.Product5_b;

          /* Product: '<S178>/Product' */
          asbCubeSatACS_B.Product_b = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product2_at;

          /* Product: '<S178>/Product1' */
          asbCubeSatACS_B.Product1_mo = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S178>/Sum1' */
          asbCubeSatACS_B.Sum1_pk = asbCubeSatACS_B.Product_b -
            asbCubeSatACS_B.Product1_mo;

          /* Gain: '<S178>/Gain' */
          asbCubeSatACS_B.Gain_l = 2.0 * asbCubeSatACS_B.Sum1_pk;

          /* Product: '<S178>/Product4' */
          asbCubeSatACS_B.Product4_h = asbCubeSatACS_B.Sum_i[0] *
            asbCubeSatACS_B.Gain_l;

          /* Product: '<S178>/Product6' */
          asbCubeSatACS_B.Product6_kv = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product1_j;

          /* Product: '<S178>/Product7' */
          asbCubeSatACS_B.Product7_m = asbCubeSatACS_B.Product3_b *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S178>/Sum3' incorporates:
           *  Constant: '<S178>/Constant'
           */
          asbCubeSatACS_B.Sum3_d = (0.5 - asbCubeSatACS_B.Product6_kv) -
            asbCubeSatACS_B.Product7_m;

          /* Gain: '<S178>/Gain2' */
          asbCubeSatACS_B.Gain2_p0 = 2.0 * asbCubeSatACS_B.Sum3_d;

          /* Product: '<S178>/Product8' */
          asbCubeSatACS_B.Product8_j = asbCubeSatACS_B.Gain2_p0 *
            asbCubeSatACS_B.Sum_i[1];

          /* Product: '<S178>/Product2' */
          asbCubeSatACS_B.Product2_gn = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product1_j;

          /* Product: '<S178>/Product3' */
          asbCubeSatACS_B.Product3_nm = asbCubeSatACS_B.Product2_at *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S178>/Sum2' */
          asbCubeSatACS_B.Sum2_d = asbCubeSatACS_B.Product2_gn +
            asbCubeSatACS_B.Product3_nm;

          /* Gain: '<S178>/Gain1' */
          asbCubeSatACS_B.Gain1_m = 2.0 * asbCubeSatACS_B.Sum2_d;

          /* Product: '<S178>/Product5' */
          asbCubeSatACS_B.Product5_nw = asbCubeSatACS_B.Gain1_m *
            asbCubeSatACS_B.Sum_i[2];

          /* Sum: '<S178>/Sum' */
          asbCubeSatACS_B.Sum_m4 = (asbCubeSatACS_B.Product4_h +
            asbCubeSatACS_B.Product8_j) + asbCubeSatACS_B.Product5_nw;

          /* Product: '<S179>/Product' */
          asbCubeSatACS_B.Product_bs = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product3_b;

          /* Product: '<S179>/Product1' */
          asbCubeSatACS_B.Product1_ie = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product2_at;

          /* Sum: '<S179>/Sum1' */
          asbCubeSatACS_B.Sum1_b = asbCubeSatACS_B.Product_bs +
            asbCubeSatACS_B.Product1_ie;

          /* Gain: '<S179>/Gain' */
          asbCubeSatACS_B.Gain_iy = 2.0 * asbCubeSatACS_B.Sum1_b;

          /* Product: '<S179>/Product4' */
          asbCubeSatACS_B.Product4_lc = asbCubeSatACS_B.Sum_i[0] *
            asbCubeSatACS_B.Gain_iy;

          /* Product: '<S179>/Product2' */
          asbCubeSatACS_B.Product2_h = asbCubeSatACS_B.Product_d *
            asbCubeSatACS_B.Product1_j;

          /* Product: '<S179>/Product3' */
          asbCubeSatACS_B.Product3_ev = asbCubeSatACS_B.Product2_at *
            asbCubeSatACS_B.Product3_b;

          /* Sum: '<S179>/Sum2' */
          asbCubeSatACS_B.Sum2_g = asbCubeSatACS_B.Product3_ev -
            asbCubeSatACS_B.Product2_h;

          /* Gain: '<S179>/Gain1' */
          asbCubeSatACS_B.Gain1_ck = 2.0 * asbCubeSatACS_B.Sum2_g;

          /* Product: '<S179>/Product5' */
          asbCubeSatACS_B.Product5_i1 = asbCubeSatACS_B.Gain1_ck *
            asbCubeSatACS_B.Sum_i[1];

          /* Product: '<S179>/Product6' */
          asbCubeSatACS_B.Product6_b = asbCubeSatACS_B.Product1_j *
            asbCubeSatACS_B.Product1_j;

          /* Product: '<S179>/Product7' */
          asbCubeSatACS_B.Product7_hk = asbCubeSatACS_B.Product2_at *
            asbCubeSatACS_B.Product2_at;

          /* Sum: '<S179>/Sum3' incorporates:
           *  Constant: '<S179>/Constant'
           */
          asbCubeSatACS_B.Sum3_o = (0.5 - asbCubeSatACS_B.Product6_b) -
            asbCubeSatACS_B.Product7_hk;

          /* Gain: '<S179>/Gain2' */
          asbCubeSatACS_B.Gain2_d = 2.0 * asbCubeSatACS_B.Sum3_o;

          /* Product: '<S179>/Product8' */
          asbCubeSatACS_B.Product8_c = asbCubeSatACS_B.Gain2_d *
            asbCubeSatACS_B.Sum_i[2];

          /* Sum: '<S179>/Sum' */
          asbCubeSatACS_B.Sum_ld = (asbCubeSatACS_B.Product4_lc +
            asbCubeSatACS_B.Product5_i1) + asbCubeSatACS_B.Product8_c;

          /* SignalConversion generated from: '<S198>/Dot Product2' */
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0] =
            asbCubeSatACS_B.Sum_j;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1] =
            asbCubeSatACS_B.Sum_m4;
          asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2] =
            asbCubeSatACS_B.Sum_ld;

          /* DotProduct: '<S198>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
          u = asbCubeSatACS_ConstB.Sum_i[0] * u0;

          /* DotProduct: '<S198>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
          tmp_2 = u0 * tmp_0;

          /* DotProduct: '<S198>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
          u += asbCubeSatACS_ConstB.Sum_i[1] * u0;

          /* DotProduct: '<S198>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
          tmp_2 += u0 * tmp_0;

          /* DotProduct: '<S198>/Dot Product3' incorporates:
           *  Sum: '<S213>/Sum'
           */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
          u += asbCubeSatACS_ConstB.Sum_i[2] * u0;

          /* DotProduct: '<S198>/Dot Product2' */
          u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
          tmp_0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
          tmp_2 += u0 * tmp_0;

          /* DotProduct: '<S198>/Dot Product3' */
          asbCubeSatACS_B.DotProduct3_l = u;

          /* DotProduct: '<S198>/Dot Product2' */
          asbCubeSatACS_B.DotProduct2_gh = tmp_2;

          /* Product: '<S198>/Divide1' */
          asbCubeSatACS_B.Divide1_f = asbCubeSatACS_ConstB.DotProduct1_h *
            asbCubeSatACS_B.DotProduct2_gh;

          /* Sqrt: '<S198>/Sqrt3' */
          asbCubeSatACS_B.Sqrt3_e = std::sqrt(asbCubeSatACS_B.Divide1_f);

          /* Product: '<S198>/Divide' */
          asbCubeSatACS_B.Divide_i = asbCubeSatACS_B.DotProduct3_l /
            asbCubeSatACS_B.Sqrt3_e;

          /* Bias: '<S198>/Bias' */
          asbCubeSatACS_B.Bias_b = asbCubeSatACS_B.Divide_i + -1.0;

          /* Abs: '<S198>/Abs' */
          asbCubeSatACS_B.Abs_l = std::abs(asbCubeSatACS_B.Bias_b);

          /* Bias: '<S198>/Bias1' */
          asbCubeSatACS_B.Bias1_e = asbCubeSatACS_B.Divide_i + 1.0;

          /* Abs: '<S198>/Abs1' */
          asbCubeSatACS_B.Abs1_l = std::abs(asbCubeSatACS_B.Bias1_e);

          /* If: '<S198>/If' */
          if (asbCubeSatACS_B.Abs_l < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
             *  ActionPort: '<S204>/Action Port'
             */
            asbCubeSatACS_IfActionSubsystem(&asbCubeSatACS_B.Merge_f);

            /* End of Outputs for SubSystem: '<S198>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.Abs1_l < 1.0E-6) {
            /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S205>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem1(&asbCubeSatACS_B.Merge_f);

            /* End of Outputs for SubSystem: '<S198>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S206>/Action Port'
             */
            asbCubeSatAC_IfActionSubsystem2(&asbCubeSatACS_B.Merge_f);

            /* End of Outputs for SubSystem: '<S198>/If Action Subsystem2' */
          }

          /* Switch: '<S141>/Switch' */
          if (asbCubeSatACS_B.OR) {
            /* Switch: '<S141>/Switch' */
            asbCubeSatACS_B.Switch[0] = asbCubeSatACS_B.Product_i;
            asbCubeSatACS_B.Switch[1] = asbCubeSatACS_B.Product1_d;
            asbCubeSatACS_B.Switch[2] = asbCubeSatACS_B.Product2_od;
            asbCubeSatACS_B.Switch[3] = asbCubeSatACS_B.Product3_d2;
          } else {
            /* RelationalOperator: '<S199>/Compare' incorporates:
             *  Constant: '<S199>/Constant'
             */
            asbCubeSatACS_B.Compare_j = (asbCubeSatACS_B.Merge_f != -1.0);

            /* Switch: '<S163>/is 180deg Rot' */
            if (asbCubeSatACS_B.Compare_j) {
              /* Product: '<S203>/j x i' */
              asbCubeSatACS_B.jxi_d = asbCubeSatACS_ConstB.Sum_i[1] *
                asbCubeSatACS_B.Sum_j;

              /* Product: '<S203>/i x k' */
              asbCubeSatACS_B.ixk_a = asbCubeSatACS_ConstB.Sum_i[0] *
                asbCubeSatACS_B.Sum_ld;

              /* Product: '<S203>/k x j' */
              asbCubeSatACS_B.kxj_l = asbCubeSatACS_ConstB.Sum_i[2] *
                asbCubeSatACS_B.Sum_m4;

              /* Product: '<S202>/i x j' */
              asbCubeSatACS_B.ixj_k = asbCubeSatACS_ConstB.Sum_i[0] *
                asbCubeSatACS_B.Sum_m4;

              /* Product: '<S202>/k x i' */
              asbCubeSatACS_B.kxi_m = asbCubeSatACS_ConstB.Sum_i[2] *
                asbCubeSatACS_B.Sum_j;

              /* Product: '<S202>/j x k' */
              asbCubeSatACS_B.jxk_p = asbCubeSatACS_ConstB.Sum_i[1] *
                asbCubeSatACS_B.Sum_ld;

              /* Sum: '<S197>/Sum' */
              asbCubeSatACS_B.Sum_gy[0] = asbCubeSatACS_B.jxk_p -
                asbCubeSatACS_B.kxj_l;
              asbCubeSatACS_B.Sum_gy[1] = asbCubeSatACS_B.kxi_m -
                asbCubeSatACS_B.ixk_a;
              asbCubeSatACS_B.Sum_gy[2] = asbCubeSatACS_B.ixj_k -
                asbCubeSatACS_B.jxi_d;

              /* Switch: '<S163>/is 180deg Rot' */
              asbCubeSatACS_B.is180degRot_m[0] = asbCubeSatACS_B.Sum_gy[0];
              asbCubeSatACS_B.is180degRot_m[1] = asbCubeSatACS_B.Sum_gy[1];
              asbCubeSatACS_B.is180degRot_m[2] = asbCubeSatACS_B.Sum_gy[2];
            } else {
              /* Switch: '<S163>/is 180deg Rot' */
              asbCubeSatACS_B.is180degRot_m[0] = asbCubeSatACS_ConstB.Sum_iv[0];
              asbCubeSatACS_B.is180degRot_m[1] = asbCubeSatACS_ConstB.Sum_iv[1];
              asbCubeSatACS_B.is180degRot_m[2] = asbCubeSatACS_ConstB.Sum_iv[2];
            }

            /* Product: '<S211>/Product3' */
            asbCubeSatACS_B.Product3_jn = asbCubeSatACS_B.is180degRot_m[2] *
              asbCubeSatACS_B.is180degRot_m[2];

            /* Product: '<S211>/Product2' */
            asbCubeSatACS_B.Product2_nf = asbCubeSatACS_B.is180degRot_m[1] *
              asbCubeSatACS_B.is180degRot_m[1];

            /* Product: '<S211>/Product1' */
            asbCubeSatACS_B.Product1_az = asbCubeSatACS_B.is180degRot_m[0] *
              asbCubeSatACS_B.is180degRot_m[0];

            /* DotProduct: '<S163>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
            tmp_0 = u0 * u;

            /* DotProduct: '<S163>/Dot Product3' incorporates:
             *  Sum: '<S213>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[0];
            tmp_2 = asbCubeSatACS_ConstB.Sum_i[0] * u0;

            /* DotProduct: '<S163>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
            tmp_0 += u0 * u;

            /* DotProduct: '<S163>/Dot Product3' incorporates:
             *  Sum: '<S213>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[1];
            tmp_2 += asbCubeSatACS_ConstB.Sum_i[1] * u0;

            /* DotProduct: '<S163>/Dot Product2' */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
            u = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
            tmp_0 += u0 * u;

            /* DotProduct: '<S163>/Dot Product3' incorporates:
             *  Sum: '<S213>/Sum'
             */
            u0 = asbCubeSatACS_B.TmpSignalConversionAtDotProdu_d[2];
            tmp_2 += asbCubeSatACS_ConstB.Sum_i[2] * u0;

            /* DotProduct: '<S163>/Dot Product2' */
            asbCubeSatACS_B.DotProduct2_p = tmp_0;

            /* Product: '<S163>/Divide1' */
            asbCubeSatACS_B.Divide1_d = asbCubeSatACS_ConstB.DotProduct1_j *
              asbCubeSatACS_B.DotProduct2_p;

            /* Sqrt: '<S163>/Sqrt3' */
            asbCubeSatACS_B.Sqrt3_o = std::sqrt(asbCubeSatACS_B.Divide1_d);

            /* DotProduct: '<S163>/Dot Product3' */
            asbCubeSatACS_B.DotProduct3_j = tmp_2;

            /* Sum: '<S163>/Add2' */
            asbCubeSatACS_B.Add2_p = asbCubeSatACS_B.DotProduct3_j +
              asbCubeSatACS_B.Sqrt3_o;

            /* Product: '<S211>/Product' */
            asbCubeSatACS_B.Product_o = asbCubeSatACS_B.Add2_p *
              asbCubeSatACS_B.Add2_p;

            /* Sum: '<S211>/Sum' */
            asbCubeSatACS_B.Sum_o2 = ((asbCubeSatACS_B.Product_o +
              asbCubeSatACS_B.Product1_az) + asbCubeSatACS_B.Product2_nf) +
              asbCubeSatACS_B.Product3_jn;

            /* Sqrt: '<S210>/sqrt' */
            asbCubeSatACS_B.sqrt_ee = std::sqrt(asbCubeSatACS_B.Sum_o2);

            /* Product: '<S201>/Product3' */
            asbCubeSatACS_B.Product3_i = asbCubeSatACS_B.is180degRot_m[2] /
              asbCubeSatACS_B.sqrt_ee;

            /* Product: '<S172>/Product3' */
            asbCubeSatACS_B.Product3_jp = asbCubeSatACS_B.Product3_d2 *
              asbCubeSatACS_B.Product3_i;

            /* Product: '<S201>/Product2' */
            asbCubeSatACS_B.Product2_c = asbCubeSatACS_B.is180degRot_m[1] /
              asbCubeSatACS_B.sqrt_ee;

            /* Product: '<S172>/Product2' */
            asbCubeSatACS_B.Product2_cn = asbCubeSatACS_B.Product2_od *
              asbCubeSatACS_B.Product2_c;

            /* Product: '<S201>/Product1' */
            asbCubeSatACS_B.Product1_dr = asbCubeSatACS_B.is180degRot_m[0] /
              asbCubeSatACS_B.sqrt_ee;

            /* Product: '<S172>/Product1' */
            asbCubeSatACS_B.Product1_j4 = asbCubeSatACS_B.Product1_d *
              asbCubeSatACS_B.Product1_dr;

            /* Product: '<S201>/Product' */
            asbCubeSatACS_B.Product_or = asbCubeSatACS_B.Add2_p /
              asbCubeSatACS_B.sqrt_ee;

            /* Product: '<S172>/Product' */
            asbCubeSatACS_B.Product_c = asbCubeSatACS_B.Product_i *
              asbCubeSatACS_B.Product_or;

            /* Sum: '<S172>/Sum' */
            asbCubeSatACS_B.Sum_id = ((asbCubeSatACS_B.Product_c -
              asbCubeSatACS_B.Product1_j4) - asbCubeSatACS_B.Product2_cn) -
              asbCubeSatACS_B.Product3_jp;

            /* Product: '<S173>/Product3' */
            asbCubeSatACS_B.Product3_ic = asbCubeSatACS_B.Product3_d2 *
              asbCubeSatACS_B.Product2_c;

            /* Product: '<S173>/Product2' */
            asbCubeSatACS_B.Product2_d = asbCubeSatACS_B.Product2_od *
              asbCubeSatACS_B.Product3_i;

            /* Product: '<S173>/Product1' */
            asbCubeSatACS_B.Product1_nc = asbCubeSatACS_B.Product1_d *
              asbCubeSatACS_B.Product_or;

            /* Product: '<S173>/Product' */
            asbCubeSatACS_B.Product_k = asbCubeSatACS_B.Product_i *
              asbCubeSatACS_B.Product1_dr;

            /* Sum: '<S173>/Sum' */
            asbCubeSatACS_B.Sum_c = ((asbCubeSatACS_B.Product_k +
              asbCubeSatACS_B.Product1_nc) + asbCubeSatACS_B.Product2_d) -
              asbCubeSatACS_B.Product3_ic;

            /* Product: '<S174>/Product3' */
            asbCubeSatACS_B.Product3_ht = asbCubeSatACS_B.Product3_d2 *
              asbCubeSatACS_B.Product1_dr;

            /* Product: '<S174>/Product2' */
            asbCubeSatACS_B.Product2_mx = asbCubeSatACS_B.Product2_od *
              asbCubeSatACS_B.Product_or;

            /* Product: '<S174>/Product1' */
            asbCubeSatACS_B.Product1_jk = asbCubeSatACS_B.Product1_d *
              asbCubeSatACS_B.Product3_i;

            /* Product: '<S174>/Product' */
            asbCubeSatACS_B.Product_kq = asbCubeSatACS_B.Product_i *
              asbCubeSatACS_B.Product2_c;

            /* Sum: '<S174>/Sum' */
            asbCubeSatACS_B.Sum_ct = ((asbCubeSatACS_B.Product_kq -
              asbCubeSatACS_B.Product1_jk) + asbCubeSatACS_B.Product2_mx) +
              asbCubeSatACS_B.Product3_ht;

            /* Product: '<S175>/Product3' */
            asbCubeSatACS_B.Product3_fq = asbCubeSatACS_B.Product3_d2 *
              asbCubeSatACS_B.Product_or;

            /* Product: '<S175>/Product2' */
            asbCubeSatACS_B.Product2_eb = asbCubeSatACS_B.Product2_od *
              asbCubeSatACS_B.Product1_dr;

            /* Product: '<S175>/Product1' */
            asbCubeSatACS_B.Product1_ac = asbCubeSatACS_B.Product1_d *
              asbCubeSatACS_B.Product2_c;

            /* Product: '<S175>/Product' */
            asbCubeSatACS_B.Product_gm = asbCubeSatACS_B.Product_i *
              asbCubeSatACS_B.Product3_i;

            /* Sum: '<S175>/Sum' */
            asbCubeSatACS_B.Sum_g = ((asbCubeSatACS_B.Product_gm +
              asbCubeSatACS_B.Product1_ac) - asbCubeSatACS_B.Product2_eb) +
              asbCubeSatACS_B.Product3_fq;

            /* Switch: '<S141>/Switch' */
            asbCubeSatACS_B.Switch[0] = asbCubeSatACS_B.Sum_id;
            asbCubeSatACS_B.Switch[1] = asbCubeSatACS_B.Sum_c;
            asbCubeSatACS_B.Switch[2] = asbCubeSatACS_B.Sum_ct;
            asbCubeSatACS_B.Switch[3] = asbCubeSatACS_B.Sum_g;
          }

          /* Merge: '<S3>/ Merge 1' incorporates:
           *  SignalConversion generated from: '<S6>/cmd_q_b2tgt'
           */
          asbCubeSatACS_B.cmd_q_b2tgt[0] = asbCubeSatACS_B.Switch[0];
          asbCubeSatACS_B.cmd_q_b2tgt[1] = asbCubeSatACS_B.Switch[1];
          asbCubeSatACS_B.cmd_q_b2tgt[2] = asbCubeSatACS_B.Switch[2];
          asbCubeSatACS_B.cmd_q_b2tgt[3] = asbCubeSatACS_B.Switch[3];

          /* Product: '<S241>/Product' */
          asbCubeSatACS_B.Product_do = asbCubeSatACS_B.Switch[0] *
            asbCubeSatACS_B.Switch[0];

          /* Product: '<S241>/Product1' */
          asbCubeSatACS_B.Product1_h = asbCubeSatACS_B.Switch[1] *
            asbCubeSatACS_B.Switch[1];

          /* Product: '<S241>/Product2' */
          asbCubeSatACS_B.Product2_p = asbCubeSatACS_B.Switch[2] *
            asbCubeSatACS_B.Switch[2];

          /* Product: '<S241>/Product3' */
          asbCubeSatACS_B.Product3_pz = asbCubeSatACS_B.Switch[3] *
            asbCubeSatACS_B.Switch[3];

          /* Sum: '<S241>/Sum' */
          asbCubeSatACS_B.Sum_a = ((asbCubeSatACS_B.Product_do +
            asbCubeSatACS_B.Product1_h) + asbCubeSatACS_B.Product2_p) +
            asbCubeSatACS_B.Product3_pz;

          /* Sqrt: '<S240>/sqrt' */
          asbCubeSatACS_B.sqrt_k = std::sqrt(asbCubeSatACS_B.Sum_a);

          /* Product: '<S235>/Product' */
          asbCubeSatACS_B.Product_mw = asbCubeSatACS_B.Switch[0] /
            asbCubeSatACS_B.sqrt_k;

          /* Product: '<S235>/Product1' */
          asbCubeSatACS_B.Product1_lc = asbCubeSatACS_B.Switch[1] /
            asbCubeSatACS_B.sqrt_k;

          /* Product: '<S235>/Product2' */
          asbCubeSatACS_B.Product2_el = asbCubeSatACS_B.Switch[2] /
            asbCubeSatACS_B.sqrt_k;

          /* Product: '<S235>/Product3' */
          asbCubeSatACS_B.Product3_e1 = asbCubeSatACS_B.Switch[3] /
            asbCubeSatACS_B.sqrt_k;

          /* Fcn: '<S138>/fcn3' */
          asbCubeSatACS_B.fcn3 = (asbCubeSatACS_B.Product1_lc *
            asbCubeSatACS_B.Product3_e1 + asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product2_el) * 2.0;

          /* If: '<S236>/If' */
          if (asbCubeSatACS_B.fcn3 > 1.0) {
            /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem' incorporates:
             *  ActionPort: '<S237>/Action Port'
             */
            /* Merge: '<S236>/Merge' incorporates:
             *  Constant: '<S237>/Constant'
             */
            asbCubeSatACS_B.Merge_j = 1.0;

            /* End of Outputs for SubSystem: '<S236>/If Action Subsystem' */
          } else if (asbCubeSatACS_B.fcn3 < -1.0) {
            /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S238>/Action Port'
             */
            /* Merge: '<S236>/Merge' incorporates:
             *  Constant: '<S238>/Constant'
             */
            asbCubeSatACS_B.Merge_j = 1.0;

            /* End of Outputs for SubSystem: '<S236>/If Action Subsystem1' */
          } else {
            /* Outputs for IfAction SubSystem: '<S236>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S239>/Action Port'
             */
            asbCubeSat_IfActionSubsystem2_p(asbCubeSatACS_B.fcn3,
              &asbCubeSatACS_B.Merge_j);

            /* End of Outputs for SubSystem: '<S236>/If Action Subsystem2' */
          }

          /* Fcn: '<S138>/fcn1' */
          asbCubeSatACS_B.fcn1 = (asbCubeSatACS_B.Product2_el *
            asbCubeSatACS_B.Product3_e1 - asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product1_lc) * -2.0;

          /* Fcn: '<S138>/fcn2' */
          asbCubeSatACS_B.fcn2 = ((asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product_mw - asbCubeSatACS_B.Product1_lc *
            asbCubeSatACS_B.Product1_lc) - asbCubeSatACS_B.Product2_el *
            asbCubeSatACS_B.Product2_el) + asbCubeSatACS_B.Product3_e1 *
            asbCubeSatACS_B.Product3_e1;

          /* Trigonometry: '<S234>/Trigonometric Function1' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          asbCubeSatACS_B.PointingCmd[0] = rt_atan2d_snf(asbCubeSatACS_B.fcn1,
            asbCubeSatACS_B.fcn2);

          /* Fcn: '<S138>/fcn4' */
          asbCubeSatACS_B.fcn4 = (asbCubeSatACS_B.Product1_lc *
            asbCubeSatACS_B.Product2_el - asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product3_e1) * -2.0;

          /* Fcn: '<S138>/fcn5' */
          asbCubeSatACS_B.fcn5 = ((asbCubeSatACS_B.Product_mw *
            asbCubeSatACS_B.Product_mw + asbCubeSatACS_B.Product1_lc *
            asbCubeSatACS_B.Product1_lc) - asbCubeSatACS_B.Product2_el *
            asbCubeSatACS_B.Product2_el) - asbCubeSatACS_B.Product3_e1 *
            asbCubeSatACS_B.Product3_e1;

          /* Trigonometry: '<S234>/Trigonometric Function3' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          asbCubeSatACS_B.PointingCmd[2] = rt_atan2d_snf(asbCubeSatACS_B.fcn4,
            asbCubeSatACS_B.fcn5);

          /* Trigonometry: '<S234>/trigFcn' incorporates:
           *  Merge: '<S3>/ Merge '
           */
          u0 = asbCubeSatACS_B.Merge_j;
          if (u0 > 1.0) {
            u0 = 1.0;
          } else if (u0 < -1.0) {
            u0 = -1.0;
          }

          asbCubeSatACS_B.PointingCmd[1] = std::asin(u0);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Pointing Mode Selection' */

  /* BusCreator generated from: '<Root>/Bus Creator' */
  rty_ACSOut->AttitudeError.Roll = asbCubeSatACS_B.PointingCmd[0];
  rty_ACSOut->AttitudeError.Pitch = asbCubeSatACS_B.PointingCmd[1];
  rty_ACSOut->AttitudeError.Yaw = asbCubeSatACS_B.PointingCmd[2];

  /* Gain: '<S280>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.ProportionalGain[0] = 5.5E-5 * asbCubeSatACS_B.PointingCmd[0];

  /* DiscreteIntegrator: '<S275>/Integrator' */
  asbCubeSatACS_B.Integrator[0] = asbCubeSatACS_DW.Integrator_DSTATE[0];

  /* Gain: '<S267>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.DerivativeGain[0] = 0.017 * asbCubeSatACS_B.PointingCmd[0];

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
  asbCubeSatACS_B.Tsamp[0] = asbCubeSatACS_B.DerivativeGain[0];

  /* Delay: '<S268>/UD' */
  asbCubeSatACS_B.UD[0] = asbCubeSatACS_DW.UD_DSTATE[0];

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
  asbCubeSatACS_B.Diff[0] = asbCubeSatACS_B.Tsamp[0] - asbCubeSatACS_B.UD[0];

  /* Sum: '<S284>/Sum' incorporates:
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Sum: '<S268>/Diff'
   */
  asbCubeSatACS_B.Sum[0] = (asbCubeSatACS_B.ProportionalGain[0] +
    asbCubeSatACS_B.Integrator[0]) + asbCubeSatACS_B.Diff[0];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[0] = asbCubeSatACS_B.Sum[0];

  /* Gain: '<S280>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.ProportionalGain[1] = 5.5E-5 * asbCubeSatACS_B.PointingCmd[1];

  /* DiscreteIntegrator: '<S275>/Integrator' */
  asbCubeSatACS_B.Integrator[1] = asbCubeSatACS_DW.Integrator_DSTATE[1];

  /* Gain: '<S267>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.DerivativeGain[1] = 0.017 * asbCubeSatACS_B.PointingCmd[1];

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
  asbCubeSatACS_B.Tsamp[1] = asbCubeSatACS_B.DerivativeGain[1];

  /* Delay: '<S268>/UD' */
  asbCubeSatACS_B.UD[1] = asbCubeSatACS_DW.UD_DSTATE[1];

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
  asbCubeSatACS_B.Diff[1] = asbCubeSatACS_B.Tsamp[1] - asbCubeSatACS_B.UD[1];

  /* Sum: '<S284>/Sum' incorporates:
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Sum: '<S268>/Diff'
   */
  asbCubeSatACS_B.Sum[1] = (asbCubeSatACS_B.ProportionalGain[1] +
    asbCubeSatACS_B.Integrator[1]) + asbCubeSatACS_B.Diff[1];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[1] = asbCubeSatACS_B.Sum[1];

  /* Gain: '<S280>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.ProportionalGain[2] = 5.5E-5 * asbCubeSatACS_B.PointingCmd[2];

  /* DiscreteIntegrator: '<S275>/Integrator' */
  asbCubeSatACS_B.Integrator[2] = asbCubeSatACS_DW.Integrator_DSTATE[2];

  /* Gain: '<S267>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.DerivativeGain[2] = 0.017 * asbCubeSatACS_B.PointingCmd[2];

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
  asbCubeSatACS_B.Tsamp[2] = asbCubeSatACS_B.DerivativeGain[2];

  /* Delay: '<S268>/UD' */
  asbCubeSatACS_B.UD[2] = asbCubeSatACS_DW.UD_DSTATE[2];

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
  asbCubeSatACS_B.Diff[2] = asbCubeSatACS_B.Tsamp[2] - asbCubeSatACS_B.UD[2];

  /* Sum: '<S284>/Sum' incorporates:
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Sum: '<S268>/Diff'
   */
  asbCubeSatACS_B.Sum[2] = (asbCubeSatACS_B.ProportionalGain[2] +
    asbCubeSatACS_B.Integrator[2]) + asbCubeSatACS_B.Diff[2];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[2] = asbCubeSatACS_B.Sum[2];
  rty_ACSOut->cmd_q_b2tgt[0] = asbCubeSatACS_B.cmd_q_b2tgt[0];
  rty_ACSOut->cmd_q_b2tgt[1] = asbCubeSatACS_B.cmd_q_b2tgt[1];
  rty_ACSOut->cmd_q_b2tgt[2] = asbCubeSatACS_B.cmd_q_b2tgt[2];
  rty_ACSOut->cmd_q_b2tgt[3] = asbCubeSatACS_B.cmd_q_b2tgt[3];
  rty_ACSOut->NavMode = *rtu_AttitudeMode;

  /* Gain: '<S272>/Integral Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.IntegralGain[0] = 0.0 * asbCubeSatACS_B.PointingCmd[0];

  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   */
  asbCubeSatACS_DW.Integrator_DSTATE[0] += asbCubeSatACS_B.IntegralGain[0];

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
  asbCubeSatACS_DW.UD_DSTATE[0] = asbCubeSatACS_B.Tsamp[0];

  /* Gain: '<S272>/Integral Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.IntegralGain[1] = 0.0 * asbCubeSatACS_B.PointingCmd[1];

  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   */
  asbCubeSatACS_DW.Integrator_DSTATE[1] += asbCubeSatACS_B.IntegralGain[1];

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
  asbCubeSatACS_DW.UD_DSTATE[1] = asbCubeSatACS_B.Tsamp[1];

  /* Gain: '<S272>/Integral Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  asbCubeSatACS_B.IntegralGain[2] = 0.0 * asbCubeSatACS_B.PointingCmd[2];

  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   */
  asbCubeSatACS_DW.Integrator_DSTATE[2] += asbCubeSatACS_B.IntegralGain[2];

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
  asbCubeSatACS_DW.UD_DSTATE[2] = asbCubeSatACS_B.Tsamp[2];
}

/* Model initialize function */
void asbCubeSatACS::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  asbCubeSatACS_InitializeDataMapInfo((&asbCubeSatACS_M), &asbCubeSatACS_B);
}

/* Constructor */
asbCubeSatACS::asbCubeSatACS() :
  asbCubeSatACS_B(),
  asbCubeSatACS_DW(),
  asbCubeSatACS_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
asbCubeSatACS::~asbCubeSatACS()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_asbCubeSatACS_T * asbCubeSatACS::getRTM()
{
  return (&asbCubeSatACS_M);
}

/* member function to set up the C-API information */
void asbCubeSatACS::setupCAPIInfo(rtwCAPI_ModelMappingInfo *rt_ParentMMI, const
  char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx)
{
  /* Initialize Parent model MMI */
  if ((rt_ParentMMI != (nullptr)) && (rt_ChildPath != (nullptr))) {
    rtwCAPI_SetChildMMI(*rt_ParentMMI, rt_ChildMMIIdx, &((&asbCubeSatACS_M)
      ->DataMapInfo.mmi));
    rtwCAPI_SetPath((&asbCubeSatACS_M)->DataMapInfo.mmi, rt_ChildPath);
    rtwCAPI_MMISetContStateStartIndex((&asbCubeSatACS_M)->DataMapInfo.mmi,
      rt_CSTATEIdx);
  }
}

/* member function to setup error status pointer */
void asbCubeSatACS::setErrorStatusPointer(const char_T **rt_errorStatus)
{
  rtmSetErrorStatusPointer((&asbCubeSatACS_M), rt_errorStatus);
}
