//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: asbCubeSat.h
//
// Code generated for Simulink model 'asbCubeSat'.
//
// Model version                  : 5.3
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Tue Sep 27 12:56:59 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_asbCubeSat_h_
#define RTW_HEADER_asbCubeSat_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "DAHostLib_Network.h"
#include "asbCubeSat_types.h"
#include "asbCubeSatACS.h"
#include <cmath>
#include "rtGetNaN.h"

extern "C" {

#include "rt_nonfinite.h"

}
#include "rtGetInf.h"
#include <cstring>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
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

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
struct ODE3_IntgData {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
};

#endif

// Class declaration for model asbCubeSat
class asbCubeSat final
{
  // public data and function members
 public:
  // Block signals for system '<S28>/For Iterator Subsystem'
  struct B_ForIteratorSubsystem_asbCubeSat_T {
    real_T VectorConcatenate_o[13];    // '<S31>/Vector Concatenate'
  };

  // Block states (default storage) for system '<S28>/For Iterator Subsystem'
  struct DW_ForIteratorSubsystem_asbCubeSat_T {
    real_T UnitDelay1_DSTATE[13];      // '<S31>/Unit Delay1'
  };

  // Block signals (default storage)
  struct B_asbCubeSat_T {
    real_T P[15129];
    real_T scaleFactor[15129];
    int32_T ii_data[11190];
    int32_T idx_data[11190];
    real_T factor_dX[1600];
    real_T factor_dX_m[1600];
    real_T factor_dX_c[1600];
    real_T factor_dX_k[1600];
    real_T factor_dX_cx[1600];
    real_T Divide5_h[1600];            // '<S155>/Divide5'
    real_T Sum_bw[1600];               // '<S154>/Sum'
    real_T factor_dY[1275];
    real_T factor_dY_b[1275];
    real_T factor_dY_p[1275];
    real_T factor_dY_c[1275];
    real_T factor_dY_f[1275];
    real_T factor_dY_g[1275];
    real_T Sum_dj[1275];               // '<S155>/Sum'
    real_T smlambda[121];
    real_T cmlambda[121];
    real_T factor_dS[66];
    real_T factor_dS_g[66];
    real_T factor_dS_m[66];
    real_T factor_dS_n[66];
    real_T factor_dS_p[66];
    real_T Divide5[66];                // '<S153>/Divide5'
    real_T Sum_ep[66];                 // '<S153>/Sum'
    real_T Assignment1_d[36];          // '<S154>/Assignment1'
    real_T Assignment1_c[30];          // '<S155>/Assignment1'
    real_T Assignment1[25];            // '<S153>/Assignment1'
    real_T nutationV[14];
    real_T nutationV_l[14];
    real_T nutationV_j[14];
    real_T nutationV_d[14];
    real_T nutationV_g[14];
    real_T nutationV_ld[14];
    real_T MathFunction_k[14];         // '<S146>/Math Function'
    real_T Assignment_n[13];           // '<S44>/Assignment'
    real_T Assignment_p[13];           // '<S33>/Assignment'
    ACSOutBus ACSOut;                  // '<S114>/Attitude Control System'
    real_T VectorConcatenate_p[11];    // '<S60>/Vector Concatenate'
    real_T Assignment_d_d[11];         // '<S62>/Assignment'
    real_T VectorConcatenate_g[9];     // '<S156>/Vector Concatenate'
    real_T Transpose[9];               // '<S116>/Transpose'
    real_T VectorConcatenate_b[9];     // '<S161>/Vector Concatenate'
    real_T Transpose1[9];              // '<S116>/Transpose1'
    real_T Product2[9];
    real_T Product2_d[9];
    real_T nutationV_s[8];
    real_T nutationV_s_l[8];
    real_T nutationV_s_o[8];
    real_T nutationV_s_b[8];
    real_T nutationV_s_n[8];
    real_T nutationV_s_bs[8];
    real_T nutationV_s_ln[8];
    real_T UnitConversion_h[5];        // '<S148>/Unit Conversion'
    real_T RateTransition7[4];         // '<S225>/Rate Transition7'
    real_T RateTransition6[4];         // '<S225>/Rate Transition6'
    real_T RateTransition2[4];         // '<S225>/Rate Transition2'
    real_T X_ecef[3];                  // '<S113>/Spacecraft Dynamics'
    real_T V_ecef[3];                  // '<S113>/Spacecraft Dynamics'
    real_T Euler[3];                   // '<S113>/Spacecraft Dynamics'
    real_T Divide_i[3];                // '<S123>/Divide'
    real_T Assignment_d3[3];           // '<S43>/Assignment'
    real_T Assignment_g[3];            // '<S32>/Assignment'
    real_T rtb_Divide_i_b[3];
    real_T TmpSignalConversionAtVRSinkInport3[3];// '<S225>/Satellite Model Scaling' 
    real_T RateTransition3[3];         // '<S225>/Rate Transition3'
    real_T RateTransition5[3];         // '<S225>/Rate Transition5'
    real_T ECEFPositiontoLLA_o1[2];    // '<S113>/ECEF Position to LLA'
    real_T Merge[4];                   // '<S119>/Merge'
    real_T Sum;                        // '<S211>/Sum'
    real_T Sum_i;                      // '<S212>/Sum'
    real_T Sum_f;                      // '<S213>/Sum'
    real_T Sum_j;                      // '<S214>/Sum'
    real_T VectorConcatenate[23];      // '<S5>/Vector Concatenate'
    real_T UnitConversion[3];          // '<S11>/Unit Conversion'
    real_T MultiportSwitch;            // '<S3>/Multiport Switch'
    real_T Sum2;                       // '<S134>/Sum2'
    real_T Sum2_f;                     // '<S142>/Sum2'
    real_T r_eci[3];                   // '<S116>/r_eci'
    real_T v_eci[3];                   // '<S116>/v_eci'
    real_T Sum1[3];                    // '<S113>/Sum1'
    real_T Assignment[11];             // '<S60>/Assignment'
    real_T Assignment_c[13];           // '<S42>/Assignment'
    real_T Assignment_d[13];           // '<S31>/Assignment'
    real_T year;
    real_T month;
    real_T day;
    real_T jd;
    real_T dUT1UTC;
    real_T T;
    real_T tTT2;
    real_T tTT3;
    real_T tTT4;
    real_T tTT5;
    real_T Api_s;
    real_T Sum_ai;                     // '<S263>/Sum'
    real_T pa;                         // '<S146>/pa'
    real_T lNeptune;                   // '<S146>/lNeptune'
    real_T lUranus;                    // '<S146>/lUranus'
    real_T Product5_c;                 // '<S221>/Product5'
    real_T MathFunction_m;             // '<S27>/Math Function'
    real_T Product8_n;                 // '<S221>/Product8'
    real_T Sum1_cv;                    // '<S21>/Sum1'
    real_T Sqrt2_i;                    // '<S123>/Sqrt2'
    real_T DotProduct3;                // '<S123>/Dot Product3'
    real_T Sum_i_d;                    // '<S268>/Sum'
    real_T Sum_k;
    real_T DotProduct3_e;              // '<S123>/Dot Product3'
    real_T A_tmp;
    real_T day_tmp;
    real_T jd_tmp;
    real_T pData_tmp;
    real_T pData_tmp_b;
    real_T pData_tmp_j;
    real_T rot_pm_idx_0;
    real_T rtb_Divide2_k_idx_0;
    real_T rtb_Divide2_k_idx_1;
    real_T rtb_Divide2_k_idx_2;
    real_T rtb_EarthOrientationParameters_o2_idx_0;
    real_T rtb_EarthOrientationParameters_o2_idx_1;
    real_T pm_idx_1;
    real_T dCIP_idx_0;
    real_T dCIP_idx_1;
    real_T rtb_Switch_j_idx_0;
    real_T rtb_Switch_j_idx_1;
    real_T rtb_Divide3_p_idx_0;
    real_T rtb_SinCos_o2_idx_1;
    real_T rtb_SinCos_o2_idx_0;
    real_T rtb_SinCos_o2_idx_2;
    real_T rtb_Gain3_g_idx_2;
    real_T rtb_Sum1_az_idx_2;
    real_T pData_idx_4;
    real_T pData_idx_7;
    real_T pData_idx_5;
    real_T pData_idx_8;
    real_T pData_idx_1;
    real_T pData_idx_4_f;
    real_T pData_idx_6;
    real_T pData_idx_7_a;
    real_T pData_idx_8_j;
    real_T pData_idx_4_j;
    real_T pData_idx_6_o;
    real_T pData_idx_7_n;
    real_T pData_idx_0;
    real_T pData_idx_1_i;
    real_T pData_idx_2;
    real_T pData_idx_1_o;
    real_T pData_idx_2_n;
    real_T pData_idx_1_m;
    real_T pData_idx_0_c;
    real_T pData_idx_2_m;
    real_T pData_idx_1_m3;
    real_T pData_idx_1_j;
    real_T pData_idx_0_h;
    real_T pData_idx_2_c;
    real_T pData_idx_3;
    real_T rot_pm_idx_0_tmp;
    real_T pData_idx_3_tmp;
    real_T pData_idx_1_tmp;
    real_T rtb_Sum1_az_idx_2_tmp;
    real_T A_tmp_tmp;
    real_T RoundingFunction1_f;        // '<S142>/Rounding Function1'
    real_T Merge1;                     // '<S142>/Merge1'
    real_T PointingMode;               // '<S70>/fromWS_Signal 1'
    real_T d;
    real_T d1;
    real_T q;
    real_T q_c;
    int32_T prev;
    int32_T idx;
    int32_T s43_iter;
    int32_T s44_iter;
    int32_T P_tmp_tmp;
    int32_T P_tmp;
    int32_T u0;
    int32_T u1;
    int8_T rtAction;
    boolean_T Compare;                 // '<S275>/Compare'
    boolean_T exitg1;
    boolean_T yEq;
    B_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem_o;// '<S39>/For Iterator Subsystem' 
    B_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem;// '<S28>/For Iterator Subsystem' 
  };

