/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: asbCubeSat.h
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

#ifndef RTW_HEADER_asbCubeSat_h_
#define RTW_HEADER_asbCubeSat_h_
#ifndef asbCubeSat_COMMON_INCLUDES_
#define asbCubeSat_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "DAHostLib_Network.h"
#endif                                 /* asbCubeSat_COMMON_INCLUDES_ */

#include "asbCubeSat_types.h"
#include "asbCubeSatACS.h"
#include <math.h>
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals for system '<S28>/For Iterator Subsystem' */
typedef struct {
  real_T VectorConcatenate_o[13];      /* '<S31>/Vector Concatenate' */
} B_ForIteratorSubsystem_asbCubeSat_T;

/* Block states (default storage) for system '<S28>/For Iterator Subsystem' */
typedef struct {
  real_T UnitDelay1_DSTATE[13];        /* '<S31>/Unit Delay1' */
} DW_ForIteratorSubsystem_asbCubeSat_T;

/* Block signals (default storage) */
typedef struct {
  real_T Selector[22400];              /* '<S154>/Selector' */
  real_T Selector_h[17850];            /* '<S155>/Selector' */
  real_T P[15129];
  real_T scaleFactor[15129];
  int32_T ii_data[11190];
  int32_T idx_data[11190];
  real_T factor_dX[1600];
  real_T factor_dX_m[1600];
  real_T factor_dX_c[1600];
  real_T factor_dX_k[1600];
  real_T Divide4_p[1600];              /* '<S155>/Divide4' */
  real_T Divide5_h[1600];              /* '<S155>/Divide5' */
  real_T Sum_b[1600];                  /* '<S154>/Sum' */
  real_T Selector2_p[1275];            /* '<S155>/Selector2' */
  real_T factor_dY[1275];
  real_T factor_dY_c[1275];
  real_T factor_dY_b[1275];
  real_T factor_dY_p[1275];
  real_T factor_dY_cv[1275];
  real_T factor_dY_f[1275];
  real_T Sum_d[1275];                  /* '<S155>/Sum' */
  real_T P_g[529];
  real_T scaleFactor_g[529];
  real_T Selector_j[528];              /* '<S153>/Selector' */
  real_T ephdatamoon[312];             /* '<S26>/eph data moon' */
  real_T smlambda[121];
  real_T cmlambda[121];
  real_T ephdata[78];                  /* '<S19>/eph data' */
  real_T Selector1_p[66];              /* '<S153>/Selector1' */
  real_T Selector2_n[66];              /* '<S153>/Selector2' */
  real_T factor_dS[66];
  real_T factor_dS_m[66];
  real_T factor_dS_n[66];
  real_T factor_dS_p[66];
  real_T Divide5[66];                  /* '<S153>/Divide5' */
  real_T Divide4[66];                  /* '<S153>/Divide4' */
  real_T Sum_e[66];                    /* '<S153>/Sum' */
  real_T ephdata_f[66];                /* '<S22>/eph data' */
  real_T Assignment1[36];              /* '<S154>/Assignment1' */
  real_T Assignment1_c[30];            /* '<S155>/Assignment1' */
  real_T Assignment1_p[25];            /* '<S153>/Assignment1' */
  real_T smlambda_l[21];
  real_T cmlambda_j[21];
  real_T nutationV[14];
  real_T nutationV_d[14];
  real_T nutationV_g[14];
  real_T nutationV_l[14];
  real_T nutationV_dh[14];
  real_T nutationV_dy[14];
  real_T MathFunction_k[14];           /* '<S146>/Math Function' */
  real_T Assignment_n[13];             /* '<S44>/Assignment' */
  real_T Assignment_p[13];             /* '<S33>/Assignment' */
  ACSOutBus ACSOut;                    /* '<S114>/Attitude Control System' */
  real_T VectorConcatenate_p[11];      /* '<S60>/Vector Concatenate' */
  real_T Assignment_d_l[11];           /* '<S62>/Assignment' */
  real_T VectorConcatenate_g[9];       /* '<S156>/Vector Concatenate' */
  real_T Transpose[9];                 /* '<S116>/Transpose' */
  real_T VectorConcatenate_b[9];       /* '<S161>/Vector Concatenate' */
  real_T Transpose1[9];                /* '<S116>/Transpose1' */
  real_T Product2[9];
  real_T Product2_o[9];
  real_T nutationV_s[8];
  real_T nutationV_s_b[8];
  real_T nutationV_s_n[8];
  real_T nutationV_s_bs[8];
  real_T nutationV_s_l[8];
  real_T nutationV_s_h[8];
  real_T nutationV_s_bn[8];
  real_T UnitConversion_d[5];          /* '<S148>/Unit Conversion' */
  real_T Sum4_k[4];                    /* '<S134>/Sum4' */
  real_T RateTransition7[4];           /* '<S225>/Rate Transition7' */
  real_T RateTransition6[4];           /* '<S225>/Rate Transition6' */
  real_T RateTransition2[4];           /* '<S225>/Rate Transition2' */
  real_T X_ecef[3];                    /* '<S113>/Spacecraft Dynamics' */
  real_T V_ecef[3];                    /* '<S113>/Spacecraft Dynamics' */
  real_T Euler[3];                     /* '<S113>/Spacecraft Dynamics' */
  real_T is180degRot[3];               /* '<S235>/is 180deg Rot' */
  real_T Assignment_e[3];              /* '<S61>/Assignment' */
  real_T Assignment_g[3];              /* '<S32>/Assignment' */
  real_T Assignment_d3[3];             /* '<S43>/Assignment' */
  real_T dv[3];
  real_T rtb_is180degRot_b[3];
  real_T dv1[3];
  real_T TmpRTBAtVRSinkInport3[3];     /* '<S225>/Satellite Model Scaling' */
  real_T RateTransition3[3];           /* '<S225>/Rate Transition3' */
  real_T TmpRTBAtVRSinkInport6[3];     /* '<S225>/m to VRML' */
  real_T RateTransition5[3];           /* '<S225>/Rate Transition5' */
  real_T Sum2;                         /* '<S134>/Sum2' */
  real_T secGain;                      /* '<S132>/secGain' */
  real_T Selector1[1600];              /* '<S154>/Selector1' */
  real_T Selector2[1600];              /* '<S154>/Selector2' */
  real_T Selector1_l[1275];            /* '<S155>/Selector1' */
  real_T ECEFPositiontoLLA_o1[2];      /* '<S113>/ECEF Position to LLA' */
  real_T VectorConcatenate[9];         /* '<S172>/Vector Concatenate' */
  real_T Divide;                       /* '<S116>/Divide' */
  real_T Sum2_f;                       /* '<S142>/Sum2' */
  real_T Gain1[2];                     /* '<S141>/Gain1' */
  real_T r_eci[3];                     /* '<S116>/r_eci' */
  real_T v_eci[3];                     /* '<S116>/v_eci' */
  real_T UnitConversion[3];            /* '<S11>/Unit Conversion' */
  real_T Merge[4];                     /* '<S119>/Merge' */
  real_T Sum1;                         /* '<S227>/Sum1' */
  real_T Enablecustomgravitycalculation[3];
                                  /* '<S1>/Enable custom gravity calculation' */
  real_T Sum2_c[3];                    /* '<S113>/Sum2' */
  real_T Sum;                          /* '<S211>/Sum' */
  real_T Sum_i;                        /* '<S212>/Sum' */
  real_T Sum_f;                        /* '<S213>/Sum' */
  real_T Sum_j;                        /* '<S214>/Sum' */
  real_T VectorConcatenate_j[23];      /* '<S5>/Vector Concatenate' */
  real_T MultiportSwitch;              /* '<S3>/Multiport Switch' */
  real_T Sum1_a[3];                    /* '<S113>/Sum1' */
  real_T Sum_p[3];                     /* '<S283>/Sum' */
  real_T DotProduct1;                  /* '<S274>/Dot Product1' */
  real_T DotProduct1_m;                /* '<S235>/Dot Product1' */
  real_T Assignment[11];               /* '<S60>/Assignment' */
  real_T Assignment_c[13];             /* '<S42>/Assignment' */
  real_T Assignment_d[13];             /* '<S31>/Assignment' */
  real_T year;
  real_T year_j;
  real_T month;
  real_T day;
  real_T hour;
  real_T min;
  real_T dUT1UTC;
  real_T T;
  real_T dUT1;
  real_T tTT3;
  real_T tTT4;
  real_T tTT5;
  real_T Api_s;
  real_T Product3_j;                   /* '<S267>/Product3' */
  real_T Sum_ai;                       /* '<S263>/Sum' */
  real_T Gain_i;                       /* '<S132>/Gain' */
  real_T RoundingFunction;             /* '<S134>/Rounding Function' */
  real_T Product1_kl;                  /* '<S296>/Product1' */
  real_T Sqrt1;                        /* '<S123>/Sqrt1' */
  real_T dt1;                          /* '<S25>/Rounding Function' */
  real_T Sum1_c;                       /* '<S21>/Sum1' */
  real_T temp;                         /* '<S27>/Product' */
  real_T kxj_p;                        /* '<S285>/k x j' */
  real_T Gain1_g;                      /* '<S174>/Gain1' */
  real_T ScaleModelToVRML;             /* '<S240>/ScaleModelToVRML' */
  real_T DotProduct3;                  /* '<S123>/Dot Product3' */
  real_T Sum_i_f;                      /* '<S268>/Sum' */
  real_T A_tmp;
  real_T jd_tmp;
  real_T jd_tmp_a;
  real_T day_tmp;
  real_T pData_tmp;
  real_T pData_tmp_j;
  real_T rot_pm_idx_0;
  real_T rtb_Divide_i_idx_1;
  real_T rtb_Divide_i_idx_2;
  real_T rtb_Switch3_idx_2;
  real_T rtb_Switch3_idx_0;
  real_T rtb_Switch3_idx_1;
  real_T pm_idx_1;
  real_T dCIP_idx_0;
  real_T dCIP_idx_1;
  real_T rtb_EarthOrientationParameters_o2_idx_0;
  real_T rtb_EarthOrientationParameters_o2_idx_1;
  real_T rtb_Switch_j_idx_0;
  real_T rtb_Switch_j_idx_1;
  real_T rtb_EarthOrientationParameters_o3_idx_1;
  real_T rtb_EarthOrientationParameters_o3_idx_0;
  real_T rtb_Divide2_k_idx_0;
  real_T rtb_Divide2_k_idx_1;
  real_T rtb_Divide2_k_idx_2;
  real_T pData_idx_6;
  real_T pData_idx_4;
  real_T pData_idx_7;
  real_T pData_idx_5;
  real_T pData_idx_8;
  real_T pData_idx_4_j;
  real_T pData_idx_7_o;
  real_T pData_idx_8_n;
  real_T pData_idx_1;
  real_T pData_idx_4_i;
  real_T pData_idx_2;
  real_T pData_idx_6_o;
  real_T pData_idx_7_n;
  real_T pData_idx_1_m;
  real_T pData_idx_1_c;
  real_T pData_idx_2_m;
  real_T pData_idx_1_m3;
  real_T pData_idx_0;
  real_T pData_idx_2_j;
  real_T pData_idx_1_h;
  real_T pData_idx_1_c0;
  real_T pData_idx_0_c;
  real_T pData_idx_0_p;
  real_T pData_idx_2_p;
  real_T pData_idx_3;
  real_T pData_idx_2_a;
  real_T pData_idx_3_e;
  real_T pData_idx_3_a;
  real_T pData_idx_1_a;
  real_T pData_idx_2_tmp;
  real_T rot_pm_idx_0_tmp;
  real_T pData_idx_2_tmp_i;
  real_T jd_tmp_tmp;
  real_T jd_tmp_tmp_tmp;
  real_T rtb_DotProduct3_tmp;
  real_T jd_tmp_tmp_l;
  real_T pData_idx_4_tmp;
  real_T Merge_o;                      /* '<S274>/Merge' */
  real_T jxi_a;                        /* '<S285>/j x i' */
  real_T ixk_i;                        /* '<S285>/i x k' */
  real_T dt1_j;                        /* '<S27>/Rounding Function' */
  real_T temp_a;                       /* '<S25>/Product' */
  real_T PointingMode;                 /* '<S70>/fromWS_Signal 1' */
  real_T d;
  real_T d1;
  real_T pData_tmp_o;
  real_T pData_tmp_i;
  real_T pData_tmp_f;
  real_T pData_tmp_iz;
  real_T euler_idx_0;
  real_T euler_idx_1;
  real_T euler_idx_2;
  real_T pData_idx_0_f;
  real_T q;
  real_T u1;
  int32_T kidx;
  int32_T idx;
  int32_T s60_iter;
  int32_T Bias2_i;                     /* '<S60>/Bias2' */
  int32_T P_tmp_tmp;
  int32_T P_tmp;
  int32_T u0;
  int32_T u1_g;
  boolean_T Compare;                   /* '<S275>/Compare' */
  boolean_T exitg1;
  boolean_T yEq;
  B_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem_o;/* '<S39>/For Iterator Subsystem' */
  B_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem;/* '<S28>/For Iterator Subsystem' */
} B_asbCubeSat_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_7_DSTATE[4];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_DSTATE[3];          /* '<S228>/Unit Delay' */
  real_T UnitDelay_4_DSTATE[3];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_5_DSTATE[3];        /* '<S112>/Unit Delay' */
  real_T UnitDelay1_DSTATE[11];        /* '<S60>/Unit Delay1' */
  real_T SpacecraftDynamics_DWORK2[3]; /* '<S113>/Spacecraft Dynamics' */
  real_T SpacecraftDynamics_DWORK3[3]; /* '<S113>/Spacecraft Dynamics' */
  real_T RateTransition7_Buffer[4];    /* '<S225>/Rate Transition7' */
  real_T RateTransition5_Buffer[3];    /* '<S225>/Rate Transition5' */
  volatile real_T TmpRTBAtVRSinkInport6_Buffer0[3];/* synthesized block */
  real_T RateTransition3_Buffer[3];    /* '<S225>/Rate Transition3' */
  real_T UDPSend_NetworkLib[137];      /* '<S5>/UDP Send' */
  real_T RateTransition1_Buffer[3];    /* '<S225>/Rate Transition1' */
  real_T RateTransition4_Buffer[3];    /* '<S225>/Rate Transition4' */
  real_T RateTransition2_Buffer[4];    /* '<S225>/Rate Transition2' */
  volatile real_T TmpRTBAtVRSinkInport3_Buffer0[3];/* synthesized block */
  real_T RateTransition6_Buffer[4];    /* '<S225>/Rate Transition6' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } fromWS_Signal1_PWORK;              /* '<S70>/fromWS_Signal 1' */

  void *VRSink_PWORK[25];              /* '<S225>/VR Sink' */
  struct {
    int_T PrevIndex;
  } fromWS_Signal1_IWORK;              /* '<S70>/fromWS_Signal 1' */

  int8_T If_ActiveSubsystem;           /* '<S134>/If' */
  int8_T If1_ActiveSubsystem;          /* '<S21>/If1' */
  int8_T If_ActiveSubsystem_o;         /* '<S119>/If' */
  int8_T If_ActiveSubsystem_m;         /* '<S142>/If' */
  int8_T If2_ActiveSubsystem;          /* '<S23>/If2' */
  volatile int8_T TmpRTBAtVRSinkInport6_semaphoreTaken;/* synthesized block */
  int8_T If_ActiveSubsystem_d;         /* '<S274>/If' */
  volatile int8_T TmpRTBAtVRSinkInport3_semaphoreTaken;/* synthesized block */
  int8_T FindMaximumDiagonalValue_ActiveSubsystem;
                                      /* '<S173>/Find Maximum Diagonal Value' */
  boolean_T SpacecraftDynamics_DWORK1; /* '<S113>/Spacecraft Dynamics' */
  MdlrefDW_asbCubeSatACS_T AttitudeControlSystem_InstanceData;/* '<S114>/Attitude Control System' */
  DW_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem_o;/* '<S39>/For Iterator Subsystem' */
  DW_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem;/* '<S28>/For Iterator Subsystem' */
} DW_asbCubeSat_T;

