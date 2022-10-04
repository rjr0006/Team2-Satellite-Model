/*
 * asbCubeSat_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "asbCubeSat".
 *
 * Model version              : 5.2
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C source code generated on : Mon Sep 12 14:59:06 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_asbCubeSat_private_h_
#define RTW_HEADER_asbCubeSat_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "asbCubeSat.h"

/* Used by FromWorkspace Block: '<S70>/fromWS_Signal 1' */
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern const real_T rtCP_pooled_dqn60LaKDUCw[9];
extern const real_T rtCP_pooled_IBfW69W5lTOo[3];
extern const real_T rtCP_pooled_nSzRcv3qg69l[3];
extern const real_T rtCP_pooled_khgeOnLDf6Ca[133614];
extern const real_T rtCP_pooled_r3vPdO2ZQTcx[534456];
extern const real_T rtCP_pooled_ZNweu5yZmxR2[113058];
extern const real_T rtCP_pooled_TAGWNmUJX8RQ[6];
extern const real_T rtCP_pooled_NICoiDTnnmca[6];
extern const real_T rtCP_pooled_Xi0M5Y7skLUR[6];

#define rtCP_Bias1_Bias_pb             rtCP_pooled_dqn60LaKDUCw  /* Expression: -eye(3)
                                                                  * Referenced by: '<S202>/Bias1'
                                                                  */
#define rtCP_Constant2_Value_i         rtCP_pooled_IBfW69W5lTOo  /* Expression: [0 0 0]
                                                                  * Referenced by: '<S1>/Constant2'
                                                                  */
#define rtCP_Constant4_Value_j         rtCP_pooled_nSzRcv3qg69l  /* Expression: [0 0 7.292115146706979e-5]'
                                                                  * Referenced by: '<S1>/Constant4'
                                                                  */
#define rtCP_Forces_Body_Value         rtCP_pooled_IBfW69W5lTOo  /* Expression: [0 0 0]
                                                                  * Referenced by: '<S2>/Forces_Body'
                                                                  */
#define rtCP_Torques_Body_Value        rtCP_pooled_IBfW69W5lTOo  /* Expression: [0 0 0]
                                                                  * Referenced by: '<S2>/Torques_Body'
                                                                  */
#define rtCP_ephdata_table             rtCP_pooled_khgeOnLDf6Ca  /* Expression: bufPlanet
                                                                  * Referenced by: '<S19>/eph data'
                                                                  */
#define rtCP_ephdatamoon_table         rtCP_pooled_r3vPdO2ZQTcx  /* Expression: bufMoon
                                                                  * Referenced by: '<S26>/eph data moon'
                                                                  */
#define rtCP_ephdata_table_p           rtCP_pooled_ZNweu5yZmxR2  /* Expression: bufPlanet
                                                                  * Referenced by: '<S22>/eph data'
                                                                  */
#define rtCP_S0_Coefs                  rtCP_pooled_TAGWNmUJX8RQ  /* Expression: [15.62 27.98 -72574.11 -122.68 3808.65  94]
                                                                  * Referenced by: '<S147>/S0'
                                                                  */
#define rtCP_X0_Coefs                  rtCP_pooled_NICoiDTnnmca  /* Expression: [5.9285 7.578 -198618.34 -429782.9 2004191898 -16617]
                                                                  * Referenced by: '<S147>/X0'
                                                                  */
#define rtCP_Y0_Coefs                  rtCP_pooled_Xi0M5Y7skLUR  /* Expression: [0.1358 1112.526 1900.59 -22407274.7 -25896 -6951]
                                                                  * Referenced by: '<S147>/Y0'
                                                                  */

extern void asbCubeSat_ForIteratorSubsystem_Init
  (B_ForIteratorSubsystem_asbCubeSat_T *localB,
   DW_ForIteratorSubsystem_asbCubeSat_T *localDW);
extern void asbCubeSat_ForIteratorSubsystem(real_T rtu_ncf2, real_T rtu_tc,
  B_ForIteratorSubsystem_asbCubeSat_T *localB,
  DW_ForIteratorSubsystem_asbCubeSat_T *localDW);
extern void asbCubeSat_ForIteratorSubsystem_k(real_T rtu_ncf3, real_T rtu_tc,
  B_ForIteratorSubsystem_asbCubeSat_n_T *localB);
extern void asbCubeSat_ForIteratorSubsystem_e
  (B_ForIteratorSubsystem_asbCubeSat_j_T *localB);
extern void asbCubeSat_IfActionSubsystem(real_T rtu_yin, real_T rtu_min, real_T *
  rty_yout, real_T *rty_mout);
extern void asbCubeSat_IfActionSubsystem1(real_T rtu_yin, real_T rtu_min, real_T
  *rty_yout, real_T *rty_mout);

/* private model entry point functions */
extern void asbCubeSat_derivatives(void);

#endif                                 /* RTW_HEADER_asbCubeSat_private_h_ */