  // Block states (default storage) for system '<Root>'
  struct DW_asbCubeSat_T {
    real_T UnitDelay_DSTATE[3];        // '<S228>/Unit Delay'
    real_T UnitDelay_4_DSTATE[3];      // '<S112>/Unit Delay'
    real_T UnitDelay_5_DSTATE[3];      // '<S112>/Unit Delay'
    real_T UnitDelay_7_DSTATE[4];      // '<S112>/Unit Delay'
    real_T UnitDelay1_DSTATE[11];      // '<S60>/Unit Delay1'
    real_T SpacecraftDynamics_DWORK2[3];// '<S113>/Spacecraft Dynamics'
    real_T SpacecraftDynamics_DWORK3[3];// '<S113>/Spacecraft Dynamics'
    real_T UDPSend1_NetworkLib[137];   // '<S5>/UDP Send1'
    real_T RateTransition1_Buffer[3];  // '<S225>/Rate Transition1'
    real_T RateTransition2_Buffer[4];  // '<S225>/Rate Transition2'
    real_T RateTransition3_Buffer[3];  // '<S225>/Rate Transition3'
    real_T RateTransition4_Buffer[3];  // '<S225>/Rate Transition4'
    real_T RateTransition5_Buffer[3];  // '<S225>/Rate Transition5'
    real_T RateTransition6_Buffer[4];  // '<S225>/Rate Transition6'
    real_T RateTransition7_Buffer[4];  // '<S225>/Rate Transition7'
    struct {
      void *TimePtr;
      void *DataPtr;
      void *RSimInfoPtr;
    } fromWS_Signal1_PWORK;            // '<S70>/fromWS_Signal 1'

    void *VRSink_PWORK[25];            // '<S225>/VR Sink'
    struct {
      int_T PrevIndex;
    } fromWS_Signal1_IWORK;            // '<S70>/fromWS_Signal 1'

    int8_T If_ActiveSubsystem;         // '<S119>/If'
    int8_T If1_ActiveSubsystem;        // '<S21>/If1'
    int8_T If2_ActiveSubsystem;        // '<S23>/If2'
    int8_T If_ActiveSubsystem_d;       // '<S274>/If'
    int8_T If_ActiveSubsystem_p;       // '<S134>/If'
    int8_T If_ActiveSubsystem_m;       // '<S142>/If'
    int8_T FindMaximumDiagonalValue_ActiveSubsystem;// '<S173>/Find Maximum Diagonal Value' 
    boolean_T SpacecraftDynamics_DWORK1;// '<S113>/Spacecraft Dynamics'
    DW_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem_o;// '<S39>/For Iterator Subsystem' 
    DW_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem;// '<S28>/For Iterator Subsystem' 
  };

  // Continuous states (default storage)
  struct X_asbCubeSat_T {
    real_T SpacecraftDynamics_CSTATE[13];// '<S113>/Spacecraft Dynamics'
  };

  // State derivatives (default storage)
  struct XDot_asbCubeSat_T {
    real_T SpacecraftDynamics_CSTATE[13];// '<S113>/Spacecraft Dynamics'
  };

  // State disabled
  struct XDis_asbCubeSat_T {
    boolean_T SpacecraftDynamics_CSTATE[13];// '<S113>/Spacecraft Dynamics'
  };

