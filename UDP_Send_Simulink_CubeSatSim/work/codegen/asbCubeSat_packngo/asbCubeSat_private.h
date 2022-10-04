/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: asbCubeSat_private.h
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

#ifndef RTW_HEADER_asbCubeSat_private_h_
#define RTW_HEADER_asbCubeSat_private_h_
#include "rtwtypes.h"
#include "asbCubeSat.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

/* Used by FromWorkspace Block: '<S70>/fromWS_Signal 1' */
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern void asbCubeSat_ForIteratorSubsystem_Init(real_T rty_pci[13],
  DW_ForIteratorSubsystem_asbCubeSat_T *localDW,
  P_ForIteratorSubsystem_asbCubeSat_T *localP);
extern void asbCubeSat_ForIteratorSubsystem(real_T rtu_ncf2, real_T rtu_tc,
  real_T rty_pci[13], B_ForIteratorSubsystem_asbCubeSat_T *localB,
  DW_ForIteratorSubsystem_asbCubeSat_T *localDW,
  P_ForIteratorSubsystem_asbCubeSat_T *localP);
extern void asbCubeSat_IfActionSubsystem(real_T rtu_yin, real_T rtu_min, real_T *
  rty_yout, real_T *rty_mout, P_IfActionSubsystem_asbCubeSat_T *localP);
extern void asbCubeSat_IfActionSubsystem1(real_T rtu_yin, real_T rtu_min, real_T
  *rty_yout, real_T *rty_mout);
extern void asbCubeSat_IfActionSubsystem_c(RT_MODEL_asbCubeSat_T * const
  asbCubeSat_M, real_T *rty_Out1, P_IfActionSubsystem_asbCubeSat_g_T *localP);

/* private model entry point functions */
extern void asbCubeSat_derivatives(void);

#endif                                 /* RTW_HEADER_asbCubeSat_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