/* Continuous states (default storage) */
typedef struct {
  real_T SpacecraftDynamics_CSTATE[13];/* '<S113>/Spacecraft Dynamics' */
} X_asbCubeSat_T;

/* State derivatives (default storage) */
typedef struct {
  real_T SpacecraftDynamics_CSTATE[13];/* '<S113>/Spacecraft Dynamics' */
} XDot_asbCubeSat_T;

/* State disabled  */
typedef struct {
  boolean_T SpacecraftDynamics_CSTATE[13];/* '<S113>/Spacecraft Dynamics' */
} XDis_asbCubeSat_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters for system: '<S28>/For Iterator Subsystem' */
struct P_ForIteratorSubsystem_asbCubeSat_T_ {
  real_T pci_Y0;                       /* Computed Parameter: pci_Y0
                                        * Referenced by: '<S31>/pc(i)'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S31>/Unit Delay1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T Constant1_Value[11];          /* Expression: zeros(1,ncf-2)
                                        * Referenced by: '<S31>/Constant1'
                                        */
  real_T Gain_Gain;                    /* Expression: 2
                                        * Referenced by: '<S31>/Gain'
                                        */
  int32_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S31>/Switch'
                                        */
  int32_T Bias2_Bias;                  /* Computed Parameter: Bias2_Bias
                                        * Referenced by: '<S31>/Bias2'
                                        */
  int32_T Bias3_Bias;                  /* Computed Parameter: Bias3_Bias
                                        * Referenced by: '<S31>/Bias3'
                                        */
  int32_T Bias4_Bias;                  /* Computed Parameter: Bias4_Bias
                                        * Referenced by: '<S31>/Bias4'
                                        */
};

/* Parameters for system: '<S34>/For Iterator Subsystem' */
struct P_ForIteratorSubsystem_asbCubeSat_j_T_ {
  real_T vci_Y0;                       /* Computed Parameter: vci_Y0
                                        * Referenced by: '<S36>/vc(i)'
                                        */
  real_T Gain_Gain;                    /* Expression: 2
                                        * Referenced by: '<S36>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<S36>/Gain1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T Constant1_Value[10];          /* Expression: zeros(1,ncf-3)
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S36>/Constant2'
                                        */
};

/* Parameters for system: '<S37>/For Iterator Subsystem' */
struct P_ForIteratorSubsystem_asbCubeSat_o_T_ {
  real_T velocity_Y0;                  /* Computed Parameter: velocity_Y0
                                        * Referenced by: '<S38>/velocity'
                                        */
  int32_T ForIterator_IterationLimit;
                               /* Computed Parameter: ForIterator_IterationLimit
                                * Referenced by: '<S38>/For Iterator'
                                */
};

/* Parameters for system: '<S35>/For Iterator Subsystem' */
struct P_ForIteratorSubsystem_asbCubeSat_m_T_ {
  real_T velocity_Y0;                  /* Computed Parameter: velocity_Y0
                                        * Referenced by: '<S37>/velocity'
                                        */
  int32_T ncm_IterationLimit;          /* Computed Parameter: ncm_IterationLimit
                                        * Referenced by: '<S37>/ncm'
                                        */
  P_ForIteratorSubsystem_asbCubeSat_o_T ForIteratorSubsystem;/* '<S37>/For Iterator Subsystem' */
};

/* Parameters for system: '<S134>/If Action Subsystem' */
struct P_IfActionSubsystem_asbCubeSat_T_ {
  real_T Bias1_Bias;                   /* Expression: -1
                                        * Referenced by: '<S136>/Bias1'
                                        */
  real_T Bias_Bias;                    /* Expression: 12
                                        * Referenced by: '<S136>/Bias'
                                        */
};

