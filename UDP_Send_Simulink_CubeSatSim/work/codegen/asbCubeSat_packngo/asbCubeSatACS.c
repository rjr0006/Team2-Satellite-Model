/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: asbCubeSatACS.c
 *
 * Code generated for Simulink model 'asbCubeSatACS'.
 *
 * Model version                  : 6.9
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Sun Sep 25 19:23:42 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "asbCubeSatACS.h"
#include "rtwtypes.h"
#include "asbCubeSatACS_types.h"
#include "asbCubeSatACS_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rt_atan2d_snf.h"

/* Named constants for Chart: '<S1>/Pointing Mode Selection' */
#define asbCubeSatACS_IN_Earth         ((uint8_T)1U)
#define asbCubeSatACS_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define asbCubeSatACS_IN_Off           ((uint8_T)1U)
#define asbCubeSatACS_IN_On            ((uint8_T)2U)
#define asbCubeSatACS_IN_Sun           ((uint8_T)2U)
#define asbCubeSatACS_IN_Transition    ((uint8_T)3U)

P_asbCubeSatACS_T asbCubeSatACS_P = {
  /* Mask Parameter: DiscretePIDController_DifferentiatorICPrevScaledInput
   * Referenced by: '<S268>/UD'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_InitialConditionForIntegrator
   * Referenced by: '<S275>/Integrator'
   */
  0.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S78>/Constant'
   */
  -1.0,

  /* Mask Parameter: CompareToConstant_const_i
   * Referenced by: '<S93>/Constant'
   */
  -1.0,

  /* Mask Parameter: CompareToConstant_const_j
   * Referenced by: '<S184>/Constant'
   */
  -1.0,

  /* Mask Parameter: CompareToConstant_const_l
   * Referenced by: '<S199>/Constant'
   */
  -1.0,

  /* Mask Parameter: Calculateq_icrf2lvlh_mu
   * Referenced by: '<S23>/Constant2'
   */
  3.986004418E+14,

  /* Mask Parameter: AttitudeProfileNadirPointing_primaryAlignment
   * Referenced by: '<S7>/primaryAlignment'
   */
  { 0.0, 0.0, 1.0 },

  /* Mask Parameter: AttitudeProfileSunTracking_primaryAlignment
   * Referenced by: '<S136>/primaryAlignment'
   */
  { 0.0, 0.0, -1.0 },

  /* Mask Parameter: AttitudeProfileNadirPointing_secondaryAlignment
   * Referenced by: '<S7>/secondaryAlignment'
   */
  { 1.0, 0.0, 0.0 },

  /* Mask Parameter: AttitudeProfileSunTracking_secondaryAlignment
   * Referenced by: '<S136>/secondaryAlignment'
   */
  { 1.0, 0.0, 0.0 },

  /* Mask Parameter: AttitudeProfileNadirPointing_secondaryConstraint
   * Referenced by: '<S7>/secondaryConstraint'
   */
  { 0.0, 1.0, 0.0 },

  /* Mask Parameter: AttitudeProfileSunTracking_secondaryConstraint
   * Referenced by: '<S136>/secondaryConstraint'
   */
  { 0.0, 0.0, 1.0 },

  /* Expression: [1 0 0 0]
   * Referenced by: '<S4>/Unit quat'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0]
   * Referenced by: '<S4>/TorqueCmds'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: 2*pi
   * Referenced by: '<S23>/Constant3'
   */
  6.2831853071795862,

  /* Expression: 2*pi
   * Referenced by: '<S23>/Constant1'
   */
  6.2831853071795862,

  /* Expression: 2*pi
   * Referenced by: '<S23>/Constant4'
   */
  6.2831853071795862,

  /* Expression: -1
   * Referenced by: '<S79>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S79>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S79>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S79>/Gain2'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S94>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S94>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S94>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S94>/Gain2'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S131>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S132>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S52>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S53>/Constant'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S50>/Bias'
   */
  -1.0,

  /* Expression: +1
   * Referenced by: '<S50>/Bias1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S10>/Gain'
   */
  -1.0,

  /* Expression: 2
   * Referenced by: '<S18>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S18>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S18>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S18>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S19>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S19>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S19>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S19>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S20>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S20>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S20>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S20>/Gain2'
   */
  2.0,

  /* Expression: [0 0 1]
   * Referenced by: '<S23>/Constant'
   */
  { 0.0, 0.0, 1.0 },

  /* Expression: -1
   * Referenced by: '<S30>/Constant1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S30>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S23>/n_j < 0'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S31>/Constant1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S31>/Constant'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S29>/Constant1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S29>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S23>/e_k < 0'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S28>/Constant1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S28>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S23>/r.v < 0'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S33>/1//2'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S123>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S123>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S123>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S123>/Gain1'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S124>/Gain'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S124>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S124>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S124>/Gain1'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S125>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S125>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S125>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S125>/Gain2'
   */
  2.0,

  /* Expression: -1
   * Referenced by: '<S51>/Bias'
   */
  -1.0,

  /* Expression: +1
   * Referenced by: '<S51>/Bias1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S77>/Bias'
   */
  -1.0,

  /* Expression: +1
   * Referenced by: '<S77>/Bias1'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S71>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S71>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S71>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S71>/Gain1'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S72>/Gain'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S72>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S72>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S72>/Gain1'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S73>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S73>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S73>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S73>/Gain2'
   */
  2.0,

  /* Expression: -1
   * Referenced by: '<S92>/Bias'
   */
  -1.0,

  /* Expression: +1
   * Referenced by: '<S92>/Bias1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S185>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S185>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S185>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S185>/Gain2'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S200>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S200>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S200>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S200>/Gain2'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S237>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S238>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S158>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S159>/Constant'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S156>/Bias'
   */
  -1.0,

  /* Expression: +1
   * Referenced by: '<S156>/Bias1'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S147>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S147>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S147>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S147>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S148>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S148>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S148>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S148>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S149>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S149>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S149>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S149>/Gain2'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S229>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S229>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S229>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S229>/Gain1'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S230>/Gain'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S230>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S230>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S230>/Gain1'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S231>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S231>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S231>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S231>/Gain2'
   */
  2.0,

  /* Expression: -1
   * Referenced by: '<S157>/Bias'
   */
  -1.0,

  /* Expression: +1
   * Referenced by: '<S157>/Bias1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S183>/Bias'
   */
  -1.0,

  /* Expression: +1
   * Referenced by: '<S183>/Bias1'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S177>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S177>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S177>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S177>/Gain1'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S178>/Gain'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S178>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S178>/Gain2'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S178>/Gain1'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S179>/Gain'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S179>/Gain1'
   */
  2.0,

  /* Expression: 0.5
   * Referenced by: '<S179>/Constant'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S179>/Gain2'
   */
  2.0,

  /* Expression: -1
   * Referenced by: '<S198>/Bias'
   */
  -1.0,

  /* Expression: +1
   * Referenced by: '<S198>/Bias1'
   */
  1.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S275>/Integrator'
   */
  1.0,

  /* Start of '<S198>/If Action Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S206>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S198>/If Action Subsystem2' */

  /* Start of '<S198>/If Action Subsystem1' */
  {
    /* Expression: -1
     * Referenced by: '<S205>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S198>/If Action Subsystem1' */

  /* Start of '<S198>/If Action Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S204>/Constant'
     */
    1.0
  }
  ,

  /* End of '<S198>/If Action Subsystem' */

  /* Start of '<S183>/If Action Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S191>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S183>/If Action Subsystem2' */

  /* Start of '<S183>/If Action Subsystem1' */
  {
    /* Expression: -1
     * Referenced by: '<S190>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S183>/If Action Subsystem1' */

  /* Start of '<S183>/If Action Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S189>/Constant'
     */
    1.0
  }
  ,

  /* End of '<S183>/If Action Subsystem' */

  /* Start of '<S157>/If Action Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S171>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S157>/If Action Subsystem2' */

  /* Start of '<S157>/If Action Subsystem1' */
  {
    /* Expression: -1
     * Referenced by: '<S170>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S157>/If Action Subsystem1' */

  /* Start of '<S157>/If Action Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S169>/Constant'
     */
    1.0
  }
  ,

  /* End of '<S157>/If Action Subsystem' */

  /* Start of '<S156>/If Action Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S168>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S156>/If Action Subsystem2' */

  /* Start of '<S156>/If Action Subsystem1' */
  {
    /* Expression: -1
     * Referenced by: '<S167>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S156>/If Action Subsystem1' */

  /* Start of '<S156>/If Action Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S166>/Constant'
     */
    1.0
  }
  ,

  /* End of '<S156>/If Action Subsystem' */

  /* Start of '<S92>/If Action Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S100>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S92>/If Action Subsystem2' */

  /* Start of '<S92>/If Action Subsystem1' */
  {
    /* Expression: -1
     * Referenced by: '<S99>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S92>/If Action Subsystem1' */

  /* Start of '<S92>/If Action Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S98>/Constant'
     */
    1.0
  }
  ,

  /* End of '<S92>/If Action Subsystem' */

  /* Start of '<S77>/If Action Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S85>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S77>/If Action Subsystem2' */

  /* Start of '<S77>/If Action Subsystem1' */
  {
    /* Expression: -1
     * Referenced by: '<S84>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S77>/If Action Subsystem1' */

  /* Start of '<S77>/If Action Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S83>/Constant'
     */
    1.0
  }
  ,

  /* End of '<S77>/If Action Subsystem' */

  /* Start of '<S51>/If Action Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S65>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S51>/If Action Subsystem2' */

  /* Start of '<S51>/If Action Subsystem1' */
  {
    /* Expression: -1
     * Referenced by: '<S64>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S51>/If Action Subsystem1' */

  /* Start of '<S51>/If Action Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S63>/Constant'
     */
    1.0
  }
  ,

  /* End of '<S51>/If Action Subsystem' */

  /* Start of '<S50>/If Action Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S62>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S50>/If Action Subsystem2' */

  /* Start of '<S50>/If Action Subsystem1' */
  {
    /* Expression: -1
     * Referenced by: '<S61>/Constant'
     */
    -1.0
  }
  ,

  /* End of '<S50>/If Action Subsystem1' */

  /* Start of '<S50>/If Action Subsystem' */
  {
    /* Expression: 1
     * Referenced by: '<S60>/Constant'
     */
    1.0
  }
  /* End of '<S50>/If Action Subsystem' */
};

/*
 * Output and update for action system:
 *    '<S50>/If Action Subsystem'
 *    '<S50>/If Action Subsystem1'
 *    '<S50>/If Action Subsystem2'
 *    '<S51>/If Action Subsystem'
 *    '<S51>/If Action Subsystem1'
 *    '<S51>/If Action Subsystem2'
 *    '<S77>/If Action Subsystem'
 *    '<S77>/If Action Subsystem1'
 *    '<S77>/If Action Subsystem2'
 *    '<S92>/If Action Subsystem'
 *    ...
 */
void asbCubeSatACS_IfActionSubsystem(real_T *rty_Out1,
  P_IfActionSubsystem_asbCubeSatACS_T *localP)
{
  /* SignalConversion generated from: '<S60>/Out1' incorporates:
   *  Constant: '<S60>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/* System initialize for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS_Init(ACSOutBus *rty_ACSOut, DW_asbCubeSatACS_f_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[0] =
    asbCubeSatACS_P.DiscretePIDController_InitialConditionForIntegrator;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[0] =
    asbCubeSatACS_P.DiscretePIDController_DifferentiatorICPrevScaledInput;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[1] =
    asbCubeSatACS_P.DiscretePIDController_InitialConditionForIntegrator;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[1] =
    asbCubeSatACS_P.DiscretePIDController_DifferentiatorICPrevScaledInput;

  /* InitializeConditions for DiscreteIntegrator: '<S275>/Integrator' */
  localDW->Integrator_DSTATE[2] =
    asbCubeSatACS_P.DiscretePIDController_InitialConditionForIntegrator;

  /* InitializeConditions for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[2] =
    asbCubeSatACS_P.DiscretePIDController_DifferentiatorICPrevScaledInput;

  /* SystemInitialize for BusCreator generated from: '<Root>/Bus Creator' */
  rty_ACSOut->AttitudeError.Roll = 0.0;
  rty_ACSOut->AttitudeError.Pitch = 0.0;
  rty_ACSOut->AttitudeError.Yaw = 0.0;
}

