//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: asbCubeSat.h
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
#ifndef RTW_HEADER_asbCubeSat_h_
#define RTW_HEADER_asbCubeSat_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "asbCubeSat_types.h"
#include "asbCubeSatACS.h"
#include <cmath>

extern "C" {

#include "rt_nonfinite.h"

}
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
  // Block signals for system '<S27>/For Iterator Subsystem'
  struct B_ForIteratorSubsystem_asbCubeSat_T {
    real_T VectorConcatenate[13];      // '<S30>/Vector Concatenate'
    real_T UnitDelay1[13];             // '<S30>/Unit Delay1'
    real_T Switch[13];                 // '<S30>/Switch'
    real_T crlonm1;                    // '<S30>/crlon[m-1]'
    real_T Gain;                       // '<S30>/Gain'
    real_T Product;                    // '<S30>/Product'
    real_T crlonm11;                   // '<S30>/crlon[m-1]1'
    real_T Sum;                        // '<S30>/Sum'
    int32_T ForIterator;               // '<S30>/For Iterator'
    int32_T Bias2;                     // '<S30>/Bias2'
    int32_T Bias3;                     // '<S30>/Bias3'
    int32_T Bias4;                     // '<S30>/Bias4'
  };

  // Block states (default storage) for system '<S27>/For Iterator Subsystem'
  struct DW_ForIteratorSubsystem_asbCubeSat_T {
    real_T UnitDelay1_DSTATE[13];      // '<S30>/Unit Delay1'
  };

  // Block signals for system '<S33>/For Iterator Subsystem'
  struct B_ForIteratorSubsystem_asbCubeSat_n_T {
    real_T ForIterator;                // '<S35>/For Iterator'
    real_T twot;                       // '<S35>/Gain'
    real_T VectorConcatenate[13];      // '<S35>/Vector Concatenate'
  };

  // Block signals for system '<S34>/For Iterator Subsystem'
  struct B_ForIteratorSubsystem_asbCubeSat_j_T {
    int32_T ncm;                       // '<S36>/ncm'
    int32_T ForIterator;               // '<S37>/For Iterator'
  };

  // Block signals (default storage)
  struct B_asbCubeSat_T {
    real_T dv[22400];
    real_T pmData[22380];
    real_T dxyData[21782];
    real_T dv1[17850];
    real_T P[15129];
    real_T scaleFactor[15129];
    real_T ut1utcData[11190];
    int32_T idx_data[11190];
    int32_T ii_data[11190];
    uint16_T mjdData[11190];
    real_T factor_dX[1600];
    real_T factor_dX_m[1600];
    real_T factor_dX_c[1600];
    real_T factor_dX_k[1600];
    real_T factor_dX_cx[1600];
    real_T factor_dX_b[1600];
    real_T factor_dX_p[1600];
    boolean_T x[11190];
    real_T factor_dY[1275];
    real_T factor_dY_c[1275];
    real_T factor_dY_f[1275];
    real_T factor_dY_g[1275];
    real_T factor_dY_g1[1275];
    real_T factor_dY_m[1275];
    real_T factor_dY_n[1275];
    real_T dv2[528];
    FCSOutBus FSWOut;                  // '<S113>/Bus Creator'
    real_T X_ecef[3];                  // '<S112>/Spacecraft Dynamics'
    real_T V_ecef[3];                  // '<S112>/Spacecraft Dynamics'
    real_T Euler[3];                   // '<S112>/Spacecraft Dynamics'
    real_T SpacecraftDynamics_o4[3];   // '<S112>/Spacecraft Dynamics'
    real_T SpacecraftDynamics_o5[4];   // '<S112>/Spacecraft Dynamics'
    real_T SpacecraftDynamics_o6;      // '<S112>/Spacecraft Dynamics'
    real_T Gain1[3];                   // '<S116>/Gain1'
    real_T sincos_o1[3];               // '<S120>/sincos'
    real_T sincos_o2[3];               // '<S120>/sincos'
    real_T VectorConcatenate[9];       // '<S214>/Vector Concatenate'
    real_T ECEFPositiontoLLA_o1[2];    // '<S112>/ECEF Position to LLA'
    real_T ECEFPositiontoLLA_o2;       // '<S112>/ECEF Position to LLA'
    real_T UnitConversion[2];          // '<S170>/Unit Conversion'
    real_T sincos_o1_g[2];             // '<S117>/sincos'
    real_T sincos_o2_k[2];             // '<S117>/sincos'
    real_T u1u4;                       // '<S161>/u(1)*u(4)'
    real_T u3u4;                       // '<S167>/u(3)*u(4)'
    real_T u1u2;                       // '<S162>/u(1)*u(2)'
    real_T u2u3;                       // '<S168>/u(2)*u(3)'
    real_T VectorConcatenate_h[9];     // '<S171>/Vector Concatenate'
    real_T Product2[9];                // '<S112>/Product2'
    real_T Add;                        // '<S175>/Add'
    real_T Merge[4];                   // '<S118>/Merge'
    real_T UnaryMinus1;                // '<S250>/Unary Minus1'
    real_T Product;                    // '<S251>/Product'
    real_T Product1;                   // '<S251>/Product1'
    real_T Product2_o;                 // '<S251>/Product2'
    real_T Product3;                   // '<S251>/Product3'
    real_T Sum;                        // '<S251>/Sum'
    real_T Divide2;                    // '<S229>/Divide2'
    real_T Divide;                     // '<S229>/Divide'
    real_T Product_j;                  // '<S259>/Product'
    real_T UnaryMinus;                 // '<S250>/Unary Minus'
    real_T Divide1;                    // '<S229>/Divide1'
    real_T Product1_h;                 // '<S259>/Product1'
    real_T Product2_f;                 // '<S259>/Product2'
    real_T UnaryMinus2;                // '<S250>/Unary Minus2'
    real_T Divide3;                    // '<S229>/Divide3'
    real_T Product3_d;                 // '<S259>/Product3'
    real_T Sum_h;                      // '<S259>/Sum'
    real_T sqrt_e;                     // '<S258>/sqrt'
    real_T Product2_k;                 // '<S254>/Product2'
    real_T Product6;                   // '<S255>/Product6'
    real_T Product3_j;                 // '<S254>/Product3'
    real_T Product7;                   // '<S255>/Product7'
    real_T Sum3;                       // '<S255>/Sum3'
    real_T Gain2;                      // '<S255>/Gain2'
    real_T Product8;                   // '<S255>/Product8'
    real_T Product1_d;                 // '<S254>/Product1'
    real_T Product_m;                  // '<S255>/Product'
    real_T Product_i;                  // '<S254>/Product'
    real_T Product1_k;                 // '<S255>/Product1'
    real_T Sum1;                       // '<S255>/Sum1'
    real_T Gain;                       // '<S255>/Gain'
    real_T Product4;                   // '<S255>/Product4'
    real_T Product2_j;                 // '<S255>/Product2'
    real_T Product3_k;                 // '<S255>/Product3'
    real_T Sum2;                       // '<S255>/Sum2'
    real_T Gain1_b;                    // '<S255>/Gain1'
    real_T Product5;                   // '<S255>/Product5'
    real_T Sum_hn;                     // '<S255>/Sum'
    real_T Product_e;                  // '<S256>/Product'
    real_T Product1_a;                 // '<S256>/Product1'
    real_T Sum1_c;                     // '<S256>/Sum1'
    real_T Gain_k;                     // '<S256>/Gain'
    real_T Product4_k;                 // '<S256>/Product4'
    real_T Product6_n;                 // '<S256>/Product6'
    real_T Product7_n;                 // '<S256>/Product7'
    real_T Sum3_b;                     // '<S256>/Sum3'
    real_T Gain2_a;                    // '<S256>/Gain2'
    real_T Product8_a;                 // '<S256>/Product8'
    real_T Product2_l;                 // '<S256>/Product2'
    real_T Product3_g;                 // '<S256>/Product3'
    real_T Sum2_j;                     // '<S256>/Sum2'
    real_T Gain1_e;                    // '<S256>/Gain1'
    real_T Product5_o;                 // '<S256>/Product5'
    real_T Sum_j;                      // '<S256>/Sum'
    real_T Product_c;                  // '<S257>/Product'
    real_T Product1_c;                 // '<S257>/Product1'
    real_T Sum1_m;                     // '<S257>/Sum1'
    real_T Gain_o;                     // '<S257>/Gain'
    real_T Product4_e;                 // '<S257>/Product4'
    real_T Product2_ol;                // '<S257>/Product2'
    real_T Product3_i;                 // '<S257>/Product3'
    real_T Sum2_l;                     // '<S257>/Sum2'
    real_T Gain1_f;                    // '<S257>/Gain1'
    real_T Product5_p;                 // '<S257>/Product5'
    real_T Product6_g;                 // '<S257>/Product6'
    real_T Product7_m;                 // '<S257>/Product7'
    real_T Sum3_j;                     // '<S257>/Sum3'
    real_T Gain2_j;                    // '<S257>/Gain2'
    real_T Product8_g;                 // '<S257>/Product8'
    real_T Sum_i;                      // '<S257>/Sum'
    real_T Sum_o[3];                   // '<S224>/Sum'
    real_T UnitConversion_j[3];        // '<S242>/Unit Conversion'
    real_T kmtoVRMLunits[3];           // '<S225>/km to VRML units'
    real_T UnitDelay[3];               // '<S227>/Unit Delay'
    real_T Sum_k[3];                   // '<S227>/Sum'
    real_T u2[3];                      // '<S243>/1//2'
    real_T SinCos_o1[3];               // '<S243>/SinCos'
    real_T SinCos_o2[3];               // '<S243>/SinCos'
    real_T u1u2u3;                     // '<S245>/u(1)*u(2)*u(3)'
    real_T u4u5u6;                     // '<S245>/u(4)*u(5)*u(6)'
    real_T Sum_c;                      // '<S245>/Sum'
    real_T u2u3u4;                     // '<S246>/u(2)*u(3)*u(4)'
    real_T u1u5u6;                     // '<S246>/u(1)*u(5)*u(6)'
    real_T Sum_kk;                     // '<S246>/Sum'
    real_T u2u4u6;                     // '<S247>/u(2)*u(4)*u(6)'
    real_T u1u3u5;                     // '<S247>/u(1)*u(3)*u(5)'
    real_T Sum_f;                      // '<S247>/Sum'
    real_T u1u2u6;                     // '<S248>/u(1)*u(2)*u(6)'
    real_T u3u4u5;                     // '<S248>/u(3)*u(4)*u(5)'
    real_T Sum_e;                      // '<S248>/Sum'
    real_T TrigonometricFunction;      // '<S244>/Trigonometric Function'
    real_T Gain_l;                     // '<S244>/Gain'
    real_T Gain3[4];                   // '<S244>/Gain3'
    real_T DigitalClock;               // '<S1>/Digital Clock'
    real_T Divide_a;                   // '<S1>/Divide'
    real_T Sum_fp;                     // '<S1>/Sum'
    real_T Bias;                       // '<S20>/Bias'
    real_T RoundingFunction;           // '<S52>/Rounding Function'
    real_T Sum1_cv;                    // '<S20>/Sum1'
    real_T pjd1;                       // '<S20>/Bias1'
    real_T Sum_l;                      // '<S52>/Sum'
    real_T pjd2;                       // '<S20>/Sum2'
    real_T RoundingFunction_o;         // '<S54>/Rounding Function'
    real_T pjd1_d;                     // '<S20>/Sum3'
    real_T Sum5;                       // '<S20>/Sum5'
    real_T Divide_g;                   // '<S20>/Divide'
    real_T RoundingFunction_i;         // '<S20>/Rounding Function'
    real_T nr;                         // '<S20>/Bias2'
    real_T nr_l;                       // '<S20>/Merge'
    real_T Bias3;                      // '<S20>/Bias3'
    real_T ephdata[78];                // '<S18>/eph data'
    real_T Sum_m;                      // '<S54>/Sum'
    real_T Divide1_o;                  // '<S20>/Divide1'
    real_T tmp1;                       // '<S20>/Sum6'
    real_T tmp2;                       // '<S20>/Sum7'
    real_T Sum8;                       // '<S20>/Sum8'
    real_T t1;                         // '<S20>/Divide2'
    real_T dt1;                        // '<S24>/Rounding Function'
    real_T temp;                       // '<S24>/Product'
    real_T Sum_b;                      // '<S24>/Sum'
    real_T RoundingFunction1;          // '<S24>/Rounding Function1'
    real_T l;                          // '<S24>/Bias1'
    real_T MathFunction;               // '<S24>/Math Function'
    real_T Sum2_n;                     // '<S24>/Sum2'
    real_T Gain_g;                     // '<S24>/Gain'
    real_T tc;                         // '<S24>/Bias'
    real_T ephdatamoon[312];           // '<S25>/eph data moon'
    real_T dt1_j;                      // '<S26>/Rounding Function'
    real_T temp_m;                     // '<S26>/Product'
    real_T Sum_bf;                     // '<S26>/Sum'
    real_T RoundingFunction1_o;        // '<S26>/Rounding Function1'
    real_T l_b;                        // '<S26>/Bias1'
    real_T MathFunction_m;             // '<S26>/Math Function'
    real_T Sum2_e;                     // '<S26>/Sum2'
    real_T Gain_p;                     // '<S26>/Gain'
    real_T tc_p;                       // '<S26>/Bias'
    real_T Divide3_a[3];               // '<S23>/Divide3'
    real_T Sum8_l[3];                  // '<S23>/Sum8'
    real_T ephdata_f[66];              // '<S21>/eph data'
    real_T dt1_p;                      // '<S55>/Rounding Function'
    real_T temp_g;                     // '<S55>/Product'
    real_T Sum_hq;                     // '<S55>/Sum'
    real_T RoundingFunction1_p;        // '<S55>/Rounding Function1'
    real_T l_e;                        // '<S55>/Bias1'
    real_T MathFunction_h;             // '<S55>/Math Function'
    real_T Sum2_m;                     // '<S55>/Sum2'
    real_T Gain_b;                     // '<S55>/Gain'
    real_T tc_a;                       // '<S55>/Bias'
    real_T Sum_cz[3];                  // '<S11>/Sum'
    real_T aufac;                      // '<S22>/Merge2'
    real_T Divide3_p[3];               // '<S11>/Divide3'
    real_T UnitConversion_f[3];        // '<S10>/Unit Conversion'
    real_T Product_ms;                 // '<S212>/Product'
    real_T Product1_a5;                // '<S212>/Product1'
    real_T Product2_jg;                // '<S212>/Product2'
    real_T Product3_o;                 // '<S212>/Product3'
    real_T Sum_fpu;                    // '<S212>/Sum'
    real_T Product_g;                  // '<S210>/Product'
    real_T Product1_ac;                // '<S210>/Product1'
    real_T Product2_n;                 // '<S210>/Product2'
    real_T Product3_p;                 // '<S210>/Product3'
    real_T Sum_a;                      // '<S210>/Sum'
    real_T Product_a;                  // '<S265>/Product'
    real_T Product_ai;                 // '<S211>/Product'
    real_T Product1_ct;                // '<S211>/Product1'
    real_T Product2_jk;                // '<S211>/Product2'
    real_T Product3_oq;                // '<S211>/Product3'
    real_T Sum_in;                     // '<S211>/Sum'
    real_T Product1_m;                 // '<S265>/Product1'
    real_T Product2_a;                 // '<S265>/Product2'
    real_T Product_js;                 // '<S213>/Product'
    real_T Product1_o;                 // '<S213>/Product1'
    real_T Product2_m;                 // '<S213>/Product2'
    real_T Product3_e;                 // '<S213>/Product3'
    real_T Sum_jr;                     // '<S213>/Sum'
    real_T Product3_m;                 // '<S265>/Product3'
    real_T Sum_ai;                     // '<S265>/Sum'
    real_T sqrt_h;                     // '<S264>/sqrt'
    real_T Product2_i;                 // '<S260>/Product2'
    real_T Product6_j;                 // '<S261>/Product6'
    real_T Product3_n;                 // '<S260>/Product3'
    real_T Product7_ma;                // '<S261>/Product7'
    real_T Sum3_jg;                    // '<S261>/Sum3'
    real_T Gain2_m;                    // '<S261>/Gain2'
    real_T Product8_g2;                // '<S261>/Product8'
    real_T Product1_i;                 // '<S260>/Product1'
    real_T Product_ie;                 // '<S261>/Product'
    real_T Product_c1;                 // '<S260>/Product'
    real_T Product1_ka;                // '<S261>/Product1'
    real_T Sum1_b;                     // '<S261>/Sum1'
    real_T Gain_g4;                    // '<S261>/Gain'
    real_T Product4_h;                 // '<S261>/Product4'
    real_T Product2_c;                 // '<S261>/Product2'
    real_T Product3_gq;                // '<S261>/Product3'
    real_T Sum2_eq;                    // '<S261>/Sum2'
    real_T Gain1_c;                    // '<S261>/Gain1'
    real_T Product5_n;                 // '<S261>/Product5'
    real_T Sum_ko;                     // '<S261>/Sum'
    real_T UnaryMinus1_e;              // '<S252>/Unary Minus1'
    real_T Product_f;                  // '<S253>/Product'
    real_T Product1_aa;                // '<S253>/Product1'
    real_T Product2_fd;                // '<S253>/Product2'
    real_T Product3_jd;                // '<S253>/Product3'
    real_T Sum_am;                     // '<S253>/Sum'
    real_T Divide2_g;                  // '<S230>/Divide2'
    real_T Divide_gw;                  // '<S230>/Divide'
    real_T Product_o;                  // '<S271>/Product'
    real_T UnaryMinus_n;               // '<S252>/Unary Minus'
    real_T Divide1_p;                  // '<S230>/Divide1'
    real_T Product1_j;                 // '<S271>/Product1'
    real_T Product2_ob;                // '<S271>/Product2'
    real_T UnaryMinus2_k;              // '<S252>/Unary Minus2'
    real_T Divide3_j;                  // '<S230>/Divide3'
    real_T Product3_os;                // '<S271>/Product3'
    real_T Sum_lo;                     // '<S271>/Sum'
    real_T sqrt_c;                     // '<S270>/sqrt'
    real_T Product2_h;                 // '<S266>/Product2'
    real_T Product6_np;                // '<S267>/Product6'
    real_T Product3_jd0;               // '<S266>/Product3'
    real_T Product7_p;                 // '<S267>/Product7'
    real_T Sum3_c;                     // '<S267>/Sum3'
    real_T Gain2_l;                    // '<S267>/Gain2'
    real_T Product8_e;                 // '<S267>/Product8'
    real_T Product1_kt;                // '<S266>/Product1'
    real_T Product_ck;                 // '<S267>/Product'
    real_T Product_fd;                 // '<S266>/Product'
    real_T Product1_oy;                // '<S267>/Product1'
    real_T Sum1_h;                     // '<S267>/Sum1'
    real_T Gain_j;                     // '<S267>/Gain'
    real_T Product_h;                  // '<S262>/Product'
    real_T Product1_acg;               // '<S262>/Product1'
    real_T Sum1_f;                     // '<S262>/Sum1'
    real_T Gain_d;                     // '<S262>/Gain'
    real_T Product4_l;                 // '<S262>/Product4'
    real_T Product6_jt;                // '<S262>/Product6'
    real_T Product7_j;                 // '<S262>/Product7'
    real_T Sum3_c4;                    // '<S262>/Sum3'
    real_T Gain2_c;                    // '<S262>/Gain2'
    real_T Product8_i;                 // '<S262>/Product8'
    real_T Product2_cu;                // '<S262>/Product2'
    real_T Product3_gz;                // '<S262>/Product3'
    real_T Sum2_l0;                    // '<S262>/Sum2'
    real_T Gain1_i;                    // '<S262>/Gain1'
    real_T Product5_m;                 // '<S262>/Product5'
    real_T Sum_ain;                    // '<S262>/Sum'
    real_T Product4_i;                 // '<S267>/Product4'
    real_T Product2_ce;                // '<S267>/Product2'
    real_T Product3_po;                // '<S267>/Product3'
    real_T Sum2_g;                     // '<S267>/Sum2'
    real_T Gain1_k;                    // '<S267>/Gain1'
    real_T Product_g3;                 // '<S263>/Product'
    real_T Product1_kg;                // '<S263>/Product1'
    real_T Sum1_a;                     // '<S263>/Sum1'
    real_T Gain_gk;                    // '<S263>/Gain'
    real_T Product4_o;                 // '<S263>/Product4'
    real_T Product2_oe;                // '<S263>/Product2'
    real_T Product3_f;                 // '<S263>/Product3'
    real_T Sum2_jw;                    // '<S263>/Sum2'
    real_T Gain1_a;                    // '<S263>/Gain1'
    real_T Product5_l;                 // '<S263>/Product5'
    real_T Product6_k;                 // '<S263>/Product6'
    real_T Product7_py;                // '<S263>/Product7'
    real_T Sum3_h;                     // '<S263>/Sum3'
    real_T Gain2_g;                    // '<S263>/Gain2'
    real_T Product8_d;                 // '<S263>/Product8'
    real_T Sum_k5;                     // '<S263>/Sum'
    real_T Product5_ns;                // '<S267>/Product5'
    real_T Sum_im;                     // '<S267>/Sum'
    real_T Product_ci;                 // '<S268>/Product'
    real_T Product1_az;                // '<S268>/Product1'
    real_T Sum1_hj;                    // '<S268>/Sum1'
    real_T Gain_gt;                    // '<S268>/Gain'
    real_T Product4_f;                 // '<S268>/Product4'
    real_T Product6_gf;                // '<S268>/Product6'
    real_T Product7_o;                 // '<S268>/Product7'
    real_T Sum3_n;                     // '<S268>/Sum3'
    real_T Gain2_h;                    // '<S268>/Gain2'
    real_T Product8_eq;                // '<S268>/Product8'
    real_T Product2_f2;                // '<S268>/Product2'
    real_T Product3_nj;                // '<S268>/Product3'
    real_T Sum2_c;                     // '<S268>/Sum2'
    real_T Gain1_cs;                   // '<S268>/Gain1'
    real_T Product5_k;                 // '<S268>/Product5'
    real_T Sum_d;                      // '<S268>/Sum'
    real_T Product_f5;                 // '<S269>/Product'
    real_T Product1_f;                 // '<S269>/Product1'
    real_T Sum1_e;                     // '<S269>/Sum1'
    real_T Gain_pt;                    // '<S269>/Gain'
    real_T Product4_a;                 // '<S269>/Product4'
    real_T Product2_e;                 // '<S269>/Product2'
    real_T Product3_gd;                // '<S269>/Product3'
    real_T Sum2_i;                     // '<S269>/Sum2'
    real_T Gain1_fv;                   // '<S269>/Gain1'
    real_T Product5_kn;                // '<S269>/Product5'
    real_T Product6_ga;                // '<S269>/Product6'
    real_T Product7_h;                 // '<S269>/Product7'
    real_T Sum3_i;                     // '<S269>/Sum3'
    real_T Gain2_o;                    // '<S269>/Gain2'
    real_T Product8_ai;                // '<S269>/Product8'
    real_T Sum_b4;                     // '<S269>/Sum'
    real_T TmpSignalConversionAtDotProduct2Inport1[3];
    real_T UnitConversion_k[3];        // '<S301>/Unit Conversion'
    real_T kmtoVRMLunits_n[3];         // '<S240>/km to VRML units'
    real_T KeepSunInView[3];           // '<S224>/KeepSunInView'
    real_T InvertSunPosECEF[3];        // '<S228>/InvertSunPosECEF'
    real_T DotProduct;                 // '<S249>/Dot Product'
    real_T Sqrt;                       // '<S249>/Sqrt'
    real_T Divide_b[3];                // '<S249>/Divide'
    real_T ConeHalfLength[3];          // '<S228>/ConeHalfLength'
    real_T Add_m[3];                   // '<S228>/Add'
    real_T DotProduct3;                // '<S234>/Dot Product3'
    real_T DotProduct2;                // '<S234>/Dot Product2'
    real_T Divide1_i;                  // '<S234>/Divide1'
    real_T Sqrt3;                      // '<S234>/Sqrt3'
    real_T Add2;                       // '<S234>/Add2'
    real_T DotProduct3_m;              // '<S273>/Dot Product3'
    real_T DotProduct2_g;              // '<S273>/Dot Product2'
    real_T Divide1_n;                  // '<S273>/Divide1'
    real_T Sqrt3_m;                    // '<S273>/Sqrt3'
    real_T Divide_c;                   // '<S273>/Divide'
    real_T Bias_f;                     // '<S273>/Bias'
    real_T Abs;                        // '<S273>/Abs'
    real_T Bias1;                      // '<S273>/Bias1'
    real_T Abs1;                       // '<S273>/Abs1'
    real_T Merge_m;                    // '<S273>/Merge'
    real_T Product_fw;                 // '<S286>/Product'
    real_T is180degRot[3];             // '<S234>/is 180deg Rot'
    real_T Product1_e;                 // '<S286>/Product1'
    real_T Product2_g;                 // '<S286>/Product2'
    real_T Product3_c;                 // '<S286>/Product3'
    real_T Sum_k0;                     // '<S286>/Sum'
    real_T sqrt_ex;                    // '<S285>/sqrt'
    real_T Product_jo;                 // '<S276>/Product'
    real_T Product1_n;                 // '<S276>/Product1'
    real_T Product2_a3;                // '<S276>/Product2'
    real_T Product3_fo;                // '<S276>/Product3'
    real_T Product_b;                  // '<S288>/Product'
    real_T Product1_ca;                // '<S288>/Product1'
    real_T Product2_i5;                // '<S288>/Product2'
    real_T Product3_gr;                // '<S288>/Product3'
    real_T Sum_di;                     // '<S288>/Sum'
    real_T TrigonometricFunction_e;    // '<S235>/Trigonometric Function'
    real_T Gain_a;                     // '<S235>/Gain'
    real_T Product_ft;                 // '<S289>/Product'
    real_T Product1_jo;                // '<S289>/Product1'
    real_T Product2_az;                // '<S289>/Product2'
    real_T Product3_n5;                // '<S289>/Product3'
    real_T Sum_hh;                     // '<S289>/Sum'
    real_T Product_n;                  // '<S290>/Product'
    real_T Product1_ee;                // '<S290>/Product1'
    real_T Product2_jr;                // '<S290>/Product2'
    real_T Product3_h;                 // '<S290>/Product3'
    real_T Sum_dv;                     // '<S290>/Sum'
    real_T Product_ja;                 // '<S291>/Product'
    real_T Product1_g;                 // '<S291>/Product1'
    real_T Product2_os;                // '<S291>/Product2'
    real_T Product3_m1;                // '<S291>/Product3'
    real_T Sum_a5;                     // '<S291>/Sum'
    real_T Product_fl;                 // '<S293>/Product'
    real_T Product1_di;                // '<S293>/Product1'
    real_T Product2_io;                // '<S293>/Product2'
    real_T Product3_kg;                // '<S293>/Product3'
    real_T Sum_p;                      // '<S293>/Sum'
    real_T TrigonometricFunction_c;    // '<S236>/Trigonometric Function'
    real_T Gain_at;                    // '<S236>/Gain'
    real_T Product_d;                  // '<S294>/Product'
    real_T Product1_l;                 // '<S294>/Product1'
    real_T Product2_fs;                // '<S294>/Product2'
    real_T Product3_fv;                // '<S294>/Product3'
    real_T Sum_k1;                     // '<S294>/Sum'
    real_T Product_i5;                 // '<S295>/Product'
    real_T Product1_kl;                // '<S295>/Product1'
    real_T Product2_b;                 // '<S295>/Product2'
    real_T Product3_fh;                // '<S295>/Product3'
    real_T Sum_aj;                     // '<S295>/Sum'
    real_T Product_hl;                 // '<S296>/Product'
    real_T Product1_h2;                // '<S296>/Product1'
    real_T Product2_hj;                // '<S296>/Product2'
    real_T Product3_b;                 // '<S296>/Product3'
    real_T Sum_hqh;                    // '<S296>/Sum'
    real_T UnitConversion_e[3];        // '<S299>/Unit Conversion'
    real_T kmtoVRMLunits_c[3];         // '<S238>/km to VRML units'
    real_T t2;                         // '<S22>/Merge1'
    real_T PointingMode;               // '<S69>/fromWS_Signal 1'
    real_T MultiportSwitch;            // '<S3>/Multiport Switch'
    real_T utc_JD;                     // '<S111>/Unit Delay'
    real_T SunAngle;                   // '<S111>/Unit Delay'
    real_T X_ecef_h[3];                // '<S111>/Unit Delay'
    real_T V_ecef_o[3];                // '<S111>/Unit Delay'
    real_T X_eci[3];                   // '<S111>/Unit Delay'
    real_T V_eci[3];                   // '<S111>/Unit Delay'
    real_T q_ecef2b[4];                // '<S111>/Unit Delay'
    real_T q_eci2b[4];                 // '<S111>/Unit Delay'
    real_T Euler_e[3];                 // '<S111>/Unit Delay'
    real_T LatLonAlt[3];               // '<S111>/Unit Delay'
    real_T JDtoMJD;                    // '<S115>/JD to MJD'
    real_T Sum_n;                      // '<S115>/Sum'
    real_T Bias1_h;                    // '<S115>/Bias1'
    real_T Divide1_j;                  // '<S115>/Divide1'
    real_T Gain_dd;                    // '<S115>/Gain'
    real_T Divide2_o;                  // '<S115>/Divide2'
    real_T UnitConversion_g;           // '<S126>/Unit Conversion'
    real_T EarthOrientationParameters_o1;// '<S115>/Earth Orientation Parameters' 
    real_T EarthOrientationParameters_o2[2];// '<S115>/Earth Orientation Parameters' 
    real_T EarthOrientationParameters_o3[2];// '<S115>/Earth Orientation Parameters' 
    real_T Gain1_kk[2];                // '<S115>/Gain1'
    real_T TmpSignalConversionAtsincosInport1[3];
    real_T sincos_o1_o[3];             // '<S124>/sincos'
    real_T sincos_o2_g[3];             // '<S124>/sincos'
    real_T VectorConcatenate_j[9];     // '<S129>/Vector Concatenate'
    real_T Transpose[9];               // '<S115>/Transpose'
    real_T r_pef[3];                   // '<S115>/r_pef'
    real_T ixj;                        // '<S127>/i x j'
    real_T jxk;                        // '<S127>/j x k'
    real_T kxi;                        // '<S127>/k x i'
    real_T ixk;                        // '<S128>/i x k'
    real_T jxi;                        // '<S128>/j x i'
    real_T kxj;                        // '<S128>/k x j'
    real_T Sum_eq[3];                  // '<S123>/Sum'
    real_T Merge_o;                    // '<S133>/Merge'
    real_T Gain_n;                     // '<S133>/Gain'
    real_T RoundingFunction2;          // '<S133>/Rounding Function2'
    real_T Merge1;                     // '<S133>/Merge1'
    real_T Bias1_m;                    // '<S133>/Bias1'
    real_T Gain1_p;                    // '<S133>/Gain1'
    real_T RoundingFunction_h;         // '<S133>/Rounding Function'
    real_T Sum_oo;                     // '<S133>/Sum'
    real_T Bias2;                      // '<S133>/Bias2'
    real_T Gain2_lq;                   // '<S133>/Gain2'
    real_T RoundingFunction1_j;        // '<S133>/Rounding Function1'
    real_T Sum1_d;                     // '<S133>/Sum1'
    real_T Gain3_e;                    // '<S133>/Gain3'
    real_T RoundingFunction3;          // '<S133>/Rounding Function3'
    real_T Sum2_jj;                    // '<S133>/Sum2'
    real_T Assignment[4];              // '<S133>/Assignment'
    real_T Sum4[4];                    // '<S133>/Sum4'
    real_T Sum3_ie;                    // '<S133>/Sum3'
    real_T BiasDay;                    // '<S133>/BiasDay'
    real_T Gain5;                      // '<S133>/Gain5'
    real_T Gain6;                      // '<S133>/Gain6'
    real_T Sum6;                       // '<S133>/Sum6'
    real_T Gain4;                      // '<S133>/Gain4'
    real_T Sum5_f;                     // '<S133>/Sum5'
    real_T Sum2_f;                     // '<S131>/Sum2'
    real_T Bias1_o;                    // '<S131>/Bias1'
    real_T Gain_i;                     // '<S131>/Gain'
    real_T Sum_kx;                     // '<S131>/Sum'
    real_T Merge_b;                    // '<S141>/Merge'
    real_T Gain_di;                    // '<S141>/Gain'
    real_T RoundingFunction2_n;        // '<S141>/Rounding Function2'
    real_T Merge1_j;                   // '<S141>/Merge1'
    real_T Bias1_f;                    // '<S141>/Bias1'
    real_T Gain1_pq;                   // '<S141>/Gain1'
    real_T RoundingFunction_k;         // '<S141>/Rounding Function'
    real_T Sum_ec;                     // '<S141>/Sum'
    real_T Bias2_b;                    // '<S141>/Bias2'
    real_T Gain2_b;                    // '<S141>/Gain2'
    real_T RoundingFunction1_f;        // '<S141>/Rounding Function1'
    real_T Sum1_p;                     // '<S141>/Sum1'
    real_T Gain3_a;                    // '<S141>/Gain3'
    real_T RoundingFunction3_l;        // '<S141>/Rounding Function3'
    real_T Sum2_f2;                    // '<S141>/Sum2'
    real_T Assignment_o[4];            // '<S141>/Assignment'
    real_T Sum4_n[4];                  // '<S141>/Sum4'
    real_T Sum3_ji;                    // '<S141>/Sum3'
    real_T BiasDay_n;                  // '<S141>/BiasDay'
    real_T Gain5_c;                    // '<S141>/Gain5'
    real_T Gain6_o;                    // '<S141>/Gain6'
    real_T Sum6_c;                     // '<S141>/Sum6'
    real_T Gain4_a;                    // '<S141>/Gain4'
    real_T Sum5_o;                     // '<S141>/Sum5'
    real_T gainVal;                    // '<S137>/gainVal'
    real_T jdUT1;                      // '<S137>/Sum'
    real_T Bias_j;                     // '<S137>/Bias'
    real_T MathFunction_j;             // '<S137>/Math Function'
    real_T mMoon;                      // '<S145>/mMoon'
    real_T mSun;                       // '<S145>/mSun'
    real_T umMoon;                     // '<S145>/umMoon'
    real_T dSun;                       // '<S145>/dSun'
    real_T omegaMoon;                  // '<S145>/omegaMoon'
    real_T Gain_g42[5];                // '<S145>/Gain'
    real_T UnitConversion_jx[5];       // '<S147>/Unit Conversion'
    real_T lMercury;                   // '<S145>/lMercury'
    real_T lVenus;                     // '<S145>/lVenus'
    real_T lEarth;                     // '<S145>/lEarth'
    real_T lMars;                      // '<S145>/lMars'
    real_T lJupiter;                   // '<S145>/lJupiter'
    real_T lSaturn;                    // '<S145>/lSaturn'
    real_T lUranus;                    // '<S145>/lUranus'
    real_T lNeptune;                   // '<S145>/lNeptune'
    real_T pa;                         // '<S145>/pa'
    real_T TmpSignalConversionAtMathFunctionInport1[14];
    real_T MathFunction_k[14];         // '<S145>/Math Function'
    real_T S0;                         // '<S146>/S0'
    real_T Assignment_p[3];            // '<S152>/Assignment'
    real_T Divide_ci;                  // '<S152>/Divide'
    real_T Assignment1[25];            // '<S152>/Assignment1'
    real_T Divide1_f;                  // '<S152>/Divide1'
    real_T Assignment2[4];             // '<S152>/Assignment2'
    real_T Divide2_j;                  // '<S152>/Divide2'
    real_T TmpSignalConversionAtDivide3Inport2[8];
    real_T argS[66];                   // '<S152>/Divide3'
    real_T TrigonometricFunction_d[66];// '<S152>/Trigonometric Function'
    real_T Divide4[66];                // '<S152>/Divide4'
    real_T TrigonometricFunction1[66]; // '<S152>/Trigonometric Function1'
    real_T Divide5[66];                // '<S152>/Divide5'
    real_T Sum_ep[66];                 // '<S152>/Sum'
    real_T Sum1_am;                    // '<S152>/Sum1'
    real_T Sum2_n3;                    // '<S146>/Sum2'
    real_T Gain2_e;                    // '<S146>/Gain2'
    real_T UnitConversion_eq;          // '<S148>/Unit Conversion'
    real_T X0;                         // '<S146>/X0'
    real_T Assignment_f[253];          // '<S153>/Assignment'
    real_T Divide_l;                   // '<S153>/Divide'
    real_T Assignment1_d[36];          // '<S153>/Assignment1'
    real_T Divide1_jp;                 // '<S153>/Divide1'
    real_T Assignment2_k[4];           // '<S153>/Assignment2'
    real_T Divide2_c;                  // '<S153>/Divide2'
    real_T argX[1600];                 // '<S153>/Divide3'
    real_T TrigonometricFunction_f[1600];// '<S153>/Trigonometric Function'
    real_T Divide4_f[1600];            // '<S153>/Divide4'
    real_T TrigonometricFunction1_j[1600];// '<S153>/Trigonometric Function1'
    real_T Divide5_j[1600];            // '<S153>/Divide5'
    real_T Sum_bw[1600];               // '<S153>/Sum'
    real_T Sum1_bj;                    // '<S153>/Sum1'
    real_T Sum_bn;                     // '<S146>/Sum'
    real_T Gain3_j;                    // '<S146>/Gain3'
    real_T UnitConversion_b;           // '<S149>/Unit Conversion'
    real_T Y0;                         // '<S146>/Y0'
    real_T Assignment_i[277];          // '<S154>/Assignment'
    real_T Divide_k;                   // '<S154>/Divide'
    real_T Assignment1_c[30];          // '<S154>/Assignment1'
    real_T Divide1_if;                 // '<S154>/Divide1'
    real_T Assignment2_p[5];           // '<S154>/Assignment2'
    real_T Divide2_i;                  // '<S154>/Divide2'
    real_T argY[1275];                 // '<S154>/Divide3'
    real_T TrigonometricFunction_dw[1275];// '<S154>/Trigonometric Function'
    real_T Divide4_p[1275];            // '<S154>/Divide4'
    real_T TrigonometricFunction1_jv[1275];// '<S154>/Trigonometric Function1'
    real_T Divide5_h[1275];            // '<S154>/Divide5'
    real_T Sum_dj[1275];               // '<S154>/Sum'
    real_T Sum1_o;                     // '<S154>/Sum1'
    real_T Sum1_f5;                    // '<S146>/Sum1'
    real_T Gain4_n;                    // '<S146>/Gain4'
    real_T UnitConversion_l;           // '<S150>/Unit Conversion'
    real_T Sum7;                       // '<S146>/Sum7'
    real_T MathFunction_o;             // '<S146>/Math Function'
    real_T Sum8_k;                     // '<S146>/Sum8'
    real_T MathFunction1;              // '<S146>/Math Function1'
    real_T Sum3_jx;                    // '<S146>/Sum3'
    real_T Sum4_i;                     // '<S146>/Sum4'
    real_T Divide_m;                   // '<S146>/Divide'
    real_T Divide1_c;                  // '<S146>/Divide1'
    real_T Gain5_n;                    // '<S146>/Gain5'
    real_T Sum6_p;                     // '<S146>/Sum6'
    real_T E;                          // '<S146>/Trigonometric Function'
    real_T Sum5_a;                     // '<S146>/Sum5'
    real_T Gain1_ba;                   // '<S146>/Gain1'
    real_T d;                          // '<S146>/Sqrt'
    real_T d_j;                        // '<S146>/Trigonometric Function1'
    real_T TmpSignalConversionAtsincosInport1_d[3];
    real_T sincos_o1_d[3];             // '<S151>/sincos'
    real_T sincos_o2_e[3];             // '<S151>/sincos'
    real_T VectorConcatenate_g[9];     // '<S155>/Vector Concatenate'
    real_T Bias1_n;                    // '<S139>/Bias1'
    real_T Gain_dh;                    // '<S139>/Gain'
    real_T Sum_e3;                     // '<S139>/Sum'
    real_T Gain1_j;                    // '<S139>/Gain1'
    real_T thetaERA;                   // '<S139>/Math Function'
    real_T TmpSignalConversionAtsincosInport1_b[3];
    real_T sincos_o1_h[3];             // '<S156>/sincos'
    real_T sincos_o2_f[3];             // '<S156>/sincos'
    real_T VectorConcatenate_c[9];     // '<S157>/Vector Concatenate'
    real_T Gain_bk;                    // '<S140>/Gain'
    real_T UnitConversion_en;          // '<S158>/Unit Conversion'
    real_T TmpSignalConversionAtsincosInport1_j[3];
    real_T sincos_o1_i[3];             // '<S159>/sincos'
    real_T sincos_o2_h[3];             // '<S159>/sincos'
    real_T VectorConcatenate_b[9];     // '<S160>/Vector Concatenate'
    real_T Product_jg[9];              // '<S132>/Product'
    real_T v_pef[3];                   // '<S115>/v_pef'
    real_T Sum1_az[3];                 // '<S115>/Sum1'
    real_T Transpose1[9];              // '<S115>/Transpose1'
    real_T r_eci[3];                   // '<S115>/r_eci'
    real_T v_eci[3];                   // '<S115>/v_eci'
    real_T Sum1_ar[3];                 // '<S112>/Sum1'
    real_T UnaryMinus1_l;              // '<S215>/Unary Minus1'
    real_T Product_p;                  // '<S223>/Product'
    real_T UnaryMinus_o;               // '<S215>/Unary Minus'
    real_T Product1_nx;                // '<S223>/Product1'
    real_T Product2_jt;                // '<S223>/Product2'
    real_T UnaryMinus2_p;              // '<S215>/Unary Minus2'
    real_T Product3_ho;                // '<S223>/Product3'
    real_T Sum_jy;                     // '<S223>/Sum'
    real_T sqrt_e1;                    // '<S222>/sqrt'
    real_T Product2_ou;                // '<S218>/Product2'
    real_T Product6_o;                 // '<S219>/Product6'
    real_T Product3_l;                 // '<S218>/Product3'
    real_T Product7_ho;                // '<S219>/Product7'
    real_T Sum3_p;                     // '<S219>/Sum3'
    real_T Gain2_n;                    // '<S219>/Gain2'
    real_T Product8_a0;                // '<S219>/Product8'
    real_T Product1_ev;                // '<S218>/Product1'
    real_T Product_hlu;                // '<S219>/Product'
    real_T Product_cz;                 // '<S218>/Product'
    real_T Product1_iv;                // '<S219>/Product1'
    real_T Sum1_l;                     // '<S219>/Sum1'
    real_T Gain_m;                     // '<S219>/Gain'
    real_T Product4_b;                 // '<S219>/Product4'
    real_T Product2_j5;                // '<S219>/Product2'
    real_T Product3_pp;                // '<S219>/Product3'
    real_T Sum2_k;                     // '<S219>/Sum2'
    real_T Gain1_h;                    // '<S219>/Gain1'
    real_T Product5_j;                 // '<S219>/Product5'
    real_T Sum_jj;                     // '<S219>/Sum'
    real_T Product_oq;                 // '<S220>/Product'
    real_T Product1_h1;                // '<S220>/Product1'
    real_T Sum1_m1;                    // '<S220>/Sum1'
    real_T Gain_oe;                    // '<S220>/Gain'
    real_T Product4_ee;                // '<S220>/Product4'
    real_T Product6_b;                 // '<S220>/Product6'
    real_T Product7_pr;                // '<S220>/Product7'
    real_T Sum3_pk;                    // '<S220>/Sum3'
    real_T Gain2_nd;                   // '<S220>/Gain2'
    real_T Product8_n;                 // '<S220>/Product8'
    real_T Product2_ll;                // '<S220>/Product2'
    real_T Product3_kz;                // '<S220>/Product3'
    real_T Sum2_cw;                    // '<S220>/Sum2'
    real_T Gain1_n;                    // '<S220>/Gain1'
    real_T Product5_c;                 // '<S220>/Product5'
    real_T Sum_mk;                     // '<S220>/Sum'
    real_T Product_ed;                 // '<S221>/Product'
    real_T Product1_cd;                // '<S221>/Product1'
    real_T Sum1_fo;                    // '<S221>/Sum1'
    real_T Gain_aw;                    // '<S221>/Gain'
    real_T Product4_d;                 // '<S221>/Product4'
    real_T Product2_j4;                // '<S221>/Product2'
    real_T Product3_a;                 // '<S221>/Product3'
    real_T Sum2_js;                    // '<S221>/Sum2'
    real_T Gain1_d;                    // '<S221>/Gain1'
    real_T Product5_a;                 // '<S221>/Product5'
    real_T Product6_gn;                // '<S221>/Product6'
    real_T Product7_jo;                // '<S221>/Product7'
    real_T Sum3_e;                     // '<S221>/Sum3'
    real_T Gain2_nm;                   // '<S221>/Gain2'
    real_T Product8_m;                 // '<S221>/Product8'
    real_T Sum_fw;                     // '<S221>/Sum'
    real_T zvector[3];                 // '<S121>/Quaternion Rotation'
    real_T DotProduct_d;               // '<S121>/Dot Product'
    real_T DotProduct1;                // '<S121>/Dot Product1'
    real_T Sqrt1;                      // '<S121>/Sqrt1'
    real_T DotProduct2_k;              // '<S121>/Dot Product2'
    real_T Sqrt2;                      // '<S121>/Sqrt2'
    real_T Product_n3;                 // '<S121>/Product'
    real_T Max;                        // '<S121>/Max'
    real_T Divide_o;                   // '<S121>/Divide'
    real_T Acos;                       // '<S121>/Acos'
    real_T Gain_og;                    // '<S217>/Gain'
    real_T DotProduct2_kj;             // '<S122>/Dot Product2'
    real_T Sqrt1_p;                    // '<S122>/Sqrt1'
    real_T Divide1_d;                  // '<S122>/Divide1'
    real_T rho;                        // '<S122>/Acos'
    real_T Acos1;                      // '<S122>/Acos1'
    real_T Gain_c[3];                  // '<S122>/Gain'
    real_T DotProduct1_n;              // '<S122>/Dot Product1'
    real_T Sqrt2_i;                    // '<S122>/Sqrt2'
    real_T Max_j[3];                   // '<S122>/Max'
    real_T Divide_i[3];                // '<S122>/Divide'
    real_T Divide2_k[3];               // '<S122>/Divide2'
    real_T DotProduct3_e;              // '<S122>/Dot Product3'
    real_T RateTransition7[4];         // '<S224>/Rate Transition7'
    real_T RateTransition6[4];         // '<S224>/Rate Transition6'
    real_T TmpSignalConversionAtVRSinkInport3[3];// '<S224>/Satellite Model Scaling' 
    real_T RateTransition3[3];         // '<S224>/Rate Transition3'
    real_T RateTransition5[3];         // '<S224>/Rate Transition5'
    real_T RateTransition1[3];         // '<S224>/Rate Transition1'
    real_T RateTransition2[4];         // '<S224>/Rate Transition2'
    real_T RateTransition4[3];         // '<S224>/Rate Transition4'
    real_T kxj_b;                      // '<S278>/k x j'
    real_T jxi_k;                      // '<S278>/j x i'
    real_T ixk_h;                      // '<S278>/i x k'
    real_T kxi_o;                      // '<S277>/k x i'
    real_T jxk_d;                      // '<S277>/j x k'
    real_T ixj_a;                      // '<S277>/i x j'
    real_T Sum_hu[3];                  // '<S272>/Sum'
    real_T Reshape[9];                 // '<S208>/Reshape'
    real_T Product_oa;                 // '<S208>/Product'
    real_T Product1_le;                // '<S208>/Product1'
    real_T Product2_fsj;               // '<S208>/Product2'
    real_T Product3_hk;                // '<S208>/Product3'
    real_T Product4_p;                 // '<S208>/Product4'
    real_T Product5_cd;                // '<S208>/Product5'
    real_T detMatrix;                  // '<S208>/Sum'
    real_T Bias_b;                     // '<S202>/Bias'
    real_T Abs1_f;                     // '<S202>/Abs1'
    real_T MathFunction_j5[9];         // '<S201>/Math Function'
    real_T Product_f0[9];              // '<S201>/Product'
    real_T Bias1_a[9];                 // '<S201>/Bias1'
    real_T Abs2[9];                    // '<S201>/Abs2'
    real_T Add_o;                      // '<S184>/Add'
    real_T sqrt_p;                     // '<S176>/sqrt'
    real_T Switch[2];                  // '<S183>/Switch'
    real_T Product_k;                  // '<S183>/Product'
    real_T Add_l;                      // '<S182>/Add'
    real_T Add_h;                      // '<S180>/Add'
    real_T Add_f;                      // '<S181>/Add'
    real_T Product_cf[3];              // '<S176>/Product'
    real_T Add_fq;                     // '<S194>/Add'
    real_T sqrt_i;                     // '<S178>/sqrt'
    real_T Add_ms;                     // '<S190>/Add'
    real_T Add_a;                      // '<S191>/Add'
    real_T Add_k;                      // '<S192>/Add'
    real_T Switch_e[2];                // '<S193>/Switch'
    real_T Product_kh;                 // '<S193>/Product'
    real_T Product_gp[3];              // '<S178>/Product'
    real_T Add_j;                      // '<S189>/Add'
    real_T sqrt_ee;                    // '<S177>/sqrt'
    real_T Add_c;                      // '<S187>/Add'
    real_T Add_g;                      // '<S186>/Add'
    real_T Add_g4;                     // '<S185>/Add'
    real_T Switch_j[2];                // '<S188>/Switch'
    real_T Product_ik;                 // '<S188>/Product'
    real_T Product_ig[3];              // '<S177>/Product'
    real_T Sum_ob;                     // '<S173>/Sum'
    real_T sqrt_a;                     // '<S173>/sqrt'
    real_T Gain1_g;                    // '<S173>/Gain1'
    real_T Add_b;                      // '<S196>/Add'
    real_T Add_i;                      // '<S195>/Add'
    real_T Add_c4;                     // '<S197>/Add'
    real_T ForIterator;                // '<S64>/For Iterator'
    real_T twot;                       // '<S64>/Gain'
    real_T VectorConcatenate_gb[11];   // '<S64>/Vector Concatenate'
    real_T ncm;                        // '<S60>/ncm'
    real_T SumofElements;              // '<S60>/Sum of Elements'
    real_T Assignment_m[3];            // '<S60>/Assignment'
    real_T ncf;                        // '<S61>/ncf'
    real_T Selector1;                  // '<S61>/Selector1'
    real_T Bias_d;                     // '<S61>/Bias'
    real_T Divide_ov;                  // '<S61>/Divide'
    real_T Bias1_e;                    // '<S61>/Bias1'
    real_T Divide1_b;                  // '<S61>/Divide1'
    real_T Sum_mw;                     // '<S61>/Sum'
    real_T Selector;                   // '<S61>/Selector'
    real_T Divide2_a;                  // '<S61>/Divide2'
    real_T Assignment_d[11];           // '<S61>/Assignment'
    real_T VectorConcatenate_p[11];    // '<S59>/Vector Concatenate'
    real_T UnitDelay1[11];             // '<S59>/Unit Delay1'
    real_T Switch_l[11];               // '<S59>/Switch'
    real_T crlonm1;                    // '<S59>/crlon[m-1]'
    real_T Gain_e;                     // '<S59>/Gain'
    real_T Product_ic;                 // '<S59>/Product'
    real_T crlonm11;                   // '<S59>/crlon[m-1]1'
    real_T Sum_ni;                     // '<S59>/Sum'
    real_T Assignment_is[11];          // '<S59>/Assignment'
    real_T ncm_f;                      // '<S42>/ncm'
    real_T SumofElements_e;            // '<S42>/Sum of Elements'
    real_T Assignment_d3[3];           // '<S42>/Assignment'
    real_T ncf_h;                      // '<S43>/ncf'
    real_T Selector1_c;                // '<S43>/Selector1'
    real_T Bias_a;                     // '<S43>/Bias'
    real_T Divide_gq;                  // '<S43>/Divide'
    real_T Bias1_p;                    // '<S43>/Bias1'
    real_T Divide1_jh;                 // '<S43>/Divide1'
    real_T Sum_ap;                     // '<S43>/Sum'
    real_T Selector_k;                 // '<S43>/Selector'
    real_T Divide2_ok;                 // '<S43>/Divide2'
    real_T Assignment_n[13];           // '<S43>/Assignment'
    real_T Assignment_c[13];           // '<S41>/Assignment'
    real_T ncm_i;                      // '<S31>/ncm'
    real_T SumofElements_a;            // '<S31>/Sum of Elements'
    real_T Assignment_g[3];            // '<S31>/Assignment'
    real_T ncf_hr;                     // '<S32>/ncf'
    real_T Selector1_o;                // '<S32>/Selector1'
    real_T Bias_ji;                    // '<S32>/Bias'
    real_T Divide_a4;                  // '<S32>/Divide'
    real_T Bias1_nc;                   // '<S32>/Bias1'
    real_T Divide1_cr;                 // '<S32>/Divide1'
    real_T Sum_ip;                     // '<S32>/Sum'
    real_T Selector_f;                 // '<S32>/Selector'
    real_T Divide2_l;                  // '<S32>/Divide2'
    real_T Assignment_pv[13];          // '<S32>/Assignment'
    real_T Assignment_d4[13];          // '<S30>/Assignment'
    int32_T ncm_ig;                    // '<S65>/ncm'
    int32_T ForIterator_f;             // '<S66>/For Iterator'
    int32_T ForIterator_h;             // '<S59>/For Iterator'
    int32_T Bias2_i;                   // '<S59>/Bias2'
    int32_T Bias3_i;                   // '<S59>/Bias3'
    int32_T Bias4;                     // '<S59>/Bias4'
    boolean_T Compare;                 // '<S274>/Compare'
    boolean_T SunInView;               // '<S111>/Unit Delay'
    boolean_T InSunView;               // '<S122>/In Sun View'
    boolean_T Compare_g;               // '<S209>/Compare'
    boolean_T Compare_j[9];            // '<S207>/Compare'
    boolean_T LogicalOperator1;        // '<S201>/Logical Operator1'
    B_ForIteratorSubsystem_asbCubeSat_j_T ForIteratorSubsystem_l;// '<S45>/For Iterator Subsystem' 
    B_ForIteratorSubsystem_asbCubeSat_n_T ForIteratorSubsystem_m;// '<S44>/For Iterator Subsystem' 
    B_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem_o;// '<S38>/For Iterator Subsystem' 
    B_ForIteratorSubsystem_asbCubeSat_j_T ForIteratorSubsystem_e;// '<S34>/For Iterator Subsystem' 
    B_ForIteratorSubsystem_asbCubeSat_n_T ForIteratorSubsystem_k;// '<S33>/For Iterator Subsystem' 
    B_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem;// '<S27>/For Iterator Subsystem' 
  };

  // Block states (default storage) for system '<Root>'
  struct DW_asbCubeSat_T {
    real_T UnitDelay_DSTATE[3];        // '<S227>/Unit Delay'
    real_T UnitDelay_1_DSTATE;         // '<S111>/Unit Delay'
    real_T UnitDelay_10_DSTATE;        // '<S111>/Unit Delay'
    real_T UnitDelay_2_DSTATE[3];      // '<S111>/Unit Delay'
    real_T UnitDelay_3_DSTATE[3];      // '<S111>/Unit Delay'
    real_T UnitDelay_4_DSTATE[3];      // '<S111>/Unit Delay'
    real_T UnitDelay_5_DSTATE[3];      // '<S111>/Unit Delay'
    real_T UnitDelay_6_DSTATE[4];      // '<S111>/Unit Delay'
    real_T UnitDelay_7_DSTATE[4];      // '<S111>/Unit Delay'
    real_T UnitDelay_8_DSTATE[3];      // '<S111>/Unit Delay'
    real_T UnitDelay_9_DSTATE[3];      // '<S111>/Unit Delay'
    real_T UnitDelay1_DSTATE[11];      // '<S59>/Unit Delay1'
    real_T SpacecraftDynamics_DWORK2[3];// '<S112>/Spacecraft Dynamics'
    real_T SpacecraftDynamics_DWORK3[3];// '<S112>/Spacecraft Dynamics'
    real_T RateTransition1_Buffer[3];  // '<S224>/Rate Transition1'
    real_T RateTransition2_Buffer[4];  // '<S224>/Rate Transition2'
    real_T RateTransition3_Buffer[3];  // '<S224>/Rate Transition3'
    real_T RateTransition4_Buffer[3];  // '<S224>/Rate Transition4'
    real_T RateTransition5_Buffer[3];  // '<S224>/Rate Transition5'
    real_T RateTransition6_Buffer[4];  // '<S224>/Rate Transition6'
    real_T RateTransition7_Buffer[4];  // '<S224>/Rate Transition7'
    real_T Product_DWORK1[9];          // '<S132>/Product'
    struct {
      void *TimePtr;
      void *DataPtr;
      void *RSimInfoPtr;
    } fromWS_Signal1_PWORK;            // '<S69>/fromWS_Signal 1'

    void *VRSink_PWORK[25];            // '<S224>/VR Sink'
    struct {
      int_T PrevIndex;
    } fromWS_Signal1_IWORK;            // '<S69>/fromWS_Signal 1'

    boolean_T UnitDelay_11_DSTATE;     // '<S111>/Unit Delay'
    int8_T If_ActiveSubsystem;         // '<S118>/If'
    int8_T If1_ActiveSubsystem;        // '<S20>/If1'
    int8_T If2_ActiveSubsystem;        // '<S22>/If2'
    int8_T If_ActiveSubsystem_d;       // '<S273>/If'
    int8_T If_ActiveSubsystem_p;       // '<S133>/If'
    int8_T If_ActiveSubsystem_m;       // '<S141>/If'
    int8_T If1_ActiveSubsystem_f;      // '<S174>/If1'
    int8_T FindMaximumDiagonalValue_ActiveSubsystem;// '<S172>/Find Maximum Diagonal Value' 
    boolean_T SpacecraftDynamics_DWORK1;// '<S112>/Spacecraft Dynamics'
    DW_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem_o;// '<S38>/For Iterator Subsystem' 
    DW_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem;// '<S27>/For Iterator Subsystem' 
  };

  // Continuous states (default storage)
  struct X_asbCubeSat_T {
    real_T SpacecraftDynamics_CSTATE[13];// '<S112>/Spacecraft Dynamics'
  };

  // State derivatives (default storage)
  struct XDot_asbCubeSat_T {
    real_T SpacecraftDynamics_CSTATE[13];// '<S112>/Spacecraft Dynamics'
  };

  // State disabled
  struct XDis_asbCubeSat_T {
    boolean_T SpacecraftDynamics_CSTATE[13];// '<S112>/Spacecraft Dynamics'
  };

  // Invariant block signals (default storage)
  struct ConstB_asbCubeSat_T {
    real_T Gain1;                      // '<S226>/Gain1'
    real_T Gain2;                      // '<S226>/Gain2'
    real_T TrigonometricFunction;      // '<S226>/Trigonometric Function'
    real_T Product;                    // '<S226>/Product'
    real_T ScaleModelToVRML;           // '<S239>/ScaleModelToVRML'
    real_T gain;                       // '<S226>/gain'
    real_T Sum1;                       // '<S226>/Sum1'
    real_T DotProduct1;                // '<S273>/Dot Product1'
    real_T DotProduct1_m;              // '<S234>/Dot Product1'
    real_T Gain;                       // '<S275>/Gain'
    real_T Gain2_a;                    // '<S275>/Gain2'
    real_T Switch3[3];                 // '<S275>/Switch3'
    real_T ixj;                        // '<S283>/i x j'
    real_T jxk;                        // '<S283>/j x k'
    real_T kxi;                        // '<S283>/k x i'
    real_T ixk;                        // '<S284>/i x k'
    real_T jxi;                        // '<S284>/j x i'
    real_T kxj;                        // '<S284>/k x j'
    real_T Sum[3];                     // '<S282>/Sum'
    real_T DataTypeConversion;         // '<S237>/Data Type Conversion'
    real_T Gain_b;                     // '<S237>/Gain'
    real_T Add;                        // '<S237>/Add'
    real_T mtoVRML[3];                 // '<S224>/m to VRML'
    real_T Bias1;                      // '<S27>/Bias1'
    real_T Bias1_k;                    // '<S33>/Bias1'
    real_T Bias1_i;                    // '<S38>/Bias1'
    real_T Bias1_m;                    // '<S44>/Bias1'
    real_T RoundingFunction;           // '<S53>/Rounding Function'
    real_T Sum_p;                      // '<S53>/Sum'
    real_T Bias1_i2;                   // '<S56>/Bias1'
    real_T Bias1_e;                    // '<S62>/Bias1'
    real_T Bias;                       // '<S115>/Bias'
    real_T Divide;                     // '<S115>/Divide'
    real_T Sum1_g;                     // '<S131>/Sum1'
    real_T Bias_h;                     // '<S131>/Bias'
    real_T secGain;                    // '<S131>/secGain'
    real_T Selector[528];              // '<S152>/Selector'
    real_T Selector1[66];              // '<S152>/Selector1'
    real_T Selector2[66];              // '<S152>/Selector2'
    real_T Selector_n[22400];          // '<S153>/Selector'
    real_T Selector1_m[1600];          // '<S153>/Selector1'
    real_T Selector2_d[1600];          // '<S153>/Selector2'
    real_T Selector_h[17850];          // '<S154>/Selector'
    real_T Selector1_l[1275];          // '<S154>/Selector1'
    real_T Selector2_p[1275];          // '<S154>/Selector2'
    real_T Gain1_m[2];                 // '<S140>/Gain1'
    real_T Sum2[3];                    // '<S112>/Sum2'
    boolean_T xz;                      // '<S275>/x>z'
    boolean_T Compare;                 // '<S297>/Compare'
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
  static void terminate();

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

  // private member function(s) for subsystem '<S27>/For Iterator Subsystem'
  static void asbCubeSat_ForIteratorSubsystem(real_T rtu_ncf2, real_T rtu_tc,
    real_T rty_pci[13], B_ForIteratorSubsystem_asbCubeSat_T *localB,
    DW_ForIteratorSubsystem_asbCubeSat_T *localDW);

  // private member function(s) for subsystem '<S33>/For Iterator Subsystem'
  static void asbCubeSat_ForIteratorSubsystem_k(real_T rtu_ncf3, real_T rtu_tc,
    B_ForIteratorSubsystem_asbCubeSat_n_T *localB);

  // private member function(s) for subsystem '<S34>/For Iterator Subsystem'
  static void asbCubeSat_ForIteratorSubsystem_e
    (B_ForIteratorSubsystem_asbCubeSat_j_T *localB);

  // private member function(s) for subsystem '<S133>/If Action Subsystem'
  static void asbCubeSat_IfActionSubsystem(real_T rtu_yin, real_T rtu_min,
    real_T *rty_yout, real_T *rty_mout);

  // private member function(s) for subsystem '<S133>/If Action Subsystem1'
  static void asbCubeSat_IfActionSubsystem1(real_T rtu_yin, real_T rtu_min,
    real_T *rty_yout, real_T *rty_mout);

  // Continuous states update member function
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  // Derivatives member function
  void asbCubeSat_derivatives();

  // Projection member function
  void asbCubeSat_projection();

  // model instance variable for '<S113>/Attitude Control System'
  asbCubeSatACS Attitude_Control_SystemMDLOBJ1;

  // Real-Time Model
  RT_MODEL_asbCubeSat_T asbCubeSat_M;
};

