//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: asbCubeSatACS.cpp
//
// Code generated for Simulink model 'asbCubeSatACS'.
//
// Model version                  : 6.10
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Sun Oct  2 16:31:32 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "asbCubeSatACS.h"
#include "rtwtypes.h"
#include "asbCubeSatACS_types.h"
#include <cmath>
#include "rt_atan2d_snf.h"

extern "C" {

#include "rt_nonfinite.h"

}
#include "asbCubeSatACS_private.h"

// Named constants for Chart: '<S1>/Pointing Mode Selection'
const uint8_T asbCubeSatACS_IN_Earth{ 1U };

const uint8_T asbCubeSatACS_IN_Off{ 1U };

const uint8_T asbCubeSatACS_IN_On{ 2U };

const uint8_T asbCubeSatACS_IN_Sun{ 2U };

const uint8_T asbCubeSatACS_IN_Transition{ 3U };

const uint8_T asbCubeSatAC_IN_NO_ACTIVE_CHILD{ 0U };

//
// Output and update for action system:
//    '<S50>/If Action Subsystem'
//    '<S51>/If Action Subsystem'
//    '<S77>/If Action Subsystem'
//    '<S92>/If Action Subsystem'
//    '<S156>/If Action Subsystem'
//    '<S157>/If Action Subsystem'
//    '<S183>/If Action Subsystem'
//    '<S198>/If Action Subsystem'
//
void asbCubeSatACS::asbCubeSatACS_IfActionSubsystem(real_T *rty_Out1)
{
  // SignalConversion generated from: '<S60>/Out1' incorporates:
  //   Constant: '<S60>/Constant'

  *rty_Out1 = 1.0;
}

//
// Output and update for action system:
//    '<S50>/If Action Subsystem1'
//    '<S51>/If Action Subsystem1'
//    '<S77>/If Action Subsystem1'
//    '<S92>/If Action Subsystem1'
//    '<S156>/If Action Subsystem1'
//    '<S157>/If Action Subsystem1'
//    '<S183>/If Action Subsystem1'
//    '<S198>/If Action Subsystem1'
//
void asbCubeSatACS::asbCubeSatAC_IfActionSubsystem1(real_T *rty_Out1)
{
  // SignalConversion generated from: '<S61>/Out1' incorporates:
  //   Constant: '<S61>/Constant'

  *rty_Out1 = -1.0;
}

//
// Output and update for action system:
//    '<S50>/If Action Subsystem2'
//    '<S51>/If Action Subsystem2'
//    '<S77>/If Action Subsystem2'
//    '<S92>/If Action Subsystem2'
//    '<S156>/If Action Subsystem2'
//    '<S157>/If Action Subsystem2'
//    '<S183>/If Action Subsystem2'
//    '<S198>/If Action Subsystem2'
//
void asbCubeSatACS::asbCubeSatAC_IfActionSubsystem2(real_T *rty_Out1)
{
  // SignalConversion generated from: '<S62>/Out1' incorporates:
  //   Constant: '<S62>/Constant'

  *rty_Out1 = 0.0;
}

// System initialize for referenced model: 'asbCubeSatACS'
void asbCubeSatACS::init(ACSOutBus *rty_ACSOut)
{
  // SystemInitialize for BusCreator generated from: '<Root>/Bus Creator'
  rty_ACSOut->AttitudeError.Roll = 0.0;
  rty_ACSOut->AttitudeError.Pitch = 0.0;
  rty_ACSOut->AttitudeError.Yaw = 0.0;
}