  // Invariant block signals (default storage)
  struct ConstB_asbCubeSat_T {
    real_T Gain1;                      // '<S227>/Gain1'
    real_T Gain2;                      // '<S227>/Gain2'
    real_T TrigonometricFunction;      // '<S227>/Trigonometric Function'
    real_T Product;                    // '<S227>/Product'
    real_T ScaleModelToVRML;           // '<S240>/ScaleModelToVRML'
    real_T gain;                       // '<S227>/gain'
    real_T Sum1;                       // '<S227>/Sum1'
    real_T DotProduct1;                // '<S274>/Dot Product1'
    real_T DotProduct1_m;              // '<S235>/Dot Product1'
    real_T Gain;                       // '<S276>/Gain'
    real_T Gain2_a;                    // '<S276>/Gain2'
    real_T Switch3[3];                 // '<S276>/Switch3'
    real_T ixj;                        // '<S284>/i x j'
    real_T jxk;                        // '<S284>/j x k'
    real_T kxi;                        // '<S284>/k x i'
    real_T ixk;                        // '<S285>/i x k'
    real_T jxi;                        // '<S285>/j x i'
    real_T kxj;                        // '<S285>/k x j'
    real_T Sum[3];                     // '<S283>/Sum'
    real_T DataTypeConversion;         // '<S238>/Data Type Conversion'
    real_T Gain_b;                     // '<S238>/Gain'
    real_T Add;                        // '<S238>/Add'
    real_T mtoVRML[3];                 // '<S225>/m to VRML'
    real_T Bias1;                      // '<S28>/Bias1'
    real_T Bias1_k;                    // '<S34>/Bias1'
    real_T Bias1_i;                    // '<S39>/Bias1'
    real_T Bias1_m;                    // '<S45>/Bias1'
    real_T RoundingFunction;           // '<S54>/Rounding Function'
    real_T Sum_p;                      // '<S54>/Sum'
    real_T Bias1_i2;                   // '<S57>/Bias1'
    real_T Bias1_e;                    // '<S63>/Bias1'
    real_T Bias;                       // '<S116>/Bias'
    real_T Divide;                     // '<S116>/Divide'
    real_T Sum1_g;                     // '<S132>/Sum1'
    real_T Bias_h;                     // '<S132>/Bias'
    real_T secGain;                    // '<S132>/secGain'
    real_T Selector[528];              // '<S153>/Selector'
    real_T Selector1[66];              // '<S153>/Selector1'
    real_T Selector2[66];              // '<S153>/Selector2'
    real_T Selector_n[22400];          // '<S154>/Selector'
    real_T Selector1_m[1600];          // '<S154>/Selector1'
    real_T Selector2_d[1600];          // '<S154>/Selector2'
    real_T Selector_h[17850];          // '<S155>/Selector'
    real_T Selector1_l[1275];          // '<S155>/Selector1'
    real_T Selector2_p[1275];          // '<S155>/Selector2'
    real_T Gain1_m[2];                 // '<S141>/Gain1'
    real_T Sum2[3];                    // '<S113>/Sum2'
    boolean_T xz;                      // '<S276>/x>z'
    boolean_T Compare;                 // '<S298>/Compare'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_asbCubeSat_T {
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

    //
    //  Sizes:
    //  The following substructure contains sizes information
    //  for many of the model attributes such as inputs, outputs,
    //  dwork, sample times, etc.

    struct {
      int_T numContStates;
      int_T numPeriodicContStates;
      int_T numSampTimes;
    } Sizes;

    //
    //  Timing:
    //  The following substructure contains information regarding
    //  the timing information for the model.

    struct {
      uint32_T clockTick0;
      time_T stepSize0;
      uint32_T clockTick1;
      struct {
        uint32_T TID1_2;
        boolean_T b_TID1_2;
      } RateInteraction;

      SimTimeStep simTimeStep;
      boolean_T stopRequestedFlag;
      time_T *t;
      time_T tArray[3];
    } Timing;
  };

  // Copy Constructor
  asbCubeSat(asbCubeSat const&) = delete;

  // Assignment Operator
  asbCubeSat& operator= (asbCubeSat const&) & = delete;

  // Move Constructor
  asbCubeSat(asbCubeSat &&) = delete;

  // Move Assignment Operator
  asbCubeSat& operator= (asbCubeSat &&) = delete;

  // Real-Time Model get method
  asbCubeSat::RT_MODEL_asbCubeSat_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step0();

  // model step function
  void step2();

  // model terminate function
  void terminate();

  // Constructor
  asbCubeSat();

  // Destructor
  ~asbCubeSat();

  // private data and function members
 private:
  // Block signals
  B_asbCubeSat_T asbCubeSat_B;

  // Block states
  DW_asbCubeSat_T asbCubeSat_DW;

  // Block continuous states
  X_asbCubeSat_T asbCubeSat_X;

  // private member function(s) for subsystem '<S28>/For Iterator Subsystem'
  static void asbCubeSat_ForIteratorSubsystem(real_T rtu_ncf2, real_T rtu_tc,
    real_T rty_pci[13], B_ForIteratorSubsystem_asbCubeSat_T *localB,
    DW_ForIteratorSubsystem_asbCubeSat_T *localDW);

  // private member function(s) for subsystem '<S134>/If Action Subsystem'
  static void asbCubeSat_IfActionSubsystem(real_T rtu_yin, real_T rtu_min,
    real_T *rty_yout, real_T *rty_mout);

  // private member function(s) for subsystem '<S134>/If Action Subsystem1'
  static void asbCubeSat_IfActionSubsystem1(real_T rtu_yin, real_T rtu_min,
    real_T *rty_yout, real_T *rty_mout);

  // private member function(s) for subsystem '<Root>'
  real_T asbCubeSat_rt_remd_snf(real_T u0, real_T u1);
  real_T asbCubeSat_rt_modd_snf(real_T u0, real_T u1);
  real_T asbCubeSat_rt_atan2d_snf(real_T u0, real_T u1);
  real_T asbCubeSat_rt_powd_snf(real_T u0, real_T u1);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  // Derivatives member function
  void asbCubeSat_derivatives();

  // Projection member function
  void asbCubeSat_projection();

  // model instance variable for '<S114>/Attitude Control System'
  asbCubeSatACS Attitude_Control_SystemMDLOBJ1;

  // Real-Time Model
  RT_MODEL_asbCubeSat_T asbCubeSat_M;
};

