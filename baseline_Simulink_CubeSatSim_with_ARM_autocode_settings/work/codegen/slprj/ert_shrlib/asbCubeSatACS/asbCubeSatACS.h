/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: asbCubeSatACS.h
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

#ifndef RTW_HEADER_asbCubeSatACS_h_
#define RTW_HEADER_asbCubeSatACS_h_
#ifndef asbCubeSatACS_COMMON_INCLUDES_
#define asbCubeSatACS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* asbCubeSatACS_COMMON_INCLUDES_ */

#include "asbCubeSatACS_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Block signals for model 'asbCubeSatACS' */
typedef struct {
  real_T PointingCmd[3];               /* '<S1>/Pointing Mode Selection' */
  real_T cmd_q_b2tgt[4];               /* '<S1>/Pointing Mode Selection' */
} B_asbCubeSatACS_c_T;

/* Block states (default storage) for model 'asbCubeSatACS' */
typedef struct {
  real_T Integrator_DSTATE[3];         /* '<S275>/Integrator' */
  real_T UD_DSTATE[3];                 /* '<S268>/UD' */
  uint8_T is_active_c1_asbCubeSatACS;  /* '<S1>/Pointing Mode Selection' */
  uint8_T is_c1_asbCubeSatACS;         /* '<S1>/Pointing Mode Selection' */
  uint8_T is_On;                       /* '<S1>/Pointing Mode Selection' */
} DW_asbCubeSatACS_f_T;