/* Parameters for system: '<S274>/If Action Subsystem' */
struct P_IfActionSubsystem_asbCubeSat_g_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S280>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_asbCubeSat_T_ {
  real_T DirectionCosineMatrixtoQuaternions_action;
                    /* Mask Parameter: DirectionCosineMatrixtoQuaternions_action
                     * Referenced by:
                     *   '<S175>/Constant'
                     *   '<S200>/Constant'
                     *   '<S201>/Constant'
                     */
  real_T Visualization_antennaHalfAngle;
                               /* Mask Parameter: Visualization_antennaHalfAngle
                                * Referenced by: '<S227>/Constant1'
                                */
  real_T Visualization_antennaHeight;
                                  /* Mask Parameter: Visualization_antennaHeight
                                   * Referenced by: '<S227>/Constant2'
                                   */
  real_T Center_bufMoon[534456];       /* Mask Parameter: Center_bufMoon
                                        * Referenced by: '<S26>/eph data moon'
                                        */
  real_T Center_bufPlanet[133614];     /* Mask Parameter: Center_bufPlanet
                                        * Referenced by: '<S19>/eph data'
                                        */
  real_T Target_bufPlanet[113058];     /* Mask Parameter: Target_bufPlanet
                                        * Referenced by: '<S22>/eph data'
                                        */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S275>/Constant'
                                       */
  real_T CompareToConstant_const_k; /* Mask Parameter: CompareToConstant_const_k
                                     * Referenced by: '<S298>/Constant'
                                     */
  real_T Visualization_cubesatSize; /* Mask Parameter: Visualization_cubesatSize
                                     * Referenced by: '<S240>/Constant'
                                     */
  real_T JulianDateConversion_day;   /* Mask Parameter: JulianDateConversion_day
                                      * Referenced by: '<S134>/day'
                                      */
  real_T JulianDateConversion_day_j;
                                   /* Mask Parameter: JulianDateConversion_day_j
                                    * Referenced by: '<S142>/day'
                                    */
  real_T R_woPM_hour;                  /* Mask Parameter: R_woPM_hour
                                        * Referenced by:
                                        *   '<S134>/hour'
                                        *   '<S142>/hour'
                                        */
  real_T R_woPM_min;                   /* Mask Parameter: R_woPM_min
                                        * Referenced by:
                                        *   '<S134>/min'
                                        *   '<S142>/min'
                                        */
  real_T JulianDateConversion_month;
                                   /* Mask Parameter: JulianDateConversion_month
                                    * Referenced by: '<S134>/month'
                                    */
  real_T JulianDateConversion_month_a;
                                 /* Mask Parameter: JulianDateConversion_month_a
                                  * Referenced by: '<S142>/month'
                                  */
  real_T Center_naMoon;                /* Mask Parameter: Center_naMoon
                                        * Referenced by: '<S27>/Constant1'
                                        */
  real_T Center_naPlanet;              /* Mask Parameter: Center_naPlanet
                                        * Referenced by: '<S25>/Constant1'
                                        */
  real_T Target_naPlanet;              /* Mask Parameter: Target_naPlanet
                                        * Referenced by: '<S56>/Constant1'
                                        */
  real_T forpc_ncf;                    /* Mask Parameter: forpc_ncf
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T forvc_ncf;                    /* Mask Parameter: forvc_ncf
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T forpc_ncf_k;                  /* Mask Parameter: forpc_ncf_k
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T forvc_ncf_e;                  /* Mask Parameter: forvc_ncf_e
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T forpc_ncf_d;                  /* Mask Parameter: forpc_ncf_d
                                        * Referenced by: '<S57>/Constant'
                                        */
  real_T forvc_ncf_f;                  /* Mask Parameter: forvc_ncf_f
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T position_ncm;                 /* Mask Parameter: position_ncm
                                        * Referenced by:
                                        *   '<S32>/ncm'
                                        *   '<S33>/Constant2'
                                        */
  real_T position_ncm_d;               /* Mask Parameter: position_ncm_d
                                        * Referenced by:
                                        *   '<S43>/ncm'
                                        *   '<S44>/Constant2'
                                        */
  real_T position_ncm_f;               /* Mask Parameter: position_ncm_f
                                        * Referenced by:
                                        *   '<S61>/ncm'
                                        *   '<S62>/Constant2'
                                        */
  real_T JulianDateConversion_sec;   /* Mask Parameter: JulianDateConversion_sec
                                      * Referenced by: '<S134>/sec'
                                      */
  real_T R_woPM_sec;                   /* Mask Parameter: R_woPM_sec
                                        * Referenced by: '<S132>/Constant'
                                        */
  real_T JulianDateConversion_sec_c;
                                   /* Mask Parameter: JulianDateConversion_sec_c
                                    * Referenced by: '<S142>/sec'
                                    */
  real_T Visualization_showAntenna; /* Mask Parameter: Visualization_showAntenna
                                     * Referenced by: '<S225>/Constant3'
                                     */
  real_T DirectionCosineMatrixtoQuaternions_tolerance;
                 /* Mask Parameter: DirectionCosineMatrixtoQuaternions_tolerance
                  * Referenced by:
                  *   '<S208>/Constant'
                  *   '<S210>/Constant'
                  */
  real_T R_woPM_year;                  /* Mask Parameter: R_woPM_year
                                        * Referenced by:
                                        *   '<S134>/year'
                                        *   '<S142>/year'
                                        */
  int32_T UDPSend_remotePort;          /* Mask Parameter: UDPSend_remotePort
                                        * Referenced by: '<S5>/UDP Send'
                                        */
  real_T position_Y0;                  /* Computed Parameter: position_Y0
                                        * Referenced by: '<S33>/position'
                                        */
  real_T ncf_IterationLimit;           /* Expression: ncf
                                        * Referenced by: '<S33>/ncf'
                                        */
  real_T Constant_Value[13];           /* Expression: zeros(ncf,1)
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T Bias_Bias;                    /* Expression: -1
                                        * Referenced by: '<S33>/Bias'
                                        */
  real_T Constant1_Value;              /* Expression: ncf
                                        * Referenced by: '<S33>/Constant1'
                                        */
  real_T Bias1_Bias;                   /* Expression: -1
                                        * Referenced by: '<S33>/Bias1'
                                        */
  real_T position_Y0_d;                /* Computed Parameter: position_Y0_d
                                        * Referenced by: '<S32>/position'
                                        */
  real_T Constant_Value_n[3];          /* Expression: zeros(ncm,1)
                                        * Referenced by: '<S32>/Constant'
                                        */
  real_T position_Y0_l;                /* Computed Parameter: position_Y0_l
                                        * Referenced by: '<S44>/position'
                                        */
  real_T ncf_IterationLimit_k;         /* Expression: ncf
                                        * Referenced by: '<S44>/ncf'
                                        */
  real_T Constant_Value_i[13];         /* Expression: zeros(ncf,1)
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T Bias_Bias_b;                  /* Expression: -1
                                        * Referenced by: '<S44>/Bias'
                                        */
  real_T Constant1_Value_a;            /* Expression: ncf
                                        * Referenced by: '<S44>/Constant1'
                                        */
  real_T Bias1_Bias_h;                 /* Expression: -1
                                        * Referenced by: '<S44>/Bias1'
                                        */
  real_T position_Y0_c;                /* Computed Parameter: position_Y0_c
                                        * Referenced by: '<S43>/position'
                                        */
  real_T Constant_Value_l[3];          /* Expression: zeros(ncm,1)
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Bias1_Bias_b;                 /* Expression: -1
                                        * Referenced by: '<S51>/Bias1'
                                        */
  real_T pci_Y0;                       /* Computed Parameter: pci_Y0
                                        * Referenced by: '<S60>/pc(i)'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S60>/Unit Delay1'
                                        */
  real_T Constant_Value_b;             /* Expression: 1
                                        * Referenced by: '<S60>/Constant'
                                        */
  real_T Constant1_Value_n[9];         /* Expression: zeros(1,ncf-2)
                                        * Referenced by: '<S60>/Constant1'
                                        */
  real_T Gain_Gain;                    /* Expression: 2
                                        * Referenced by: '<S60>/Gain'
                                        */
  real_T position_Y0_ct;               /* Computed Parameter: position_Y0_ct
                                        * Referenced by: '<S62>/position'
                                        */
  real_T ncf_IterationLimit_i;         /* Expression: ncf
                                        * Referenced by: '<S62>/ncf'
                                        */
  real_T Constant_Value_p[11];         /* Expression: zeros(ncf,1)
                                        * Referenced by: '<S62>/Constant'
                                        */
  real_T Bias_Bias_o;                  /* Expression: -1
                                        * Referenced by: '<S62>/Bias'
                                        */
  real_T Constant1_Value_b;            /* Expression: ncf
                                        * Referenced by: '<S62>/Constant1'
                                        */
  real_T Bias1_Bias_j;                 /* Expression: -1
                                        * Referenced by: '<S62>/Bias1'
                                        */
  real_T position_Y0_e;                /* Computed Parameter: position_Y0_e
                                        * Referenced by: '<S61>/position'
                                        */
  real_T Constant_Value_o[3];          /* Expression: zeros(ncm,1)
                                        * Referenced by: '<S61>/Constant'
                                        */
  real_T vci_Y0;                       /* Computed Parameter: vci_Y0
                                        * Referenced by: '<S65>/vc(i)'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 2
                                        * Referenced by: '<S65>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<S65>/Gain1'
                                        */
  real_T Constant_Value_ic;            /* Expression: 0
                                        * Referenced by: '<S65>/Constant'
                                        */
  real_T Constant1_Value_az[8];        /* Expression: zeros(1,ncf-3)
                                        * Referenced by: '<S65>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S65>/Constant2'
                                        */
  real_T velocity_Y0;                  /* Computed Parameter: velocity_Y0
                                        * Referenced by: '<S66>/velocity'
                                        */
  real_T Constant_Value_j;             /* Expression: 1/ephConstants.AU
                                        * Referenced by: '<S69>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 1
                                        * Referenced by: '<S68>/Constant'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 86400
                                        * Referenced by: '<S68>/Gain'
                                        */
  real_T Gain_Gain_dj;                 /* Expression: -2
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: -1
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S174>/Constant'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 0.5
                                        * Referenced by: '<S174>/Gain'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 2
                                        * Referenced by: '<S174>/Gain1'
                                        */
  real_T Constant_Value_ow;            /* Expression: 1
                                        * Referenced by: '<S190>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: 0.5
                                        * Referenced by: '<S189>/Constant1'
                                        */
  real_T Constant2_Value_c[2];         /* Expression: [0 1]
                                        * Referenced by: '<S189>/Constant2'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 1
                                        * Referenced by: '<S178>/Gain1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S178>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<S178>/Gain4'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 0.5
                                        * Referenced by: '<S178>/Gain'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S195>/Constant'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0.5
                                        * Referenced by: '<S194>/Constant1'
                                        */
  real_T Constant2_Value_g[2];         /* Expression: [0 1]
                                        * Referenced by: '<S194>/Constant2'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 1
                                        * Referenced by: '<S179>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S179>/Gain2'
                                        */
  real_T Gain3_Gain_c;                 /* Expression: 1
                                        * Referenced by: '<S179>/Gain3'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 0.5
                                        * Referenced by: '<S179>/Gain'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S185>/Constant'
                                        */
  real_T Constant1_Value_iu;           /* Expression: 0.5
                                        * Referenced by: '<S184>/Constant1'
                                        */
  real_T Constant2_Value_k[2];         /* Expression: [0 1]
                                        * Referenced by: '<S184>/Constant2'
                                        */
  real_T Gain1_Gain_ep;                /* Expression: 1
                                        * Referenced by: '<S177>/Gain1'
                                        */
  real_T Gain2_Gain_c;                 /* Expression: 1
                                        * Referenced by: '<S177>/Gain2'
                                        */
  real_T Gain3_Gain_b;                 /* Expression: 1
                                        * Referenced by: '<S177>/Gain3'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 0.5
                                        * Referenced by: '<S177>/Gain'
                                        */
  real_T Bias1_Bias_p[9];              /* Expression: -eye(3)
                                        * Referenced by: '<S202>/Bias1'
                                        */
  real_T Bias_Bias_m;                  /* Expression: -1
                                        * Referenced by: '<S203>/Bias'
                                        */
  real_T Gain_Gain_mh;                 /* Expression: -1
                                        * Referenced by: '<S276>/Gain'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S276>/Constant'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S276>/Constant1'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: -1
                                        * Referenced by: '<S276>/Gain2'
                                        */
  real_T Constant_Value_c[27200];      /* Expression: aeroCIP2006.X
                                        * Referenced by: '<S154>/Constant'
                                        */
  real_T Constant_Value_bs[21675];     /* Expression: aeroCIP2006.Y
                                        * Referenced by: '<S155>/Constant'
                                        */
  real_T Constant_Value_ks;            /* Expression: 2*pi
                                        * Referenced by: '<S146>/Constant'
                                        */
  real_T SpacecraftDynamics_startDate; /* Expression: initCond.simStartDate.JD
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_mass;      /* Expression: vehicle.mass
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_emptyMass; /* Expression: 3.5
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_fullMass;  /* Expression: 4.0
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_inertia[9];/* Expression: vehicle.inertia
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_emptyInertia[9];
                        /* Expression: [0.1989, 0, 0; 0, 0.1989, 0; 0, 0, .0035]
                         * Referenced by: '<S113>/Spacecraft Dynamics'
                         */
  real_T SpacecraftDynamics_fullInertia[9];
                        /* Expression: [0.2273, 0, 0; 0, 0.2273, 0; 0, 0, .0040]
                         * Referenced by: '<S113>/Spacecraft Dynamics'
                         */
  real_T SpacecraftDynamics_semiMajorAxis;/* Expression: 6786000
                                           * Referenced by: '<S113>/Spacecraft Dynamics'
                                           */
  real_T SpacecraftDynamics_eccentricity;/* Expression: 0.01
                                          * Referenced by: '<S113>/Spacecraft Dynamics'
                                          */
  real_T SpacecraftDynamics_inclination;/* Expression: 50
                                         * Referenced by: '<S113>/Spacecraft Dynamics'
                                         */
  real_T SpacecraftDynamics_raan;      /* Expression: 95
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_argPeriapsis;/* Expression: 93
                                          * Referenced by: '<S113>/Spacecraft Dynamics'
                                          */
  real_T SpacecraftDynamics_trueAnomaly;/* Expression: 203
                                         * Referenced by: '<S113>/Spacecraft Dynamics'
                                         */
  real_T SpacecraftDynamics_trueLon;   /* Expression: 0
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_argLat;    /* Expression: 0
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_lonPeriapsis;/* Expression: 0
                                          * Referenced by: '<S113>/Spacecraft Dynamics'
                                          */
  real_T SpacecraftDynamics_inertialPosition[3];/* Expression: initCond.r_eci
                                                 * Referenced by: '<S113>/Spacecraft Dynamics'
                                                 */
  real_T SpacecraftDynamics_inertialVelocity[3];/* Expression: initCond.v_eci
                                                 * Referenced by: '<S113>/Spacecraft Dynamics'
                                                 */
  real_T SpacecraftDynamics_fixedPosition[3];
                             /* Expression: [-4142689.0, -2676864.7, -4669861.6]
                              * Referenced by: '<S113>/Spacecraft Dynamics'
                              */
  real_T SpacecraftDynamics_fixedVelocity[3];/* Expression: [1452.7, -6720.7, 2568.1]
                                              * Referenced by: '<S113>/Spacecraft Dynamics'
                                              */
  real_T SpacecraftDynamics_attitude[3];/* Expression: initCond.euler
                                         * Referenced by: '<S113>/Spacecraft Dynamics'
                                         */
  real_T SpacecraftDynamics_attitudeRate[3];/* Expression: initCond.pqr
                                             * Referenced by: '<S113>/Spacecraft Dynamics'
                                             */
  real_T SpacecraftDynamics_customR;   /* Expression: 3.3962e6
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_customF;   /* Expression: 0.00589
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_customMu;  /* Expression: 42.828314258067e12
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_customJ2;  /* Expression: 1960.45e-6
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_customOmega;/* Expression: 4.06124975e-3
                                         * Referenced by: '<S113>/Spacecraft Dynamics'
                                         */
  real_T SpacecraftDynamics_cbRA;      /* Expression: 317.68143
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_cbRARate;  /* Expression: -0.1061
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_cbDec;     /* Expression: 52.88650
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_cbDecRate; /* Expression: -0.0609
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_cbRotAngle;/* Expression: 176.630
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T SpacecraftDynamics_cbRotRate; /* Expression: 350.89198226
                                        * Referenced by: '<S113>/Spacecraft Dynamics'
                                        */
  real_T JDtoMJD_Bias;                 /* Expression: -2400000.5
                                        * Referenced by: '<S116>/JD to MJD'
                                        */
  real_T Index_Value;                  /* Expression: deltaT
                                        * Referenced by: '<S134>/Index'
                                        */
  real_T sec2_Value[4];                /* Expression: zeros(4,1)
                                        * Referenced by: '<S134>/sec2'
                                        */
  real_T BiasYear_Bias;                /* Expression: 0
                                        * Referenced by: '<S134>/BiasYear'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 365.25
                                        * Referenced by: '<S134>/Gain'
                                        */
  real_T Bias1_Bias_hy;                /* Expression: 1
                                        * Referenced by: '<S134>/Bias1'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 30.6001
                                        * Referenced by: '<S134>/Gain1'
                                        */
  real_T Bias2_Bias;                   /* Expression: 2
                                        * Referenced by: '<S134>/Bias2'
                                        */
  real_T Gain2_Gain_p;                 /* Expression: 1/100
                                        * Referenced by: '<S134>/Gain2'
                                        */
  real_T Gain3_Gain_g;                 /* Expression: 1/4
                                        * Referenced by: '<S134>/Gain3'
                                        */
  real_T BiasDay_Bias;                 /* Expression: -679006
                                        * Referenced by: '<S134>/BiasDay'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1/60
                                        * Referenced by: '<S134>/Gain5'
                                        */
  real_T Gain6_Gain;                   /* Expression: 1/3600
                                        * Referenced by: '<S134>/Gain6'
                                        */
  real_T Gain4_Gain_h;                 /* Expression: 1/24
                                        * Referenced by: '<S134>/Gain4'
                                        */
  real_T Constant1_Value_k;            /* Expression: 37
                                        * Referenced by: '<S116>/Constant1'
                                        */
  real_T Bias_Bias_f;                  /* Expression: 32.184
                                        * Referenced by: '<S132>/Bias'
                                        */
  real_T secGain_Gain;                 /* Expression: 1/86400
                                        * Referenced by: '<S132>/secGain'
                                        */
  real_T Bias1_Bias_o;                 /* Expression: -51544.5
                                        * Referenced by: '<S132>/Bias1'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 1/36525
                                        * Referenced by: '<S132>/Gain'
                                        */
  real_T mMoon_Coefs[5];
     /* Expression: [-0.00024470 0.051635 31.8792 1717915923.2178 485868.249036]
      * Referenced by: '<S146>/mMoon'
      */
  real_T mSun_Coefs[5];
     /* Expression: [-0.00001149 0.000136 -0.5532 129596581.0481 1287104.793048]
      * Referenced by: '<S146>/mSun'
      */
  real_T umMoon_Coefs[5];
    /* Expression: [0.00000417 -0.001037 -12.7512 1739527262.8478 335779.526232]
     * Referenced by: '<S146>/umMoon'
     */
  real_T dSun_Coefs[5];
    /* Expression: [-0.00003169 0.006593 -6.3706 1602961601.2090 1072260.703692]
     * Referenced by: '<S146>/dSun'
     */
  real_T omegaMoon_Coefs[5];
        /* Expression: [-0.00005939 0.007702 7.4722 -6962890.5431 450160.398036]
         * Referenced by: '<S146>/omegaMoon'
         */
  real_T Gain_Gain_cp;                 /* Expression: 1/3600
                                        * Referenced by: '<S146>/Gain'
                                        */
  real_T lMercury_Coefs[2];         /* Expression: [2608.7903141574 4.402608842]
                                     * Referenced by: '<S146>/lMercury'
                                     */
  real_T lVenus_Coefs[2];           /* Expression: [1021.3285546211 3.176146697]
                                     * Referenced by: '<S146>/lVenus'
                                     */
  real_T lEarth_Coefs[2];            /* Expression: [628.3075849991 1.753470314]
                                      * Referenced by: '<S146>/lEarth'
                                      */
  real_T lMars_Coefs[2];               /* Expression: [334.06124267 6.203480913]
                                        * Referenced by: '<S146>/lMars'
                                        */
  real_T lJupiter_Coefs[2];           /* Expression: [52.9690962641 0.599546497]
                                       * Referenced by: '<S146>/lJupiter'
                                       */
  real_T lSaturn_Coefs[2];             /* Expression: [21.329910496 0.874016757]
                                        * Referenced by: '<S146>/lSaturn'
                                        */
  real_T lUranus_Coefs[2];             /* Expression: [7.4781598567 5.481293872]
                                        * Referenced by: '<S146>/lUranus'
                                        */
  real_T lNeptune_Coefs[2];            /* Expression: [3.8133035638 5.311886287]
                                        * Referenced by: '<S146>/lNeptune'
                                        */
  real_T pa_Coefs[3];                /* Expression: [0.00000538691 0.02438175 0]
                                      * Referenced by: '<S146>/pa'
                                      */
  real_T Constant1_Value_bw[1306];     /* Expression: ones(1306,1)
                                        * Referenced by: '<S154>/Constant1'
                                        */
  real_T Constant2_Value_gx[253];      /* Expression: zeros(253,1)
                                        * Referenced by: '<S154>/Constant2'
                                        */
  real_T Constant3_Value[36];          /* Expression: zeros(36,1)
                                        * Referenced by: '<S154>/Constant3'
                                        */
  real_T Constant4_Value[4];           /* Expression: zeros(4,1)
                                        * Referenced by: '<S154>/Constant4'
                                        */
  real_T Constant1_Value_ko[962];      /* Expression: ones(962,1)
                                        * Referenced by: '<S155>/Constant1'
                                        */
  real_T Constant2_Value_kf[277];      /* Expression: zeros(277,1)
                                        * Referenced by: '<S155>/Constant2'
                                        */
  real_T Constant3_Value_e[30];        /* Expression: zeros(30,1)
                                        * Referenced by: '<S155>/Constant3'
                                        */
  real_T Constant4_Value_g[5];         /* Expression: zeros(5,1)
                                        * Referenced by: '<S155>/Constant4'
                                        */
  real_T Constant_Value_ka[726];       /* Expression: aeroCIP2006.S
                                        * Referenced by: '<S153>/Constant'
                                        */
  real_T Constant_Value_h3;            /* Expression: 86400
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Bias_Bias_j;                  /* Expression: -0.5
                                        * Referenced by: '<S21>/Bias'
                                        */
  real_T Epoch_Value;                  /* Expression: 0
                                        * Referenced by: '<S12>/Epoch'
                                        */
  real_T Bias1_Bias_d;                 /* Expression: 0.5
                                        * Referenced by: '<S21>/Bias1'
                                        */
  real_T Constant1_Value_nc[3];        /* Expression: ephConstants.JED
                                        * Referenced by: '<S21>/Constant1'
                                        */
  real_T Bias2_Bias_d;                 /* Expression: 1
                                        * Referenced by: '<S21>/Bias2'
                                        */
  real_T Bias3_Bias;                   /* Expression: -1
                                        * Referenced by: '<S21>/Bias3'
                                        */
  real_T Constant1_Value_ir[33];       /* Expression: ones(33,1)
                                        * Referenced by: '<S153>/Constant1'
                                        */
  real_T Constant2_Value_cx[3];        /* Expression: zeros(3,1)
                                        * Referenced by: '<S153>/Constant2'
                                        */
  real_T Constant3_Value_j[25];        /* Expression: zeros(25,1)
                                        * Referenced by: '<S153>/Constant3'
                                        */
  real_T Constant4_Value_j[4];         /* Expression: zeros(4,1)
                                        * Referenced by: '<S153>/Constant4'
                                        */
  real_T Bias1_Bias_e;                 /* Expression: -2
                                        * Referenced by: '<S39>/Bias1'
                                        */
  real_T Constant3_Value_e1;           /* Expression: 1
                                        * Referenced by: '<S25>/Constant3'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 2
                                        * Referenced by: '<S25>/Gain'
                                        */
  real_T Bias_Bias_d;                  /* Expression: -1
                                        * Referenced by: '<S25>/Bias'
                                        */
  real_T Bias1_Bias_i;                 /* Expression: -3
                                        * Referenced by: '<S45>/Bias1'
                                        */
  real_T Bias1_Bias_l;                 /* Expression: -2
                                        * Referenced by: '<S28>/Bias1'
                                        */
  real_T Constant3_Value_m;            /* Expression: 1
                                        * Referenced by: '<S27>/Constant3'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 2
                                        * Referenced by: '<S27>/Gain'
                                        */
  real_T Bias_Bias_p;                  /* Expression: -1
                                        * Referenced by: '<S27>/Bias'
                                        */
  real_T Bias1_Bias_d2;                /* Expression: -3
                                        * Referenced by: '<S34>/Bias1'
                                        */
  real_T Bias1_Bias_k;                 /* Expression: -2
                                        * Referenced by: '<S57>/Bias1'
                                        */
  real_T Constant3_Value_a;            /* Expression: 1
                                        * Referenced by: '<S56>/Constant3'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 2
                                        * Referenced by: '<S56>/Gain'
                                        */
  real_T Bias_Bias_bj;                 /* Expression: -1
                                        * Referenced by: '<S56>/Bias'
                                        */
  real_T Bias1_Bias_hi;                /* Expression: -3
                                        * Referenced by: '<S63>/Bias1'
                                        */
  real_T Gain1_Gain_or;                /* Expression: pi/180
                                        * Referenced by: '<S117>/Gain1'
                                        */
  real_T ECEFPositiontoLLA_F;          /* Expression: 1/298.257223563
                                        * Referenced by: '<S113>/ECEF Position to LLA'
                                        */
  real_T ECEFPositiontoLLA_R;          /* Expression: 6378137.0
                                        * Referenced by: '<S113>/ECEF Position to LLA'
                                        */
  real_T Constant_Value_ma;            /* Expression: 0
                                        * Referenced by: '<S167>/Constant'
                                        */
  real_T Bias_Bias_f4;                 /* Expression: 32.184
                                        * Referenced by: '<S116>/Bias'
                                        */
  real_T dayFrac_Value;                /* Expression: 86400
                                        * Referenced by: '<S116>/dayFrac'
                                        */
  real_T Bias1_Bias_n;                 /* Expression: -51544.5
                                        * Referenced by: '<S116>/Bias1'
                                        */
  real_T const5_Value;                 /* Expression: 36525
                                        * Referenced by: '<S116>/const5'
                                        */
  real_T Gain_Gain_e1;                 /* Expression: -0.000047
                                        * Referenced by: '<S116>/Gain'
                                        */
  real_T const1_Value;                 /* Expression: 3600
                                        * Referenced by: '<S116>/const1'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S116>/Gain1'
                                        */
  real_T X0_Coefs[6];
            /* Expression: [5.9285 7.578 -198618.34 -429782.9 2004191898 -16617]
             * Referenced by: '<S147>/X0'
             */
  real_T Gain3_Gain_gr;                /* Expression: 1e-6/3600
                                        * Referenced by: '<S147>/Gain3'
                                        */
  real_T Y0_Coefs[6];
               /* Expression: [0.1358 1112.526 1900.59 -22407274.7 -25896 -6951]
                * Referenced by: '<S147>/Y0'
                */
  real_T Gain4_Gain_l;                 /* Expression: 1e-6/3600
                                        * Referenced by: '<S147>/Gain4'
                                        */
  real_T S0_Coefs[6]; /* Expression: [15.62 27.98 -72574.11 -122.68 3808.65  94]
                       * Referenced by: '<S147>/S0'
                       */
  real_T Gain2_Gain_n;                 /* Expression: 1e-6/3600
                                        * Referenced by: '<S147>/Gain2'
                                        */
  real_T Gain5_Gain_b;                 /* Expression: 0.5
                                        * Referenced by: '<S147>/Gain5'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: -1
                                        * Referenced by: '<S147>/Gain1'
                                        */
  real_T Constant_Value_ng;            /* Expression: 1
                                        * Referenced by: '<S147>/Constant'
                                        */
  real_T Constant1_Value_p[2];         /* Expression: [0 0]
                                        * Referenced by: '<S140>/Constant1'
                                        */
  real_T Constant_Value_a;             /* Expression: 2*pi
                                        * Referenced by: '<S140>/Constant'
                                        */
  real_T Index_Value_f;                /* Expression: deltaT
                                        * Referenced by: '<S142>/Index'
                                        */
  real_T sec2_Value_o[4];              /* Expression: zeros(4,1)
                                        * Referenced by: '<S142>/sec2'
                                        */
  real_T BiasYear_Bias_g;              /* Expression: 0
                                        * Referenced by: '<S142>/BiasYear'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 365.25
                                        * Referenced by: '<S142>/Gain'
                                        */
  real_T Bias1_Bias_du;                /* Expression: 1
                                        * Referenced by: '<S142>/Bias1'
                                        */
  real_T Gain1_Gain_e2;                /* Expression: 30.6001
                                        * Referenced by: '<S142>/Gain1'
                                        */
  real_T Bias2_Bias_g;                 /* Expression: 2
                                        * Referenced by: '<S142>/Bias2'
                                        */
  real_T Gain2_Gain_k;                 /* Expression: 1/100
                                        * Referenced by: '<S142>/Gain2'
                                        */
  real_T Gain3_Gain_ci;                /* Expression: 1/4
                                        * Referenced by: '<S142>/Gain3'
                                        */
  real_T BiasDay_Bias_n;               /* Expression: -679006
                                        * Referenced by: '<S142>/BiasDay'
                                        */
  real_T Gain5_Gain_d;                 /* Expression: 1/60
                                        * Referenced by: '<S142>/Gain5'
                                        */
  real_T Gain6_Gain_g;                 /* Expression: 1/3600
                                        * Referenced by: '<S142>/Gain6'
                                        */
  real_T Gain4_Gain_a;                 /* Expression: 1/24
                                        * Referenced by: '<S142>/Gain4'
                                        */
  real_T gainVal_Gain;                 /* Expression: 1/86400
                                        * Referenced by: '<S138>/gainVal'
                                        */
  real_T Bias_Bias_h;                  /* Expression: -51544.5
                                        * Referenced by: '<S138>/Bias'
                                        */
  real_T Constant_Value_me;            /* Expression: 1
                                        * Referenced by: '<S138>/Constant'
                                        */
  real_T Bias1_Bias_m;                 /* Expression: 0.7790572732640
                                        * Referenced by: '<S140>/Bias1'
                                        */
  real_T Gain_Gain_ai;                 /* Expression: 0.00273781191135448
                                        * Referenced by: '<S140>/Gain'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 2*pi
                                        * Referenced by: '<S140>/Gain1'
                                        */
  real_T Gain_Gain_df;                 /* Expression: -0.000047/3600
                                        * Referenced by: '<S141>/Gain'
                                        */
  real_T Constant2_Value_p[2];         /* Expression: [0 0]
                                        * Referenced by: '<S116>/Constant2'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: -1
                                        * Referenced by: '<S141>/Gain1'
                                        */
  real_T Flip180degrotate90_Value[4];  /* Expression: [0 -.7071 .7071 0]
                                        * Referenced by: '<S236>/Flip 180 deg, rotate 90'
                                        */
  real_T Flip180degrotate90_Value_i[4];/* Expression: [0 -.7071 .7071 0]
                                        * Referenced by: '<S237>/Flip 180 deg, rotate 90'
                                        */
  real_T UnitDelay_6_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T UnitDelay_7_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T Constant4_Value_j1[3];       /* Expression: [0 0 7.292115146706979e-5]'
                                       * Referenced by: '<S1>/Constant4'
                                       */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S228>/Unit Delay'
                                        */
  real_T u2_Gain;                      /* Expression: 0.5
                                        * Referenced by: '<S244>/1//2'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 2
                                        * Referenced by: '<S245>/Gain'
                                        */
  real_T Gain3_Gain_p[4];              /* Expression: [-1 1 1 1]
                                        * Referenced by: '<S245>/Gain3'
                                        */
  real_T omega_Value[3];               /* Expression: [0 0 7.2921158553e-5]
                                        * Referenced by: '<S116>/omega'
                                        */
  real_T Bias1_Bias_iq;                /* Expression: 1
                                        * Referenced by: '<S56>/Bias1'
                                        */
  real_T Bias1_Bias_kp;                /* Expression: 1
                                        * Referenced by: '<S25>/Bias1'
                                        */
  real_T Constant1_Value_fg;           /* Expression: 1+ephConstants.EMRAT
                                        * Referenced by: '<S24>/Constant1'
                                        */
  real_T Bias1_Bias_f;                 /* Expression: 1
                                        * Referenced by: '<S27>/Bias1'
                                        */
  real_T kmflag_Value;                 /* Expression: kmflag
                                        * Referenced by: '<S12>/kmflag'
                                        */
  real_T Constant_Value_fp[3];         /* Expression: ephConstants.JED
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T Gain_Gain_p;                  /* Expression: -1
                                        * Referenced by: '<S123>/Gain'
                                        */
  real_T Constant_Value_f1;            /* Expression: eps
                                        * Referenced by: '<S123>/Constant'
                                        */
  real_T Constant4_Value_c;            /* Expression: 0
                                        * Referenced by: '<S227>/Constant4'
                                        */
  real_T Merge_InitialOutput[4];       /* Expression: [1 0 0 0]
                                        * Referenced by: '<S119>/Merge'
                                        */
  real_T Constant_Value_le;            /* Expression: 0.5
                                        * Referenced by: '<S256>/Constant'
                                        */
  real_T Gain2_Gain_lk;                /* Expression: 2
                                        * Referenced by: '<S256>/Gain2'
                                        */
  real_T Gain_Gain_md;                 /* Expression: 2
                                        * Referenced by: '<S256>/Gain'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S256>/Gain1'
                                        */
  real_T ScaleModelToVRML_Gain;        /* Expression: 1/.3e6
                                        * Referenced by: '<S240>/ScaleModelToVRML'
                                        */
  real_T gain_Gain;                    /* Expression: .25*1e6
                                        * Referenced by: '<S227>/gain'
                                        */
  real_T Gain1_Gain_c5;                /* Expression: .5
                                        * Referenced by: '<S227>/Gain1'
                                        */
  real_T Gain_Gain_i3;                 /* Expression: 2
                                        * Referenced by: '<S257>/Gain'
                                        */
  real_T Constant_Value_od;            /* Expression: 0.5
                                        * Referenced by: '<S257>/Constant'
                                        */
  real_T Gain2_Gain_b;                 /* Expression: 2
                                        * Referenced by: '<S257>/Gain2'
                                        */
  real_T Gain1_Gain_i0;                /* Expression: 2
                                        * Referenced by: '<S257>/Gain1'
                                        */
  real_T Gain_Gain_id;                 /* Expression: 2
                                        * Referenced by: '<S258>/Gain'
                                        */
  real_T Gain1_Gain_i4;                /* Expression: 2
                                        * Referenced by: '<S258>/Gain1'
                                        */
  real_T Constant_Value_e;             /* Expression: 0.5
                                        * Referenced by: '<S258>/Constant'
                                        */
  real_T Gain2_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S258>/Gain2'
                                        */
  real_T kmtoVRMLunits_Gain;           /* Expression: 1/1000
                                        * Referenced by: '<S226>/km to VRML units'
                                        */
  real_T Gain2_Gain_n2;                /* Expression: pi/180
                                        * Referenced by: '<S227>/Gain2'
                                        */
  real_T mtoVRML_Gain;                 /* Expression: 1e-6
                                        * Referenced by: '<S225>/m to VRML'
                                        */
  real_T kmtoVRMLunits_Gain_e;         /* Expression: 1/1000
                                        * Referenced by: '<S239>/km to VRML units'
                                        */
  real_T Constant2_Value_i[3];         /* Expression: [0 0 0]
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Constant5_Value[3];           /* Expression: [0 0 1]
                                        * Referenced by: '<S225>/Constant5'
                                        */
  real_T Forces_Body_Value[3];         /* Expression: [0 0 0]
                                        * Referenced by: '<S2>/Forces_Body'
                                        */
  real_T Constant_Value_ei[3];         /* Expression: [0 0 0]
                                        * Referenced by: '<S115>/Constant'
                                        */
  real_T Torques_Body_Value[3];        /* Expression: [0 0 0]
                                        * Referenced by: '<S2>/Torques_Body'
                                        */
  real_T UnitDelay_2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T UnitDelay_3_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T UnitDelay_4_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T UnitDelay_5_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T UnitDelay_8_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T UnitDelay_9_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T Mode_Value;                   /* Expression: 1
                                        * Referenced by: '<S3>/Mode'
                                        */
  real_T UnitDelay_1_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T UnitDelay_10_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S112>/Unit Delay'
                                        */
  real_T Gain_Gain_at;                 /* Expression: 1
                                        * Referenced by: '<S115>/Gain'
                                        */
  real_T Constant_Value_l5[3];         /* Expression: [0 0 -1]
                                        * Referenced by: '<S122>/Constant'
                                        */
  real_T Constant_Value_ki;            /* Expression: 0.5
                                        * Referenced by: '<S262>/Constant'
                                        */
  real_T Gain2_Gain_pf;                /* Expression: 2
                                        * Referenced by: '<S262>/Gain2'
                                        */
  real_T Gain_Gain_pu;                 /* Expression: 2
                                        * Referenced by: '<S262>/Gain'
                                        */
  real_T Gain1_Gain_iu;                /* Expression: 2
                                        * Referenced by: '<S262>/Gain1'
                                        */
  real_T Constant_Value_po;            /* Expression: 0.5
                                        * Referenced by: '<S268>/Constant'
                                        */
  real_T Gain2_Gain_bq;                /* Expression: 2
                                        * Referenced by: '<S268>/Gain2'
                                        */
  real_T Gain_Gain_dq;                 /* Expression: 2
                                        * Referenced by: '<S268>/Gain'
                                        */
  real_T Gain_Gain_m2;                 /* Expression: 2
                                        * Referenced by: '<S263>/Gain'
                                        */
  real_T Constant_Value_a2;            /* Expression: 0.5
                                        * Referenced by: '<S263>/Constant'
                                        */
  real_T Gain2_Gain_o;                 /* Expression: 2
                                        * Referenced by: '<S263>/Gain2'
                                        */
  real_T Gain1_Gain_cv;                /* Expression: 2
                                        * Referenced by: '<S263>/Gain1'
                                        */
  real_T Gain1_Gain_ef;                /* Expression: 2
                                        * Referenced by: '<S268>/Gain1'
                                        */
  real_T Gain_Gain_pd;                 /* Expression: 2
                                        * Referenced by: '<S264>/Gain'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 2
                                        * Referenced by: '<S264>/Gain1'
                                        */
  real_T Constant_Value_mp;            /* Expression: 0.5
                                        * Referenced by: '<S264>/Constant'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: 2
                                        * Referenced by: '<S264>/Gain2'
                                        */
  real_T Gain_Gain_cg;                 /* Expression: 2
                                        * Referenced by: '<S269>/Gain'
                                        */
  real_T Constant_Value_lv;            /* Expression: 0.5
                                        * Referenced by: '<S269>/Constant'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: 2
                                        * Referenced by: '<S269>/Gain2'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: 2
                                        * Referenced by: '<S269>/Gain1'
                                        */
  real_T Gain_Gain_be;                 /* Expression: 2
                                        * Referenced by: '<S270>/Gain'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 2
                                        * Referenced by: '<S270>/Gain1'
                                        */
  real_T Constant_Value_pt;            /* Expression: 0.5
                                        * Referenced by: '<S270>/Constant'
                                        */
  real_T Gain2_Gain_pk;                /* Expression: 2
                                        * Referenced by: '<S270>/Gain2'
                                        */
  real_T Bias_Bias_p3;                 /* Expression: -1
                                        * Referenced by: '<S274>/Bias'
                                        */
  real_T Bias1_Bias_fa;                /* Expression: +1
                                        * Referenced by: '<S274>/Bias1'
                                        */
  real_T kmtoVRMLunits_Gain_j;         /* Expression: 1/1000
                                        * Referenced by: '<S241>/km to VRML units'
                                        */
  real_T KeepSunInView_Gain;           /* Expression: 1/10
                                        * Referenced by: '<S225>/KeepSunInView'
                                        */
  real_T InvertSunPosECEF_Gain;        /* Expression: -1
                                        * Referenced by: '<S229>/InvertSunPosECEF'
                                        */
  real_T ConeHalfLength_Gain;          /* Expression: 692
                                        * Referenced by: '<S229>/ConeHalfLength'
                                        */
  real_T Constant_Value_in;            /* Expression: 0.5
                                        * Referenced by: '<S220>/Constant'
                                        */
  real_T Gain2_Gain_a;                 /* Expression: 2
                                        * Referenced by: '<S220>/Gain2'
                                        */
  real_T Gain_Gain_pq;                 /* Expression: 2
                                        * Referenced by: '<S220>/Gain'
                                        */
  real_T Gain1_Gain_nb;                /* Expression: 2
                                        * Referenced by: '<S220>/Gain1'
                                        */
  real_T Gain_Gain_mp;                 /* Expression: 2
                                        * Referenced by: '<S221>/Gain'
                                        */
  real_T Constant_Value_ae;            /* Expression: 0.5
                                        * Referenced by: '<S221>/Constant'
                                        */
  real_T Gain2_Gain_pq;                /* Expression: 2
                                        * Referenced by: '<S221>/Gain2'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: 2
                                        * Referenced by: '<S221>/Gain1'
                                        */
  real_T Gain_Gain_o3;                 /* Expression: 2
                                        * Referenced by: '<S222>/Gain'
                                        */
  real_T Gain1_Gain_orr;               /* Expression: 2
                                        * Referenced by: '<S222>/Gain1'
                                        */
  real_T Constant_Value_g;             /* Expression: 0.5
                                        * Referenced by: '<S222>/Constant'
                                        */
  real_T Gain2_Gain_ph;                /* Expression: 2
                                        * Referenced by: '<S222>/Gain2'
                                        */
  real_T Constant1_Value_l;            /* Expression: eps
                                        * Referenced by: '<S122>/Constant1'
                                        */
  real_T Gain_Gain_d4;                 /* Expression: 180/pi
                                        * Referenced by: '<S218>/Gain'
                                        */
  real_T Gain_Gain_mv;                 /* Expression: 2
                                        * Referenced by: '<S237>/Gain'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 2
                                        * Referenced by: '<S236>/Gain'
                                        */
  real_T EarthRadius_Value;            /* Expression: 6378137
                                        * Referenced by: '<S123>/Earth Radius'
                                        */
  real_T Gain_Gain_m4;                 /* Expression: 0.6
                                        * Referenced by: '<S238>/Gain'
                                        */
  real_T Constant_Value_au;            /* Expression: 1
                                        * Referenced by: '<S238>/Constant'
                                        */
  int32_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S60>/Switch'
                                        */
  int32_T Bias2_Bias_dg;               /* Computed Parameter: Bias2_Bias_dg
                                        * Referenced by: '<S60>/Bias2'
                                        */
  int32_T Bias3_Bias_i;                /* Computed Parameter: Bias3_Bias_i
                                        * Referenced by: '<S60>/Bias3'
                                        */
  int32_T Bias4_Bias;                  /* Computed Parameter: Bias4_Bias
                                        * Referenced by: '<S60>/Bias4'
                                        */
  int32_T ncm_IterationLimit;          /* Computed Parameter: ncm_IterationLimit
                                        * Referenced by: '<S66>/ncm'
                                        */
  boolean_T UnitDelay_11_InitialCondition;
                            /* Computed Parameter: UnitDelay_11_InitialCondition
                             * Referenced by: '<S112>/Unit Delay'
                             */
  uint8_T Enablecustomgravitycalculation_CurrentSetting;
            /* Computed Parameter: Enablecustomgravitycalculation_CurrentSetting
             * Referenced by: '<S1>/Enable custom gravity calculation'
             */
  P_IfActionSubsystem_asbCubeSat_g_T IfActionSubsystem2;/* '<S274>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSat_g_T IfActionSubsystem1_d3;/* '<S274>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSat_g_T IfActionSubsystem_c;/* '<S274>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSat_T IfActionSubsystem_i;/* '<S142>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSat_T IfActionSubsystem;/* '<S134>/If Action Subsystem' */
  P_ForIteratorSubsystem_asbCubeSat_o_T ForIteratorSubsystem_a;/* '<S66>/For Iterator Subsystem' */
  P_ForIteratorSubsystem_asbCubeSat_m_T ForIteratorSubsystem_l;/* '<S46>/For Iterator Subsystem' */
  P_ForIteratorSubsystem_asbCubeSat_j_T ForIteratorSubsystem_m;/* '<S45>/For Iterator Subsystem' */
  P_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem_o;/* '<S39>/For Iterator Subsystem' */
  P_ForIteratorSubsystem_asbCubeSat_m_T ForIteratorSubsystem_e;/* '<S35>/For Iterator Subsystem' */
  P_ForIteratorSubsystem_asbCubeSat_j_T ForIteratorSubsystem_k;/* '<S34>/For Iterator Subsystem' */
  P_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem;/* '<S28>/For Iterator Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_asbCubeSat_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_asbCubeSat_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[13];
  real_T odeF[3][13];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint32_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_asbCubeSat_T asbCubeSat_P;

/* Block signals (default storage) */
extern B_asbCubeSat_T asbCubeSat_B;

/* Continuous states (default storage) */
extern X_asbCubeSat_T asbCubeSat_X;

/* Block states (default storage) */
extern DW_asbCubeSat_T asbCubeSat_DW;

/* Model block global parameters (default storage) */
extern struct_uXBeANgAqTGhrPgOyPRa5G rtP_initCond;/* Variable: initCond
                                                   * Referenced by: '<S1>/Constant1'
                                                   */
extern struct_9iDbyyjfBL0Y1ELTIVXdBC rtP_gains;/* Variable: gains
                                                * Referenced by: '<S114>/Attitude Control System'
                                                */

/* External function called from main */
extern void asbCubeSat_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void asbCubeSat_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void asbCubeSat_initialize(void);
extern void asbCubeSat_step0(void);
extern void asbCubeSat_step2(void);
extern void asbCubeSat_step(int_T tid);
extern void asbCubeSat_terminate(void);

/* Real-time Model object */
extern RT_MODEL_asbCubeSat_T *const asbCubeSat_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S24>/Divide1' : Unused code path elimination
 * Block '<S30>/Constant' : Unused code path elimination
 * Block '<S30>/Divide' : Unused code path elimination
 * Block '<S30>/Divide1' : Unused code path elimination
 * Block '<S30>/Gain1' : Unused code path elimination
 * Block '<S36>/Add' : Unused code path elimination
 * Block '<S36>/Assignment' : Unused code path elimination
 * Block '<S36>/Bias1' : Unused code path elimination
 * Block '<S36>/Bias2' : Unused code path elimination
 * Block '<S36>/Bias3' : Unused code path elimination
 * Block '<S36>/Bias4' : Unused code path elimination
 * Block '<S36>/Gain2' : Unused code path elimination
 * Block '<S36>/Product' : Unused code path elimination
 * Block '<S36>/Switch' : Unused code path elimination
 * Block '<S36>/Unit Delay1' : Unused code path elimination
 * Block '<S36>/crlon[m-1]' : Unused code path elimination
 * Block '<S36>/crlon[m-1]1' : Unused code path elimination
 * Block '<S36>/crlon[m-1]2' : Unused code path elimination
 * Block '<S37>/Assignment' : Unused code path elimination
 * Block '<S37>/Constant' : Unused code path elimination
 * Block '<S38>/Assignment' : Unused code path elimination
 * Block '<S38>/Bias' : Unused code path elimination
 * Block '<S38>/Bias1' : Unused code path elimination
 * Block '<S38>/Bias2' : Unused code path elimination
 * Block '<S38>/Constant' : Unused code path elimination
 * Block '<S38>/Constant1' : Unused code path elimination
 * Block '<S38>/Constant2' : Unused code path elimination
 * Block '<S38>/Divide' : Unused code path elimination
 * Block '<S38>/Divide1' : Unused code path elimination
 * Block '<S38>/Divide2' : Unused code path elimination
 * Block '<S38>/Selector' : Unused code path elimination
 * Block '<S38>/Selector1' : Unused code path elimination
 * Block '<S38>/Sum' : Unused code path elimination
 * Block '<S38>/Sum1' : Unused code path elimination
 * Block '<S37>/Sum of Elements' : Unused code path elimination
 * Block '<S24>/Sum1' : Unused code path elimination
 * Block '<S41>/Constant' : Unused code path elimination
 * Block '<S41>/Divide' : Unused code path elimination
 * Block '<S41>/Divide1' : Unused code path elimination
 * Block '<S41>/Gain1' : Unused code path elimination
 * Block '<S47>/Add' : Unused code path elimination
 * Block '<S47>/Assignment' : Unused code path elimination
 * Block '<S47>/Bias1' : Unused code path elimination
 * Block '<S47>/Bias2' : Unused code path elimination
 * Block '<S47>/Bias3' : Unused code path elimination
 * Block '<S47>/Bias4' : Unused code path elimination
 * Block '<S47>/Gain2' : Unused code path elimination
 * Block '<S47>/Product' : Unused code path elimination
 * Block '<S47>/Switch' : Unused code path elimination
 * Block '<S47>/Unit Delay1' : Unused code path elimination
 * Block '<S47>/crlon[m-1]' : Unused code path elimination
 * Block '<S47>/crlon[m-1]1' : Unused code path elimination
 * Block '<S47>/crlon[m-1]2' : Unused code path elimination
 * Block '<S48>/Assignment' : Unused code path elimination
 * Block '<S48>/Constant' : Unused code path elimination
 * Block '<S49>/Assignment' : Unused code path elimination
 * Block '<S49>/Bias' : Unused code path elimination
 * Block '<S49>/Bias1' : Unused code path elimination
 * Block '<S49>/Bias2' : Unused code path elimination
 * Block '<S49>/Constant' : Unused code path elimination
 * Block '<S49>/Constant1' : Unused code path elimination
 * Block '<S49>/Constant2' : Unused code path elimination
 * Block '<S49>/Divide' : Unused code path elimination
 * Block '<S49>/Divide1' : Unused code path elimination
 * Block '<S49>/Divide2' : Unused code path elimination
 * Block '<S49>/Selector' : Unused code path elimination
 * Block '<S49>/Selector1' : Unused code path elimination
 * Block '<S49>/Sum' : Unused code path elimination
 * Block '<S49>/Sum1' : Unused code path elimination
 * Block '<S48>/Sum of Elements' : Unused code path elimination
 * Block '<S20>/Assertion' : Unused code path elimination
 * Block '<S20>/Constant1' : Unused code path elimination
 * Block '<S20>/Data Type Conversion' : Unused code path elimination
 * Block '<S20>/Logical Operator' : Unused code path elimination
 * Block '<S20>/Relational Operator' : Unused code path elimination
 * Block '<S20>/Relational Operator1' : Unused code path elimination
 * Block '<S12>/Divide1' : Unused code path elimination
 * Block '<S50>/Assertion' : Unused code path elimination
 * Block '<S50>/Constant1' : Unused code path elimination
 * Block '<S50>/Data Type Conversion' : Unused code path elimination
 * Block '<S50>/Logical Operator' : Unused code path elimination
 * Block '<S50>/Relational Operator' : Unused code path elimination
 * Block '<S50>/Relational Operator1' : Unused code path elimination
 * Block '<S21>/Sum4' : Unused code path elimination
 * Block '<S12>/Sum1' : Unused code path elimination
 * Block '<S59>/Constant' : Unused code path elimination
 * Block '<S59>/Divide' : Unused code path elimination
 * Block '<S59>/Divide1' : Unused code path elimination
 * Block '<S59>/Gain1' : Unused code path elimination
 * Block '<S65>/Add' : Unused code path elimination
 * Block '<S65>/Assignment' : Unused code path elimination
 * Block '<S65>/Bias1' : Unused code path elimination
 * Block '<S65>/Bias2' : Unused code path elimination
 * Block '<S65>/Bias3' : Unused code path elimination
 * Block '<S65>/Bias4' : Unused code path elimination
 * Block '<S65>/Gain2' : Unused code path elimination
 * Block '<S65>/Product' : Unused code path elimination
 * Block '<S65>/Switch' : Unused code path elimination
 * Block '<S65>/Unit Delay1' : Unused code path elimination
 * Block '<S65>/crlon[m-1]' : Unused code path elimination
 * Block '<S65>/crlon[m-1]1' : Unused code path elimination
 * Block '<S65>/crlon[m-1]2' : Unused code path elimination
 * Block '<S66>/Assignment' : Unused code path elimination
 * Block '<S66>/Constant' : Unused code path elimination
 * Block '<S67>/Assignment' : Unused code path elimination
 * Block '<S67>/Bias' : Unused code path elimination
 * Block '<S67>/Bias1' : Unused code path elimination
 * Block '<S67>/Bias2' : Unused code path elimination
 * Block '<S67>/Constant' : Unused code path elimination
 * Block '<S67>/Constant1' : Unused code path elimination
 * Block '<S67>/Constant2' : Unused code path elimination
 * Block '<S67>/Divide' : Unused code path elimination
 * Block '<S67>/Divide1' : Unused code path elimination
 * Block '<S67>/Divide2' : Unused code path elimination
 * Block '<S67>/Selector' : Unused code path elimination
 * Block '<S67>/Selector1' : Unused code path elimination
 * Block '<S67>/Sum' : Unused code path elimination
 * Block '<S67>/Sum1' : Unused code path elimination
 * Block '<S66>/Sum of Elements' : Unused code path elimination
 * Block '<S4>/Approx ECI PosVel' : Unused code path elimination
 * Block '<S4>/ECEF PosVel' : Unused code path elimination
 * Block '<S83>/i x j' : Unused code path elimination
 * Block '<S83>/j x k' : Unused code path elimination
 * Block '<S83>/k x i' : Unused code path elimination
 * Block '<S84>/i x k' : Unused code path elimination
 * Block '<S84>/j x i' : Unused code path elimination
 * Block '<S84>/k x j' : Unused code path elimination
 * Block '<S77>/Sum' : Unused code path elimination
 * Block '<S71>/Constant4' : Unused code path elimination
 * Block '<S78>/Divide' : Unused code path elimination
 * Block '<S78>/Divide1' : Unused code path elimination
 * Block '<S78>/Divide2' : Unused code path elimination
 * Block '<S78>/Divide3' : Unused code path elimination
 * Block '<S85>/Unary Minus' : Unused code path elimination
 * Block '<S85>/Unary Minus1' : Unused code path elimination
 * Block '<S85>/Unary Minus2' : Unused code path elimination
 * Block '<S86>/Product' : Unused code path elimination
 * Block '<S86>/Product1' : Unused code path elimination
 * Block '<S86>/Product2' : Unused code path elimination
 * Block '<S86>/Product3' : Unused code path elimination
 * Block '<S86>/Sum' : Unused code path elimination
 * Block '<S87>/Product' : Unused code path elimination
 * Block '<S87>/Product1' : Unused code path elimination
 * Block '<S87>/Product2' : Unused code path elimination
 * Block '<S87>/Product3' : Unused code path elimination
 * Block '<S92>/Product' : Unused code path elimination
 * Block '<S92>/Product1' : Unused code path elimination
 * Block '<S92>/Product2' : Unused code path elimination
 * Block '<S92>/Product3' : Unused code path elimination
 * Block '<S92>/Sum' : Unused code path elimination
 * Block '<S91>/sqrt' : Unused code path elimination
 * Block '<S88>/Constant' : Unused code path elimination
 * Block '<S88>/Gain' : Unused code path elimination
 * Block '<S88>/Gain1' : Unused code path elimination
 * Block '<S88>/Gain2' : Unused code path elimination
 * Block '<S88>/Product' : Unused code path elimination
 * Block '<S88>/Product1' : Unused code path elimination
 * Block '<S88>/Product2' : Unused code path elimination
 * Block '<S88>/Product3' : Unused code path elimination
 * Block '<S88>/Product4' : Unused code path elimination
 * Block '<S88>/Product5' : Unused code path elimination
 * Block '<S88>/Product6' : Unused code path elimination
 * Block '<S88>/Product7' : Unused code path elimination
 * Block '<S88>/Product8' : Unused code path elimination
 * Block '<S88>/Sum' : Unused code path elimination
 * Block '<S88>/Sum1' : Unused code path elimination
 * Block '<S88>/Sum2' : Unused code path elimination
 * Block '<S88>/Sum3' : Unused code path elimination
 * Block '<S89>/Constant' : Unused code path elimination
 * Block '<S89>/Gain' : Unused code path elimination
 * Block '<S89>/Gain1' : Unused code path elimination
 * Block '<S89>/Gain2' : Unused code path elimination
 * Block '<S89>/Product' : Unused code path elimination
 * Block '<S89>/Product1' : Unused code path elimination
 * Block '<S89>/Product2' : Unused code path elimination
 * Block '<S89>/Product3' : Unused code path elimination
 * Block '<S89>/Product4' : Unused code path elimination
 * Block '<S89>/Product5' : Unused code path elimination
 * Block '<S89>/Product6' : Unused code path elimination
 * Block '<S89>/Product7' : Unused code path elimination
 * Block '<S89>/Product8' : Unused code path elimination
 * Block '<S89>/Sum' : Unused code path elimination
 * Block '<S89>/Sum1' : Unused code path elimination
 * Block '<S89>/Sum2' : Unused code path elimination
 * Block '<S89>/Sum3' : Unused code path elimination
 * Block '<S90>/Constant' : Unused code path elimination
 * Block '<S90>/Gain' : Unused code path elimination
 * Block '<S90>/Gain1' : Unused code path elimination
 * Block '<S90>/Gain2' : Unused code path elimination
 * Block '<S90>/Product' : Unused code path elimination
 * Block '<S90>/Product1' : Unused code path elimination
 * Block '<S90>/Product2' : Unused code path elimination
 * Block '<S90>/Product3' : Unused code path elimination
 * Block '<S90>/Product4' : Unused code path elimination
 * Block '<S90>/Product5' : Unused code path elimination
 * Block '<S90>/Product6' : Unused code path elimination
 * Block '<S90>/Product7' : Unused code path elimination
 * Block '<S90>/Product8' : Unused code path elimination
 * Block '<S90>/Sum' : Unused code path elimination
 * Block '<S90>/Sum1' : Unused code path elimination
 * Block '<S90>/Sum2' : Unused code path elimination
 * Block '<S90>/Sum3' : Unused code path elimination
 * Block '<S93>/Product' : Unused code path elimination
 * Block '<S93>/Product1' : Unused code path elimination
 * Block '<S93>/Product2' : Unused code path elimination
 * Block '<S93>/Product3' : Unused code path elimination
 * Block '<S98>/Product' : Unused code path elimination
 * Block '<S98>/Product1' : Unused code path elimination
 * Block '<S98>/Product2' : Unused code path elimination
 * Block '<S98>/Product3' : Unused code path elimination
 * Block '<S98>/Sum' : Unused code path elimination
 * Block '<S97>/sqrt' : Unused code path elimination
 * Block '<S94>/Constant' : Unused code path elimination
 * Block '<S94>/Gain' : Unused code path elimination
 * Block '<S94>/Gain1' : Unused code path elimination
 * Block '<S94>/Gain2' : Unused code path elimination
 * Block '<S94>/Product' : Unused code path elimination
 * Block '<S94>/Product1' : Unused code path elimination
 * Block '<S94>/Product2' : Unused code path elimination
 * Block '<S94>/Product3' : Unused code path elimination
 * Block '<S94>/Product4' : Unused code path elimination
 * Block '<S94>/Product5' : Unused code path elimination
 * Block '<S94>/Product6' : Unused code path elimination
 * Block '<S94>/Product7' : Unused code path elimination
 * Block '<S94>/Product8' : Unused code path elimination
 * Block '<S94>/Sum' : Unused code path elimination
 * Block '<S94>/Sum1' : Unused code path elimination
 * Block '<S94>/Sum2' : Unused code path elimination
 * Block '<S94>/Sum3' : Unused code path elimination
 * Block '<S95>/Constant' : Unused code path elimination
 * Block '<S95>/Gain' : Unused code path elimination
 * Block '<S95>/Gain1' : Unused code path elimination
 * Block '<S95>/Gain2' : Unused code path elimination
 * Block '<S95>/Product' : Unused code path elimination
 * Block '<S95>/Product1' : Unused code path elimination
 * Block '<S95>/Product2' : Unused code path elimination
 * Block '<S95>/Product3' : Unused code path elimination
 * Block '<S95>/Product4' : Unused code path elimination
 * Block '<S95>/Product5' : Unused code path elimination
 * Block '<S95>/Product6' : Unused code path elimination
 * Block '<S95>/Product7' : Unused code path elimination
 * Block '<S95>/Product8' : Unused code path elimination
 * Block '<S95>/Sum' : Unused code path elimination
 * Block '<S95>/Sum1' : Unused code path elimination
 * Block '<S95>/Sum2' : Unused code path elimination
 * Block '<S95>/Sum3' : Unused code path elimination
 * Block '<S96>/Constant' : Unused code path elimination
 * Block '<S96>/Gain' : Unused code path elimination
 * Block '<S96>/Gain1' : Unused code path elimination
 * Block '<S96>/Gain2' : Unused code path elimination
 * Block '<S96>/Product' : Unused code path elimination
 * Block '<S96>/Product1' : Unused code path elimination
 * Block '<S96>/Product2' : Unused code path elimination
 * Block '<S96>/Product3' : Unused code path elimination
 * Block '<S96>/Product4' : Unused code path elimination
 * Block '<S96>/Product5' : Unused code path elimination
 * Block '<S96>/Product6' : Unused code path elimination
 * Block '<S96>/Product7' : Unused code path elimination
 * Block '<S96>/Product8' : Unused code path elimination
 * Block '<S96>/Sum' : Unused code path elimination
 * Block '<S96>/Sum1' : Unused code path elimination
 * Block '<S96>/Sum2' : Unused code path elimination
 * Block '<S96>/Sum3' : Unused code path elimination
 * Block '<S99>/Product' : Unused code path elimination
 * Block '<S99>/Product1' : Unused code path elimination
 * Block '<S99>/Product2' : Unused code path elimination
 * Block '<S99>/Product3' : Unused code path elimination
 * Block '<S104>/Product' : Unused code path elimination
 * Block '<S104>/Product1' : Unused code path elimination
 * Block '<S104>/Product2' : Unused code path elimination
 * Block '<S104>/Product3' : Unused code path elimination
 * Block '<S104>/Sum' : Unused code path elimination
 * Block '<S103>/sqrt' : Unused code path elimination
 * Block '<S100>/Constant' : Unused code path elimination
 * Block '<S100>/Gain' : Unused code path elimination
 * Block '<S100>/Gain1' : Unused code path elimination
 * Block '<S100>/Gain2' : Unused code path elimination
 * Block '<S100>/Product' : Unused code path elimination
 * Block '<S100>/Product1' : Unused code path elimination
 * Block '<S100>/Product2' : Unused code path elimination
 * Block '<S100>/Product3' : Unused code path elimination
 * Block '<S100>/Product4' : Unused code path elimination
 * Block '<S100>/Product5' : Unused code path elimination
 * Block '<S100>/Product6' : Unused code path elimination
 * Block '<S100>/Product7' : Unused code path elimination
 * Block '<S100>/Product8' : Unused code path elimination
 * Block '<S100>/Sum' : Unused code path elimination
 * Block '<S100>/Sum1' : Unused code path elimination
 * Block '<S100>/Sum2' : Unused code path elimination
 * Block '<S100>/Sum3' : Unused code path elimination
 * Block '<S101>/Constant' : Unused code path elimination
 * Block '<S101>/Gain' : Unused code path elimination
 * Block '<S101>/Gain1' : Unused code path elimination
 * Block '<S101>/Gain2' : Unused code path elimination
 * Block '<S101>/Product' : Unused code path elimination
 * Block '<S101>/Product1' : Unused code path elimination
 * Block '<S101>/Product2' : Unused code path elimination
 * Block '<S101>/Product3' : Unused code path elimination
 * Block '<S101>/Product4' : Unused code path elimination
 * Block '<S101>/Product5' : Unused code path elimination
 * Block '<S101>/Product6' : Unused code path elimination
 * Block '<S101>/Product7' : Unused code path elimination
 * Block '<S101>/Product8' : Unused code path elimination
 * Block '<S101>/Sum' : Unused code path elimination
 * Block '<S101>/Sum1' : Unused code path elimination
 * Block '<S101>/Sum2' : Unused code path elimination
 * Block '<S101>/Sum3' : Unused code path elimination
 * Block '<S102>/Constant' : Unused code path elimination
 * Block '<S102>/Gain' : Unused code path elimination
 * Block '<S102>/Gain1' : Unused code path elimination
 * Block '<S102>/Gain2' : Unused code path elimination
 * Block '<S102>/Product' : Unused code path elimination
 * Block '<S102>/Product1' : Unused code path elimination
 * Block '<S102>/Product2' : Unused code path elimination
 * Block '<S102>/Product3' : Unused code path elimination
 * Block '<S102>/Product4' : Unused code path elimination
 * Block '<S102>/Product5' : Unused code path elimination
 * Block '<S102>/Product6' : Unused code path elimination
 * Block '<S102>/Product7' : Unused code path elimination
 * Block '<S102>/Product8' : Unused code path elimination
 * Block '<S102>/Sum' : Unused code path elimination
 * Block '<S102>/Sum1' : Unused code path elimination
 * Block '<S102>/Sum2' : Unused code path elimination
 * Block '<S102>/Sum3' : Unused code path elimination
 * Block '<S105>/Product' : Unused code path elimination
 * Block '<S105>/Product1' : Unused code path elimination
 * Block '<S105>/Product2' : Unused code path elimination
 * Block '<S105>/Product3' : Unused code path elimination
 * Block '<S110>/Product' : Unused code path elimination
 * Block '<S110>/Product1' : Unused code path elimination
 * Block '<S110>/Product2' : Unused code path elimination
 * Block '<S110>/Product3' : Unused code path elimination
 * Block '<S110>/Sum' : Unused code path elimination
 * Block '<S109>/sqrt' : Unused code path elimination
 * Block '<S106>/Constant' : Unused code path elimination
 * Block '<S106>/Gain' : Unused code path elimination
 * Block '<S106>/Gain1' : Unused code path elimination
 * Block '<S106>/Gain2' : Unused code path elimination
 * Block '<S106>/Product' : Unused code path elimination
 * Block '<S106>/Product1' : Unused code path elimination
 * Block '<S106>/Product2' : Unused code path elimination
 * Block '<S106>/Product3' : Unused code path elimination
 * Block '<S106>/Product4' : Unused code path elimination
 * Block '<S106>/Product5' : Unused code path elimination
 * Block '<S106>/Product6' : Unused code path elimination
 * Block '<S106>/Product7' : Unused code path elimination
 * Block '<S106>/Product8' : Unused code path elimination
 * Block '<S106>/Sum' : Unused code path elimination
 * Block '<S106>/Sum1' : Unused code path elimination
 * Block '<S106>/Sum2' : Unused code path elimination
 * Block '<S106>/Sum3' : Unused code path elimination
 * Block '<S107>/Constant' : Unused code path elimination
 * Block '<S107>/Gain' : Unused code path elimination
 * Block '<S107>/Gain1' : Unused code path elimination
 * Block '<S107>/Gain2' : Unused code path elimination
 * Block '<S107>/Product' : Unused code path elimination
 * Block '<S107>/Product1' : Unused code path elimination
 * Block '<S107>/Product2' : Unused code path elimination
 * Block '<S107>/Product3' : Unused code path elimination
 * Block '<S107>/Product4' : Unused code path elimination
 * Block '<S107>/Product5' : Unused code path elimination
 * Block '<S107>/Product6' : Unused code path elimination
 * Block '<S107>/Product7' : Unused code path elimination
 * Block '<S107>/Product8' : Unused code path elimination
 * Block '<S107>/Sum' : Unused code path elimination
 * Block '<S107>/Sum1' : Unused code path elimination
 * Block '<S107>/Sum2' : Unused code path elimination
 * Block '<S107>/Sum3' : Unused code path elimination
 * Block '<S108>/Constant' : Unused code path elimination
 * Block '<S108>/Gain' : Unused code path elimination
 * Block '<S108>/Gain1' : Unused code path elimination
 * Block '<S108>/Gain2' : Unused code path elimination
 * Block '<S108>/Product' : Unused code path elimination
 * Block '<S108>/Product1' : Unused code path elimination
 * Block '<S108>/Product2' : Unused code path elimination
 * Block '<S108>/Product3' : Unused code path elimination
 * Block '<S108>/Product4' : Unused code path elimination
 * Block '<S108>/Product5' : Unused code path elimination
 * Block '<S108>/Product6' : Unused code path elimination
 * Block '<S108>/Product7' : Unused code path elimination
 * Block '<S108>/Product8' : Unused code path elimination
 * Block '<S108>/Sum' : Unused code path elimination
 * Block '<S108>/Sum1' : Unused code path elimination
 * Block '<S108>/Sum2' : Unused code path elimination
 * Block '<S108>/Sum3' : Unused code path elimination
 * Block '<S71>/Sum' : Unused code path elimination
 * Block '<S4>/Geodetic LatLonAlt' : Unused code path elimination
 * Block '<S72>/Unit Conversion' : Unused code path elimination
 * Block '<S73>/Unit Conversion' : Unused code path elimination
 * Block '<S74>/Unit Conversion' : Unused code path elimination
 * Block '<S75>/Unit Conversion' : Unused code path elimination
 * Block '<S76>/Unit Conversion' : Unused code path elimination
 * Block '<S131>/Assertion' : Unused code path elimination
 * Block '<S131>/Constant1' : Unused code path elimination
 * Block '<S131>/Data Type Conversion' : Unused code path elimination
 * Block '<S131>/Logical Operator' : Unused code path elimination
 * Block '<S131>/Relational Operator' : Unused code path elimination
 * Block '<S131>/Relational Operator1' : Unused code path elimination
 * Block '<S135>/Assertion' : Unused code path elimination
 * Block '<S135>/Constant1' : Unused code path elimination
 * Block '<S135>/Data Type Conversion' : Unused code path elimination
 * Block '<S135>/Logical Operator' : Unused code path elimination
 * Block '<S135>/Relational Operator' : Unused code path elimination
 * Block '<S135>/Relational Operator1' : Unused code path elimination
 * Block '<S143>/Assertion' : Unused code path elimination
 * Block '<S143>/Constant1' : Unused code path elimination
 * Block '<S143>/Data Type Conversion' : Unused code path elimination
 * Block '<S143>/Logical Operator' : Unused code path elimination
 * Block '<S143>/Relational Operator' : Unused code path elimination
 * Block '<S143>/Relational Operator1' : Unused code path elimination
 * Block '<S200>/Constant1' : Unused code path elimination
 * Block '<S204>/Assertion' : Unused code path elimination
 * Block '<S205>/Assertion' : Unused code path elimination
 * Block '<S201>/Constant1' : Unused code path elimination
 * Block '<S206>/Assertion' : Unused code path elimination
 * Block '<S207>/Assertion' : Unused code path elimination
 * Block '<S1>/Reshape' : Reshape block reduction
 * Block '<S130>/Reshape (9) to [3x3] column-major' : Reshape block reduction
 * Block '<S126>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S156>/Reshape (9) to [3x3] column-major' : Reshape block reduction
 * Block '<S158>/Reshape (9) to [3x3] column-major' : Reshape block reduction
 * Block '<S161>/Reshape (9) to [3x3] column-major' : Reshape block reduction
 * Block '<S172>/Reshape (9) to [3x3] column-major' : Reshape block reduction
 * Block '<S119>/Reshape 3x3 -> 9' : Reshape block reduction
 * Block '<S202>/Reshape' : Reshape block reduction
 * Block '<S215>/Reshape (9) to [3x3] column-major' : Reshape block reduction
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
 * '<Root>' : 'asbCubeSat'
 * '<S1>'   : 'asbCubeSat/Enviroment Models'
 * '<S2>'   : 'asbCubeSat/External Forces  and Torques '
 * '<S3>'   : 'asbCubeSat/Pointing Mode'
 * '<S4>'   : 'asbCubeSat/Scopes'
 * '<S5>'   : 'asbCubeSat/UDPSendBodyStates'
 * '<S6>'   : 'asbCubeSat/Vehicle Model'
 * '<S7>'   : 'asbCubeSat/Visualization'
 * '<S8>'   : 'asbCubeSat/Enviroment Models/3x3 Cross Product1'
 * '<S9>'   : 'asbCubeSat/Enviroment Models/3x3 Cross Product2'
 * '<S10>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product3'
 * '<S11>'  : 'asbCubeSat/Enviroment Models/Length Conversion'
 * '<S12>'  : 'asbCubeSat/Enviroment Models/Sun Position'
 * '<S13>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product1/Subsystem'
 * '<S14>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product1/Subsystem1'
 * '<S15>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product2/Subsystem'
 * '<S16>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product2/Subsystem1'
 * '<S17>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product3/Subsystem'
 * '<S18>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product3/Subsystem1'
 * '<S19>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center'
 * '<S20>'  : 'asbCubeSat/Enviroment Models/Sun Position/Check Epoch'
 * '<S21>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register'
 * '<S22>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target'
 * '<S23>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units'
 * '<S24>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth'
 * '<S25>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp'
 * '<S26>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon'
 * '<S27>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp'
 * '<S28>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/for pc'
 * '<S29>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position'
 * '<S30>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity'
 * '<S31>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/for pc/For Iterator Subsystem'
 * '<S32>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position/For Iterator Subsystem'
 * '<S33>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
 * '<S34>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for vc'
 * '<S35>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity'
 * '<S36>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for vc/For Iterator Subsystem'
 * '<S37>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity/For Iterator Subsystem'
 * '<S38>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
 * '<S39>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/for pc'
 * '<S40>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position'
 * '<S41>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity'
 * '<S42>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/for pc/For Iterator Subsystem'
 * '<S43>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position/For Iterator Subsystem'
 * '<S44>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
 * '<S45>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for vc'
 * '<S46>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity'
 * '<S47>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for vc/For Iterator Subsystem'
 * '<S48>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity/For Iterator Subsystem'
 * '<S49>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
 * '<S50>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/Check epoch'
 * '<S51>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/If Action Subsystem4'
 * '<S52>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/If Action Subsystem5'
 * '<S53>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split'
 * '<S54>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split1'
 * '<S55>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split2'
 * '<S56>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp'
 * '<S57>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/for pc'
 * '<S58>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position'
 * '<S59>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity'
 * '<S60>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/for pc/For Iterator Subsystem'
 * '<S61>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position/For Iterator Subsystem'
 * '<S62>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
 * '<S63>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for vc'
 * '<S64>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity'
 * '<S65>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for vc/For Iterator Subsystem'
 * '<S66>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity/For Iterator Subsystem'
 * '<S67>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
 * '<S68>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units/If Action Subsystem7'
 * '<S69>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units/If Action Subsystem8'
 * '<S70>'  : 'asbCubeSat/Pointing Mode/Signal Editor'
 * '<S71>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel'
 * '<S72>'  : 'asbCubeSat/Scopes/Subsystem1'
 * '<S73>'  : 'asbCubeSat/Scopes/Subsystem2'
 * '<S74>'  : 'asbCubeSat/Scopes/Subsystem3'
 * '<S75>'  : 'asbCubeSat/Scopes/Subsystem4'
 * '<S76>'  : 'asbCubeSat/Scopes/Subsystem5'
 * '<S77>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product'
 * '<S78>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse'
 * '<S79>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation'
 * '<S80>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1'
 * '<S81>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2'
 * '<S82>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3'
 * '<S83>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product/Subsystem'
 * '<S84>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product/Subsystem1'
 * '<S85>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse/Quaternion Conjugate'
 * '<S86>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse/Quaternion Norm'
 * '<S87>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize'
 * '<S88>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V1'
 * '<S89>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V2'
 * '<S90>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V3'
 * '<S91>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S92>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S93>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize'
 * '<S94>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V1'
 * '<S95>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V2'
 * '<S96>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V3'
 * '<S97>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
 * '<S98>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S99>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize'
 * '<S100>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V1'
 * '<S101>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V2'
 * '<S102>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V3'
 * '<S103>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
 * '<S104>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S105>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize'
 * '<S106>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V1'
 * '<S107>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V2'
 * '<S108>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V3'
 * '<S109>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize/Quaternion Modulus'
 * '<S110>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S111>' : 'asbCubeSat/Vehicle Model/Vehicle Control Actuators'
 * '<S112>' : 'asbCubeSat/Vehicle Model/Vehicle Control Sensors'
 * '<S113>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics'
 * '<S114>' : 'asbCubeSat/Vehicle Model/Vehicle Flight Software'
 * '<S115>' : 'asbCubeSat/Vehicle Model/Vehicle Control Actuators/CubeSat Perfect Actuators'
 * '<S116>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF'
 * '<S117>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Degrees to Radians'
 * '<S118>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED'
 * '<S119>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions'
 * '<S120>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication'
 * '<S121>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Rotation Angles to Direction Cosine Matrix'
 * '<S122>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle'
 * '<S123>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunInView'
 * '<S124>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product'
 * '<S125>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_pm'
 * '<S126>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM'
 * '<S127>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/deg2rad'
 * '<S128>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product/Subsystem'
 * '<S129>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product/Subsystem1'
 * '<S130>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_pm/Create 3x3 Matrix'
 * '<S131>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Check deltaT'
 * '<S132>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation'
 * '<S133>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction'
 * '<S134>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion'
 * '<S135>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/Check deltaT'
 * '<S136>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/If Action Subsystem'
 * '<S137>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/If Action Subsystem1'
 * '<S138>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations'
 * '<S139>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP'
 * '<S140>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation'
 * '<S141>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion'
 * '<S142>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion'
 * '<S143>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/Check deltaT'
 * '<S144>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/If Action Subsystem'
 * '<S145>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/If Action Subsystem1'
 * '<S146>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/Lunisolar and planetary nutation'
 * '<S147>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession'
 * '<S148>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/Lunisolar and planetary nutation/Angle Conversion'
 * '<S149>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion'
 * '<S150>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion1'
 * '<S151>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion2'
 * '<S152>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Rotation Angles to Direction Cosine Matrix'
 * '<S153>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/S'
 * '<S154>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/X'
 * '<S155>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Y'
 * '<S156>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S157>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation/Rotation Angles to Direction Cosine Matrix'
 * '<S158>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S159>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Angle Conversion1'
 * '<S160>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Rotation Angles to Direction Cosine Matrix'
 * '<S161>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S162>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A11'
 * '<S163>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A12'
 * '<S164>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A13'
 * '<S165>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A21'
 * '<S166>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A22'
 * '<S167>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A23'
 * '<S168>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A31'
 * '<S169>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A32'
 * '<S170>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A33'
 * '<S171>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/Angle Conversion'
 * '<S172>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/Create Transformation Matrix'
 * '<S173>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace'
 * '<S174>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace'
 * '<S175>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM'
 * '<S176>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/trace(DCM)'
 * '<S177>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)'
 * '<S178>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)'
 * '<S179>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)'
 * '<S180>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/diag(DCM)'
 * '<S181>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S182>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S183>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S184>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s'
 * '<S185>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1'
 * '<S186>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S187>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S188>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S189>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s'
 * '<S190>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1'
 * '<S191>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S192>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S193>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S194>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s'
 * '<S195>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1'
 * '<S196>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S197>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S198>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S199>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error'
 * '<S200>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal'
 * '<S201>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper'
 * '<S202>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal'
 * '<S203>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper'
 * '<S204>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Error'
 * '<S205>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Warning'
 * '<S206>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Error'
 * '<S207>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Warning'
 * '<S208>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/transpose*dcm ~= eye(3)'
 * '<S209>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Determinant of 3x3 Matrix'
 * '<S210>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/determinant does not equal 1'
 * '<S211>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q0'
 * '<S212>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q1'
 * '<S213>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q2'
 * '<S214>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q3'
 * '<S215>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S216>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Conjugate'
 * '<S217>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation'
 * '<S218>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Radians to Degrees'
 * '<S219>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize'
 * '<S220>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V1'
 * '<S221>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V2'
 * '<S222>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V3'
 * '<S223>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S224>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S225>' : 'asbCubeSat/Visualization/Virtual Reality World'
 * '<S226>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML'
 * '<S227>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Antenna Properties'
 * '<S228>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate'
 * '<S229>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Umbra Translation'
 * '<S230>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse'
 * '<S231>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1'
 * '<S232>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation'
 * '<S233>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1'
 * '<S234>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2'
 * '<S235>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b'
 * '<S236>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML'
 * '<S237>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1'
 * '<S238>' : 'asbCubeSat/Visualization/Virtual Reality World/Radar on//off'
 * '<S239>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML'
 * '<S240>' : 'asbCubeSat/Visualization/Virtual Reality World/Satellite Model Scaling'
 * '<S241>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML'
 * '<S242>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML/ECEF to VRML'
 * '<S243>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML/Length Conversion'
 * '<S244>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions'
 * '<S245>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Quaternion to VRML'
 * '<S246>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q0'
 * '<S247>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q1'
 * '<S248>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q2'
 * '<S249>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q3'
 * '<S250>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Umbra Translation/unitVec'
 * '<S251>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse/Quaternion Conjugate'
 * '<S252>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse/Quaternion Norm'
 * '<S253>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1/Quaternion Conjugate'
 * '<S254>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1/Quaternion Norm'
 * '<S255>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize'
 * '<S256>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V1'
 * '<S257>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V2'
 * '<S258>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V3'
 * '<S259>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S260>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S261>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize'
 * '<S262>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V1'
 * '<S263>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V2'
 * '<S264>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V3'
 * '<S265>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
 * '<S266>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S267>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize'
 * '<S268>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V1'
 * '<S269>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V2'
 * '<S270>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V3'
 * '<S271>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
 * '<S272>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S273>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2'
 * '<S274>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel'
 * '<S275>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Compare To Constant'
 * '<S276>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal'
 * '<S277>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2'
 * '<S278>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2/Subsystem'
 * '<S279>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2/Subsystem1'
 * '<S280>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem'
 * '<S281>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem1'
 * '<S282>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem2'
 * '<S283>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product'
 * '<S284>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product/Subsystem'
 * '<S285>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product/Subsystem1'
 * '<S286>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2/Quaternion Modulus'
 * '<S287>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm'
 * '<S288>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication'
 * '<S289>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q0'
 * '<S290>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q1'
 * '<S291>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q2'
 * '<S292>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q3'
 * '<S293>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication'
 * '<S294>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q0'
 * '<S295>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q1'
 * '<S296>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q2'
 * '<S297>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q3'
 * '<S298>' : 'asbCubeSat/Visualization/Virtual Reality World/Radar on//off/Compare To Constant'
 * '<S299>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML/ECEF to VRML'
 * '<S300>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML/Length Conversion'
 * '<S301>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML/ECEF to VRML'
 * '<S302>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML/Length Conversion'
 */
#endif                                 /* RTW_HEADER_asbCubeSat_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