extern const asbCubeSat::ConstB_asbCubeSat_T asbCubeSat_ConstB;// constant block i/o 

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S24>/Divide1' : Unused code path elimination
//  Block '<S30>/Constant' : Unused code path elimination
//  Block '<S30>/Divide' : Unused code path elimination
//  Block '<S30>/Divide1' : Unused code path elimination
//  Block '<S30>/Gain1' : Unused code path elimination
//  Block '<S36>/Add' : Unused code path elimination
//  Block '<S36>/Assignment' : Unused code path elimination
//  Block '<S36>/Bias1' : Unused code path elimination
//  Block '<S36>/Bias2' : Unused code path elimination
//  Block '<S36>/Bias3' : Unused code path elimination
//  Block '<S36>/Bias4' : Unused code path elimination
//  Block '<S36>/Gain2' : Unused code path elimination
//  Block '<S36>/Product' : Unused code path elimination
//  Block '<S36>/Switch' : Unused code path elimination
//  Block '<S36>/Unit Delay1' : Unused code path elimination
//  Block '<S36>/crlon[m-1]' : Unused code path elimination
//  Block '<S36>/crlon[m-1]1' : Unused code path elimination
//  Block '<S36>/crlon[m-1]2' : Unused code path elimination
//  Block '<S37>/Assignment' : Unused code path elimination
//  Block '<S37>/Constant' : Unused code path elimination
//  Block '<S38>/Assignment' : Unused code path elimination
//  Block '<S38>/Bias' : Unused code path elimination
//  Block '<S38>/Bias1' : Unused code path elimination
//  Block '<S38>/Bias2' : Unused code path elimination
//  Block '<S38>/Constant' : Unused code path elimination
//  Block '<S38>/Constant1' : Unused code path elimination
//  Block '<S38>/Constant2' : Unused code path elimination
//  Block '<S38>/Divide' : Unused code path elimination
//  Block '<S38>/Divide1' : Unused code path elimination
//  Block '<S38>/Divide2' : Unused code path elimination
//  Block '<S38>/Selector' : Unused code path elimination
//  Block '<S38>/Selector1' : Unused code path elimination
//  Block '<S38>/Sum' : Unused code path elimination
//  Block '<S38>/Sum1' : Unused code path elimination
//  Block '<S37>/Sum of Elements' : Unused code path elimination
//  Block '<S24>/Sum1' : Unused code path elimination
//  Block '<S41>/Constant' : Unused code path elimination
//  Block '<S41>/Divide' : Unused code path elimination
//  Block '<S41>/Divide1' : Unused code path elimination
//  Block '<S41>/Gain1' : Unused code path elimination
//  Block '<S47>/Add' : Unused code path elimination
//  Block '<S47>/Assignment' : Unused code path elimination
//  Block '<S47>/Bias1' : Unused code path elimination
//  Block '<S47>/Bias2' : Unused code path elimination
//  Block '<S47>/Bias3' : Unused code path elimination
//  Block '<S47>/Bias4' : Unused code path elimination
//  Block '<S47>/Gain2' : Unused code path elimination
//  Block '<S47>/Product' : Unused code path elimination
//  Block '<S47>/Switch' : Unused code path elimination
//  Block '<S47>/Unit Delay1' : Unused code path elimination
//  Block '<S47>/crlon[m-1]' : Unused code path elimination
//  Block '<S47>/crlon[m-1]1' : Unused code path elimination
//  Block '<S47>/crlon[m-1]2' : Unused code path elimination
//  Block '<S48>/Assignment' : Unused code path elimination
//  Block '<S48>/Constant' : Unused code path elimination
//  Block '<S49>/Assignment' : Unused code path elimination
//  Block '<S49>/Bias' : Unused code path elimination
//  Block '<S49>/Bias1' : Unused code path elimination
//  Block '<S49>/Bias2' : Unused code path elimination
//  Block '<S49>/Constant' : Unused code path elimination
//  Block '<S49>/Constant1' : Unused code path elimination
//  Block '<S49>/Constant2' : Unused code path elimination
//  Block '<S49>/Divide' : Unused code path elimination
//  Block '<S49>/Divide1' : Unused code path elimination
//  Block '<S49>/Divide2' : Unused code path elimination
//  Block '<S49>/Selector' : Unused code path elimination
//  Block '<S49>/Selector1' : Unused code path elimination
//  Block '<S49>/Sum' : Unused code path elimination
//  Block '<S49>/Sum1' : Unused code path elimination
//  Block '<S48>/Sum of Elements' : Unused code path elimination
//  Block '<S20>/Assertion' : Unused code path elimination
//  Block '<S20>/Constant1' : Unused code path elimination
//  Block '<S20>/Data Type Conversion' : Unused code path elimination
//  Block '<S20>/Logical Operator' : Unused code path elimination
//  Block '<S20>/Relational Operator' : Unused code path elimination
//  Block '<S20>/Relational Operator1' : Unused code path elimination
//  Block '<S12>/Divide1' : Unused code path elimination
//  Block '<S50>/Assertion' : Unused code path elimination
//  Block '<S50>/Constant1' : Unused code path elimination
//  Block '<S50>/Data Type Conversion' : Unused code path elimination
//  Block '<S50>/Logical Operator' : Unused code path elimination
//  Block '<S50>/Relational Operator' : Unused code path elimination
//  Block '<S50>/Relational Operator1' : Unused code path elimination
//  Block '<S21>/Sum4' : Unused code path elimination
//  Block '<S12>/Sum1' : Unused code path elimination
//  Block '<S59>/Constant' : Unused code path elimination
//  Block '<S59>/Divide' : Unused code path elimination
//  Block '<S59>/Divide1' : Unused code path elimination
//  Block '<S59>/Gain1' : Unused code path elimination
//  Block '<S65>/Add' : Unused code path elimination
//  Block '<S65>/Assignment' : Unused code path elimination
//  Block '<S65>/Bias1' : Unused code path elimination
//  Block '<S65>/Bias2' : Unused code path elimination
//  Block '<S65>/Bias3' : Unused code path elimination
//  Block '<S65>/Bias4' : Unused code path elimination
//  Block '<S65>/Gain2' : Unused code path elimination
//  Block '<S65>/Product' : Unused code path elimination
//  Block '<S65>/Switch' : Unused code path elimination
//  Block '<S65>/Unit Delay1' : Unused code path elimination
//  Block '<S65>/crlon[m-1]' : Unused code path elimination
//  Block '<S65>/crlon[m-1]1' : Unused code path elimination
//  Block '<S65>/crlon[m-1]2' : Unused code path elimination
//  Block '<S66>/Assignment' : Unused code path elimination
//  Block '<S66>/Constant' : Unused code path elimination
//  Block '<S67>/Assignment' : Unused code path elimination
//  Block '<S67>/Bias' : Unused code path elimination
//  Block '<S67>/Bias1' : Unused code path elimination
//  Block '<S67>/Bias2' : Unused code path elimination
//  Block '<S67>/Constant' : Unused code path elimination
//  Block '<S67>/Constant1' : Unused code path elimination
//  Block '<S67>/Constant2' : Unused code path elimination
//  Block '<S67>/Divide' : Unused code path elimination
//  Block '<S67>/Divide1' : Unused code path elimination
//  Block '<S67>/Divide2' : Unused code path elimination
//  Block '<S67>/Selector' : Unused code path elimination
//  Block '<S67>/Selector1' : Unused code path elimination
//  Block '<S67>/Sum' : Unused code path elimination
//  Block '<S67>/Sum1' : Unused code path elimination
//  Block '<S66>/Sum of Elements' : Unused code path elimination
//  Block '<S4>/Approx ECI PosVel' : Unused code path elimination
//  Block '<S4>/ECEF PosVel' : Unused code path elimination
//  Block '<S83>/i x j' : Unused code path elimination
//  Block '<S83>/j x k' : Unused code path elimination
//  Block '<S83>/k x i' : Unused code path elimination
//  Block '<S84>/i x k' : Unused code path elimination
//  Block '<S84>/j x i' : Unused code path elimination
//  Block '<S84>/k x j' : Unused code path elimination
//  Block '<S77>/Sum' : Unused code path elimination
//  Block '<S71>/Constant4' : Unused code path elimination
//  Block '<S78>/Divide' : Unused code path elimination
//  Block '<S78>/Divide1' : Unused code path elimination
//  Block '<S78>/Divide2' : Unused code path elimination
//  Block '<S78>/Divide3' : Unused code path elimination
//  Block '<S85>/Unary Minus' : Unused code path elimination
//  Block '<S85>/Unary Minus1' : Unused code path elimination
//  Block '<S85>/Unary Minus2' : Unused code path elimination
//  Block '<S86>/Product' : Unused code path elimination
//  Block '<S86>/Product1' : Unused code path elimination
//  Block '<S86>/Product2' : Unused code path elimination
//  Block '<S86>/Product3' : Unused code path elimination
//  Block '<S86>/Sum' : Unused code path elimination
//  Block '<S87>/Product' : Unused code path elimination
//  Block '<S87>/Product1' : Unused code path elimination
//  Block '<S87>/Product2' : Unused code path elimination
//  Block '<S87>/Product3' : Unused code path elimination
//  Block '<S92>/Product' : Unused code path elimination
//  Block '<S92>/Product1' : Unused code path elimination
//  Block '<S92>/Product2' : Unused code path elimination
//  Block '<S92>/Product3' : Unused code path elimination
//  Block '<S92>/Sum' : Unused code path elimination
//  Block '<S91>/sqrt' : Unused code path elimination
//  Block '<S88>/Constant' : Unused code path elimination
//  Block '<S88>/Gain' : Unused code path elimination
//  Block '<S88>/Gain1' : Unused code path elimination
//  Block '<S88>/Gain2' : Unused code path elimination
//  Block '<S88>/Product' : Unused code path elimination
//  Block '<S88>/Product1' : Unused code path elimination
//  Block '<S88>/Product2' : Unused code path elimination
//  Block '<S88>/Product3' : Unused code path elimination
//  Block '<S88>/Product4' : Unused code path elimination
//  Block '<S88>/Product5' : Unused code path elimination
//  Block '<S88>/Product6' : Unused code path elimination
//  Block '<S88>/Product7' : Unused code path elimination
//  Block '<S88>/Product8' : Unused code path elimination
//  Block '<S88>/Sum' : Unused code path elimination
//  Block '<S88>/Sum1' : Unused code path elimination
//  Block '<S88>/Sum2' : Unused code path elimination
//  Block '<S88>/Sum3' : Unused code path elimination
//  Block '<S89>/Constant' : Unused code path elimination
//  Block '<S89>/Gain' : Unused code path elimination
//  Block '<S89>/Gain1' : Unused code path elimination
//  Block '<S89>/Gain2' : Unused code path elimination
//  Block '<S89>/Product' : Unused code path elimination
//  Block '<S89>/Product1' : Unused code path elimination
//  Block '<S89>/Product2' : Unused code path elimination
//  Block '<S89>/Product3' : Unused code path elimination
//  Block '<S89>/Product4' : Unused code path elimination
//  Block '<S89>/Product5' : Unused code path elimination
//  Block '<S89>/Product6' : Unused code path elimination
//  Block '<S89>/Product7' : Unused code path elimination
//  Block '<S89>/Product8' : Unused code path elimination
//  Block '<S89>/Sum' : Unused code path elimination
//  Block '<S89>/Sum1' : Unused code path elimination
//  Block '<S89>/Sum2' : Unused code path elimination
//  Block '<S89>/Sum3' : Unused code path elimination
//  Block '<S90>/Constant' : Unused code path elimination
//  Block '<S90>/Gain' : Unused code path elimination
//  Block '<S90>/Gain1' : Unused code path elimination
//  Block '<S90>/Gain2' : Unused code path elimination
//  Block '<S90>/Product' : Unused code path elimination
//  Block '<S90>/Product1' : Unused code path elimination
//  Block '<S90>/Product2' : Unused code path elimination
//  Block '<S90>/Product3' : Unused code path elimination
//  Block '<S90>/Product4' : Unused code path elimination
//  Block '<S90>/Product5' : Unused code path elimination
//  Block '<S90>/Product6' : Unused code path elimination
//  Block '<S90>/Product7' : Unused code path elimination
//  Block '<S90>/Product8' : Unused code path elimination
//  Block '<S90>/Sum' : Unused code path elimination
//  Block '<S90>/Sum1' : Unused code path elimination
//  Block '<S90>/Sum2' : Unused code path elimination
//  Block '<S90>/Sum3' : Unused code path elimination
//  Block '<S93>/Product' : Unused code path elimination
//  Block '<S93>/Product1' : Unused code path elimination
//  Block '<S93>/Product2' : Unused code path elimination
//  Block '<S93>/Product3' : Unused code path elimination
//  Block '<S98>/Product' : Unused code path elimination
//  Block '<S98>/Product1' : Unused code path elimination
//  Block '<S98>/Product2' : Unused code path elimination
//  Block '<S98>/Product3' : Unused code path elimination
//  Block '<S98>/Sum' : Unused code path elimination
//  Block '<S97>/sqrt' : Unused code path elimination
//  Block '<S94>/Constant' : Unused code path elimination
//  Block '<S94>/Gain' : Unused code path elimination
//  Block '<S94>/Gain1' : Unused code path elimination
//  Block '<S94>/Gain2' : Unused code path elimination
//  Block '<S94>/Product' : Unused code path elimination
//  Block '<S94>/Product1' : Unused code path elimination
//  Block '<S94>/Product2' : Unused code path elimination
//  Block '<S94>/Product3' : Unused code path elimination
//  Block '<S94>/Product4' : Unused code path elimination
//  Block '<S94>/Product5' : Unused code path elimination
//  Block '<S94>/Product6' : Unused code path elimination
//  Block '<S94>/Product7' : Unused code path elimination
//  Block '<S94>/Product8' : Unused code path elimination
//  Block '<S94>/Sum' : Unused code path elimination
//  Block '<S94>/Sum1' : Unused code path elimination
//  Block '<S94>/Sum2' : Unused code path elimination
//  Block '<S94>/Sum3' : Unused code path elimination
//  Block '<S95>/Constant' : Unused code path elimination
//  Block '<S95>/Gain' : Unused code path elimination
//  Block '<S95>/Gain1' : Unused code path elimination
//  Block '<S95>/Gain2' : Unused code path elimination
//  Block '<S95>/Product' : Unused code path elimination
//  Block '<S95>/Product1' : Unused code path elimination
//  Block '<S95>/Product2' : Unused code path elimination
//  Block '<S95>/Product3' : Unused code path elimination
//  Block '<S95>/Product4' : Unused code path elimination
//  Block '<S95>/Product5' : Unused code path elimination
//  Block '<S95>/Product6' : Unused code path elimination
//  Block '<S95>/Product7' : Unused code path elimination
//  Block '<S95>/Product8' : Unused code path elimination
//  Block '<S95>/Sum' : Unused code path elimination
//  Block '<S95>/Sum1' : Unused code path elimination
//  Block '<S95>/Sum2' : Unused code path elimination
//  Block '<S95>/Sum3' : Unused code path elimination
//  Block '<S96>/Constant' : Unused code path elimination
//  Block '<S96>/Gain' : Unused code path elimination
//  Block '<S96>/Gain1' : Unused code path elimination
//  Block '<S96>/Gain2' : Unused code path elimination
//  Block '<S96>/Product' : Unused code path elimination
//  Block '<S96>/Product1' : Unused code path elimination
//  Block '<S96>/Product2' : Unused code path elimination
//  Block '<S96>/Product3' : Unused code path elimination
//  Block '<S96>/Product4' : Unused code path elimination
//  Block '<S96>/Product5' : Unused code path elimination
//  Block '<S96>/Product6' : Unused code path elimination
//  Block '<S96>/Product7' : Unused code path elimination
//  Block '<S96>/Product8' : Unused code path elimination
//  Block '<S96>/Sum' : Unused code path elimination
//  Block '<S96>/Sum1' : Unused code path elimination
//  Block '<S96>/Sum2' : Unused code path elimination
//  Block '<S96>/Sum3' : Unused code path elimination
//  Block '<S99>/Product' : Unused code path elimination
//  Block '<S99>/Product1' : Unused code path elimination
//  Block '<S99>/Product2' : Unused code path elimination
//  Block '<S99>/Product3' : Unused code path elimination
//  Block '<S104>/Product' : Unused code path elimination
//  Block '<S104>/Product1' : Unused code path elimination
//  Block '<S104>/Product2' : Unused code path elimination
//  Block '<S104>/Product3' : Unused code path elimination
//  Block '<S104>/Sum' : Unused code path elimination
//  Block '<S103>/sqrt' : Unused code path elimination
//  Block '<S100>/Constant' : Unused code path elimination
//  Block '<S100>/Gain' : Unused code path elimination
//  Block '<S100>/Gain1' : Unused code path elimination
//  Block '<S100>/Gain2' : Unused code path elimination
//  Block '<S100>/Product' : Unused code path elimination
//  Block '<S100>/Product1' : Unused code path elimination
//  Block '<S100>/Product2' : Unused code path elimination
//  Block '<S100>/Product3' : Unused code path elimination
//  Block '<S100>/Product4' : Unused code path elimination
//  Block '<S100>/Product5' : Unused code path elimination
//  Block '<S100>/Product6' : Unused code path elimination
//  Block '<S100>/Product7' : Unused code path elimination
//  Block '<S100>/Product8' : Unused code path elimination
//  Block '<S100>/Sum' : Unused code path elimination
//  Block '<S100>/Sum1' : Unused code path elimination
//  Block '<S100>/Sum2' : Unused code path elimination
//  Block '<S100>/Sum3' : Unused code path elimination
//  Block '<S101>/Constant' : Unused code path elimination
//  Block '<S101>/Gain' : Unused code path elimination
//  Block '<S101>/Gain1' : Unused code path elimination
//  Block '<S101>/Gain2' : Unused code path elimination
//  Block '<S101>/Product' : Unused code path elimination
//  Block '<S101>/Product1' : Unused code path elimination
//  Block '<S101>/Product2' : Unused code path elimination
//  Block '<S101>/Product3' : Unused code path elimination
//  Block '<S101>/Product4' : Unused code path elimination
//  Block '<S101>/Product5' : Unused code path elimination
//  Block '<S101>/Product6' : Unused code path elimination
//  Block '<S101>/Product7' : Unused code path elimination
//  Block '<S101>/Product8' : Unused code path elimination
//  Block '<S101>/Sum' : Unused code path elimination
//  Block '<S101>/Sum1' : Unused code path elimination
//  Block '<S101>/Sum2' : Unused code path elimination
//  Block '<S101>/Sum3' : Unused code path elimination
//  Block '<S102>/Constant' : Unused code path elimination
//  Block '<S102>/Gain' : Unused code path elimination
//  Block '<S102>/Gain1' : Unused code path elimination
//  Block '<S102>/Gain2' : Unused code path elimination
//  Block '<S102>/Product' : Unused code path elimination
//  Block '<S102>/Product1' : Unused code path elimination
//  Block '<S102>/Product2' : Unused code path elimination
//  Block '<S102>/Product3' : Unused code path elimination
//  Block '<S102>/Product4' : Unused code path elimination
//  Block '<S102>/Product5' : Unused code path elimination
//  Block '<S102>/Product6' : Unused code path elimination
//  Block '<S102>/Product7' : Unused code path elimination
//  Block '<S102>/Product8' : Unused code path elimination
//  Block '<S102>/Sum' : Unused code path elimination
//  Block '<S102>/Sum1' : Unused code path elimination
//  Block '<S102>/Sum2' : Unused code path elimination
//  Block '<S102>/Sum3' : Unused code path elimination
//  Block '<S105>/Product' : Unused code path elimination
//  Block '<S105>/Product1' : Unused code path elimination
//  Block '<S105>/Product2' : Unused code path elimination
//  Block '<S105>/Product3' : Unused code path elimination
//  Block '<S110>/Product' : Unused code path elimination
//  Block '<S110>/Product1' : Unused code path elimination
//  Block '<S110>/Product2' : Unused code path elimination
//  Block '<S110>/Product3' : Unused code path elimination
//  Block '<S110>/Sum' : Unused code path elimination
//  Block '<S109>/sqrt' : Unused code path elimination
//  Block '<S106>/Constant' : Unused code path elimination
//  Block '<S106>/Gain' : Unused code path elimination
//  Block '<S106>/Gain1' : Unused code path elimination
//  Block '<S106>/Gain2' : Unused code path elimination
//  Block '<S106>/Product' : Unused code path elimination
//  Block '<S106>/Product1' : Unused code path elimination
//  Block '<S106>/Product2' : Unused code path elimination
//  Block '<S106>/Product3' : Unused code path elimination
//  Block '<S106>/Product4' : Unused code path elimination
//  Block '<S106>/Product5' : Unused code path elimination
//  Block '<S106>/Product6' : Unused code path elimination
//  Block '<S106>/Product7' : Unused code path elimination
//  Block '<S106>/Product8' : Unused code path elimination
//  Block '<S106>/Sum' : Unused code path elimination
//  Block '<S106>/Sum1' : Unused code path elimination
//  Block '<S106>/Sum2' : Unused code path elimination
//  Block '<S106>/Sum3' : Unused code path elimination
//  Block '<S107>/Constant' : Unused code path elimination
//  Block '<S107>/Gain' : Unused code path elimination
//  Block '<S107>/Gain1' : Unused code path elimination
//  Block '<S107>/Gain2' : Unused code path elimination
//  Block '<S107>/Product' : Unused code path elimination
//  Block '<S107>/Product1' : Unused code path elimination
//  Block '<S107>/Product2' : Unused code path elimination
//  Block '<S107>/Product3' : Unused code path elimination
//  Block '<S107>/Product4' : Unused code path elimination
//  Block '<S107>/Product5' : Unused code path elimination
//  Block '<S107>/Product6' : Unused code path elimination
//  Block '<S107>/Product7' : Unused code path elimination
//  Block '<S107>/Product8' : Unused code path elimination
//  Block '<S107>/Sum' : Unused code path elimination
//  Block '<S107>/Sum1' : Unused code path elimination
//  Block '<S107>/Sum2' : Unused code path elimination
//  Block '<S107>/Sum3' : Unused code path elimination
//  Block '<S108>/Constant' : Unused code path elimination
//  Block '<S108>/Gain' : Unused code path elimination
//  Block '<S108>/Gain1' : Unused code path elimination
//  Block '<S108>/Gain2' : Unused code path elimination
//  Block '<S108>/Product' : Unused code path elimination
//  Block '<S108>/Product1' : Unused code path elimination
//  Block '<S108>/Product2' : Unused code path elimination
//  Block '<S108>/Product3' : Unused code path elimination
//  Block '<S108>/Product4' : Unused code path elimination
//  Block '<S108>/Product5' : Unused code path elimination
//  Block '<S108>/Product6' : Unused code path elimination
//  Block '<S108>/Product7' : Unused code path elimination
//  Block '<S108>/Product8' : Unused code path elimination
//  Block '<S108>/Sum' : Unused code path elimination
//  Block '<S108>/Sum1' : Unused code path elimination
//  Block '<S108>/Sum2' : Unused code path elimination
//  Block '<S108>/Sum3' : Unused code path elimination
//  Block '<S71>/Sum' : Unused code path elimination
//  Block '<S4>/Geodetic LatLonAlt' : Unused code path elimination
//  Block '<S72>/Unit Conversion' : Unused code path elimination
//  Block '<S73>/Unit Conversion' : Unused code path elimination
//  Block '<S74>/Unit Conversion' : Unused code path elimination
//  Block '<S75>/Unit Conversion' : Unused code path elimination
//  Block '<S76>/Unit Conversion' : Unused code path elimination
//  Block '<S131>/Assertion' : Unused code path elimination
//  Block '<S131>/Constant1' : Unused code path elimination
//  Block '<S131>/Data Type Conversion' : Unused code path elimination
//  Block '<S131>/Logical Operator' : Unused code path elimination
//  Block '<S131>/Relational Operator' : Unused code path elimination
//  Block '<S131>/Relational Operator1' : Unused code path elimination
//  Block '<S135>/Assertion' : Unused code path elimination
//  Block '<S135>/Constant1' : Unused code path elimination
//  Block '<S135>/Data Type Conversion' : Unused code path elimination
//  Block '<S135>/Logical Operator' : Unused code path elimination
//  Block '<S135>/Relational Operator' : Unused code path elimination
//  Block '<S135>/Relational Operator1' : Unused code path elimination
//  Block '<S143>/Assertion' : Unused code path elimination
//  Block '<S143>/Constant1' : Unused code path elimination
//  Block '<S143>/Data Type Conversion' : Unused code path elimination
//  Block '<S143>/Logical Operator' : Unused code path elimination
//  Block '<S143>/Relational Operator' : Unused code path elimination
//  Block '<S143>/Relational Operator1' : Unused code path elimination
//  Block '<S200>/Constant1' : Unused code path elimination
//  Block '<S204>/Assertion' : Unused code path elimination
//  Block '<S205>/Assertion' : Unused code path elimination
//  Block '<S201>/Constant1' : Unused code path elimination
//  Block '<S206>/Assertion' : Unused code path elimination
//  Block '<S207>/Assertion' : Unused code path elimination
//  Block '<S1>/Enable custom gravity calculation' : Eliminated due to constant selection input
//  Block '<S1>/Reshape' : Reshape block reduction
//  Block '<S115>/Gain' : Eliminated nontunable gain of 1
//  Block '<S130>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S134>/BiasYear' : Eliminated nontunable bias of 0
//  Block '<S126>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S126>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S126>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S126>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S126>/Data Type Conversion5' : Eliminate redundant data type conversion
//  Block '<S126>/Data Type Conversion6' : Eliminate redundant data type conversion
//  Block '<S142>/BiasYear' : Eliminated nontunable bias of 0
//  Block '<S156>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S158>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S161>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S172>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S119>/Reshape 3x3 -> 9' : Reshape block reduction
//  Block '<S202>/Reshape' : Reshape block reduction
//  Block '<S215>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S13>/i x j' : Unused code path elimination
//  Block '<S13>/j x k' : Unused code path elimination
//  Block '<S13>/k x i' : Unused code path elimination
//  Block '<S14>/i x k' : Unused code path elimination
//  Block '<S14>/j x i' : Unused code path elimination
//  Block '<S14>/k x j' : Unused code path elimination
//  Block '<S8>/Sum' : Unused code path elimination
//  Block '<S15>/i x j' : Unused code path elimination
//  Block '<S15>/j x k' : Unused code path elimination
//  Block '<S15>/k x i' : Unused code path elimination
//  Block '<S16>/i x k' : Unused code path elimination
//  Block '<S16>/j x i' : Unused code path elimination
//  Block '<S16>/k x j' : Unused code path elimination
//  Block '<S9>/Sum' : Unused code path elimination
//  Block '<S17>/i x j' : Unused code path elimination
//  Block '<S17>/j x k' : Unused code path elimination
//  Block '<S17>/k x i' : Unused code path elimination
//  Block '<S18>/i x k' : Unused code path elimination
//  Block '<S18>/j x i' : Unused code path elimination
//  Block '<S18>/k x j' : Unused code path elimination
//  Block '<S10>/Sum' : Unused code path elimination
//  Block '<S1>/Add1' : Unused code path elimination
//  Block '<S1>/Gain' : Unused code path elimination
//  Block '<S1>/Gain1' : Unused code path elimination
//  Block '<S1>/Spherical Harmonic Gravity Model' : Unused code path elimination
//  Block '<S1>/Sum1' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'asbCubeSat'
//  '<S1>'   : 'asbCubeSat/Enviroment Models'
//  '<S2>'   : 'asbCubeSat/External Forces  and Torques '
//  '<S3>'   : 'asbCubeSat/Pointing Mode'
//  '<S4>'   : 'asbCubeSat/Scopes'
//  '<S5>'   : 'asbCubeSat/UDPSendBodyStates'
//  '<S6>'   : 'asbCubeSat/Vehicle Model'
//  '<S7>'   : 'asbCubeSat/Visualization'
//  '<S8>'   : 'asbCubeSat/Enviroment Models/3x3 Cross Product1'
//  '<S9>'   : 'asbCubeSat/Enviroment Models/3x3 Cross Product2'
//  '<S10>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product3'
//  '<S11>'  : 'asbCubeSat/Enviroment Models/Length Conversion'
//  '<S12>'  : 'asbCubeSat/Enviroment Models/Sun Position'
//  '<S13>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product1/Subsystem'
//  '<S14>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product1/Subsystem1'
//  '<S15>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product2/Subsystem'
//  '<S16>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product2/Subsystem1'
//  '<S17>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product3/Subsystem'
//  '<S18>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product3/Subsystem1'
//  '<S19>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center'
//  '<S20>'  : 'asbCubeSat/Enviroment Models/Sun Position/Check Epoch'
//  '<S21>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register'
//  '<S22>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target'
//  '<S23>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units'
//  '<S24>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth'
//  '<S25>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp'
//  '<S26>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon'
//  '<S27>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp'
//  '<S28>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/for pc'
//  '<S29>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position'
//  '<S30>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity'
//  '<S31>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/for pc/For Iterator Subsystem'
//  '<S32>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position/For Iterator Subsystem'
//  '<S33>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
//  '<S34>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for vc'
//  '<S35>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity'
//  '<S36>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for vc/For Iterator Subsystem'
//  '<S37>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity/For Iterator Subsystem'
//  '<S38>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
//  '<S39>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/for pc'
//  '<S40>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position'
//  '<S41>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity'
//  '<S42>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/for pc/For Iterator Subsystem'
//  '<S43>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position/For Iterator Subsystem'
//  '<S44>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
//  '<S45>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for vc'
//  '<S46>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity'
//  '<S47>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for vc/For Iterator Subsystem'
//  '<S48>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity/For Iterator Subsystem'
//  '<S49>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
//  '<S50>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/Check epoch'
//  '<S51>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/If Action Subsystem4'
//  '<S52>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/If Action Subsystem5'
//  '<S53>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split'
//  '<S54>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split1'
//  '<S55>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split2'
//  '<S56>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp'
//  '<S57>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/for pc'
//  '<S58>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position'
//  '<S59>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity'
//  '<S60>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/for pc/For Iterator Subsystem'
//  '<S61>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position/For Iterator Subsystem'
//  '<S62>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
//  '<S63>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for vc'
//  '<S64>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity'
//  '<S65>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for vc/For Iterator Subsystem'
//  '<S66>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity/For Iterator Subsystem'
//  '<S67>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
//  '<S68>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units/If Action Subsystem7'
//  '<S69>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units/If Action Subsystem8'
//  '<S70>'  : 'asbCubeSat/Pointing Mode/Signal Editor'
//  '<S71>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel'
//  '<S72>'  : 'asbCubeSat/Scopes/Subsystem1'
//  '<S73>'  : 'asbCubeSat/Scopes/Subsystem2'
//  '<S74>'  : 'asbCubeSat/Scopes/Subsystem3'
//  '<S75>'  : 'asbCubeSat/Scopes/Subsystem4'
//  '<S76>'  : 'asbCubeSat/Scopes/Subsystem5'
//  '<S77>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product'
//  '<S78>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse'
//  '<S79>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation'
//  '<S80>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1'
//  '<S81>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2'
//  '<S82>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3'
//  '<S83>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product/Subsystem'
//  '<S84>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product/Subsystem1'
//  '<S85>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse/Quaternion Conjugate'
//  '<S86>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse/Quaternion Norm'
//  '<S87>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize'
//  '<S88>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V1'
//  '<S89>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V2'
//  '<S90>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V3'
//  '<S91>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S92>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S93>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize'
//  '<S94>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V1'
//  '<S95>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V2'
//  '<S96>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V3'
//  '<S97>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S98>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S99>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize'
//  '<S100>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V1'
//  '<S101>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V2'
//  '<S102>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V3'
//  '<S103>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S104>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S105>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize'
//  '<S106>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V1'
//  '<S107>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V2'
//  '<S108>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V3'
//  '<S109>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize/Quaternion Modulus'
//  '<S110>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S111>' : 'asbCubeSat/Vehicle Model/Vehicle Control Actuators'
//  '<S112>' : 'asbCubeSat/Vehicle Model/Vehicle Control Sensors'
//  '<S113>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics'
//  '<S114>' : 'asbCubeSat/Vehicle Model/Vehicle Flight Software'
//  '<S115>' : 'asbCubeSat/Vehicle Model/Vehicle Control Actuators/CubeSat Perfect Actuators'
//  '<S116>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF'
//  '<S117>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Degrees to Radians'
//  '<S118>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED'
//  '<S119>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions'
//  '<S120>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication'
//  '<S121>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Rotation Angles to Direction Cosine Matrix'
//  '<S122>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle'
//  '<S123>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunInView'
//  '<S124>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product'
//  '<S125>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_pm'
//  '<S126>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM'
//  '<S127>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/deg2rad'
//  '<S128>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product/Subsystem'
//  '<S129>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product/Subsystem1'
//  '<S130>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_pm/Create 3x3 Matrix'
//  '<S131>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Check deltaT'
//  '<S132>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation'
//  '<S133>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction'
//  '<S134>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion'
//  '<S135>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/Check deltaT'
//  '<S136>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/If Action Subsystem'
//  '<S137>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/If Action Subsystem1'
//  '<S138>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations'
//  '<S139>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP'
//  '<S140>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation'
//  '<S141>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion'
//  '<S142>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion'
//  '<S143>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/Check deltaT'
//  '<S144>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/If Action Subsystem'
//  '<S145>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/If Action Subsystem1'
//  '<S146>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/Lunisolar and planetary nutation'
//  '<S147>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession'
//  '<S148>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/Lunisolar and planetary nutation/Angle Conversion'
//  '<S149>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion'
//  '<S150>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion1'
//  '<S151>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion2'
//  '<S152>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Rotation Angles to Direction Cosine Matrix'
//  '<S153>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/S'
//  '<S154>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/X'
//  '<S155>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Y'
//  '<S156>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
//  '<S157>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation/Rotation Angles to Direction Cosine Matrix'
//  '<S158>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
//  '<S159>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Angle Conversion1'
//  '<S160>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Rotation Angles to Direction Cosine Matrix'
//  '<S161>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
//  '<S162>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A11'
//  '<S163>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A12'
//  '<S164>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A13'
//  '<S165>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A21'
//  '<S166>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A22'
//  '<S167>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A23'
//  '<S168>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A31'
//  '<S169>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A32'
//  '<S170>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A33'
//  '<S171>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/Angle Conversion'
//  '<S172>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/Create Transformation Matrix'
//  '<S173>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace'
//  '<S174>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace'
//  '<S175>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM'
//  '<S176>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/trace(DCM)'
//  '<S177>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)'
//  '<S178>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)'
//  '<S179>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)'
//  '<S180>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/diag(DCM)'
//  '<S181>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
//  '<S182>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
//  '<S183>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
//  '<S184>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s'
//  '<S185>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1'
//  '<S186>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
//  '<S187>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
//  '<S188>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
//  '<S189>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s'
//  '<S190>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1'
//  '<S191>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
//  '<S192>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
//  '<S193>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
//  '<S194>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s'
//  '<S195>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1'
//  '<S196>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
//  '<S197>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
//  '<S198>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
//  '<S199>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error'
//  '<S200>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal'
//  '<S201>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper'
//  '<S202>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal'
//  '<S203>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper'
//  '<S204>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Error'
//  '<S205>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Warning'
//  '<S206>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Error'
//  '<S207>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Warning'
//  '<S208>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/transpose*dcm ~= eye(3)'
//  '<S209>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Determinant of 3x3 Matrix'
//  '<S210>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/determinant does not equal 1'
//  '<S211>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q0'
//  '<S212>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q1'
//  '<S213>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q2'
//  '<S214>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q3'
//  '<S215>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
//  '<S216>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Conjugate'
//  '<S217>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation'
//  '<S218>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Radians to Degrees'
//  '<S219>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize'
//  '<S220>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V1'
//  '<S221>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V2'
//  '<S222>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V3'
//  '<S223>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S224>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S225>' : 'asbCubeSat/Visualization/Virtual Reality World'
//  '<S226>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML'
//  '<S227>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Antenna Properties'
//  '<S228>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate'
//  '<S229>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Umbra Translation'
//  '<S230>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse'
//  '<S231>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1'
//  '<S232>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation'
//  '<S233>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1'
//  '<S234>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2'
//  '<S235>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b'
//  '<S236>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML'
//  '<S237>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1'
//  '<S238>' : 'asbCubeSat/Visualization/Virtual Reality World/Radar on//off'
//  '<S239>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML'
//  '<S240>' : 'asbCubeSat/Visualization/Virtual Reality World/Satellite Model Scaling'
//  '<S241>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML'
//  '<S242>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML/ECEF to VRML'
//  '<S243>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML/Length Conversion'
//  '<S244>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions'
//  '<S245>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Quaternion to VRML'
//  '<S246>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q0'
//  '<S247>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q1'
//  '<S248>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q2'
//  '<S249>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q3'
//  '<S250>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Umbra Translation/unitVec'
//  '<S251>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse/Quaternion Conjugate'
//  '<S252>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse/Quaternion Norm'
//  '<S253>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1/Quaternion Conjugate'
//  '<S254>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1/Quaternion Norm'
//  '<S255>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize'
//  '<S256>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V1'
//  '<S257>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V2'
//  '<S258>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V3'
//  '<S259>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S260>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S261>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize'
//  '<S262>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V1'
//  '<S263>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V2'
//  '<S264>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V3'
//  '<S265>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S266>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S267>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize'
//  '<S268>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V1'
//  '<S269>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V2'
//  '<S270>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V3'
//  '<S271>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S272>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S273>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2'
//  '<S274>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel'
//  '<S275>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Compare To Constant'
//  '<S276>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal'
//  '<S277>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2'
//  '<S278>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2/Subsystem'
//  '<S279>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2/Subsystem1'
//  '<S280>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem'
//  '<S281>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem1'
//  '<S282>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem2'
//  '<S283>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product'
//  '<S284>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product/Subsystem'
//  '<S285>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product/Subsystem1'
//  '<S286>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2/Quaternion Modulus'
//  '<S287>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm'
//  '<S288>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication'
//  '<S289>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q0'
//  '<S290>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q1'
//  '<S291>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q2'
//  '<S292>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q3'
//  '<S293>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication'
//  '<S294>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q0'
//  '<S295>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q1'
//  '<S296>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q2'
//  '<S297>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q3'
//  '<S298>' : 'asbCubeSat/Visualization/Virtual Reality World/Radar on//off/Compare To Constant'
//  '<S299>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML/ECEF to VRML'
//  '<S300>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML/Length Conversion'
//  '<S301>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML/ECEF to VRML'
//  '<S302>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML/Length Conversion'

#endif                                 // RTW_HEADER_asbCubeSat_h_

//
// File trailer for generated code.
//
// [EOF]
//