/* Invariant block signals for model 'asbCubeSatACS' */
typedef struct {
  const real_T DotProduct3;            /* '<S156>/Dot Product3' */
  const real_T DotProduct1;            /* '<S156>/Dot Product1' */
  const real_T DotProduct2;            /* '<S156>/Dot Product2' */
  const real_T Divide1;                /* '<S156>/Divide1' */
  const real_T Sqrt3;                  /* '<S156>/Sqrt3' */
  const real_T Divide;                 /* '<S156>/Divide' */
  const real_T Bias;                   /* '<S156>/Bias' */
  const real_T Abs;                    /* '<S156>/Abs' */
  const real_T Bias1;                  /* '<S156>/Bias1' */
  const real_T Abs1;                   /* '<S156>/Abs1' */
  const real_T DotProduct1_f;          /* '<S183>/Dot Product1' */
  const real_T DotProduct1_l;          /* '<S162>/Dot Product1' */
  const real_T Gain;                   /* '<S185>/Gain' */
  const real_T Gain2;                  /* '<S185>/Gain2' */
  const real_T Switch3[3];             /* '<S185>/Switch3' */
  const real_T ixj;                    /* '<S193>/i x j' */
  const real_T jxk;                    /* '<S193>/j x k' */
  const real_T kxi;                    /* '<S193>/k x i' */
  const real_T ixk;                    /* '<S194>/i x k' */
  const real_T jxi;                    /* '<S194>/j x i' */
  const real_T kxj;                    /* '<S194>/k x j' */
  const real_T Sum[3];                 /* '<S192>/Sum' */
  const real_T jxk_p;                  /* '<S214>/j x k' */
  const real_T kxi_i;                  /* '<S214>/k x i' */
  const real_T ixj_c;                  /* '<S214>/i x j' */
  const real_T kxj_g;                  /* '<S215>/k x j' */
  const real_T ixk_b;                  /* '<S215>/i x k' */
  const real_T jxi_n;                  /* '<S215>/j x i' */
  const real_T Sum_j[3];               /* '<S212>/Sum' */
  const real_T jxk_a;                  /* '<S216>/j x k' */
  const real_T kxi_d;                  /* '<S216>/k x i' */
  const real_T ixj_a;                  /* '<S216>/i x j' */
  const real_T kxj_n;                  /* '<S217>/k x j' */
  const real_T ixk_a;                  /* '<S217>/i x k' */
  const real_T jxi_i;                  /* '<S217>/j x i' */
  const real_T Sum_i[3];               /* '<S213>/Sum' */
  const real_T DotProduct1_h;          /* '<S198>/Dot Product1' */
  const real_T DotProduct1_j;          /* '<S163>/Dot Product1' */
  const real_T Gain_m;                 /* '<S200>/Gain' */
  const real_T Gain2_h;                /* '<S200>/Gain2' */
  const real_T Switch3_g[3];           /* '<S200>/Switch3' */
  const real_T ixj_o;                  /* '<S208>/i x j' */
  const real_T jxk_k;                  /* '<S208>/j x k' */
  const real_T kxi_h;                  /* '<S208>/k x i' */
  const real_T ixk_am;                 /* '<S209>/i x k' */
  const real_T jxi_j;                  /* '<S209>/j x i' */
  const real_T kxj_ng;                 /* '<S209>/k x j' */
  const real_T Sum_iv[3];              /* '<S207>/Sum' */
  const real_T DotProduct3_f;          /* '<S50>/Dot Product3' */
  const real_T DotProduct1_o;          /* '<S50>/Dot Product1' */
  const real_T DotProduct2_a;          /* '<S50>/Dot Product2' */
  const real_T Divide1_b;              /* '<S50>/Divide1' */
  const real_T Sqrt3_o;                /* '<S50>/Sqrt3' */
  const real_T Divide_p;               /* '<S50>/Divide' */
  const real_T Bias_l;                 /* '<S50>/Bias' */
  const real_T Abs_m;                  /* '<S50>/Abs' */
  const real_T Bias1_e;                /* '<S50>/Bias1' */
  const real_T Abs1_g;                 /* '<S50>/Abs1' */
  const real_T DotProduct1_p;          /* '<S77>/Dot Product1' */
  const real_T DotProduct1_hl;         /* '<S56>/Dot Product1' */
  const real_T Gain_d;                 /* '<S79>/Gain' */
  const real_T Gain2_b;                /* '<S79>/Gain2' */
  const real_T Switch3_e[3];           /* '<S79>/Switch3' */
  const real_T ixj_b;                  /* '<S87>/i x j' */
  const real_T jxk_m;                  /* '<S87>/j x k' */
  const real_T kxi_j;                  /* '<S87>/k x i' */
  const real_T ixk_k;                  /* '<S88>/i x k' */
  const real_T jxi_d;                  /* '<S88>/j x i' */
  const real_T kxj_b;                  /* '<S88>/k x j' */
  const real_T Sum_c[3];               /* '<S86>/Sum' */
  const real_T jxk_d;                  /* '<S108>/j x k' */
  const real_T kxi_o;                  /* '<S108>/k x i' */
  const real_T ixj_k;                  /* '<S108>/i x j' */
  const real_T kxj_ge;                 /* '<S109>/k x j' */
  const real_T ixk_c;                  /* '<S109>/i x k' */
  const real_T jxi_nc;                 /* '<S109>/j x i' */
  const real_T Sum_n[3];               /* '<S106>/Sum' */
  const real_T jxk_j;                  /* '<S110>/j x k' */
  const real_T kxi_p;                  /* '<S110>/k x i' */
  const real_T ixj_h;                  /* '<S110>/i x j' */
  const real_T kxj_p;                  /* '<S111>/k x j' */
  const real_T ixk_i;                  /* '<S111>/i x k' */
  const real_T jxi_o;                  /* '<S111>/j x i' */
  const real_T Sum_e[3];               /* '<S107>/Sum' */
  const real_T DotProduct1_b;          /* '<S92>/Dot Product1' */
  const real_T DotProduct1_d;          /* '<S57>/Dot Product1' */
  const real_T Gain_j;                 /* '<S94>/Gain' */
  const real_T Gain2_j;                /* '<S94>/Gain2' */
  const real_T Switch3_gg[3];          /* '<S94>/Switch3' */
  const real_T ixj_as;                 /* '<S102>/i x j' */
  const real_T jxk_p5;                 /* '<S102>/j x k' */
  const real_T kxi_g;                  /* '<S102>/k x i' */
  const real_T ixk_ce;                 /* '<S103>/i x k' */
  const real_T jxi_n2;                 /* '<S103>/j x i' */
  const real_T kxj_i;                  /* '<S103>/k x j' */
  const real_T Sum_ij[3];              /* '<S101>/Sum' */
  const boolean_T xz;                  /* '<S185>/x>z' */
  const boolean_T xz_a;                /* '<S200>/x>z' */
  const boolean_T xz_m;                /* '<S79>/x>z' */
  const boolean_T xz_k;                /* '<S94>/x>z' */
} ConstB_asbCubeSatACS_h_T;