/* Output and update for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS(const real_T rtu_SensorsOut_X_eci[3], const real_T
                   rtu_SensorsOut_V_eci[3], const real_T rtu_SensorsOut_q_eci2b
                   [4], const real_T *rtu_AttitudeMode, const real_T
                   rtu_Environment_x_sun_eci[3], ACSOutBus *rty_ACSOut,
                   B_asbCubeSatACS_c_T *localB, DW_asbCubeSatACS_f_T *localDW)
{
  real_T rtb_Product1_pv;
  real_T rtb_Product2_el_tmp;
  real_T rtb_Product3_ar;
  real_T rtb_Product3_c_tmp;
  real_T rtb_Sum_dw;
  real_T rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
  boolean_T rtb_Compare_h;
  boolean_T rtb_Compare_jn;

  /* Chart: '<S1>/Pointing Mode Selection' incorporates:
   *  Sum: '<S23>/e = (v x h) // mu - r // |r|'
   */
  if (localDW->is_active_c1_asbCubeSatACS == 0U) {
    localDW->is_active_c1_asbCubeSatACS = 1U;
    localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    /* Merge: '<S3>/ Merge 1' incorporates:
     *  Constant: '<S4>/Unit quat'
     *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
     */
    localB->cmd_q_b2tgt[0] = asbCubeSatACS_P.Unitquat_Value[0];
    localB->cmd_q_b2tgt[1] = asbCubeSatACS_P.Unitquat_Value[1];
    localB->cmd_q_b2tgt[2] = asbCubeSatACS_P.Unitquat_Value[2];
    localB->cmd_q_b2tgt[3] = asbCubeSatACS_P.Unitquat_Value[3];

    /* Merge: '<S3>/ Merge ' incorporates:
     *  Constant: '<S4>/TorqueCmds'
     *  SignalConversion generated from: '<S4>/PointingCmd'
     */
    localB->PointingCmd[0] = asbCubeSatACS_P.TorqueCmds_Value[0];
    localB->PointingCmd[1] = asbCubeSatACS_P.TorqueCmds_Value[1];
    localB->PointingCmd[2] = asbCubeSatACS_P.TorqueCmds_Value[2];
  } else if (localDW->is_c1_asbCubeSatACS == asbCubeSatACS_IN_Off) {
    if (*rtu_AttitudeMode != 0.0) {
      localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_On;
      localDW->is_On = asbCubeSatACS_IN_Transition;
    } else {
      /* Merge: '<S3>/ Merge 1' incorporates:
       *  Constant: '<S4>/Unit quat'
       *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
       */
      localB->cmd_q_b2tgt[0] = asbCubeSatACS_P.Unitquat_Value[0];
      localB->cmd_q_b2tgt[1] = asbCubeSatACS_P.Unitquat_Value[1];
      localB->cmd_q_b2tgt[2] = asbCubeSatACS_P.Unitquat_Value[2];
      localB->cmd_q_b2tgt[3] = asbCubeSatACS_P.Unitquat_Value[3];

      /* Merge: '<S3>/ Merge ' incorporates:
       *  Constant: '<S4>/TorqueCmds'
       *  SignalConversion generated from: '<S4>/PointingCmd'
       */
      localB->PointingCmd[0] = asbCubeSatACS_P.TorqueCmds_Value[0];
      localB->PointingCmd[1] = asbCubeSatACS_P.TorqueCmds_Value[1];
      localB->PointingCmd[2] = asbCubeSatACS_P.TorqueCmds_Value[2];
    }

    /* case IN_On: */
  } else if (*rtu_AttitudeMode == 0.0) {
    localDW->is_On = asbCubeSatACS_IN_NO_ACTIVE_CHILD;
    localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    /* Merge: '<S3>/ Merge 1' incorporates:
     *  Constant: '<S4>/Unit quat'
     *  SignalConversion generated from: '<S4>/cmd_q_b2tgt'
     */
    localB->cmd_q_b2tgt[0] = asbCubeSatACS_P.Unitquat_Value[0];
    localB->cmd_q_b2tgt[1] = asbCubeSatACS_P.Unitquat_Value[1];
    localB->cmd_q_b2tgt[2] = asbCubeSatACS_P.Unitquat_Value[2];
    localB->cmd_q_b2tgt[3] = asbCubeSatACS_P.Unitquat_Value[3];

    /* Merge: '<S3>/ Merge ' incorporates:
     *  Constant: '<S4>/TorqueCmds'
     *  SignalConversion generated from: '<S4>/PointingCmd'
     */
    localB->PointingCmd[0] = asbCubeSatACS_P.TorqueCmds_Value[0];
    localB->PointingCmd[1] = asbCubeSatACS_P.TorqueCmds_Value[1];
    localB->PointingCmd[2] = asbCubeSatACS_P.TorqueCmds_Value[2];
  } else {
    switch (localDW->is_On) {
     case asbCubeSatACS_IN_Earth:
      if (*rtu_AttitudeMode == 2.0) {
        localDW->is_On = asbCubeSatACS_IN_Transition;
      } else {
        /* DotProduct: '<S50>/Dot Product1' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  DotProduct: '<S56>/Dot Product1'
         */
        localB->Product1_lc =
          (asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
           asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] +
           asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
           asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1]) +
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];

        /* Product: '<S50>/Divide' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  Constant: '<S7>/secondaryAlignment'
         *  DotProduct: '<S50>/Dot Product1'
         *  DotProduct: '<S50>/Dot Product2'
         *  DotProduct: '<S50>/Dot Product3'
         *  Product: '<S50>/Divide1'
         *  Sqrt: '<S50>/Sqrt3'
         */
        localB->Product2_e =
          ((asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[0] +
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[1])
           + asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
           asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[2]) /
          sqrt
          (((asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[0] *
             asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[0]
             + asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[1]
             * asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[1])
            + asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[2]
            * asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[2])
           * localB->Product1_lc);

        /* Abs: '<S50>/Abs' incorporates:
         *  Bias: '<S50>/Bias'
         */
        localB->Product3_e1 = fabs(localB->Product2_e +
          asbCubeSatACS_P.Bias_Bias);

        /* If: '<S50>/If' incorporates:
         *  Abs: '<S50>/Abs1'
         *  Bias: '<S50>/Bias1'
         */
        if (localB->Product3_e1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
           *  ActionPort: '<S60>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem' */
        } else if (fabs(localB->Product2_e + asbCubeSatACS_P.Bias1_Bias) <
                   1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S61>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem1);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S62>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem2);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem2' */
        }

        /* Gain: '<S10>/Gain' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         */
        localB->Product3_e = asbCubeSatACS_P.Gain_Gain_h * rtu_SensorsOut_X_eci
          [0];
        localB->Product1_g = asbCubeSatACS_P.Gain_Gain_h * rtu_SensorsOut_X_eci
          [1];
        localB->Product2_e = asbCubeSatACS_P.Gain_Gain_h * rtu_SensorsOut_X_eci
          [2];

        /* Sqrt: '<S120>/sqrt' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S121>/Product'
         *  Product: '<S121>/Product1'
         *  Product: '<S121>/Product2'
         *  Product: '<S121>/Product3'
         *  Sqrt: '<S48>/sqrt'
         *  Sum: '<S121>/Sum'
         *  UnaryMinus: '<S8>/Unary Minus'
         *  UnaryMinus: '<S8>/Unary Minus1'
         *  UnaryMinus: '<S8>/Unary Minus2'
         */
        localB->Merge_j = sqrt(((rtu_SensorsOut_q_eci2b[0] *
          rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
          -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
          -rtu_SensorsOut_q_eci2b[2]) + -rtu_SensorsOut_q_eci2b[3] *
          -rtu_SensorsOut_q_eci2b[3]);

        /* Product: '<S119>/Product1' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S26>/Product1'
         *  Sqrt: '<S120>/sqrt'
         *  UnaryMinus: '<S8>/Unary Minus'
         */
        rtb_Sum_dw = -rtu_SensorsOut_q_eci2b[1] / localB->Merge_j;

        /* Product: '<S119>/Product' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S26>/Product'
         *  Sqrt: '<S120>/sqrt'
         */
        rtb_Product1_pv = rtu_SensorsOut_q_eci2b[0] / localB->Merge_j;

        /* Product: '<S119>/Product2' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S26>/Product2'
         *  Sqrt: '<S120>/sqrt'
         *  UnaryMinus: '<S8>/Unary Minus1'
         */
        rtb_Product3_ar = -rtu_SensorsOut_q_eci2b[2] / localB->Merge_j;

        /* Product: '<S119>/Product3' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S26>/Product3'
         *  Sqrt: '<S120>/sqrt'
         *  UnaryMinus: '<S8>/Unary Minus2'
         */
        rtb_Product3_c_tmp = -rtu_SensorsOut_q_eci2b[3] / localB->Merge_j;

        /* Sqrt: '<S21>/sqrt' incorporates:
         *  Product: '<S119>/Product'
         *  Product: '<S119>/Product1'
         *  Product: '<S119>/Product2'
         *  Product: '<S119>/Product3'
         *  Product: '<S22>/Product'
         *  Product: '<S22>/Product1'
         *  Product: '<S22>/Product2'
         *  Product: '<S22>/Product3'
         *  Sum: '<S22>/Sum'
         *  UnaryMinus: '<S118>/Unary Minus'
         *  UnaryMinus: '<S118>/Unary Minus1'
         *  UnaryMinus: '<S118>/Unary Minus2'
         */
        localB->Sum_e = sqrt(((rtb_Product1_pv * rtb_Product1_pv + -rtb_Sum_dw *
          -rtb_Sum_dw) + -rtb_Product3_ar * -rtb_Product3_ar) +
                             -rtb_Product3_c_tmp * -rtb_Product3_c_tmp);

        /* Product: '<S17>/Product1' incorporates:
         *  Product: '<S119>/Product1'
         *  UnaryMinus: '<S118>/Unary Minus'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = -rtb_Sum_dw /
          localB->Sum_e;

        /* Product: '<S17>/Product2' incorporates:
         *  Product: '<S119>/Product2'
         *  UnaryMinus: '<S118>/Unary Minus1'
         */
        localB->Sum_m = -rtb_Product3_ar / localB->Sum_e;

        /* Product: '<S17>/Product' incorporates:
         *  Product: '<S119>/Product'
         */
        localB->Merge_j = rtb_Product1_pv / localB->Sum_e;

        /* Product: '<S17>/Product3' incorporates:
         *  Product: '<S119>/Product3'
         *  UnaryMinus: '<S118>/Unary Minus2'
         */
        localB->Product2_o4u = -rtb_Product3_c_tmp / localB->Sum_e;

        /* Product: '<S18>/Product' incorporates:
         *  Product: '<S19>/Product'
         */
        localB->Product3_cp = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Sum_m;

        /* Product: '<S18>/Product2' incorporates:
         *  Product: '<S20>/Product1'
         */
        localB->Product2_el = localB->Merge_j * localB->Sum_m;

        /* Product: '<S18>/Product6' incorporates:
         *  Product: '<S20>/Product7'
         */
        localB->fcn2 = localB->Sum_m * localB->Sum_m;

        /* Sum: '<S18>/Sum' incorporates:
         *  Constant: '<S18>/Constant'
         *  Gain: '<S18>/Gain'
         *  Gain: '<S18>/Gain1'
         *  Gain: '<S18>/Gain2'
         *  Product: '<S18>/Product'
         *  Product: '<S18>/Product1'
         *  Product: '<S18>/Product2'
         *  Product: '<S18>/Product3'
         *  Product: '<S18>/Product4'
         *  Product: '<S18>/Product5'
         *  Product: '<S18>/Product6'
         *  Product: '<S18>/Product7'
         *  Product: '<S18>/Product8'
         *  Sum: '<S18>/Sum1'
         *  Sum: '<S18>/Sum2'
         *  Sum: '<S18>/Sum3'
         */
        localB->Product1_d = (((asbCubeSatACS_P.Constant_Value_c - localB->fcn2)
          - localB->Product2_o4u * localB->Product2_o4u) *
                              asbCubeSatACS_P.Gain2_Gain_b * localB->Product3_e
                              + (localB->Merge_j * localB->Product2_o4u +
          localB->Product3_cp) * asbCubeSatACS_P.Gain_Gain_d *
                              localB->Product1_g) +
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
           localB->Product2_o4u - localB->Product2_el) *
          asbCubeSatACS_P.Gain1_Gain * localB->Product2_e;

        /* Product: '<S19>/Product3' incorporates:
         *  Product: '<S20>/Product3'
         */
        localB->Sum = localB->Sum_m * localB->Product2_o4u;

        /* Product: '<S19>/Product2' incorporates:
         *  Product: '<S20>/Product2'
         */
        localB->fcn5 = localB->Merge_j *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Product: '<S19>/Product6' incorporates:
         *  Product: '<S20>/Product6'
         */
        localB->jxi_i = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Sum: '<S19>/Sum' incorporates:
         *  Constant: '<S19>/Constant'
         *  Gain: '<S19>/Gain'
         *  Gain: '<S19>/Gain1'
         *  Gain: '<S19>/Gain2'
         *  Product: '<S19>/Product1'
         *  Product: '<S19>/Product2'
         *  Product: '<S19>/Product3'
         *  Product: '<S19>/Product4'
         *  Product: '<S19>/Product5'
         *  Product: '<S19>/Product6'
         *  Product: '<S19>/Product7'
         *  Product: '<S19>/Product8'
         *  Sum: '<S19>/Sum1'
         *  Sum: '<S19>/Sum2'
         *  Sum: '<S19>/Sum3'
         */
        localB->Product3_cp = (((asbCubeSatACS_P.Constant_Value_ci -
          localB->jxi_i) - localB->Product2_o4u * localB->Product2_o4u) *
          asbCubeSatACS_P.Gain2_Gain_l * localB->Product1_g +
          (localB->Product3_cp - localB->Merge_j * localB->Product2_o4u) *
          asbCubeSatACS_P.Gain_Gain_b * localB->Product3_e) + (localB->fcn5 +
          localB->Sum) * asbCubeSatACS_P.Gain1_Gain_h * localB->Product2_e;

        /* Sum: '<S20>/Sum' incorporates:
         *  Constant: '<S20>/Constant'
         *  Gain: '<S20>/Gain'
         *  Gain: '<S20>/Gain1'
         *  Gain: '<S20>/Gain2'
         *  Product: '<S20>/Product'
         *  Product: '<S20>/Product4'
         *  Product: '<S20>/Product5'
         *  Product: '<S20>/Product8'
         *  Sum: '<S20>/Sum1'
         *  Sum: '<S20>/Sum2'
         *  Sum: '<S20>/Sum3'
         */
        localB->fcn4 = ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
                         localB->Product2_o4u + localB->Product2_el) *
                        asbCubeSatACS_P.Gain_Gain_l0 * localB->Product3_e +
                        (localB->Sum - localB->fcn5) *
                        asbCubeSatACS_P.Gain1_Gain_d * localB->Product1_g) +
          ((asbCubeSatACS_P.Constant_Value_b2 - localB->jxi_i) - localB->fcn2) *
          asbCubeSatACS_P.Gain2_Gain_f * localB->Product2_e;

        /* Sum: '<S32>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S38>/i x j'
         *  Product: '<S38>/j x k'
         *  Product: '<S38>/k x i'
         *  Product: '<S39>/i x k'
         *  Product: '<S39>/j x i'
         *  Product: '<S39>/k x j'
         */
        localB->Sum = rtu_SensorsOut_X_eci[1] * rtu_SensorsOut_V_eci[2] -
          rtu_SensorsOut_V_eci[1] * rtu_SensorsOut_X_eci[2];
        localB->fcn5 = rtu_SensorsOut_V_eci[0] * rtu_SensorsOut_X_eci[2] -
          rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[2];
        localB->Sum_m = rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[1] -
          rtu_SensorsOut_V_eci[0] * rtu_SensorsOut_X_eci[1];

        /* Sum: '<S34>/Sum' incorporates:
         *  Constant: '<S23>/Constant'
         *  Product: '<S40>/i x j'
         *  Product: '<S40>/j x k'
         *  Product: '<S40>/k x i'
         *  Product: '<S41>/i x k'
         *  Product: '<S41>/j x i'
         *  Product: '<S41>/k x j'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          asbCubeSatACS_P.Constant_Value_m[1] * localB->Sum_m - localB->fcn5 *
          asbCubeSatACS_P.Constant_Value_m[2];
        localB->Product2_o4u = localB->Sum * asbCubeSatACS_P.Constant_Value_m[2]
          - asbCubeSatACS_P.Constant_Value_m[0] * localB->Sum_m;
        localB->Merge_j = asbCubeSatACS_P.Constant_Value_m[0] * localB->fcn5 -
          localB->Sum * asbCubeSatACS_P.Constant_Value_m[1];

        /* Sqrt: '<S23>/|n|' incorporates:
         *  DotProduct: '<S23>/Dot Product2'
         */
        localB->fcn2 = sqrt((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
                             rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
                             localB->Product2_o4u * localB->Product2_o4u) +
                            localB->Merge_j * localB->Merge_j);

        /* Switch: '<S23>/n_j < 0' incorporates:
         *  Constant: '<S23>/Constant1'
         *  Sum: '<S23>/Sum'
         *  Trigonometry: '<S23>/RAAN = acos(n_i // |n|)'
         */
        if (localB->Product2_o4u >= asbCubeSatACS_P.n_j0_Threshold) {
          /* Product: '<S23>/divide' */
          localB->Product1_g = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
            / localB->fcn2;

          /* MinMax: '<S30>/Min' incorporates:
           *  Constant: '<S30>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_d)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_d))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_d;
          }

          /* MinMax: '<S30>/Max' incorporates:
           *  Constant: '<S30>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_c >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_c;
          }

          /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->Product2_ev = acos(localB->Product1_g);
        } else {
          /* Product: '<S23>/divide' */
          localB->Product1_g = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
            / localB->fcn2;

          /* MinMax: '<S30>/Min' incorporates:
           *  Constant: '<S30>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_d)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_d))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_d;
          }

          /* MinMax: '<S30>/Max' incorporates:
           *  Constant: '<S30>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_c >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_c;
          }

          /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->Product2_ev = asbCubeSatACS_P.Constant1_Value - acos
            (localB->Product1_g);
        }

        /* Product: '<S23>/divide1' incorporates:
         *  DotProduct: '<S23>/Dot Product3'
         *  Sqrt: '<S23>/|h|'
         */
        localB->Sum_e = localB->Sum_m / sqrt((localB->Sum * localB->Sum +
          localB->fcn5 * localB->fcn5) + localB->Sum_m * localB->Sum_m);

        /* Sqrt: '<S23>/|r|' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  DotProduct: '<S23>/Dot Product'
         */
        localB->Product2_el = sqrt((rtu_SensorsOut_X_eci[0] *
          rtu_SensorsOut_X_eci[0] + rtu_SensorsOut_X_eci[1] *
          rtu_SensorsOut_X_eci[1]) + rtu_SensorsOut_X_eci[2] *
          rtu_SensorsOut_X_eci[2]);

        /* Sum: '<S35>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S42>/i x j'
         *  Product: '<S42>/k x i'
         *  Product: '<S43>/j x i'
         */
        localB->Product1_g = localB->Sum * rtu_SensorsOut_V_eci[2];
        localB->Product2_e = rtu_SensorsOut_V_eci[0] * localB->fcn5;
        localB->jxi_i = localB->Sum * rtu_SensorsOut_V_eci[1];

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S23>/Constant2'
         *  Product: '<S23>/divide2'
         *  Product: '<S23>/divide3'
         *  Product: '<S42>/j x k'
         *  Product: '<S43>/k x j'
         *  Sum: '<S35>/Sum'
         */
        localB->Product3_e = (rtu_SensorsOut_V_eci[1] * localB->Sum_m -
                              localB->fcn5 * rtu_SensorsOut_V_eci[2]) /
          asbCubeSatACS_P.Calculateq_icrf2lvlh_mu - rtu_SensorsOut_X_eci[0] /
          localB->Product2_el;

        /* DotProduct: '<S23>/Dot Product4' */
        rtb_Product2_el_tmp = localB->Product3_e * localB->Product3_e;
        localB->Sum = localB->Product3_e;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S23>/Constant2'
         *  Product: '<S23>/divide2'
         *  Product: '<S23>/divide3'
         *  Product: '<S43>/i x k'
         *  Sum: '<S35>/Sum'
         */
        localB->Product3_e = (localB->Product1_g - rtu_SensorsOut_V_eci[0] *
                              localB->Sum_m) /
          asbCubeSatACS_P.Calculateq_icrf2lvlh_mu - rtu_SensorsOut_X_eci[1] /
          localB->Product2_el;

        /* DotProduct: '<S23>/Dot Product4' */
        rtb_Product2_el_tmp += localB->Product3_e * localB->Product3_e;
        localB->fcn5 = localB->Product3_e;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S23>/Constant2'
         *  Product: '<S23>/divide2'
         *  Product: '<S23>/divide3'
         *  Sum: '<S35>/Sum'
         */
        localB->Product3_e = (localB->Product2_e - localB->jxi_i) /
          asbCubeSatACS_P.Calculateq_icrf2lvlh_mu - rtu_SensorsOut_X_eci[2] /
          localB->Product2_el;

        /* Sqrt: '<S23>/|e|' incorporates:
         *  DotProduct: '<S23>/Dot Product4'
         */
        localB->Sum_m = sqrt(localB->Product3_e * localB->Product3_e +
                             rtb_Product2_el_tmp);

        /* Switch: '<S23>/e_k < 0' incorporates:
         *  Constant: '<S23>/Constant3'
         *  Sum: '<S23>/Sum1'
         *  Trigonometry: '<S23>/argP = acos(n.e//|n||e|)'
         */
        if (localB->Product3_e >= asbCubeSatACS_P.e_k0_Threshold) {
          /* Product: '<S23>/divide4' incorporates:
           *  DotProduct: '<S23>/Dot Product1'
           *  Product: '<S23>/Product'
           */
          localB->Product1_g =
            ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum +
              localB->Product2_o4u * localB->fcn5) + localB->Merge_j *
             localB->Product3_e) / (localB->fcn2 * localB->Sum_m);

          /* MinMax: '<S29>/Min' incorporates:
           *  Constant: '<S29>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_fu)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_fu))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_fu;
          }

          /* MinMax: '<S29>/Max' incorporates:
           *  Constant: '<S29>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_m >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_m;
          }

          /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->jxi_i = acos(localB->Product1_g);
        } else {
          /* Product: '<S23>/divide4' incorporates:
           *  DotProduct: '<S23>/Dot Product1'
           *  Product: '<S23>/Product'
           */
          localB->Product1_g =
            ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum +
              localB->Product2_o4u * localB->fcn5) + localB->Merge_j *
             localB->Product3_e) / (localB->fcn2 * localB->Sum_m);

          /* MinMax: '<S29>/Min' incorporates:
           *  Constant: '<S29>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_fu)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_fu))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_fu;
          }

          /* MinMax: '<S29>/Max' incorporates:
           *  Constant: '<S29>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_m >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_m;
          }

          /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->jxi_i = asbCubeSatACS_P.Constant3_Value - acos
            (localB->Product1_g);
        }

        /* Switch: '<S23>/r.v < 0' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S23>/Constant4'
         *  DotProduct: '<S23>/Dot Product6'
         *  Sum: '<S23>/Sum2'
         *  Trigonometry: '<S23>/nu = acos(e.r//|e||r|)'
         */
        if ((rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[0] +
             rtu_SensorsOut_X_eci[1] * rtu_SensorsOut_V_eci[1]) +
            rtu_SensorsOut_X_eci[2] * rtu_SensorsOut_V_eci[2] >=
            asbCubeSatACS_P.rv0_Threshold) {
          /* Product: '<S23>/divide5' incorporates:
           *  DotProduct: '<S23>/Dot Product5'
           *  Product: '<S23>/Product1'
           */
          localB->Product1_g = ((localB->Sum * rtu_SensorsOut_X_eci[0] +
            localB->fcn5 * rtu_SensorsOut_X_eci[1]) + localB->Product3_e *
                                rtu_SensorsOut_X_eci[2]) / (localB->Sum_m *
            localB->Product2_el);

          /* MinMax: '<S28>/Min' incorporates:
           *  Constant: '<S28>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_j)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_j))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_j;
          }

          /* MinMax: '<S28>/Max' incorporates:
           *  Constant: '<S28>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_na >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_na;
          }

          /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->fcn2 = acos(localB->Product1_g);
        } else {
          /* Product: '<S23>/divide5' incorporates:
           *  DotProduct: '<S23>/Dot Product5'
           *  Product: '<S23>/Product1'
           */
          localB->Product1_g = ((localB->Sum * rtu_SensorsOut_X_eci[0] +
            localB->fcn5 * rtu_SensorsOut_X_eci[1]) + localB->Product3_e *
                                rtu_SensorsOut_X_eci[2]) / (localB->Sum_m *
            localB->Product2_el);

          /* MinMax: '<S28>/Min' incorporates:
           *  Constant: '<S28>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_j)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_j))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_j;
          }

          /* MinMax: '<S28>/Max' incorporates:
           *  Constant: '<S28>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_na >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_na;
          }

          /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->fcn2 = asbCubeSatACS_P.Constant4_Value - acos
            (localB->Product1_g);
        }

        /* Gain: '<S33>/1//2' */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          asbCubeSatACS_P.u2_Gain * localB->Product2_ev;

        /* MinMax: '<S31>/Min' incorporates:
         *  Constant: '<S31>/Constant'
         */
        if ((!(localB->Sum_e <= asbCubeSatACS_P.Constant_Value_l)) && (!rtIsNaN
             (asbCubeSatACS_P.Constant_Value_l))) {
          localB->Sum_e = asbCubeSatACS_P.Constant_Value_l;
        }

        /* MinMax: '<S31>/Max' incorporates:
         *  Constant: '<S31>/Constant1'
         */
        if ((asbCubeSatACS_P.Constant1_Value_e >= localB->Sum_e) || rtIsNaN
            (localB->Sum_e)) {
          localB->Sum_e = asbCubeSatACS_P.Constant1_Value_e;
        }

        /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
        if (localB->Sum_e > 1.0) {
          localB->Sum_e = 1.0;
        } else if (localB->Sum_e < -1.0) {
          localB->Sum_e = -1.0;
        }

        /* Gain: '<S33>/1//2' incorporates:
         *  Sum: '<S23>/Sum3'
         *  Trigonometry: '<S23>/i = acos(h_k // |h|)'
         */
        localB->Product2_o4u = asbCubeSatACS_P.u2_Gain * acos(localB->Sum_e);
        localB->Merge_j = (localB->jxi_i + localB->fcn2) *
          asbCubeSatACS_P.u2_Gain;

        /* Trigonometry: '<S33>/sincos' */
        localB->Sum = cos(rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);
        localB->Product1_g = sin
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);
        localB->fcn5 = cos(localB->Product2_o4u);
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = sin
          (localB->Product2_o4u);
        localB->Sum_m = cos(localB->Merge_j);
        localB->Product2_e = sin(localB->Merge_j);

        /* Fcn: '<S33>/q2' incorporates:
         *  Fcn: '<S33>/q1'
         */
        localB->Product3_e = localB->Sum *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *= localB->Product1_g;
        localB->Product2_el = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Sum_m - localB->Product3_e * localB->Product2_e;

        /* Fcn: '<S33>/q0' incorporates:
         *  Fcn: '<S33>/q3'
         */
        localB->Merge_j = localB->Product1_g * localB->fcn5;
        localB->Product1_g = localB->Sum * localB->fcn5;
        localB->jxi_i = localB->Product1_g * localB->Sum_m - localB->Merge_j *
          localB->Product2_e;

        /* Fcn: '<S33>/q1' */
        localB->fcn2 = localB->Product3_e * localB->Sum_m +
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Product2_e;

        /* Fcn: '<S33>/q3' */
        localB->Product2_ev = localB->Merge_j * localB->Sum_m +
          localB->Product1_g * localB->Product2_e;

        /* Sqrt: '<S36>/sqrt' incorporates:
         *  Product: '<S37>/Product'
         *  Product: '<S37>/Product1'
         *  Product: '<S37>/Product2'
         *  Product: '<S37>/Product3'
         *  Sum: '<S37>/Sum'
         */
        localB->Sum_e = sqrt(((localB->jxi_i * localB->jxi_i + localB->fcn2 *
          localB->fcn2) + localB->Product2_el * localB->Product2_el) +
                             localB->Product2_ev * localB->Product2_ev);

        /* Product: '<S27>/Product2' */
        localB->Product2_el /= localB->Sum_e;

        /* Product: '<S27>/Product3' */
        localB->Product2_ev /= localB->Sum_e;

        /* Product: '<S27>/Product' */
        localB->jxi_i /= localB->Sum_e;

        /* Product: '<S27>/Product1' */
        localB->fcn2 /= localB->Sum_e;

        /* Sum: '<S46>/Sum' incorporates:
         *  Product: '<S46>/Product'
         *  Product: '<S46>/Product1'
         *  Product: '<S46>/Product2'
         *  Product: '<S46>/Product3'
         */
        localB->Product1_g = ((rtb_Product1_pv * localB->Product2_el -
          rtb_Sum_dw * localB->Product2_ev) + rtb_Product3_ar * localB->jxi_i) +
          rtb_Product3_c_tmp * localB->fcn2;

        /* Sum: '<S44>/Sum' incorporates:
         *  Product: '<S44>/Product'
         *  Product: '<S44>/Product1'
         *  Product: '<S44>/Product2'
         *  Product: '<S44>/Product3'
         */
        localB->Sum_m = ((rtb_Product1_pv * localB->jxi_i - rtb_Sum_dw *
                          localB->fcn2) - rtb_Product3_ar * localB->Product2_el)
          - rtb_Product3_c_tmp * localB->Product2_ev;

        /* Sum: '<S45>/Sum' incorporates:
         *  Product: '<S45>/Product'
         *  Product: '<S45>/Product1'
         *  Product: '<S45>/Product2'
         *  Product: '<S45>/Product3'
         */
        localB->Product3_e = ((rtb_Product1_pv * localB->fcn2 + rtb_Sum_dw *
          localB->jxi_i) + rtb_Product3_ar * localB->Product2_ev) -
          rtb_Product3_c_tmp * localB->Product2_el;

        /* Sum: '<S47>/Sum' incorporates:
         *  Product: '<S47>/Product'
         *  Product: '<S47>/Product1'
         *  Product: '<S47>/Product2'
         *  Product: '<S47>/Product3'
         */
        localB->Merge_j = ((rtb_Product1_pv * localB->Product2_ev + rtb_Sum_dw *
                            localB->Product2_el) - rtb_Product3_ar *
                           localB->fcn2) + rtb_Product3_c_tmp * localB->jxi_i;

        /* Sqrt: '<S126>/sqrt' incorporates:
         *  Product: '<S127>/Product'
         *  Product: '<S127>/Product1'
         *  Product: '<S127>/Product2'
         *  Product: '<S127>/Product3'
         *  Sum: '<S127>/Sum'
         *  UnaryMinus: '<S24>/Unary Minus'
         *  UnaryMinus: '<S24>/Unary Minus1'
         *  UnaryMinus: '<S24>/Unary Minus2'
         */
        localB->jxi_i = sqrt(((localB->Sum_m * localB->Sum_m +
          -localB->Product3_e * -localB->Product3_e) + -localB->Product1_g *
                              -localB->Product1_g) + -localB->Merge_j *
                             -localB->Merge_j);

        /* Product: '<S122>/Product2' incorporates:
         *  UnaryMinus: '<S24>/Unary Minus1'
         */
        localB->Sum_e = -localB->Product1_g / localB->jxi_i;

        /* Product: '<S122>/Product3' incorporates:
         *  UnaryMinus: '<S24>/Unary Minus2'
         */
        localB->Product2_el = -localB->Merge_j / localB->jxi_i;

        /* Product: '<S122>/Product1' incorporates:
         *  UnaryMinus: '<S24>/Unary Minus'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = -localB->Product3_e /
          localB->jxi_i;

        /* Product: '<S122>/Product' */
        localB->Sum_m /= localB->jxi_i;

        /* Product: '<S123>/Product7' incorporates:
         *  Product: '<S124>/Product7'
         */
        localB->Product2_e = localB->Product2_el * localB->Product2_el;

        /* Product: '<S123>/Product1' incorporates:
         *  Product: '<S124>/Product1'
         */
        localB->Product2_o4u = localB->Sum_m * localB->Product2_el;

        /* Product: '<S123>/Product6' incorporates:
         *  Product: '<S125>/Product7'
         */
        localB->Product3_e = localB->Sum_e * localB->Sum_e;

        /* Sum: '<S123>/Sum' incorporates:
         *  Constant: '<S123>/Constant'
         *  Constant: '<S7>/secondaryConstraint'
         *  Gain: '<S123>/Gain'
         *  Gain: '<S123>/Gain1'
         *  Gain: '<S123>/Gain2'
         *  Product: '<S123>/Product'
         *  Product: '<S123>/Product1'
         *  Product: '<S123>/Product2'
         *  Product: '<S123>/Product3'
         *  Product: '<S123>/Product4'
         *  Product: '<S123>/Product5'
         *  Product: '<S123>/Product6'
         *  Product: '<S123>/Product7'
         *  Product: '<S123>/Product8'
         *  Sum: '<S123>/Sum1'
         *  Sum: '<S123>/Sum2'
         *  Sum: '<S123>/Sum3'
         */
        localB->fcn2 = (((asbCubeSatACS_P.Constant_Value_fc - localB->Product3_e)
                         - localB->Product2_e) * asbCubeSatACS_P.Gain2_Gain_i *
                        asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint
                        [0] + (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
          * localB->Sum_e + localB->Product2_o4u) * asbCubeSatACS_P.Gain_Gain_i *
                        asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint
                        [1]) +
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
           localB->Product2_el - localB->Sum_m * localB->Sum_e) *
          asbCubeSatACS_P.Gain1_Gain_k *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[2];

        /* Product: '<S124>/Product3' incorporates:
         *  Product: '<S125>/Product3'
         */
        localB->Merge_j = localB->Sum_e * localB->Product2_el;

        /* Product: '<S124>/Product6' incorporates:
         *  Product: '<S125>/Product6'
         */
        localB->Product1_g = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Sum: '<S124>/Sum' incorporates:
         *  Constant: '<S124>/Constant'
         *  Constant: '<S7>/secondaryConstraint'
         *  Gain: '<S124>/Gain'
         *  Gain: '<S124>/Gain1'
         *  Gain: '<S124>/Gain2'
         *  Product: '<S124>/Product'
         *  Product: '<S124>/Product2'
         *  Product: '<S124>/Product3'
         *  Product: '<S124>/Product4'
         *  Product: '<S124>/Product5'
         *  Product: '<S124>/Product6'
         *  Product: '<S124>/Product8'
         *  Sum: '<S124>/Sum1'
         *  Sum: '<S124>/Sum2'
         *  Sum: '<S124>/Sum3'
         */
        localB->jxi_i = (((asbCubeSatACS_P.Constant_Value_je -
                           localB->Product1_g) - localB->Product2_e) *
                         asbCubeSatACS_P.Gain2_Gain_jw *
                         asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint
                         [1] +
                         (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
                          localB->Sum_e - localB->Product2_o4u) *
                         asbCubeSatACS_P.Gain_Gain_c *
                         asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint
                         [0]) + (localB->Sum_m *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 + localB->Merge_j) *
          asbCubeSatACS_P.Gain1_Gain_c *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[2];

        /* Sum: '<S125>/Sum' incorporates:
         *  Constant: '<S125>/Constant'
         *  Constant: '<S7>/secondaryConstraint'
         *  Gain: '<S125>/Gain'
         *  Gain: '<S125>/Gain1'
         *  Gain: '<S125>/Gain2'
         *  Product: '<S125>/Product'
         *  Product: '<S125>/Product1'
         *  Product: '<S125>/Product2'
         *  Product: '<S125>/Product4'
         *  Product: '<S125>/Product5'
         *  Product: '<S125>/Product8'
         *  Sum: '<S125>/Sum1'
         *  Sum: '<S125>/Sum2'
         *  Sum: '<S125>/Sum3'
         */
        localB->Product2_ev =
          ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
            localB->Product2_el + localB->Sum_m * localB->Sum_e) *
           asbCubeSatACS_P.Gain_Gain_bd *
           asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[0] +
           (localB->Merge_j - localB->Sum_m *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) *
           asbCubeSatACS_P.Gain1_Gain_c4 *
           asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[1])
          + ((asbCubeSatACS_P.Constant_Value_k - localB->Product1_g) -
             localB->Product3_e) * asbCubeSatACS_P.Gain2_Gain_m *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[2];

        /* DotProduct: '<S51>/Dot Product1' incorporates:
         *  DotProduct: '<S56>/Dot Product2'
         *  SignalConversion generated from: '<S51>/Dot Product1'
         */
        localB->Product3_e = (localB->Product1_d * localB->Product1_d +
                              localB->Product3_cp * localB->Product3_cp) +
          localB->fcn4 * localB->fcn4;

        /* Product: '<S51>/Divide' incorporates:
         *  DotProduct: '<S51>/Dot Product1'
         *  DotProduct: '<S51>/Dot Product2'
         *  DotProduct: '<S51>/Dot Product3'
         *  Product: '<S51>/Divide1'
         *  SignalConversion generated from: '<S51>/Dot Product1'
         *  SignalConversion generated from: '<S51>/Dot Product2'
         *  Sqrt: '<S51>/Sqrt3'
         */
        localB->Product2_el = ((localB->Product1_d * localB->fcn2 +
          localB->Product3_cp * localB->jxi_i) + localB->fcn4 *
          localB->Product2_ev) / sqrt(((localB->fcn2 * localB->fcn2 +
          localB->jxi_i * localB->jxi_i) + localB->Product2_ev *
          localB->Product2_ev) * localB->Product3_e);

        /* Abs: '<S51>/Abs' incorporates:
         *  Bias: '<S51>/Bias'
         */
        localB->Sum_e = fabs(localB->Product2_el + asbCubeSatACS_P.Bias_Bias_o);

        /* Abs: '<S51>/Abs1' incorporates:
         *  Bias: '<S51>/Bias1'
         */
        localB->Product2_el = fabs(localB->Product2_el +
          asbCubeSatACS_P.Bias1_Bias_k);

        /* If: '<S51>/If' */
        if (localB->Sum_e < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
           *  ActionPort: '<S63>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem_i);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
        } else if (localB->Product2_el < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S64>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem1_c);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S65>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem2_n);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S53>/Compare' incorporates:
         *  Constant: '<S53>/Constant'
         */
        rtb_Compare_h = (localB->Product2_el != asbCubeSatACS_P.Constant_Value_b);

        /* Sqrt: '<S56>/Sqrt3' incorporates:
         *  Product: '<S56>/Divide1'
         *  Sqrt: '<S77>/Sqrt3'
         */
        localB->Product3_e = sqrt(localB->Product1_lc * localB->Product3_e);

        /* DotProduct: '<S56>/Dot Product3' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  DotProduct: '<S77>/Dot Product3'
         *  SignalConversion generated from: '<S51>/Dot Product1'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          (asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
           localB->Product1_d +
           asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
           localB->Product3_cp) +
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
          localB->fcn4;

        /* Sum: '<S56>/Add2' incorporates:
         *  DotProduct: '<S56>/Dot Product3'
         *  Sqrt: '<S56>/Sqrt3'
         */
        localB->Product2_el = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
          + localB->Product3_e;

        /* Product: '<S77>/Divide' */
        localB->Sum_e = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 /
          localB->Product3_e;

        /* Abs: '<S77>/Abs' incorporates:
         *  Bias: '<S77>/Bias'
         */
        localB->Sum_m = fabs(localB->Sum_e + asbCubeSatACS_P.Bias_Bias_a);

        /* Abs: '<S77>/Abs1' incorporates:
         *  Bias: '<S77>/Bias1'
         */
        localB->Sum_e = fabs(localB->Sum_e + asbCubeSatACS_P.Bias1_Bias_j);

        /* If: '<S77>/If' */
        if (localB->Sum_m < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
           *  ActionPort: '<S83>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Sum_e,
            &asbCubeSatACS_P.IfActionSubsystem_n);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
        } else if (localB->Sum_e < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S84>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Sum_e,
            &asbCubeSatACS_P.IfActionSubsystem1_g);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S85>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Sum_e,
            &asbCubeSatACS_P.IfActionSubsystem2_i);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem2' */
        }

        /* Switch: '<S56>/is 180deg Rot' incorporates:
         *  Constant: '<S78>/Constant'
         *  Constant: '<S7>/primaryAlignment'
         *  Product: '<S81>/i x j'
         *  Product: '<S81>/j x k'
         *  Product: '<S81>/k x i'
         *  Product: '<S82>/i x k'
         *  Product: '<S82>/j x i'
         *  Product: '<S82>/k x j'
         *  Product: '<S87>/i x j'
         *  Product: '<S87>/j x k'
         *  Product: '<S87>/k x i'
         *  Product: '<S88>/i x k'
         *  Product: '<S88>/j x i'
         *  Product: '<S88>/k x j'
         *  RelationalOperator: '<S78>/Compare'
         *  RelationalOperator: '<S79>/x>z'
         *  Sum: '<S76>/Sum'
         *  Sum: '<S86>/Sum'
         *  Switch: '<S79>/Switch3'
         */
        if (localB->Sum_e != asbCubeSatACS_P.CompareToConstant_const) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
            localB->fcn4 -
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
            localB->Product3_cp;
          localB->Product2_o4u =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
            localB->Product1_d -
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            localB->fcn4;
          localB->Merge_j =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            localB->Product3_cp -
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
            localB->Product1_d;
        } else {
          if (asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] >
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2])
          {
            /* Switch: '<S79>/Switch3' incorporates:
             *  Constant: '<S79>/Constant'
             *  Constant: '<S7>/primaryAlignment'
             *  Gain: '<S79>/Gain'
             */
            localB->Product3_e = asbCubeSatACS_P.Gain_Gain *
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1];
            localB->Product1_g =
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0];
            localB->Product2_e = asbCubeSatACS_P.Constant_Value;
          } else {
            /* Switch: '<S79>/Switch3' incorporates:
             *  Constant: '<S79>/Constant1'
             *  Constant: '<S7>/primaryAlignment'
             *  Gain: '<S79>/Gain2'
             */
            localB->Product3_e = asbCubeSatACS_P.Constant1_Value_i;
            localB->Product1_g = asbCubeSatACS_P.Gain2_Gain *
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];
            localB->Product2_e =
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1];
          }

          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
            localB->Product2_e - localB->Product1_g *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];
          localB->Product2_o4u = localB->Product3_e *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] -
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            localB->Product2_e;
          localB->Merge_j =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            localB->Product1_g - localB->Product3_e *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1];
        }

        /* Sqrt: '<S89>/sqrt' incorporates:
         *  Product: '<S90>/Product'
         *  Product: '<S90>/Product1'
         *  Product: '<S90>/Product2'
         *  Product: '<S90>/Product3'
         *  Sum: '<S90>/Sum'
         */
        localB->Sum_e = sqrt(((localB->Product2_el * localB->Product2_el +
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) +
                              localB->Product2_o4u * localB->Product2_o4u) +
                             localB->Merge_j * localB->Merge_j);

        /* Product: '<S80>/Product' */
        localB->Product1_lc = localB->Product2_el / localB->Sum_e;

        /* Product: '<S80>/Product2' */
        rtb_Sum_dw = localB->Product2_o4u / localB->Sum_e;

        /* Product: '<S80>/Product1' */
        rtb_Product1_pv = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 /
          localB->Sum_e;

        /* Product: '<S80>/Product3' */
        rtb_Product3_ar = localB->Merge_j / localB->Sum_e;

        /* Sum: '<S106>/Sum' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  Constant: '<S7>/secondaryAlignment'
         *  Product: '<S108>/i x j'
         *  Product: '<S108>/j x k'
         *  Product: '<S108>/k x i'
         *  Product: '<S109>/i x k'
         *  Product: '<S109>/j x i'
         *  Product: '<S109>/k x j'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[1] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];
        localB->Product2_o4u =
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[2];
        localB->Merge_j =
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[1] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1];

        /* Sum: '<S107>/Sum' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  Product: '<S110>/i x j'
         *  Product: '<S110>/j x k'
         *  Product: '<S110>/k x i'
         *  Product: '<S111>/i x k'
         *  Product: '<S111>/j x i'
         *  Product: '<S111>/k x j'
         */
        localB->Product3_e = localB->Product2_o4u *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
          localB->Merge_j;
        localB->Product1_g =
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
          localB->Merge_j - rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];
        localB->Product2_e = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
          localB->Product2_o4u;

        /* Sum: '<S112>/Sum' incorporates:
         *  Product: '<S114>/i x j'
         *  Product: '<S114>/j x k'
         *  Product: '<S114>/k x i'
         *  Product: '<S115>/i x k'
         *  Product: '<S115>/j x i'
         *  Product: '<S115>/k x j'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = localB->Product3_cp *
          localB->Product2_ev - localB->fcn4 * localB->jxi_i;
        localB->Product2_o4u = localB->fcn4 * localB->fcn2 - localB->Product1_d *
          localB->Product2_ev;
        localB->Merge_j = localB->Product1_d * localB->jxi_i -
          localB->Product3_cp * localB->fcn2;

        /* Sum: '<S113>/Sum' incorporates:
         *  Product: '<S116>/i x j'
         *  Product: '<S116>/j x k'
         *  Product: '<S116>/k x i'
         *  Product: '<S117>/i x k'
         *  Product: '<S117>/j x i'
         *  Product: '<S117>/k x j'
         */
        localB->Product2_el = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Product3_cp;
        localB->fcn2 = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->fcn4;
        localB->Sum = localB->Product2_o4u * localB->Product1_d;
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = localB->Product2_o4u
          * localB->fcn4 - localB->Merge_j * localB->Product3_cp;
        localB->Product2_o4u = localB->Merge_j * localB->Product1_d -
          localB->fcn2;
        localB->Merge_j = localB->Product2_el - localB->Sum;

        /* Sqrt: '<S74>/sqrt' incorporates:
         *  Product: '<S75>/Product'
         *  Product: '<S75>/Product1'
         *  Product: '<S75>/Product2'
         *  Product: '<S75>/Product3'
         *  Sum: '<S75>/Sum'
         */
        localB->Product2_el = sqrt(((localB->Product1_lc * localB->Product1_lc +
          rtb_Product1_pv * rtb_Product1_pv) + rtb_Sum_dw * rtb_Sum_dw) +
          rtb_Product3_ar * rtb_Product3_ar);

        /* Product: '<S70>/Product2' */
        localB->jxi_i = rtb_Sum_dw / localB->Product2_el;

        /* Product: '<S70>/Product3' */
        localB->fcn2 = rtb_Product3_ar / localB->Product2_el;

        /* Product: '<S70>/Product1' */
        localB->Sum_e = rtb_Product1_pv / localB->Product2_el;

        /* Product: '<S70>/Product' */
        localB->Product2_el = localB->Product1_lc / localB->Product2_el;

        /* Product: '<S71>/Product7' incorporates:
         *  Product: '<S72>/Product7'
         */
        localB->Sum = localB->fcn2 * localB->fcn2;

        /* Product: '<S71>/Product' incorporates:
         *  Product: '<S72>/Product'
         */
        localB->Product3_cp = localB->Sum_e * localB->jxi_i;

        /* Product: '<S71>/Product3' incorporates:
         *  Product: '<S73>/Product'
         */
        localB->fcn5 = localB->Sum_e * localB->fcn2;

        /* Product: '<S71>/Product6' incorporates:
         *  Product: '<S73>/Product7'
         */
        localB->Sum_m = localB->jxi_i * localB->jxi_i;

        /* Sum: '<S71>/Sum' incorporates:
         *  Constant: '<S71>/Constant'
         *  Gain: '<S71>/Gain'
         *  Gain: '<S71>/Gain1'
         *  Gain: '<S71>/Gain2'
         *  Product: '<S71>/Product'
         *  Product: '<S71>/Product1'
         *  Product: '<S71>/Product2'
         *  Product: '<S71>/Product3'
         *  Product: '<S71>/Product4'
         *  Product: '<S71>/Product5'
         *  Product: '<S71>/Product6'
         *  Product: '<S71>/Product7'
         *  Product: '<S71>/Product8'
         *  Sum: '<S71>/Sum1'
         *  Sum: '<S71>/Sum2'
         *  Sum: '<S71>/Sum3'
         */
        localB->Product1_d = (((asbCubeSatACS_P.Constant_Value_h - localB->Sum_m)
          - localB->Sum) * asbCubeSatACS_P.Gain2_Gain_a *
                              rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
                              + (localB->Product2_el * localB->fcn2 +
          localB->Product3_cp) * asbCubeSatACS_P.Gain_Gain_p *
                              localB->Product2_o4u) + (localB->fcn5 -
          localB->Product2_el * localB->jxi_i) * asbCubeSatACS_P.Gain1_Gain_m *
          localB->Merge_j;

        /* Product: '<S72>/Product3' incorporates:
         *  Product: '<S73>/Product3'
         */
        localB->fcn4 = localB->jxi_i * localB->fcn2;

        /* Product: '<S72>/Product2' incorporates:
         *  Product: '<S73>/Product2'
         */
        rtb_Product3_c_tmp = localB->Product2_el * localB->Sum_e;

        /* Product: '<S72>/Product6' incorporates:
         *  Product: '<S73>/Product6'
         */
        localB->Sum_e *= localB->Sum_e;

        /* Sum: '<S72>/Sum' incorporates:
         *  Constant: '<S72>/Constant'
         *  Gain: '<S72>/Gain'
         *  Gain: '<S72>/Gain1'
         *  Gain: '<S72>/Gain2'
         *  Product: '<S72>/Product1'
         *  Product: '<S72>/Product2'
         *  Product: '<S72>/Product3'
         *  Product: '<S72>/Product4'
         *  Product: '<S72>/Product5'
         *  Product: '<S72>/Product6'
         *  Product: '<S72>/Product8'
         *  Sum: '<S72>/Sum1'
         *  Sum: '<S72>/Sum2'
         *  Sum: '<S72>/Sum3'
         */
        localB->Product3_cp = (((asbCubeSatACS_P.Constant_Value_lw -
          localB->Sum_e) - localB->Sum) * asbCubeSatACS_P.Gain2_Gain_k *
          localB->Product2_o4u + (localB->Product3_cp - localB->Product2_el *
          localB->fcn2) * asbCubeSatACS_P.Gain_Gain_ik *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) +
          (rtb_Product3_c_tmp + localB->fcn4) * asbCubeSatACS_P.Gain1_Gain_ch *
          localB->Merge_j;

        /* Sum: '<S73>/Sum' incorporates:
         *  Constant: '<S73>/Constant'
         *  Gain: '<S73>/Gain'
         *  Gain: '<S73>/Gain1'
         *  Gain: '<S73>/Gain2'
         *  Product: '<S73>/Product1'
         *  Product: '<S73>/Product4'
         *  Product: '<S73>/Product5'
         *  Product: '<S73>/Product8'
         *  Sum: '<S73>/Sum1'
         *  Sum: '<S73>/Sum2'
         *  Sum: '<S73>/Sum3'
         */
        localB->Merge_j = ((localB->Product2_el * localB->jxi_i + localB->fcn5) *
                           asbCubeSatACS_P.Gain_Gain_j *
                           rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
                           (localB->fcn4 - rtb_Product3_c_tmp) *
                           asbCubeSatACS_P.Gain1_Gain_o * localB->Product2_o4u)
          + ((asbCubeSatACS_P.Constant_Value_iu - localB->Sum_e) - localB->Sum_m)
          * asbCubeSatACS_P.Gain2_Gain_jz * localB->Merge_j;

        /* DotProduct: '<S92>/Dot Product1' incorporates:
         *  DotProduct: '<S57>/Dot Product1'
         *  DotProduct: '<S92>/Dot Product3'
         *  Switch: '<S12>/Switch'
         */
        localB->Product2_o4u = localB->Product3_e * localB->Product3_e +
          localB->Product1_g * localB->Product1_g;

        /* DotProduct: '<S92>/Dot Product2' incorporates:
         *  DotProduct: '<S57>/Dot Product2'
         *  SignalConversion generated from: '<S92>/Dot Product2'
         *  Switch: '<S12>/Switch'
         */
        rtb_Product2_el_tmp = localB->Product1_d * localB->Product1_d +
          localB->Product3_cp * localB->Product3_cp;

        /* DotProduct: '<S92>/Dot Product3' incorporates:
         *  DotProduct: '<S57>/Dot Product3'
         *  SignalConversion generated from: '<S92>/Dot Product2'
         *  Switch: '<S12>/Switch'
         */
        localB->fcn2 = localB->Product3_e * localB->Product1_d +
          localB->Product1_g * localB->Product3_cp;

        /* Product: '<S92>/Divide' incorporates:
         *  DotProduct: '<S92>/Dot Product1'
         *  DotProduct: '<S92>/Dot Product2'
         *  DotProduct: '<S92>/Dot Product3'
         *  Product: '<S92>/Divide1'
         *  SignalConversion generated from: '<S92>/Dot Product2'
         *  Sqrt: '<S92>/Sqrt3'
         */
        localB->Product2_el = (localB->Product2_e * localB->Merge_j +
          localB->fcn2) / sqrt((localB->Product2_e * localB->Product2_e +
          localB->Product2_o4u) * (localB->Merge_j * localB->Merge_j +
          rtb_Product2_el_tmp));

        /* If: '<S92>/If' incorporates:
         *  Abs: '<S92>/Abs'
         *  Abs: '<S92>/Abs1'
         *  Bias: '<S92>/Bias'
         *  Bias: '<S92>/Bias1'
         */
        if (fabs(localB->Product2_el + asbCubeSatACS_P.Bias_Bias_i) < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
           *  ActionPort: '<S98>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem
            (&rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0,
             &asbCubeSatACS_P.IfActionSubsystem_a);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem' */
        } else if (fabs(localB->Product2_el + asbCubeSatACS_P.Bias1_Bias_o) <
                   1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S99>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem
            (&rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0,
             &asbCubeSatACS_P.IfActionSubsystem1_m);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S100>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem
            (&rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0,
             &asbCubeSatACS_P.IfActionSubsystem2_i2);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem2' */
        }

        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S52>/Constant'
         *  Constant: '<S93>/Constant'
         *  Logic: '<S12>/OR'
         *  Product: '<S66>/Product'
         *  Product: '<S66>/Product1'
         *  Product: '<S66>/Product2'
         *  Product: '<S66>/Product3'
         *  Product: '<S67>/Product'
         *  Product: '<S67>/Product1'
         *  Product: '<S67>/Product2'
         *  Product: '<S67>/Product3'
         *  Product: '<S68>/Product'
         *  Product: '<S68>/Product1'
         *  Product: '<S68>/Product2'
         *  Product: '<S68>/Product3'
         *  Product: '<S69>/Product'
         *  Product: '<S69>/Product1'
         *  Product: '<S69>/Product2'
         *  Product: '<S69>/Product3'
         *  RelationalOperator: '<S52>/Compare'
         *  RelationalOperator: '<S93>/Compare'
         *  RelationalOperator: '<S94>/x>z'
         *  Sum: '<S66>/Sum'
         *  Sum: '<S67>/Sum'
         *  Sum: '<S68>/Sum'
         *  Sum: '<S69>/Sum'
         *  Switch: '<S57>/is 180deg Rot'
         *  Switch: '<S94>/Switch3'
         */
        if ((localB->Product3_e1 != asbCubeSatACS_P.Constant_Value_f) ||
            rtb_Compare_h) {
          localB->cmd_q_b2tgt[0] = localB->Product1_lc;
          localB->cmd_q_b2tgt[1] = rtb_Product1_pv;
          localB->cmd_q_b2tgt[2] = rtb_Sum_dw;
          localB->cmd_q_b2tgt[3] = rtb_Product3_ar;
        } else {
          if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 !=
              asbCubeSatACS_P.CompareToConstant_const_i) {
            /* Switch: '<S57>/is 180deg Rot' incorporates:
             *  Product: '<S96>/i x j'
             *  Product: '<S96>/j x k'
             *  Product: '<S96>/k x i'
             *  Product: '<S97>/i x k'
             *  Product: '<S97>/j x i'
             *  Product: '<S97>/k x j'
             *  Sum: '<S91>/Sum'
             */
            localB->Product3_e1 = localB->Product1_g * localB->Merge_j -
              localB->Product2_e * localB->Product3_cp;
            localB->jxi_i = localB->Product2_e * localB->Product1_d -
              localB->Product3_e * localB->Merge_j;
            localB->Sum = localB->Product3_e * localB->Product3_cp -
              localB->Product1_g * localB->Product1_d;
          } else {
            if (localB->Product3_e > localB->Product2_e) {
              /* Switch: '<S94>/Switch3' incorporates:
               *  Constant: '<S94>/Constant'
               *  Gain: '<S94>/Gain'
               *  Switch: '<S57>/is 180deg Rot'
               */
              localB->Sum = asbCubeSatACS_P.Gain_Gain_l * localB->Product1_g;
              localB->fcn5 = localB->Product3_e;
              localB->Sum_m = asbCubeSatACS_P.Constant_Value_i;
            } else {
              /* Switch: '<S94>/Switch3' incorporates:
               *  Constant: '<S94>/Constant1'
               *  Gain: '<S94>/Gain2'
               *  Switch: '<S57>/is 180deg Rot'
               */
              localB->Sum = asbCubeSatACS_P.Constant1_Value_n;
              localB->fcn5 = asbCubeSatACS_P.Gain2_Gain_j * localB->Product2_e;
              localB->Sum_m = localB->Product1_g;
            }

            /* Switch: '<S57>/is 180deg Rot' incorporates:
             *  Product: '<S102>/i x j'
             *  Product: '<S102>/j x k'
             *  Product: '<S102>/k x i'
             *  Product: '<S103>/i x k'
             *  Product: '<S103>/j x i'
             *  Product: '<S103>/k x j'
             *  Sum: '<S101>/Sum'
             */
            localB->Product3_e1 = localB->Product1_g * localB->Sum_m -
              localB->fcn5 * localB->Product2_e;
            localB->jxi_i = localB->Sum * localB->Product2_e -
              localB->Product3_e * localB->Sum_m;
            localB->Sum = localB->Product3_e * localB->fcn5 - localB->Sum *
              localB->Product1_g;
          }

          /* Sum: '<S57>/Add2' incorporates:
           *  DotProduct: '<S57>/Dot Product1'
           *  DotProduct: '<S57>/Dot Product2'
           *  DotProduct: '<S57>/Dot Product3'
           *  Product: '<S57>/Divide1'
           *  RelationalOperator: '<S94>/x>z'
           *  SignalConversion generated from: '<S92>/Dot Product2'
           *  Sqrt: '<S57>/Sqrt3'
           *  Switch: '<S57>/is 180deg Rot'
           *  Switch: '<S94>/Switch3'
           */
          localB->Merge_j = sqrt((localB->Product2_e * localB->Product2_e +
            localB->Product2_o4u) * (localB->Merge_j * localB->Merge_j +
            rtb_Product2_el_tmp)) + (localB->Product2_e * localB->Merge_j +
            localB->fcn2);

          /* Sqrt: '<S104>/sqrt' incorporates:
           *  Product: '<S105>/Product'
           *  Product: '<S105>/Product1'
           *  Product: '<S105>/Product2'
           *  Product: '<S105>/Product3'
           *  Sum: '<S105>/Sum'
           */
          localB->Product3_e = sqrt(((localB->Merge_j * localB->Merge_j +
            localB->Product3_e1 * localB->Product3_e1) + localB->jxi_i *
            localB->jxi_i) + localB->Sum * localB->Sum);

          /* Product: '<S95>/Product3' */
          localB->Product1_g = localB->Sum / localB->Product3_e;

          /* Product: '<S95>/Product2' */
          localB->Product2_e = localB->jxi_i / localB->Product3_e;

          /* Product: '<S95>/Product1' */
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            localB->Product3_e1 / localB->Product3_e;

          /* Product: '<S95>/Product' */
          localB->Merge_j /= localB->Product3_e;
          localB->cmd_q_b2tgt[0] = ((localB->Product1_lc * localB->Merge_j -
            rtb_Product1_pv * rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0)
            - rtb_Sum_dw * localB->Product2_e) - rtb_Product3_ar *
            localB->Product1_g;
          localB->cmd_q_b2tgt[1] = ((localB->Product1_lc *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 + rtb_Product1_pv *
            localB->Merge_j) + rtb_Sum_dw * localB->Product1_g) -
            rtb_Product3_ar * localB->Product2_e;
          localB->cmd_q_b2tgt[2] = ((localB->Product1_lc * localB->Product2_e -
            rtb_Product1_pv * localB->Product1_g) + rtb_Sum_dw * localB->Merge_j)
            + rtb_Product3_ar *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
          localB->cmd_q_b2tgt[3] = ((localB->Product1_lc * localB->Product1_g +
            rtb_Product1_pv * localB->Product2_e) - rtb_Sum_dw *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) + rtb_Product3_ar
            * localB->Merge_j;
        }

        /* Sqrt: '<S134>/sqrt' incorporates:
         *  Product: '<S135>/Product'
         *  Product: '<S135>/Product1'
         *  Product: '<S135>/Product2'
         *  Product: '<S135>/Product3'
         *  Sum: '<S135>/Sum'
         */
        localB->Product2_el = sqrt(((localB->cmd_q_b2tgt[0] *
          localB->cmd_q_b2tgt[0] + localB->cmd_q_b2tgt[1] * localB->cmd_q_b2tgt
          [1]) + localB->cmd_q_b2tgt[2] * localB->cmd_q_b2tgt[2]) +
          localB->cmd_q_b2tgt[3] * localB->cmd_q_b2tgt[3]);

        /* Product: '<S129>/Product' */
        localB->jxi_i = localB->cmd_q_b2tgt[0] / localB->Product2_el;

        /* Product: '<S129>/Product1' */
        localB->fcn2 = localB->cmd_q_b2tgt[1] / localB->Product2_el;

        /* Product: '<S129>/Product2' */
        localB->Product2_ev = localB->cmd_q_b2tgt[2] / localB->Product2_el;

        /* Product: '<S129>/Product3' */
        localB->Product2_el = localB->cmd_q_b2tgt[3] / localB->Product2_el;

        /* Fcn: '<S9>/fcn3' */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = (localB->fcn2 *
          localB->Product2_el + localB->jxi_i * localB->Product2_ev) * 2.0;

        /* Fcn: '<S9>/fcn2' incorporates:
         *  Fcn: '<S9>/fcn5'
         */
        localB->Merge_j = localB->jxi_i * localB->jxi_i;
        localB->Product3_e = localB->fcn2 * localB->fcn2;
        localB->Product1_g = localB->Product2_ev * localB->Product2_ev;
        localB->Product2_e = localB->Product2_el * localB->Product2_el;

        /* Trigonometry: '<S128>/Trigonometric Function1' incorporates:
         *  Fcn: '<S9>/fcn1'
         *  Fcn: '<S9>/fcn2'
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[0] = rt_atan2d_snf((localB->Product2_ev *
          localB->Product2_el - localB->jxi_i * localB->fcn2) * -2.0,
          ((localB->Merge_j - localB->Product3_e) - localB->Product1_g) +
          localB->Product2_e);

        /* Trigonometry: '<S128>/Trigonometric Function3' incorporates:
         *  Fcn: '<S9>/fcn4'
         *  Fcn: '<S9>/fcn5'
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[2] = rt_atan2d_snf((localB->fcn2 *
          localB->Product2_ev - localB->jxi_i * localB->Product2_el) * -2.0,
          ((localB->Merge_j + localB->Product3_e) - localB->Product1_g) -
          localB->Product2_e);

        /* If: '<S130>/If' incorporates:
         *  Constant: '<S131>/Constant'
         *  Constant: '<S132>/Constant'
         */
        if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 > 1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.Constant_Value_n;
        } else if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 < -1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.Constant_Value_nu;
        }

        /* Trigonometry: '<S128>/trigFcn' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 > 1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = 1.0;
        } else if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 < -1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = -1.0;
        }

        localB->PointingCmd[1] = asin
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);
      }
      break;

     case asbCubeSatACS_IN_Sun:
      if (*rtu_AttitudeMode == 1.0) {
        localDW->is_On = asbCubeSatACS_IN_Transition;
      } else {
        /* DotProduct: '<S156>/Dot Product1' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  DotProduct: '<S162>/Dot Product1'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          (asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
           asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] +
           asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
           asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1]) +
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];

        /* Product: '<S156>/Divide' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  Constant: '<S136>/secondaryAlignment'
         *  DotProduct: '<S156>/Dot Product1'
         *  DotProduct: '<S156>/Dot Product2'
         *  DotProduct: '<S156>/Dot Product3'
         *  Product: '<S156>/Divide1'
         *  Sqrt: '<S156>/Sqrt3'
         */
        localB->Product2_o4u =
          ((asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[0] +
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
            asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[1]) +
           asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
           asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[2]) /
          sqrt(((asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[0]
                 * asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[
                 0] +
                 asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[1]
                 * asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[
                 1]) +
                asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[2]
                * asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment
                [2]) * rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);

        /* Abs: '<S156>/Abs' incorporates:
         *  Bias: '<S156>/Bias'
         */
        localB->jxi_i = fabs(localB->Product2_o4u + asbCubeSatACS_P.Bias_Bias_p);

        /* If: '<S156>/If' incorporates:
         *  Abs: '<S156>/Abs1'
         *  Bias: '<S156>/Bias1'
         */
        if (localB->jxi_i < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
           *  ActionPort: '<S166>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->jxi_i,
            &asbCubeSatACS_P.IfActionSubsystem_h);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem' */
        } else if (fabs(localB->Product2_o4u + asbCubeSatACS_P.Bias1_Bias_e) <
                   1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S167>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->jxi_i,
            &asbCubeSatACS_P.IfActionSubsystem1_h);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S168>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->jxi_i,
            &asbCubeSatACS_P.IfActionSubsystem2_iz);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S158>/Compare' incorporates:
         *  Constant: '<S158>/Constant'
         */
        rtb_Compare_h = (localB->jxi_i != asbCubeSatACS_P.Constant_Value_hs);

        /* Sqrt: '<S154>/sqrt' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S155>/Product'
         *  Product: '<S155>/Product1'
         *  Product: '<S155>/Product2'
         *  Product: '<S155>/Product3'
         *  Sum: '<S155>/Sum'
         *  UnaryMinus: '<S137>/Unary Minus'
         *  UnaryMinus: '<S137>/Unary Minus1'
         *  UnaryMinus: '<S137>/Unary Minus2'
         */
        localB->Product3_cp = sqrt(((rtu_SensorsOut_q_eci2b[0] *
          rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
          -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
          -rtu_SensorsOut_q_eci2b[2]) + -rtu_SensorsOut_q_eci2b[3] *
          -rtu_SensorsOut_q_eci2b[3]);

        /* Product: '<S153>/Product1' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S137>/Unary Minus'
         */
        localB->Product1_g = -rtu_SensorsOut_q_eci2b[1] / localB->Product3_cp;

        /* Product: '<S153>/Product' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         */
        localB->Merge_j = rtu_SensorsOut_q_eci2b[0] / localB->Product3_cp;

        /* Product: '<S153>/Product2' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S137>/Unary Minus1'
         */
        localB->Product2_e = -rtu_SensorsOut_q_eci2b[2] / localB->Product3_cp;

        /* Product: '<S153>/Product3' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S137>/Unary Minus2'
         */
        localB->Product3_e = -rtu_SensorsOut_q_eci2b[3] / localB->Product3_cp;

        /* Sqrt: '<S150>/sqrt' incorporates:
         *  Product: '<S151>/Product'
         *  Product: '<S151>/Product1'
         *  Product: '<S151>/Product2'
         *  Product: '<S151>/Product3'
         *  Sum: '<S151>/Sum'
         *  UnaryMinus: '<S152>/Unary Minus'
         *  UnaryMinus: '<S152>/Unary Minus1'
         *  UnaryMinus: '<S152>/Unary Minus2'
         */
        localB->Product3_cp = sqrt(((localB->Merge_j * localB->Merge_j +
          -localB->Product1_g * -localB->Product1_g) + -localB->Product2_e *
          -localB->Product2_e) + -localB->Product3_e * -localB->Product3_e);

        /* Product: '<S146>/Product1' incorporates:
         *  UnaryMinus: '<S152>/Unary Minus'
         */
        localB->fcn2 = -localB->Product1_g / localB->Product3_cp;

        /* Product: '<S146>/Product2' incorporates:
         *  UnaryMinus: '<S152>/Unary Minus1'
         */
        localB->fcn4 = -localB->Product2_e / localB->Product3_cp;

        /* Product: '<S146>/Product' */
        localB->Product2_el = localB->Merge_j / localB->Product3_cp;

        /* Product: '<S146>/Product3' incorporates:
         *  UnaryMinus: '<S152>/Unary Minus2'
         */
        localB->Product3_cp = -localB->Product3_e / localB->Product3_cp;

        /* Product: '<S147>/Product7' incorporates:
         *  Product: '<S148>/Product7'
         */
        localB->Product3_e1 = localB->Product3_cp * localB->Product3_cp;

        /* Product: '<S147>/Product' incorporates:
         *  Product: '<S148>/Product'
         */
        localB->Product1_d = localB->fcn2 * localB->fcn4;

        /* Product: '<S147>/Product6' incorporates:
         *  Product: '<S149>/Product7'
         */
        localB->Product2_o4u = localB->fcn4 * localB->fcn4;

        /* Sum: '<S147>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S147>/Constant'
         *  Gain: '<S147>/Gain'
         *  Gain: '<S147>/Gain1'
         *  Gain: '<S147>/Gain2'
         *  Product: '<S147>/Product'
         *  Product: '<S147>/Product1'
         *  Product: '<S147>/Product2'
         *  Product: '<S147>/Product3'
         *  Product: '<S147>/Product4'
         *  Product: '<S147>/Product5'
         *  Product: '<S147>/Product6'
         *  Product: '<S147>/Product7'
         *  Product: '<S147>/Product8'
         *  Sum: '<S147>/Sum1'
         *  Sum: '<S147>/Sum2'
         *  Sum: '<S147>/Sum3'
         */
        localB->Sum = (((asbCubeSatACS_P.Constant_Value_iui -
                         localB->Product2_o4u) - localB->Product3_e1) *
                       asbCubeSatACS_P.Gain2_Gain_bq *
                       rtu_Environment_x_sun_eci[0] + (localB->Product2_el *
          localB->Product3_cp + localB->Product1_d) *
                       asbCubeSatACS_P.Gain_Gain_c4 * rtu_Environment_x_sun_eci
                       [1]) + (localB->fcn2 * localB->Product3_cp -
          localB->Product2_el * localB->fcn4) * asbCubeSatACS_P.Gain1_Gain_mx *
          rtu_Environment_x_sun_eci[2];

        /* Product: '<S148>/Product2' incorporates:
         *  Product: '<S149>/Product2'
         */
        localB->fcn5 = localB->Product2_el * localB->fcn2;

        /* Product: '<S148>/Product6' incorporates:
         *  Product: '<S149>/Product6'
         */
        localB->jxi_i = localB->fcn2 * localB->fcn2;

        /* Product: '<S148>/Product3' incorporates:
         *  Product: '<S149>/Product3'
         */
        rtb_Sum_dw = localB->fcn4 * localB->Product3_cp;

        /* Sum: '<S148>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S148>/Constant'
         *  Gain: '<S148>/Gain'
         *  Gain: '<S148>/Gain1'
         *  Gain: '<S148>/Gain2'
         *  Product: '<S148>/Product1'
         *  Product: '<S148>/Product2'
         *  Product: '<S148>/Product3'
         *  Product: '<S148>/Product4'
         *  Product: '<S148>/Product5'
         *  Product: '<S148>/Product6'
         *  Product: '<S148>/Product8'
         *  Sum: '<S148>/Sum1'
         *  Sum: '<S148>/Sum2'
         *  Sum: '<S148>/Sum3'
         */
        localB->Sum_m = (((asbCubeSatACS_P.Constant_Value_ji - localB->jxi_i) -
                          localB->Product3_e1) * asbCubeSatACS_P.Gain2_Gain_g *
                         rtu_Environment_x_sun_eci[1] + (localB->Product1_d -
          localB->Product2_el * localB->Product3_cp) *
                         asbCubeSatACS_P.Gain_Gain_de *
                         rtu_Environment_x_sun_eci[0]) + (localB->fcn5 +
          rtb_Sum_dw) * asbCubeSatACS_P.Gain1_Gain_i *
          rtu_Environment_x_sun_eci[2];

        /* Sum: '<S149>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S149>/Constant'
         *  Gain: '<S149>/Gain'
         *  Gain: '<S149>/Gain1'
         *  Gain: '<S149>/Gain2'
         *  Product: '<S149>/Product'
         *  Product: '<S149>/Product1'
         *  Product: '<S149>/Product4'
         *  Product: '<S149>/Product5'
         *  Product: '<S149>/Product8'
         *  Sum: '<S149>/Sum1'
         *  Sum: '<S149>/Sum2'
         *  Sum: '<S149>/Sum3'
         */
        localB->Sum_e = ((localB->fcn2 * localB->Product3_cp +
                          localB->Product2_el * localB->fcn4) *
                         asbCubeSatACS_P.Gain_Gain_pb *
                         rtu_Environment_x_sun_eci[0] + (rtb_Sum_dw -
          localB->fcn5) * asbCubeSatACS_P.Gain1_Gain_f *
                         rtu_Environment_x_sun_eci[1]) +
          ((asbCubeSatACS_P.Constant_Value_fui - localB->jxi_i) -
           localB->Product2_o4u) * asbCubeSatACS_P.Gain2_Gain_bs *
          rtu_Environment_x_sun_eci[2];

        /* Sqrt: '<S232>/sqrt' incorporates:
         *  Product: '<S233>/Product'
         *  Product: '<S233>/Product1'
         *  Product: '<S233>/Product2'
         *  Product: '<S233>/Product3'
         *  Sum: '<S233>/Sum'
         *  UnaryMinus: '<S152>/Unary Minus'
         *  UnaryMinus: '<S152>/Unary Minus1'
         *  UnaryMinus: '<S152>/Unary Minus2'
         */
        localB->Product3_e1 = sqrt(((localB->Merge_j * localB->Merge_j +
          -localB->Product1_g * -localB->Product1_g) + -localB->Product2_e *
          -localB->Product2_e) + -localB->Product3_e * -localB->Product3_e);

        /* Product: '<S228>/Product2' incorporates:
         *  UnaryMinus: '<S152>/Unary Minus1'
         */
        localB->Product2_o4u = -localB->Product2_e / localB->Product3_e1;

        /* Product: '<S228>/Product3' incorporates:
         *  UnaryMinus: '<S152>/Unary Minus2'
         */
        localB->Product2_el = -localB->Product3_e / localB->Product3_e1;

        /* Product: '<S228>/Product1' incorporates:
         *  UnaryMinus: '<S152>/Unary Minus'
         */
        localB->jxi_i = -localB->Product1_g / localB->Product3_e1;

        /* Product: '<S228>/Product' */
        localB->Merge_j /= localB->Product3_e1;

        /* Product: '<S229>/Product7' incorporates:
         *  Product: '<S230>/Product7'
         */
        localB->Product3_e1 = localB->Product2_el * localB->Product2_el;

        /* Product: '<S229>/Product' incorporates:
         *  Product: '<S230>/Product'
         */
        localB->Product3_cp = localB->jxi_i * localB->Product2_o4u;

        /* Product: '<S229>/Product3' incorporates:
         *  Product: '<S231>/Product'
         */
        localB->fcn2 = localB->jxi_i * localB->Product2_el;

        /* Product: '<S229>/Product6' incorporates:
         *  Product: '<S231>/Product7'
         */
        localB->Product1_d = localB->Product2_o4u * localB->Product2_o4u;

        /* Product: '<S229>/Product2' incorporates:
         *  Product: '<S231>/Product1'
         */
        localB->fcn4 = localB->Merge_j * localB->Product2_o4u;

        /* Sum: '<S229>/Sum' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         *  Constant: '<S229>/Constant'
         *  Gain: '<S229>/Gain'
         *  Gain: '<S229>/Gain1'
         *  Gain: '<S229>/Gain2'
         *  Product: '<S229>/Product'
         *  Product: '<S229>/Product1'
         *  Product: '<S229>/Product2'
         *  Product: '<S229>/Product3'
         *  Product: '<S229>/Product4'
         *  Product: '<S229>/Product5'
         *  Product: '<S229>/Product6'
         *  Product: '<S229>/Product7'
         *  Product: '<S229>/Product8'
         *  Sum: '<S229>/Sum1'
         *  Sum: '<S229>/Sum2'
         *  Sum: '<S229>/Sum3'
         */
        localB->fcn5 = (((asbCubeSatACS_P.Constant_Value_p - localB->Product1_d)
                         - localB->Product3_e1) * asbCubeSatACS_P.Gain2_Gain_p *
                        asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint
                        [0] + (localB->Merge_j * localB->Product2_el +
          localB->Product3_cp) * asbCubeSatACS_P.Gain_Gain_jl *
                        asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint
                        [1]) + (localB->fcn2 - localB->fcn4) *
          asbCubeSatACS_P.Gain1_Gain_ie *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[2];

        /* Product: '<S230>/Product3' incorporates:
         *  Product: '<S231>/Product3'
         */
        localB->Product3_e = localB->Product2_o4u * localB->Product2_el;

        /* Product: '<S230>/Product2' incorporates:
         *  Product: '<S231>/Product2'
         */
        localB->Product1_g = localB->Merge_j * localB->jxi_i;

        /* Product: '<S230>/Product6' incorporates:
         *  Product: '<S231>/Product6'
         */
        localB->Product2_e = localB->jxi_i * localB->jxi_i;

        /* Sum: '<S230>/Sum' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         *  Constant: '<S230>/Constant'
         *  Gain: '<S230>/Gain'
         *  Gain: '<S230>/Gain1'
         *  Gain: '<S230>/Gain2'
         *  Product: '<S230>/Product1'
         *  Product: '<S230>/Product2'
         *  Product: '<S230>/Product3'
         *  Product: '<S230>/Product4'
         *  Product: '<S230>/Product5'
         *  Product: '<S230>/Product6'
         *  Product: '<S230>/Product8'
         *  Sum: '<S230>/Sum1'
         *  Sum: '<S230>/Sum2'
         *  Sum: '<S230>/Sum3'
         */
        localB->Product3_e1 = (((asbCubeSatACS_P.Constant_Value_fe -
          localB->Product2_e) - localB->Product3_e1) *
          asbCubeSatACS_P.Gain2_Gain_d *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[1] +
          (localB->Product3_cp - localB->Merge_j * localB->Product2_el) *
          asbCubeSatACS_P.Gain_Gain_kx *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[0]) +
          (localB->Product1_g + localB->Product3_e) *
          asbCubeSatACS_P.Gain1_Gain_l *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[2];

        /* Sum: '<S231>/Sum' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         *  Constant: '<S231>/Constant'
         *  Gain: '<S231>/Gain'
         *  Gain: '<S231>/Gain1'
         *  Gain: '<S231>/Gain2'
         *  Product: '<S231>/Product4'
         *  Product: '<S231>/Product5'
         *  Product: '<S231>/Product8'
         *  Sum: '<S231>/Sum1'
         *  Sum: '<S231>/Sum2'
         *  Sum: '<S231>/Sum3'
         */
        localB->Product1_lc = ((localB->fcn2 + localB->fcn4) *
          asbCubeSatACS_P.Gain_Gain_f *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[0] +
          (localB->Product3_e - localB->Product1_g) *
          asbCubeSatACS_P.Gain1_Gain_p *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[1]) +
          ((asbCubeSatACS_P.Constant_Value_ow - localB->Product2_e) -
           localB->Product1_d) * asbCubeSatACS_P.Gain2_Gain_c *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[2];

        /* DotProduct: '<S157>/Dot Product1' incorporates:
         *  DotProduct: '<S162>/Dot Product2'
         *  SignalConversion generated from: '<S157>/Dot Product1'
         */
        localB->Merge_j = (localB->Sum * localB->Sum + localB->Sum_m *
                           localB->Sum_m) + localB->Sum_e * localB->Sum_e;

        /* Product: '<S157>/Divide' incorporates:
         *  DotProduct: '<S157>/Dot Product1'
         *  DotProduct: '<S157>/Dot Product2'
         *  DotProduct: '<S157>/Dot Product3'
         *  Product: '<S157>/Divide1'
         *  SignalConversion generated from: '<S157>/Dot Product1'
         *  SignalConversion generated from: '<S157>/Dot Product2'
         *  Sqrt: '<S157>/Sqrt3'
         */
        localB->Product2_el = ((localB->Sum * localB->fcn5 + localB->Sum_m *
          localB->Product3_e1) + localB->Sum_e * localB->Product1_lc) / sqrt
          (((localB->fcn5 * localB->fcn5 + localB->Product3_e1 *
             localB->Product3_e1) + localB->Product1_lc * localB->Product1_lc) *
           localB->Merge_j);

        /* Abs: '<S157>/Abs' incorporates:
         *  Bias: '<S157>/Bias'
         */
        localB->fcn4 = fabs(localB->Product2_el + asbCubeSatACS_P.Bias_Bias_g);

        /* Abs: '<S157>/Abs1' incorporates:
         *  Bias: '<S157>/Bias1'
         */
        localB->Product2_el = fabs(localB->Product2_el +
          asbCubeSatACS_P.Bias1_Bias_p);

        /* If: '<S157>/If' */
        if (localB->fcn4 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
           *  ActionPort: '<S169>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem_ne);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem' */
        } else if (localB->Product2_el < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S170>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem1_k);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S171>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem2_l);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S159>/Compare' incorporates:
         *  Constant: '<S159>/Constant'
         */
        rtb_Compare_jn = (localB->Product2_el !=
                          asbCubeSatACS_P.Constant_Value_m5);

        /* Sqrt: '<S162>/Sqrt3' incorporates:
         *  Product: '<S162>/Divide1'
         *  Sqrt: '<S183>/Sqrt3'
         */
        localB->Merge_j = sqrt(rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
          * localB->Merge_j);

        /* DotProduct: '<S162>/Dot Product3' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  DotProduct: '<S183>/Dot Product3'
         *  SignalConversion generated from: '<S157>/Dot Product1'
         */
        localB->Product3_e =
          (asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
           localB->Sum +
           asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
           localB->Sum_m) +
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
          localB->Sum_e;

        /* Sum: '<S162>/Add2' incorporates:
         *  DotProduct: '<S162>/Dot Product3'
         *  Sqrt: '<S162>/Sqrt3'
         */
        localB->Product2_el = localB->Product3_e + localB->Merge_j;

        /* Product: '<S183>/Divide' */
        localB->fcn4 = localB->Product3_e / localB->Merge_j;

        /* Abs: '<S183>/Abs' incorporates:
         *  Bias: '<S183>/Bias'
         */
        localB->fcn2 = fabs(localB->fcn4 + asbCubeSatACS_P.Bias_Bias_ib);

        /* Abs: '<S183>/Abs1' incorporates:
         *  Bias: '<S183>/Bias1'
         */
        localB->fcn4 = fabs(localB->fcn4 + asbCubeSatACS_P.Bias1_Bias_h);

        /* If: '<S183>/If' */
        if (localB->fcn2 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
           *  ActionPort: '<S189>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->fcn4,
            &asbCubeSatACS_P.IfActionSubsystem_p);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem' */
        } else if (localB->fcn4 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S190>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->fcn4,
            &asbCubeSatACS_P.IfActionSubsystem1_d);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S191>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->fcn4,
            &asbCubeSatACS_P.IfActionSubsystem2_p1);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem2' */
        }

        /* Switch: '<S162>/is 180deg Rot' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  Constant: '<S184>/Constant'
         *  Product: '<S187>/i x j'
         *  Product: '<S187>/j x k'
         *  Product: '<S187>/k x i'
         *  Product: '<S188>/i x k'
         *  Product: '<S188>/j x i'
         *  Product: '<S188>/k x j'
         *  Product: '<S193>/i x j'
         *  Product: '<S193>/j x k'
         *  Product: '<S193>/k x i'
         *  Product: '<S194>/i x k'
         *  Product: '<S194>/j x i'
         *  Product: '<S194>/k x j'
         *  RelationalOperator: '<S184>/Compare'
         *  RelationalOperator: '<S185>/x>z'
         *  Sum: '<S182>/Sum'
         *  Sum: '<S192>/Sum'
         *  Switch: '<S185>/Switch3'
         */
        if (localB->fcn4 != asbCubeSatACS_P.CompareToConstant_const_j) {
          localB->Product3_e =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
            localB->Sum_e -
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
            localB->Sum_m;
          localB->Product1_g =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
            localB->Sum -
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            localB->Sum_e;
          localB->Product2_e =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            localB->Sum_m -
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
            localB->Sum;
        } else {
          if (asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] >
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2]) {
            /* Switch: '<S185>/Switch3' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             *  Constant: '<S185>/Constant'
             *  Gain: '<S185>/Gain'
             */
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
              asbCubeSatACS_P.Gain_Gain_k *
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1];
            localB->Product2_o4u =
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0];
            localB->Merge_j = asbCubeSatACS_P.Constant_Value_hl;
          } else {
            /* Switch: '<S185>/Switch3' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             *  Constant: '<S185>/Constant1'
             *  Gain: '<S185>/Gain2'
             */
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
              asbCubeSatACS_P.Constant1_Value_d;
            localB->Product2_o4u = asbCubeSatACS_P.Gain2_Gain_ka *
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];
            localB->Merge_j =
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1];
          }

          localB->Product3_e =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
            localB->Merge_j - localB->Product2_o4u *
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];
          localB->Product1_g = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
            * asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] -
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            localB->Merge_j;
          localB->Product2_e =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            localB->Product2_o4u -
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1];
        }

        /* Sqrt: '<S195>/sqrt' incorporates:
         *  Product: '<S196>/Product'
         *  Product: '<S196>/Product1'
         *  Product: '<S196>/Product2'
         *  Product: '<S196>/Product3'
         *  Sum: '<S196>/Sum'
         */
        localB->fcn4 = sqrt(((localB->Product2_el * localB->Product2_el +
                              localB->Product3_e * localB->Product3_e) +
                             localB->Product1_g * localB->Product1_g) +
                            localB->Product2_e * localB->Product2_e);

        /* Product: '<S186>/Product' */
        localB->Product2_el /= localB->fcn4;

        /* Product: '<S186>/Product2' */
        localB->fcn2 = localB->Product1_g / localB->fcn4;

        /* Product: '<S186>/Product1' */
        localB->Product1_d = localB->Product3_e / localB->fcn4;

        /* Product: '<S186>/Product3' */
        localB->Product3_cp = localB->Product2_e / localB->fcn4;

        /* Sum: '<S212>/Sum' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  Constant: '<S136>/secondaryAlignment'
         *  Product: '<S214>/i x j'
         *  Product: '<S214>/j x k'
         *  Product: '<S214>/k x i'
         *  Product: '<S215>/i x k'
         *  Product: '<S215>/j x i'
         *  Product: '<S215>/k x j'
         */
        localB->Product3_e =
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[1] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];
        localB->Product1_g =
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[2];
        localB->Product2_e =
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[1] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1];

        /* Sum: '<S213>/Sum' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  Product: '<S216>/i x j'
         *  Product: '<S216>/j x k'
         *  Product: '<S216>/k x i'
         *  Product: '<S217>/i x k'
         *  Product: '<S217>/j x i'
         *  Product: '<S217>/k x j'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = localB->Product1_g *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
          localB->Product2_e;
        localB->Product2_o4u =
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
          localB->Product2_e - localB->Product3_e *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];
        localB->Merge_j = localB->Product3_e *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
          localB->Product1_g;

        /* Sum: '<S218>/Sum' incorporates:
         *  Product: '<S220>/i x j'
         *  Product: '<S220>/j x k'
         *  Product: '<S220>/k x i'
         *  Product: '<S221>/i x k'
         *  Product: '<S221>/j x i'
         *  Product: '<S221>/k x j'
         */
        localB->Product3_e = localB->Sum_m * localB->Product1_lc - localB->Sum_e
          * localB->Product3_e1;
        localB->Product1_g = localB->Sum_e * localB->fcn5 - localB->Sum *
          localB->Product1_lc;
        localB->Product2_e = localB->Sum * localB->Product3_e1 - localB->Sum_m *
          localB->fcn5;

        /* Sum: '<S219>/Sum' incorporates:
         *  Product: '<S222>/i x j'
         *  Product: '<S222>/j x k'
         *  Product: '<S222>/k x i'
         *  Product: '<S223>/i x k'
         *  Product: '<S223>/j x i'
         *  Product: '<S223>/k x j'
         */
        localB->Product3_e1 = localB->Product3_e * localB->Sum_m;
        localB->fcn5 = localB->Product3_e * localB->Sum_e;
        localB->fcn4 = localB->Product1_g * localB->Sum;
        localB->Product3_e = localB->Product1_g * localB->Sum_e -
          localB->Product2_e * localB->Sum_m;
        localB->Product1_g = localB->Product2_e * localB->Sum - localB->fcn5;
        localB->Product2_e = localB->Product3_e1 - localB->fcn4;

        /* Sqrt: '<S180>/sqrt' incorporates:
         *  Product: '<S181>/Product'
         *  Product: '<S181>/Product1'
         *  Product: '<S181>/Product2'
         *  Product: '<S181>/Product3'
         *  Sum: '<S181>/Sum'
         */
        localB->Product3_e1 = sqrt(((localB->Product2_el * localB->Product2_el +
          localB->Product1_d * localB->Product1_d) + localB->fcn2 * localB->fcn2)
          + localB->Product3_cp * localB->Product3_cp);

        /* Product: '<S176>/Product2' */
        localB->fcn5 = localB->fcn2 / localB->Product3_e1;

        /* Product: '<S176>/Product3' */
        localB->Product1_lc = localB->Product3_cp / localB->Product3_e1;

        /* Product: '<S176>/Product1' */
        localB->fcn4 = localB->Product1_d / localB->Product3_e1;

        /* Product: '<S176>/Product' */
        localB->Product3_e1 = localB->Product2_el / localB->Product3_e1;

        /* Product: '<S177>/Product7' incorporates:
         *  Product: '<S178>/Product7'
         */
        rtb_Sum_dw = localB->Product1_lc * localB->Product1_lc;

        /* Product: '<S177>/Product' incorporates:
         *  Product: '<S178>/Product'
         */
        rtb_Product1_pv = localB->fcn4 * localB->fcn5;

        /* Product: '<S177>/Product1' incorporates:
         *  Product: '<S178>/Product1'
         */
        rtb_Product3_ar = localB->Product3_e1 * localB->Product1_lc;

        /* Product: '<S177>/Product3' incorporates:
         *  Product: '<S179>/Product'
         */
        localB->Sum = localB->fcn4 * localB->Product1_lc;

        /* Product: '<S177>/Product2' incorporates:
         *  Product: '<S179>/Product1'
         */
        localB->jxi_i = localB->Product3_e1 * localB->fcn5;

        /* Product: '<S177>/Product6' incorporates:
         *  Product: '<S179>/Product7'
         */
        localB->Sum_m = localB->fcn5 * localB->fcn5;

        /* Sum: '<S177>/Sum' incorporates:
         *  Constant: '<S177>/Constant'
         *  Gain: '<S177>/Gain'
         *  Gain: '<S177>/Gain1'
         *  Gain: '<S177>/Gain2'
         *  Product: '<S177>/Product'
         *  Product: '<S177>/Product1'
         *  Product: '<S177>/Product2'
         *  Product: '<S177>/Product3'
         *  Product: '<S177>/Product4'
         *  Product: '<S177>/Product5'
         *  Product: '<S177>/Product6'
         *  Product: '<S177>/Product7'
         *  Product: '<S177>/Product8'
         *  Sum: '<S177>/Sum1'
         *  Sum: '<S177>/Sum2'
         *  Sum: '<S177>/Sum3'
         */
        localB->Sum_e = (((asbCubeSatACS_P.Constant_Value_ds - localB->Sum_m) -
                          rtb_Sum_dw) * asbCubeSatACS_P.Gain2_Gain_ga *
                         localB->Product3_e + (rtb_Product1_pv + rtb_Product3_ar)
                         * asbCubeSatACS_P.Gain_Gain_iw * localB->Product1_g) +
          (localB->Sum - localB->jxi_i) * asbCubeSatACS_P.Gain1_Gain_iej *
          localB->Product2_e;

        /* Product: '<S178>/Product3' incorporates:
         *  Product: '<S179>/Product3'
         */
        localB->fcn5 *= localB->Product1_lc;

        /* Product: '<S178>/Product2' incorporates:
         *  Product: '<S179>/Product2'
         */
        localB->Product3_e1 *= localB->fcn4;

        /* Product: '<S178>/Product6' incorporates:
         *  Product: '<S179>/Product6'
         */
        localB->fcn4 *= localB->fcn4;

        /* Sum: '<S178>/Sum' incorporates:
         *  Constant: '<S178>/Constant'
         *  Gain: '<S178>/Gain'
         *  Gain: '<S178>/Gain1'
         *  Gain: '<S178>/Gain2'
         *  Product: '<S178>/Product2'
         *  Product: '<S178>/Product3'
         *  Product: '<S178>/Product4'
         *  Product: '<S178>/Product5'
         *  Product: '<S178>/Product6'
         *  Product: '<S178>/Product8'
         *  Sum: '<S178>/Sum1'
         *  Sum: '<S178>/Sum2'
         *  Sum: '<S178>/Sum3'
         */
        rtb_Sum_dw = (((asbCubeSatACS_P.Constant_Value_de - localB->fcn4) -
                       rtb_Sum_dw) * asbCubeSatACS_P.Gain2_Gain_me *
                      localB->Product1_g + (rtb_Product1_pv - rtb_Product3_ar) *
                      asbCubeSatACS_P.Gain_Gain_b0 * localB->Product3_e) +
          (localB->Product3_e1 + localB->fcn5) * asbCubeSatACS_P.Gain1_Gain_ip *
          localB->Product2_e;

        /* Sum: '<S179>/Sum' incorporates:
         *  Constant: '<S179>/Constant'
         *  Gain: '<S179>/Gain'
         *  Gain: '<S179>/Gain1'
         *  Gain: '<S179>/Gain2'
         *  Product: '<S179>/Product4'
         *  Product: '<S179>/Product5'
         *  Product: '<S179>/Product8'
         *  Sum: '<S179>/Sum1'
         *  Sum: '<S179>/Sum2'
         *  Sum: '<S179>/Sum3'
         */
        localB->fcn4 = ((localB->Sum + localB->jxi_i) *
                        asbCubeSatACS_P.Gain_Gain_jw * localB->Product3_e +
                        (localB->fcn5 - localB->Product3_e1) *
                        asbCubeSatACS_P.Gain1_Gain_a * localB->Product1_g) +
          ((asbCubeSatACS_P.Constant_Value_di - localB->fcn4) - localB->Sum_m) *
          asbCubeSatACS_P.Gain2_Gain_ii * localB->Product2_e;

        /* DotProduct: '<S198>/Dot Product1' incorporates:
         *  DotProduct: '<S163>/Dot Product1'
         *  DotProduct: '<S198>/Dot Product3'
         *  Switch: '<S141>/Switch'
         */
        localB->Product3_e = localB->Product2_o4u * localB->Product2_o4u;
        localB->Product1_g = localB->Merge_j * localB->Merge_j;

        /* DotProduct: '<S198>/Dot Product2' incorporates:
         *  DotProduct: '<S163>/Dot Product2'
         *  SignalConversion generated from: '<S198>/Dot Product2'
         *  Switch: '<S141>/Switch'
         */
        localB->Product2_e = (localB->Sum_e * localB->Sum_e + rtb_Sum_dw *
                              rtb_Sum_dw) + localB->fcn4 * localB->fcn4;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  DotProduct: '<S163>/Dot Product3'
         *  SignalConversion generated from: '<S198>/Dot Product2'
         *  Switch: '<S141>/Switch'
         */
        localB->Product1_lc = localB->Product2_o4u * rtb_Sum_dw;
        rtb_Product1_pv = localB->Merge_j * localB->fcn4;

        /* Product: '<S198>/Divide' incorporates:
         *  DotProduct: '<S198>/Dot Product1'
         *  DotProduct: '<S198>/Dot Product2'
         *  DotProduct: '<S198>/Dot Product3'
         *  Product: '<S198>/Divide1'
         *  SignalConversion generated from: '<S198>/Dot Product2'
         *  Sqrt: '<S198>/Sqrt3'
         */
        localB->Product3_e1 =
          ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum_e +
            localB->Product1_lc) + rtb_Product1_pv) / sqrt
          (((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
             rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
             localB->Product3_e) + localB->Product1_g) * localB->Product2_e);

        /* If: '<S198>/If' incorporates:
         *  Abs: '<S198>/Abs'
         *  Abs: '<S198>/Abs1'
         *  Bias: '<S198>/Bias'
         *  Bias: '<S198>/Bias1'
         */
        if (fabs(localB->Product3_e1 + asbCubeSatACS_P.Bias_Bias_e) < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
           *  ActionPort: '<S204>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem_b);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem' */
        } else if (fabs(localB->Product3_e1 + asbCubeSatACS_P.Bias1_Bias_a) <
                   1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S205>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem1_n);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S206>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem2_o);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem2' */
        }

        /* Switch: '<S141>/Switch' incorporates:
         *  Constant: '<S199>/Constant'
         *  Logic: '<S141>/OR'
         *  Product: '<S172>/Product'
         *  Product: '<S172>/Product1'
         *  Product: '<S172>/Product2'
         *  Product: '<S172>/Product3'
         *  Product: '<S173>/Product'
         *  Product: '<S173>/Product1'
         *  Product: '<S173>/Product2'
         *  Product: '<S173>/Product3'
         *  Product: '<S174>/Product'
         *  Product: '<S174>/Product1'
         *  Product: '<S174>/Product2'
         *  Product: '<S174>/Product3'
         *  Product: '<S175>/Product'
         *  Product: '<S175>/Product1'
         *  Product: '<S175>/Product2'
         *  Product: '<S175>/Product3'
         *  RelationalOperator: '<S199>/Compare'
         *  RelationalOperator: '<S200>/x>z'
         *  Sum: '<S172>/Sum'
         *  Sum: '<S173>/Sum'
         *  Sum: '<S174>/Sum'
         *  Sum: '<S175>/Sum'
         *  Switch: '<S163>/is 180deg Rot'
         *  Switch: '<S200>/Switch3'
         */
        if (rtb_Compare_h || rtb_Compare_jn) {
          localB->cmd_q_b2tgt[0] = localB->Product2_el;
          localB->cmd_q_b2tgt[1] = localB->Product1_d;
          localB->cmd_q_b2tgt[2] = localB->fcn2;
          localB->cmd_q_b2tgt[3] = localB->Product3_cp;
        } else {
          if (localB->Product3_e1 != asbCubeSatACS_P.CompareToConstant_const_l)
          {
            /* Switch: '<S163>/is 180deg Rot' incorporates:
             *  Product: '<S202>/i x j'
             *  Product: '<S202>/j x k'
             *  Product: '<S202>/k x i'
             *  Product: '<S203>/i x k'
             *  Product: '<S203>/j x i'
             *  Product: '<S203>/k x j'
             *  Sum: '<S197>/Sum'
             */
            localB->Product3_e1 = localB->Product2_o4u * localB->fcn4 -
              localB->Merge_j * rtb_Sum_dw;
            localB->jxi_i = localB->Merge_j * localB->Sum_e -
              rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->fcn4;
            localB->Sum = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
              rtb_Sum_dw - localB->Product2_o4u * localB->Sum_e;
          } else {
            if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 >
                localB->Merge_j) {
              /* Switch: '<S200>/Switch3' incorporates:
               *  Constant: '<S200>/Constant'
               *  Gain: '<S200>/Gain'
               *  Switch: '<S163>/is 180deg Rot'
               */
              localB->Sum = asbCubeSatACS_P.Gain_Gain_m * localB->Product2_o4u;
              localB->fcn5 = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
              localB->Sum_m = asbCubeSatACS_P.Constant_Value_o;
            } else {
              /* Switch: '<S200>/Switch3' incorporates:
               *  Constant: '<S200>/Constant1'
               *  Gain: '<S200>/Gain2'
               *  Switch: '<S163>/is 180deg Rot'
               */
              localB->Sum = asbCubeSatACS_P.Constant1_Value_n5;
              localB->fcn5 = asbCubeSatACS_P.Gain2_Gain_i5 * localB->Merge_j;
              localB->Sum_m = localB->Product2_o4u;
            }

            /* Switch: '<S163>/is 180deg Rot' incorporates:
             *  Product: '<S208>/i x j'
             *  Product: '<S208>/j x k'
             *  Product: '<S208>/k x i'
             *  Product: '<S209>/i x k'
             *  Product: '<S209>/j x i'
             *  Product: '<S209>/k x j'
             *  Sum: '<S207>/Sum'
             */
            localB->Product3_e1 = localB->Product2_o4u * localB->Sum_m -
              localB->fcn5 * localB->Merge_j;
            localB->jxi_i = localB->Sum * localB->Merge_j -
              rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum_m;
            localB->Sum = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
              localB->fcn5 - localB->Sum * localB->Product2_o4u;
          }

          /* Sum: '<S163>/Add2' incorporates:
           *  DotProduct: '<S163>/Dot Product1'
           *  DotProduct: '<S163>/Dot Product3'
           *  Product: '<S163>/Divide1'
           *  RelationalOperator: '<S200>/x>z'
           *  SignalConversion generated from: '<S198>/Dot Product2'
           *  Sqrt: '<S163>/Sqrt3'
           *  Switch: '<S163>/is 180deg Rot'
           *  Switch: '<S200>/Switch3'
           */
          localB->Merge_j = sqrt
            (((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
               rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
               localB->Product3_e) + localB->Product1_g) * localB->Product2_e) +
            ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum_e
              + localB->Product1_lc) + rtb_Product1_pv);

          /* Sqrt: '<S210>/sqrt' incorporates:
           *  Product: '<S211>/Product'
           *  Product: '<S211>/Product1'
           *  Product: '<S211>/Product2'
           *  Product: '<S211>/Product3'
           *  Sum: '<S211>/Sum'
           */
          localB->Product3_e = sqrt(((localB->Merge_j * localB->Merge_j +
            localB->Product3_e1 * localB->Product3_e1) + localB->jxi_i *
            localB->jxi_i) + localB->Sum * localB->Sum);

          /* Product: '<S201>/Product3' */
          localB->Product1_g = localB->Sum / localB->Product3_e;

          /* Product: '<S201>/Product2' */
          localB->Product2_e = localB->jxi_i / localB->Product3_e;

          /* Product: '<S201>/Product1' */
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            localB->Product3_e1 / localB->Product3_e;

          /* Product: '<S201>/Product' */
          localB->Merge_j /= localB->Product3_e;
          localB->cmd_q_b2tgt[0] = ((localB->Product2_el * localB->Merge_j -
            localB->Product1_d *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) - localB->fcn2 *
            localB->Product2_e) - localB->Product3_cp * localB->Product1_g;
          localB->cmd_q_b2tgt[1] = ((localB->Product2_el *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
            localB->Product1_d * localB->Merge_j) + localB->fcn2 *
            localB->Product1_g) - localB->Product3_cp * localB->Product2_e;
          localB->cmd_q_b2tgt[2] = ((localB->Product2_el * localB->Product2_e -
            localB->Product1_d * localB->Product1_g) + localB->fcn2 *
            localB->Merge_j) + localB->Product3_cp *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
          localB->cmd_q_b2tgt[3] = ((localB->Product2_el * localB->Product1_g +
            localB->Product1_d * localB->Product2_e) - localB->fcn2 *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) +
            localB->Product3_cp * localB->Merge_j;
        }

        /* Sqrt: '<S240>/sqrt' incorporates:
         *  Product: '<S241>/Product'
         *  Product: '<S241>/Product1'
         *  Product: '<S241>/Product2'
         *  Product: '<S241>/Product3'
         *  Sum: '<S241>/Sum'
         */
        localB->Product3_e1 = sqrt(((localB->cmd_q_b2tgt[0] *
          localB->cmd_q_b2tgt[0] + localB->cmd_q_b2tgt[1] * localB->cmd_q_b2tgt
          [1]) + localB->cmd_q_b2tgt[2] * localB->cmd_q_b2tgt[2]) +
          localB->cmd_q_b2tgt[3] * localB->cmd_q_b2tgt[3]);

        /* Product: '<S235>/Product' */
        localB->fcn5 = localB->cmd_q_b2tgt[0] / localB->Product3_e1;

        /* Product: '<S235>/Product1' */
        localB->Product1_lc = localB->cmd_q_b2tgt[1] / localB->Product3_e1;

        /* Product: '<S235>/Product2' */
        localB->Product2_el = localB->cmd_q_b2tgt[2] / localB->Product3_e1;

        /* Product: '<S235>/Product3' */
        localB->Product3_e1 = localB->cmd_q_b2tgt[3] / localB->Product3_e1;

        /* Fcn: '<S138>/fcn3' */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = (localB->Product1_lc
          * localB->Product3_e1 + localB->fcn5 * localB->Product2_el) * 2.0;

        /* Fcn: '<S138>/fcn2' incorporates:
         *  Fcn: '<S138>/fcn5'
         */
        localB->Merge_j = localB->fcn5 * localB->fcn5;
        localB->Product3_e = localB->Product1_lc * localB->Product1_lc;
        localB->Product1_g = localB->Product2_el * localB->Product2_el;
        localB->Product2_e = localB->Product3_e1 * localB->Product3_e1;

        /* Trigonometry: '<S234>/Trigonometric Function1' incorporates:
         *  Fcn: '<S138>/fcn1'
         *  Fcn: '<S138>/fcn2'
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[0] = rt_atan2d_snf((localB->Product2_el *
          localB->Product3_e1 - localB->fcn5 * localB->Product1_lc) * -2.0,
          ((localB->Merge_j - localB->Product3_e) - localB->Product1_g) +
          localB->Product2_e);

        /* Trigonometry: '<S234>/Trigonometric Function3' incorporates:
         *  Fcn: '<S138>/fcn4'
         *  Fcn: '<S138>/fcn5'
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[2] = rt_atan2d_snf((localB->Product1_lc *
          localB->Product2_el - localB->fcn5 * localB->Product3_e1) * -2.0,
          ((localB->Merge_j + localB->Product3_e) - localB->Product1_g) -
          localB->Product2_e);

        /* If: '<S236>/If' incorporates:
         *  Constant: '<S237>/Constant'
         *  Constant: '<S238>/Constant'
         */
        if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 > 1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.Constant_Value_lp;
        } else if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 < -1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.Constant_Value_a;
        }

        /* Trigonometry: '<S234>/trigFcn' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 > 1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = 1.0;
        } else if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 < -1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = -1.0;
        }

        localB->PointingCmd[1] = asin
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);
      }
      break;

     default:
      /* case IN_Transition: */
      if (*rtu_AttitudeMode == 1.0) {
        localDW->is_On = asbCubeSatACS_IN_Earth;

        /* Product: '<S50>/Divide' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  Constant: '<S7>/secondaryAlignment'
         *  DotProduct: '<S50>/Dot Product1'
         *  DotProduct: '<S50>/Dot Product2'
         *  DotProduct: '<S50>/Dot Product3'
         *  Product: '<S50>/Divide1'
         *  Sqrt: '<S50>/Sqrt3'
         */
        localB->Product2_e =
          ((asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[0] +
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[1])
           + asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
           asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[2]) /
          sqrt(((asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0]
                 * asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[
                 0] +
                 asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1]
                 * asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[
                 1]) +
                asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2]
                * asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment
                [2]) *
               ((asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[
                 0] *
                 asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[
                 0] +
                 asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[
                 1] *
                 asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[
                 1]) +
                asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment
                [2] *
                asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment
                [2]));

        /* Abs: '<S50>/Abs' incorporates:
         *  Bias: '<S50>/Bias'
         */
        localB->Product3_e1 = fabs(localB->Product2_e +
          asbCubeSatACS_P.Bias_Bias);

        /* If: '<S50>/If' incorporates:
         *  Abs: '<S50>/Abs1'
         *  Bias: '<S50>/Bias1'
         */
        if (localB->Product3_e1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
           *  ActionPort: '<S60>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem' */
        } else if (fabs(localB->Product2_e + asbCubeSatACS_P.Bias1_Bias) <
                   1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S61>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem1);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S62>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem2);

          /* End of Outputs for SubSystem: '<S50>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S52>/Compare' incorporates:
         *  Constant: '<S52>/Constant'
         */
        rtb_Compare_jn = (localB->Product3_e1 !=
                          asbCubeSatACS_P.Constant_Value_f);

        /* Gain: '<S10>/Gain' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         */
        localB->Product3_e = asbCubeSatACS_P.Gain_Gain_h * rtu_SensorsOut_X_eci
          [0];
        localB->Product1_g = asbCubeSatACS_P.Gain_Gain_h * rtu_SensorsOut_X_eci
          [1];
        localB->Product2_e = asbCubeSatACS_P.Gain_Gain_h * rtu_SensorsOut_X_eci
          [2];

        /* Sqrt: '<S120>/sqrt' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S121>/Product'
         *  Product: '<S121>/Product1'
         *  Product: '<S121>/Product2'
         *  Product: '<S121>/Product3'
         *  Sqrt: '<S48>/sqrt'
         *  Sum: '<S121>/Sum'
         *  UnaryMinus: '<S8>/Unary Minus'
         *  UnaryMinus: '<S8>/Unary Minus1'
         *  UnaryMinus: '<S8>/Unary Minus2'
         */
        localB->Product1_lc = sqrt(((rtu_SensorsOut_q_eci2b[0] *
          rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
          -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
          -rtu_SensorsOut_q_eci2b[2]) + -rtu_SensorsOut_q_eci2b[3] *
          -rtu_SensorsOut_q_eci2b[3]);

        /* Product: '<S119>/Product1' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Sqrt: '<S120>/sqrt'
         *  UnaryMinus: '<S8>/Unary Minus'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          -rtu_SensorsOut_q_eci2b[1] / localB->Product1_lc;

        /* Product: '<S119>/Product' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Sqrt: '<S120>/sqrt'
         */
        localB->Merge_j = rtu_SensorsOut_q_eci2b[0] / localB->Product1_lc;

        /* Product: '<S119>/Product2' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Sqrt: '<S120>/sqrt'
         *  UnaryMinus: '<S8>/Unary Minus1'
         */
        localB->Product3_e1 = -rtu_SensorsOut_q_eci2b[2] / localB->Product1_lc;

        /* Product: '<S119>/Product3' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Sqrt: '<S120>/sqrt'
         *  UnaryMinus: '<S8>/Unary Minus2'
         */
        localB->Product2_o4u = -rtu_SensorsOut_q_eci2b[3] / localB->Product1_lc;

        /* Sqrt: '<S21>/sqrt' incorporates:
         *  Product: '<S22>/Product'
         *  Product: '<S22>/Product1'
         *  Product: '<S22>/Product2'
         *  Product: '<S22>/Product3'
         *  Sum: '<S22>/Sum'
         *  UnaryMinus: '<S118>/Unary Minus'
         *  UnaryMinus: '<S118>/Unary Minus1'
         *  UnaryMinus: '<S118>/Unary Minus2'
         */
        localB->Sum_e = sqrt(((localB->Merge_j * localB->Merge_j +
          -rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          -rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) +
                              -localB->Product3_e1 * -localB->Product3_e1) +
                             -localB->Product2_o4u * -localB->Product2_o4u);

        /* Product: '<S17>/Product1' incorporates:
         *  UnaryMinus: '<S118>/Unary Minus'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          -rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 / localB->Sum_e;

        /* Product: '<S17>/Product2' incorporates:
         *  UnaryMinus: '<S118>/Unary Minus1'
         */
        localB->Sum_m = -localB->Product3_e1 / localB->Sum_e;

        /* Product: '<S17>/Product' */
        localB->Merge_j /= localB->Sum_e;

        /* Product: '<S17>/Product3' incorporates:
         *  UnaryMinus: '<S118>/Unary Minus2'
         */
        localB->Product2_o4u = -localB->Product2_o4u / localB->Sum_e;

        /* Product: '<S18>/Product7' incorporates:
         *  Product: '<S19>/Product7'
         */
        localB->Product3_cp = localB->Product2_o4u * localB->Product2_o4u;

        /* Product: '<S18>/Product1' incorporates:
         *  Product: '<S19>/Product1'
         */
        localB->Product3_e1 = localB->Merge_j * localB->Product2_o4u;

        /* Product: '<S18>/Product3' incorporates:
         *  Product: '<S20>/Product'
         */
        localB->jxi_i = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Product2_o4u;

        /* Sum: '<S18>/Sum' incorporates:
         *  Constant: '<S18>/Constant'
         *  Gain: '<S18>/Gain'
         *  Gain: '<S18>/Gain1'
         *  Gain: '<S18>/Gain2'
         *  Product: '<S18>/Product'
         *  Product: '<S18>/Product1'
         *  Product: '<S18>/Product2'
         *  Product: '<S18>/Product3'
         *  Product: '<S18>/Product4'
         *  Product: '<S18>/Product5'
         *  Product: '<S18>/Product6'
         *  Product: '<S18>/Product7'
         *  Product: '<S18>/Product8'
         *  Sum: '<S18>/Sum1'
         *  Sum: '<S18>/Sum2'
         *  Sum: '<S18>/Sum3'
         */
        localB->Product1_d = (((asbCubeSatACS_P.Constant_Value_c - localB->Sum_m
          * localB->Sum_m) - localB->Product3_cp) * asbCubeSatACS_P.Gain2_Gain_b
                              * localB->Product3_e +
                              (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
          * localB->Sum_m + localB->Product3_e1) * asbCubeSatACS_P.Gain_Gain_d *
                              localB->Product1_g) + (localB->jxi_i -
          localB->Merge_j * localB->Sum_m) * asbCubeSatACS_P.Gain1_Gain *
          localB->Product2_e;

        /* Product: '<S19>/Product3' incorporates:
         *  Product: '<S20>/Product3'
         */
        localB->fcn5 = localB->Sum_m * localB->Product2_o4u;

        /* Product: '<S19>/Product2' incorporates:
         *  Product: '<S20>/Product2'
         */
        localB->Sum_e = localB->Merge_j *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Product: '<S19>/Product6' incorporates:
         *  Product: '<S20>/Product6'
         */
        localB->Product2_el = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Sum: '<S19>/Sum' incorporates:
         *  Constant: '<S19>/Constant'
         *  Gain: '<S19>/Gain'
         *  Gain: '<S19>/Gain1'
         *  Gain: '<S19>/Gain2'
         *  Product: '<S19>/Product'
         *  Product: '<S19>/Product2'
         *  Product: '<S19>/Product3'
         *  Product: '<S19>/Product4'
         *  Product: '<S19>/Product5'
         *  Product: '<S19>/Product6'
         *  Product: '<S19>/Product8'
         *  Sum: '<S19>/Sum1'
         *  Sum: '<S19>/Sum2'
         *  Sum: '<S19>/Sum3'
         */
        localB->Product3_cp = (((asbCubeSatACS_P.Constant_Value_ci -
          localB->Product2_el) - localB->Product3_cp) *
          asbCubeSatACS_P.Gain2_Gain_l * localB->Product1_g +
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum_m -
           localB->Product3_e1) * asbCubeSatACS_P.Gain_Gain_b *
          localB->Product3_e) + (localB->Sum_e + localB->fcn5) *
          asbCubeSatACS_P.Gain1_Gain_h * localB->Product2_e;

        /* Sum: '<S20>/Sum' incorporates:
         *  Constant: '<S20>/Constant'
         *  Gain: '<S20>/Gain'
         *  Gain: '<S20>/Gain1'
         *  Gain: '<S20>/Gain2'
         *  Product: '<S20>/Product1'
         *  Product: '<S20>/Product4'
         *  Product: '<S20>/Product5'
         *  Product: '<S20>/Product7'
         *  Product: '<S20>/Product8'
         *  Sum: '<S20>/Sum1'
         *  Sum: '<S20>/Sum2'
         *  Sum: '<S20>/Sum3'
         */
        localB->fcn4 = ((localB->Merge_j * localB->Sum_m + localB->jxi_i) *
                        asbCubeSatACS_P.Gain_Gain_l0 * localB->Product3_e +
                        (localB->fcn5 - localB->Sum_e) *
                        asbCubeSatACS_P.Gain1_Gain_d * localB->Product1_g) +
          ((asbCubeSatACS_P.Constant_Value_b2 - localB->Product2_el) -
           localB->Sum_m * localB->Sum_m) * asbCubeSatACS_P.Gain2_Gain_f *
          localB->Product2_e;

        /* Sum: '<S32>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S38>/i x j'
         *  Product: '<S38>/j x k'
         *  Product: '<S38>/k x i'
         *  Product: '<S39>/i x k'
         *  Product: '<S39>/j x i'
         *  Product: '<S39>/k x j'
         */
        localB->Sum = rtu_SensorsOut_X_eci[1] * rtu_SensorsOut_V_eci[2] -
          rtu_SensorsOut_V_eci[1] * rtu_SensorsOut_X_eci[2];
        localB->fcn5 = rtu_SensorsOut_V_eci[0] * rtu_SensorsOut_X_eci[2] -
          rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[2];
        localB->Sum_m = rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[1] -
          rtu_SensorsOut_V_eci[0] * rtu_SensorsOut_X_eci[1];

        /* Sum: '<S34>/Sum' incorporates:
         *  Constant: '<S23>/Constant'
         *  Product: '<S40>/i x j'
         *  Product: '<S40>/j x k'
         *  Product: '<S40>/k x i'
         *  Product: '<S41>/i x k'
         *  Product: '<S41>/j x i'
         *  Product: '<S41>/k x j'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          asbCubeSatACS_P.Constant_Value_m[1] * localB->Sum_m - localB->fcn5 *
          asbCubeSatACS_P.Constant_Value_m[2];
        localB->Product2_o4u = localB->Sum * asbCubeSatACS_P.Constant_Value_m[2]
          - asbCubeSatACS_P.Constant_Value_m[0] * localB->Sum_m;
        localB->Merge_j = asbCubeSatACS_P.Constant_Value_m[0] * localB->fcn5 -
          localB->Sum * asbCubeSatACS_P.Constant_Value_m[1];

        /* Sqrt: '<S23>/|n|' incorporates:
         *  DotProduct: '<S23>/Dot Product2'
         */
        localB->fcn2 = sqrt((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
                             rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
                             localB->Product2_o4u * localB->Product2_o4u) +
                            localB->Merge_j * localB->Merge_j);

        /* Switch: '<S23>/n_j < 0' incorporates:
         *  Constant: '<S23>/Constant1'
         *  Sum: '<S23>/Sum'
         *  Trigonometry: '<S23>/RAAN = acos(n_i // |n|)'
         */
        if (localB->Product2_o4u >= asbCubeSatACS_P.n_j0_Threshold) {
          /* Product: '<S23>/divide' */
          localB->Product1_g = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
            / localB->fcn2;

          /* MinMax: '<S30>/Min' incorporates:
           *  Constant: '<S30>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_d)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_d))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_d;
          }

          /* MinMax: '<S30>/Max' incorporates:
           *  Constant: '<S30>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_c >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_c;
          }

          /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->Product2_ev = acos(localB->Product1_g);
        } else {
          /* Product: '<S23>/divide' */
          localB->Product1_g = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
            / localB->fcn2;

          /* MinMax: '<S30>/Min' incorporates:
           *  Constant: '<S30>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_d)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_d))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_d;
          }

          /* MinMax: '<S30>/Max' incorporates:
           *  Constant: '<S30>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_c >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_c;
          }

          /* Trigonometry: '<S23>/RAAN = acos(n_i // |n|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->Product2_ev = asbCubeSatACS_P.Constant1_Value - acos
            (localB->Product1_g);
        }

        /* Product: '<S23>/divide1' incorporates:
         *  DotProduct: '<S23>/Dot Product3'
         *  Sqrt: '<S23>/|h|'
         */
        localB->Sum_e = localB->Sum_m / sqrt((localB->Sum * localB->Sum +
          localB->fcn5 * localB->fcn5) + localB->Sum_m * localB->Sum_m);

        /* Sqrt: '<S23>/|r|' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  DotProduct: '<S23>/Dot Product'
         */
        localB->Product2_el = sqrt((rtu_SensorsOut_X_eci[0] *
          rtu_SensorsOut_X_eci[0] + rtu_SensorsOut_X_eci[1] *
          rtu_SensorsOut_X_eci[1]) + rtu_SensorsOut_X_eci[2] *
          rtu_SensorsOut_X_eci[2]);

        /* Sum: '<S35>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S42>/i x j'
         *  Product: '<S42>/k x i'
         *  Product: '<S43>/j x i'
         */
        localB->Product1_g = localB->Sum * rtu_SensorsOut_V_eci[2];
        localB->Product2_e = rtu_SensorsOut_V_eci[0] * localB->fcn5;
        localB->jxi_i = localB->Sum * rtu_SensorsOut_V_eci[1];

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S23>/Constant2'
         *  Product: '<S23>/divide2'
         *  Product: '<S23>/divide3'
         *  Product: '<S42>/j x k'
         *  Product: '<S43>/k x j'
         *  Sum: '<S35>/Sum'
         */
        localB->Product3_e = (rtu_SensorsOut_V_eci[1] * localB->Sum_m -
                              localB->fcn5 * rtu_SensorsOut_V_eci[2]) /
          asbCubeSatACS_P.Calculateq_icrf2lvlh_mu - rtu_SensorsOut_X_eci[0] /
          localB->Product2_el;

        /* DotProduct: '<S23>/Dot Product4' */
        rtb_Product2_el_tmp = localB->Product3_e * localB->Product3_e;
        localB->Sum = localB->Product3_e;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S23>/Constant2'
         *  Product: '<S23>/divide2'
         *  Product: '<S23>/divide3'
         *  Product: '<S43>/i x k'
         *  Sum: '<S35>/Sum'
         */
        localB->Product3_e = (localB->Product1_g - rtu_SensorsOut_V_eci[0] *
                              localB->Sum_m) /
          asbCubeSatACS_P.Calculateq_icrf2lvlh_mu - rtu_SensorsOut_X_eci[1] /
          localB->Product2_el;

        /* DotProduct: '<S23>/Dot Product4' */
        rtb_Product2_el_tmp += localB->Product3_e * localB->Product3_e;
        localB->fcn5 = localB->Product3_e;

        /* Sum: '<S23>/e = (v x h) // mu - r // |r|' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S23>/Constant2'
         *  Product: '<S23>/divide2'
         *  Product: '<S23>/divide3'
         *  Sum: '<S35>/Sum'
         */
        localB->Product3_e = (localB->Product2_e - localB->jxi_i) /
          asbCubeSatACS_P.Calculateq_icrf2lvlh_mu - rtu_SensorsOut_X_eci[2] /
          localB->Product2_el;

        /* Sqrt: '<S23>/|e|' incorporates:
         *  DotProduct: '<S23>/Dot Product4'
         */
        localB->Sum_m = sqrt(localB->Product3_e * localB->Product3_e +
                             rtb_Product2_el_tmp);

        /* Switch: '<S23>/e_k < 0' incorporates:
         *  Constant: '<S23>/Constant3'
         *  Sum: '<S23>/Sum1'
         *  Trigonometry: '<S23>/argP = acos(n.e//|n||e|)'
         */
        if (localB->Product3_e >= asbCubeSatACS_P.e_k0_Threshold) {
          /* Product: '<S23>/divide4' incorporates:
           *  DotProduct: '<S23>/Dot Product1'
           *  Product: '<S23>/Product'
           */
          localB->Product1_g =
            ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum +
              localB->Product2_o4u * localB->fcn5) + localB->Merge_j *
             localB->Product3_e) / (localB->fcn2 * localB->Sum_m);

          /* MinMax: '<S29>/Min' incorporates:
           *  Constant: '<S29>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_fu)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_fu))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_fu;
          }

          /* MinMax: '<S29>/Max' incorporates:
           *  Constant: '<S29>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_m >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_m;
          }

          /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->jxi_i = acos(localB->Product1_g);
        } else {
          /* Product: '<S23>/divide4' incorporates:
           *  DotProduct: '<S23>/Dot Product1'
           *  Product: '<S23>/Product'
           */
          localB->Product1_g =
            ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum +
              localB->Product2_o4u * localB->fcn5) + localB->Merge_j *
             localB->Product3_e) / (localB->fcn2 * localB->Sum_m);

          /* MinMax: '<S29>/Min' incorporates:
           *  Constant: '<S29>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_fu)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_fu))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_fu;
          }

          /* MinMax: '<S29>/Max' incorporates:
           *  Constant: '<S29>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_m >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_m;
          }

          /* Trigonometry: '<S23>/argP = acos(n.e//|n||e|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->jxi_i = asbCubeSatACS_P.Constant3_Value - acos
            (localB->Product1_g);
        }

        /* Switch: '<S23>/r.v < 0' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S23>/Constant4'
         *  DotProduct: '<S23>/Dot Product6'
         *  Sum: '<S23>/Sum2'
         *  Trigonometry: '<S23>/nu = acos(e.r//|e||r|)'
         */
        if ((rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[0] +
             rtu_SensorsOut_X_eci[1] * rtu_SensorsOut_V_eci[1]) +
            rtu_SensorsOut_X_eci[2] * rtu_SensorsOut_V_eci[2] >=
            asbCubeSatACS_P.rv0_Threshold) {
          /* Product: '<S23>/divide5' incorporates:
           *  DotProduct: '<S23>/Dot Product5'
           *  Product: '<S23>/Product1'
           */
          localB->Product1_g = ((localB->Sum * rtu_SensorsOut_X_eci[0] +
            localB->fcn5 * rtu_SensorsOut_X_eci[1]) + localB->Product3_e *
                                rtu_SensorsOut_X_eci[2]) / (localB->Sum_m *
            localB->Product2_el);

          /* MinMax: '<S28>/Min' incorporates:
           *  Constant: '<S28>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_j)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_j))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_j;
          }

          /* MinMax: '<S28>/Max' incorporates:
           *  Constant: '<S28>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_na >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_na;
          }

          /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->fcn2 = acos(localB->Product1_g);
        } else {
          /* Product: '<S23>/divide5' incorporates:
           *  DotProduct: '<S23>/Dot Product5'
           *  Product: '<S23>/Product1'
           */
          localB->Product1_g = ((localB->Sum * rtu_SensorsOut_X_eci[0] +
            localB->fcn5 * rtu_SensorsOut_X_eci[1]) + localB->Product3_e *
                                rtu_SensorsOut_X_eci[2]) / (localB->Sum_m *
            localB->Product2_el);

          /* MinMax: '<S28>/Min' incorporates:
           *  Constant: '<S28>/Constant'
           */
          if ((!(localB->Product1_g <= asbCubeSatACS_P.Constant_Value_j)) &&
              (!rtIsNaN(asbCubeSatACS_P.Constant_Value_j))) {
            localB->Product1_g = asbCubeSatACS_P.Constant_Value_j;
          }

          /* MinMax: '<S28>/Max' incorporates:
           *  Constant: '<S28>/Constant1'
           */
          if ((asbCubeSatACS_P.Constant1_Value_na >= localB->Product1_g) ||
              rtIsNaN(localB->Product1_g)) {
            localB->Product1_g = asbCubeSatACS_P.Constant1_Value_na;
          }

          /* Trigonometry: '<S23>/nu = acos(e.r//|e||r|)' */
          if (localB->Product1_g > 1.0) {
            localB->Product1_g = 1.0;
          } else if (localB->Product1_g < -1.0) {
            localB->Product1_g = -1.0;
          }

          localB->fcn2 = asbCubeSatACS_P.Constant4_Value - acos
            (localB->Product1_g);
        }

        /* Gain: '<S33>/1//2' */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          asbCubeSatACS_P.u2_Gain * localB->Product2_ev;

        /* MinMax: '<S31>/Min' incorporates:
         *  Constant: '<S31>/Constant'
         */
        if ((!(localB->Sum_e <= asbCubeSatACS_P.Constant_Value_l)) && (!rtIsNaN
             (asbCubeSatACS_P.Constant_Value_l))) {
          localB->Sum_e = asbCubeSatACS_P.Constant_Value_l;
        }

        /* MinMax: '<S31>/Max' incorporates:
         *  Constant: '<S31>/Constant1'
         */
        if ((asbCubeSatACS_P.Constant1_Value_e >= localB->Sum_e) || rtIsNaN
            (localB->Sum_e)) {
          localB->Sum_e = asbCubeSatACS_P.Constant1_Value_e;
        }

        /* Trigonometry: '<S23>/i = acos(h_k // |h|)' */
        if (localB->Sum_e > 1.0) {
          localB->Sum_e = 1.0;
        } else if (localB->Sum_e < -1.0) {
          localB->Sum_e = -1.0;
        }

        /* Gain: '<S33>/1//2' incorporates:
         *  Sum: '<S23>/Sum3'
         *  Trigonometry: '<S23>/i = acos(h_k // |h|)'
         */
        localB->Product2_o4u = asbCubeSatACS_P.u2_Gain * acos(localB->Sum_e);
        localB->Merge_j = (localB->jxi_i + localB->fcn2) *
          asbCubeSatACS_P.u2_Gain;

        /* Trigonometry: '<S33>/sincos' */
        localB->Sum = cos(rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);
        localB->Product1_g = sin
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);
        localB->fcn5 = cos(localB->Product2_o4u);
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = sin
          (localB->Product2_o4u);
        localB->Sum_m = cos(localB->Merge_j);
        localB->Product2_e = sin(localB->Merge_j);

        /* Fcn: '<S33>/q2' incorporates:
         *  Fcn: '<S33>/q1'
         */
        localB->Product3_e = localB->Sum *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *= localB->Product1_g;
        localB->Product2_el = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Sum_m - localB->Product3_e * localB->Product2_e;

        /* Fcn: '<S33>/q0' incorporates:
         *  Fcn: '<S33>/q3'
         */
        localB->Merge_j = localB->Product1_g * localB->fcn5;
        localB->Sum_e = localB->Sum * localB->fcn5;
        localB->jxi_i = localB->Sum_e * localB->Sum_m - localB->Merge_j *
          localB->Product2_e;

        /* Fcn: '<S33>/q1' */
        localB->fcn2 = localB->Product3_e * localB->Sum_m +
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Product2_e;

        /* Fcn: '<S33>/q3' */
        localB->Product2_ev = localB->Merge_j * localB->Sum_m + localB->Sum_e *
          localB->Product2_e;

        /* Sqrt: '<S36>/sqrt' incorporates:
         *  Product: '<S37>/Product'
         *  Product: '<S37>/Product1'
         *  Product: '<S37>/Product2'
         *  Product: '<S37>/Product3'
         *  Sum: '<S37>/Sum'
         */
        localB->Sum_e = sqrt(((localB->jxi_i * localB->jxi_i + localB->fcn2 *
          localB->fcn2) + localB->Product2_el * localB->Product2_el) +
                             localB->Product2_ev * localB->Product2_ev);

        /* Product: '<S27>/Product2' */
        localB->Product2_el /= localB->Sum_e;

        /* Product: '<S26>/Product' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         */
        localB->Merge_j = rtu_SensorsOut_q_eci2b[0] / localB->Product1_lc;

        /* Product: '<S27>/Product3' */
        localB->Product2_ev /= localB->Sum_e;

        /* Product: '<S26>/Product1' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S8>/Unary Minus'
         */
        localB->Product3_e1 = -rtu_SensorsOut_q_eci2b[1] / localB->Product1_lc;

        /* Product: '<S27>/Product' */
        localB->jxi_i /= localB->Sum_e;

        /* Product: '<S26>/Product2' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S8>/Unary Minus1'
         */
        localB->Product2_e = -rtu_SensorsOut_q_eci2b[2] / localB->Product1_lc;

        /* Product: '<S27>/Product1' */
        localB->fcn2 /= localB->Sum_e;

        /* Product: '<S26>/Product3' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S8>/Unary Minus2'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          -rtu_SensorsOut_q_eci2b[3] / localB->Product1_lc;

        /* Sum: '<S46>/Sum' incorporates:
         *  Product: '<S46>/Product'
         *  Product: '<S46>/Product1'
         *  Product: '<S46>/Product2'
         *  Product: '<S46>/Product3'
         */
        localB->Product1_g = ((localB->Merge_j * localB->Product2_el -
          localB->Product3_e1 * localB->Product2_ev) + localB->Product2_e *
                              localB->jxi_i) +
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->fcn2;

        /* Sum: '<S44>/Sum' incorporates:
         *  Product: '<S44>/Product'
         *  Product: '<S44>/Product1'
         *  Product: '<S44>/Product2'
         *  Product: '<S44>/Product3'
         */
        localB->Sum_m = ((localB->Merge_j * localB->jxi_i - localB->Product3_e1 *
                          localB->fcn2) - localB->Product2_e *
                         localB->Product2_el) -
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Product2_ev;

        /* Sum: '<S45>/Sum' incorporates:
         *  Product: '<S45>/Product'
         *  Product: '<S45>/Product1'
         *  Product: '<S45>/Product2'
         *  Product: '<S45>/Product3'
         */
        localB->Product3_e = ((localB->Merge_j * localB->fcn2 +
          localB->Product3_e1 * localB->jxi_i) + localB->Product2_e *
                              localB->Product2_ev) -
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Product2_el;

        /* Sum: '<S47>/Sum' incorporates:
         *  Product: '<S47>/Product'
         *  Product: '<S47>/Product1'
         *  Product: '<S47>/Product2'
         *  Product: '<S47>/Product3'
         */
        localB->Merge_j = ((localB->Merge_j * localB->Product2_ev +
                            localB->Product3_e1 * localB->Product2_el) -
                           localB->Product2_e * localB->fcn2) +
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->jxi_i;

        /* Sqrt: '<S126>/sqrt' incorporates:
         *  Product: '<S127>/Product'
         *  Product: '<S127>/Product1'
         *  Product: '<S127>/Product2'
         *  Product: '<S127>/Product3'
         *  Sum: '<S127>/Sum'
         *  UnaryMinus: '<S24>/Unary Minus'
         *  UnaryMinus: '<S24>/Unary Minus1'
         *  UnaryMinus: '<S24>/Unary Minus2'
         */
        localB->jxi_i = sqrt(((localB->Sum_m * localB->Sum_m +
          -localB->Product3_e * -localB->Product3_e) + -localB->Product1_g *
                              -localB->Product1_g) + -localB->Merge_j *
                             -localB->Merge_j);

        /* Product: '<S122>/Product2' incorporates:
         *  UnaryMinus: '<S24>/Unary Minus1'
         */
        localB->Sum_e = -localB->Product1_g / localB->jxi_i;

        /* Product: '<S122>/Product3' incorporates:
         *  UnaryMinus: '<S24>/Unary Minus2'
         */
        localB->Product2_el = -localB->Merge_j / localB->jxi_i;

        /* Product: '<S122>/Product1' incorporates:
         *  UnaryMinus: '<S24>/Unary Minus'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = -localB->Product3_e /
          localB->jxi_i;

        /* Product: '<S122>/Product' */
        localB->Sum_m /= localB->jxi_i;

        /* Product: '<S123>/Product' incorporates:
         *  Product: '<S124>/Product'
         */
        localB->Product2_e = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Sum_e;

        /* Product: '<S123>/Product7' incorporates:
         *  Product: '<S124>/Product7'
         */
        localB->jxi_i = localB->Product2_el * localB->Product2_el;

        /* Product: '<S123>/Product1' incorporates:
         *  Product: '<S124>/Product1'
         */
        localB->fcn5 = localB->Sum_m * localB->Product2_el;

        /* Product: '<S123>/Product3' incorporates:
         *  Product: '<S125>/Product'
         */
        localB->Product1_g = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Product2_el;

        /* Product: '<S123>/Product2' incorporates:
         *  Product: '<S125>/Product1'
         */
        localB->Product3_e = localB->Sum_m * localB->Sum_e;

        /* Product: '<S123>/Product6' incorporates:
         *  Product: '<S125>/Product7'
         */
        localB->Product2_o4u = localB->Sum_e * localB->Sum_e;

        /* Sum: '<S123>/Sum' incorporates:
         *  Constant: '<S123>/Constant'
         *  Constant: '<S7>/secondaryConstraint'
         *  Gain: '<S123>/Gain'
         *  Gain: '<S123>/Gain1'
         *  Gain: '<S123>/Gain2'
         *  Product: '<S123>/Product'
         *  Product: '<S123>/Product1'
         *  Product: '<S123>/Product2'
         *  Product: '<S123>/Product3'
         *  Product: '<S123>/Product4'
         *  Product: '<S123>/Product5'
         *  Product: '<S123>/Product6'
         *  Product: '<S123>/Product7'
         *  Product: '<S123>/Product8'
         *  Sum: '<S123>/Sum1'
         *  Sum: '<S123>/Sum2'
         *  Sum: '<S123>/Sum3'
         */
        localB->fcn2 = (((asbCubeSatACS_P.Constant_Value_fc -
                          localB->Product2_o4u) - localB->jxi_i) *
                        asbCubeSatACS_P.Gain2_Gain_i *
                        asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint
                        [0] + (localB->Product2_e + localB->fcn5) *
                        asbCubeSatACS_P.Gain_Gain_i *
                        asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint
                        [1]) + (localB->Product1_g - localB->Product3_e) *
          asbCubeSatACS_P.Gain1_Gain_k *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[2];

        /* Product: '<S124>/Product2' incorporates:
         *  Product: '<S125>/Product2'
         */
        localB->Merge_j = localB->Sum_m *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Product: '<S124>/Product3' incorporates:
         *  Product: '<S125>/Product3'
         */
        localB->Sum_e *= localB->Product2_el;

        /* Product: '<S124>/Product6' incorporates:
         *  Product: '<S125>/Product6'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *=
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Sum: '<S124>/Sum' incorporates:
         *  Constant: '<S124>/Constant'
         *  Constant: '<S7>/secondaryConstraint'
         *  Gain: '<S124>/Gain'
         *  Gain: '<S124>/Gain1'
         *  Gain: '<S124>/Gain2'
         *  Product: '<S124>/Product2'
         *  Product: '<S124>/Product3'
         *  Product: '<S124>/Product4'
         *  Product: '<S124>/Product5'
         *  Product: '<S124>/Product6'
         *  Product: '<S124>/Product8'
         *  Sum: '<S124>/Sum1'
         *  Sum: '<S124>/Sum2'
         *  Sum: '<S124>/Sum3'
         */
        localB->jxi_i = (((asbCubeSatACS_P.Constant_Value_je -
                           rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) -
                          localB->jxi_i) * asbCubeSatACS_P.Gain2_Gain_jw *
                         asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint
                         [1] + (localB->Product2_e - localB->fcn5) *
                         asbCubeSatACS_P.Gain_Gain_c *
                         asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint
                         [0]) + (localB->Merge_j + localB->Sum_e) *
          asbCubeSatACS_P.Gain1_Gain_c *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[2];

        /* Sum: '<S125>/Sum' incorporates:
         *  Constant: '<S125>/Constant'
         *  Constant: '<S7>/secondaryConstraint'
         *  Gain: '<S125>/Gain'
         *  Gain: '<S125>/Gain1'
         *  Gain: '<S125>/Gain2'
         *  Product: '<S125>/Product4'
         *  Product: '<S125>/Product5'
         *  Product: '<S125>/Product8'
         *  Sum: '<S125>/Sum1'
         *  Sum: '<S125>/Sum2'
         *  Sum: '<S125>/Sum3'
         */
        localB->Product2_ev = ((localB->Product1_g + localB->Product3_e) *
          asbCubeSatACS_P.Gain_Gain_bd *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[0] +
          (localB->Sum_e - localB->Merge_j) * asbCubeSatACS_P.Gain1_Gain_c4 *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[1]) +
          ((asbCubeSatACS_P.Constant_Value_k -
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) -
           localB->Product2_o4u) * asbCubeSatACS_P.Gain2_Gain_m *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryConstraint[2];

        /* DotProduct: '<S51>/Dot Product1' incorporates:
         *  DotProduct: '<S56>/Dot Product2'
         *  SignalConversion generated from: '<S51>/Dot Product1'
         */
        localB->Product2_o4u = (localB->Product1_d * localB->Product1_d +
          localB->Product3_cp * localB->Product3_cp) + localB->fcn4 *
          localB->fcn4;

        /* Product: '<S51>/Divide' incorporates:
         *  DotProduct: '<S51>/Dot Product1'
         *  DotProduct: '<S51>/Dot Product2'
         *  DotProduct: '<S51>/Dot Product3'
         *  Product: '<S51>/Divide1'
         *  SignalConversion generated from: '<S51>/Dot Product1'
         *  SignalConversion generated from: '<S51>/Dot Product2'
         *  Sqrt: '<S51>/Sqrt3'
         */
        localB->Product2_el = ((localB->Product1_d * localB->fcn2 +
          localB->Product3_cp * localB->jxi_i) + localB->fcn4 *
          localB->Product2_ev) / sqrt(((localB->fcn2 * localB->fcn2 +
          localB->jxi_i * localB->jxi_i) + localB->Product2_ev *
          localB->Product2_ev) * localB->Product2_o4u);

        /* Abs: '<S51>/Abs' incorporates:
         *  Bias: '<S51>/Bias'
         */
        localB->Sum_e = fabs(localB->Product2_el + asbCubeSatACS_P.Bias_Bias_o);

        /* Abs: '<S51>/Abs1' incorporates:
         *  Bias: '<S51>/Bias1'
         */
        localB->Product2_el = fabs(localB->Product2_el +
          asbCubeSatACS_P.Bias1_Bias_k);

        /* If: '<S51>/If' */
        if (localB->Sum_e < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
           *  ActionPort: '<S63>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem_i);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
        } else if (localB->Product2_el < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S64>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem1_c);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S65>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem2_n);

          /* End of Outputs for SubSystem: '<S51>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S53>/Compare' incorporates:
         *  Constant: '<S53>/Constant'
         */
        rtb_Compare_h = (localB->Product2_el != asbCubeSatACS_P.Constant_Value_b);

        /* DotProduct: '<S56>/Dot Product3' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  DotProduct: '<S77>/Dot Product3'
         *  SignalConversion generated from: '<S51>/Dot Product1'
         */
        rtb_Product2_el_tmp =
          (asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
           localB->Product1_d +
           asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
           localB->Product3_cp) +
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
          localB->fcn4;

        /* Sqrt: '<S56>/Sqrt3' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  DotProduct: '<S56>/Dot Product1'
         *  Product: '<S56>/Divide1'
         *  Sqrt: '<S77>/Sqrt3'
         */
        localB->Product2_o4u = sqrt
          (((asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
             asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] +
             asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
             asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1]) +
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2]) *
           localB->Product2_o4u);

        /* Sum: '<S56>/Add2' incorporates:
         *  DotProduct: '<S56>/Dot Product3'
         *  Sqrt: '<S56>/Sqrt3'
         */
        localB->Product2_el = localB->Product2_o4u + rtb_Product2_el_tmp;

        /* Product: '<S77>/Divide' */
        localB->Sum_e = rtb_Product2_el_tmp / localB->Product2_o4u;

        /* Abs: '<S77>/Abs' incorporates:
         *  Bias: '<S77>/Bias'
         */
        localB->Sum_m = fabs(localB->Sum_e + asbCubeSatACS_P.Bias_Bias_a);

        /* Abs: '<S77>/Abs1' incorporates:
         *  Bias: '<S77>/Bias1'
         */
        localB->Sum_e = fabs(localB->Sum_e + asbCubeSatACS_P.Bias1_Bias_j);

        /* If: '<S77>/If' */
        if (localB->Sum_m < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
           *  ActionPort: '<S83>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Sum_e,
            &asbCubeSatACS_P.IfActionSubsystem_n);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
        } else if (localB->Sum_e < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S84>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Sum_e,
            &asbCubeSatACS_P.IfActionSubsystem1_g);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S85>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Sum_e,
            &asbCubeSatACS_P.IfActionSubsystem2_i);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem2' */
        }

        /* Switch: '<S56>/is 180deg Rot' incorporates:
         *  Constant: '<S78>/Constant'
         *  Constant: '<S7>/primaryAlignment'
         *  Product: '<S81>/i x j'
         *  Product: '<S81>/j x k'
         *  Product: '<S81>/k x i'
         *  Product: '<S82>/i x k'
         *  Product: '<S82>/j x i'
         *  Product: '<S82>/k x j'
         *  Product: '<S87>/i x j'
         *  Product: '<S87>/j x k'
         *  Product: '<S87>/k x i'
         *  Product: '<S88>/i x k'
         *  Product: '<S88>/j x i'
         *  Product: '<S88>/k x j'
         *  RelationalOperator: '<S78>/Compare'
         *  RelationalOperator: '<S79>/x>z'
         *  Sum: '<S76>/Sum'
         *  Sum: '<S86>/Sum'
         *  Switch: '<S79>/Switch3'
         */
        if (localB->Sum_e != asbCubeSatACS_P.CompareToConstant_const) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
            localB->fcn4 -
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
            localB->Product3_cp;
          localB->Product2_o4u =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] *
            localB->Product1_d -
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            localB->fcn4;
          localB->Merge_j =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            localB->Product3_cp -
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
            localB->Product1_d;
        } else {
          if (asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] >
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2])
          {
            /* Switch: '<S79>/Switch3' incorporates:
             *  Constant: '<S79>/Constant'
             *  Constant: '<S7>/primaryAlignment'
             *  Gain: '<S79>/Gain'
             */
            localB->Product3_e = asbCubeSatACS_P.Gain_Gain *
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1];
            localB->Product1_g =
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0];
            localB->Product2_e = asbCubeSatACS_P.Constant_Value;
          } else {
            /* Switch: '<S79>/Switch3' incorporates:
             *  Constant: '<S79>/Constant1'
             *  Constant: '<S7>/primaryAlignment'
             *  Gain: '<S79>/Gain2'
             */
            localB->Product3_e = asbCubeSatACS_P.Constant1_Value_i;
            localB->Product1_g = asbCubeSatACS_P.Gain2_Gain *
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];
            localB->Product2_e =
              asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1];
          }

          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
            localB->Product2_e - localB->Product1_g *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];
          localB->Product2_o4u = localB->Product3_e *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] -
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            localB->Product2_e;
          localB->Merge_j =
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
            localB->Product1_g - localB->Product3_e *
            asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1];
        }

        /* Sqrt: '<S89>/sqrt' incorporates:
         *  Product: '<S90>/Product'
         *  Product: '<S90>/Product1'
         *  Product: '<S90>/Product2'
         *  Product: '<S90>/Product3'
         *  Sum: '<S90>/Sum'
         */
        localB->Sum_e = sqrt(((localB->Product2_el * localB->Product2_el +
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) +
                              localB->Product2_o4u * localB->Product2_o4u) +
                             localB->Merge_j * localB->Merge_j);

        /* Product: '<S80>/Product' */
        localB->Product1_lc = localB->Product2_el / localB->Sum_e;

        /* Product: '<S80>/Product2' */
        rtb_Sum_dw = localB->Product2_o4u / localB->Sum_e;

        /* Product: '<S80>/Product1' */
        rtb_Product1_pv = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 /
          localB->Sum_e;

        /* Product: '<S80>/Product3' */
        rtb_Product3_ar = localB->Merge_j / localB->Sum_e;

        /* Sum: '<S106>/Sum' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  Constant: '<S7>/secondaryAlignment'
         *  Product: '<S108>/i x j'
         *  Product: '<S108>/j x k'
         *  Product: '<S108>/k x i'
         *  Product: '<S109>/i x k'
         *  Product: '<S109>/j x i'
         *  Product: '<S109>/k x j'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[1] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];
        localB->Product2_o4u =
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[2];
        localB->Merge_j =
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[1] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_secondaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1];

        /* Sum: '<S107>/Sum' incorporates:
         *  Constant: '<S7>/primaryAlignment'
         *  Product: '<S110>/i x j'
         *  Product: '<S110>/j x k'
         *  Product: '<S110>/k x i'
         *  Product: '<S111>/i x k'
         *  Product: '<S111>/j x i'
         *  Product: '<S111>/k x j'
         */
        localB->Product3_e = localB->Product2_o4u *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] *
          localB->Merge_j;
        localB->Product1_g =
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
          localB->Merge_j - rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[2];
        localB->Product2_e = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[1] -
          asbCubeSatACS_P.AttitudeProfileNadirPointing_primaryAlignment[0] *
          localB->Product2_o4u;

        /* Sum: '<S112>/Sum' incorporates:
         *  Product: '<S114>/i x j'
         *  Product: '<S114>/j x k'
         *  Product: '<S114>/k x i'
         *  Product: '<S115>/i x k'
         *  Product: '<S115>/j x i'
         *  Product: '<S115>/k x j'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = localB->Product3_cp *
          localB->Product2_ev - localB->fcn4 * localB->jxi_i;
        localB->Product2_o4u = localB->fcn4 * localB->fcn2 - localB->Product1_d *
          localB->Product2_ev;
        localB->Merge_j = localB->Product1_d * localB->jxi_i -
          localB->Product3_cp * localB->fcn2;

        /* Sum: '<S113>/Sum' incorporates:
         *  Product: '<S116>/i x j'
         *  Product: '<S116>/j x k'
         *  Product: '<S116>/k x i'
         *  Product: '<S117>/i x k'
         *  Product: '<S117>/j x i'
         *  Product: '<S117>/k x j'
         */
        localB->Product2_el = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->Product3_cp;
        localB->fcn2 = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
          localB->fcn4;
        localB->Sum = localB->Product2_o4u * localB->Product1_d;
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = localB->Product2_o4u
          * localB->fcn4 - localB->Merge_j * localB->Product3_cp;
        localB->Product2_o4u = localB->Merge_j * localB->Product1_d -
          localB->fcn2;
        localB->Merge_j = localB->Product2_el - localB->Sum;

        /* Sqrt: '<S74>/sqrt' incorporates:
         *  Product: '<S75>/Product'
         *  Product: '<S75>/Product1'
         *  Product: '<S75>/Product2'
         *  Product: '<S75>/Product3'
         *  Sum: '<S75>/Sum'
         */
        localB->Product2_el = sqrt(((localB->Product1_lc * localB->Product1_lc +
          rtb_Product1_pv * rtb_Product1_pv) + rtb_Sum_dw * rtb_Sum_dw) +
          rtb_Product3_ar * rtb_Product3_ar);

        /* Product: '<S70>/Product2' */
        localB->jxi_i = rtb_Sum_dw / localB->Product2_el;

        /* Product: '<S70>/Product3' */
        localB->fcn2 = rtb_Product3_ar / localB->Product2_el;

        /* Product: '<S70>/Product1' */
        localB->Sum_e = rtb_Product1_pv / localB->Product2_el;

        /* Product: '<S70>/Product' */
        localB->Product2_el = localB->Product1_lc / localB->Product2_el;

        /* Product: '<S71>/Product3' incorporates:
         *  Product: '<S73>/Product'
         */
        localB->Sum = localB->Sum_e * localB->fcn2;

        /* Product: '<S71>/Product7' incorporates:
         *  Product: '<S72>/Product7'
         */
        localB->Product3_cp = localB->fcn2 * localB->fcn2;

        /* Product: '<S71>/Product' incorporates:
         *  Product: '<S72>/Product'
         */
        localB->Product3_e1 = localB->Sum_e * localB->jxi_i;

        /* Sum: '<S71>/Sum' incorporates:
         *  Constant: '<S71>/Constant'
         *  Gain: '<S71>/Gain'
         *  Gain: '<S71>/Gain1'
         *  Gain: '<S71>/Gain2'
         *  Product: '<S71>/Product'
         *  Product: '<S71>/Product1'
         *  Product: '<S71>/Product2'
         *  Product: '<S71>/Product3'
         *  Product: '<S71>/Product4'
         *  Product: '<S71>/Product5'
         *  Product: '<S71>/Product6'
         *  Product: '<S71>/Product7'
         *  Product: '<S71>/Product8'
         *  Sum: '<S71>/Sum1'
         *  Sum: '<S71>/Sum2'
         *  Sum: '<S71>/Sum3'
         */
        localB->Product1_d = (((asbCubeSatACS_P.Constant_Value_h - localB->jxi_i
          * localB->jxi_i) - localB->Product3_cp) * asbCubeSatACS_P.Gain2_Gain_a
                              * rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
                              + (localB->Product2_el * localB->fcn2 +
          localB->Product3_e1) * asbCubeSatACS_P.Gain_Gain_p *
                              localB->Product2_o4u) + (localB->Sum -
          localB->Product2_el * localB->jxi_i) * asbCubeSatACS_P.Gain1_Gain_m *
          localB->Merge_j;

        /* Product: '<S72>/Product2' incorporates:
         *  Product: '<S73>/Product2'
         */
        localB->fcn5 = localB->Product2_el * localB->Sum_e;

        /* Product: '<S72>/Product6' incorporates:
         *  Product: '<S73>/Product6'
         */
        localB->Sum_e *= localB->Sum_e;

        /* Sum: '<S72>/Sum' incorporates:
         *  Constant: '<S72>/Constant'
         *  Gain: '<S72>/Gain'
         *  Gain: '<S72>/Gain1'
         *  Gain: '<S72>/Gain2'
         *  Product: '<S72>/Product1'
         *  Product: '<S72>/Product2'
         *  Product: '<S72>/Product3'
         *  Product: '<S72>/Product4'
         *  Product: '<S72>/Product5'
         *  Product: '<S72>/Product6'
         *  Product: '<S72>/Product8'
         *  Sum: '<S72>/Sum1'
         *  Sum: '<S72>/Sum2'
         *  Sum: '<S72>/Sum3'
         */
        localB->Product3_cp = (((asbCubeSatACS_P.Constant_Value_lw -
          localB->Sum_e) - localB->Product3_cp) * asbCubeSatACS_P.Gain2_Gain_k *
          localB->Product2_o4u + (localB->Product3_e1 - localB->Product2_el *
          localB->fcn2) * asbCubeSatACS_P.Gain_Gain_ik *
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) + (localB->jxi_i *
          localB->fcn2 + localB->fcn5) * asbCubeSatACS_P.Gain1_Gain_ch *
          localB->Merge_j;

        /* Sum: '<S73>/Sum' incorporates:
         *  Constant: '<S73>/Constant'
         *  Gain: '<S73>/Gain'
         *  Gain: '<S73>/Gain1'
         *  Gain: '<S73>/Gain2'
         *  Product: '<S73>/Product1'
         *  Product: '<S73>/Product3'
         *  Product: '<S73>/Product4'
         *  Product: '<S73>/Product5'
         *  Product: '<S73>/Product7'
         *  Product: '<S73>/Product8'
         *  Sum: '<S73>/Sum1'
         *  Sum: '<S73>/Sum2'
         *  Sum: '<S73>/Sum3'
         */
        localB->Merge_j = ((localB->Product2_el * localB->jxi_i + localB->Sum) *
                           asbCubeSatACS_P.Gain_Gain_j *
                           rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
                           (localB->jxi_i * localB->fcn2 - localB->fcn5) *
                           asbCubeSatACS_P.Gain1_Gain_o * localB->Product2_o4u)
          + ((asbCubeSatACS_P.Constant_Value_iu - localB->Sum_e) - localB->jxi_i
             * localB->jxi_i) * asbCubeSatACS_P.Gain2_Gain_jz * localB->Merge_j;

        /* DotProduct: '<S92>/Dot Product2' incorporates:
         *  DotProduct: '<S57>/Dot Product2'
         *  SignalConversion generated from: '<S92>/Dot Product2'
         *  Switch: '<S12>/Switch'
         */
        localB->Product2_o4u = localB->Merge_j * localB->Merge_j;

        /* DotProduct: '<S92>/Dot Product1' incorporates:
         *  DotProduct: '<S57>/Dot Product1'
         *  DotProduct: '<S92>/Dot Product3'
         *  Switch: '<S12>/Switch'
         */
        rtb_Product2_el_tmp = (localB->Product3_e * localB->Product3_e +
          localB->Product1_g * localB->Product1_g) + localB->Product2_e *
          localB->Product2_e;

        /* DotProduct: '<S92>/Dot Product3' incorporates:
         *  DotProduct: '<S57>/Dot Product3'
         *  SignalConversion generated from: '<S92>/Dot Product2'
         *  Switch: '<S12>/Switch'
         */
        localB->fcn2 = localB->Product2_e * localB->Merge_j;

        /* Product: '<S92>/Divide' incorporates:
         *  DotProduct: '<S92>/Dot Product1'
         *  DotProduct: '<S92>/Dot Product2'
         *  DotProduct: '<S92>/Dot Product3'
         *  Product: '<S92>/Divide1'
         *  SignalConversion generated from: '<S92>/Dot Product2'
         *  Sqrt: '<S92>/Sqrt3'
         */
        localB->Product2_el = ((localB->Product3_e * localB->Product1_d +
          localB->Product1_g * localB->Product3_cp) + localB->fcn2) / sqrt
          (((localB->Product1_d * localB->Product1_d + localB->Product3_cp *
             localB->Product3_cp) + localB->Product2_o4u) * rtb_Product2_el_tmp);

        /* If: '<S92>/If' incorporates:
         *  Abs: '<S92>/Abs'
         *  Abs: '<S92>/Abs1'
         *  Bias: '<S92>/Bias'
         *  Bias: '<S92>/Bias1'
         */
        if (fabs(localB->Product2_el + asbCubeSatACS_P.Bias_Bias_i) < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
           *  ActionPort: '<S98>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem
            (&rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0,
             &asbCubeSatACS_P.IfActionSubsystem_a);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem' */
        } else if (fabs(localB->Product2_el + asbCubeSatACS_P.Bias1_Bias_o) <
                   1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S99>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem
            (&rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0,
             &asbCubeSatACS_P.IfActionSubsystem1_m);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S92>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S100>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem
            (&rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0,
             &asbCubeSatACS_P.IfActionSubsystem2_i2);

          /* End of Outputs for SubSystem: '<S92>/If Action Subsystem2' */
        }

        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S93>/Constant'
         *  Logic: '<S12>/OR'
         *  Product: '<S66>/Product'
         *  Product: '<S66>/Product1'
         *  Product: '<S66>/Product2'
         *  Product: '<S66>/Product3'
         *  Product: '<S67>/Product'
         *  Product: '<S67>/Product1'
         *  Product: '<S67>/Product2'
         *  Product: '<S67>/Product3'
         *  Product: '<S68>/Product'
         *  Product: '<S68>/Product1'
         *  Product: '<S68>/Product2'
         *  Product: '<S68>/Product3'
         *  Product: '<S69>/Product'
         *  Product: '<S69>/Product1'
         *  Product: '<S69>/Product2'
         *  Product: '<S69>/Product3'
         *  RelationalOperator: '<S93>/Compare'
         *  RelationalOperator: '<S94>/x>z'
         *  Sum: '<S66>/Sum'
         *  Sum: '<S67>/Sum'
         *  Sum: '<S68>/Sum'
         *  Sum: '<S69>/Sum'
         *  Switch: '<S57>/is 180deg Rot'
         *  Switch: '<S94>/Switch3'
         */
        if (rtb_Compare_jn || rtb_Compare_h) {
          localB->cmd_q_b2tgt[0] = localB->Product1_lc;
          localB->cmd_q_b2tgt[1] = rtb_Product1_pv;
          localB->cmd_q_b2tgt[2] = rtb_Sum_dw;
          localB->cmd_q_b2tgt[3] = rtb_Product3_ar;
        } else {
          if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 !=
              asbCubeSatACS_P.CompareToConstant_const_i) {
            /* Switch: '<S57>/is 180deg Rot' incorporates:
             *  Product: '<S96>/i x j'
             *  Product: '<S96>/j x k'
             *  Product: '<S96>/k x i'
             *  Product: '<S97>/i x k'
             *  Product: '<S97>/j x i'
             *  Product: '<S97>/k x j'
             *  Sum: '<S91>/Sum'
             */
            localB->Product3_e1 = localB->Product1_g * localB->Merge_j -
              localB->Product2_e * localB->Product3_cp;
            localB->jxi_i = localB->Product2_e * localB->Product1_d -
              localB->Product3_e * localB->Merge_j;
            localB->Sum = localB->Product3_e * localB->Product3_cp -
              localB->Product1_g * localB->Product1_d;
          } else {
            if (localB->Product3_e > localB->Product2_e) {
              /* Switch: '<S94>/Switch3' incorporates:
               *  Constant: '<S94>/Constant'
               *  Gain: '<S94>/Gain'
               *  Switch: '<S57>/is 180deg Rot'
               */
              localB->Sum = asbCubeSatACS_P.Gain_Gain_l * localB->Product1_g;
              localB->fcn5 = localB->Product3_e;
              localB->Sum_m = asbCubeSatACS_P.Constant_Value_i;
            } else {
              /* Switch: '<S94>/Switch3' incorporates:
               *  Constant: '<S94>/Constant1'
               *  Gain: '<S94>/Gain2'
               *  Switch: '<S57>/is 180deg Rot'
               */
              localB->Sum = asbCubeSatACS_P.Constant1_Value_n;
              localB->fcn5 = asbCubeSatACS_P.Gain2_Gain_j * localB->Product2_e;
              localB->Sum_m = localB->Product1_g;
            }

            /* Switch: '<S57>/is 180deg Rot' incorporates:
             *  Product: '<S102>/i x j'
             *  Product: '<S102>/j x k'
             *  Product: '<S102>/k x i'
             *  Product: '<S103>/i x k'
             *  Product: '<S103>/j x i'
             *  Product: '<S103>/k x j'
             *  Sum: '<S101>/Sum'
             */
            localB->Product3_e1 = localB->Product1_g * localB->Sum_m -
              localB->fcn5 * localB->Product2_e;
            localB->jxi_i = localB->Sum * localB->Product2_e -
              localB->Product3_e * localB->Sum_m;
            localB->Sum = localB->Product3_e * localB->fcn5 - localB->Sum *
              localB->Product1_g;
          }

          /* Sum: '<S57>/Add2' incorporates:
           *  DotProduct: '<S57>/Dot Product2'
           *  DotProduct: '<S57>/Dot Product3'
           *  Product: '<S57>/Divide1'
           *  RelationalOperator: '<S94>/x>z'
           *  SignalConversion generated from: '<S92>/Dot Product2'
           *  Sqrt: '<S57>/Sqrt3'
           *  Switch: '<S57>/is 180deg Rot'
           *  Switch: '<S94>/Switch3'
           */
          localB->Merge_j = sqrt(((localB->Product1_d * localB->Product1_d +
            localB->Product3_cp * localB->Product3_cp) + localB->Product2_o4u) *
            rtb_Product2_el_tmp) + ((localB->Product3_e * localB->Product1_d +
            localB->Product1_g * localB->Product3_cp) + localB->fcn2);

          /* Sqrt: '<S104>/sqrt' incorporates:
           *  Product: '<S105>/Product'
           *  Product: '<S105>/Product1'
           *  Product: '<S105>/Product2'
           *  Product: '<S105>/Product3'
           *  Sum: '<S105>/Sum'
           */
          localB->Product3_e = sqrt(((localB->Merge_j * localB->Merge_j +
            localB->Product3_e1 * localB->Product3_e1) + localB->jxi_i *
            localB->jxi_i) + localB->Sum * localB->Sum);

          /* Product: '<S95>/Product3' */
          localB->Product1_g = localB->Sum / localB->Product3_e;

          /* Product: '<S95>/Product2' */
          localB->Product2_e = localB->jxi_i / localB->Product3_e;

          /* Product: '<S95>/Product1' */
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            localB->Product3_e1 / localB->Product3_e;

          /* Product: '<S95>/Product' */
          localB->Merge_j /= localB->Product3_e;
          localB->cmd_q_b2tgt[0] = ((localB->Product1_lc * localB->Merge_j -
            rtb_Product1_pv * rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0)
            - rtb_Sum_dw * localB->Product2_e) - rtb_Product3_ar *
            localB->Product1_g;
          localB->cmd_q_b2tgt[1] = ((localB->Product1_lc *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 + rtb_Product1_pv *
            localB->Merge_j) + rtb_Sum_dw * localB->Product1_g) -
            rtb_Product3_ar * localB->Product2_e;
          localB->cmd_q_b2tgt[2] = ((localB->Product1_lc * localB->Product2_e -
            rtb_Product1_pv * localB->Product1_g) + rtb_Sum_dw * localB->Merge_j)
            + rtb_Product3_ar *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
          localB->cmd_q_b2tgt[3] = ((localB->Product1_lc * localB->Product1_g +
            rtb_Product1_pv * localB->Product2_e) - rtb_Sum_dw *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) + rtb_Product3_ar
            * localB->Merge_j;
        }

        /* Sqrt: '<S134>/sqrt' incorporates:
         *  Product: '<S135>/Product'
         *  Product: '<S135>/Product1'
         *  Product: '<S135>/Product2'
         *  Product: '<S135>/Product3'
         *  Sum: '<S135>/Sum'
         */
        localB->Product2_el = sqrt(((localB->cmd_q_b2tgt[0] *
          localB->cmd_q_b2tgt[0] + localB->cmd_q_b2tgt[1] * localB->cmd_q_b2tgt
          [1]) + localB->cmd_q_b2tgt[2] * localB->cmd_q_b2tgt[2]) +
          localB->cmd_q_b2tgt[3] * localB->cmd_q_b2tgt[3]);

        /* Product: '<S129>/Product' */
        localB->jxi_i = localB->cmd_q_b2tgt[0] / localB->Product2_el;

        /* Product: '<S129>/Product1' */
        localB->fcn2 = localB->cmd_q_b2tgt[1] / localB->Product2_el;

        /* Product: '<S129>/Product2' */
        localB->Product2_ev = localB->cmd_q_b2tgt[2] / localB->Product2_el;

        /* Product: '<S129>/Product3' */
        localB->Product2_el = localB->cmd_q_b2tgt[3] / localB->Product2_el;

        /* Fcn: '<S9>/fcn3' */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = (localB->fcn2 *
          localB->Product2_el + localB->jxi_i * localB->Product2_ev) * 2.0;

        /* Fcn: '<S9>/fcn2' incorporates:
         *  Fcn: '<S9>/fcn5'
         */
        localB->Merge_j = localB->jxi_i * localB->jxi_i;
        localB->Product2_e = localB->fcn2 * localB->fcn2;
        localB->Product1_d = localB->Product2_ev * localB->Product2_ev;
        localB->Product3_cp = localB->Product2_el * localB->Product2_el;

        /* Trigonometry: '<S128>/Trigonometric Function1' incorporates:
         *  Fcn: '<S9>/fcn1'
         *  Fcn: '<S9>/fcn2'
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[0] = rt_atan2d_snf((localB->Product2_ev *
          localB->Product2_el - localB->jxi_i * localB->fcn2) * -2.0,
          ((localB->Merge_j - localB->Product2_e) - localB->Product1_d) +
          localB->Product3_cp);

        /* Trigonometry: '<S128>/Trigonometric Function3' incorporates:
         *  Fcn: '<S9>/fcn4'
         *  Fcn: '<S9>/fcn5'
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[2] = rt_atan2d_snf((localB->fcn2 *
          localB->Product2_ev - localB->jxi_i * localB->Product2_el) * -2.0,
          ((localB->Merge_j + localB->Product2_e) - localB->Product1_d) -
          localB->Product3_cp);

        /* If: '<S130>/If' incorporates:
         *  Constant: '<S131>/Constant'
         *  Constant: '<S132>/Constant'
         */
        if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 > 1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.Constant_Value_n;
        } else if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 < -1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.Constant_Value_nu;
        }

        /* Trigonometry: '<S128>/trigFcn' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 > 1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = 1.0;
        } else if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 < -1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = -1.0;
        }

        localB->PointingCmd[1] = asin
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);
      } else if (*rtu_AttitudeMode == 2.0) {
        localDW->is_On = asbCubeSatACS_IN_Sun;

        /* Product: '<S156>/Divide' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  Constant: '<S136>/secondaryAlignment'
         *  DotProduct: '<S156>/Dot Product1'
         *  DotProduct: '<S156>/Dot Product2'
         *  DotProduct: '<S156>/Dot Product3'
         *  Product: '<S156>/Divide1'
         *  Sqrt: '<S156>/Sqrt3'
         */
        localB->Product2_o4u =
          ((asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[0] +
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
            asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[1]) +
           asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
           asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[2]) /
          sqrt(((asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
                 asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0]
                 + asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1]
                 * asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1])
                + asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2]
                * asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2])
               * ((asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[
                   0] *
                   asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[
                   0] +
                   asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[
                   1] *
                   asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[
                   1]) +
                  asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment
                  [2] *
                  asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment
                  [2]));

        /* Abs: '<S156>/Abs' incorporates:
         *  Bias: '<S156>/Bias'
         */
        localB->jxi_i = fabs(localB->Product2_o4u + asbCubeSatACS_P.Bias_Bias_p);

        /* If: '<S156>/If' incorporates:
         *  Abs: '<S156>/Abs1'
         *  Bias: '<S156>/Bias1'
         */
        if (localB->jxi_i < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
           *  ActionPort: '<S166>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->jxi_i,
            &asbCubeSatACS_P.IfActionSubsystem_h);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem' */
        } else if (fabs(localB->Product2_o4u + asbCubeSatACS_P.Bias1_Bias_e) <
                   1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S167>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->jxi_i,
            &asbCubeSatACS_P.IfActionSubsystem1_h);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S168>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->jxi_i,
            &asbCubeSatACS_P.IfActionSubsystem2_iz);

          /* End of Outputs for SubSystem: '<S156>/If Action Subsystem2' */
        }

        /* Sqrt: '<S154>/sqrt' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Product: '<S155>/Product'
         *  Product: '<S155>/Product1'
         *  Product: '<S155>/Product2'
         *  Product: '<S155>/Product3'
         *  Sum: '<S155>/Sum'
         *  UnaryMinus: '<S137>/Unary Minus'
         *  UnaryMinus: '<S137>/Unary Minus1'
         *  UnaryMinus: '<S137>/Unary Minus2'
         */
        localB->Product3_cp = sqrt(((rtu_SensorsOut_q_eci2b[0] *
          rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
          -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
          -rtu_SensorsOut_q_eci2b[2]) + -rtu_SensorsOut_q_eci2b[3] *
          -rtu_SensorsOut_q_eci2b[3]);

        /* Product: '<S153>/Product1' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S137>/Unary Minus'
         */
        localB->Product1_g = -rtu_SensorsOut_q_eci2b[1] / localB->Product3_cp;

        /* Product: '<S153>/Product' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         */
        localB->Merge_j = rtu_SensorsOut_q_eci2b[0] / localB->Product3_cp;

        /* Product: '<S153>/Product2' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S137>/Unary Minus1'
         */
        localB->Product2_e = -rtu_SensorsOut_q_eci2b[2] / localB->Product3_cp;

        /* Product: '<S153>/Product3' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  UnaryMinus: '<S137>/Unary Minus2'
         */
        localB->Product3_e = -rtu_SensorsOut_q_eci2b[3] / localB->Product3_cp;

        /* Sqrt: '<S150>/sqrt' incorporates:
         *  Product: '<S151>/Product'
         *  Product: '<S151>/Product1'
         *  Product: '<S151>/Product2'
         *  Product: '<S151>/Product3'
         *  Sqrt: '<S232>/sqrt'
         *  Sum: '<S151>/Sum'
         *  UnaryMinus: '<S152>/Unary Minus'
         *  UnaryMinus: '<S152>/Unary Minus1'
         *  UnaryMinus: '<S152>/Unary Minus2'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = sqrt
          (((localB->Merge_j * localB->Merge_j + -localB->Product1_g *
             -localB->Product1_g) + -localB->Product2_e * -localB->Product2_e) +
           -localB->Product3_e * -localB->Product3_e);

        /* Product: '<S146>/Product1' incorporates:
         *  Product: '<S228>/Product1'
         *  Sqrt: '<S150>/sqrt'
         *  UnaryMinus: '<S152>/Unary Minus'
         */
        localB->Product1_g = -localB->Product1_g /
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Product: '<S146>/Product2' incorporates:
         *  Product: '<S228>/Product2'
         *  Sqrt: '<S150>/sqrt'
         *  UnaryMinus: '<S152>/Unary Minus1'
         */
        localB->Product2_e = -localB->Product2_e /
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Product: '<S146>/Product' incorporates:
         *  Sqrt: '<S150>/sqrt'
         */
        localB->Product2_el = localB->Merge_j /
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Product: '<S146>/Product3' incorporates:
         *  Product: '<S228>/Product3'
         *  Sqrt: '<S150>/sqrt'
         *  UnaryMinus: '<S152>/Unary Minus2'
         */
        localB->Product3_e = -localB->Product3_e /
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Product: '<S147>/Product7' incorporates:
         *  Product: '<S146>/Product3'
         *  Product: '<S229>/Product7'
         *  Product: '<S230>/Product7'
         */
        localB->Product1_lc = localB->Product3_e * localB->Product3_e;

        /* Product: '<S147>/Product' incorporates:
         *  Product: '<S146>/Product1'
         *  Product: '<S146>/Product2'
         *  Product: '<S229>/Product'
         *  Product: '<S230>/Product'
         */
        localB->Product3_cp = localB->Product1_g * localB->Product2_e;

        /* Product: '<S147>/Product1' incorporates:
         *  Product: '<S146>/Product3'
         *  Product: '<S148>/Product1'
         */
        localB->Product2_o4u = localB->Product2_el * localB->Product3_e;

        /* Product: '<S147>/Product3' incorporates:
         *  Product: '<S146>/Product1'
         *  Product: '<S146>/Product3'
         *  Product: '<S149>/Product'
         *  Product: '<S229>/Product3'
         *  Product: '<S231>/Product'
         */
        localB->fcn2 = localB->Product1_g * localB->Product3_e;

        /* Product: '<S147>/Product2' incorporates:
         *  Product: '<S146>/Product2'
         *  Product: '<S149>/Product1'
         */
        localB->Sum_e = localB->Product2_el * localB->Product2_e;

        /* Product: '<S147>/Product6' incorporates:
         *  Product: '<S146>/Product2'
         *  Product: '<S149>/Product7'
         *  Product: '<S229>/Product6'
         *  Product: '<S231>/Product7'
         */
        localB->Product1_d = localB->Product2_e * localB->Product2_e;

        /* Sum: '<S147>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S147>/Constant'
         *  Gain: '<S147>/Gain'
         *  Gain: '<S147>/Gain1'
         *  Gain: '<S147>/Gain2'
         *  Product: '<S147>/Product'
         *  Product: '<S147>/Product1'
         *  Product: '<S147>/Product2'
         *  Product: '<S147>/Product3'
         *  Product: '<S147>/Product4'
         *  Product: '<S147>/Product5'
         *  Product: '<S147>/Product6'
         *  Product: '<S147>/Product7'
         *  Product: '<S147>/Product8'
         *  Sum: '<S147>/Sum1'
         *  Sum: '<S147>/Sum2'
         *  Sum: '<S147>/Sum3'
         */
        localB->Sum = (((asbCubeSatACS_P.Constant_Value_iui - localB->Product1_d)
                        - localB->Product1_lc) * asbCubeSatACS_P.Gain2_Gain_bq *
                       rtu_Environment_x_sun_eci[0] + (localB->Product3_cp +
          localB->Product2_o4u) * asbCubeSatACS_P.Gain_Gain_c4 *
                       rtu_Environment_x_sun_eci[1]) + (localB->fcn2 -
          localB->Sum_e) * asbCubeSatACS_P.Gain1_Gain_mx *
          rtu_Environment_x_sun_eci[2];

        /* Product: '<S148>/Product3' incorporates:
         *  Product: '<S146>/Product2'
         *  Product: '<S146>/Product3'
         *  Product: '<S149>/Product3'
         *  Product: '<S230>/Product3'
         *  Product: '<S231>/Product3'
         */
        rtb_Sum_dw = localB->Product2_e * localB->Product3_e;

        /* Product: '<S148>/Product2' incorporates:
         *  Product: '<S146>/Product1'
         *  Product: '<S149>/Product2'
         */
        localB->fcn5 = localB->Product2_el * localB->Product1_g;

        /* Product: '<S148>/Product6' incorporates:
         *  Product: '<S146>/Product1'
         *  Product: '<S149>/Product6'
         *  Product: '<S230>/Product6'
         *  Product: '<S231>/Product6'
         */
        localB->Product2_el = localB->Product1_g * localB->Product1_g;

        /* Sum: '<S148>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S148>/Constant'
         *  Gain: '<S148>/Gain'
         *  Gain: '<S148>/Gain1'
         *  Gain: '<S148>/Gain2'
         *  Product: '<S147>/Product'
         *  Product: '<S147>/Product7'
         *  Product: '<S148>/Product2'
         *  Product: '<S148>/Product3'
         *  Product: '<S148>/Product4'
         *  Product: '<S148>/Product5'
         *  Product: '<S148>/Product6'
         *  Product: '<S148>/Product8'
         *  Sum: '<S148>/Sum1'
         *  Sum: '<S148>/Sum2'
         *  Sum: '<S148>/Sum3'
         */
        localB->Sum_m = (((asbCubeSatACS_P.Constant_Value_ji -
                           localB->Product2_el) - localB->Product1_lc) *
                         asbCubeSatACS_P.Gain2_Gain_g *
                         rtu_Environment_x_sun_eci[1] + (localB->Product3_cp -
          localB->Product2_o4u) * asbCubeSatACS_P.Gain_Gain_de *
                         rtu_Environment_x_sun_eci[0]) + (localB->fcn5 +
          rtb_Sum_dw) * asbCubeSatACS_P.Gain1_Gain_i *
          rtu_Environment_x_sun_eci[2];

        /* Sum: '<S149>/Sum' incorporates:
         *  BusCreator generated from: '<S1>/Pointing Mode Selection'
         *  Constant: '<S149>/Constant'
         *  Gain: '<S149>/Gain'
         *  Gain: '<S149>/Gain1'
         *  Gain: '<S149>/Gain2'
         *  Product: '<S149>/Product4'
         *  Product: '<S149>/Product5'
         *  Product: '<S149>/Product8'
         *  Sum: '<S149>/Sum1'
         *  Sum: '<S149>/Sum2'
         *  Sum: '<S149>/Sum3'
         */
        localB->Sum_e = ((localB->fcn2 + localB->Sum_e) *
                         asbCubeSatACS_P.Gain_Gain_pb *
                         rtu_Environment_x_sun_eci[0] + (rtb_Sum_dw -
          localB->fcn5) * asbCubeSatACS_P.Gain1_Gain_f *
                         rtu_Environment_x_sun_eci[1]) +
          ((asbCubeSatACS_P.Constant_Value_fui - localB->Product2_el) -
           localB->Product1_d) * asbCubeSatACS_P.Gain2_Gain_bs *
          rtu_Environment_x_sun_eci[2];

        /* Product: '<S228>/Product' */
        localB->Merge_j /= rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

        /* Product: '<S229>/Product1' incorporates:
         *  Product: '<S230>/Product1'
         */
        localB->fcn4 = localB->Merge_j * localB->Product3_e;

        /* Product: '<S229>/Product2' incorporates:
         *  Product: '<S231>/Product1'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = localB->Merge_j *
          localB->Product2_e;

        /* Sum: '<S229>/Sum' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         *  Constant: '<S229>/Constant'
         *  Gain: '<S229>/Gain'
         *  Gain: '<S229>/Gain1'
         *  Gain: '<S229>/Gain2'
         *  Product: '<S229>/Product1'
         *  Product: '<S229>/Product2'
         *  Product: '<S229>/Product4'
         *  Product: '<S229>/Product5'
         *  Product: '<S229>/Product8'
         *  Sum: '<S229>/Sum1'
         *  Sum: '<S229>/Sum2'
         *  Sum: '<S229>/Sum3'
         */
        localB->fcn5 = (((asbCubeSatACS_P.Constant_Value_p - localB->Product1_d)
                         - localB->Product1_lc) * asbCubeSatACS_P.Gain2_Gain_p *
                        asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint
                        [0] + (localB->Product3_cp + localB->fcn4) *
                        asbCubeSatACS_P.Gain_Gain_jl *
                        asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint
                        [1]) + (localB->fcn2 -
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) *
          asbCubeSatACS_P.Gain1_Gain_ie *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[2];

        /* Product: '<S230>/Product2' incorporates:
         *  Product: '<S231>/Product2'
         */
        localB->Product2_e = localB->Merge_j * localB->Product1_g;

        /* Sum: '<S230>/Sum' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         *  Constant: '<S230>/Constant'
         *  Gain: '<S230>/Gain'
         *  Gain: '<S230>/Gain1'
         *  Gain: '<S230>/Gain2'
         *  Product: '<S230>/Product2'
         *  Product: '<S230>/Product4'
         *  Product: '<S230>/Product5'
         *  Product: '<S230>/Product8'
         *  Sum: '<S230>/Sum1'
         *  Sum: '<S230>/Sum2'
         *  Sum: '<S230>/Sum3'
         */
        localB->Product3_e1 = (((asbCubeSatACS_P.Constant_Value_fe -
          localB->Product2_el) - localB->Product1_lc) *
          asbCubeSatACS_P.Gain2_Gain_d *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[1] +
          (localB->Product3_cp - localB->fcn4) * asbCubeSatACS_P.Gain_Gain_kx *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[0]) +
          (localB->Product2_e + rtb_Sum_dw) * asbCubeSatACS_P.Gain1_Gain_l *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[2];

        /* Sum: '<S231>/Sum' incorporates:
         *  Constant: '<S136>/secondaryConstraint'
         *  Constant: '<S231>/Constant'
         *  Gain: '<S231>/Gain'
         *  Gain: '<S231>/Gain1'
         *  Gain: '<S231>/Gain2'
         *  Product: '<S231>/Product4'
         *  Product: '<S231>/Product5'
         *  Product: '<S231>/Product8'
         *  Sum: '<S231>/Sum1'
         *  Sum: '<S231>/Sum2'
         *  Sum: '<S231>/Sum3'
         */
        localB->Product1_lc = ((localB->fcn2 +
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) *
          asbCubeSatACS_P.Gain_Gain_f *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[0] +
          (rtb_Sum_dw - localB->Product2_e) * asbCubeSatACS_P.Gain1_Gain_p *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[1]) +
          ((asbCubeSatACS_P.Constant_Value_ow - localB->Product2_el) -
           localB->Product1_d) * asbCubeSatACS_P.Gain2_Gain_c *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryConstraint[2];

        /* DotProduct: '<S157>/Dot Product1' incorporates:
         *  DotProduct: '<S162>/Dot Product2'
         *  SignalConversion generated from: '<S157>/Dot Product1'
         */
        localB->Product2_o4u = localB->Sum_e * localB->Sum_e;

        /* Product: '<S157>/Divide' incorporates:
         *  DotProduct: '<S157>/Dot Product1'
         *  DotProduct: '<S157>/Dot Product2'
         *  DotProduct: '<S157>/Dot Product3'
         *  Product: '<S157>/Divide1'
         *  SignalConversion generated from: '<S157>/Dot Product1'
         *  SignalConversion generated from: '<S157>/Dot Product2'
         *  Sqrt: '<S157>/Sqrt3'
         */
        localB->Product2_el = ((localB->Sum * localB->fcn5 + localB->Sum_m *
          localB->Product3_e1) + localB->Sum_e * localB->Product1_lc) / sqrt
          (((localB->Sum * localB->Sum + localB->Sum_m * localB->Sum_m) +
            localB->Product2_o4u) * ((localB->fcn5 * localB->fcn5 +
             localB->Product3_e1 * localB->Product3_e1) + localB->Product1_lc *
            localB->Product1_lc));

        /* Abs: '<S157>/Abs' incorporates:
         *  Bias: '<S157>/Bias'
         */
        localB->fcn4 = fabs(localB->Product2_el + asbCubeSatACS_P.Bias_Bias_g);

        /* Abs: '<S157>/Abs1' incorporates:
         *  Bias: '<S157>/Bias1'
         */
        localB->Product2_el = fabs(localB->Product2_el +
          asbCubeSatACS_P.Bias1_Bias_p);

        /* If: '<S157>/If' */
        if (localB->fcn4 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
           *  ActionPort: '<S169>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem_ne);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem' */
        } else if (localB->Product2_el < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S170>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem1_k);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S171>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product2_el,
            &asbCubeSatACS_P.IfActionSubsystem2_l);

          /* End of Outputs for SubSystem: '<S157>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S159>/Compare' incorporates:
         *  Constant: '<S159>/Constant'
         */
        rtb_Compare_jn = (localB->Product2_el !=
                          asbCubeSatACS_P.Constant_Value_m5);

        /* DotProduct: '<S162>/Dot Product3' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  DotProduct: '<S183>/Dot Product3'
         *  SignalConversion generated from: '<S157>/Dot Product1'
         */
        rtb_Product2_el_tmp =
          (asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
           localB->Sum +
           asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
           localB->Sum_m) +
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
          localB->Sum_e;

        /* Sqrt: '<S162>/Sqrt3' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  DotProduct: '<S162>/Dot Product1'
         *  DotProduct: '<S162>/Dot Product2'
         *  Product: '<S162>/Divide1'
         *  SignalConversion generated from: '<S157>/Dot Product1'
         *  Sqrt: '<S183>/Sqrt3'
         */
        localB->Product2_o4u = sqrt
          (((asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
             asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] +
             asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
             asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1]) +
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2]) *
           ((localB->Sum * localB->Sum + localB->Sum_m * localB->Sum_m) +
            localB->Product2_o4u));

        /* Sum: '<S162>/Add2' incorporates:
         *  DotProduct: '<S162>/Dot Product3'
         *  Sqrt: '<S162>/Sqrt3'
         */
        localB->Product2_el = localB->Product2_o4u + rtb_Product2_el_tmp;

        /* Product: '<S183>/Divide' */
        localB->fcn4 = rtb_Product2_el_tmp / localB->Product2_o4u;

        /* Abs: '<S183>/Abs' incorporates:
         *  Bias: '<S183>/Bias'
         */
        localB->fcn2 = fabs(localB->fcn4 + asbCubeSatACS_P.Bias_Bias_ib);

        /* Abs: '<S183>/Abs1' incorporates:
         *  Bias: '<S183>/Bias1'
         */
        localB->fcn4 = fabs(localB->fcn4 + asbCubeSatACS_P.Bias1_Bias_h);

        /* If: '<S183>/If' */
        if (localB->fcn2 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
           *  ActionPort: '<S189>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->fcn4,
            &asbCubeSatACS_P.IfActionSubsystem_p);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem' */
        } else if (localB->fcn4 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S190>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->fcn4,
            &asbCubeSatACS_P.IfActionSubsystem1_d);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S191>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->fcn4,
            &asbCubeSatACS_P.IfActionSubsystem2_p1);

          /* End of Outputs for SubSystem: '<S183>/If Action Subsystem2' */
        }

        /* Switch: '<S162>/is 180deg Rot' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  Constant: '<S184>/Constant'
         *  Product: '<S187>/i x j'
         *  Product: '<S187>/j x k'
         *  Product: '<S187>/k x i'
         *  Product: '<S188>/i x k'
         *  Product: '<S188>/j x i'
         *  Product: '<S188>/k x j'
         *  Product: '<S193>/i x j'
         *  Product: '<S193>/j x k'
         *  Product: '<S193>/k x i'
         *  Product: '<S194>/i x k'
         *  Product: '<S194>/j x i'
         *  Product: '<S194>/k x j'
         *  RelationalOperator: '<S184>/Compare'
         *  RelationalOperator: '<S185>/x>z'
         *  Sum: '<S182>/Sum'
         *  Sum: '<S192>/Sum'
         *  Switch: '<S185>/Switch3'
         */
        if (localB->fcn4 != asbCubeSatACS_P.CompareToConstant_const_j) {
          localB->Product3_e =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
            localB->Sum_e -
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
            localB->Sum_m;
          localB->Product1_g =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] *
            localB->Sum -
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            localB->Sum_e;
          localB->Product2_e =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            localB->Sum_m -
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
            localB->Sum;
        } else {
          if (asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] >
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2]) {
            /* Switch: '<S185>/Switch3' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             *  Constant: '<S185>/Constant'
             *  Gain: '<S185>/Gain'
             */
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
              asbCubeSatACS_P.Gain_Gain_k *
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1];
            localB->Product2_o4u =
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0];
            localB->Merge_j = asbCubeSatACS_P.Constant_Value_hl;
          } else {
            /* Switch: '<S185>/Switch3' incorporates:
             *  Constant: '<S136>/primaryAlignment'
             *  Constant: '<S185>/Constant1'
             *  Gain: '<S185>/Gain2'
             */
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
              asbCubeSatACS_P.Constant1_Value_d;
            localB->Product2_o4u = asbCubeSatACS_P.Gain2_Gain_ka *
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];
            localB->Merge_j =
              asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1];
          }

          localB->Product3_e =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
            localB->Merge_j - localB->Product2_o4u *
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];
          localB->Product1_g = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0
            * asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] -
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            localB->Merge_j;
          localB->Product2_e =
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
            localB->Product2_o4u -
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
            asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1];
        }

        /* Sqrt: '<S195>/sqrt' incorporates:
         *  Product: '<S196>/Product'
         *  Product: '<S196>/Product1'
         *  Product: '<S196>/Product2'
         *  Product: '<S196>/Product3'
         *  Sum: '<S196>/Sum'
         */
        localB->fcn4 = sqrt(((localB->Product2_el * localB->Product2_el +
                              localB->Product3_e * localB->Product3_e) +
                             localB->Product1_g * localB->Product1_g) +
                            localB->Product2_e * localB->Product2_e);

        /* Product: '<S186>/Product' */
        localB->Product2_el /= localB->fcn4;

        /* Product: '<S186>/Product2' */
        localB->fcn2 = localB->Product1_g / localB->fcn4;

        /* Product: '<S186>/Product1' */
        localB->Product1_d = localB->Product3_e / localB->fcn4;

        /* Product: '<S186>/Product3' */
        localB->Product3_cp = localB->Product2_e / localB->fcn4;

        /* Sum: '<S212>/Sum' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  Constant: '<S136>/secondaryAlignment'
         *  Product: '<S214>/i x j'
         *  Product: '<S214>/j x k'
         *  Product: '<S214>/k x i'
         *  Product: '<S215>/i x k'
         *  Product: '<S215>/j x i'
         *  Product: '<S215>/k x j'
         */
        localB->Product3_e =
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[1] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];
        localB->Product1_g =
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[2];
        localB->Product2_e =
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[1] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_secondaryAlignment[0] *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1];

        /* Sum: '<S213>/Sum' incorporates:
         *  Constant: '<S136>/primaryAlignment'
         *  Product: '<S216>/i x j'
         *  Product: '<S216>/j x k'
         *  Product: '<S216>/k x i'
         *  Product: '<S217>/i x k'
         *  Product: '<S217>/j x i'
         *  Product: '<S217>/k x j'
         */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = localB->Product1_g *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] *
          localB->Product2_e;
        localB->Product2_o4u =
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
          localB->Product2_e - localB->Product3_e *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[2];
        localB->Merge_j = localB->Product3_e *
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[1] -
          asbCubeSatACS_P.AttitudeProfileSunTracking_primaryAlignment[0] *
          localB->Product1_g;

        /* Sum: '<S218>/Sum' incorporates:
         *  Product: '<S220>/i x j'
         *  Product: '<S220>/j x k'
         *  Product: '<S220>/k x i'
         *  Product: '<S221>/i x k'
         *  Product: '<S221>/j x i'
         *  Product: '<S221>/k x j'
         */
        localB->Product3_e = localB->Sum_m * localB->Product1_lc - localB->Sum_e
          * localB->Product3_e1;
        localB->Product1_g = localB->Sum_e * localB->fcn5 - localB->Sum *
          localB->Product1_lc;
        localB->Product2_e = localB->Sum * localB->Product3_e1 - localB->Sum_m *
          localB->fcn5;

        /* Sum: '<S219>/Sum' incorporates:
         *  Product: '<S222>/i x j'
         *  Product: '<S222>/j x k'
         *  Product: '<S222>/k x i'
         *  Product: '<S223>/i x k'
         *  Product: '<S223>/j x i'
         *  Product: '<S223>/k x j'
         */
        localB->Product3_e1 = localB->Product3_e * localB->Sum_m;
        localB->fcn5 = localB->Product3_e * localB->Sum_e;
        localB->fcn4 = localB->Product1_g * localB->Sum;
        localB->Product3_e = localB->Product1_g * localB->Sum_e -
          localB->Product2_e * localB->Sum_m;
        localB->Product1_g = localB->Product2_e * localB->Sum - localB->fcn5;
        localB->Product2_e = localB->Product3_e1 - localB->fcn4;

        /* Sqrt: '<S180>/sqrt' incorporates:
         *  Product: '<S181>/Product'
         *  Product: '<S181>/Product1'
         *  Product: '<S181>/Product2'
         *  Product: '<S181>/Product3'
         *  Sum: '<S181>/Sum'
         */
        localB->Product3_e1 = sqrt(((localB->Product2_el * localB->Product2_el +
          localB->Product1_d * localB->Product1_d) + localB->fcn2 * localB->fcn2)
          + localB->Product3_cp * localB->Product3_cp);

        /* Product: '<S176>/Product2' */
        localB->fcn5 = localB->fcn2 / localB->Product3_e1;

        /* Product: '<S176>/Product3' */
        localB->Product1_lc = localB->Product3_cp / localB->Product3_e1;

        /* Product: '<S176>/Product1' */
        localB->fcn4 = localB->Product1_d / localB->Product3_e1;

        /* Product: '<S176>/Product' */
        localB->Product3_e1 = localB->Product2_el / localB->Product3_e1;

        /* Product: '<S177>/Product7' incorporates:
         *  Product: '<S178>/Product7'
         */
        rtb_Sum_dw = localB->Product1_lc * localB->Product1_lc;

        /* Product: '<S177>/Product' incorporates:
         *  Product: '<S178>/Product'
         */
        rtb_Product1_pv = localB->fcn4 * localB->fcn5;

        /* Product: '<S177>/Product1' incorporates:
         *  Product: '<S178>/Product1'
         */
        rtb_Product3_ar = localB->Product3_e1 * localB->Product1_lc;

        /* Product: '<S177>/Product3' incorporates:
         *  Product: '<S179>/Product'
         */
        localB->Sum_m = localB->fcn4 * localB->Product1_lc;

        /* Product: '<S177>/Product2' incorporates:
         *  Product: '<S179>/Product1'
         */
        localB->Sum = localB->Product3_e1 * localB->fcn5;

        /* Product: '<S177>/Product6' incorporates:
         *  Product: '<S179>/Product7'
         */
        localB->Product2_ev = localB->fcn5 * localB->fcn5;

        /* Sum: '<S177>/Sum' incorporates:
         *  Constant: '<S177>/Constant'
         *  Gain: '<S177>/Gain'
         *  Gain: '<S177>/Gain1'
         *  Gain: '<S177>/Gain2'
         *  Product: '<S177>/Product'
         *  Product: '<S177>/Product1'
         *  Product: '<S177>/Product2'
         *  Product: '<S177>/Product3'
         *  Product: '<S177>/Product4'
         *  Product: '<S177>/Product5'
         *  Product: '<S177>/Product6'
         *  Product: '<S177>/Product7'
         *  Product: '<S177>/Product8'
         *  Sum: '<S177>/Sum1'
         *  Sum: '<S177>/Sum2'
         *  Sum: '<S177>/Sum3'
         */
        localB->Sum_e = (((asbCubeSatACS_P.Constant_Value_ds -
                           localB->Product2_ev) - rtb_Sum_dw) *
                         asbCubeSatACS_P.Gain2_Gain_ga * localB->Product3_e +
                         (rtb_Product1_pv + rtb_Product3_ar) *
                         asbCubeSatACS_P.Gain_Gain_iw * localB->Product1_g) +
          (localB->Sum_m - localB->Sum) * asbCubeSatACS_P.Gain1_Gain_iej *
          localB->Product2_e;

        /* Product: '<S178>/Product3' incorporates:
         *  Product: '<S179>/Product3'
         */
        localB->fcn5 *= localB->Product1_lc;

        /* Product: '<S178>/Product2' incorporates:
         *  Product: '<S179>/Product2'
         */
        localB->Product3_e1 *= localB->fcn4;

        /* Product: '<S178>/Product6' incorporates:
         *  Product: '<S179>/Product6'
         */
        localB->fcn4 *= localB->fcn4;

        /* Sum: '<S178>/Sum' incorporates:
         *  Constant: '<S178>/Constant'
         *  Gain: '<S178>/Gain'
         *  Gain: '<S178>/Gain1'
         *  Gain: '<S178>/Gain2'
         *  Product: '<S178>/Product2'
         *  Product: '<S178>/Product3'
         *  Product: '<S178>/Product4'
         *  Product: '<S178>/Product5'
         *  Product: '<S178>/Product6'
         *  Product: '<S178>/Product8'
         *  Sum: '<S178>/Sum1'
         *  Sum: '<S178>/Sum2'
         *  Sum: '<S178>/Sum3'
         */
        rtb_Sum_dw = (((asbCubeSatACS_P.Constant_Value_de - localB->fcn4) -
                       rtb_Sum_dw) * asbCubeSatACS_P.Gain2_Gain_me *
                      localB->Product1_g + (rtb_Product1_pv - rtb_Product3_ar) *
                      asbCubeSatACS_P.Gain_Gain_b0 * localB->Product3_e) +
          (localB->Product3_e1 + localB->fcn5) * asbCubeSatACS_P.Gain1_Gain_ip *
          localB->Product2_e;

        /* Sum: '<S179>/Sum' incorporates:
         *  Constant: '<S179>/Constant'
         *  Gain: '<S179>/Gain'
         *  Gain: '<S179>/Gain1'
         *  Gain: '<S179>/Gain2'
         *  Product: '<S179>/Product4'
         *  Product: '<S179>/Product5'
         *  Product: '<S179>/Product8'
         *  Sum: '<S179>/Sum1'
         *  Sum: '<S179>/Sum2'
         *  Sum: '<S179>/Sum3'
         */
        localB->fcn4 = ((localB->Sum_m + localB->Sum) *
                        asbCubeSatACS_P.Gain_Gain_jw * localB->Product3_e +
                        (localB->fcn5 - localB->Product3_e1) *
                        asbCubeSatACS_P.Gain1_Gain_a * localB->Product1_g) +
          ((asbCubeSatACS_P.Constant_Value_di - localB->fcn4) -
           localB->Product2_ev) * asbCubeSatACS_P.Gain2_Gain_ii *
          localB->Product2_e;

        /* DotProduct: '<S198>/Dot Product1' incorporates:
         *  DotProduct: '<S163>/Dot Product1'
         *  DotProduct: '<S198>/Dot Product3'
         *  Switch: '<S141>/Switch'
         */
        localB->Product1_lc = localB->Product2_o4u * localB->Product2_o4u;
        localB->Product2_e = localB->Merge_j * localB->Merge_j;

        /* DotProduct: '<S198>/Dot Product2' incorporates:
         *  DotProduct: '<S163>/Dot Product2'
         *  SignalConversion generated from: '<S198>/Dot Product2'
         *  Switch: '<S141>/Switch'
         */
        localB->Product1_g = rtb_Sum_dw * rtb_Sum_dw;

        /* DotProduct: '<S198>/Dot Product3' incorporates:
         *  DotProduct: '<S163>/Dot Product3'
         *  SignalConversion generated from: '<S198>/Dot Product2'
         *  Switch: '<S141>/Switch'
         */
        localB->Product3_e = localB->Product2_o4u * rtb_Sum_dw;

        /* Product: '<S198>/Divide' incorporates:
         *  DotProduct: '<S198>/Dot Product1'
         *  DotProduct: '<S198>/Dot Product2'
         *  DotProduct: '<S198>/Dot Product3'
         *  Product: '<S198>/Divide1'
         *  SignalConversion generated from: '<S198>/Dot Product2'
         *  Sqrt: '<S198>/Sqrt3'
         */
        localB->Product3_e1 =
          ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum_e +
            localB->Product3_e) + localB->Merge_j * localB->fcn4) / sqrt
          (((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
             rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
             localB->Product1_lc) + localB->Product2_e) * ((localB->Sum_e *
             localB->Sum_e + localB->Product1_g) + localB->fcn4 * localB->fcn4));

        /* If: '<S198>/If' incorporates:
         *  Abs: '<S198>/Abs'
         *  Abs: '<S198>/Abs1'
         *  Bias: '<S198>/Bias'
         *  Bias: '<S198>/Bias1'
         */
        if (fabs(localB->Product3_e1 + asbCubeSatACS_P.Bias_Bias_e) < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
           *  ActionPort: '<S204>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem_b);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem' */
        } else if (fabs(localB->Product3_e1 + asbCubeSatACS_P.Bias1_Bias_a) <
                   1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S205>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem1_n);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S198>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S206>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Product3_e1,
            &asbCubeSatACS_P.IfActionSubsystem2_o);

          /* End of Outputs for SubSystem: '<S198>/If Action Subsystem2' */
        }

        /* Switch: '<S141>/Switch' incorporates:
         *  Constant: '<S158>/Constant'
         *  Constant: '<S199>/Constant'
         *  Logic: '<S141>/OR'
         *  Product: '<S172>/Product'
         *  Product: '<S172>/Product1'
         *  Product: '<S172>/Product2'
         *  Product: '<S172>/Product3'
         *  Product: '<S173>/Product'
         *  Product: '<S173>/Product1'
         *  Product: '<S173>/Product2'
         *  Product: '<S173>/Product3'
         *  Product: '<S174>/Product'
         *  Product: '<S174>/Product1'
         *  Product: '<S174>/Product2'
         *  Product: '<S174>/Product3'
         *  Product: '<S175>/Product'
         *  Product: '<S175>/Product1'
         *  Product: '<S175>/Product2'
         *  Product: '<S175>/Product3'
         *  RelationalOperator: '<S158>/Compare'
         *  RelationalOperator: '<S199>/Compare'
         *  RelationalOperator: '<S200>/x>z'
         *  Sum: '<S172>/Sum'
         *  Sum: '<S173>/Sum'
         *  Sum: '<S174>/Sum'
         *  Sum: '<S175>/Sum'
         *  Switch: '<S163>/is 180deg Rot'
         *  Switch: '<S200>/Switch3'
         */
        if ((localB->jxi_i != asbCubeSatACS_P.Constant_Value_hs) ||
            rtb_Compare_jn) {
          localB->cmd_q_b2tgt[0] = localB->Product2_el;
          localB->cmd_q_b2tgt[1] = localB->Product1_d;
          localB->cmd_q_b2tgt[2] = localB->fcn2;
          localB->cmd_q_b2tgt[3] = localB->Product3_cp;
        } else {
          if (localB->Product3_e1 != asbCubeSatACS_P.CompareToConstant_const_l)
          {
            /* Switch: '<S163>/is 180deg Rot' incorporates:
             *  Product: '<S202>/i x j'
             *  Product: '<S202>/j x k'
             *  Product: '<S202>/k x i'
             *  Product: '<S203>/i x k'
             *  Product: '<S203>/j x i'
             *  Product: '<S203>/k x j'
             *  Sum: '<S197>/Sum'
             */
            localB->Product3_e1 = localB->Product2_o4u * localB->fcn4 -
              localB->Merge_j * rtb_Sum_dw;
            localB->jxi_i = localB->Merge_j * localB->Sum_e -
              rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->fcn4;
            localB->Sum = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
              rtb_Sum_dw - localB->Product2_o4u * localB->Sum_e;
          } else {
            if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 >
                localB->Merge_j) {
              /* Switch: '<S200>/Switch3' incorporates:
               *  Constant: '<S200>/Constant'
               *  Gain: '<S200>/Gain'
               *  Switch: '<S163>/is 180deg Rot'
               */
              localB->Sum = asbCubeSatACS_P.Gain_Gain_m * localB->Product2_o4u;
              localB->fcn5 = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
              localB->Sum_m = asbCubeSatACS_P.Constant_Value_o;
            } else {
              /* Switch: '<S200>/Switch3' incorporates:
               *  Constant: '<S200>/Constant1'
               *  Gain: '<S200>/Gain2'
               *  Switch: '<S163>/is 180deg Rot'
               */
              localB->Sum = asbCubeSatACS_P.Constant1_Value_n5;
              localB->fcn5 = asbCubeSatACS_P.Gain2_Gain_i5 * localB->Merge_j;
              localB->Sum_m = localB->Product2_o4u;
            }

            /* Switch: '<S163>/is 180deg Rot' incorporates:
             *  Product: '<S208>/i x j'
             *  Product: '<S208>/j x k'
             *  Product: '<S208>/k x i'
             *  Product: '<S209>/i x k'
             *  Product: '<S209>/j x i'
             *  Product: '<S209>/k x j'
             *  Sum: '<S207>/Sum'
             */
            localB->Product3_e1 = localB->Product2_o4u * localB->Sum_m -
              localB->fcn5 * localB->Merge_j;
            localB->jxi_i = localB->Sum * localB->Merge_j -
              rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 * localB->Sum_m;
            localB->Sum = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
              localB->fcn5 - localB->Sum * localB->Product2_o4u;
          }

          /* Sum: '<S163>/Add2' incorporates:
           *  DotProduct: '<S163>/Dot Product1'
           *  DotProduct: '<S163>/Dot Product2'
           *  DotProduct: '<S163>/Dot Product3'
           *  Product: '<S163>/Divide1'
           *  RelationalOperator: '<S200>/x>z'
           *  SignalConversion generated from: '<S198>/Dot Product2'
           *  Sqrt: '<S163>/Sqrt3'
           *  Switch: '<S163>/is 180deg Rot'
           *  Switch: '<S200>/Switch3'
           */
          localB->Merge_j = sqrt
            (((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
               rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
               localB->Product1_lc) + localB->Product2_e) * ((localB->Sum_e *
               localB->Sum_e + localB->Product1_g) + localB->fcn4 * localB->fcn4))
            + ((rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 *
                localB->Sum_e + localB->Product3_e) + localB->Merge_j *
               localB->fcn4);

          /* Sqrt: '<S210>/sqrt' incorporates:
           *  Product: '<S211>/Product'
           *  Product: '<S211>/Product1'
           *  Product: '<S211>/Product2'
           *  Product: '<S211>/Product3'
           *  Sum: '<S211>/Sum'
           */
          localB->Product3_e = sqrt(((localB->Merge_j * localB->Merge_j +
            localB->Product3_e1 * localB->Product3_e1) + localB->jxi_i *
            localB->jxi_i) + localB->Sum * localB->Sum);

          /* Product: '<S201>/Product3' */
          localB->Product1_g = localB->Sum / localB->Product3_e;

          /* Product: '<S201>/Product2' */
          localB->Product2_e = localB->jxi_i / localB->Product3_e;

          /* Product: '<S201>/Product1' */
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            localB->Product3_e1 / localB->Product3_e;

          /* Product: '<S201>/Product' */
          localB->Merge_j /= localB->Product3_e;
          localB->cmd_q_b2tgt[0] = ((localB->Product2_el * localB->Merge_j -
            localB->Product1_d *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) - localB->fcn2 *
            localB->Product2_e) - localB->Product3_cp * localB->Product1_g;
          localB->cmd_q_b2tgt[1] = ((localB->Product2_el *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 +
            localB->Product1_d * localB->Merge_j) + localB->fcn2 *
            localB->Product1_g) - localB->Product3_cp * localB->Product2_e;
          localB->cmd_q_b2tgt[2] = ((localB->Product2_el * localB->Product2_e -
            localB->Product1_d * localB->Product1_g) + localB->fcn2 *
            localB->Merge_j) + localB->Product3_cp *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;
          localB->cmd_q_b2tgt[3] = ((localB->Product2_el * localB->Product1_g +
            localB->Product1_d * localB->Product2_e) - localB->fcn2 *
            rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0) +
            localB->Product3_cp * localB->Merge_j;
        }

        /* Sqrt: '<S240>/sqrt' incorporates:
         *  Product: '<S241>/Product'
         *  Product: '<S241>/Product1'
         *  Product: '<S241>/Product2'
         *  Product: '<S241>/Product3'
         *  Sum: '<S241>/Sum'
         */
        localB->Product3_e1 = sqrt(((localB->cmd_q_b2tgt[0] *
          localB->cmd_q_b2tgt[0] + localB->cmd_q_b2tgt[1] * localB->cmd_q_b2tgt
          [1]) + localB->cmd_q_b2tgt[2] * localB->cmd_q_b2tgt[2]) +
          localB->cmd_q_b2tgt[3] * localB->cmd_q_b2tgt[3]);

        /* Product: '<S235>/Product' */
        localB->fcn5 = localB->cmd_q_b2tgt[0] / localB->Product3_e1;

        /* Product: '<S235>/Product1' */
        localB->Product1_lc = localB->cmd_q_b2tgt[1] / localB->Product3_e1;

        /* Product: '<S235>/Product2' */
        localB->Product2_el = localB->cmd_q_b2tgt[2] / localB->Product3_e1;

        /* Product: '<S235>/Product3' */
        localB->Product3_e1 = localB->cmd_q_b2tgt[3] / localB->Product3_e1;

        /* Fcn: '<S138>/fcn3' */
        rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = (localB->Product1_lc
          * localB->Product3_e1 + localB->fcn5 * localB->Product2_el) * 2.0;

        /* Fcn: '<S138>/fcn2' incorporates:
         *  Fcn: '<S138>/fcn5'
         */
        localB->Merge_j = localB->fcn5 * localB->fcn5;
        localB->Product2_e = localB->Product1_lc * localB->Product1_lc;
        localB->Product1_d = localB->Product2_el * localB->Product2_el;
        localB->Product3_cp = localB->Product3_e1 * localB->Product3_e1;

        /* Trigonometry: '<S234>/Trigonometric Function1' incorporates:
         *  Fcn: '<S138>/fcn1'
         *  Fcn: '<S138>/fcn2'
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[0] = rt_atan2d_snf((localB->Product2_el *
          localB->Product3_e1 - localB->fcn5 * localB->Product1_lc) * -2.0,
          ((localB->Merge_j - localB->Product2_e) - localB->Product1_d) +
          localB->Product3_cp);

        /* Trigonometry: '<S234>/Trigonometric Function3' incorporates:
         *  Fcn: '<S138>/fcn4'
         *  Fcn: '<S138>/fcn5'
         *  Merge: '<S3>/ Merge '
         */
        localB->PointingCmd[2] = rt_atan2d_snf((localB->Product1_lc *
          localB->Product2_el - localB->fcn5 * localB->Product3_e1) * -2.0,
          ((localB->Merge_j + localB->Product2_e) - localB->Product1_d) -
          localB->Product3_cp);

        /* If: '<S236>/If' incorporates:
         *  Constant: '<S237>/Constant'
         *  Constant: '<S238>/Constant'
         */
        if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 > 1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.Constant_Value_lp;
        } else if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 < -1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 =
            asbCubeSatACS_P.Constant_Value_a;
        }

        /* Trigonometry: '<S234>/trigFcn' incorporates:
         *  Merge: '<S3>/ Merge '
         */
        if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 > 1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = 1.0;
        } else if (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 < -1.0) {
          rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = -1.0;
        }

        localB->PointingCmd[1] = asin
          (rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0);
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Pointing Mode Selection' */

  /* BusCreator generated from: '<Root>/Bus Creator' */
  rty_ACSOut->AttitudeError.Roll = localB->PointingCmd[0];
  rty_ACSOut->AttitudeError.Pitch = localB->PointingCmd[1];
  rty_ACSOut->AttitudeError.Yaw = localB->PointingCmd[2];

  /* SampleTimeMath: '<S270>/Tsamp' incorporates:
   *  Gain: '<S267>/Derivative Gain'
   *  Merge: '<S3>/ Merge '
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Product1_g = rtP_gains.Kd * localB->PointingCmd[0];

  /* BusCreator: '<Root>/Bus Creator' incorporates:
   *  Delay: '<S268>/UD'
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Merge: '<S3>/ Merge '
   *  Sum: '<S268>/Diff'
   *  Sum: '<S284>/Sum'
   */
  rty_ACSOut->TorqueCmds[0] = (rtP_gains.Kp * localB->PointingCmd[0] +
    localDW->Integrator_DSTATE[0]) + (localB->Product1_g - localDW->UD_DSTATE[0]);

  /* SampleTimeMath: '<S270>/Tsamp' incorporates:
   *  Gain: '<S267>/Derivative Gain'
   *  Merge: '<S3>/ Merge '
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0 = localB->Product1_g;
  localB->Product1_g = rtP_gains.Kd * localB->PointingCmd[1];

  /* BusCreator: '<Root>/Bus Creator' incorporates:
   *  Delay: '<S268>/UD'
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Merge: '<S3>/ Merge '
   *  Sum: '<S268>/Diff'
   *  Sum: '<S284>/Sum'
   */
  rty_ACSOut->TorqueCmds[1] = (rtP_gains.Kp * localB->PointingCmd[1] +
    localDW->Integrator_DSTATE[1]) + (localB->Product1_g - localDW->UD_DSTATE[1]);

  /* SampleTimeMath: '<S270>/Tsamp' incorporates:
   *  Gain: '<S267>/Derivative Gain'
   *  Merge: '<S3>/ Merge '
   *
   * About '<S270>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Product2_o4u = localB->Product1_g;
  localB->Product1_g = rtP_gains.Kd * localB->PointingCmd[2];

  /* BusCreator: '<Root>/Bus Creator' incorporates:
   *  Delay: '<S268>/UD'
   *  DiscreteIntegrator: '<S275>/Integrator'
   *  Gain: '<S280>/Proportional Gain'
   *  Merge: '<S3>/ Merge '
   *  Sum: '<S268>/Diff'
   *  Sum: '<S284>/Sum'
   */
  rty_ACSOut->TorqueCmds[2] = (rtP_gains.Kp * localB->PointingCmd[2] +
    localDW->Integrator_DSTATE[2]) + (localB->Product1_g - localDW->UD_DSTATE[2]);
  rty_ACSOut->cmd_q_b2tgt[0] = localB->cmd_q_b2tgt[0];
  rty_ACSOut->cmd_q_b2tgt[1] = localB->cmd_q_b2tgt[1];
  rty_ACSOut->cmd_q_b2tgt[2] = localB->cmd_q_b2tgt[2];
  rty_ACSOut->cmd_q_b2tgt[3] = localB->cmd_q_b2tgt[3];
  rty_ACSOut->NavMode = *rtu_AttitudeMode;

  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   *  Merge: '<S3>/ Merge '
   */
  localDW->Integrator_DSTATE[0] += rtP_gains.Ki * localB->PointingCmd[0] *
    asbCubeSatACS_P.Integrator_gainval;

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
  localDW->UD_DSTATE[0] = rtb_TmpSignalConversionAtDotProduct1Inport1_idx_0;

  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   *  Merge: '<S3>/ Merge '
   */
  localDW->Integrator_DSTATE[1] += rtP_gains.Ki * localB->PointingCmd[1] *
    asbCubeSatACS_P.Integrator_gainval;

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
  localDW->UD_DSTATE[1] = localB->Product2_o4u;

  /* Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
   *  Gain: '<S272>/Integral Gain'
   *  Merge: '<S3>/ Merge '
   */
  localDW->Integrator_DSTATE[2] += rtP_gains.Ki * localB->PointingCmd[2] *
    asbCubeSatACS_P.Integrator_gainval;

  /* Update for Delay: '<S268>/UD' */
  localDW->UD_DSTATE[2] = localB->Product1_g;
}

/* Model initialize function */
void asbCubeSatACS_initialize(const char_T **rt_errorStatus,
  RT_MODEL_asbCubeSatACS_T *const asbCubeSatACS_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(asbCubeSatACS_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