// Output and update for referenced model: 'asbCubeSatACS'
void asbCubeSatACS::step(const real_T rtu_SensorsOut_X_eci[3], const real_T
  rtu_SensorsOut_V_eci[3], const real_T rtu_SensorsOut_q_eci2b[4], const real_T *
  rtu_AttitudeMode, const real_T rtu_Environment_x_sun_eci[3], ACSOutBus
  *rty_ACSOut)
{
  real_T rtb_Merge_dw;
  real_T rtb_Product2_f5;
  real_T rtb_Product3_hi;
  real_T rtb_Product3_pr;
  real_T rtb_fcn2;
  real_T rtb_fcn5;

  // Chart: '<S1>/Pointing Mode Selection'
  if (asbCubeSatACS_DW.is_active_c1_asbCubeSatACS == 0U) {
    asbCubeSatACS_DW.is_active_c1_asbCubeSatACS = 1U;
    asbCubeSatACS_DW.is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    // Merge: '<S3>/ Merge 1' incorporates:
    //   Constant: '<S4>/Unit quat'
    //   SignalConversion generated from: '<S4>/cmd_q_b2tgt'

    asbCubeSatACS_B.cmd_q_b2tgt[0] = 1.0;
    asbCubeSatACS_B.cmd_q_b2tgt[1] = 0.0;
    asbCubeSatACS_B.cmd_q_b2tgt[2] = 0.0;
    asbCubeSatACS_B.cmd_q_b2tgt[3] = 0.0;

    // Merge: '<S3>/ Merge ' incorporates:
    //   Constant: '<S4>/TorqueCmds'
    //   SignalConversion generated from: '<S4>/PointingCmd'

    asbCubeSatACS_B.PointingCmd[0] = 0.0;
    asbCubeSatACS_B.PointingCmd[1] = 0.0;
    asbCubeSatACS_B.PointingCmd[2] = 0.0;
  } else if (asbCubeSatACS_DW.is_c1_asbCubeSatACS == asbCubeSatACS_IN_Off) {
    if (*rtu_AttitudeMode != 0.0) {
      asbCubeSatACS_DW.is_c1_asbCubeSatACS = asbCubeSatACS_IN_On;
      asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Transition;
    } else {
      // Merge: '<S3>/ Merge 1' incorporates:
      //   Constant: '<S4>/Unit quat'
      //   SignalConversion generated from: '<S4>/cmd_q_b2tgt'

      asbCubeSatACS_B.cmd_q_b2tgt[0] = 1.0;
      asbCubeSatACS_B.cmd_q_b2tgt[1] = 0.0;
      asbCubeSatACS_B.cmd_q_b2tgt[2] = 0.0;
      asbCubeSatACS_B.cmd_q_b2tgt[3] = 0.0;

      // Merge: '<S3>/ Merge ' incorporates:
      //   Constant: '<S4>/TorqueCmds'
      //   SignalConversion generated from: '<S4>/PointingCmd'

      asbCubeSatACS_B.PointingCmd[0] = 0.0;
      asbCubeSatACS_B.PointingCmd[1] = 0.0;
      asbCubeSatACS_B.PointingCmd[2] = 0.0;
    }

    // case IN_On:
  } else if (*rtu_AttitudeMode == 0.0) {
    asbCubeSatACS_DW.is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
    asbCubeSatACS_DW.is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    // Merge: '<S3>/ Merge 1' incorporates:
    //   Constant: '<S4>/Unit quat'
    //   SignalConversion generated from: '<S4>/cmd_q_b2tgt'

    asbCubeSatACS_B.cmd_q_b2tgt[0] = 1.0;
    asbCubeSatACS_B.cmd_q_b2tgt[1] = 0.0;
    asbCubeSatACS_B.cmd_q_b2tgt[2] = 0.0;
    asbCubeSatACS_B.cmd_q_b2tgt[3] = 0.0;

    // Merge: '<S3>/ Merge ' incorporates:
    //   Constant: '<S4>/TorqueCmds'
    //   SignalConversion generated from: '<S4>/PointingCmd'

    asbCubeSatACS_B.PointingCmd[0] = 0.0;
    asbCubeSatACS_B.PointingCmd[1] = 0.0;
    asbCubeSatACS_B.PointingCmd[2] = 0.0;
  } else {
    switch (asbCubeSatACS_DW.is_On) {
     case asbCubeSatACS_IN_Earth:
      {
        if (*rtu_AttitudeMode == 2.0) {
          asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Transition;
        } else {
          real_T rtb_Product1_fn;
          real_T rtb_Product1_g;
          real_T rtb_Product2_l5;
          real_T rtb_Product3_n4;
          real_T rtb_Product_he;
          real_T rtb_Sum;
          real_T rtb_Sum_ft;
          real_T rtb_Sum_g2;
          real_T rtb_Sum_hk;
          real_T rtb_Sum_j_tmp;
          real_T rtb_Sum_m;
          real_T rtb_fcn4;
          real_T rtb_is180degRot_p_idx_0;
          real_T rtb_is180degRot_p_idx_1;
          real_T rtb_is180degRot_p_idx_2;
          boolean_T rtb_Compare;
          boolean_T rtb_Compare_jn;

          // Sqrt: '<S120>/sqrt' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S121>/Product'
          //   Product: '<S121>/Product1'
          //   Product: '<S121>/Product2'
          //   Product: '<S121>/Product3'
          //   Sqrt: '<S48>/sqrt'
          //   Sum: '<S121>/Sum'
          //   UnaryMinus: '<S8>/Unary Minus'
          //   UnaryMinus: '<S8>/Unary Minus1'
          //   UnaryMinus: '<S8>/Unary Minus2'

          rtb_fcn2 = std::sqrt(((rtu_SensorsOut_q_eci2b[0] *
            rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
            -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
                                -rtu_SensorsOut_q_eci2b[2]) +
                               -rtu_SensorsOut_q_eci2b[3] *
                               -rtu_SensorsOut_q_eci2b[3]);

          // Product: '<S119>/Product' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S26>/Product'
          //   Sqrt: '<S120>/sqrt'

          rtb_Product_he = rtu_SensorsOut_q_eci2b[0] / rtb_fcn2;

          // Product: '<S119>/Product1' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S26>/Product1'
          //   Sqrt: '<S120>/sqrt'
          //   UnaryMinus: '<S8>/Unary Minus'

          rtb_Sum_g2 = -rtu_SensorsOut_q_eci2b[1] / rtb_fcn2;

          // Product: '<S119>/Product2' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S26>/Product2'
          //   Sqrt: '<S120>/sqrt'
          //   UnaryMinus: '<S8>/Unary Minus1'

          rtb_Sum_hk = -rtu_SensorsOut_q_eci2b[2] / rtb_fcn2;

          // Product: '<S119>/Product3' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S26>/Product3'
          //   Sqrt: '<S120>/sqrt'
          //   UnaryMinus: '<S8>/Unary Minus2'

          rtb_Sum_j_tmp = -rtu_SensorsOut_q_eci2b[3] / rtb_fcn2;

          // Sqrt: '<S21>/sqrt' incorporates:
          //   Product: '<S119>/Product'
          //   Product: '<S119>/Product1'
          //   Product: '<S119>/Product2'
          //   Product: '<S119>/Product3'
          //   Product: '<S22>/Product'
          //   Product: '<S22>/Product1'
          //   Product: '<S22>/Product2'
          //   Product: '<S22>/Product3'
          //   Sum: '<S22>/Sum'
          //   UnaryMinus: '<S118>/Unary Minus'
          //   UnaryMinus: '<S118>/Unary Minus1'
          //   UnaryMinus: '<S118>/Unary Minus2'

          rtb_Merge_dw = std::sqrt(((rtb_Product_he * rtb_Product_he +
            -rtb_Sum_g2 * -rtb_Sum_g2) + -rtb_Sum_hk * -rtb_Sum_hk) +
            -rtb_Sum_j_tmp * -rtb_Sum_j_tmp);

          // Product: '<S17>/Product' incorporates:
          //   Product: '<S119>/Product'

          rtb_fcn4 = rtb_Product_he / rtb_Merge_dw;

          // Product: '<S17>/Product1' incorporates:
          //   Product: '<S119>/Product1'
          //   UnaryMinus: '<S118>/Unary Minus'

          rtb_Sum_m = -rtb_Sum_g2 / rtb_Merge_dw;

          // Product: '<S17>/Product2' incorporates:
          //   Product: '<S119>/Product2'
          //   UnaryMinus: '<S118>/Unary Minus1'

          rtb_Product3_pr = -rtb_Sum_hk / rtb_Merge_dw;

          // Product: '<S17>/Product3' incorporates:
          //   Product: '<S119>/Product3'
          //   UnaryMinus: '<S118>/Unary Minus2'

          rtb_fcn2 = -rtb_Sum_j_tmp / rtb_Merge_dw;

          // Product: '<S18>/Product' incorporates:
          //   Product: '<S19>/Product'

          rtb_fcn5 = rtb_Sum_m * rtb_Product3_pr;

          // Product: '<S18>/Product2' incorporates:
          //   Product: '<S20>/Product1'

          rtb_Product3_n4 = rtb_fcn4 * rtb_Product3_pr;

          // Product: '<S18>/Product6' incorporates:
          //   Product: '<S20>/Product7'

          rtb_Product3_hi = rtb_Product3_pr * rtb_Product3_pr;

          // Product: '<S18>/Product7' incorporates:
          //   Product: '<S19>/Product7'

          rtb_is180degRot_p_idx_0 = rtb_fcn2 * rtb_fcn2;

          // Product: '<S18>/Product1' incorporates:
          //   Product: '<S19>/Product1'

          rtb_is180degRot_p_idx_1 = rtb_fcn4 * rtb_fcn2;

          // Sum: '<S18>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S18>/Constant'
          //   Gain: '<S10>/Gain'
          //   Gain: '<S18>/Gain'
          //   Gain: '<S18>/Gain1'
          //   Gain: '<S18>/Gain2'
          //   Product: '<S18>/Product'
          //   Product: '<S18>/Product1'
          //   Product: '<S18>/Product2'
          //   Product: '<S18>/Product3'
          //   Product: '<S18>/Product4'
          //   Product: '<S18>/Product5'
          //   Product: '<S18>/Product6'
          //   Product: '<S18>/Product7'
          //   Product: '<S18>/Product8'
          //   Sum: '<S18>/Sum1'
          //   Sum: '<S18>/Sum2'
          //   Sum: '<S18>/Sum3'

          rtb_Product1_g = (((0.5 - rtb_Product3_hi) - rtb_is180degRot_p_idx_0) *
                            2.0 * -rtu_SensorsOut_X_eci[0] + (rtb_fcn5 +
            rtb_is180degRot_p_idx_1) * 2.0 * -rtu_SensorsOut_X_eci[1]) +
            (rtb_Sum_m * rtb_fcn2 - rtb_Product3_n4) * 2.0 *
            -rtu_SensorsOut_X_eci[2];

          // Product: '<S19>/Product3' incorporates:
          //   Product: '<S20>/Product3'

          rtb_Product3_pr *= rtb_fcn2;

          // Product: '<S19>/Product2' incorporates:
          //   Product: '<S20>/Product2'

          rtb_Sum_ft = rtb_fcn4 * rtb_Sum_m;

          // Sum: '<S19>/Sum3' incorporates:
          //   Constant: '<S19>/Constant'
          //   Product: '<S19>/Product6'
          //   Sum: '<S20>/Sum3'

          rtb_Merge_dw = 0.5 - rtb_Sum_m * rtb_Sum_m;

          // Sum: '<S19>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Gain: '<S10>/Gain'
          //   Gain: '<S19>/Gain'
          //   Gain: '<S19>/Gain1'
          //   Gain: '<S19>/Gain2'
          //   Product: '<S19>/Product2'
          //   Product: '<S19>/Product3'
          //   Product: '<S19>/Product4'
          //   Product: '<S19>/Product5'
          //   Product: '<S19>/Product8'
          //   Sum: '<S19>/Sum1'
          //   Sum: '<S19>/Sum2'
          //   Sum: '<S19>/Sum3'

          rtb_Sum = ((rtb_Merge_dw - rtb_is180degRot_p_idx_0) * 2.0 *
                     -rtu_SensorsOut_X_eci[1] + (rtb_fcn5 -
                      rtb_is180degRot_p_idx_1) * 2.0 * -rtu_SensorsOut_X_eci[0])
            + (rtb_Sum_ft + rtb_Product3_pr) * 2.0 * -rtu_SensorsOut_X_eci[2];

          // Sum: '<S20>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Gain: '<S10>/Gain'
          //   Gain: '<S20>/Gain'
          //   Gain: '<S20>/Gain1'
          //   Gain: '<S20>/Gain2'
          //   Product: '<S20>/Product'
          //   Product: '<S20>/Product4'
          //   Product: '<S20>/Product5'
          //   Product: '<S20>/Product8'
          //   Sum: '<S20>/Sum1'
          //   Sum: '<S20>/Sum2'
          //   Sum: '<S20>/Sum3'

          rtb_Sum_ft = ((rtb_Sum_m * rtb_fcn2 + rtb_Product3_n4) * 2.0 *
                        -rtu_SensorsOut_X_eci[0] + (rtb_Product3_pr - rtb_Sum_ft)
                        * 2.0 * -rtu_SensorsOut_X_eci[1]) + (rtb_Merge_dw -
            rtb_Product3_hi) * 2.0 * -rtu_SensorsOut_X_eci[2];

          // Sum: '<S32>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S38>/i x j'
          //   Product: '<S38>/j x k'
          //   Product: '<S38>/k x i'
          //   Product: '<S39>/i x k'
          //   Product: '<S39>/j x i'
          //   Product: '<S39>/k x j'

          rtb_Product3_pr = rtu_SensorsOut_X_eci[1] * rtu_SensorsOut_V_eci[2] -
            rtu_SensorsOut_V_eci[1] * rtu_SensorsOut_X_eci[2];
          rtb_Product2_f5 = rtu_SensorsOut_V_eci[0] * rtu_SensorsOut_X_eci[2] -
            rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[2];
          rtb_Product2_l5 = rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[1] -
            rtu_SensorsOut_V_eci[0] * rtu_SensorsOut_X_eci[1];

          // Sum: '<S34>/Sum' incorporates:
          //   Constant: '<S23>/Constant'
          //   Product: '<S40>/i x j'
          //   Product: '<S40>/j x k'
          //   Product: '<S40>/k x i'
          //   Product: '<S41>/i x k'
          //   Product: '<S41>/j x i'
          //   Product: '<S41>/k x j'

          rtb_fcn2 = 0.0 * rtb_Product2_l5 - rtb_Product2_f5;
          rtb_fcn4 = rtb_Product3_pr - 0.0 * rtb_Product2_l5;
          rtb_Product3_n4 = 0.0 * rtb_Product2_f5 - rtb_Product3_pr * 0.0;

          // Sqrt: '<S23>/|r|' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   DotProduct: '<S23>/Dot Product'

          rtb_Product3_hi = std::sqrt((rtu_SensorsOut_X_eci[0] *
            rtu_SensorsOut_X_eci[0] + rtu_SensorsOut_X_eci[1] *
            rtu_SensorsOut_X_eci[1]) + rtu_SensorsOut_X_eci[2] *
            rtu_SensorsOut_X_eci[2]);

          // Sum: '<S23>/e = (v x h) // mu - r // |r|' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S23>/Constant2'
          //   Product: '<S23>/divide2'
          //   Product: '<S23>/divide3'
          //   Product: '<S42>/i x j'
          //   Product: '<S42>/j x k'
          //   Product: '<S42>/k x i'
          //   Product: '<S43>/i x k'
          //   Product: '<S43>/j x i'
          //   Product: '<S43>/k x j'
          //   Sum: '<S35>/Sum'

          rtb_is180degRot_p_idx_0 = (rtu_SensorsOut_V_eci[1] * rtb_Product2_l5 -
            rtb_Product2_f5 * rtu_SensorsOut_V_eci[2]) / 3.986004418E+14 -
            rtu_SensorsOut_X_eci[0] / rtb_Product3_hi;
          rtb_is180degRot_p_idx_1 = (rtb_Product3_pr * rtu_SensorsOut_V_eci[2] -
            rtu_SensorsOut_V_eci[0] * rtb_Product2_l5) / 3.986004418E+14 -
            rtu_SensorsOut_X_eci[1] / rtb_Product3_hi;
          rtb_is180degRot_p_idx_2 = (rtu_SensorsOut_V_eci[0] * rtb_Product2_f5 -
            rtb_Product3_pr * rtu_SensorsOut_V_eci[1]) / 3.986004418E+14 -
            rtu_SensorsOut_X_eci[2] / rtb_Product3_hi;

          // Sqrt: '<S23>/|n|' incorporates:
          //   DotProduct: '<S23>/Dot Product2'

          rtb_Merge_dw = std::sqrt((rtb_fcn2 * rtb_fcn2 + rtb_fcn4 * rtb_fcn4) +
            rtb_Product3_n4 * rtb_Product3_n4);

          // Sqrt: '<S23>/|e|' incorporates:
          //   DotProduct: '<S23>/Dot Product4'

          rtb_Sum_m = std::sqrt((rtb_is180degRot_p_idx_0 *
            rtb_is180degRot_p_idx_0 + rtb_is180degRot_p_idx_1 *
            rtb_is180degRot_p_idx_1) + rtb_is180degRot_p_idx_2 *
                                rtb_is180degRot_p_idx_2);

          // Product: '<S23>/Product1'
          rtb_Product1_fn = rtb_Sum_m * rtb_Product3_hi;

          // Switch: '<S23>/n_j < 0' incorporates:
          //   Constant: '<S23>/Constant1'
          //   Constant: '<S30>/Constant'
          //   Constant: '<S30>/Constant1'
          //   MinMax: '<S30>/Max'
          //   MinMax: '<S30>/Min'
          //   Product: '<S23>/divide'
          //   Sum: '<S23>/Sum'
          //   Trigonometry: '<S23>/RAAN = acos(n_i // |n|)'

          if (rtb_fcn4 >= 0.0) {
            rtb_Product3_hi = std::acos(std::fmax(-1.0, std::fmin(rtb_fcn2 /
              rtb_Merge_dw, 1.0)));
          } else {
            rtb_Product3_hi = 6.2831853071795862 - std::acos(std::fmax(-1.0, std::
              fmin(rtb_fcn2 / rtb_Merge_dw, 1.0)));
          }

          // Switch: '<S23>/e_k < 0' incorporates:
          //   Constant: '<S23>/Constant3'
          //   Constant: '<S29>/Constant'
          //   Constant: '<S29>/Constant1'
          //   DotProduct: '<S23>/Dot Product1'
          //   MinMax: '<S29>/Max'
          //   MinMax: '<S29>/Min'
          //   Product: '<S23>/Product'
          //   Product: '<S23>/divide4'
          //   Sum: '<S23>/Sum1'
          //   Trigonometry: '<S23>/argP = acos(n.e//|n||e|)'

          if (rtb_is180degRot_p_idx_2 >= 0.0) {
            rtb_fcn5 = std::acos(std::fmax(-1.0, std::fmin(((rtb_fcn2 *
              rtb_is180degRot_p_idx_0 + rtb_fcn4 * rtb_is180degRot_p_idx_1) +
              rtb_Product3_n4 * rtb_is180degRot_p_idx_2) / (rtb_Merge_dw *
              rtb_Sum_m), 1.0)));
          } else {
            rtb_fcn5 = 6.2831853071795862 - std::acos(std::fmax(-1.0, std::fmin
              (((rtb_fcn2 * rtb_is180degRot_p_idx_0 + rtb_fcn4 *
                 rtb_is180degRot_p_idx_1) + rtb_Product3_n4 *
                rtb_is180degRot_p_idx_2) / (rtb_Merge_dw * rtb_Sum_m), 1.0)));
          }

          // Switch: '<S23>/r.v < 0' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S23>/Constant4'
          //   Constant: '<S28>/Constant'
          //   Constant: '<S28>/Constant1'
          //   DotProduct: '<S23>/Dot Product5'
          //   DotProduct: '<S23>/Dot Product6'
          //   MinMax: '<S28>/Max'
          //   MinMax: '<S28>/Min'
          //   Product: '<S23>/divide5'
          //   Sum: '<S23>/Sum2'
          //   Trigonometry: '<S23>/nu = acos(e.r//|e||r|)'

          if ((rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[0] +
               rtu_SensorsOut_X_eci[1] * rtu_SensorsOut_V_eci[1]) +
              rtu_SensorsOut_X_eci[2] * rtu_SensorsOut_V_eci[2] >= 0.0) {
            rtb_fcn2 = std::acos(std::fmax(-1.0, std::fmin
              (((rtb_is180degRot_p_idx_0 * rtu_SensorsOut_X_eci[0] +
                 rtb_is180degRot_p_idx_1 * rtu_SensorsOut_X_eci[1]) +
                rtb_is180degRot_p_idx_2 * rtu_SensorsOut_X_eci[2]) /
               rtb_Product1_fn, 1.0)));
          } else {
            rtb_fcn2 = 6.2831853071795862 - std::acos(std::fmax(-1.0, std::fmin
              (((rtb_is180degRot_p_idx_0 * rtu_SensorsOut_X_eci[0] +
                 rtb_is180degRot_p_idx_1 * rtu_SensorsOut_X_eci[1]) +
                rtb_is180degRot_p_idx_2 * rtu_SensorsOut_X_eci[2]) /
               rtb_Product1_fn, 1.0)));
          }

          // Gain: '<S33>/1//2' incorporates:
          //   Constant: '<S31>/Constant'
          //   Constant: '<S31>/Constant1'
          //   DotProduct: '<S23>/Dot Product3'
          //   MinMax: '<S31>/Max'
          //   MinMax: '<S31>/Min'
          //   Product: '<S23>/divide1'
          //   Sqrt: '<S23>/|h|'
          //   Sum: '<S23>/Sum3'
          //   Trigonometry: '<S23>/i = acos(h_k // |h|)'

          rtb_is180degRot_p_idx_0 = 0.5 * rtb_Product3_hi;
          rtb_is180degRot_p_idx_1 = std::acos(std::fmax(-1.0, std::fmin
            (rtb_Product2_l5 / std::sqrt((rtb_Product3_pr * rtb_Product3_pr +
            rtb_Product2_f5 * rtb_Product2_f5) + rtb_Product2_l5 *
            rtb_Product2_l5), 1.0))) * 0.5;
          rtb_is180degRot_p_idx_2 = (rtb_fcn5 + rtb_fcn2) * 0.5;

          // Trigonometry: '<S33>/sincos'
          rtb_fcn2 = std::cos(rtb_is180degRot_p_idx_0);
          rtb_Product3_pr = std::sin(rtb_is180degRot_p_idx_0);
          rtb_fcn4 = std::cos(rtb_is180degRot_p_idx_1);
          rtb_Merge_dw = std::sin(rtb_is180degRot_p_idx_1);
          rtb_Product3_n4 = std::cos(rtb_is180degRot_p_idx_2);
          rtb_Product2_f5 = std::sin(rtb_is180degRot_p_idx_2);

          // Fcn: '<S33>/q0' incorporates:
          //   Fcn: '<S33>/q3'

          rtb_is180degRot_p_idx_0 = rtb_Product3_pr * rtb_fcn4;
          rtb_Product3_hi = rtb_fcn2 * rtb_fcn4 * rtb_Product3_n4 -
            rtb_is180degRot_p_idx_0 * rtb_Product2_f5;

          // Fcn: '<S33>/q1' incorporates:
          //   Fcn: '<S33>/q2'

          rtb_Product2_l5 = rtb_Product3_pr * rtb_Merge_dw;
          rtb_fcn5 = rtb_fcn2 * rtb_Merge_dw * rtb_Product3_n4 + rtb_Product2_l5
            * rtb_Product2_f5;

          // Fcn: '<S33>/q2'
          rtb_Merge_dw = rtb_Product2_l5 * rtb_Product3_n4 - rtb_fcn2 *
            rtb_Merge_dw * rtb_Product2_f5;

          // Fcn: '<S33>/q3'
          rtb_Product3_pr = rtb_fcn2 * rtb_fcn4 * rtb_Product2_f5 +
            rtb_is180degRot_p_idx_0 * rtb_Product3_n4;

          // Sqrt: '<S36>/sqrt' incorporates:
          //   Product: '<S37>/Product'
          //   Product: '<S37>/Product1'
          //   Product: '<S37>/Product2'
          //   Product: '<S37>/Product3'
          //   Sum: '<S37>/Sum'

          rtb_Sum_m = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi + rtb_fcn5 *
            rtb_fcn5) + rtb_Merge_dw * rtb_Merge_dw) + rtb_Product3_pr *
                                rtb_Product3_pr);

          // Product: '<S27>/Product'
          rtb_Product3_hi /= rtb_Sum_m;

          // Product: '<S27>/Product1'
          rtb_fcn5 /= rtb_Sum_m;

          // Product: '<S27>/Product2'
          rtb_Merge_dw /= rtb_Sum_m;

          // Product: '<S27>/Product3'
          rtb_Product3_pr /= rtb_Sum_m;

          // Sum: '<S45>/Sum' incorporates:
          //   Product: '<S45>/Product'
          //   Product: '<S45>/Product1'
          //   Product: '<S45>/Product2'
          //   Product: '<S45>/Product3'

          rtb_Product3_n4 = ((rtb_Product_he * rtb_fcn5 + rtb_Sum_g2 *
                              rtb_Product3_hi) + rtb_Sum_hk * rtb_Product3_pr) -
            rtb_Sum_j_tmp * rtb_Merge_dw;

          // Sum: '<S46>/Sum' incorporates:
          //   Product: '<S46>/Product'
          //   Product: '<S46>/Product1'
          //   Product: '<S46>/Product2'
          //   Product: '<S46>/Product3'

          rtb_fcn2 = ((rtb_Product_he * rtb_Merge_dw - rtb_Sum_g2 *
                       rtb_Product3_pr) + rtb_Sum_hk * rtb_Product3_hi) +
            rtb_Sum_j_tmp * rtb_fcn5;

          // Sum: '<S47>/Sum' incorporates:
          //   Product: '<S47>/Product'
          //   Product: '<S47>/Product1'
          //   Product: '<S47>/Product2'
          //   Product: '<S47>/Product3'

          rtb_Product2_f5 = ((rtb_Product_he * rtb_Product3_pr + rtb_Sum_g2 *
                              rtb_Merge_dw) - rtb_Sum_hk * rtb_fcn5) +
            rtb_Sum_j_tmp * rtb_Product3_hi;

          // Sum: '<S44>/Sum' incorporates:
          //   Product: '<S44>/Product'
          //   Product: '<S44>/Product1'
          //   Product: '<S44>/Product2'
          //   Product: '<S44>/Product3'

          rtb_Product3_hi = ((rtb_Product_he * rtb_Product3_hi - rtb_Sum_g2 *
                              rtb_fcn5) - rtb_Sum_hk * rtb_Merge_dw) -
            rtb_Sum_j_tmp * rtb_Product3_pr;

          // If: '<S50>/If'
          if (asbCubeSatACS_ConstB.Abs_m < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
            //   ActionPort: '<S60>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_fcn5);

            // End of Outputs for SubSystem: '<S50>/If Action Subsystem'
          } else if (asbCubeSatACS_ConstB.Abs1_g < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S61>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_fcn5);

            // End of Outputs for SubSystem: '<S50>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S62>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_fcn5);

            // End of Outputs for SubSystem: '<S50>/If Action Subsystem2'
          }

          // Sqrt: '<S126>/sqrt' incorporates:
          //   Product: '<S127>/Product'
          //   Product: '<S127>/Product1'
          //   Product: '<S127>/Product2'
          //   Product: '<S127>/Product3'
          //   Sum: '<S127>/Sum'
          //   UnaryMinus: '<S24>/Unary Minus'
          //   UnaryMinus: '<S24>/Unary Minus1'
          //   UnaryMinus: '<S24>/Unary Minus2'

          rtb_Merge_dw = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi +
            -rtb_Product3_n4 * -rtb_Product3_n4) + -rtb_fcn2 * -rtb_fcn2) +
            -rtb_Product2_f5 * -rtb_Product2_f5);

          // Product: '<S122>/Product2' incorporates:
          //   UnaryMinus: '<S24>/Unary Minus1'

          rtb_fcn2 = -rtb_fcn2 / rtb_Merge_dw;

          // Product: '<S122>/Product3' incorporates:
          //   UnaryMinus: '<S24>/Unary Minus2'

          rtb_Product2_f5 = -rtb_Product2_f5 / rtb_Merge_dw;

          // Product: '<S122>/Product1' incorporates:
          //   UnaryMinus: '<S24>/Unary Minus'

          rtb_Sum_m = -rtb_Product3_n4 / rtb_Merge_dw;

          // Product: '<S122>/Product'
          rtb_Product3_hi /= rtb_Merge_dw;

          // Product: '<S123>/Product' incorporates:
          //   Product: '<S124>/Product'

          rtb_Merge_dw = rtb_Sum_m * rtb_fcn2;

          // Product: '<S123>/Product1' incorporates:
          //   Product: '<S124>/Product1'

          rtb_Sum_hk = rtb_Product3_hi * rtb_Product2_f5;

          // Product: '<S123>/Product7' incorporates:
          //   Product: '<S124>/Product7'

          rtb_Sum_j_tmp = rtb_Product2_f5 * rtb_Product2_f5;

          // Product: '<S123>/Product3' incorporates:
          //   Product: '<S125>/Product'

          rtb_fcn4 = rtb_Sum_m * rtb_Product2_f5;

          // Sum: '<S123>/Sum' incorporates:
          //   Constant: '<S123>/Constant'
          //   Constant: '<S7>/secondaryConstraint'
          //   Gain: '<S123>/Gain'
          //   Gain: '<S123>/Gain1'
          //   Gain: '<S123>/Gain2'
          //   Product: '<S123>/Product'
          //   Product: '<S123>/Product1'
          //   Product: '<S123>/Product2'
          //   Product: '<S123>/Product3'
          //   Product: '<S123>/Product5'
          //   Product: '<S123>/Product6'
          //   Product: '<S123>/Product7'
          //   Product: '<S123>/Product8'
          //   Sum: '<S123>/Sum1'
          //   Sum: '<S123>/Sum2'
          //   Sum: '<S123>/Sum3'

          rtb_Product3_pr = (((0.5 - rtb_fcn2 * rtb_fcn2) - rtb_Sum_j_tmp) * 2.0
                             * 0.0 + (rtb_Merge_dw + rtb_Sum_hk) * 2.0) +
            (rtb_fcn4 - rtb_Product3_hi * rtb_fcn2) * 2.0 * 0.0;

          // Product: '<S124>/Product2' incorporates:
          //   Product: '<S125>/Product2'

          rtb_Product_he = rtb_Product3_hi * rtb_Sum_m;

          // Sum: '<S124>/Sum3' incorporates:
          //   Constant: '<S124>/Constant'
          //   Product: '<S124>/Product6'
          //   Sum: '<S125>/Sum3'

          rtb_Sum_g2 = 0.5 - rtb_Sum_m * rtb_Sum_m;

          // Product: '<S124>/Product3' incorporates:
          //   Product: '<S125>/Product3'

          rtb_Product2_l5 = rtb_fcn2 * rtb_Product2_f5;

          // Sum: '<S124>/Sum' incorporates:
          //   Constant: '<S7>/secondaryConstraint'
          //   Gain: '<S124>/Gain'
          //   Gain: '<S124>/Gain1'
          //   Gain: '<S124>/Gain2'
          //   Product: '<S124>/Product2'
          //   Product: '<S124>/Product3'
          //   Product: '<S124>/Product4'
          //   Product: '<S124>/Product5'
          //   Sum: '<S124>/Sum1'
          //   Sum: '<S124>/Sum2'
          //   Sum: '<S124>/Sum3'

          rtb_Merge_dw = ((rtb_Merge_dw - rtb_Sum_hk) * 2.0 * 0.0 + (rtb_Sum_g2
            - rtb_Sum_j_tmp) * 2.0) + (rtb_Product_he + rtb_Product2_l5) * 2.0 *
            0.0;

          // Sum: '<S125>/Sum' incorporates:
          //   Constant: '<S7>/secondaryConstraint'
          //   Gain: '<S125>/Gain'
          //   Gain: '<S125>/Gain1'
          //   Gain: '<S125>/Gain2'
          //   Product: '<S125>/Product1'
          //   Product: '<S125>/Product4'
          //   Product: '<S125>/Product7'
          //   Product: '<S125>/Product8'
          //   Sum: '<S125>/Sum1'
          //   Sum: '<S125>/Sum2'
          //   Sum: '<S125>/Sum3'

          rtb_fcn4 = ((rtb_Product3_hi * rtb_fcn2 + rtb_fcn4) * 2.0 * 0.0 +
                      (rtb_Product2_l5 - rtb_Product_he) * 2.0) + (rtb_Sum_g2 -
            rtb_fcn2 * rtb_fcn2) * 2.0 * 0.0;

          // DotProduct: '<S51>/Dot Product1' incorporates:
          //   DotProduct: '<S56>/Dot Product2'
          //   DotProduct: '<S77>/Dot Product2'
          //   SignalConversion generated from: '<S51>/Dot Product1'

          rtb_fcn2 = (rtb_Product1_g * rtb_Product1_g + rtb_Sum * rtb_Sum) +
            rtb_Sum_ft * rtb_Sum_ft;

          // Product: '<S51>/Divide' incorporates:
          //   DotProduct: '<S51>/Dot Product1'
          //   DotProduct: '<S51>/Dot Product2'
          //   DotProduct: '<S51>/Dot Product3'
          //   Product: '<S51>/Divide1'
          //   SignalConversion generated from: '<S51>/Dot Product1'
          //   SignalConversion generated from: '<S51>/Dot Product2'
          //   Sqrt: '<S51>/Sqrt3'

          rtb_Product2_f5 = ((rtb_Product1_g * rtb_Product3_pr + rtb_Sum *
                              rtb_Merge_dw) + rtb_Sum_ft * rtb_fcn4) / std::sqrt
            (((rtb_Product3_pr * rtb_Product3_pr + rtb_Merge_dw * rtb_Merge_dw)
              + rtb_fcn4 * rtb_fcn4) * rtb_fcn2);

          // Abs: '<S51>/Abs' incorporates:
          //   Bias: '<S51>/Bias'

          rtb_Product3_hi = std::abs(rtb_Product2_f5 + -1.0);

          // Abs: '<S51>/Abs1' incorporates:
          //   Bias: '<S51>/Bias1'

          rtb_Product2_f5 = std::abs(rtb_Product2_f5 + 1.0);

          // If: '<S51>/If'
          if (rtb_Product3_hi < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
            //   ActionPort: '<S63>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Product2_f5);

            // End of Outputs for SubSystem: '<S51>/If Action Subsystem'
          } else if (rtb_Product2_f5 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S64>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Product2_f5);

            // End of Outputs for SubSystem: '<S51>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S65>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Product2_f5);

            // End of Outputs for SubSystem: '<S51>/If Action Subsystem2'
          }

          // RelationalOperator: '<S52>/Compare' incorporates:
          //   Constant: '<S52>/Constant'

          rtb_Compare = (rtb_fcn5 != 0.0);

          // RelationalOperator: '<S53>/Compare' incorporates:
          //   Constant: '<S53>/Constant'

          rtb_Compare_jn = (rtb_Product2_f5 != 0.0);

          // DotProduct: '<S56>/Dot Product3' incorporates:
          //   Constant: '<S7>/primaryAlignment'
          //   DotProduct: '<S77>/Dot Product3'
          //   SignalConversion generated from: '<S51>/Dot Product1'

          rtb_Product3_n4 = (0.0 * rtb_Product1_g + 0.0 * rtb_Sum) + rtb_Sum_ft;

          // Sum: '<S56>/Add2' incorporates:
          //   DotProduct: '<S56>/Dot Product3'
          //   Product: '<S56>/Divide1'
          //   Sqrt: '<S56>/Sqrt3'

          rtb_Product2_f5 = std::sqrt(rtb_fcn2 *
            asbCubeSatACS_ConstB.DotProduct1_hl) + rtb_Product3_n4;

          // Product: '<S77>/Divide' incorporates:
          //   Product: '<S77>/Divide1'
          //   Sqrt: '<S77>/Sqrt3'

          rtb_Product3_hi = rtb_Product3_n4 / std::sqrt(rtb_fcn2 *
            asbCubeSatACS_ConstB.DotProduct1_p);

          // Abs: '<S77>/Abs' incorporates:
          //   Bias: '<S77>/Bias'

          rtb_fcn5 = std::abs(rtb_Product3_hi + -1.0);

          // Abs: '<S77>/Abs1' incorporates:
          //   Bias: '<S77>/Bias1'

          rtb_Product3_hi = std::abs(rtb_Product3_hi + 1.0);

          // If: '<S77>/If'
          if (rtb_fcn5 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
            //   ActionPort: '<S83>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S77>/If Action Subsystem'
          } else if (rtb_Product3_hi < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S84>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S77>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S85>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S77>/If Action Subsystem2'
          }

          // Switch: '<S56>/is 180deg Rot' incorporates:
          //   Constant: '<S78>/Constant'
          //   Constant: '<S7>/primaryAlignment'
          //   Product: '<S81>/i x j'
          //   Product: '<S81>/j x k'
          //   Product: '<S81>/k x i'
          //   Product: '<S82>/i x k'
          //   Product: '<S82>/j x i'
          //   Product: '<S82>/k x j'
          //   RelationalOperator: '<S78>/Compare'
          //   Sum: '<S76>/Sum'

          if (rtb_Product3_hi != -1.0) {
            rtb_is180degRot_p_idx_0 = 0.0 * rtb_Sum_ft - rtb_Sum;
            rtb_is180degRot_p_idx_1 = rtb_Product1_g - 0.0 * rtb_Sum_ft;
            rtb_is180degRot_p_idx_2 = 0.0 * rtb_Sum - 0.0 * rtb_Product1_g;
          } else {
            rtb_is180degRot_p_idx_0 = asbCubeSatACS_ConstB.Sum_c[0];
            rtb_is180degRot_p_idx_1 = asbCubeSatACS_ConstB.Sum_c[1];
            rtb_is180degRot_p_idx_2 = asbCubeSatACS_ConstB.Sum_c[2];
          }

          // Sqrt: '<S89>/sqrt' incorporates:
          //   Product: '<S90>/Product'
          //   Product: '<S90>/Product1'
          //   Product: '<S90>/Product2'
          //   Product: '<S90>/Product3'
          //   Sum: '<S90>/Sum'

          rtb_Product3_hi = std::sqrt(((rtb_Product2_f5 * rtb_Product2_f5 +
            rtb_is180degRot_p_idx_0 * rtb_is180degRot_p_idx_0) +
            rtb_is180degRot_p_idx_1 * rtb_is180degRot_p_idx_1) +
            rtb_is180degRot_p_idx_2 * rtb_is180degRot_p_idx_2);

          // Product: '<S80>/Product'
          rtb_Product2_l5 = rtb_Product2_f5 / rtb_Product3_hi;

          // Sum: '<S112>/Sum' incorporates:
          //   Product: '<S114>/i x j'
          //   Product: '<S114>/j x k'
          //   Product: '<S114>/k x i'
          //   Product: '<S115>/i x k'
          //   Product: '<S115>/j x i'
          //   Product: '<S115>/k x j'

          rtb_fcn2 = rtb_Sum * rtb_fcn4 - rtb_Sum_ft * rtb_Merge_dw;
          rtb_fcn4 = rtb_Sum_ft * rtb_Product3_pr - rtb_Product1_g * rtb_fcn4;
          rtb_Product3_n4 = rtb_Product1_g * rtb_Merge_dw - rtb_Sum *
            rtb_Product3_pr;

          // Sum: '<S113>/Sum' incorporates:
          //   Product: '<S116>/i x j'
          //   Product: '<S116>/j x k'
          //   Product: '<S116>/k x i'
          //   Product: '<S117>/i x k'
          //   Product: '<S117>/j x i'
          //   Product: '<S117>/k x j'

          rtb_fcn5 = rtb_fcn2 * rtb_Sum;
          rtb_Product3_pr = rtb_fcn2 * rtb_Sum_ft;
          rtb_Merge_dw = rtb_fcn4 * rtb_Product1_g;
          rtb_fcn2 = rtb_fcn4 * rtb_Sum_ft - rtb_Product3_n4 * rtb_Sum;
          rtb_fcn4 = rtb_Product3_n4 * rtb_Product1_g - rtb_Product3_pr;
          rtb_Product3_n4 = rtb_fcn5 - rtb_Merge_dw;

          // Product: '<S80>/Product2'
          rtb_Product1_g = rtb_is180degRot_p_idx_1 / rtb_Product3_hi;

          // Product: '<S80>/Product1'
          rtb_Sum = rtb_is180degRot_p_idx_0 / rtb_Product3_hi;

          // Product: '<S80>/Product3'
          rtb_Sum_ft = rtb_is180degRot_p_idx_2 / rtb_Product3_hi;

          // Sqrt: '<S74>/sqrt' incorporates:
          //   Product: '<S75>/Product'
          //   Product: '<S75>/Product1'
          //   Product: '<S75>/Product2'
          //   Product: '<S75>/Product3'
          //   Sum: '<S75>/Sum'

          rtb_Product2_f5 = std::sqrt(((rtb_Product2_l5 * rtb_Product2_l5 +
            rtb_Sum * rtb_Sum) + rtb_Product1_g * rtb_Product1_g) + rtb_Sum_ft *
            rtb_Sum_ft);

          // Product: '<S70>/Product2'
          rtb_Product3_hi = rtb_Product1_g / rtb_Product2_f5;

          // Product: '<S70>/Product3'
          rtb_fcn5 = rtb_Sum_ft / rtb_Product2_f5;

          // Product: '<S70>/Product1'
          rtb_Product3_pr = rtb_Sum / rtb_Product2_f5;

          // Product: '<S70>/Product'
          rtb_Product2_f5 = rtb_Product2_l5 / rtb_Product2_f5;

          // Product: '<S71>/Product7' incorporates:
          //   Product: '<S72>/Product7'

          rtb_is180degRot_p_idx_0 = rtb_fcn5 * rtb_fcn5;

          // Product: '<S71>/Product' incorporates:
          //   Product: '<S72>/Product'

          rtb_is180degRot_p_idx_1 = rtb_Product3_pr * rtb_Product3_hi;

          // Product: '<S71>/Product3' incorporates:
          //   Product: '<S73>/Product'

          rtb_Sum_m = rtb_Product3_pr * rtb_fcn5;

          // Sum: '<S71>/Sum' incorporates:
          //   Constant: '<S71>/Constant'
          //   Gain: '<S71>/Gain'
          //   Gain: '<S71>/Gain1'
          //   Gain: '<S71>/Gain2'
          //   Product: '<S71>/Product'
          //   Product: '<S71>/Product1'
          //   Product: '<S71>/Product2'
          //   Product: '<S71>/Product3'
          //   Product: '<S71>/Product4'
          //   Product: '<S71>/Product5'
          //   Product: '<S71>/Product6'
          //   Product: '<S71>/Product7'
          //   Product: '<S71>/Product8'
          //   Sum: '<S71>/Sum1'
          //   Sum: '<S71>/Sum2'
          //   Sum: '<S71>/Sum3'

          rtb_Merge_dw = (((0.5 - rtb_Product3_hi * rtb_Product3_hi) -
                           rtb_is180degRot_p_idx_0) * 2.0 * rtb_fcn2 +
                          (rtb_Product2_f5 * rtb_fcn5 + rtb_is180degRot_p_idx_1)
                          * 2.0 * rtb_fcn4) + (rtb_Sum_m - rtb_Product2_f5 *
            rtb_Product3_hi) * 2.0 * rtb_Product3_n4;

          // Product: '<S72>/Product2' incorporates:
          //   Product: '<S73>/Product2'

          rtb_Sum_j_tmp = rtb_Product2_f5 * rtb_Product3_pr;

          // Sum: '<S72>/Sum3' incorporates:
          //   Constant: '<S72>/Constant'
          //   Product: '<S72>/Product6'
          //   Sum: '<S73>/Sum3'

          rtb_is180degRot_p_idx_2 = 0.5 - rtb_Product3_pr * rtb_Product3_pr;

          // Product: '<S72>/Product3' incorporates:
          //   Product: '<S73>/Product3'

          rtb_Product_he = rtb_Product3_hi * rtb_fcn5;

          // Sum: '<S72>/Sum' incorporates:
          //   Gain: '<S72>/Gain'
          //   Gain: '<S72>/Gain1'
          //   Gain: '<S72>/Gain2'
          //   Product: '<S72>/Product1'
          //   Product: '<S72>/Product2'
          //   Product: '<S72>/Product3'
          //   Product: '<S72>/Product4'
          //   Product: '<S72>/Product5'
          //   Product: '<S72>/Product8'
          //   Sum: '<S72>/Sum1'
          //   Sum: '<S72>/Sum2'
          //   Sum: '<S72>/Sum3'

          rtb_Product3_pr = ((rtb_is180degRot_p_idx_1 - rtb_Product2_f5 *
                              rtb_fcn5) * 2.0 * rtb_fcn2 +
                             (rtb_is180degRot_p_idx_2 - rtb_is180degRot_p_idx_0)
                             * 2.0 * rtb_fcn4) + (rtb_Sum_j_tmp + rtb_Product_he)
            * 2.0 * rtb_Product3_n4;

          // Sum: '<S73>/Sum' incorporates:
          //   Gain: '<S73>/Gain'
          //   Gain: '<S73>/Gain1'
          //   Gain: '<S73>/Gain2'
          //   Product: '<S73>/Product1'
          //   Product: '<S73>/Product4'
          //   Product: '<S73>/Product5'
          //   Product: '<S73>/Product7'
          //   Product: '<S73>/Product8'
          //   Sum: '<S73>/Sum1'
          //   Sum: '<S73>/Sum2'
          //   Sum: '<S73>/Sum3'

          rtb_Product3_hi = ((rtb_Product2_f5 * rtb_Product3_hi + rtb_Sum_m) *
                             2.0 * rtb_fcn2 + (rtb_Product_he - rtb_Sum_j_tmp) *
                             2.0 * rtb_fcn4) + (rtb_is180degRot_p_idx_2 -
            rtb_Product3_hi * rtb_Product3_hi) * 2.0 * rtb_Product3_n4;

          // Product: '<S92>/Divide' incorporates:
          //   DotProduct: '<S92>/Dot Product2'
          //   DotProduct: '<S92>/Dot Product3'
          //   Product: '<S92>/Divide1'
          //   SignalConversion generated from: '<S92>/Dot Product2'
          //   Sqrt: '<S92>/Sqrt3'
          //   Sum: '<S107>/Sum'

          rtb_Product2_f5 = ((asbCubeSatACS_ConstB.Sum_e[0] * rtb_Merge_dw +
                              asbCubeSatACS_ConstB.Sum_e[1] * rtb_Product3_pr) +
                             asbCubeSatACS_ConstB.Sum_e[2] * rtb_Product3_hi) /
            std::sqrt(((rtb_Merge_dw * rtb_Merge_dw + rtb_Product3_pr *
                        rtb_Product3_pr) + rtb_Product3_hi * rtb_Product3_hi) *
                      asbCubeSatACS_ConstB.DotProduct1_b);

          // If: '<S92>/If' incorporates:
          //   Abs: '<S92>/Abs'
          //   Abs: '<S92>/Abs1'
          //   Bias: '<S92>/Bias'
          //   Bias: '<S92>/Bias1'

          if (std::abs(rtb_Product2_f5 + -1.0) < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
            //   ActionPort: '<S98>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S92>/If Action Subsystem'
          } else if (std::abs(rtb_Product2_f5 + 1.0) < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S92>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S99>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S92>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S92>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S100>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S92>/If Action Subsystem2'
          }

          // Switch: '<S12>/Switch' incorporates:
          //   Constant: '<S93>/Constant'
          //   Logic: '<S12>/OR'
          //   Product: '<S66>/Product'
          //   Product: '<S66>/Product1'
          //   Product: '<S66>/Product2'
          //   Product: '<S66>/Product3'
          //   Product: '<S67>/Product'
          //   Product: '<S67>/Product1'
          //   Product: '<S67>/Product2'
          //   Product: '<S67>/Product3'
          //   Product: '<S68>/Product'
          //   Product: '<S68>/Product1'
          //   Product: '<S68>/Product2'
          //   Product: '<S68>/Product3'
          //   Product: '<S69>/Product'
          //   Product: '<S69>/Product1'
          //   Product: '<S69>/Product2'
          //   Product: '<S69>/Product3'
          //   RelationalOperator: '<S93>/Compare'
          //   Sum: '<S66>/Sum'
          //   Sum: '<S67>/Sum'
          //   Sum: '<S68>/Sum'
          //   Sum: '<S69>/Sum'
          //   Switch: '<S57>/is 180deg Rot'

          if (rtb_Compare || rtb_Compare_jn) {
            asbCubeSatACS_B.cmd_q_b2tgt[0] = rtb_Product2_l5;
            asbCubeSatACS_B.cmd_q_b2tgt[1] = rtb_Sum;
            asbCubeSatACS_B.cmd_q_b2tgt[2] = rtb_Product1_g;
            asbCubeSatACS_B.cmd_q_b2tgt[3] = rtb_Sum_ft;
          } else {
            if (rtb_fcn2 != -1.0) {
              // Switch: '<S57>/is 180deg Rot' incorporates:
              //   Product: '<S96>/i x j'
              //   Product: '<S96>/j x k'
              //   Product: '<S96>/k x i'
              //   Product: '<S97>/i x k'
              //   Product: '<S97>/j x i'
              //   Product: '<S97>/k x j'
              //   Sum: '<S91>/Sum'

              rtb_fcn2 = asbCubeSatACS_ConstB.Sum_e[1] * rtb_Product3_hi -
                asbCubeSatACS_ConstB.Sum_e[2] * rtb_Product3_pr;
              rtb_fcn4 = asbCubeSatACS_ConstB.Sum_e[2] * rtb_Merge_dw -
                asbCubeSatACS_ConstB.Sum_e[0] * rtb_Product3_hi;
              rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum_e[0] * rtb_Product3_pr
                - asbCubeSatACS_ConstB.Sum_e[1] * rtb_Merge_dw;
            } else {
              // Switch: '<S57>/is 180deg Rot'
              rtb_fcn2 = asbCubeSatACS_ConstB.Sum_ij[0];
              rtb_fcn4 = asbCubeSatACS_ConstB.Sum_ij[1];
              rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum_ij[2];
            }

            // Sum: '<S57>/Add2' incorporates:
            //   DotProduct: '<S57>/Dot Product2'
            //   DotProduct: '<S57>/Dot Product3'
            //   Product: '<S57>/Divide1'
            //   SignalConversion generated from: '<S92>/Dot Product2'
            //   Sqrt: '<S57>/Sqrt3'
            //   Sum: '<S107>/Sum'

            rtb_Product3_hi = std::sqrt(((rtb_Merge_dw * rtb_Merge_dw +
              rtb_Product3_pr * rtb_Product3_pr) + rtb_Product3_hi *
              rtb_Product3_hi) * asbCubeSatACS_ConstB.DotProduct1_d) +
              ((asbCubeSatACS_ConstB.Sum_e[0] * rtb_Merge_dw +
                asbCubeSatACS_ConstB.Sum_e[1] * rtb_Product3_pr) +
               asbCubeSatACS_ConstB.Sum_e[2] * rtb_Product3_hi);

            // Sqrt: '<S104>/sqrt' incorporates:
            //   Product: '<S105>/Product'
            //   Product: '<S105>/Product1'
            //   Product: '<S105>/Product2'
            //   Product: '<S105>/Product3'
            //   Sum: '<S105>/Sum'

            rtb_fcn5 = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi + rtb_fcn2 *
              rtb_fcn2) + rtb_fcn4 * rtb_fcn4) + rtb_Product3_n4 *
                                 rtb_Product3_n4);

            // Product: '<S95>/Product3'
            rtb_Product3_n4 /= rtb_fcn5;

            // Product: '<S95>/Product2'
            rtb_fcn4 /= rtb_fcn5;

            // Product: '<S95>/Product1'
            rtb_fcn2 /= rtb_fcn5;

            // Product: '<S95>/Product'
            rtb_Product3_hi /= rtb_fcn5;
            asbCubeSatACS_B.cmd_q_b2tgt[0] = ((rtb_Product2_l5 * rtb_Product3_hi
              - rtb_Sum * rtb_fcn2) - rtb_Product1_g * rtb_fcn4) - rtb_Sum_ft *
              rtb_Product3_n4;
            asbCubeSatACS_B.cmd_q_b2tgt[1] = ((rtb_Product2_l5 * rtb_fcn2 +
              rtb_Sum * rtb_Product3_hi) + rtb_Product1_g * rtb_Product3_n4) -
              rtb_Sum_ft * rtb_fcn4;
            asbCubeSatACS_B.cmd_q_b2tgt[2] = ((rtb_Product2_l5 * rtb_fcn4 -
              rtb_Sum * rtb_Product3_n4) + rtb_Product1_g * rtb_Product3_hi) +
              rtb_Sum_ft * rtb_fcn2;
            asbCubeSatACS_B.cmd_q_b2tgt[3] = ((rtb_Product2_l5 * rtb_Product3_n4
              + rtb_Sum * rtb_fcn4) - rtb_Product1_g * rtb_fcn2) + rtb_Sum_ft *
              rtb_Product3_hi;
          }

          // Sqrt: '<S134>/sqrt' incorporates:
          //   Product: '<S135>/Product'
          //   Product: '<S135>/Product1'
          //   Product: '<S135>/Product2'
          //   Product: '<S135>/Product3'
          //   Sum: '<S135>/Sum'

          rtb_Product2_f5 = std::sqrt(((asbCubeSatACS_B.cmd_q_b2tgt[0] *
            asbCubeSatACS_B.cmd_q_b2tgt[0] + asbCubeSatACS_B.cmd_q_b2tgt[1] *
            asbCubeSatACS_B.cmd_q_b2tgt[1]) + asbCubeSatACS_B.cmd_q_b2tgt[2] *
            asbCubeSatACS_B.cmd_q_b2tgt[2]) + asbCubeSatACS_B.cmd_q_b2tgt[3] *
            asbCubeSatACS_B.cmd_q_b2tgt[3]);

          // Product: '<S129>/Product'
          rtb_Product3_hi = asbCubeSatACS_B.cmd_q_b2tgt[0] / rtb_Product2_f5;

          // Product: '<S129>/Product1'
          rtb_fcn5 = asbCubeSatACS_B.cmd_q_b2tgt[1] / rtb_Product2_f5;

          // Product: '<S129>/Product2'
          rtb_Merge_dw = asbCubeSatACS_B.cmd_q_b2tgt[2] / rtb_Product2_f5;

          // Product: '<S129>/Product3'
          rtb_Product2_f5 = asbCubeSatACS_B.cmd_q_b2tgt[3] / rtb_Product2_f5;

          // Fcn: '<S9>/fcn3'
          rtb_Product1_g = (rtb_fcn5 * rtb_Product2_f5 + rtb_Product3_hi *
                            rtb_Merge_dw) * 2.0;

          // Fcn: '<S9>/fcn2' incorporates:
          //   Fcn: '<S9>/fcn5'

          rtb_fcn2 = rtb_fcn5 * rtb_fcn5;
          rtb_fcn4 = rtb_Merge_dw * rtb_Merge_dw;
          rtb_Product3_n4 = rtb_Product2_f5 * rtb_Product2_f5;
          rtb_Sum = rtb_Product3_hi * rtb_Product3_hi;

          // Trigonometry: '<S128>/Trigonometric Function1' incorporates:
          //   Fcn: '<S9>/fcn1'
          //   Fcn: '<S9>/fcn2'
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[0] = rt_atan2d_snf((rtb_Merge_dw *
            rtb_Product2_f5 - rtb_Product3_hi * rtb_fcn5) * -2.0, ((rtb_Sum -
            rtb_fcn2) - rtb_fcn4) + rtb_Product3_n4);

          // Trigonometry: '<S128>/Trigonometric Function3' incorporates:
          //   Fcn: '<S9>/fcn4'
          //   Fcn: '<S9>/fcn5'
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[2] = rt_atan2d_snf((rtb_fcn5 *
            rtb_Merge_dw - rtb_Product3_hi * rtb_Product2_f5) * -2.0, ((rtb_Sum
            + rtb_fcn2) - rtb_fcn4) - rtb_Product3_n4);

          // If: '<S130>/If' incorporates:
          //   Constant: '<S131>/Constant'
          //   Constant: '<S132>/Constant'

          if (rtb_Product1_g > 1.0) {
            // Outputs for IfAction SubSystem: '<S130>/If Action Subsystem' incorporates:
            //   ActionPort: '<S131>/Action Port'

            rtb_Product1_g = 1.0;

            // End of Outputs for SubSystem: '<S130>/If Action Subsystem'
          } else if (rtb_Product1_g < -1.0) {
            // Outputs for IfAction SubSystem: '<S130>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S132>/Action Port'

            rtb_Product1_g = 1.0;

            // End of Outputs for SubSystem: '<S130>/If Action Subsystem1'
          }

          // Trigonometry: '<S128>/trigFcn' incorporates:
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[1] = std::asin(rtb_Product1_g);
        }
      }
      break;

     case asbCubeSatACS_IN_Sun:
      {
        if (*rtu_AttitudeMode == 1.0) {
          asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Transition;
        } else {
          real_T rtb_Product1_g;
          real_T rtb_Product2_l5;
          real_T rtb_Product3_n4;
          real_T rtb_Product_he;
          real_T rtb_Sum;
          real_T rtb_Sum_ft;
          real_T rtb_Sum_g2;
          real_T rtb_Sum_hk;
          real_T rtb_Sum_j_tmp;
          real_T rtb_Sum_m;
          real_T rtb_fcn4;
          real_T rtb_is180degRot_p_idx_0;
          real_T rtb_is180degRot_p_idx_1;
          real_T rtb_is180degRot_p_idx_2;
          boolean_T rtb_Compare;
          boolean_T rtb_Compare_jn;

          // Sqrt: '<S154>/sqrt' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S155>/Product'
          //   Product: '<S155>/Product1'
          //   Product: '<S155>/Product2'
          //   Product: '<S155>/Product3'
          //   Sum: '<S155>/Sum'
          //   UnaryMinus: '<S137>/Unary Minus'
          //   UnaryMinus: '<S137>/Unary Minus1'
          //   UnaryMinus: '<S137>/Unary Minus2'

          rtb_Product3_pr = std::sqrt(((rtu_SensorsOut_q_eci2b[0] *
            rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
            -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
            -rtu_SensorsOut_q_eci2b[2]) + -rtu_SensorsOut_q_eci2b[3] *
            -rtu_SensorsOut_q_eci2b[3]);

          // Product: '<S153>/Product' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'

          rtb_fcn2 = rtu_SensorsOut_q_eci2b[0] / rtb_Product3_pr;

          // Product: '<S153>/Product1' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S137>/Unary Minus'

          rtb_Product1_g = -rtu_SensorsOut_q_eci2b[1] / rtb_Product3_pr;

          // Product: '<S153>/Product2' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S137>/Unary Minus1'

          rtb_Product2_l5 = -rtu_SensorsOut_q_eci2b[2] / rtb_Product3_pr;

          // Product: '<S153>/Product3' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S137>/Unary Minus2'

          rtb_Product3_n4 = -rtu_SensorsOut_q_eci2b[3] / rtb_Product3_pr;

          // Sqrt: '<S150>/sqrt' incorporates:
          //   Product: '<S151>/Product'
          //   Product: '<S151>/Product1'
          //   Product: '<S151>/Product2'
          //   Product: '<S151>/Product3'
          //   Sum: '<S151>/Sum'
          //   UnaryMinus: '<S152>/Unary Minus'
          //   UnaryMinus: '<S152>/Unary Minus1'
          //   UnaryMinus: '<S152>/Unary Minus2'

          rtb_Product3_pr = std::sqrt(((rtb_fcn2 * rtb_fcn2 + -rtb_Product1_g *
            -rtb_Product1_g) + -rtb_Product2_l5 * -rtb_Product2_l5) +
            -rtb_Product3_n4 * -rtb_Product3_n4);

          // Product: '<S146>/Product'
          rtb_fcn4 = rtb_fcn2 / rtb_Product3_pr;

          // Product: '<S146>/Product1' incorporates:
          //   UnaryMinus: '<S152>/Unary Minus'

          rtb_Merge_dw = -rtb_Product1_g / rtb_Product3_pr;

          // Product: '<S146>/Product2' incorporates:
          //   UnaryMinus: '<S152>/Unary Minus1'

          rtb_Product2_f5 = -rtb_Product2_l5 / rtb_Product3_pr;

          // Product: '<S146>/Product3' incorporates:
          //   UnaryMinus: '<S152>/Unary Minus2'

          rtb_Product3_pr = -rtb_Product3_n4 / rtb_Product3_pr;

          // Product: '<S147>/Product7' incorporates:
          //   Product: '<S148>/Product7'

          rtb_Product3_hi = rtb_Product3_pr * rtb_Product3_pr;

          // Product: '<S147>/Product1' incorporates:
          //   Product: '<S148>/Product1'

          rtb_fcn5 = rtb_fcn4 * rtb_Product3_pr;

          // Product: '<S147>/Product' incorporates:
          //   Product: '<S148>/Product'

          rtb_Sum_g2 = rtb_Merge_dw * rtb_Product2_f5;

          // Sum: '<S147>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S147>/Constant'
          //   Gain: '<S147>/Gain'
          //   Gain: '<S147>/Gain1'
          //   Gain: '<S147>/Gain2'
          //   Product: '<S147>/Product'
          //   Product: '<S147>/Product1'
          //   Product: '<S147>/Product2'
          //   Product: '<S147>/Product3'
          //   Product: '<S147>/Product4'
          //   Product: '<S147>/Product5'
          //   Product: '<S147>/Product6'
          //   Product: '<S147>/Product7'
          //   Product: '<S147>/Product8'
          //   Sum: '<S147>/Sum1'
          //   Sum: '<S147>/Sum2'
          //   Sum: '<S147>/Sum3'

          rtb_Sum = (((0.5 - rtb_Product2_f5 * rtb_Product2_f5) -
                      rtb_Product3_hi) * 2.0 * rtu_Environment_x_sun_eci[0] +
                     (rtb_Sum_g2 + rtb_fcn5) * 2.0 * rtu_Environment_x_sun_eci[1])
            + (rtb_Merge_dw * rtb_Product3_pr - rtb_fcn4 * rtb_Product2_f5) *
            2.0 * rtu_Environment_x_sun_eci[2];

          // Product: '<S148>/Product2' incorporates:
          //   Product: '<S149>/Product2'

          rtb_Sum_m = rtb_fcn4 * rtb_Merge_dw;

          // Sum: '<S148>/Sum3' incorporates:
          //   Constant: '<S148>/Constant'
          //   Product: '<S148>/Product6'
          //   Sum: '<S149>/Sum3'

          rtb_Product_he = 0.5 - rtb_Merge_dw * rtb_Merge_dw;

          // Sum: '<S148>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Gain: '<S148>/Gain'
          //   Gain: '<S148>/Gain1'
          //   Gain: '<S148>/Gain2'
          //   Product: '<S148>/Product2'
          //   Product: '<S148>/Product3'
          //   Product: '<S148>/Product4'
          //   Product: '<S148>/Product5'
          //   Product: '<S148>/Product8'
          //   Sum: '<S148>/Sum1'
          //   Sum: '<S148>/Sum2'
          //   Sum: '<S148>/Sum3'

          rtb_Sum_ft = ((rtb_Product_he - rtb_Product3_hi) * 2.0 *
                        rtu_Environment_x_sun_eci[1] + (rtb_Sum_g2 - rtb_fcn5) *
                        2.0 * rtu_Environment_x_sun_eci[0]) + (rtb_Product2_f5 *
            rtb_Product3_pr + rtb_Sum_m) * 2.0 * rtu_Environment_x_sun_eci[2];

          // Product: '<S149>/Product4' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Gain: '<S149>/Gain'
          //   Product: '<S149>/Product'
          //   Product: '<S149>/Product1'
          //   Sum: '<S149>/Sum1'

          rtb_Product3_hi = (rtb_Merge_dw * rtb_Product3_pr + rtb_fcn4 *
                             rtb_Product2_f5) * 2.0 * rtu_Environment_x_sun_eci
            [0];

          // Sum: '<S149>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Gain: '<S149>/Gain1'
          //   Gain: '<S149>/Gain2'
          //   Product: '<S149>/Product3'
          //   Product: '<S149>/Product5'
          //   Product: '<S149>/Product7'
          //   Product: '<S149>/Product8'
          //   Sum: '<S149>/Sum2'
          //   Sum: '<S149>/Sum3'

          rtb_Sum_m = ((rtb_Product2_f5 * rtb_Product3_pr - rtb_Sum_m) * 2.0 *
                       rtu_Environment_x_sun_eci[1] + rtb_Product3_hi) +
            (rtb_Product_he - rtb_Product2_f5 * rtb_Product2_f5) * 2.0 *
            rtu_Environment_x_sun_eci[2];

          // If: '<S156>/If'
          if (asbCubeSatACS_ConstB.Abs < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
            //   ActionPort: '<S166>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S156>/If Action Subsystem'
          } else if (asbCubeSatACS_ConstB.Abs1 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S167>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S156>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S168>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S156>/If Action Subsystem2'
          }

          // Sqrt: '<S232>/sqrt' incorporates:
          //   Product: '<S233>/Product'
          //   Product: '<S233>/Product1'
          //   Product: '<S233>/Product2'
          //   Product: '<S233>/Product3'
          //   Sum: '<S233>/Sum'
          //   UnaryMinus: '<S152>/Unary Minus'
          //   UnaryMinus: '<S152>/Unary Minus1'
          //   UnaryMinus: '<S152>/Unary Minus2'

          rtb_fcn5 = std::sqrt(((rtb_fcn2 * rtb_fcn2 + -rtb_Product1_g *
            -rtb_Product1_g) + -rtb_Product2_l5 * -rtb_Product2_l5) +
                               -rtb_Product3_n4 * -rtb_Product3_n4);

          // Product: '<S228>/Product2' incorporates:
          //   UnaryMinus: '<S152>/Unary Minus1'

          rtb_fcn4 = -rtb_Product2_l5 / rtb_fcn5;

          // Product: '<S228>/Product3' incorporates:
          //   UnaryMinus: '<S152>/Unary Minus2'

          rtb_Product3_n4 = -rtb_Product3_n4 / rtb_fcn5;

          // Product: '<S228>/Product1' incorporates:
          //   UnaryMinus: '<S152>/Unary Minus'

          rtb_Product_he = -rtb_Product1_g / rtb_fcn5;

          // Product: '<S228>/Product'
          rtb_fcn2 /= rtb_fcn5;

          // Product: '<S229>/Product7' incorporates:
          //   Product: '<S230>/Product7'

          rtb_fcn5 = rtb_Product3_n4 * rtb_Product3_n4;

          // Product: '<S229>/Product' incorporates:
          //   Product: '<S230>/Product'

          rtb_Sum_g2 = rtb_Product_he * rtb_fcn4;

          // Product: '<S229>/Product3' incorporates:
          //   Product: '<S231>/Product'

          rtb_Product3_pr = rtb_Product_he * rtb_Product3_n4;

          // Product: '<S229>/Product6' incorporates:
          //   Product: '<S231>/Product7'

          rtb_Merge_dw = rtb_fcn4 * rtb_fcn4;

          // Product: '<S229>/Product1' incorporates:
          //   Product: '<S230>/Product1'

          rtb_is180degRot_p_idx_0 = rtb_fcn2 * rtb_Product3_n4;

          // Product: '<S229>/Product2' incorporates:
          //   Product: '<S231>/Product1'

          rtb_is180degRot_p_idx_1 = rtb_fcn2 * rtb_fcn4;

          // Sum: '<S229>/Sum' incorporates:
          //   Constant: '<S136>/secondaryConstraint'
          //   Constant: '<S229>/Constant'
          //   Gain: '<S229>/Gain'
          //   Gain: '<S229>/Gain1'
          //   Gain: '<S229>/Gain2'
          //   Product: '<S229>/Product'
          //   Product: '<S229>/Product1'
          //   Product: '<S229>/Product2'
          //   Product: '<S229>/Product3'
          //   Product: '<S229>/Product4'
          //   Product: '<S229>/Product6'
          //   Product: '<S229>/Product7'
          //   Product: '<S229>/Product8'
          //   Sum: '<S229>/Sum1'
          //   Sum: '<S229>/Sum2'
          //   Sum: '<S229>/Sum3'

          rtb_Product1_g = (((0.5 - rtb_Merge_dw) - rtb_fcn5) * 2.0 * 0.0 +
                            (rtb_Sum_g2 + rtb_is180degRot_p_idx_0) * 2.0 * 0.0)
            + (rtb_Product3_pr - rtb_is180degRot_p_idx_1) * 2.0;

          // Product: '<S230>/Product3' incorporates:
          //   Product: '<S231>/Product3'

          rtb_Product2_f5 = rtb_fcn4 * rtb_Product3_n4;

          // Product: '<S230>/Product2' incorporates:
          //   Product: '<S231>/Product2'

          rtb_Product2_l5 = rtb_fcn2 * rtb_Product_he;

          // Sum: '<S230>/Sum3' incorporates:
          //   Constant: '<S230>/Constant'
          //   Product: '<S230>/Product6'
          //   Sum: '<S231>/Sum3'

          rtb_Product_he = 0.5 - rtb_Product_he * rtb_Product_he;

          // Sum: '<S230>/Sum' incorporates:
          //   Constant: '<S136>/secondaryConstraint'
          //   Gain: '<S230>/Gain'
          //   Gain: '<S230>/Gain1'
          //   Gain: '<S230>/Gain2'
          //   Product: '<S230>/Product2'
          //   Product: '<S230>/Product3'
          //   Product: '<S230>/Product4'
          //   Product: '<S230>/Product8'
          //   Sum: '<S230>/Sum1'
          //   Sum: '<S230>/Sum2'
          //   Sum: '<S230>/Sum3'

          rtb_fcn5 = ((rtb_Product_he - rtb_fcn5) * 2.0 * 0.0 + (rtb_Sum_g2 -
            rtb_is180degRot_p_idx_0) * 2.0 * 0.0) + (rtb_Product2_l5 +
            rtb_Product2_f5) * 2.0;

          // Sum: '<S231>/Sum' incorporates:
          //   Constant: '<S136>/secondaryConstraint'
          //   Gain: '<S231>/Gain'
          //   Gain: '<S231>/Gain1'
          //   Gain: '<S231>/Gain2'
          //   Product: '<S231>/Product4'
          //   Product: '<S231>/Product5'
          //   Sum: '<S231>/Sum1'
          //   Sum: '<S231>/Sum2'
          //   Sum: '<S231>/Sum3'

          rtb_Product2_f5 = ((rtb_Product3_pr + rtb_is180degRot_p_idx_1) * 2.0 *
                             0.0 + (rtb_Product2_f5 - rtb_Product2_l5) * 2.0 *
                             0.0) + (rtb_Product_he - rtb_Merge_dw) * 2.0;

          // DotProduct: '<S157>/Dot Product1' incorporates:
          //   DotProduct: '<S162>/Dot Product2'
          //   DotProduct: '<S183>/Dot Product2'
          //   SignalConversion generated from: '<S157>/Dot Product1'

          rtb_Product3_pr = (rtb_Sum * rtb_Sum + rtb_Sum_ft * rtb_Sum_ft) +
            rtb_Sum_m * rtb_Sum_m;

          // Product: '<S157>/Divide' incorporates:
          //   DotProduct: '<S157>/Dot Product1'
          //   DotProduct: '<S157>/Dot Product2'
          //   DotProduct: '<S157>/Dot Product3'
          //   Product: '<S157>/Divide1'
          //   SignalConversion generated from: '<S157>/Dot Product1'
          //   SignalConversion generated from: '<S157>/Dot Product2'
          //   Sqrt: '<S157>/Sqrt3'

          rtb_Merge_dw = ((rtb_Sum * rtb_Product1_g + rtb_Sum_ft * rtb_fcn5) +
                          rtb_Sum_m * rtb_Product2_f5) / std::sqrt
            (((rtb_Product1_g * rtb_Product1_g + rtb_fcn5 * rtb_fcn5) +
              rtb_Product2_f5 * rtb_Product2_f5) * rtb_Product3_pr);

          // Abs: '<S157>/Abs' incorporates:
          //   Bias: '<S157>/Bias'

          rtb_fcn4 = std::abs(rtb_Merge_dw + -1.0);

          // Abs: '<S157>/Abs1' incorporates:
          //   Bias: '<S157>/Bias1'

          rtb_Merge_dw = std::abs(rtb_Merge_dw + 1.0);

          // If: '<S157>/If'
          if (rtb_fcn4 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
            //   ActionPort: '<S169>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S157>/If Action Subsystem'
          } else if (rtb_Merge_dw < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S170>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S157>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S171>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S157>/If Action Subsystem2'
          }

          // RelationalOperator: '<S158>/Compare' incorporates:
          //   Constant: '<S158>/Constant'

          rtb_Compare = (rtb_Product3_hi != 0.0);

          // RelationalOperator: '<S159>/Compare' incorporates:
          //   Constant: '<S159>/Constant'

          rtb_Compare_jn = (rtb_Merge_dw != 0.0);

          // DotProduct: '<S162>/Dot Product3' incorporates:
          //   Constant: '<S136>/primaryAlignment'
          //   DotProduct: '<S183>/Dot Product3'
          //   SignalConversion generated from: '<S157>/Dot Product1'

          rtb_fcn2 = (0.0 * rtb_Sum + 0.0 * rtb_Sum_ft) + -rtb_Sum_m;

          // Sum: '<S162>/Add2' incorporates:
          //   DotProduct: '<S162>/Dot Product3'
          //   Product: '<S162>/Divide1'
          //   Sqrt: '<S162>/Sqrt3'

          rtb_Product3_hi = std::sqrt(rtb_Product3_pr *
            asbCubeSatACS_ConstB.DotProduct1_l) + rtb_fcn2;

          // Product: '<S183>/Divide' incorporates:
          //   Product: '<S183>/Divide1'
          //   Sqrt: '<S183>/Sqrt3'

          rtb_Merge_dw = rtb_fcn2 / std::sqrt(rtb_Product3_pr *
            asbCubeSatACS_ConstB.DotProduct1_f);

          // Abs: '<S183>/Abs' incorporates:
          //   Bias: '<S183>/Bias'

          rtb_fcn4 = std::abs(rtb_Merge_dw + -1.0);

          // Abs: '<S183>/Abs1' incorporates:
          //   Bias: '<S183>/Bias1'

          rtb_Merge_dw = std::abs(rtb_Merge_dw + 1.0);

          // If: '<S183>/If'
          if (rtb_fcn4 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
            //   ActionPort: '<S189>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S183>/If Action Subsystem'
          } else if (rtb_Merge_dw < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S190>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S183>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S183>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S191>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S183>/If Action Subsystem2'
          }

          // Switch: '<S162>/is 180deg Rot' incorporates:
          //   Constant: '<S136>/primaryAlignment'
          //   Constant: '<S184>/Constant'
          //   Product: '<S187>/i x j'
          //   Product: '<S187>/j x k'
          //   Product: '<S187>/k x i'
          //   Product: '<S188>/i x k'
          //   Product: '<S188>/j x i'
          //   Product: '<S188>/k x j'
          //   RelationalOperator: '<S184>/Compare'
          //   Sum: '<S182>/Sum'

          if (rtb_Merge_dw != -1.0) {
            rtb_fcn2 = 0.0 * rtb_Sum_m - (-rtb_Sum_ft);
            rtb_fcn4 = -rtb_Sum - 0.0 * rtb_Sum_m;
            rtb_Product3_n4 = 0.0 * rtb_Sum_ft - 0.0 * rtb_Sum;
          } else {
            rtb_fcn2 = asbCubeSatACS_ConstB.Sum[0];
            rtb_fcn4 = asbCubeSatACS_ConstB.Sum[1];
            rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum[2];
          }

          // Sqrt: '<S195>/sqrt' incorporates:
          //   Product: '<S196>/Product'
          //   Product: '<S196>/Product1'
          //   Product: '<S196>/Product2'
          //   Product: '<S196>/Product3'
          //   Sum: '<S196>/Sum'

          rtb_Merge_dw = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi +
            rtb_fcn2 * rtb_fcn2) + rtb_fcn4 * rtb_fcn4) + rtb_Product3_n4 *
            rtb_Product3_n4);

          // Product: '<S186>/Product'
          rtb_Product_he = rtb_Product3_hi / rtb_Merge_dw;

          // Sum: '<S218>/Sum' incorporates:
          //   Product: '<S220>/i x j'
          //   Product: '<S220>/j x k'
          //   Product: '<S220>/k x i'
          //   Product: '<S221>/i x k'
          //   Product: '<S221>/j x i'
          //   Product: '<S221>/k x j'

          rtb_Product3_pr = rtb_Sum_ft * rtb_Product2_f5 - rtb_Sum_m * rtb_fcn5;
          rtb_Product2_f5 = rtb_Sum_m * rtb_Product1_g - rtb_Sum *
            rtb_Product2_f5;
          rtb_Product2_l5 = rtb_Sum * rtb_fcn5 - rtb_Sum_ft * rtb_Product1_g;

          // Sum: '<S219>/Sum' incorporates:
          //   Product: '<S222>/i x j'
          //   Product: '<S222>/j x k'
          //   Product: '<S222>/k x i'
          //   Product: '<S223>/i x k'
          //   Product: '<S223>/j x i'
          //   Product: '<S223>/k x j'

          rtb_Product3_hi = rtb_Product3_pr * rtb_Sum_ft;
          rtb_fcn5 = rtb_Product3_pr * rtb_Sum_m;
          rtb_Product1_g = rtb_Product2_f5 * rtb_Sum;
          rtb_Product3_pr = rtb_Product2_f5 * rtb_Sum_m - rtb_Product2_l5 *
            rtb_Sum_ft;
          rtb_Product2_f5 = rtb_Product2_l5 * rtb_Sum - rtb_fcn5;
          rtb_Product2_l5 = rtb_Product3_hi - rtb_Product1_g;

          // Product: '<S186>/Product2'
          rtb_Sum = rtb_fcn4 / rtb_Merge_dw;

          // Product: '<S186>/Product1'
          rtb_Sum_ft = rtb_fcn2 / rtb_Merge_dw;

          // Product: '<S186>/Product3'
          rtb_Sum_m = rtb_Product3_n4 / rtb_Merge_dw;

          // Sqrt: '<S180>/sqrt' incorporates:
          //   Product: '<S181>/Product'
          //   Product: '<S181>/Product1'
          //   Product: '<S181>/Product2'
          //   Product: '<S181>/Product3'
          //   Sum: '<S181>/Sum'

          rtb_Product3_hi = std::sqrt(((rtb_Product_he * rtb_Product_he +
            rtb_Sum_ft * rtb_Sum_ft) + rtb_Sum * rtb_Sum) + rtb_Sum_m *
            rtb_Sum_m);

          // Product: '<S176>/Product2'
          rtb_fcn5 = rtb_Sum / rtb_Product3_hi;

          // Product: '<S176>/Product3'
          rtb_Product1_g = rtb_Sum_m / rtb_Product3_hi;

          // Product: '<S176>/Product1'
          rtb_Merge_dw = rtb_Sum_ft / rtb_Product3_hi;

          // Product: '<S176>/Product'
          rtb_Product3_hi = rtb_Product_he / rtb_Product3_hi;

          // Product: '<S177>/Product7' incorporates:
          //   Product: '<S178>/Product7'

          rtb_fcn2 = rtb_Product1_g * rtb_Product1_g;

          // Product: '<S177>/Product' incorporates:
          //   Product: '<S178>/Product'

          rtb_Sum_hk = rtb_Merge_dw * rtb_fcn5;

          // Product: '<S177>/Product3' incorporates:
          //   Product: '<S179>/Product'

          rtb_fcn4 = rtb_Merge_dw * rtb_Product1_g;

          // Product: '<S177>/Product6' incorporates:
          //   Product: '<S179>/Product7'

          rtb_Product3_n4 = rtb_fcn5 * rtb_fcn5;

          // Sum: '<S177>/Sum' incorporates:
          //   Constant: '<S177>/Constant'
          //   Gain: '<S177>/Gain'
          //   Gain: '<S177>/Gain1'
          //   Gain: '<S177>/Gain2'
          //   Product: '<S177>/Product'
          //   Product: '<S177>/Product1'
          //   Product: '<S177>/Product2'
          //   Product: '<S177>/Product3'
          //   Product: '<S177>/Product4'
          //   Product: '<S177>/Product5'
          //   Product: '<S177>/Product6'
          //   Product: '<S177>/Product7'
          //   Product: '<S177>/Product8'
          //   Sum: '<S177>/Sum1'
          //   Sum: '<S177>/Sum2'
          //   Sum: '<S177>/Sum3'

          rtb_Sum_g2 = (((0.5 - rtb_Product3_n4) - rtb_fcn2) * 2.0 *
                        rtb_Product3_pr + (rtb_Product3_hi * rtb_Product1_g +
            rtb_Sum_hk) * 2.0 * rtb_Product2_f5) + (rtb_fcn4 - rtb_Product3_hi *
            rtb_fcn5) * 2.0 * rtb_Product2_l5;

          // Product: '<S178>/Product3' incorporates:
          //   Product: '<S179>/Product3'

          rtb_Sum_j_tmp = rtb_fcn5 * rtb_Product1_g;

          // Product: '<S178>/Product2' incorporates:
          //   Product: '<S179>/Product2'

          rtb_is180degRot_p_idx_2 = rtb_Product3_hi * rtb_Merge_dw;

          // Sum: '<S178>/Sum3' incorporates:
          //   Constant: '<S178>/Constant'
          //   Product: '<S178>/Product6'
          //   Sum: '<S179>/Sum3'

          rtb_Merge_dw = 0.5 - rtb_Merge_dw * rtb_Merge_dw;

          // Sum: '<S178>/Sum' incorporates:
          //   Gain: '<S178>/Gain'
          //   Gain: '<S178>/Gain1'
          //   Gain: '<S178>/Gain2'
          //   Product: '<S178>/Product1'
          //   Product: '<S178>/Product2'
          //   Product: '<S178>/Product3'
          //   Product: '<S178>/Product4'
          //   Product: '<S178>/Product5'
          //   Product: '<S178>/Product8'
          //   Sum: '<S178>/Sum1'
          //   Sum: '<S178>/Sum2'
          //   Sum: '<S178>/Sum3'

          rtb_Sum_hk = ((rtb_Sum_hk - rtb_Product3_hi * rtb_Product1_g) * 2.0 *
                        rtb_Product3_pr + (rtb_Merge_dw - rtb_fcn2) * 2.0 *
                        rtb_Product2_f5) + (rtb_is180degRot_p_idx_2 +
            rtb_Sum_j_tmp) * 2.0 * rtb_Product2_l5;

          // Sum: '<S179>/Sum' incorporates:
          //   Gain: '<S179>/Gain'
          //   Gain: '<S179>/Gain1'
          //   Gain: '<S179>/Gain2'
          //   Product: '<S179>/Product1'
          //   Product: '<S179>/Product4'
          //   Product: '<S179>/Product5'
          //   Product: '<S179>/Product8'
          //   Sum: '<S179>/Sum1'
          //   Sum: '<S179>/Sum2'
          //   Sum: '<S179>/Sum3'

          rtb_fcn5 = ((rtb_Product3_hi * rtb_fcn5 + rtb_fcn4) * 2.0 *
                      rtb_Product3_pr + (rtb_Sum_j_tmp - rtb_is180degRot_p_idx_2)
                      * 2.0 * rtb_Product2_f5) + (rtb_Merge_dw - rtb_Product3_n4)
            * 2.0 * rtb_Product2_l5;

          // DotProduct: '<S198>/Dot Product2' incorporates:
          //   DotProduct: '<S163>/Dot Product2'
          //   SignalConversion generated from: '<S198>/Dot Product2'
          //   Switch: '<S141>/Switch'

          rtb_is180degRot_p_idx_0 = rtb_Sum_g2 * rtb_Sum_g2 + rtb_Sum_hk *
            rtb_Sum_hk;

          // DotProduct: '<S198>/Dot Product3' incorporates:
          //   DotProduct: '<S163>/Dot Product3'
          //   SignalConversion generated from: '<S198>/Dot Product2'
          //   Sum: '<S213>/Sum'
          //   Switch: '<S141>/Switch'

          rtb_Product3_pr = asbCubeSatACS_ConstB.Sum_i[0] * rtb_Sum_g2 +
            asbCubeSatACS_ConstB.Sum_i[1] * rtb_Sum_hk;

          // Product: '<S198>/Divide' incorporates:
          //   DotProduct: '<S198>/Dot Product2'
          //   DotProduct: '<S198>/Dot Product3'
          //   Product: '<S198>/Divide1'
          //   SignalConversion generated from: '<S198>/Dot Product2'
          //   Sqrt: '<S198>/Sqrt3'
          //   Sum: '<S213>/Sum'

          rtb_Product3_hi = (asbCubeSatACS_ConstB.Sum_i[2] * rtb_fcn5 +
                             rtb_Product3_pr) / std::sqrt((rtb_fcn5 * rtb_fcn5 +
            rtb_is180degRot_p_idx_0) * asbCubeSatACS_ConstB.DotProduct1_h);

          // If: '<S198>/If' incorporates:
          //   Abs: '<S198>/Abs'
          //   Abs: '<S198>/Abs1'
          //   Bias: '<S198>/Bias'
          //   Bias: '<S198>/Bias1'

          if (std::abs(rtb_Product3_hi + -1.0) < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
            //   ActionPort: '<S204>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S198>/If Action Subsystem'
          } else if (std::abs(rtb_Product3_hi + 1.0) < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S205>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S198>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S198>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S206>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S198>/If Action Subsystem2'
          }

          // Switch: '<S141>/Switch' incorporates:
          //   Constant: '<S199>/Constant'
          //   Logic: '<S141>/OR'
          //   Product: '<S172>/Product'
          //   Product: '<S172>/Product1'
          //   Product: '<S172>/Product2'
          //   Product: '<S172>/Product3'
          //   Product: '<S173>/Product'
          //   Product: '<S173>/Product1'
          //   Product: '<S173>/Product2'
          //   Product: '<S173>/Product3'
          //   Product: '<S174>/Product'
          //   Product: '<S174>/Product1'
          //   Product: '<S174>/Product2'
          //   Product: '<S174>/Product3'
          //   Product: '<S175>/Product'
          //   Product: '<S175>/Product1'
          //   Product: '<S175>/Product2'
          //   Product: '<S175>/Product3'
          //   RelationalOperator: '<S199>/Compare'
          //   Sum: '<S172>/Sum'
          //   Sum: '<S173>/Sum'
          //   Sum: '<S174>/Sum'
          //   Sum: '<S175>/Sum'
          //   Switch: '<S163>/is 180deg Rot'

          if (rtb_Compare || rtb_Compare_jn) {
            asbCubeSatACS_B.cmd_q_b2tgt[0] = rtb_Product_he;
            asbCubeSatACS_B.cmd_q_b2tgt[1] = rtb_Sum_ft;
            asbCubeSatACS_B.cmd_q_b2tgt[2] = rtb_Sum;
            asbCubeSatACS_B.cmd_q_b2tgt[3] = rtb_Sum_m;
          } else {
            if (rtb_fcn2 != -1.0) {
              // Switch: '<S163>/is 180deg Rot' incorporates:
              //   Product: '<S202>/i x j'
              //   Product: '<S202>/j x k'
              //   Product: '<S202>/k x i'
              //   Product: '<S203>/i x k'
              //   Product: '<S203>/j x i'
              //   Product: '<S203>/k x j'
              //   Sum: '<S197>/Sum'

              rtb_fcn2 = asbCubeSatACS_ConstB.Sum_i[1] * rtb_fcn5 -
                asbCubeSatACS_ConstB.Sum_i[2] * rtb_Sum_hk;
              rtb_fcn4 = asbCubeSatACS_ConstB.Sum_i[2] * rtb_Sum_g2 -
                asbCubeSatACS_ConstB.Sum_i[0] * rtb_fcn5;
              rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum_i[0] * rtb_Sum_hk -
                asbCubeSatACS_ConstB.Sum_i[1] * rtb_Sum_g2;
            } else {
              // Switch: '<S163>/is 180deg Rot'
              rtb_fcn2 = asbCubeSatACS_ConstB.Sum_iv[0];
              rtb_fcn4 = asbCubeSatACS_ConstB.Sum_iv[1];
              rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum_iv[2];
            }

            // Sum: '<S163>/Add2' incorporates:
            //   DotProduct: '<S163>/Dot Product2'
            //   DotProduct: '<S163>/Dot Product3'
            //   Product: '<S163>/Divide1'
            //   SignalConversion generated from: '<S198>/Dot Product2'
            //   Sqrt: '<S163>/Sqrt3'
            //   Sum: '<S213>/Sum'

            rtb_Product3_hi = std::sqrt((rtb_fcn5 * rtb_fcn5 +
              rtb_is180degRot_p_idx_0) * asbCubeSatACS_ConstB.DotProduct1_j) +
              (asbCubeSatACS_ConstB.Sum_i[2] * rtb_fcn5 + rtb_Product3_pr);

            // Sqrt: '<S210>/sqrt' incorporates:
            //   Product: '<S211>/Product'
            //   Product: '<S211>/Product1'
            //   Product: '<S211>/Product2'
            //   Product: '<S211>/Product3'
            //   Sum: '<S211>/Sum'

            rtb_fcn5 = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi + rtb_fcn2 *
              rtb_fcn2) + rtb_fcn4 * rtb_fcn4) + rtb_Product3_n4 *
                                 rtb_Product3_n4);

            // Product: '<S201>/Product3'
            rtb_Product3_n4 /= rtb_fcn5;

            // Product: '<S201>/Product2'
            rtb_fcn4 /= rtb_fcn5;

            // Product: '<S201>/Product1'
            rtb_fcn2 /= rtb_fcn5;

            // Product: '<S201>/Product'
            rtb_Product3_hi /= rtb_fcn5;
            asbCubeSatACS_B.cmd_q_b2tgt[0] = ((rtb_Product_he * rtb_Product3_hi
              - rtb_Sum_ft * rtb_fcn2) - rtb_Sum * rtb_fcn4) - rtb_Sum_m *
              rtb_Product3_n4;
            asbCubeSatACS_B.cmd_q_b2tgt[1] = ((rtb_Product_he * rtb_fcn2 +
              rtb_Sum_ft * rtb_Product3_hi) + rtb_Sum * rtb_Product3_n4) -
              rtb_Sum_m * rtb_fcn4;
            asbCubeSatACS_B.cmd_q_b2tgt[2] = ((rtb_Product_he * rtb_fcn4 -
              rtb_Sum_ft * rtb_Product3_n4) + rtb_Sum * rtb_Product3_hi) +
              rtb_Sum_m * rtb_fcn2;
            asbCubeSatACS_B.cmd_q_b2tgt[3] = ((rtb_Product_he * rtb_Product3_n4
              + rtb_Sum_ft * rtb_fcn4) - rtb_Sum * rtb_fcn2) + rtb_Sum_m *
              rtb_Product3_hi;
          }

          // Sqrt: '<S240>/sqrt' incorporates:
          //   Product: '<S241>/Product'
          //   Product: '<S241>/Product1'
          //   Product: '<S241>/Product2'
          //   Product: '<S241>/Product3'
          //   Sum: '<S241>/Sum'

          rtb_Product3_hi = std::sqrt(((asbCubeSatACS_B.cmd_q_b2tgt[0] *
            asbCubeSatACS_B.cmd_q_b2tgt[0] + asbCubeSatACS_B.cmd_q_b2tgt[1] *
            asbCubeSatACS_B.cmd_q_b2tgt[1]) + asbCubeSatACS_B.cmd_q_b2tgt[2] *
            asbCubeSatACS_B.cmd_q_b2tgt[2]) + asbCubeSatACS_B.cmd_q_b2tgt[3] *
            asbCubeSatACS_B.cmd_q_b2tgt[3]);

          // Product: '<S235>/Product'
          rtb_fcn5 = asbCubeSatACS_B.cmd_q_b2tgt[0] / rtb_Product3_hi;

          // Product: '<S235>/Product1'
          rtb_Product1_g = asbCubeSatACS_B.cmd_q_b2tgt[1] / rtb_Product3_hi;

          // Product: '<S235>/Product2'
          rtb_Product2_f5 = asbCubeSatACS_B.cmd_q_b2tgt[2] / rtb_Product3_hi;

          // Product: '<S235>/Product3'
          rtb_Product3_hi = asbCubeSatACS_B.cmd_q_b2tgt[3] / rtb_Product3_hi;

          // Fcn: '<S138>/fcn3'
          rtb_Product3_pr = (rtb_Product1_g * rtb_Product3_hi + rtb_fcn5 *
                             rtb_Product2_f5) * 2.0;

          // Fcn: '<S138>/fcn2' incorporates:
          //   Fcn: '<S138>/fcn5'

          rtb_fcn2 = rtb_fcn5 * rtb_fcn5;
          rtb_fcn4 = rtb_Product1_g * rtb_Product1_g;
          rtb_Product3_n4 = rtb_Product2_f5 * rtb_Product2_f5;
          rtb_Sum = rtb_Product3_hi * rtb_Product3_hi;

          // Trigonometry: '<S234>/Trigonometric Function1' incorporates:
          //   Fcn: '<S138>/fcn1'
          //   Fcn: '<S138>/fcn2'
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[0] = rt_atan2d_snf((rtb_Product2_f5 *
            rtb_Product3_hi - rtb_fcn5 * rtb_Product1_g) * -2.0, ((rtb_fcn2 -
            rtb_fcn4) - rtb_Product3_n4) + rtb_Sum);

          // Trigonometry: '<S234>/Trigonometric Function3' incorporates:
          //   Fcn: '<S138>/fcn4'
          //   Fcn: '<S138>/fcn5'
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[2] = rt_atan2d_snf((rtb_Product1_g *
            rtb_Product2_f5 - rtb_fcn5 * rtb_Product3_hi) * -2.0, ((rtb_fcn2 +
            rtb_fcn4) - rtb_Product3_n4) - rtb_Sum);

          // If: '<S236>/If' incorporates:
          //   Constant: '<S237>/Constant'
          //   Constant: '<S238>/Constant'

          if (rtb_Product3_pr > 1.0) {
            // Outputs for IfAction SubSystem: '<S236>/If Action Subsystem' incorporates:
            //   ActionPort: '<S237>/Action Port'

            rtb_Product3_pr = 1.0;

            // End of Outputs for SubSystem: '<S236>/If Action Subsystem'
          } else if (rtb_Product3_pr < -1.0) {
            // Outputs for IfAction SubSystem: '<S236>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S238>/Action Port'

            rtb_Product3_pr = 1.0;

            // End of Outputs for SubSystem: '<S236>/If Action Subsystem1'
          }

          // Trigonometry: '<S234>/trigFcn' incorporates:
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[1] = std::asin(rtb_Product3_pr);
        }
      }
      break;

     default:
      {
        // case IN_Transition:
        if (*rtu_AttitudeMode == 1.0) {
          real_T rtb_Product1_fn;
          real_T rtb_Product1_g;
          real_T rtb_Product2_l5;
          real_T rtb_Product3_n4;
          real_T rtb_Product_he;
          real_T rtb_Sum;
          real_T rtb_Sum_ft;
          real_T rtb_Sum_g2;
          real_T rtb_Sum_hk;
          real_T rtb_Sum_j_tmp;
          real_T rtb_Sum_m;
          real_T rtb_fcn4;
          real_T rtb_is180degRot_p_idx_0;
          real_T rtb_is180degRot_p_idx_1;
          real_T rtb_is180degRot_p_idx_2;
          boolean_T rtb_Compare;
          boolean_T rtb_Compare_jn;
          asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Earth;

          // Sqrt: '<S120>/sqrt' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S121>/Product'
          //   Product: '<S121>/Product1'
          //   Product: '<S121>/Product2'
          //   Product: '<S121>/Product3'
          //   Sum: '<S121>/Sum'
          //   UnaryMinus: '<S8>/Unary Minus'
          //   UnaryMinus: '<S8>/Unary Minus1'
          //   UnaryMinus: '<S8>/Unary Minus2'

          rtb_fcn2 = std::sqrt(((rtu_SensorsOut_q_eci2b[0] *
            rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
            -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
                                -rtu_SensorsOut_q_eci2b[2]) +
                               -rtu_SensorsOut_q_eci2b[3] *
                               -rtu_SensorsOut_q_eci2b[3]);

          // Product: '<S119>/Product' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'

          rtb_fcn4 = rtu_SensorsOut_q_eci2b[0] / rtb_fcn2;

          // Product: '<S119>/Product1' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S8>/Unary Minus'

          rtb_Product3_hi = -rtu_SensorsOut_q_eci2b[1] / rtb_fcn2;

          // Product: '<S119>/Product2' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S8>/Unary Minus1'

          rtb_Product3_n4 = -rtu_SensorsOut_q_eci2b[2] / rtb_fcn2;

          // Product: '<S119>/Product3' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S8>/Unary Minus2'

          rtb_fcn2 = -rtu_SensorsOut_q_eci2b[3] / rtb_fcn2;

          // Sqrt: '<S21>/sqrt' incorporates:
          //   Product: '<S22>/Product'
          //   Product: '<S22>/Product1'
          //   Product: '<S22>/Product2'
          //   Product: '<S22>/Product3'
          //   Sum: '<S22>/Sum'
          //   UnaryMinus: '<S118>/Unary Minus'
          //   UnaryMinus: '<S118>/Unary Minus1'
          //   UnaryMinus: '<S118>/Unary Minus2'

          rtb_Merge_dw = std::sqrt(((rtb_fcn4 * rtb_fcn4 + -rtb_Product3_hi *
            -rtb_Product3_hi) + -rtb_Product3_n4 * -rtb_Product3_n4) + -rtb_fcn2
            * -rtb_fcn2);

          // Product: '<S17>/Product'
          rtb_fcn4 /= rtb_Merge_dw;

          // Product: '<S17>/Product1' incorporates:
          //   UnaryMinus: '<S118>/Unary Minus'

          rtb_Sum_m = -rtb_Product3_hi / rtb_Merge_dw;

          // Product: '<S17>/Product2' incorporates:
          //   UnaryMinus: '<S118>/Unary Minus1'

          rtb_Product3_pr = -rtb_Product3_n4 / rtb_Merge_dw;

          // Product: '<S17>/Product3' incorporates:
          //   UnaryMinus: '<S118>/Unary Minus2'

          rtb_fcn2 = -rtb_fcn2 / rtb_Merge_dw;

          // Product: '<S18>/Product7' incorporates:
          //   Product: '<S19>/Product7'

          rtb_is180degRot_p_idx_0 = rtb_fcn2 * rtb_fcn2;

          // Product: '<S18>/Product' incorporates:
          //   Product: '<S19>/Product'

          rtb_is180degRot_p_idx_1 = rtb_Sum_m * rtb_Product3_pr;

          // Product: '<S18>/Product1' incorporates:
          //   Product: '<S19>/Product1'

          rtb_fcn5 = rtb_fcn4 * rtb_fcn2;

          // Product: '<S18>/Product6' incorporates:
          //   Product: '<S20>/Product7'

          rtb_Product2_f5 = rtb_Product3_pr * rtb_Product3_pr;

          // Sum: '<S18>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S18>/Constant'
          //   Gain: '<S10>/Gain'
          //   Gain: '<S18>/Gain'
          //   Gain: '<S18>/Gain1'
          //   Gain: '<S18>/Gain2'
          //   Product: '<S18>/Product'
          //   Product: '<S18>/Product1'
          //   Product: '<S18>/Product2'
          //   Product: '<S18>/Product3'
          //   Product: '<S18>/Product4'
          //   Product: '<S18>/Product5'
          //   Product: '<S18>/Product6'
          //   Product: '<S18>/Product7'
          //   Product: '<S18>/Product8'
          //   Sum: '<S18>/Sum1'
          //   Sum: '<S18>/Sum2'
          //   Sum: '<S18>/Sum3'

          rtb_Product1_g = (((0.5 - rtb_Product2_f5) - rtb_is180degRot_p_idx_0) *
                            2.0 * -rtu_SensorsOut_X_eci[0] +
                            (rtb_is180degRot_p_idx_1 + rtb_fcn5) * 2.0 *
                            -rtu_SensorsOut_X_eci[1]) + (rtb_Sum_m * rtb_fcn2 -
            rtb_fcn4 * rtb_Product3_pr) * 2.0 * -rtu_SensorsOut_X_eci[2];

          // Product: '<S19>/Product3' incorporates:
          //   Product: '<S20>/Product3'

          rtb_Sum_g2 = rtb_Product3_pr * rtb_fcn2;

          // Sum: '<S19>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S19>/Constant'
          //   Gain: '<S10>/Gain'
          //   Gain: '<S19>/Gain'
          //   Gain: '<S19>/Gain1'
          //   Gain: '<S19>/Gain2'
          //   Product: '<S19>/Product2'
          //   Product: '<S19>/Product3'
          //   Product: '<S19>/Product4'
          //   Product: '<S19>/Product5'
          //   Product: '<S19>/Product6'
          //   Product: '<S19>/Product8'
          //   Sum: '<S19>/Sum1'
          //   Sum: '<S19>/Sum2'
          //   Sum: '<S19>/Sum3'

          rtb_Sum = (((0.5 - rtb_Sum_m * rtb_Sum_m) - rtb_is180degRot_p_idx_0) *
                     2.0 * -rtu_SensorsOut_X_eci[1] + (rtb_is180degRot_p_idx_1 -
                      rtb_fcn5) * 2.0 * -rtu_SensorsOut_X_eci[0]) + (rtb_fcn4 *
            rtb_Sum_m + rtb_Sum_g2) * 2.0 * -rtu_SensorsOut_X_eci[2];

          // Sum: '<S20>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S20>/Constant'
          //   Gain: '<S10>/Gain'
          //   Gain: '<S20>/Gain'
          //   Gain: '<S20>/Gain1'
          //   Gain: '<S20>/Gain2'
          //   Product: '<S20>/Product'
          //   Product: '<S20>/Product1'
          //   Product: '<S20>/Product2'
          //   Product: '<S20>/Product4'
          //   Product: '<S20>/Product5'
          //   Product: '<S20>/Product6'
          //   Product: '<S20>/Product8'
          //   Sum: '<S20>/Sum1'
          //   Sum: '<S20>/Sum2'
          //   Sum: '<S20>/Sum3'

          rtb_Sum_ft = ((rtb_Sum_m * rtb_fcn2 + rtb_fcn4 * rtb_Product3_pr) *
                        2.0 * -rtu_SensorsOut_X_eci[0] + (rtb_Sum_g2 - rtb_fcn4 *
            rtb_Sum_m) * 2.0 * -rtu_SensorsOut_X_eci[1]) + ((0.5 - rtb_Sum_m *
            rtb_Sum_m) - rtb_Product2_f5) * 2.0 * -rtu_SensorsOut_X_eci[2];

          // Sum: '<S32>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S38>/i x j'
          //   Product: '<S38>/j x k'
          //   Product: '<S38>/k x i'
          //   Product: '<S39>/i x k'
          //   Product: '<S39>/j x i'
          //   Product: '<S39>/k x j'

          rtb_Product3_pr = rtu_SensorsOut_X_eci[1] * rtu_SensorsOut_V_eci[2] -
            rtu_SensorsOut_V_eci[1] * rtu_SensorsOut_X_eci[2];
          rtb_Product2_f5 = rtu_SensorsOut_V_eci[0] * rtu_SensorsOut_X_eci[2] -
            rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[2];
          rtb_Product2_l5 = rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[1] -
            rtu_SensorsOut_V_eci[0] * rtu_SensorsOut_X_eci[1];

          // Sum: '<S34>/Sum' incorporates:
          //   Constant: '<S23>/Constant'
          //   Product: '<S40>/i x j'
          //   Product: '<S40>/j x k'
          //   Product: '<S40>/k x i'
          //   Product: '<S41>/i x k'
          //   Product: '<S41>/j x i'
          //   Product: '<S41>/k x j'

          rtb_fcn2 = 0.0 * rtb_Product2_l5 - rtb_Product2_f5;
          rtb_fcn4 = rtb_Product3_pr - 0.0 * rtb_Product2_l5;
          rtb_Product3_n4 = 0.0 * rtb_Product2_f5 - rtb_Product3_pr * 0.0;

          // Sqrt: '<S23>/|r|' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   DotProduct: '<S23>/Dot Product'

          rtb_Product3_hi = std::sqrt((rtu_SensorsOut_X_eci[0] *
            rtu_SensorsOut_X_eci[0] + rtu_SensorsOut_X_eci[1] *
            rtu_SensorsOut_X_eci[1]) + rtu_SensorsOut_X_eci[2] *
            rtu_SensorsOut_X_eci[2]);

          // Sum: '<S23>/e = (v x h) // mu - r // |r|' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S23>/Constant2'
          //   Product: '<S23>/divide2'
          //   Product: '<S23>/divide3'
          //   Product: '<S42>/i x j'
          //   Product: '<S42>/j x k'
          //   Product: '<S42>/k x i'
          //   Product: '<S43>/i x k'
          //   Product: '<S43>/j x i'
          //   Product: '<S43>/k x j'
          //   Sum: '<S35>/Sum'

          rtb_is180degRot_p_idx_0 = (rtu_SensorsOut_V_eci[1] * rtb_Product2_l5 -
            rtb_Product2_f5 * rtu_SensorsOut_V_eci[2]) / 3.986004418E+14 -
            rtu_SensorsOut_X_eci[0] / rtb_Product3_hi;
          rtb_is180degRot_p_idx_1 = (rtb_Product3_pr * rtu_SensorsOut_V_eci[2] -
            rtu_SensorsOut_V_eci[0] * rtb_Product2_l5) / 3.986004418E+14 -
            rtu_SensorsOut_X_eci[1] / rtb_Product3_hi;
          rtb_is180degRot_p_idx_2 = (rtu_SensorsOut_V_eci[0] * rtb_Product2_f5 -
            rtb_Product3_pr * rtu_SensorsOut_V_eci[1]) / 3.986004418E+14 -
            rtu_SensorsOut_X_eci[2] / rtb_Product3_hi;

          // Sqrt: '<S23>/|n|' incorporates:
          //   DotProduct: '<S23>/Dot Product2'

          rtb_Merge_dw = std::sqrt((rtb_fcn2 * rtb_fcn2 + rtb_fcn4 * rtb_fcn4) +
            rtb_Product3_n4 * rtb_Product3_n4);

          // Sqrt: '<S23>/|e|' incorporates:
          //   DotProduct: '<S23>/Dot Product4'

          rtb_Sum_m = std::sqrt((rtb_is180degRot_p_idx_0 *
            rtb_is180degRot_p_idx_0 + rtb_is180degRot_p_idx_1 *
            rtb_is180degRot_p_idx_1) + rtb_is180degRot_p_idx_2 *
                                rtb_is180degRot_p_idx_2);

          // Product: '<S23>/Product'
          rtb_fcn5 = rtb_Merge_dw * rtb_Sum_m;

          // Product: '<S23>/Product1'
          rtb_Product1_fn = rtb_Sum_m * rtb_Product3_hi;

          // Product: '<S23>/divide'
          rtb_Product3_hi = rtb_fcn2 / rtb_Merge_dw;

          // MinMax: '<S30>/Min' incorporates:
          //   Constant: '<S30>/Constant'
          //   Product: '<S23>/divide'

          rtb_Merge_dw = std::fmin(rtb_fcn2 / rtb_Merge_dw, 1.0);

          // Switch: '<S23>/n_j < 0' incorporates:
          //   Constant: '<S23>/Constant1'
          //   Constant: '<S30>/Constant'
          //   Constant: '<S30>/Constant1'
          //   MinMax: '<S30>/Max'
          //   MinMax: '<S30>/Min'
          //   Sum: '<S23>/Sum'
          //   Trigonometry: '<S23>/RAAN = acos(n_i // |n|)'

          if (rtb_fcn4 >= 0.0) {
            rtb_Product3_hi = std::acos(std::fmax(-1.0, std::fmin
              (rtb_Product3_hi, 1.0)));
          } else {
            rtb_Product3_hi = 6.2831853071795862 - std::acos(std::fmax(-1.0,
              rtb_Merge_dw));
          }

          // Switch: '<S23>/e_k < 0' incorporates:
          //   Constant: '<S23>/Constant3'
          //   Constant: '<S29>/Constant'
          //   Constant: '<S29>/Constant1'
          //   DotProduct: '<S23>/Dot Product1'
          //   MinMax: '<S29>/Max'
          //   MinMax: '<S29>/Min'
          //   Product: '<S23>/divide4'
          //   Sum: '<S23>/Sum1'
          //   Trigonometry: '<S23>/argP = acos(n.e//|n||e|)'

          if (rtb_is180degRot_p_idx_2 >= 0.0) {
            rtb_fcn5 = std::acos(std::fmax(-1.0, std::fmin(((rtb_fcn2 *
              rtb_is180degRot_p_idx_0 + rtb_fcn4 * rtb_is180degRot_p_idx_1) +
              rtb_Product3_n4 * rtb_is180degRot_p_idx_2) / rtb_fcn5, 1.0)));
          } else {
            rtb_fcn5 = 6.2831853071795862 - std::acos(std::fmax(-1.0, std::fmin
              (((rtb_fcn2 * rtb_is180degRot_p_idx_0 + rtb_fcn4 *
                 rtb_is180degRot_p_idx_1) + rtb_Product3_n4 *
                rtb_is180degRot_p_idx_2) / rtb_fcn5, 1.0)));
          }

          // Switch: '<S23>/r.v < 0' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S23>/Constant4'
          //   Constant: '<S28>/Constant'
          //   Constant: '<S28>/Constant1'
          //   DotProduct: '<S23>/Dot Product5'
          //   DotProduct: '<S23>/Dot Product6'
          //   MinMax: '<S28>/Max'
          //   MinMax: '<S28>/Min'
          //   Product: '<S23>/divide5'
          //   Sum: '<S23>/Sum2'
          //   Trigonometry: '<S23>/nu = acos(e.r//|e||r|)'

          if ((rtu_SensorsOut_X_eci[0] * rtu_SensorsOut_V_eci[0] +
               rtu_SensorsOut_X_eci[1] * rtu_SensorsOut_V_eci[1]) +
              rtu_SensorsOut_X_eci[2] * rtu_SensorsOut_V_eci[2] >= 0.0) {
            rtb_fcn2 = std::acos(std::fmax(-1.0, std::fmin
              (((rtb_is180degRot_p_idx_0 * rtu_SensorsOut_X_eci[0] +
                 rtb_is180degRot_p_idx_1 * rtu_SensorsOut_X_eci[1]) +
                rtb_is180degRot_p_idx_2 * rtu_SensorsOut_X_eci[2]) /
               rtb_Product1_fn, 1.0)));
          } else {
            rtb_fcn2 = 6.2831853071795862 - std::acos(std::fmax(-1.0, std::fmin
              (((rtb_is180degRot_p_idx_0 * rtu_SensorsOut_X_eci[0] +
                 rtb_is180degRot_p_idx_1 * rtu_SensorsOut_X_eci[1]) +
                rtb_is180degRot_p_idx_2 * rtu_SensorsOut_X_eci[2]) /
               rtb_Product1_fn, 1.0)));
          }

          // Gain: '<S33>/1//2' incorporates:
          //   Constant: '<S31>/Constant'
          //   Constant: '<S31>/Constant1'
          //   DotProduct: '<S23>/Dot Product3'
          //   MinMax: '<S31>/Max'
          //   MinMax: '<S31>/Min'
          //   Product: '<S23>/divide1'
          //   Sqrt: '<S23>/|h|'
          //   Sum: '<S23>/Sum3'
          //   Trigonometry: '<S23>/i = acos(h_k // |h|)'

          rtb_is180degRot_p_idx_0 = 0.5 * rtb_Product3_hi;
          rtb_is180degRot_p_idx_1 = std::acos(std::fmax(-1.0, std::fmin
            (rtb_Product2_l5 / std::sqrt((rtb_Product3_pr * rtb_Product3_pr +
            rtb_Product2_f5 * rtb_Product2_f5) + rtb_Product2_l5 *
            rtb_Product2_l5), 1.0))) * 0.5;
          rtb_is180degRot_p_idx_2 = (rtb_fcn5 + rtb_fcn2) * 0.5;

          // Trigonometry: '<S33>/sincos'
          rtb_fcn2 = std::cos(rtb_is180degRot_p_idx_0);
          rtb_Product3_pr = std::sin(rtb_is180degRot_p_idx_0);
          rtb_fcn4 = std::cos(rtb_is180degRot_p_idx_1);
          rtb_Merge_dw = std::sin(rtb_is180degRot_p_idx_1);
          rtb_Product3_n4 = std::cos(rtb_is180degRot_p_idx_2);
          rtb_Product2_f5 = std::sin(rtb_is180degRot_p_idx_2);

          // Fcn: '<S33>/q0' incorporates:
          //   Fcn: '<S33>/q3'

          rtb_Sum_m = rtb_Product3_pr * rtb_fcn4;
          rtb_fcn4 *= rtb_fcn2;
          rtb_Product3_hi = rtb_fcn4 * rtb_Product3_n4 - rtb_Sum_m *
            rtb_Product2_f5;

          // Fcn: '<S33>/q1' incorporates:
          //   Fcn: '<S33>/q2'

          rtb_Product2_l5 = rtb_Product3_pr * rtb_Merge_dw;
          rtb_fcn2 *= rtb_Merge_dw;
          rtb_fcn5 = rtb_fcn2 * rtb_Product3_n4 + rtb_Product2_l5 *
            rtb_Product2_f5;

          // Fcn: '<S33>/q2'
          rtb_Merge_dw = rtb_Product2_l5 * rtb_Product3_n4 - rtb_fcn2 *
            rtb_Product2_f5;

          // Fcn: '<S33>/q3'
          rtb_Product3_pr = rtb_Sum_m * rtb_Product3_n4 + rtb_fcn4 *
            rtb_Product2_f5;

          // Sqrt: '<S36>/sqrt' incorporates:
          //   Product: '<S37>/Product'
          //   Product: '<S37>/Product1'
          //   Product: '<S37>/Product2'
          //   Product: '<S37>/Product3'
          //   Sum: '<S37>/Sum'

          rtb_Sum_m = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi + rtb_fcn5 *
            rtb_fcn5) + rtb_Merge_dw * rtb_Merge_dw) + rtb_Product3_pr *
                                rtb_Product3_pr);

          // Product: '<S27>/Product'
          rtb_Product3_hi /= rtb_Sum_m;

          // Product: '<S27>/Product1'
          rtb_fcn5 /= rtb_Sum_m;

          // Product: '<S27>/Product2'
          rtb_Merge_dw /= rtb_Sum_m;

          // Product: '<S27>/Product3'
          rtb_Product3_pr /= rtb_Sum_m;

          // Sqrt: '<S48>/sqrt' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S49>/Product'
          //   Product: '<S49>/Product1'
          //   Product: '<S49>/Product2'
          //   Product: '<S49>/Product3'
          //   Sum: '<S49>/Sum'
          //   UnaryMinus: '<S8>/Unary Minus'
          //   UnaryMinus: '<S8>/Unary Minus1'
          //   UnaryMinus: '<S8>/Unary Minus2'

          rtb_Sum_m = std::sqrt(((rtu_SensorsOut_q_eci2b[0] *
            rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
            -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
            -rtu_SensorsOut_q_eci2b[2]) + -rtu_SensorsOut_q_eci2b[3] *
                                -rtu_SensorsOut_q_eci2b[3]);

          // Product: '<S26>/Product' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'

          rtb_fcn4 = rtu_SensorsOut_q_eci2b[0] / rtb_Sum_m;

          // Product: '<S26>/Product1' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S8>/Unary Minus'

          rtb_Product2_l5 = -rtu_SensorsOut_q_eci2b[1] / rtb_Sum_m;

          // Product: '<S26>/Product2' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S8>/Unary Minus1'

          rtb_Product_he = -rtu_SensorsOut_q_eci2b[2] / rtb_Sum_m;

          // Product: '<S26>/Product3' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S8>/Unary Minus2'

          rtb_Sum_m = -rtu_SensorsOut_q_eci2b[3] / rtb_Sum_m;

          // Sum: '<S45>/Sum' incorporates:
          //   Product: '<S45>/Product'
          //   Product: '<S45>/Product1'
          //   Product: '<S45>/Product2'
          //   Product: '<S45>/Product3'

          rtb_Product3_n4 = ((rtb_fcn4 * rtb_fcn5 + rtb_Product2_l5 *
                              rtb_Product3_hi) + rtb_Product_he *
                             rtb_Product3_pr) - rtb_Sum_m * rtb_Merge_dw;

          // Sum: '<S46>/Sum' incorporates:
          //   Product: '<S46>/Product'
          //   Product: '<S46>/Product1'
          //   Product: '<S46>/Product2'
          //   Product: '<S46>/Product3'

          rtb_fcn2 = ((rtb_fcn4 * rtb_Merge_dw - rtb_Product2_l5 *
                       rtb_Product3_pr) + rtb_Product_he * rtb_Product3_hi) +
            rtb_Sum_m * rtb_fcn5;

          // Sum: '<S47>/Sum' incorporates:
          //   Product: '<S47>/Product'
          //   Product: '<S47>/Product1'
          //   Product: '<S47>/Product2'
          //   Product: '<S47>/Product3'

          rtb_Product2_f5 = ((rtb_fcn4 * rtb_Product3_pr + rtb_Product2_l5 *
                              rtb_Merge_dw) - rtb_Product_he * rtb_fcn5) +
            rtb_Sum_m * rtb_Product3_hi;

          // Sum: '<S44>/Sum' incorporates:
          //   Product: '<S44>/Product'
          //   Product: '<S44>/Product1'
          //   Product: '<S44>/Product2'
          //   Product: '<S44>/Product3'

          rtb_Product3_hi = ((rtb_fcn4 * rtb_Product3_hi - rtb_Product2_l5 *
                              rtb_fcn5) - rtb_Product_he * rtb_Merge_dw) -
            rtb_Sum_m * rtb_Product3_pr;

          // If: '<S50>/If'
          if (asbCubeSatACS_ConstB.Abs_m < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
            //   ActionPort: '<S60>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_fcn5);

            // End of Outputs for SubSystem: '<S50>/If Action Subsystem'
          } else if (asbCubeSatACS_ConstB.Abs1_g < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S61>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_fcn5);

            // End of Outputs for SubSystem: '<S50>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S62>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_fcn5);

            // End of Outputs for SubSystem: '<S50>/If Action Subsystem2'
          }

          // Sqrt: '<S126>/sqrt' incorporates:
          //   Product: '<S127>/Product'
          //   Product: '<S127>/Product1'
          //   Product: '<S127>/Product2'
          //   Product: '<S127>/Product3'
          //   Sum: '<S127>/Sum'
          //   UnaryMinus: '<S24>/Unary Minus'
          //   UnaryMinus: '<S24>/Unary Minus1'
          //   UnaryMinus: '<S24>/Unary Minus2'

          rtb_Merge_dw = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi +
            -rtb_Product3_n4 * -rtb_Product3_n4) + -rtb_fcn2 * -rtb_fcn2) +
            -rtb_Product2_f5 * -rtb_Product2_f5);

          // Product: '<S122>/Product2' incorporates:
          //   UnaryMinus: '<S24>/Unary Minus1'

          rtb_fcn2 = -rtb_fcn2 / rtb_Merge_dw;

          // Product: '<S122>/Product3' incorporates:
          //   UnaryMinus: '<S24>/Unary Minus2'

          rtb_Product2_f5 = -rtb_Product2_f5 / rtb_Merge_dw;

          // Product: '<S122>/Product1' incorporates:
          //   UnaryMinus: '<S24>/Unary Minus'

          rtb_Sum_m = -rtb_Product3_n4 / rtb_Merge_dw;

          // Product: '<S122>/Product'
          rtb_Product3_hi /= rtb_Merge_dw;

          // Product: '<S123>/Product' incorporates:
          //   Product: '<S124>/Product'

          rtb_Merge_dw = rtb_Sum_m * rtb_fcn2;

          // Product: '<S123>/Product1' incorporates:
          //   Product: '<S124>/Product1'

          rtb_Sum_hk = rtb_Product3_hi * rtb_Product2_f5;

          // Product: '<S123>/Product7' incorporates:
          //   Product: '<S124>/Product7'

          rtb_Sum_j_tmp = rtb_Product2_f5 * rtb_Product2_f5;

          // Product: '<S123>/Product3' incorporates:
          //   Product: '<S125>/Product'

          rtb_fcn4 = rtb_Sum_m * rtb_Product2_f5;

          // Product: '<S123>/Product2' incorporates:
          //   Product: '<S125>/Product1'

          rtb_Product3_n4 = rtb_Product3_hi * rtb_fcn2;

          // Product: '<S123>/Product6' incorporates:
          //   Product: '<S125>/Product7'

          rtb_Product2_l5 = rtb_fcn2 * rtb_fcn2;

          // Sum: '<S123>/Sum' incorporates:
          //   Constant: '<S123>/Constant'
          //   Constant: '<S7>/secondaryConstraint'
          //   Gain: '<S123>/Gain'
          //   Gain: '<S123>/Gain1'
          //   Gain: '<S123>/Gain2'
          //   Product: '<S123>/Product'
          //   Product: '<S123>/Product1'
          //   Product: '<S123>/Product2'
          //   Product: '<S123>/Product3'
          //   Product: '<S123>/Product5'
          //   Product: '<S123>/Product6'
          //   Product: '<S123>/Product7'
          //   Product: '<S123>/Product8'
          //   Sum: '<S123>/Sum1'
          //   Sum: '<S123>/Sum2'
          //   Sum: '<S123>/Sum3'

          rtb_Product3_pr = (((0.5 - rtb_Product2_l5) - rtb_Sum_j_tmp) * 2.0 *
                             0.0 + (rtb_Merge_dw + rtb_Sum_hk) * 2.0) +
            (rtb_fcn4 - rtb_Product3_n4) * 2.0 * 0.0;

          // Product: '<S124>/Product3' incorporates:
          //   Product: '<S125>/Product3'

          rtb_Product_he = rtb_fcn2 * rtb_Product2_f5;

          // Product: '<S124>/Product2' incorporates:
          //   Product: '<S125>/Product2'

          rtb_Sum_g2 = rtb_Product3_hi * rtb_Sum_m;

          // Sum: '<S124>/Sum3' incorporates:
          //   Constant: '<S124>/Constant'
          //   Product: '<S124>/Product6'
          //   Sum: '<S125>/Sum3'

          rtb_fcn2 = 0.5 - rtb_Sum_m * rtb_Sum_m;

          // Sum: '<S124>/Sum' incorporates:
          //   Constant: '<S7>/secondaryConstraint'
          //   Gain: '<S124>/Gain'
          //   Gain: '<S124>/Gain1'
          //   Gain: '<S124>/Gain2'
          //   Product: '<S124>/Product2'
          //   Product: '<S124>/Product3'
          //   Product: '<S124>/Product4'
          //   Product: '<S124>/Product5'
          //   Sum: '<S124>/Sum1'
          //   Sum: '<S124>/Sum2'
          //   Sum: '<S124>/Sum3'

          rtb_Merge_dw = ((rtb_Merge_dw - rtb_Sum_hk) * 2.0 * 0.0 + (rtb_fcn2 -
            rtb_Sum_j_tmp) * 2.0) + (rtb_Sum_g2 + rtb_Product_he) * 2.0 * 0.0;

          // Sum: '<S125>/Sum' incorporates:
          //   Constant: '<S7>/secondaryConstraint'
          //   Gain: '<S125>/Gain'
          //   Gain: '<S125>/Gain1'
          //   Gain: '<S125>/Gain2'
          //   Product: '<S125>/Product4'
          //   Product: '<S125>/Product8'
          //   Sum: '<S125>/Sum1'
          //   Sum: '<S125>/Sum2'
          //   Sum: '<S125>/Sum3'

          rtb_fcn4 = ((rtb_fcn4 + rtb_Product3_n4) * 2.0 * 0.0 + (rtb_Product_he
            - rtb_Sum_g2) * 2.0) + (rtb_fcn2 - rtb_Product2_l5) * 2.0 * 0.0;

          // DotProduct: '<S51>/Dot Product1' incorporates:
          //   DotProduct: '<S56>/Dot Product2'
          //   DotProduct: '<S77>/Dot Product2'
          //   SignalConversion generated from: '<S51>/Dot Product1'

          rtb_fcn2 = rtb_Sum * rtb_Sum;
          rtb_Sum_m = rtb_Sum_ft * rtb_Sum_ft;
          rtb_Product_he = (rtb_Product1_g * rtb_Product1_g + rtb_fcn2) +
            rtb_Sum_m;

          // Product: '<S51>/Divide' incorporates:
          //   DotProduct: '<S51>/Dot Product1'
          //   DotProduct: '<S51>/Dot Product2'
          //   DotProduct: '<S51>/Dot Product3'
          //   Product: '<S51>/Divide1'
          //   SignalConversion generated from: '<S51>/Dot Product1'
          //   SignalConversion generated from: '<S51>/Dot Product2'
          //   Sqrt: '<S51>/Sqrt3'

          rtb_Product2_f5 = ((rtb_Product1_g * rtb_Product3_pr + rtb_Sum *
                              rtb_Merge_dw) + rtb_Sum_ft * rtb_fcn4) / std::sqrt
            (((rtb_Product3_pr * rtb_Product3_pr + rtb_Merge_dw * rtb_Merge_dw)
              + rtb_fcn4 * rtb_fcn4) * rtb_Product_he);

          // Abs: '<S51>/Abs' incorporates:
          //   Bias: '<S51>/Bias'

          rtb_Product3_hi = std::abs(rtb_Product2_f5 + -1.0);

          // Abs: '<S51>/Abs1' incorporates:
          //   Bias: '<S51>/Bias1'

          rtb_Product2_f5 = std::abs(rtb_Product2_f5 + 1.0);

          // If: '<S51>/If'
          if (rtb_Product3_hi < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
            //   ActionPort: '<S63>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Product2_f5);

            // End of Outputs for SubSystem: '<S51>/If Action Subsystem'
          } else if (rtb_Product2_f5 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S64>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Product2_f5);

            // End of Outputs for SubSystem: '<S51>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S65>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Product2_f5);

            // End of Outputs for SubSystem: '<S51>/If Action Subsystem2'
          }

          // RelationalOperator: '<S52>/Compare' incorporates:
          //   Constant: '<S52>/Constant'

          rtb_Compare = (rtb_fcn5 != 0.0);

          // RelationalOperator: '<S53>/Compare' incorporates:
          //   Constant: '<S53>/Constant'

          rtb_Compare_jn = (rtb_Product2_f5 != 0.0);

          // Sum: '<S56>/Add2' incorporates:
          //   Constant: '<S7>/primaryAlignment'
          //   DotProduct: '<S56>/Dot Product3'
          //   Product: '<S56>/Divide1'
          //   SignalConversion generated from: '<S51>/Dot Product1'
          //   Sqrt: '<S56>/Sqrt3'

          rtb_Product2_f5 = ((0.0 * rtb_Product1_g + 0.0 * rtb_Sum) + rtb_Sum_ft)
            + std::sqrt(rtb_Product_he * asbCubeSatACS_ConstB.DotProduct1_hl);

          // Product: '<S77>/Divide' incorporates:
          //   Constant: '<S7>/primaryAlignment'
          //   DotProduct: '<S77>/Dot Product2'
          //   DotProduct: '<S77>/Dot Product3'
          //   Product: '<S77>/Divide1'
          //   SignalConversion generated from: '<S51>/Dot Product1'
          //   Sqrt: '<S77>/Sqrt3'

          rtb_Product3_hi = ((0.0 * rtb_Product1_g + 0.0 * rtb_Sum) + rtb_Sum_ft)
            / std::sqrt(((rtb_Product1_g * rtb_Product1_g + rtb_fcn2) +
                         rtb_Sum_m) * asbCubeSatACS_ConstB.DotProduct1_p);

          // Abs: '<S77>/Abs' incorporates:
          //   Bias: '<S77>/Bias'

          rtb_fcn5 = std::abs(rtb_Product3_hi + -1.0);

          // Abs: '<S77>/Abs1' incorporates:
          //   Bias: '<S77>/Bias1'

          rtb_Product3_hi = std::abs(rtb_Product3_hi + 1.0);

          // If: '<S77>/If'
          if (rtb_fcn5 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
            //   ActionPort: '<S83>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S77>/If Action Subsystem'
          } else if (rtb_Product3_hi < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S84>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S77>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S85>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S77>/If Action Subsystem2'
          }

          // Switch: '<S56>/is 180deg Rot' incorporates:
          //   Constant: '<S78>/Constant'
          //   Constant: '<S7>/primaryAlignment'
          //   Product: '<S81>/i x j'
          //   Product: '<S81>/j x k'
          //   Product: '<S81>/k x i'
          //   Product: '<S82>/i x k'
          //   Product: '<S82>/j x i'
          //   Product: '<S82>/k x j'
          //   RelationalOperator: '<S78>/Compare'
          //   Sum: '<S76>/Sum'

          if (rtb_Product3_hi != -1.0) {
            rtb_is180degRot_p_idx_0 = 0.0 * rtb_Sum_ft - rtb_Sum;
            rtb_is180degRot_p_idx_1 = rtb_Product1_g - 0.0 * rtb_Sum_ft;
            rtb_is180degRot_p_idx_2 = 0.0 * rtb_Sum - 0.0 * rtb_Product1_g;
          } else {
            rtb_is180degRot_p_idx_0 = asbCubeSatACS_ConstB.Sum_c[0];
            rtb_is180degRot_p_idx_1 = asbCubeSatACS_ConstB.Sum_c[1];
            rtb_is180degRot_p_idx_2 = asbCubeSatACS_ConstB.Sum_c[2];
          }

          // Sqrt: '<S89>/sqrt' incorporates:
          //   Product: '<S90>/Product'
          //   Product: '<S90>/Product1'
          //   Product: '<S90>/Product2'
          //   Product: '<S90>/Product3'
          //   Sum: '<S90>/Sum'

          rtb_Product3_hi = std::sqrt(((rtb_Product2_f5 * rtb_Product2_f5 +
            rtb_is180degRot_p_idx_0 * rtb_is180degRot_p_idx_0) +
            rtb_is180degRot_p_idx_1 * rtb_is180degRot_p_idx_1) +
            rtb_is180degRot_p_idx_2 * rtb_is180degRot_p_idx_2);

          // Product: '<S80>/Product'
          rtb_Product2_l5 = rtb_Product2_f5 / rtb_Product3_hi;

          // Sum: '<S112>/Sum' incorporates:
          //   Product: '<S114>/i x j'
          //   Product: '<S114>/j x k'
          //   Product: '<S114>/k x i'
          //   Product: '<S115>/i x k'
          //   Product: '<S115>/j x i'
          //   Product: '<S115>/k x j'

          rtb_fcn2 = rtb_Sum * rtb_fcn4 - rtb_Sum_ft * rtb_Merge_dw;
          rtb_fcn4 = rtb_Sum_ft * rtb_Product3_pr - rtb_Product1_g * rtb_fcn4;
          rtb_Product3_n4 = rtb_Product1_g * rtb_Merge_dw - rtb_Sum *
            rtb_Product3_pr;

          // Sum: '<S113>/Sum' incorporates:
          //   Product: '<S116>/i x j'
          //   Product: '<S116>/j x k'
          //   Product: '<S116>/k x i'
          //   Product: '<S117>/i x k'
          //   Product: '<S117>/j x i'
          //   Product: '<S117>/k x j'

          rtb_fcn5 = rtb_fcn2 * rtb_Sum;
          rtb_Product3_pr = rtb_fcn2 * rtb_Sum_ft;
          rtb_Merge_dw = rtb_fcn4 * rtb_Product1_g;
          rtb_fcn2 = rtb_fcn4 * rtb_Sum_ft - rtb_Product3_n4 * rtb_Sum;
          rtb_fcn4 = rtb_Product3_n4 * rtb_Product1_g - rtb_Product3_pr;
          rtb_Product3_n4 = rtb_fcn5 - rtb_Merge_dw;

          // Product: '<S80>/Product2'
          rtb_Product1_g = rtb_is180degRot_p_idx_1 / rtb_Product3_hi;

          // Product: '<S80>/Product1'
          rtb_Sum = rtb_is180degRot_p_idx_0 / rtb_Product3_hi;

          // Product: '<S80>/Product3'
          rtb_Sum_ft = rtb_is180degRot_p_idx_2 / rtb_Product3_hi;

          // Sqrt: '<S74>/sqrt' incorporates:
          //   Product: '<S75>/Product'
          //   Product: '<S75>/Product1'
          //   Product: '<S75>/Product2'
          //   Product: '<S75>/Product3'
          //   Sum: '<S75>/Sum'

          rtb_Product2_f5 = std::sqrt(((rtb_Product2_l5 * rtb_Product2_l5 +
            rtb_Sum * rtb_Sum) + rtb_Product1_g * rtb_Product1_g) + rtb_Sum_ft *
            rtb_Sum_ft);

          // Product: '<S70>/Product2'
          rtb_Product3_hi = rtb_Product1_g / rtb_Product2_f5;

          // Product: '<S70>/Product3'
          rtb_fcn5 = rtb_Sum_ft / rtb_Product2_f5;

          // Product: '<S70>/Product1'
          rtb_Product3_pr = rtb_Sum / rtb_Product2_f5;

          // Product: '<S70>/Product'
          rtb_Product2_f5 = rtb_Product2_l5 / rtb_Product2_f5;

          // Product: '<S71>/Product7' incorporates:
          //   Product: '<S72>/Product7'

          rtb_is180degRot_p_idx_0 = rtb_fcn5 * rtb_fcn5;

          // Product: '<S71>/Product' incorporates:
          //   Product: '<S72>/Product'

          rtb_is180degRot_p_idx_1 = rtb_Product3_pr * rtb_Product3_hi;

          // Product: '<S71>/Product1' incorporates:
          //   Product: '<S72>/Product1'

          rtb_Sum_m = rtb_Product2_f5 * rtb_fcn5;

          // Product: '<S71>/Product3' incorporates:
          //   Product: '<S73>/Product'

          rtb_Product_he = rtb_Product3_pr * rtb_fcn5;

          // Product: '<S71>/Product2' incorporates:
          //   Product: '<S73>/Product1'

          rtb_Sum_g2 = rtb_Product2_f5 * rtb_Product3_hi;

          // Product: '<S71>/Product6' incorporates:
          //   Product: '<S73>/Product7'

          rtb_Sum_hk = rtb_Product3_hi * rtb_Product3_hi;

          // Sum: '<S71>/Sum' incorporates:
          //   Constant: '<S71>/Constant'
          //   Gain: '<S71>/Gain'
          //   Gain: '<S71>/Gain1'
          //   Gain: '<S71>/Gain2'
          //   Product: '<S71>/Product'
          //   Product: '<S71>/Product1'
          //   Product: '<S71>/Product2'
          //   Product: '<S71>/Product3'
          //   Product: '<S71>/Product4'
          //   Product: '<S71>/Product5'
          //   Product: '<S71>/Product6'
          //   Product: '<S71>/Product7'
          //   Product: '<S71>/Product8'
          //   Sum: '<S71>/Sum1'
          //   Sum: '<S71>/Sum2'
          //   Sum: '<S71>/Sum3'

          rtb_Merge_dw = (((0.5 - rtb_Sum_hk) - rtb_is180degRot_p_idx_0) * 2.0 *
                          rtb_fcn2 + (rtb_is180degRot_p_idx_1 + rtb_Sum_m) * 2.0
                          * rtb_fcn4) + (rtb_Product_he - rtb_Sum_g2) * 2.0 *
            rtb_Product3_n4;

          // Product: '<S72>/Product3' incorporates:
          //   Product: '<S73>/Product3'

          rtb_Sum_j_tmp = rtb_Product3_hi * rtb_fcn5;

          // Product: '<S72>/Product2' incorporates:
          //   Product: '<S73>/Product2'

          rtb_is180degRot_p_idx_2 = rtb_Product2_f5 * rtb_Product3_pr;

          // Sum: '<S72>/Sum3' incorporates:
          //   Constant: '<S72>/Constant'
          //   Product: '<S72>/Product6'
          //   Sum: '<S73>/Sum3'

          rtb_Product3_hi = 0.5 - rtb_Product3_pr * rtb_Product3_pr;

          // Sum: '<S72>/Sum' incorporates:
          //   Gain: '<S72>/Gain'
          //   Gain: '<S72>/Gain1'
          //   Gain: '<S72>/Gain2'
          //   Product: '<S72>/Product2'
          //   Product: '<S72>/Product3'
          //   Product: '<S72>/Product4'
          //   Product: '<S72>/Product5'
          //   Product: '<S72>/Product8'
          //   Sum: '<S72>/Sum1'
          //   Sum: '<S72>/Sum2'
          //   Sum: '<S72>/Sum3'

          rtb_Product3_pr = ((rtb_Product3_hi - rtb_is180degRot_p_idx_0) * 2.0 *
                             rtb_fcn4 + (rtb_is180degRot_p_idx_1 - rtb_Sum_m) *
                             2.0 * rtb_fcn2) + (rtb_is180degRot_p_idx_2 +
            rtb_Sum_j_tmp) * 2.0 * rtb_Product3_n4;

          // Sum: '<S73>/Sum' incorporates:
          //   Gain: '<S73>/Gain'
          //   Gain: '<S73>/Gain1'
          //   Gain: '<S73>/Gain2'
          //   Product: '<S73>/Product4'
          //   Product: '<S73>/Product5'
          //   Product: '<S73>/Product8'
          //   Sum: '<S73>/Sum1'
          //   Sum: '<S73>/Sum2'
          //   Sum: '<S73>/Sum3'

          rtb_Product3_hi = ((rtb_Product_he + rtb_Sum_g2) * 2.0 * rtb_fcn2 +
                             (rtb_Sum_j_tmp - rtb_is180degRot_p_idx_2) * 2.0 *
                             rtb_fcn4) + (rtb_Product3_hi - rtb_Sum_hk) * 2.0 *
            rtb_Product3_n4;

          // Product: '<S92>/Divide' incorporates:
          //   DotProduct: '<S92>/Dot Product2'
          //   DotProduct: '<S92>/Dot Product3'
          //   Product: '<S92>/Divide1'
          //   SignalConversion generated from: '<S92>/Dot Product2'
          //   Sqrt: '<S92>/Sqrt3'
          //   Sum: '<S107>/Sum'

          rtb_Product2_f5 = ((asbCubeSatACS_ConstB.Sum_e[0] * rtb_Merge_dw +
                              asbCubeSatACS_ConstB.Sum_e[1] * rtb_Product3_pr) +
                             asbCubeSatACS_ConstB.Sum_e[2] * rtb_Product3_hi) /
            std::sqrt(((rtb_Merge_dw * rtb_Merge_dw + rtb_Product3_pr *
                        rtb_Product3_pr) + rtb_Product3_hi * rtb_Product3_hi) *
                      asbCubeSatACS_ConstB.DotProduct1_b);

          // If: '<S92>/If' incorporates:
          //   Abs: '<S92>/Abs'
          //   Abs: '<S92>/Abs1'
          //   Bias: '<S92>/Bias'
          //   Bias: '<S92>/Bias1'

          if (std::abs(rtb_Product2_f5 + -1.0) < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S92>/If Action Subsystem' incorporates:
            //   ActionPort: '<S98>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S92>/If Action Subsystem'
          } else if (std::abs(rtb_Product2_f5 + 1.0) < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S92>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S99>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S92>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S92>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S100>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S92>/If Action Subsystem2'
          }

          // Switch: '<S12>/Switch' incorporates:
          //   Constant: '<S93>/Constant'
          //   Logic: '<S12>/OR'
          //   Product: '<S66>/Product'
          //   Product: '<S66>/Product1'
          //   Product: '<S66>/Product2'
          //   Product: '<S66>/Product3'
          //   Product: '<S67>/Product'
          //   Product: '<S67>/Product1'
          //   Product: '<S67>/Product2'
          //   Product: '<S67>/Product3'
          //   Product: '<S68>/Product'
          //   Product: '<S68>/Product1'
          //   Product: '<S68>/Product2'
          //   Product: '<S68>/Product3'
          //   Product: '<S69>/Product'
          //   Product: '<S69>/Product1'
          //   Product: '<S69>/Product2'
          //   Product: '<S69>/Product3'
          //   RelationalOperator: '<S93>/Compare'
          //   Sum: '<S66>/Sum'
          //   Sum: '<S67>/Sum'
          //   Sum: '<S68>/Sum'
          //   Sum: '<S69>/Sum'
          //   Switch: '<S57>/is 180deg Rot'

          if (rtb_Compare || rtb_Compare_jn) {
            asbCubeSatACS_B.cmd_q_b2tgt[0] = rtb_Product2_l5;
            asbCubeSatACS_B.cmd_q_b2tgt[1] = rtb_Sum;
            asbCubeSatACS_B.cmd_q_b2tgt[2] = rtb_Product1_g;
            asbCubeSatACS_B.cmd_q_b2tgt[3] = rtb_Sum_ft;
          } else {
            if (rtb_fcn2 != -1.0) {
              // Switch: '<S57>/is 180deg Rot' incorporates:
              //   Product: '<S96>/i x j'
              //   Product: '<S96>/j x k'
              //   Product: '<S96>/k x i'
              //   Product: '<S97>/i x k'
              //   Product: '<S97>/j x i'
              //   Product: '<S97>/k x j'
              //   Sum: '<S91>/Sum'

              rtb_fcn2 = asbCubeSatACS_ConstB.Sum_e[1] * rtb_Product3_hi -
                asbCubeSatACS_ConstB.Sum_e[2] * rtb_Product3_pr;
              rtb_fcn4 = asbCubeSatACS_ConstB.Sum_e[2] * rtb_Merge_dw -
                asbCubeSatACS_ConstB.Sum_e[0] * rtb_Product3_hi;
              rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum_e[0] * rtb_Product3_pr
                - asbCubeSatACS_ConstB.Sum_e[1] * rtb_Merge_dw;
            } else {
              // Switch: '<S57>/is 180deg Rot'
              rtb_fcn2 = asbCubeSatACS_ConstB.Sum_ij[0];
              rtb_fcn4 = asbCubeSatACS_ConstB.Sum_ij[1];
              rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum_ij[2];
            }

            // Sum: '<S57>/Add2' incorporates:
            //   DotProduct: '<S57>/Dot Product2'
            //   DotProduct: '<S57>/Dot Product3'
            //   Product: '<S57>/Divide1'
            //   SignalConversion generated from: '<S92>/Dot Product2'
            //   Sqrt: '<S57>/Sqrt3'
            //   Sum: '<S107>/Sum'

            rtb_Product3_hi = std::sqrt(((rtb_Merge_dw * rtb_Merge_dw +
              rtb_Product3_pr * rtb_Product3_pr) + rtb_Product3_hi *
              rtb_Product3_hi) * asbCubeSatACS_ConstB.DotProduct1_d) +
              ((asbCubeSatACS_ConstB.Sum_e[0] * rtb_Merge_dw +
                asbCubeSatACS_ConstB.Sum_e[1] * rtb_Product3_pr) +
               asbCubeSatACS_ConstB.Sum_e[2] * rtb_Product3_hi);

            // Sqrt: '<S104>/sqrt' incorporates:
            //   Product: '<S105>/Product'
            //   Product: '<S105>/Product1'
            //   Product: '<S105>/Product2'
            //   Product: '<S105>/Product3'
            //   Sum: '<S105>/Sum'

            rtb_fcn5 = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi + rtb_fcn2 *
              rtb_fcn2) + rtb_fcn4 * rtb_fcn4) + rtb_Product3_n4 *
                                 rtb_Product3_n4);

            // Product: '<S95>/Product3'
            rtb_Product3_n4 /= rtb_fcn5;

            // Product: '<S95>/Product2'
            rtb_fcn4 /= rtb_fcn5;

            // Product: '<S95>/Product1'
            rtb_fcn2 /= rtb_fcn5;

            // Product: '<S95>/Product'
            rtb_Product3_hi /= rtb_fcn5;
            asbCubeSatACS_B.cmd_q_b2tgt[0] = ((rtb_Product2_l5 * rtb_Product3_hi
              - rtb_Sum * rtb_fcn2) - rtb_Product1_g * rtb_fcn4) - rtb_Sum_ft *
              rtb_Product3_n4;
            asbCubeSatACS_B.cmd_q_b2tgt[1] = ((rtb_Product2_l5 * rtb_fcn2 +
              rtb_Sum * rtb_Product3_hi) + rtb_Product1_g * rtb_Product3_n4) -
              rtb_Sum_ft * rtb_fcn4;
            asbCubeSatACS_B.cmd_q_b2tgt[2] = ((rtb_Product2_l5 * rtb_fcn4 -
              rtb_Sum * rtb_Product3_n4) + rtb_Product1_g * rtb_Product3_hi) +
              rtb_Sum_ft * rtb_fcn2;
            asbCubeSatACS_B.cmd_q_b2tgt[3] = ((rtb_Product2_l5 * rtb_Product3_n4
              + rtb_Sum * rtb_fcn4) - rtb_Product1_g * rtb_fcn2) + rtb_Sum_ft *
              rtb_Product3_hi;
          }

          // Sqrt: '<S134>/sqrt' incorporates:
          //   Product: '<S135>/Product'
          //   Product: '<S135>/Product1'
          //   Product: '<S135>/Product2'
          //   Product: '<S135>/Product3'
          //   Sum: '<S135>/Sum'

          rtb_Product2_f5 = std::sqrt(((asbCubeSatACS_B.cmd_q_b2tgt[0] *
            asbCubeSatACS_B.cmd_q_b2tgt[0] + asbCubeSatACS_B.cmd_q_b2tgt[1] *
            asbCubeSatACS_B.cmd_q_b2tgt[1]) + asbCubeSatACS_B.cmd_q_b2tgt[2] *
            asbCubeSatACS_B.cmd_q_b2tgt[2]) + asbCubeSatACS_B.cmd_q_b2tgt[3] *
            asbCubeSatACS_B.cmd_q_b2tgt[3]);

          // Product: '<S129>/Product'
          rtb_Product3_hi = asbCubeSatACS_B.cmd_q_b2tgt[0] / rtb_Product2_f5;

          // Product: '<S129>/Product1'
          rtb_fcn5 = asbCubeSatACS_B.cmd_q_b2tgt[1] / rtb_Product2_f5;

          // Product: '<S129>/Product2'
          rtb_Merge_dw = asbCubeSatACS_B.cmd_q_b2tgt[2] / rtb_Product2_f5;

          // Product: '<S129>/Product3'
          rtb_Product2_f5 = asbCubeSatACS_B.cmd_q_b2tgt[3] / rtb_Product2_f5;

          // Fcn: '<S9>/fcn3'
          rtb_Product1_g = (rtb_fcn5 * rtb_Product2_f5 + rtb_Product3_hi *
                            rtb_Merge_dw) * 2.0;

          // Fcn: '<S9>/fcn2' incorporates:
          //   Fcn: '<S9>/fcn5'

          rtb_fcn2 = rtb_Product3_hi * rtb_Product3_hi;
          rtb_fcn4 = rtb_fcn5 * rtb_fcn5;
          rtb_Product3_n4 = rtb_Merge_dw * rtb_Merge_dw;
          rtb_Sum = rtb_Product2_f5 * rtb_Product2_f5;

          // Trigonometry: '<S128>/Trigonometric Function1' incorporates:
          //   Fcn: '<S9>/fcn1'
          //   Fcn: '<S9>/fcn2'
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[0] = rt_atan2d_snf((rtb_Merge_dw *
            rtb_Product2_f5 - rtb_Product3_hi * rtb_fcn5) * -2.0, ((rtb_fcn2 -
            rtb_fcn4) - rtb_Product3_n4) + rtb_Sum);

          // Trigonometry: '<S128>/Trigonometric Function3' incorporates:
          //   Fcn: '<S9>/fcn4'
          //   Fcn: '<S9>/fcn5'
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[2] = rt_atan2d_snf((rtb_fcn5 *
            rtb_Merge_dw - rtb_Product3_hi * rtb_Product2_f5) * -2.0, ((rtb_fcn2
            + rtb_fcn4) - rtb_Product3_n4) - rtb_Sum);

          // If: '<S130>/If' incorporates:
          //   Constant: '<S131>/Constant'
          //   Constant: '<S132>/Constant'

          if (rtb_Product1_g > 1.0) {
            // Outputs for IfAction SubSystem: '<S130>/If Action Subsystem' incorporates:
            //   ActionPort: '<S131>/Action Port'

            rtb_Product1_g = 1.0;

            // End of Outputs for SubSystem: '<S130>/If Action Subsystem'
          } else if (rtb_Product1_g < -1.0) {
            // Outputs for IfAction SubSystem: '<S130>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S132>/Action Port'

            rtb_Product1_g = 1.0;

            // End of Outputs for SubSystem: '<S130>/If Action Subsystem1'
          }

          // Trigonometry: '<S128>/trigFcn' incorporates:
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[1] = std::asin(rtb_Product1_g);
        } else if (*rtu_AttitudeMode == 2.0) {
          real_T rtb_Product1_g;
          real_T rtb_Product2_l5;
          real_T rtb_Product3_n4;
          real_T rtb_Product_he;
          real_T rtb_Sum;
          real_T rtb_Sum_ft;
          real_T rtb_Sum_g2;
          real_T rtb_Sum_hk;
          real_T rtb_Sum_j_tmp;
          real_T rtb_Sum_m;
          real_T rtb_fcn4;
          real_T rtb_is180degRot_p_idx_0;
          real_T rtb_is180degRot_p_idx_1;
          boolean_T rtb_Compare;
          boolean_T rtb_Compare_jn;
          asbCubeSatACS_DW.is_On = asbCubeSatACS_IN_Sun;

          // Sqrt: '<S154>/sqrt' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Product: '<S155>/Product'
          //   Product: '<S155>/Product1'
          //   Product: '<S155>/Product2'
          //   Product: '<S155>/Product3'
          //   Sum: '<S155>/Sum'
          //   UnaryMinus: '<S137>/Unary Minus'
          //   UnaryMinus: '<S137>/Unary Minus1'
          //   UnaryMinus: '<S137>/Unary Minus2'

          rtb_Product3_pr = std::sqrt(((rtu_SensorsOut_q_eci2b[0] *
            rtu_SensorsOut_q_eci2b[0] + -rtu_SensorsOut_q_eci2b[1] *
            -rtu_SensorsOut_q_eci2b[1]) + -rtu_SensorsOut_q_eci2b[2] *
            -rtu_SensorsOut_q_eci2b[2]) + -rtu_SensorsOut_q_eci2b[3] *
            -rtu_SensorsOut_q_eci2b[3]);

          // Product: '<S153>/Product' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'

          rtb_fcn2 = rtu_SensorsOut_q_eci2b[0] / rtb_Product3_pr;

          // Product: '<S153>/Product1' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S137>/Unary Minus'

          rtb_Product1_g = -rtu_SensorsOut_q_eci2b[1] / rtb_Product3_pr;

          // Product: '<S153>/Product2' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S137>/Unary Minus1'

          rtb_Product2_l5 = -rtu_SensorsOut_q_eci2b[2] / rtb_Product3_pr;

          // Product: '<S153>/Product3' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   UnaryMinus: '<S137>/Unary Minus2'

          rtb_Product3_n4 = -rtu_SensorsOut_q_eci2b[3] / rtb_Product3_pr;

          // Sqrt: '<S150>/sqrt' incorporates:
          //   Product: '<S151>/Product'
          //   Product: '<S151>/Product1'
          //   Product: '<S151>/Product2'
          //   Product: '<S151>/Product3'
          //   Sqrt: '<S232>/sqrt'
          //   Sum: '<S151>/Sum'
          //   UnaryMinus: '<S152>/Unary Minus'
          //   UnaryMinus: '<S152>/Unary Minus1'
          //   UnaryMinus: '<S152>/Unary Minus2'

          rtb_Merge_dw = std::sqrt(((rtb_fcn2 * rtb_fcn2 + -rtb_Product1_g *
            -rtb_Product1_g) + -rtb_Product2_l5 * -rtb_Product2_l5) +
            -rtb_Product3_n4 * -rtb_Product3_n4);

          // Product: '<S146>/Product' incorporates:
          //   Sqrt: '<S150>/sqrt'

          rtb_fcn4 = rtb_fcn2 / rtb_Merge_dw;

          // Product: '<S146>/Product1' incorporates:
          //   Product: '<S228>/Product1'
          //   Sqrt: '<S150>/sqrt'
          //   UnaryMinus: '<S152>/Unary Minus'

          rtb_Product3_pr = -rtb_Product1_g / rtb_Merge_dw;

          // Product: '<S146>/Product2' incorporates:
          //   Product: '<S228>/Product2'
          //   Sqrt: '<S150>/sqrt'
          //   UnaryMinus: '<S152>/Unary Minus1'

          rtb_Product2_f5 = -rtb_Product2_l5 / rtb_Merge_dw;

          // Product: '<S146>/Product3' incorporates:
          //   Product: '<S228>/Product3'
          //   Sqrt: '<S150>/sqrt'
          //   UnaryMinus: '<S152>/Unary Minus2'

          rtb_Product3_n4 = -rtb_Product3_n4 / rtb_Merge_dw;

          // Product: '<S147>/Product7' incorporates:
          //   Product: '<S146>/Product3'
          //   Product: '<S148>/Product7'

          rtb_Product3_hi = rtb_Product3_n4 * rtb_Product3_n4;

          // Product: '<S147>/Product' incorporates:
          //   Product: '<S146>/Product1'
          //   Product: '<S146>/Product2'
          //   Product: '<S148>/Product'

          rtb_fcn5 = rtb_Product3_pr * rtb_Product2_f5;

          // Product: '<S147>/Product1' incorporates:
          //   Product: '<S146>/Product3'
          //   Product: '<S148>/Product1'

          rtb_Product1_g = rtb_fcn4 * rtb_Product3_n4;

          // Product: '<S147>/Product3' incorporates:
          //   Product: '<S146>/Product1'
          //   Product: '<S146>/Product3'
          //   Product: '<S149>/Product'

          rtb_Sum_g2 = rtb_Product3_pr * rtb_Product3_n4;

          // Sum: '<S147>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Constant: '<S147>/Constant'
          //   Gain: '<S147>/Gain'
          //   Gain: '<S147>/Gain1'
          //   Gain: '<S147>/Gain2'
          //   Product: '<S146>/Product2'
          //   Product: '<S147>/Product'
          //   Product: '<S147>/Product1'
          //   Product: '<S147>/Product2'
          //   Product: '<S147>/Product3'
          //   Product: '<S147>/Product4'
          //   Product: '<S147>/Product5'
          //   Product: '<S147>/Product6'
          //   Product: '<S147>/Product7'
          //   Product: '<S147>/Product8'
          //   Sum: '<S147>/Sum1'
          //   Sum: '<S147>/Sum2'
          //   Sum: '<S147>/Sum3'

          rtb_Sum = (((0.5 - rtb_Product2_f5 * rtb_Product2_f5) -
                      rtb_Product3_hi) * 2.0 * rtu_Environment_x_sun_eci[0] +
                     (rtb_fcn5 + rtb_Product1_g) * 2.0 *
                     rtu_Environment_x_sun_eci[1]) + (rtb_Sum_g2 - rtb_fcn4 *
            rtb_Product2_f5) * 2.0 * rtu_Environment_x_sun_eci[2];

          // Product: '<S148>/Product3' incorporates:
          //   Product: '<S146>/Product2'
          //   Product: '<S146>/Product3'
          //   Product: '<S149>/Product3'

          rtb_Sum_m = rtb_Product2_f5 * rtb_Product3_n4;

          // Product: '<S148>/Product2' incorporates:
          //   Product: '<S146>/Product1'
          //   Product: '<S149>/Product2'

          rtb_Product_he = rtb_fcn4 * rtb_Product3_pr;

          // Sum: '<S148>/Sum3' incorporates:
          //   Constant: '<S148>/Constant'
          //   Product: '<S146>/Product1'
          //   Product: '<S148>/Product6'
          //   Sum: '<S149>/Sum3'

          rtb_Product2_l5 = 0.5 - rtb_Product3_pr * rtb_Product3_pr;

          // Sum: '<S148>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Gain: '<S148>/Gain'
          //   Gain: '<S148>/Gain1'
          //   Gain: '<S148>/Gain2'
          //   Product: '<S148>/Product2'
          //   Product: '<S148>/Product3'
          //   Product: '<S148>/Product4'
          //   Product: '<S148>/Product5'
          //   Product: '<S148>/Product8'
          //   Sum: '<S148>/Sum1'
          //   Sum: '<S148>/Sum2'
          //   Sum: '<S148>/Sum3'

          rtb_Sum_ft = ((rtb_Product2_l5 - rtb_Product3_hi) * 2.0 *
                        rtu_Environment_x_sun_eci[1] + (rtb_fcn5 -
            rtb_Product1_g) * 2.0 * rtu_Environment_x_sun_eci[0]) +
            (rtb_Product_he + rtb_Sum_m) * 2.0 * rtu_Environment_x_sun_eci[2];

          // Product: '<S149>/Product4' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Gain: '<S149>/Gain'
          //   Product: '<S146>/Product2'
          //   Product: '<S149>/Product1'
          //   Sum: '<S149>/Sum1'

          rtb_Product3_hi = (rtb_fcn4 * rtb_Product2_f5 + rtb_Sum_g2) * 2.0 *
            rtu_Environment_x_sun_eci[0];

          // Sum: '<S149>/Sum' incorporates:
          //   BusCreator generated from: '<S1>/Pointing Mode Selection'
          //   Gain: '<S149>/Gain1'
          //   Gain: '<S149>/Gain2'
          //   Product: '<S146>/Product2'
          //   Product: '<S149>/Product5'
          //   Product: '<S149>/Product7'
          //   Product: '<S149>/Product8'
          //   Sum: '<S149>/Sum2'
          //   Sum: '<S149>/Sum3'

          rtb_Sum_m = ((rtb_Sum_m - rtb_Product_he) * 2.0 *
                       rtu_Environment_x_sun_eci[1] + rtb_Product3_hi) +
            (rtb_Product2_l5 - rtb_Product2_f5 * rtb_Product2_f5) * 2.0 *
            rtu_Environment_x_sun_eci[2];

          // If: '<S156>/If'
          if (asbCubeSatACS_ConstB.Abs < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
            //   ActionPort: '<S166>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S156>/If Action Subsystem'
          } else if (asbCubeSatACS_ConstB.Abs1 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S167>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S156>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S168>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Product3_hi);

            // End of Outputs for SubSystem: '<S156>/If Action Subsystem2'
          }

          // Product: '<S228>/Product'
          rtb_fcn2 /= rtb_Merge_dw;

          // Product: '<S229>/Product' incorporates:
          //   Product: '<S230>/Product'

          rtb_is180degRot_p_idx_0 = rtb_Product3_pr * rtb_Product2_f5;

          // Product: '<S229>/Product6' incorporates:
          //   Product: '<S231>/Product7'

          rtb_is180degRot_p_idx_1 = rtb_Product2_f5 * rtb_Product2_f5;

          // Sum: '<S229>/Sum' incorporates:
          //   Constant: '<S136>/secondaryConstraint'
          //   Constant: '<S229>/Constant'
          //   Gain: '<S229>/Gain'
          //   Gain: '<S229>/Gain1'
          //   Gain: '<S229>/Gain2'
          //   Product: '<S229>/Product'
          //   Product: '<S229>/Product1'
          //   Product: '<S229>/Product2'
          //   Product: '<S229>/Product3'
          //   Product: '<S229>/Product4'
          //   Product: '<S229>/Product6'
          //   Product: '<S229>/Product7'
          //   Product: '<S229>/Product8'
          //   Sum: '<S229>/Sum1'
          //   Sum: '<S229>/Sum2'
          //   Sum: '<S229>/Sum3'

          rtb_Product1_g = (((0.5 - rtb_is180degRot_p_idx_1) - rtb_Product3_n4 *
                             rtb_Product3_n4) * 2.0 * 0.0 + (rtb_fcn2 *
            rtb_Product3_n4 + rtb_is180degRot_p_idx_0) * 2.0 * 0.0) +
            (rtb_Product3_pr * rtb_Product3_n4 - rtb_fcn2 * rtb_Product2_f5) *
            2.0;

          // Product: '<S230>/Product3' incorporates:
          //   Product: '<S231>/Product3'

          rtb_Merge_dw = rtb_Product2_f5 * rtb_Product3_n4;

          // Sum: '<S230>/Sum3' incorporates:
          //   Constant: '<S230>/Constant'
          //   Product: '<S230>/Product6'
          //   Sum: '<S231>/Sum3'

          rtb_fcn4 = 0.5 - rtb_Product3_pr * rtb_Product3_pr;

          // Sum: '<S230>/Sum' incorporates:
          //   Constant: '<S136>/secondaryConstraint'
          //   Gain: '<S230>/Gain'
          //   Gain: '<S230>/Gain1'
          //   Gain: '<S230>/Gain2'
          //   Product: '<S230>/Product1'
          //   Product: '<S230>/Product2'
          //   Product: '<S230>/Product3'
          //   Product: '<S230>/Product4'
          //   Product: '<S230>/Product7'
          //   Product: '<S230>/Product8'
          //   Sum: '<S230>/Sum1'
          //   Sum: '<S230>/Sum2'
          //   Sum: '<S230>/Sum3'

          rtb_fcn5 = ((rtb_fcn4 - rtb_Product3_n4 * rtb_Product3_n4) * 2.0 * 0.0
                      + (rtb_is180degRot_p_idx_0 - rtb_fcn2 * rtb_Product3_n4) *
                      2.0 * 0.0) + (rtb_fcn2 * rtb_Product3_pr + rtb_Merge_dw) *
            2.0;

          // Sum: '<S231>/Sum' incorporates:
          //   Constant: '<S136>/secondaryConstraint'
          //   Gain: '<S231>/Gain'
          //   Gain: '<S231>/Gain1'
          //   Gain: '<S231>/Gain2'
          //   Product: '<S231>/Product'
          //   Product: '<S231>/Product1'
          //   Product: '<S231>/Product2'
          //   Product: '<S231>/Product4'
          //   Product: '<S231>/Product5'
          //   Sum: '<S231>/Sum1'
          //   Sum: '<S231>/Sum2'
          //   Sum: '<S231>/Sum3'

          rtb_Product2_f5 = ((rtb_Product3_pr * rtb_Product3_n4 + rtb_fcn2 *
                              rtb_Product2_f5) * 2.0 * 0.0 + (rtb_Merge_dw -
            rtb_fcn2 * rtb_Product3_pr) * 2.0 * 0.0) + (rtb_fcn4 -
            rtb_is180degRot_p_idx_1) * 2.0;

          // DotProduct: '<S157>/Dot Product1' incorporates:
          //   DotProduct: '<S162>/Dot Product2'
          //   SignalConversion generated from: '<S157>/Dot Product1'

          rtb_Product2_l5 = rtb_Sum * rtb_Sum + rtb_Sum_ft * rtb_Sum_ft;

          // Product: '<S157>/Divide' incorporates:
          //   DotProduct: '<S157>/Dot Product1'
          //   DotProduct: '<S157>/Dot Product2'
          //   DotProduct: '<S157>/Dot Product3'
          //   Product: '<S157>/Divide1'
          //   SignalConversion generated from: '<S157>/Dot Product1'
          //   SignalConversion generated from: '<S157>/Dot Product2'
          //   Sqrt: '<S157>/Sqrt3'

          rtb_Merge_dw = ((rtb_Sum * rtb_Product1_g + rtb_Sum_ft * rtb_fcn5) +
                          rtb_Sum_m * rtb_Product2_f5) / std::sqrt
            (((rtb_Product1_g * rtb_Product1_g + rtb_fcn5 * rtb_fcn5) +
              rtb_Product2_f5 * rtb_Product2_f5) * (rtb_Sum_m * rtb_Sum_m +
              rtb_Product2_l5));

          // Abs: '<S157>/Abs' incorporates:
          //   Bias: '<S157>/Bias'

          rtb_fcn4 = std::abs(rtb_Merge_dw + -1.0);

          // Abs: '<S157>/Abs1' incorporates:
          //   Bias: '<S157>/Bias1'

          rtb_Merge_dw = std::abs(rtb_Merge_dw + 1.0);

          // If: '<S157>/If'
          if (rtb_fcn4 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
            //   ActionPort: '<S169>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S157>/If Action Subsystem'
          } else if (rtb_Merge_dw < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S170>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S157>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S171>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S157>/If Action Subsystem2'
          }

          // RelationalOperator: '<S158>/Compare' incorporates:
          //   Constant: '<S158>/Constant'

          rtb_Compare = (rtb_Product3_hi != 0.0);

          // RelationalOperator: '<S159>/Compare' incorporates:
          //   Constant: '<S159>/Constant'

          rtb_Compare_jn = (rtb_Merge_dw != 0.0);

          // DotProduct: '<S162>/Dot Product2' incorporates:
          //   DotProduct: '<S183>/Dot Product2'
          //   SignalConversion generated from: '<S157>/Dot Product1'

          rtb_is180degRot_p_idx_0 = rtb_Sum_m * rtb_Sum_m + rtb_Product2_l5;

          // DotProduct: '<S162>/Dot Product3' incorporates:
          //   Constant: '<S136>/primaryAlignment'
          //   DotProduct: '<S183>/Dot Product3'
          //   SignalConversion generated from: '<S157>/Dot Product1'

          rtb_Product3_pr = (0.0 * rtb_Sum + 0.0 * rtb_Sum_ft) + -rtb_Sum_m;

          // Sum: '<S162>/Add2' incorporates:
          //   DotProduct: '<S162>/Dot Product2'
          //   DotProduct: '<S162>/Dot Product3'
          //   Product: '<S162>/Divide1'
          //   Sqrt: '<S162>/Sqrt3'

          rtb_Product3_hi = std::sqrt(rtb_is180degRot_p_idx_0 *
            asbCubeSatACS_ConstB.DotProduct1_l) + rtb_Product3_pr;

          // Product: '<S183>/Divide' incorporates:
          //   Product: '<S183>/Divide1'
          //   Sqrt: '<S183>/Sqrt3'

          rtb_Merge_dw = rtb_Product3_pr / std::sqrt(rtb_is180degRot_p_idx_0 *
            asbCubeSatACS_ConstB.DotProduct1_f);

          // Abs: '<S183>/Abs' incorporates:
          //   Bias: '<S183>/Bias'

          rtb_fcn4 = std::abs(rtb_Merge_dw + -1.0);

          // Abs: '<S183>/Abs1' incorporates:
          //   Bias: '<S183>/Bias1'

          rtb_Merge_dw = std::abs(rtb_Merge_dw + 1.0);

          // If: '<S183>/If'
          if (rtb_fcn4 < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
            //   ActionPort: '<S189>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S183>/If Action Subsystem'
          } else if (rtb_Merge_dw < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S190>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S183>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S183>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S191>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_Merge_dw);

            // End of Outputs for SubSystem: '<S183>/If Action Subsystem2'
          }

          // Switch: '<S162>/is 180deg Rot' incorporates:
          //   Constant: '<S136>/primaryAlignment'
          //   Constant: '<S184>/Constant'
          //   Product: '<S187>/i x j'
          //   Product: '<S187>/j x k'
          //   Product: '<S187>/k x i'
          //   Product: '<S188>/i x k'
          //   Product: '<S188>/j x i'
          //   Product: '<S188>/k x j'
          //   RelationalOperator: '<S184>/Compare'
          //   Sum: '<S182>/Sum'

          if (rtb_Merge_dw != -1.0) {
            rtb_fcn2 = 0.0 * rtb_Sum_m - (-rtb_Sum_ft);
            rtb_fcn4 = -rtb_Sum - 0.0 * rtb_Sum_m;
            rtb_Product3_n4 = 0.0 * rtb_Sum_ft - 0.0 * rtb_Sum;
          } else {
            rtb_fcn2 = asbCubeSatACS_ConstB.Sum[0];
            rtb_fcn4 = asbCubeSatACS_ConstB.Sum[1];
            rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum[2];
          }

          // Sqrt: '<S195>/sqrt' incorporates:
          //   Product: '<S196>/Product'
          //   Product: '<S196>/Product1'
          //   Product: '<S196>/Product2'
          //   Product: '<S196>/Product3'
          //   Sum: '<S196>/Sum'

          rtb_Merge_dw = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi +
            rtb_fcn2 * rtb_fcn2) + rtb_fcn4 * rtb_fcn4) + rtb_Product3_n4 *
            rtb_Product3_n4);

          // Product: '<S186>/Product'
          rtb_Product_he = rtb_Product3_hi / rtb_Merge_dw;

          // Sum: '<S218>/Sum' incorporates:
          //   Product: '<S220>/i x j'
          //   Product: '<S220>/j x k'
          //   Product: '<S220>/k x i'
          //   Product: '<S221>/i x k'
          //   Product: '<S221>/j x i'
          //   Product: '<S221>/k x j'

          rtb_Product3_pr = rtb_Sum_ft * rtb_Product2_f5 - rtb_Sum_m * rtb_fcn5;
          rtb_Product2_f5 = rtb_Sum_m * rtb_Product1_g - rtb_Sum *
            rtb_Product2_f5;
          rtb_Product2_l5 = rtb_Sum * rtb_fcn5 - rtb_Sum_ft * rtb_Product1_g;

          // Sum: '<S219>/Sum' incorporates:
          //   Product: '<S222>/i x j'
          //   Product: '<S222>/j x k'
          //   Product: '<S222>/k x i'
          //   Product: '<S223>/i x k'
          //   Product: '<S223>/j x i'
          //   Product: '<S223>/k x j'

          rtb_Product3_hi = rtb_Product3_pr * rtb_Sum_ft;
          rtb_fcn5 = rtb_Product3_pr * rtb_Sum_m;
          rtb_Product1_g = rtb_Product2_f5 * rtb_Sum;
          rtb_Product3_pr = rtb_Product2_f5 * rtb_Sum_m - rtb_Product2_l5 *
            rtb_Sum_ft;
          rtb_Product2_f5 = rtb_Product2_l5 * rtb_Sum - rtb_fcn5;
          rtb_Product2_l5 = rtb_Product3_hi - rtb_Product1_g;

          // Product: '<S186>/Product2'
          rtb_Sum = rtb_fcn4 / rtb_Merge_dw;

          // Product: '<S186>/Product1'
          rtb_Sum_ft = rtb_fcn2 / rtb_Merge_dw;

          // Product: '<S186>/Product3'
          rtb_Sum_m = rtb_Product3_n4 / rtb_Merge_dw;

          // Sqrt: '<S180>/sqrt' incorporates:
          //   Product: '<S181>/Product'
          //   Product: '<S181>/Product1'
          //   Product: '<S181>/Product2'
          //   Product: '<S181>/Product3'
          //   Sum: '<S181>/Sum'

          rtb_Product3_hi = std::sqrt(((rtb_Product_he * rtb_Product_he +
            rtb_Sum_ft * rtb_Sum_ft) + rtb_Sum * rtb_Sum) + rtb_Sum_m *
            rtb_Sum_m);

          // Product: '<S176>/Product2'
          rtb_fcn5 = rtb_Sum / rtb_Product3_hi;

          // Product: '<S176>/Product3'
          rtb_Product1_g = rtb_Sum_m / rtb_Product3_hi;

          // Product: '<S176>/Product1'
          rtb_Merge_dw = rtb_Sum_ft / rtb_Product3_hi;

          // Product: '<S176>/Product'
          rtb_Product3_hi = rtb_Product_he / rtb_Product3_hi;

          // Product: '<S177>/Product3' incorporates:
          //   Product: '<S179>/Product'

          rtb_fcn2 = rtb_Merge_dw * rtb_Product1_g;

          // Product: '<S177>/Product7' incorporates:
          //   Product: '<S178>/Product7'

          rtb_Sum_hk = rtb_Product1_g * rtb_Product1_g;

          // Product: '<S177>/Product1' incorporates:
          //   Product: '<S178>/Product1'

          rtb_Sum_j_tmp = rtb_Product3_hi * rtb_Product1_g;

          // Product: '<S177>/Product2' incorporates:
          //   Product: '<S179>/Product1'

          rtb_fcn4 = rtb_Product3_hi * rtb_fcn5;

          // Product: '<S177>/Product6' incorporates:
          //   Product: '<S179>/Product7'

          rtb_Product3_n4 = rtb_fcn5 * rtb_fcn5;

          // Sum: '<S177>/Sum' incorporates:
          //   Constant: '<S177>/Constant'
          //   Gain: '<S177>/Gain'
          //   Gain: '<S177>/Gain1'
          //   Gain: '<S177>/Gain2'
          //   Product: '<S177>/Product'
          //   Product: '<S177>/Product1'
          //   Product: '<S177>/Product2'
          //   Product: '<S177>/Product3'
          //   Product: '<S177>/Product4'
          //   Product: '<S177>/Product5'
          //   Product: '<S177>/Product6'
          //   Product: '<S177>/Product7'
          //   Product: '<S177>/Product8'
          //   Sum: '<S177>/Sum1'
          //   Sum: '<S177>/Sum2'
          //   Sum: '<S177>/Sum3'

          rtb_Sum_g2 = (((0.5 - rtb_Product3_n4) - rtb_Sum_hk) * 2.0 *
                        rtb_Product3_pr + (rtb_Merge_dw * rtb_fcn5 +
            rtb_Sum_j_tmp) * 2.0 * rtb_Product2_f5) + (rtb_fcn2 - rtb_fcn4) *
            2.0 * rtb_Product2_l5;

          // Product: '<S178>/Product3' incorporates:
          //   Product: '<S179>/Product3'

          rtb_Product1_g *= rtb_fcn5;

          // Product: '<S178>/Product2' incorporates:
          //   Product: '<S179>/Product2'

          rtb_Product3_hi *= rtb_Merge_dw;

          // Sum: '<S178>/Sum3' incorporates:
          //   Constant: '<S178>/Constant'
          //   Product: '<S178>/Product6'
          //   Sum: '<S179>/Sum3'

          rtb_is180degRot_p_idx_0 = 0.5 - rtb_Merge_dw * rtb_Merge_dw;

          // Sum: '<S178>/Sum' incorporates:
          //   Gain: '<S178>/Gain'
          //   Gain: '<S178>/Gain1'
          //   Gain: '<S178>/Gain2'
          //   Product: '<S178>/Product'
          //   Product: '<S178>/Product2'
          //   Product: '<S178>/Product3'
          //   Product: '<S178>/Product4'
          //   Product: '<S178>/Product5'
          //   Product: '<S178>/Product8'
          //   Sum: '<S178>/Sum1'
          //   Sum: '<S178>/Sum2'
          //   Sum: '<S178>/Sum3'

          rtb_Sum_hk = ((rtb_Merge_dw * rtb_fcn5 - rtb_Sum_j_tmp) * 2.0 *
                        rtb_Product3_pr + (rtb_is180degRot_p_idx_0 - rtb_Sum_hk)
                        * 2.0 * rtb_Product2_f5) + (rtb_Product3_hi +
            rtb_Product1_g) * 2.0 * rtb_Product2_l5;

          // Sum: '<S179>/Sum' incorporates:
          //   Gain: '<S179>/Gain'
          //   Gain: '<S179>/Gain1'
          //   Gain: '<S179>/Gain2'
          //   Product: '<S179>/Product4'
          //   Product: '<S179>/Product5'
          //   Product: '<S179>/Product8'
          //   Sum: '<S179>/Sum1'
          //   Sum: '<S179>/Sum2'
          //   Sum: '<S179>/Sum3'

          rtb_fcn5 = ((rtb_fcn2 + rtb_fcn4) * 2.0 * rtb_Product3_pr +
                      (rtb_Product1_g - rtb_Product3_hi) * 2.0 * rtb_Product2_f5)
            + (rtb_is180degRot_p_idx_0 - rtb_Product3_n4) * 2.0 *
            rtb_Product2_l5;

          // Product: '<S198>/Divide' incorporates:
          //   DotProduct: '<S198>/Dot Product2'
          //   DotProduct: '<S198>/Dot Product3'
          //   Product: '<S198>/Divide1'
          //   SignalConversion generated from: '<S198>/Dot Product2'
          //   Sqrt: '<S198>/Sqrt3'
          //   Sum: '<S213>/Sum'

          rtb_Product3_hi = ((asbCubeSatACS_ConstB.Sum_i[0] * rtb_Sum_g2 +
                              asbCubeSatACS_ConstB.Sum_i[1] * rtb_Sum_hk) +
                             asbCubeSatACS_ConstB.Sum_i[2] * rtb_fcn5) / std::
            sqrt(((rtb_Sum_g2 * rtb_Sum_g2 + rtb_Sum_hk * rtb_Sum_hk) + rtb_fcn5
                  * rtb_fcn5) * asbCubeSatACS_ConstB.DotProduct1_h);

          // If: '<S198>/If' incorporates:
          //   Abs: '<S198>/Abs'
          //   Abs: '<S198>/Abs1'
          //   Bias: '<S198>/Bias'
          //   Bias: '<S198>/Bias1'

          if (std::abs(rtb_Product3_hi + -1.0) < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S198>/If Action Subsystem' incorporates:
            //   ActionPort: '<S204>/Action Port'

            asbCubeSatACS_IfActionSubsystem(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S198>/If Action Subsystem'
          } else if (std::abs(rtb_Product3_hi + 1.0) < 1.0E-6) {
            // Outputs for IfAction SubSystem: '<S198>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S205>/Action Port'

            asbCubeSatAC_IfActionSubsystem1(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S198>/If Action Subsystem1'
          } else {
            // Outputs for IfAction SubSystem: '<S198>/If Action Subsystem2' incorporates:
            //   ActionPort: '<S206>/Action Port'

            asbCubeSatAC_IfActionSubsystem2(&rtb_fcn2);

            // End of Outputs for SubSystem: '<S198>/If Action Subsystem2'
          }

          // Switch: '<S141>/Switch' incorporates:
          //   Constant: '<S199>/Constant'
          //   Logic: '<S141>/OR'
          //   Product: '<S172>/Product'
          //   Product: '<S172>/Product1'
          //   Product: '<S172>/Product2'
          //   Product: '<S172>/Product3'
          //   Product: '<S173>/Product'
          //   Product: '<S173>/Product1'
          //   Product: '<S173>/Product2'
          //   Product: '<S173>/Product3'
          //   Product: '<S174>/Product'
          //   Product: '<S174>/Product1'
          //   Product: '<S174>/Product2'
          //   Product: '<S174>/Product3'
          //   Product: '<S175>/Product'
          //   Product: '<S175>/Product1'
          //   Product: '<S175>/Product2'
          //   Product: '<S175>/Product3'
          //   RelationalOperator: '<S199>/Compare'
          //   Sum: '<S172>/Sum'
          //   Sum: '<S173>/Sum'
          //   Sum: '<S174>/Sum'
          //   Sum: '<S175>/Sum'
          //   Switch: '<S163>/is 180deg Rot'

          if (rtb_Compare || rtb_Compare_jn) {
            asbCubeSatACS_B.cmd_q_b2tgt[0] = rtb_Product_he;
            asbCubeSatACS_B.cmd_q_b2tgt[1] = rtb_Sum_ft;
            asbCubeSatACS_B.cmd_q_b2tgt[2] = rtb_Sum;
            asbCubeSatACS_B.cmd_q_b2tgt[3] = rtb_Sum_m;
          } else {
            if (rtb_fcn2 != -1.0) {
              // Switch: '<S163>/is 180deg Rot' incorporates:
              //   Product: '<S202>/i x j'
              //   Product: '<S202>/j x k'
              //   Product: '<S202>/k x i'
              //   Product: '<S203>/i x k'
              //   Product: '<S203>/j x i'
              //   Product: '<S203>/k x j'
              //   Sum: '<S197>/Sum'

              rtb_fcn2 = asbCubeSatACS_ConstB.Sum_i[1] * rtb_fcn5 -
                asbCubeSatACS_ConstB.Sum_i[2] * rtb_Sum_hk;
              rtb_fcn4 = asbCubeSatACS_ConstB.Sum_i[2] * rtb_Sum_g2 -
                asbCubeSatACS_ConstB.Sum_i[0] * rtb_fcn5;
              rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum_i[0] * rtb_Sum_hk -
                asbCubeSatACS_ConstB.Sum_i[1] * rtb_Sum_g2;
            } else {
              // Switch: '<S163>/is 180deg Rot'
              rtb_fcn2 = asbCubeSatACS_ConstB.Sum_iv[0];
              rtb_fcn4 = asbCubeSatACS_ConstB.Sum_iv[1];
              rtb_Product3_n4 = asbCubeSatACS_ConstB.Sum_iv[2];
            }

            // Sum: '<S163>/Add2' incorporates:
            //   DotProduct: '<S163>/Dot Product2'
            //   DotProduct: '<S163>/Dot Product3'
            //   Product: '<S163>/Divide1'
            //   SignalConversion generated from: '<S198>/Dot Product2'
            //   Sqrt: '<S163>/Sqrt3'
            //   Sum: '<S213>/Sum'

            rtb_Product3_hi = std::sqrt(((rtb_Sum_g2 * rtb_Sum_g2 + rtb_Sum_hk *
              rtb_Sum_hk) + rtb_fcn5 * rtb_fcn5) *
              asbCubeSatACS_ConstB.DotProduct1_j) +
              ((asbCubeSatACS_ConstB.Sum_i[0] * rtb_Sum_g2 +
                asbCubeSatACS_ConstB.Sum_i[1] * rtb_Sum_hk) +
               asbCubeSatACS_ConstB.Sum_i[2] * rtb_fcn5);

            // Sqrt: '<S210>/sqrt' incorporates:
            //   Product: '<S211>/Product'
            //   Product: '<S211>/Product1'
            //   Product: '<S211>/Product2'
            //   Product: '<S211>/Product3'
            //   Sum: '<S211>/Sum'

            rtb_fcn5 = std::sqrt(((rtb_Product3_hi * rtb_Product3_hi + rtb_fcn2 *
              rtb_fcn2) + rtb_fcn4 * rtb_fcn4) + rtb_Product3_n4 *
                                 rtb_Product3_n4);

            // Product: '<S201>/Product3'
            rtb_Product3_n4 /= rtb_fcn5;

            // Product: '<S201>/Product2'
            rtb_fcn4 /= rtb_fcn5;

            // Product: '<S201>/Product1'
            rtb_fcn2 /= rtb_fcn5;

            // Product: '<S201>/Product'
            rtb_Product3_hi /= rtb_fcn5;
            asbCubeSatACS_B.cmd_q_b2tgt[0] = ((rtb_Product_he * rtb_Product3_hi
              - rtb_Sum_ft * rtb_fcn2) - rtb_Sum * rtb_fcn4) - rtb_Sum_m *
              rtb_Product3_n4;
            asbCubeSatACS_B.cmd_q_b2tgt[1] = ((rtb_Product_he * rtb_fcn2 +
              rtb_Sum_ft * rtb_Product3_hi) + rtb_Sum * rtb_Product3_n4) -
              rtb_Sum_m * rtb_fcn4;
            asbCubeSatACS_B.cmd_q_b2tgt[2] = ((rtb_Product_he * rtb_fcn4 -
              rtb_Sum_ft * rtb_Product3_n4) + rtb_Sum * rtb_Product3_hi) +
              rtb_Sum_m * rtb_fcn2;
            asbCubeSatACS_B.cmd_q_b2tgt[3] = ((rtb_Product_he * rtb_Product3_n4
              + rtb_Sum_ft * rtb_fcn4) - rtb_Sum * rtb_fcn2) + rtb_Sum_m *
              rtb_Product3_hi;
          }

          // Sqrt: '<S240>/sqrt' incorporates:
          //   Product: '<S241>/Product'
          //   Product: '<S241>/Product1'
          //   Product: '<S241>/Product2'
          //   Product: '<S241>/Product3'
          //   Sum: '<S241>/Sum'

          rtb_Product3_hi = std::sqrt(((asbCubeSatACS_B.cmd_q_b2tgt[0] *
            asbCubeSatACS_B.cmd_q_b2tgt[0] + asbCubeSatACS_B.cmd_q_b2tgt[1] *
            asbCubeSatACS_B.cmd_q_b2tgt[1]) + asbCubeSatACS_B.cmd_q_b2tgt[2] *
            asbCubeSatACS_B.cmd_q_b2tgt[2]) + asbCubeSatACS_B.cmd_q_b2tgt[3] *
            asbCubeSatACS_B.cmd_q_b2tgt[3]);

          // Product: '<S235>/Product'
          rtb_fcn5 = asbCubeSatACS_B.cmd_q_b2tgt[0] / rtb_Product3_hi;

          // Product: '<S235>/Product1'
          rtb_Product1_g = asbCubeSatACS_B.cmd_q_b2tgt[1] / rtb_Product3_hi;

          // Product: '<S235>/Product2'
          rtb_Product2_f5 = asbCubeSatACS_B.cmd_q_b2tgt[2] / rtb_Product3_hi;

          // Product: '<S235>/Product3'
          rtb_Product3_hi = asbCubeSatACS_B.cmd_q_b2tgt[3] / rtb_Product3_hi;

          // Fcn: '<S138>/fcn3'
          rtb_Product3_pr = (rtb_Product1_g * rtb_Product3_hi + rtb_fcn5 *
                             rtb_Product2_f5) * 2.0;

          // Fcn: '<S138>/fcn2' incorporates:
          //   Fcn: '<S138>/fcn5'

          rtb_Sum = rtb_Product1_g * rtb_Product1_g;
          rtb_fcn2 = rtb_Product2_f5 * rtb_Product2_f5;
          rtb_Sum_ft = rtb_Product3_hi * rtb_Product3_hi;

          // Trigonometry: '<S234>/Trigonometric Function1' incorporates:
          //   Fcn: '<S138>/fcn1'
          //   Fcn: '<S138>/fcn2'
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[0] = rt_atan2d_snf((rtb_Product2_f5 *
            rtb_Product3_hi - rtb_fcn5 * rtb_Product1_g) * -2.0, ((rtb_fcn5 *
            rtb_fcn5 - rtb_Sum) - rtb_fcn2) + rtb_Sum_ft);

          // Trigonometry: '<S234>/Trigonometric Function3' incorporates:
          //   Fcn: '<S138>/fcn4'
          //   Fcn: '<S138>/fcn5'
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[2] = rt_atan2d_snf((rtb_Product1_g *
            rtb_Product2_f5 - rtb_fcn5 * rtb_Product3_hi) * -2.0, ((rtb_fcn5 *
            rtb_fcn5 + rtb_Sum) - rtb_fcn2) - rtb_Sum_ft);

          // If: '<S236>/If' incorporates:
          //   Constant: '<S237>/Constant'
          //   Constant: '<S238>/Constant'

          if (rtb_Product3_pr > 1.0) {
            // Outputs for IfAction SubSystem: '<S236>/If Action Subsystem' incorporates:
            //   ActionPort: '<S237>/Action Port'

            rtb_Product3_pr = 1.0;

            // End of Outputs for SubSystem: '<S236>/If Action Subsystem'
          } else if (rtb_Product3_pr < -1.0) {
            // Outputs for IfAction SubSystem: '<S236>/If Action Subsystem1' incorporates:
            //   ActionPort: '<S238>/Action Port'

            rtb_Product3_pr = 1.0;

            // End of Outputs for SubSystem: '<S236>/If Action Subsystem1'
          }

          // Trigonometry: '<S234>/trigFcn' incorporates:
          //   Merge: '<S3>/ Merge '

          asbCubeSatACS_B.PointingCmd[1] = std::asin(rtb_Product3_pr);
        }
      }
      break;
    }
  }

  // End of Chart: '<S1>/Pointing Mode Selection'

  // BusCreator generated from: '<Root>/Bus Creator'
  rty_ACSOut->AttitudeError.Roll = asbCubeSatACS_B.PointingCmd[0];
  rty_ACSOut->AttitudeError.Pitch = asbCubeSatACS_B.PointingCmd[1];
  rty_ACSOut->AttitudeError.Yaw = asbCubeSatACS_B.PointingCmd[2];

  // SampleTimeMath: '<S270>/Tsamp' incorporates:
  //   Gain: '<S267>/Derivative Gain'
  //   Merge: '<S3>/ Merge '
  //
  //  About '<S270>/Tsamp':
  //   y = u * K where K = 1 / ( w * Ts )
  //   Multiplication by K = weightedTsampQuantized is being
  //   done implicitly by changing the scaling of the input signal.
  //   No work needs to be done here.  Downstream blocks may need
  //   to do work to handle the scaling of the output; this happens
  //   automatically.

  rtb_fcn2 = 0.017 * asbCubeSatACS_B.PointingCmd[0];

  // BusCreator: '<Root>/Bus Creator' incorporates:
  //   Delay: '<S268>/UD'
  //   DiscreteIntegrator: '<S275>/Integrator'
  //   Gain: '<S280>/Proportional Gain'
  //   Merge: '<S3>/ Merge '
  //   Sum: '<S268>/Diff'
  //   Sum: '<S284>/Sum'

  rty_ACSOut->TorqueCmds[0] = (5.5E-5 * asbCubeSatACS_B.PointingCmd[0] +
    asbCubeSatACS_DW.Integrator_DSTATE[0]) + (rtb_fcn2 -
    asbCubeSatACS_DW.UD_DSTATE[0]);

  // SampleTimeMath: '<S270>/Tsamp' incorporates:
  //   Gain: '<S267>/Derivative Gain'
  //   Merge: '<S3>/ Merge '
  //
  //  About '<S270>/Tsamp':
  //   y = u * K where K = 1 / ( w * Ts )
  //   Multiplication by K = weightedTsampQuantized is being
  //   done implicitly by changing the scaling of the input signal.
  //   No work needs to be done here.  Downstream blocks may need
  //   to do work to handle the scaling of the output; this happens
  //   automatically.

  rtb_Product3_pr = rtb_fcn2;
  rtb_fcn2 = 0.017 * asbCubeSatACS_B.PointingCmd[1];

  // BusCreator: '<Root>/Bus Creator' incorporates:
  //   Delay: '<S268>/UD'
  //   DiscreteIntegrator: '<S275>/Integrator'
  //   Gain: '<S280>/Proportional Gain'
  //   Merge: '<S3>/ Merge '
  //   Sum: '<S268>/Diff'
  //   Sum: '<S284>/Sum'

  rty_ACSOut->TorqueCmds[1] = (5.5E-5 * asbCubeSatACS_B.PointingCmd[1] +
    asbCubeSatACS_DW.Integrator_DSTATE[1]) + (rtb_fcn2 -
    asbCubeSatACS_DW.UD_DSTATE[1]);

  // SampleTimeMath: '<S270>/Tsamp' incorporates:
  //   Gain: '<S267>/Derivative Gain'
  //   Merge: '<S3>/ Merge '
  //
  //  About '<S270>/Tsamp':
  //   y = u * K where K = 1 / ( w * Ts )
  //   Multiplication by K = weightedTsampQuantized is being
  //   done implicitly by changing the scaling of the input signal.
  //   No work needs to be done here.  Downstream blocks may need
  //   to do work to handle the scaling of the output; this happens
  //   automatically.

  rtb_Product2_f5 = rtb_fcn2;
  rtb_fcn2 = 0.017 * asbCubeSatACS_B.PointingCmd[2];

  // BusCreator: '<Root>/Bus Creator' incorporates:
  //   Delay: '<S268>/UD'
  //   DiscreteIntegrator: '<S275>/Integrator'
  //   Gain: '<S280>/Proportional Gain'
  //   Merge: '<S3>/ Merge '
  //   Sum: '<S268>/Diff'
  //   Sum: '<S284>/Sum'

  rty_ACSOut->TorqueCmds[2] = (5.5E-5 * asbCubeSatACS_B.PointingCmd[2] +
    asbCubeSatACS_DW.Integrator_DSTATE[2]) + (rtb_fcn2 -
    asbCubeSatACS_DW.UD_DSTATE[2]);
  rty_ACSOut->cmd_q_b2tgt[0] = asbCubeSatACS_B.cmd_q_b2tgt[0];
  rty_ACSOut->cmd_q_b2tgt[1] = asbCubeSatACS_B.cmd_q_b2tgt[1];
  rty_ACSOut->cmd_q_b2tgt[2] = asbCubeSatACS_B.cmd_q_b2tgt[2];
  rty_ACSOut->cmd_q_b2tgt[3] = asbCubeSatACS_B.cmd_q_b2tgt[3];
  rty_ACSOut->NavMode = *rtu_AttitudeMode;

  // Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
  //   Gain: '<S272>/Integral Gain'
  //   Merge: '<S3>/ Merge '

  asbCubeSatACS_DW.Integrator_DSTATE[0] += 0.0 * asbCubeSatACS_B.PointingCmd[0];

  // Update for Delay: '<S268>/UD' incorporates:
  //   SampleTimeMath: '<S270>/Tsamp'
  //
  //  About '<S270>/Tsamp':
  //   y = u * K where K = 1 / ( w * Ts )
  //   Multiplication by K = weightedTsampQuantized is being
  //   done implicitly by changing the scaling of the input signal.
  //   No work needs to be done here.  Downstream blocks may need
  //   to do work to handle the scaling of the output; this happens
  //   automatically.

  asbCubeSatACS_DW.UD_DSTATE[0] = rtb_Product3_pr;

  // Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
  //   Gain: '<S272>/Integral Gain'
  //   Merge: '<S3>/ Merge '

  asbCubeSatACS_DW.Integrator_DSTATE[1] += 0.0 * asbCubeSatACS_B.PointingCmd[1];

  // Update for Delay: '<S268>/UD' incorporates:
  //   SampleTimeMath: '<S270>/Tsamp'
  //
  //  About '<S270>/Tsamp':
  //   y = u * K where K = 1 / ( w * Ts )
  //   Multiplication by K = weightedTsampQuantized is being
  //   done implicitly by changing the scaling of the input signal.
  //   No work needs to be done here.  Downstream blocks may need
  //   to do work to handle the scaling of the output; this happens
  //   automatically.

  asbCubeSatACS_DW.UD_DSTATE[1] = rtb_Product2_f5;

  // Update for DiscreteIntegrator: '<S275>/Integrator' incorporates:
  //   Gain: '<S272>/Integral Gain'
  //   Merge: '<S3>/ Merge '

  asbCubeSatACS_DW.Integrator_DSTATE[2] += 0.0 * asbCubeSatACS_B.PointingCmd[2];

  // Update for Delay: '<S268>/UD'
  asbCubeSatACS_DW.UD_DSTATE[2] = rtb_fcn2;
}

// Model initialize function
void asbCubeSatACS::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
}

// Constructor
asbCubeSatACS::asbCubeSatACS() :
  asbCubeSatACS_B(),
  asbCubeSatACS_DW(),
  asbCubeSatACS_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
asbCubeSatACS::~asbCubeSatACS()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
asbCubeSatACS::RT_MODEL_asbCubeSatACS_T * asbCubeSatACS::getRTM()
{
  return (&asbCubeSatACS_M);
}

// member function to setup error status pointer
void asbCubeSatACS::setErrorStatusPointer(const char_T **rt_errorStatus)
{
  rtmSetErrorStatusPointer((&asbCubeSatACS_M), rt_errorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
