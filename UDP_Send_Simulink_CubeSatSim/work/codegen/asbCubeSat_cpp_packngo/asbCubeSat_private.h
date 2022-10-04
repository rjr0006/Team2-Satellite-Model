//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: asbCubeSat_private.h
//
// Code generated for Simulink model 'asbCubeSat'.
//
// Model version                  : 5.3
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Tue Sep 27 09:59:01 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_asbCubeSat_private_h_
#define RTW_HEADER_asbCubeSat_private_h_
#include "rtwtypes.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

// Used by FromWorkspace Block: '<S70>/fromWS_Signal 1'
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? std::floor((v) + 0.5) : std::ceil((v) - 0.5) )
#endif

extern const real_T rtCP_pooled_K2VTJt27O5oU[133614];
extern const real_T rtCP_pooled_DSDm3LsNg2J1[534456];
extern const real_T rtCP_pooled_zJYjW9KGpOtF[113058];
extern const real_T rtCP_pooled_vSGPzKuF00h1[6];
extern const real_T rtCP_pooled_vIXBxXctaJgb[6];
extern const real_T rtCP_pooled_pwtokAcnkmti[6];

#define rtCP_ephdata_table             rtCP_pooled_K2VTJt27O5oU  // Expression: bufPlanet
                                                                 //  Referenced by: '<S19>/eph data'

#define rtCP_ephdatamoon_table         rtCP_pooled_DSDm3LsNg2J1  // Expression: bufMoon
                                                                 //  Referenced by: '<S26>/eph data moon'

#define rtCP_ephdata_table_p           rtCP_pooled_zJYjW9KGpOtF  // Expression: bufPlanet
                                                                 //  Referenced by: '<S22>/eph data'

#define rtCP_S0_Coefs                  rtCP_pooled_vSGPzKuF00h1  // Expression: [15.62 27.98 -72574.11 -122.68 3808.65  94]
                                                                 //  Referenced by: '<S147>/S0'

#define rtCP_X0_Coefs                  rtCP_pooled_vIXBxXctaJgb  // Expression: [5.9285 7.578 -198618.34 -429782.9 2004191898 -16617]
                                                                 //  Referenced by: '<S147>/X0'

#define rtCP_Y0_Coefs                  rtCP_pooled_pwtokAcnkmti  // Expression: [0.1358 1112.526 1900.59 -22407274.7 -25896 -6951]
                                                                 //  Referenced by: '<S147>/Y0'


// private model entry point functions
extern void asbCubeSat_derivatives();

#endif                                 // RTW_HEADER_asbCubeSat_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