extern const asbCubeSat::ConstB_asbCubeSat_T asbCubeSat_ConstB;// constant block i/o 

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S23>/Divide1' : Unused code path elimination
//  Block '<S29>/Constant' : Unused code path elimination
//  Block '<S29>/Divide' : Unused code path elimination
//  Block '<S29>/Divide1' : Unused code path elimination
//  Block '<S29>/Gain1' : Unused code path elimination
//  Block '<S35>/Add' : Unused code path elimination
//  Block '<S35>/Assignment' : Unused code path elimination
//  Block '<S35>/Bias1' : Unused code path elimination
//  Block '<S35>/Bias2' : Unused code path elimination
//  Block '<S35>/Bias3' : Unused code path elimination
//  Block '<S35>/Bias4' : Unused code path elimination
//  Block '<S35>/Gain2' : Unused code path elimination
//  Block '<S35>/Product' : Unused code path elimination
//  Block '<S35>/Switch' : Unused code path elimination
//  Block '<S35>/Unit Delay1' : Unused code path elimination
//  Block '<S35>/crlon[m-1]' : Unused code path elimination
//  Block '<S35>/crlon[m-1]1' : Unused code path elimination
//  Block '<S35>/crlon[m-1]2' : Unused code path elimination
//  Block '<S36>/Assignment' : Unused code path elimination
//  Block '<S36>/Constant' : Unused code path elimination
//  Block '<S37>/Assignment' : Unused code path elimination
//  Block '<S37>/Bias' : Unused code path elimination
//  Block '<S37>/Bias1' : Unused code path elimination
//  Block '<S37>/Bias2' : Unused code path elimination
//  Block '<S37>/Constant' : Unused code path elimination
//  Block '<S37>/Constant1' : Unused code path elimination
//  Block '<S37>/Constant2' : Unused code path elimination
//  Block '<S37>/Divide' : Unused code path elimination
//  Block '<S37>/Divide1' : Unused code path elimination
//  Block '<S37>/Divide2' : Unused code path elimination
//  Block '<S37>/Selector' : Unused code path elimination
//  Block '<S37>/Selector1' : Unused code path elimination
//  Block '<S37>/Sum' : Unused code path elimination
//  Block '<S37>/Sum1' : Unused code path elimination
//  Block '<S36>/Sum of Elements' : Unused code path elimination
//  Block '<S23>/Sum1' : Unused code path elimination
//  Block '<S40>/Constant' : Unused code path elimination
//  Block '<S40>/Divide' : Unused code path elimination
//  Block '<S40>/Divide1' : Unused code path elimination
//  Block '<S40>/Gain1' : Unused code path elimination
//  Block '<S46>/Add' : Unused code path elimination
//  Block '<S46>/Assignment' : Unused code path elimination
//  Block '<S46>/Bias1' : Unused code path elimination
//  Block '<S46>/Bias2' : Unused code path elimination
//  Block '<S46>/Bias3' : Unused code path elimination
//  Block '<S46>/Bias4' : Unused code path elimination
//  Block '<S46>/Gain2' : Unused code path elimination
//  Block '<S46>/Product' : Unused code path elimination
//  Block '<S46>/Switch' : Unused code path elimination
//  Block '<S46>/Unit Delay1' : Unused code path elimination
//  Block '<S46>/crlon[m-1]' : Unused code path elimination
//  Block '<S46>/crlon[m-1]1' : Unused code path elimination
//  Block '<S46>/crlon[m-1]2' : Unused code path elimination
//  Block '<S47>/Assignment' : Unused code path elimination
//  Block '<S47>/Constant' : Unused code path elimination
//  Block '<S48>/Assignment' : Unused code path elimination
//  Block '<S48>/Bias' : Unused code path elimination
//  Block '<S48>/Bias1' : Unused code path elimination
//  Block '<S48>/Bias2' : Unused code path elimination
//  Block '<S48>/Constant' : Unused code path elimination
//  Block '<S48>/Constant1' : Unused code path elimination
//  Block '<S48>/Constant2' : Unused code path elimination
//  Block '<S48>/Divide' : Unused code path elimination
//  Block '<S48>/Divide1' : Unused code path elimination
//  Block '<S48>/Divide2' : Unused code path elimination
//  Block '<S48>/Selector' : Unused code path elimination
//  Block '<S48>/Selector1' : Unused code path elimination
//  Block '<S48>/Sum' : Unused code path elimination
//  Block '<S48>/Sum1' : Unused code path elimination
//  Block '<S47>/Sum of Elements' : Unused code path elimination
//  Block '<S19>/Assertion' : Unused code path elimination
//  Block '<S19>/Constant1' : Unused code path elimination
//  Block '<S19>/Data Type Conversion' : Unused code path elimination
//  Block '<S19>/Logical Operator' : Unused code path elimination
//  Block '<S19>/Relational Operator' : Unused code path elimination
//  Block '<S19>/Relational Operator1' : Unused code path elimination
//  Block '<S11>/Divide1' : Unused code path elimination
//  Block '<S49>/Assertion' : Unused code path elimination
//  Block '<S49>/Constant1' : Unused code path elimination
//  Block '<S49>/Data Type Conversion' : Unused code path elimination
//  Block '<S49>/Logical Operator' : Unused code path elimination
//  Block '<S49>/Relational Operator' : Unused code path elimination
//  Block '<S49>/Relational Operator1' : Unused code path elimination
//  Block '<S20>/Sum4' : Unused code path elimination
//  Block '<S11>/Sum1' : Unused code path elimination
//  Block '<S58>/Constant' : Unused code path elimination
//  Block '<S58>/Divide' : Unused code path elimination
//  Block '<S58>/Divide1' : Unused code path elimination
//  Block '<S58>/Gain1' : Unused code path elimination
//  Block '<S64>/Add' : Unused code path elimination
//  Block '<S64>/Assignment' : Unused code path elimination
//  Block '<S64>/Bias1' : Unused code path elimination
//  Block '<S64>/Bias2' : Unused code path elimination
//  Block '<S64>/Bias3' : Unused code path elimination
//  Block '<S64>/Bias4' : Unused code path elimination
//  Block '<S64>/Gain2' : Unused code path elimination
//  Block '<S64>/Product' : Unused code path elimination
//  Block '<S64>/Switch' : Unused code path elimination
//  Block '<S64>/Unit Delay1' : Unused code path elimination
//  Block '<S64>/crlon[m-1]' : Unused code path elimination
//  Block '<S64>/crlon[m-1]1' : Unused code path elimination
//  Block '<S64>/crlon[m-1]2' : Unused code path elimination
//  Block '<S65>/Assignment' : Unused code path elimination
//  Block '<S65>/Constant' : Unused code path elimination
//  Block '<S66>/Assignment' : Unused code path elimination
//  Block '<S66>/Bias' : Unused code path elimination
//  Block '<S66>/Bias1' : Unused code path elimination
//  Block '<S66>/Bias2' : Unused code path elimination
//  Block '<S66>/Constant' : Unused code path elimination
//  Block '<S66>/Constant1' : Unused code path elimination
//  Block '<S66>/Constant2' : Unused code path elimination
//  Block '<S66>/Divide' : Unused code path elimination
//  Block '<S66>/Divide1' : Unused code path elimination
//  Block '<S66>/Divide2' : Unused code path elimination
//  Block '<S66>/Selector' : Unused code path elimination
//  Block '<S66>/Selector1' : Unused code path elimination
//  Block '<S66>/Sum' : Unused code path elimination
//  Block '<S66>/Sum1' : Unused code path elimination
//  Block '<S65>/Sum of Elements' : Unused code path elimination
//  Block '<S4>/Approx ECI PosVel' : Unused code path elimination
//  Block '<S4>/ECEF PosVel' : Unused code path elimination
//  Block '<S82>/i x j' : Unused code path elimination
//  Block '<S82>/j x k' : Unused code path elimination
//  Block '<S82>/k x i' : Unused code path elimination
//  Block '<S83>/i x k' : Unused code path elimination
//  Block '<S83>/j x i' : Unused code path elimination
//  Block '<S83>/k x j' : Unused code path elimination
//  Block '<S76>/Sum' : Unused code path elimination
//  Block '<S70>/Constant4' : Unused code path elimination
//  Block '<S77>/Divide' : Unused code path elimination
//  Block '<S77>/Divide1' : Unused code path elimination
//  Block '<S77>/Divide2' : Unused code path elimination
//  Block '<S77>/Divide3' : Unused code path elimination
//  Block '<S84>/Unary Minus' : Unused code path elimination
//  Block '<S84>/Unary Minus1' : Unused code path elimination
//  Block '<S84>/Unary Minus2' : Unused code path elimination
//  Block '<S85>/Product' : Unused code path elimination
//  Block '<S85>/Product1' : Unused code path elimination
//  Block '<S85>/Product2' : Unused code path elimination
//  Block '<S85>/Product3' : Unused code path elimination
//  Block '<S85>/Sum' : Unused code path elimination
//  Block '<S86>/Product' : Unused code path elimination
//  Block '<S86>/Product1' : Unused code path elimination
//  Block '<S86>/Product2' : Unused code path elimination
//  Block '<S86>/Product3' : Unused code path elimination
//  Block '<S91>/Product' : Unused code path elimination
//  Block '<S91>/Product1' : Unused code path elimination
//  Block '<S91>/Product2' : Unused code path elimination
//  Block '<S91>/Product3' : Unused code path elimination
//  Block '<S91>/Sum' : Unused code path elimination
//  Block '<S90>/sqrt' : Unused code path elimination
//  Block '<S87>/Constant' : Unused code path elimination
//  Block '<S87>/Gain' : Unused code path elimination
//  Block '<S87>/Gain1' : Unused code path elimination
//  Block '<S87>/Gain2' : Unused code path elimination
//  Block '<S87>/Product' : Unused code path elimination
//  Block '<S87>/Product1' : Unused code path elimination
//  Block '<S87>/Product2' : Unused code path elimination
//  Block '<S87>/Product3' : Unused code path elimination
//  Block '<S87>/Product4' : Unused code path elimination
//  Block '<S87>/Product5' : Unused code path elimination
//  Block '<S87>/Product6' : Unused code path elimination
//  Block '<S87>/Product7' : Unused code path elimination
//  Block '<S87>/Product8' : Unused code path elimination
//  Block '<S87>/Sum' : Unused code path elimination
//  Block '<S87>/Sum1' : Unused code path elimination
//  Block '<S87>/Sum2' : Unused code path elimination
//  Block '<S87>/Sum3' : Unused code path elimination
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
//  Block '<S92>/Product' : Unused code path elimination
//  Block '<S92>/Product1' : Unused code path elimination
//  Block '<S92>/Product2' : Unused code path elimination
//  Block '<S92>/Product3' : Unused code path elimination
//  Block '<S97>/Product' : Unused code path elimination
//  Block '<S97>/Product1' : Unused code path elimination
//  Block '<S97>/Product2' : Unused code path elimination
//  Block '<S97>/Product3' : Unused code path elimination
//  Block '<S97>/Sum' : Unused code path elimination
//  Block '<S96>/sqrt' : Unused code path elimination
//  Block '<S93>/Constant' : Unused code path elimination
//  Block '<S93>/Gain' : Unused code path elimination
//  Block '<S93>/Gain1' : Unused code path elimination
//  Block '<S93>/Gain2' : Unused code path elimination
//  Block '<S93>/Product' : Unused code path elimination
//  Block '<S93>/Product1' : Unused code path elimination
//  Block '<S93>/Product2' : Unused code path elimination
//  Block '<S93>/Product3' : Unused code path elimination
//  Block '<S93>/Product4' : Unused code path elimination
//  Block '<S93>/Product5' : Unused code path elimination
//  Block '<S93>/Product6' : Unused code path elimination
//  Block '<S93>/Product7' : Unused code path elimination
//  Block '<S93>/Product8' : Unused code path elimination
//  Block '<S93>/Sum' : Unused code path elimination
//  Block '<S93>/Sum1' : Unused code path elimination
//  Block '<S93>/Sum2' : Unused code path elimination
//  Block '<S93>/Sum3' : Unused code path elimination
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
//  Block '<S98>/Product' : Unused code path elimination
//  Block '<S98>/Product1' : Unused code path elimination
//  Block '<S98>/Product2' : Unused code path elimination
//  Block '<S98>/Product3' : Unused code path elimination
//  Block '<S103>/Product' : Unused code path elimination
//  Block '<S103>/Product1' : Unused code path elimination
//  Block '<S103>/Product2' : Unused code path elimination
//  Block '<S103>/Product3' : Unused code path elimination
//  Block '<S103>/Sum' : Unused code path elimination
//  Block '<S102>/sqrt' : Unused code path elimination
//  Block '<S99>/Constant' : Unused code path elimination
//  Block '<S99>/Gain' : Unused code path elimination
//  Block '<S99>/Gain1' : Unused code path elimination
//  Block '<S99>/Gain2' : Unused code path elimination
//  Block '<S99>/Product' : Unused code path elimination
//  Block '<S99>/Product1' : Unused code path elimination
//  Block '<S99>/Product2' : Unused code path elimination
//  Block '<S99>/Product3' : Unused code path elimination
//  Block '<S99>/Product4' : Unused code path elimination
//  Block '<S99>/Product5' : Unused code path elimination
//  Block '<S99>/Product6' : Unused code path elimination
//  Block '<S99>/Product7' : Unused code path elimination
//  Block '<S99>/Product8' : Unused code path elimination
//  Block '<S99>/Sum' : Unused code path elimination
//  Block '<S99>/Sum1' : Unused code path elimination
//  Block '<S99>/Sum2' : Unused code path elimination
//  Block '<S99>/Sum3' : Unused code path elimination
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
//  Block '<S104>/Product' : Unused code path elimination
//  Block '<S104>/Product1' : Unused code path elimination
//  Block '<S104>/Product2' : Unused code path elimination
//  Block '<S104>/Product3' : Unused code path elimination
//  Block '<S109>/Product' : Unused code path elimination
//  Block '<S109>/Product1' : Unused code path elimination
//  Block '<S109>/Product2' : Unused code path elimination
//  Block '<S109>/Product3' : Unused code path elimination
//  Block '<S109>/Sum' : Unused code path elimination
//  Block '<S108>/sqrt' : Unused code path elimination
//  Block '<S105>/Constant' : Unused code path elimination
//  Block '<S105>/Gain' : Unused code path elimination
//  Block '<S105>/Gain1' : Unused code path elimination
//  Block '<S105>/Gain2' : Unused code path elimination
//  Block '<S105>/Product' : Unused code path elimination
//  Block '<S105>/Product1' : Unused code path elimination
//  Block '<S105>/Product2' : Unused code path elimination
//  Block '<S105>/Product3' : Unused code path elimination
//  Block '<S105>/Product4' : Unused code path elimination
//  Block '<S105>/Product5' : Unused code path elimination
//  Block '<S105>/Product6' : Unused code path elimination
//  Block '<S105>/Product7' : Unused code path elimination
//  Block '<S105>/Product8' : Unused code path elimination
//  Block '<S105>/Sum' : Unused code path elimination
//  Block '<S105>/Sum1' : Unused code path elimination
//  Block '<S105>/Sum2' : Unused code path elimination
//  Block '<S105>/Sum3' : Unused code path elimination
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
//  Block '<S70>/Sum' : Unused code path elimination
//  Block '<S4>/Geodetic LatLonAlt' : Unused code path elimination
//  Block '<S71>/Unit Conversion' : Unused code path elimination
//  Block '<S72>/Unit Conversion' : Unused code path elimination
//  Block '<S73>/Unit Conversion' : Unused code path elimination
//  Block '<S74>/Unit Conversion' : Unused code path elimination
//  Block '<S75>/Unit Conversion' : Unused code path elimination
//  Block '<S130>/Assertion' : Unused code path elimination
//  Block '<S130>/Constant1' : Unused code path elimination
//  Block '<S130>/Data Type Conversion' : Unused code path elimination
//  Block '<S130>/Logical Operator' : Unused code path elimination
//  Block '<S130>/Relational Operator' : Unused code path elimination
//  Block '<S130>/Relational Operator1' : Unused code path elimination
//  Block '<S134>/Assertion' : Unused code path elimination
//  Block '<S134>/Constant1' : Unused code path elimination
//  Block '<S134>/Data Type Conversion' : Unused code path elimination
//  Block '<S134>/Logical Operator' : Unused code path elimination
//  Block '<S134>/Relational Operator' : Unused code path elimination
//  Block '<S134>/Relational Operator1' : Unused code path elimination
//  Block '<S142>/Assertion' : Unused code path elimination
//  Block '<S142>/Constant1' : Unused code path elimination
//  Block '<S142>/Data Type Conversion' : Unused code path elimination
//  Block '<S142>/Logical Operator' : Unused code path elimination
//  Block '<S142>/Relational Operator' : Unused code path elimination
//  Block '<S142>/Relational Operator1' : Unused code path elimination
//  Block '<S199>/Constant1' : Unused code path elimination
//  Block '<S203>/Assertion' : Unused code path elimination
//  Block '<S204>/Assertion' : Unused code path elimination
//  Block '<S200>/Constant1' : Unused code path elimination
//  Block '<S205>/Assertion' : Unused code path elimination
//  Block '<S206>/Assertion' : Unused code path elimination
//  Block '<S1>/Enable custom gravity calculation' : Eliminated due to constant selection input
//  Block '<S1>/Reshape' : Reshape block reduction
//  Block '<S114>/Gain' : Eliminated nontunable gain of 1
//  Block '<S129>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S133>/BiasYear' : Eliminated nontunable bias of 0
//  Block '<S125>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S125>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S125>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S125>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S125>/Data Type Conversion5' : Eliminate redundant data type conversion
//  Block '<S125>/Data Type Conversion6' : Eliminate redundant data type conversion
//  Block '<S141>/BiasYear' : Eliminated nontunable bias of 0
//  Block '<S155>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S157>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S160>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S171>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S118>/Reshape 3x3 -> 9' : Reshape block reduction
//  Block '<S201>/Reshape' : Reshape block reduction
//  Block '<S214>/Reshape (9) to [3x3] column-major' : Reshape block reduction
//  Block '<S12>/i x j' : Unused code path elimination
//  Block '<S12>/j x k' : Unused code path elimination
//  Block '<S12>/k x i' : Unused code path elimination
//  Block '<S13>/i x k' : Unused code path elimination
//  Block '<S13>/j x i' : Unused code path elimination
//  Block '<S13>/k x j' : Unused code path elimination
//  Block '<S7>/Sum' : Unused code path elimination
//  Block '<S14>/i x j' : Unused code path elimination
//  Block '<S14>/j x k' : Unused code path elimination
//  Block '<S14>/k x i' : Unused code path elimination
//  Block '<S15>/i x k' : Unused code path elimination
//  Block '<S15>/j x i' : Unused code path elimination
//  Block '<S15>/k x j' : Unused code path elimination
//  Block '<S8>/Sum' : Unused code path elimination
//  Block '<S16>/i x j' : Unused code path elimination
//  Block '<S16>/j x k' : Unused code path elimination
//  Block '<S16>/k x i' : Unused code path elimination
//  Block '<S17>/i x k' : Unused code path elimination
//  Block '<S17>/j x i' : Unused code path elimination
//  Block '<S17>/k x j' : Unused code path elimination
//  Block '<S9>/Sum' : Unused code path elimination
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
//  '<S5>'   : 'asbCubeSat/Vehicle Model'
//  '<S6>'   : 'asbCubeSat/Visualization'
//  '<S7>'   : 'asbCubeSat/Enviroment Models/3x3 Cross Product1'
//  '<S8>'   : 'asbCubeSat/Enviroment Models/3x3 Cross Product2'
//  '<S9>'   : 'asbCubeSat/Enviroment Models/3x3 Cross Product3'
//  '<S10>'  : 'asbCubeSat/Enviroment Models/Length Conversion'
//  '<S11>'  : 'asbCubeSat/Enviroment Models/Sun Position'
//  '<S12>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product1/Subsystem'
//  '<S13>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product1/Subsystem1'
//  '<S14>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product2/Subsystem'
//  '<S15>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product2/Subsystem1'
//  '<S16>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product3/Subsystem'
//  '<S17>'  : 'asbCubeSat/Enviroment Models/3x3 Cross Product3/Subsystem1'
//  '<S18>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center'
//  '<S19>'  : 'asbCubeSat/Enviroment Models/Sun Position/Check Epoch'
//  '<S20>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register'
//  '<S21>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target'
//  '<S22>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units'
//  '<S23>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth'
//  '<S24>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp'
//  '<S25>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon'
//  '<S26>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp'
//  '<S27>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/for pc'
//  '<S28>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position'
//  '<S29>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity'
//  '<S30>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/for pc/For Iterator Subsystem'
//  '<S31>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position/For Iterator Subsystem'
//  '<S32>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
//  '<S33>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for vc'
//  '<S34>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity'
//  '<S35>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for vc/For Iterator Subsystem'
//  '<S36>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity/For Iterator Subsystem'
//  '<S37>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/Earth/Moon/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
//  '<S38>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/for pc'
//  '<S39>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position'
//  '<S40>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity'
//  '<S41>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/for pc/For Iterator Subsystem'
//  '<S42>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position/For Iterator Subsystem'
//  '<S43>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
//  '<S44>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for vc'
//  '<S45>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity'
//  '<S46>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for vc/For Iterator Subsystem'
//  '<S47>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity/For Iterator Subsystem'
//  '<S48>'  : 'asbCubeSat/Enviroment Models/Sun Position/Center/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
//  '<S49>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/Check epoch'
//  '<S50>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/If Action Subsystem4'
//  '<S51>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/If Action Subsystem5'
//  '<S52>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split'
//  '<S53>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split1'
//  '<S54>'  : 'asbCubeSat/Enviroment Models/Sun Position/Register/split2'
//  '<S55>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp'
//  '<S56>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/for pc'
//  '<S57>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position'
//  '<S58>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity'
//  '<S59>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/for pc/For Iterator Subsystem'
//  '<S60>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position/For Iterator Subsystem'
//  '<S61>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/position/For Iterator Subsystem/For Iterator Subsystem'
//  '<S62>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for vc'
//  '<S63>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity'
//  '<S64>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for vc/For Iterator Subsystem'
//  '<S65>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity/For Iterator Subsystem'
//  '<S66>'  : 'asbCubeSat/Enviroment Models/Sun Position/Target/eph interp/velocity/for velocity/For Iterator Subsystem/For Iterator Subsystem'
//  '<S67>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units/If Action Subsystem7'
//  '<S68>'  : 'asbCubeSat/Enviroment Models/Sun Position/Units/If Action Subsystem8'
//  '<S69>'  : 'asbCubeSat/Pointing Mode/Signal Editor'
//  '<S70>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel'
//  '<S71>'  : 'asbCubeSat/Scopes/Subsystem1'
//  '<S72>'  : 'asbCubeSat/Scopes/Subsystem2'
//  '<S73>'  : 'asbCubeSat/Scopes/Subsystem3'
//  '<S74>'  : 'asbCubeSat/Scopes/Subsystem4'
//  '<S75>'  : 'asbCubeSat/Scopes/Subsystem5'
//  '<S76>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product'
//  '<S77>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse'
//  '<S78>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation'
//  '<S79>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1'
//  '<S80>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2'
//  '<S81>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3'
//  '<S82>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product/Subsystem'
//  '<S83>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/3x3 Cross Product/Subsystem1'
//  '<S84>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse/Quaternion Conjugate'
//  '<S85>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Inverse/Quaternion Norm'
//  '<S86>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize'
//  '<S87>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V1'
//  '<S88>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V2'
//  '<S89>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/V3'
//  '<S90>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S91>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S92>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize'
//  '<S93>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V1'
//  '<S94>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V2'
//  '<S95>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/V3'
//  '<S96>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S97>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S98>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize'
//  '<S99>'  : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V1'
//  '<S100>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V2'
//  '<S101>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/V3'
//  '<S102>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S103>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S104>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize'
//  '<S105>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V1'
//  '<S106>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V2'
//  '<S107>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/V3'
//  '<S108>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize/Quaternion Modulus'
//  '<S109>' : 'asbCubeSat/Scopes/Estimate ECI PosVel/Quaternion Rotation3/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S110>' : 'asbCubeSat/Vehicle Model/Vehicle Control Actuators'
//  '<S111>' : 'asbCubeSat/Vehicle Model/Vehicle Control Sensors'
//  '<S112>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics'
//  '<S113>' : 'asbCubeSat/Vehicle Model/Vehicle Flight Software'
//  '<S114>' : 'asbCubeSat/Vehicle Model/Vehicle Control Actuators/CubeSat Perfect Actuators'
//  '<S115>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF'
//  '<S116>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Degrees to Radians'
//  '<S117>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED'
//  '<S118>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions'
//  '<S119>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication'
//  '<S120>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Rotation Angles to Direction Cosine Matrix'
//  '<S121>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle'
//  '<S122>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunInView'
//  '<S123>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product'
//  '<S124>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_pm'
//  '<S125>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM'
//  '<S126>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/deg2rad'
//  '<S127>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product/Subsystem'
//  '<S128>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/3x3 Cross Product/Subsystem1'
//  '<S129>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_pm/Create 3x3 Matrix'
//  '<S130>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Check deltaT'
//  '<S131>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation'
//  '<S132>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction'
//  '<S133>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion'
//  '<S134>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/Check deltaT'
//  '<S135>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/If Action Subsystem'
//  '<S136>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/Common Time  Calculation/Julian Date Conversion/If Action Subsystem1'
//  '<S137>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations'
//  '<S138>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP'
//  '<S139>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation'
//  '<S140>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion'
//  '<S141>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion'
//  '<S142>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/Check deltaT'
//  '<S143>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/If Action Subsystem'
//  '<S144>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Additional Time Calculations/Julian Date Conversion/If Action Subsystem1'
//  '<S145>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/Lunisolar and planetary nutation'
//  '<S146>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession'
//  '<S147>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/Lunisolar and planetary nutation/Angle Conversion'
//  '<S148>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion'
//  '<S149>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion1'
//  '<S150>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Angle Conversion2'
//  '<S151>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Rotation Angles to Direction Cosine Matrix'
//  '<S152>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/S'
//  '<S153>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/X'
//  '<S154>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Y'
//  '<S155>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Celestial motion of the CIP/P03 Precession/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
//  '<S156>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation/Rotation Angles to Direction Cosine Matrix'
//  '<S157>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Earth Rotation/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
//  '<S158>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Angle Conversion1'
//  '<S159>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Rotation Angles to Direction Cosine Matrix'
//  '<S160>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Convert ITRF Position and Velocity to ICRF/R_woPM/IAUReduction/Polar Motion/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
//  '<S161>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A11'
//  '<S162>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A12'
//  '<S163>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A13'
//  '<S164>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A21'
//  '<S165>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A22'
//  '<S166>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A23'
//  '<S167>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A31'
//  '<S168>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A32'
//  '<S169>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/A33'
//  '<S170>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/Angle Conversion'
//  '<S171>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix ECEF to NED/Create Transformation Matrix'
//  '<S172>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace'
//  '<S173>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace'
//  '<S174>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM'
//  '<S175>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/trace(DCM)'
//  '<S176>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)'
//  '<S177>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)'
//  '<S178>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)'
//  '<S179>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/diag(DCM)'
//  '<S180>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
//  '<S181>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
//  '<S182>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
//  '<S183>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s'
//  '<S184>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1'
//  '<S185>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
//  '<S186>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
//  '<S187>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
//  '<S188>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s'
//  '<S189>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1'
//  '<S190>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
//  '<S191>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
//  '<S192>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
//  '<S193>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s'
//  '<S194>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1'
//  '<S195>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
//  '<S196>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
//  '<S197>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
//  '<S198>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error'
//  '<S199>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal'
//  '<S200>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper'
//  '<S201>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal'
//  '<S202>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper'
//  '<S203>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Error'
//  '<S204>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Warning'
//  '<S205>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Error'
//  '<S206>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Warning'
//  '<S207>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/transpose*dcm ~= eye(3)'
//  '<S208>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Determinant of 3x3 Matrix'
//  '<S209>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/determinant does not equal 1'
//  '<S210>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q0'
//  '<S211>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q1'
//  '<S212>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q2'
//  '<S213>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Quaternion Multiplication/q3'
//  '<S214>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
//  '<S215>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Conjugate'
//  '<S216>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation'
//  '<S217>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Radians to Degrees'
//  '<S218>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize'
//  '<S219>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V1'
//  '<S220>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V2'
//  '<S221>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/V3'
//  '<S222>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S223>' : 'asbCubeSat/Vehicle Model/Vehicle Dynamics/SunAngle/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S224>' : 'asbCubeSat/Visualization/Virtual Reality World'
//  '<S225>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML'
//  '<S226>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Antenna Properties'
//  '<S227>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate'
//  '<S228>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Umbra Translation'
//  '<S229>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse'
//  '<S230>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1'
//  '<S231>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation'
//  '<S232>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1'
//  '<S233>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2'
//  '<S234>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b'
//  '<S235>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML'
//  '<S236>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1'
//  '<S237>' : 'asbCubeSat/Visualization/Virtual Reality World/Radar on//off'
//  '<S238>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML'
//  '<S239>' : 'asbCubeSat/Visualization/Virtual Reality World/Satellite Model Scaling'
//  '<S240>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML'
//  '<S241>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML/ECEF to VRML'
//  '<S242>' : 'asbCubeSat/Visualization/Virtual Reality World/Antenna Position to VRML/Length Conversion'
//  '<S243>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions'
//  '<S244>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Quaternion to VRML'
//  '<S245>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q0'
//  '<S246>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q1'
//  '<S247>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q2'
//  '<S248>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Earth Rotation Rate/Euler Angles to Quaternions/q3'
//  '<S249>' : 'asbCubeSat/Visualization/Virtual Reality World/Compute Umbra Translation/unitVec'
//  '<S250>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse/Quaternion Conjugate'
//  '<S251>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse/Quaternion Norm'
//  '<S252>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1/Quaternion Conjugate'
//  '<S253>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Inverse1/Quaternion Norm'
//  '<S254>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize'
//  '<S255>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V1'
//  '<S256>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V2'
//  '<S257>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/V3'
//  '<S258>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S259>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S260>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize'
//  '<S261>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V1'
//  '<S262>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V2'
//  '<S263>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/V3'
//  '<S264>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S265>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S266>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize'
//  '<S267>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V1'
//  '<S268>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V2'
//  '<S269>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/V3'
//  '<S270>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S271>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S272>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2'
//  '<S273>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel'
//  '<S274>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Compare To Constant'
//  '<S275>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal'
//  '<S276>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2'
//  '<S277>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2/Subsystem'
//  '<S278>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/3x3 Cross Product2/Subsystem1'
//  '<S279>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem'
//  '<S280>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem1'
//  '<S281>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Check Parallel/If Action Subsystem2'
//  '<S282>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product'
//  '<S283>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product/Subsystem'
//  '<S284>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Find Orthogonal/3x3 Cross Product/Subsystem1'
//  '<S285>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2/Quaternion Modulus'
//  '<S286>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion between r_a and r_b/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm'
//  '<S287>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication'
//  '<S288>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q0'
//  '<S289>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q1'
//  '<S290>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q2'
//  '<S291>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML/Quaternion Multiplication/q3'
//  '<S292>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication'
//  '<S293>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q0'
//  '<S294>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q1'
//  '<S295>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q2'
//  '<S296>' : 'asbCubeSat/Visualization/Virtual Reality World/Quaternion to VRML1/Quaternion Multiplication/q3'
//  '<S297>' : 'asbCubeSat/Visualization/Virtual Reality World/Radar on//off/Compare To Constant'
//  '<S298>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML/ECEF to VRML'
//  '<S299>' : 'asbCubeSat/Visualization/Virtual Reality World/Sat Position to VRML/Length Conversion'
//  '<S300>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML/ECEF to VRML'
//  '<S301>' : 'asbCubeSat/Visualization/Virtual Reality World/Sun Position to VRML/Length Conversion'

#endif                                 // RTW_HEADER_asbCubeSat_h_

//
// File trailer for generated code.
//
// [EOF]
//