/* Real-time Model Data Structure */
struct tag_RTM_asbCubeSatACS_T {
  const char_T **errorStatus;
};

typedef struct {
  B_asbCubeSatACS_c_T rtb;
  DW_asbCubeSatACS_f_T rtdw;
  RT_MODEL_asbCubeSatACS_T rtm;
} MdlrefDW_asbCubeSatACS_T;

/* Model reference registration function */
extern void asbCubeSatACS_initialize(const char_T **rt_errorStatus,
  RT_MODEL_asbCubeSatACS_T *const asbCubeSatACS_M);
extern void asbCubeSatACS_IfActionSubsystem(real_T *rty_Out1);
extern void asbCubeSatAC_IfActionSubsystem1(real_T *rty_Out1);
extern void asbCubeSatAC_IfActionSubsystem2(real_T *rty_Out1);
extern void asbCubeSatACS_Init(ACSOutBus *rty_ACSOut);
extern void asbCubeSatACS(const real_T rtu_SensorsOut_X_eci[3], const real_T
  rtu_SensorsOut_V_eci[3], const real_T rtu_SensorsOut_q_eci2b[4], const real_T *
  rtu_AttitudeMode, const real_T rtu_Environment_x_sun_eci[3], ACSOutBus
  *rty_ACSOut, B_asbCubeSatACS_c_T *localB, DW_asbCubeSatACS_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S15>/Constant' : Unused code path elimination
 * Block '<S7>/Reshape1' : Unused code path elimination
 * Block '<S7>/primaryConstraint' : Unused code path elimination
 * Block '<S224>/Unary Minus' : Unused code path elimination
 * Block '<S224>/Unary Minus1' : Unused code path elimination
 * Block '<S224>/Unary Minus2' : Unused code path elimination
 * Block '<S225>/Product' : Unused code path elimination
 * Block '<S225>/Product1' : Unused code path elimination
 * Block '<S225>/Product2' : Unused code path elimination
 * Block '<S225>/Product3' : Unused code path elimination
 * Block '<S227>/Product' : Unused code path elimination
 * Block '<S227>/Product1' : Unused code path elimination
 * Block '<S227>/Product2' : Unused code path elimination
 * Block '<S227>/Product3' : Unused code path elimination
 * Block '<S227>/Sum' : Unused code path elimination
 * Block '<S226>/sqrt' : Unused code path elimination
 * Block '<S144>/Constant' : Unused code path elimination
 * Block '<S268>/DTDup' : Unused code path elimination
 * Block '<S7>/Reshape2' : Reshape block reduction
 * Block '<S7>/Reshape5' : Reshape block reduction
 * Block '<S7>/Reshape6' : Reshape block reduction
 * Block '<S136>/Reshape1' : Reshape block reduction
 * Block '<S136>/Reshape2' : Reshape block reduction
 * Block '<S136>/Reshape5' : Reshape block reduction
 * Block '<S136>/Reshape6' : Reshape block reduction
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'asbCubeSatACS'
 * '<S1>'   : 'asbCubeSatACS/Attitude Control'
 * '<S2>'   : 'asbCubeSatACS/Discrete PID Controller'
 * '<S3>'   : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection'
 * '<S4>'   : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/Off'
 * '<S5>'   : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth'
 * '<S6>'   : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun'
 * '<S7>'   : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)'
 * '<S8>'   : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternion Conjugate'
 * '<S9>'   : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles'
 * '<S10>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcC1'
 * '<S11>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame'
 * '<S12>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion'
 * '<S13>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/ConditionAttInputs'
 * '<S14>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Quaternion Rotation'
 * '<S15>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Reduc'
 * '<S16>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcC1/Quaternion Rotation'
 * '<S17>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcC1/Quaternion Rotation/Quaternion Normalize'
 * '<S18>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcC1/Quaternion Rotation/V1'
 * '<S19>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcC1/Quaternion Rotation/V2'
 * '<S20>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcC1/Quaternion Rotation/V3'
 * '<S21>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S22>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S23>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh'
 * '<S24>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Conjugate'
 * '<S25>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Multiplication'
 * '<S26>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Normalize'
 * '<S27>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize'
 * '<S28>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/constrain'
 * '<S29>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/constrain1'
 * '<S30>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/constrain2'
 * '<S31>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/constrain3'
 * '<S32>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/h = r x v'
 * '<S33>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/icrf2lvlh'
 * '<S34>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/n = K x h'
 * '<S35>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/v x h'
 * '<S36>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Quaternion Modulus'
 * '<S37>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S38>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Subsystem'
 * '<S39>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Subsystem1'
 * '<S40>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Subsystem'
 * '<S41>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Subsystem1'
 * '<S42>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/v x h/Subsystem'
 * '<S43>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Calculate q_icrf2lvlh/v x h/Subsystem1'
 * '<S44>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Multiplication/q0'
 * '<S45>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Multiplication/q1'
 * '<S46>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Multiplication/q2'
 * '<S47>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Multiplication/q3'
 * '<S48>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Normalize/Quaternion Modulus'
 * '<S49>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S50>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Check Parallel1'
 * '<S51>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Check Parallel2'
 * '<S52>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Compare To Zero'
 * '<S53>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Compare To Zero1'
 * '<S54>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Multiplication2'
 * '<S55>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Rotation5'
 * '<S56>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors'
 * '<S57>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1'
 * '<S58>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection'
 * '<S59>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection1'
 * '<S60>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem'
 * '<S61>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem1'
 * '<S62>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem2'
 * '<S63>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem'
 * '<S64>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem1'
 * '<S65>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem2'
 * '<S66>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Multiplication2/q0'
 * '<S67>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Multiplication2/q1'
 * '<S68>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Multiplication2/q2'
 * '<S69>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Multiplication2/q3'
 * '<S70>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize'
 * '<S71>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Rotation5/V1'
 * '<S72>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Rotation5/V2'
 * '<S73>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Rotation5/V3'
 * '<S74>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus'
 * '<S75>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S76>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2'
 * '<S77>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel'
 * '<S78>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant'
 * '<S79>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal'
 * '<S80>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2'
 * '<S81>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem'
 * '<S82>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1'
 * '<S83>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem'
 * '<S84>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem1'
 * '<S85>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem2'
 * '<S86>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product'
 * '<S87>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Subsystem'
 * '<S88>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Subsystem1'
 * '<S89>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus'
 * '<S90>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm'
 * '<S91>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2'
 * '<S92>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel'
 * '<S93>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant'
 * '<S94>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal'
 * '<S95>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2'
 * '<S96>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem'
 * '<S97>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1'
 * '<S98>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem'
 * '<S99>'  : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem1'
 * '<S100>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem2'
 * '<S101>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product'
 * '<S102>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Subsystem'
 * '<S103>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Subsystem1'
 * '<S104>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus'
 * '<S105>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm'
 * '<S106>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product1'
 * '<S107>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2'
 * '<S108>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product1/Subsystem'
 * '<S109>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product1/Subsystem1'
 * '<S110>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Subsystem'
 * '<S111>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Subsystem1'
 * '<S112>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1'
 * '<S113>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2'
 * '<S114>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem'
 * '<S115>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1'
 * '<S116>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem'
 * '<S117>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1'
 * '<S118>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/ConditionAttInputs/Quaternion Conjugate'
 * '<S119>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/ConditionAttInputs/Quaternion Normalize'
 * '<S120>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus'
 * '<S121>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S122>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Quaternion Rotation/Quaternion Normalize'
 * '<S123>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Quaternion Rotation/V1'
 * '<S124>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Quaternion Rotation/V2'
 * '<S125>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Quaternion Rotation/V3'
 * '<S126>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S127>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Attitude Profile (Nadir Pointing)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S128>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles/Angle Calculation'
 * '<S129>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S130>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
 * '<S131>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S132>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S133>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S134>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S135>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Earth/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S136>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)'
 * '<S137>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternion Conjugate'
 * '<S138>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1'
 * '<S139>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcC1'
 * '<S140>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcCFrame'
 * '<S141>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion'
 * '<S142>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/ConditionAttInputs'
 * '<S143>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Quaternion Rotation'
 * '<S144>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Reduc'
 * '<S145>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcC1/Quaternion Rotation'
 * '<S146>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize'
 * '<S147>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcC1/Quaternion Rotation/V1'
 * '<S148>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcC1/Quaternion Rotation/V2'
 * '<S149>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcC1/Quaternion Rotation/V3'
 * '<S150>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S151>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S152>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcCFrame/Quaternion Conjugate'
 * '<S153>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcCFrame/Quaternion Normalize'
 * '<S154>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus'
 * '<S155>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S156>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Check Parallel1'
 * '<S157>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Check Parallel2'
 * '<S158>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Compare To Zero'
 * '<S159>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Compare To Zero1'
 * '<S160>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2'
 * '<S161>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Rotation5'
 * '<S162>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors'
 * '<S163>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1'
 * '<S164>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection'
 * '<S165>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection1'
 * '<S166>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem'
 * '<S167>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem1'
 * '<S168>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem2'
 * '<S169>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem'
 * '<S170>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem1'
 * '<S171>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem2'
 * '<S172>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q0'
 * '<S173>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q1'
 * '<S174>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q2'
 * '<S175>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Multiplication2/q3'
 * '<S176>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize'
 * '<S177>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V1'
 * '<S178>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V2'
 * '<S179>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/V3'
 * '<S180>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus'
 * '<S181>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S182>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2'
 * '<S183>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel'
 * '<S184>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant'
 * '<S185>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal'
 * '<S186>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2'
 * '<S187>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem'
 * '<S188>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1'
 * '<S189>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem'
 * '<S190>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem1'
 * '<S191>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem2'
 * '<S192>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product'
 * '<S193>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Subsystem'
 * '<S194>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Subsystem1'
 * '<S195>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus'
 * '<S196>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm'
 * '<S197>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2'
 * '<S198>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel'
 * '<S199>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant'
 * '<S200>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal'
 * '<S201>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2'
 * '<S202>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem'
 * '<S203>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1'
 * '<S204>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem'
 * '<S205>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem1'
 * '<S206>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem2'
 * '<S207>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product'
 * '<S208>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Subsystem'
 * '<S209>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Subsystem1'
 * '<S210>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus'
 * '<S211>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm'
 * '<S212>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product1'
 * '<S213>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2'
 * '<S214>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product1/Subsystem'
 * '<S215>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product1/Subsystem1'
 * '<S216>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Subsystem'
 * '<S217>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Subsystem1'
 * '<S218>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1'
 * '<S219>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2'
 * '<S220>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem'
 * '<S221>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1'
 * '<S222>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem'
 * '<S223>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1'
 * '<S224>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/ConditionAttInputs/Quaternion Conjugate'
 * '<S225>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/ConditionAttInputs/Quaternion Normalize'
 * '<S226>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus'
 * '<S227>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S228>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Quaternion Rotation/Quaternion Normalize'
 * '<S229>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Quaternion Rotation/V1'
 * '<S230>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Quaternion Rotation/V2'
 * '<S231>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Quaternion Rotation/V3'
 * '<S232>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S233>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Attitude Profile (Sun Tracking)/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S234>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1/Angle Calculation'
 * '<S235>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1/Quaternion Normalize'
 * '<S236>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input'
 * '<S237>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem'
 * '<S238>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1'
 * '<S239>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2'
 * '<S240>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus'
 * '<S241>' : 'asbCubeSatACS/Attitude Control/Pointing Mode Selection/On.Sun/Quaternions to Rotation Angles1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S242>' : 'asbCubeSatACS/Discrete PID Controller/Anti-windup'
 * '<S243>' : 'asbCubeSatACS/Discrete PID Controller/D Gain'
 * '<S244>' : 'asbCubeSatACS/Discrete PID Controller/Filter'
 * '<S245>' : 'asbCubeSatACS/Discrete PID Controller/Filter ICs'
 * '<S246>' : 'asbCubeSatACS/Discrete PID Controller/I Gain'
 * '<S247>' : 'asbCubeSatACS/Discrete PID Controller/Ideal P Gain'
 * '<S248>' : 'asbCubeSatACS/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S249>' : 'asbCubeSatACS/Discrete PID Controller/Integrator'
 * '<S250>' : 'asbCubeSatACS/Discrete PID Controller/Integrator ICs'
 * '<S251>' : 'asbCubeSatACS/Discrete PID Controller/N Copy'
 * '<S252>' : 'asbCubeSatACS/Discrete PID Controller/N Gain'
 * '<S253>' : 'asbCubeSatACS/Discrete PID Controller/P Copy'
 * '<S254>' : 'asbCubeSatACS/Discrete PID Controller/Parallel P Gain'
 * '<S255>' : 'asbCubeSatACS/Discrete PID Controller/Reset Signal'
 * '<S256>' : 'asbCubeSatACS/Discrete PID Controller/Saturation'
 * '<S257>' : 'asbCubeSatACS/Discrete PID Controller/Saturation Fdbk'
 * '<S258>' : 'asbCubeSatACS/Discrete PID Controller/Sum'
 * '<S259>' : 'asbCubeSatACS/Discrete PID Controller/Sum Fdbk'
 * '<S260>' : 'asbCubeSatACS/Discrete PID Controller/Tracking Mode'
 * '<S261>' : 'asbCubeSatACS/Discrete PID Controller/Tracking Mode Sum'
 * '<S262>' : 'asbCubeSatACS/Discrete PID Controller/Tsamp - Integral'
 * '<S263>' : 'asbCubeSatACS/Discrete PID Controller/Tsamp - Ngain'
 * '<S264>' : 'asbCubeSatACS/Discrete PID Controller/postSat Signal'
 * '<S265>' : 'asbCubeSatACS/Discrete PID Controller/preSat Signal'
 * '<S266>' : 'asbCubeSatACS/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S267>' : 'asbCubeSatACS/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S268>' : 'asbCubeSatACS/Discrete PID Controller/Filter/Differentiator'
 * '<S269>' : 'asbCubeSatACS/Discrete PID Controller/Filter/Differentiator/Tsamp'
 * '<S270>' : 'asbCubeSatACS/Discrete PID Controller/Filter/Differentiator/Tsamp/Internal Ts'
 * '<S271>' : 'asbCubeSatACS/Discrete PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S272>' : 'asbCubeSatACS/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S273>' : 'asbCubeSatACS/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S274>' : 'asbCubeSatACS/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S275>' : 'asbCubeSatACS/Discrete PID Controller/Integrator/Discrete'
 * '<S276>' : 'asbCubeSatACS/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S277>' : 'asbCubeSatACS/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S278>' : 'asbCubeSatACS/Discrete PID Controller/N Gain/Passthrough'
 * '<S279>' : 'asbCubeSatACS/Discrete PID Controller/P Copy/Disabled'
 * '<S280>' : 'asbCubeSatACS/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S281>' : 'asbCubeSatACS/Discrete PID Controller/Reset Signal/Disabled'
 * '<S282>' : 'asbCubeSatACS/Discrete PID Controller/Saturation/Passthrough'
 * '<S283>' : 'asbCubeSatACS/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S284>' : 'asbCubeSatACS/Discrete PID Controller/Sum/Sum_PID'
 * '<S285>' : 'asbCubeSatACS/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S286>' : 'asbCubeSatACS/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S287>' : 'asbCubeSatACS/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S288>' : 'asbCubeSatACS/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S289>' : 'asbCubeSatACS/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S290>' : 'asbCubeSatACS/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S291>' : 'asbCubeSatACS/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_asbCubeSatACS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
