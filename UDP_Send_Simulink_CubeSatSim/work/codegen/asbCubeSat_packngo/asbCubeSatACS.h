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
 * C/C++ source code generated on : Sun Sep 25 19:23:42 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
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
#include "MW_target_hardware_resources.h"

/* Block signals for model 'asbCubeSatACS' */
typedef struct {
  real_T PointingCmd[3];               /* '<S1>/Pointing Mode Selection' */
  real_T cmd_q_b2tgt[4];               /* '<S1>/Pointing Mode Selection' */
  real_T Product2_o4u;                 /* '<S228>/Product2' */
  real_T Product3_cp;                  /* '<S146>/Product3' */
  real_T jxi_i;                        /* '<S217>/j x i' */
  real_T Product1_g;                   /* '<S153>/Product1' */
  real_T Merge_j;                      /* '<S236>/Merge' */
  real_T Product2_e;                   /* '<S153>/Product2' */
  real_T Product3_e;                   /* '<S153>/Product3' */
  real_T fcn2;                         /* '<S138>/fcn2' */
  real_T fcn4;                         /* '<S138>/fcn4' */
  real_T Product2_el;                  /* '<S235>/Product2' */
  real_T Product1_lc;                  /* '<S235>/Product1' */
  real_T fcn5;                         /* '<S138>/fcn5' */
  real_T Product2_ev;                  /* '<S129>/Product2' */
  real_T Product3_e1;                  /* '<S235>/Product3' */
  real_T Sum;                          /* '<S147>/Sum' */
  real_T Sum_m;                        /* '<S148>/Sum' */
  real_T Sum_e;                        /* '<S149>/Sum' */
  real_T Product1_d;                   /* '<S186>/Product1' */
} B_asbCubeSatACS_c_T;

/* Block states (default storage) for model 'asbCubeSatACS' */
typedef struct {
  real_T Integrator_DSTATE[3];         /* '<S275>/Integrator' */
  real_T UD_DSTATE[3];                 /* '<S268>/UD' */
  uint8_T is_active_c1_asbCubeSatACS;  /* '<S1>/Pointing Mode Selection' */
  uint8_T is_c1_asbCubeSatACS;         /* '<S1>/Pointing Mode Selection' */
  uint8_T is_On;                       /* '<S1>/Pointing Mode Selection' */
} DW_asbCubeSatACS_f_T;

/* Parameters for system: '<S50>/If Action Subsystem' */
struct P_IfActionSubsystem_asbCubeSatACS_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S60>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_asbCubeSatACS_T_ {
  real_T DiscretePIDController_DifferentiatorICPrevScaledInput;
        /* Mask Parameter: DiscretePIDController_DifferentiatorICPrevScaledInput
         * Referenced by: '<S268>/UD'
         */
  real_T DiscretePIDController_InitialConditionForIntegrator;
          /* Mask Parameter: DiscretePIDController_InitialConditionForIntegrator
           * Referenced by: '<S275>/Integrator'
           */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S78>/Constant'
                                       */
  real_T CompareToConstant_const_i; /* Mask Parameter: CompareToConstant_const_i
                                     * Referenced by: '<S93>/Constant'
                                     */
  real_T CompareToConstant_const_j; /* Mask Parameter: CompareToConstant_const_j
                                     * Referenced by: '<S184>/Constant'
                                     */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S199>/Constant'
                                     */
  real_T Calculateq_icrf2lvlh_mu;     /* Mask Parameter: Calculateq_icrf2lvlh_mu
                                       * Referenced by: '<S23>/Constant2'
                                       */
  real_T AttitudeProfileNadirPointing_primaryAlignment[3];
                /* Mask Parameter: AttitudeProfileNadirPointing_primaryAlignment
                 * Referenced by: '<S7>/primaryAlignment'
                 */
  real_T AttitudeProfileSunTracking_primaryAlignment[3];
                  /* Mask Parameter: AttitudeProfileSunTracking_primaryAlignment
                   * Referenced by: '<S136>/primaryAlignment'
                   */
  real_T AttitudeProfileNadirPointing_secondaryAlignment[3];
              /* Mask Parameter: AttitudeProfileNadirPointing_secondaryAlignment
               * Referenced by: '<S7>/secondaryAlignment'
               */
  real_T AttitudeProfileSunTracking_secondaryAlignment[3];
                /* Mask Parameter: AttitudeProfileSunTracking_secondaryAlignment
                 * Referenced by: '<S136>/secondaryAlignment'
                 */
  real_T AttitudeProfileNadirPointing_secondaryConstraint[3];
             /* Mask Parameter: AttitudeProfileNadirPointing_secondaryConstraint
              * Referenced by: '<S7>/secondaryConstraint'
              */
  real_T AttitudeProfileSunTracking_secondaryConstraint[3];
               /* Mask Parameter: AttitudeProfileSunTracking_secondaryConstraint
                * Referenced by: '<S136>/secondaryConstraint'
                */
  real_T Unitquat_Value[4];            /* Expression: [1 0 0 0]
                                        * Referenced by: '<S4>/Unit quat'
                                        */
  real_T TorqueCmds_Value[3];          /* Expression: [0 0 0]
                                        * Referenced by: '<S4>/TorqueCmds'
                                        */
  real_T Constant3_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S23>/Constant3'
                                        */
  real_T Constant1_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S23>/Constant1'
                                        */
  real_T Constant4_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S23>/Constant4'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S79>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S79>/Constant'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S79>/Constant1'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S79>/Gain2'
                                        */
  real_T Gain_Gain_l;                  /* Expression: -1
                                        * Referenced by: '<S94>/Gain'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S94>/Constant'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S94>/Constant1'
                                        */
  real_T Gain2_Gain_j;                 /* Expression: -1
                                        * Referenced by: '<S94>/Gain2'
                                        */
  real_T Constant_Value_n;             /* Expression: 1
                                        * Referenced by: '<S131>/Constant'
                                        */
  real_T Constant_Value_nu;            /* Expression: 1
                                        * Referenced by: '<S132>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S53>/Constant'
                                        */
  real_T Bias_Bias;                    /* Expression: -1
                                        * Referenced by: '<S50>/Bias'
                                        */
  real_T Bias1_Bias;                   /* Expression: +1
                                        * Referenced by: '<S50>/Bias1'
                                        */
  real_T Gain_Gain_h;                  /* Expression: -1
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 2
                                        * Referenced by: '<S18>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<S18>/Gain1'
                                        */
  real_T Constant_Value_c;             /* Expression: 0.5
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Gain2_Gain_b;                 /* Expression: 2
                                        * Referenced by: '<S18>/Gain2'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 2
                                        * Referenced by: '<S19>/Gain'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S19>/Gain1'
                                        */
  real_T Constant_Value_ci;            /* Expression: 0.5
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 2
                                        * Referenced by: '<S19>/Gain2'
                                        */
  real_T Gain_Gain_l0;                 /* Expression: 2
                                        * Referenced by: '<S20>/Gain'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 2
                                        * Referenced by: '<S20>/Gain1'
                                        */
  real_T Constant_Value_b2;            /* Expression: 0.5
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: 2
                                        * Referenced by: '<S20>/Gain2'
                                        */
  real_T Constant_Value_m[3];          /* Expression: [0 0 1]
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: -1
                                        * Referenced by: '<S30>/Constant1'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T n_j0_Threshold;               /* Expression: 0
                                        * Referenced by: '<S23>/n_j < 0'
                                        */
  real_T Constant1_Value_e;            /* Expression: -1
                                        * Referenced by: '<S31>/Constant1'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T Constant1_Value_m;            /* Expression: -1
                                        * Referenced by: '<S29>/Constant1'
                                        */
  real_T Constant_Value_fu;            /* Expression: 1
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T e_k0_Threshold;               /* Expression: 0
                                        * Referenced by: '<S23>/e_k < 0'
                                        */
  real_T Constant1_Value_na;           /* Expression: -1
                                        * Referenced by: '<S28>/Constant1'
                                        */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T rv0_Threshold;                /* Expression: 0
                                        * Referenced by: '<S23>/r.v < 0'
                                        */
  real_T u2_Gain;                      /* Expression: 0.5
                                        * Referenced by: '<S33>/1//2'
                                        */
  real_T Constant_Value_fc;            /* Expression: 0.5
                                        * Referenced by: '<S123>/Constant'
                                        */
  real_T Gain2_Gain_i;                 /* Expression: 2
                                        * Referenced by: '<S123>/Gain2'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 2
                                        * Referenced by: '<S123>/Gain'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 2
                                        * Referenced by: '<S123>/Gain1'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 2
                                        * Referenced by: '<S124>/Gain'
                                        */
  real_T Constant_Value_je;            /* Expression: 0.5
                                        * Referenced by: '<S124>/Constant'
                                        */
  real_T Gain2_Gain_jw;                /* Expression: 2
                                        * Referenced by: '<S124>/Gain2'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 2
                                        * Referenced by: '<S124>/Gain1'
                                        */
  real_T Gain_Gain_bd;                 /* Expression: 2
                                        * Referenced by: '<S125>/Gain'
                                        */
  real_T Gain1_Gain_c4;                /* Expression: 2
                                        * Referenced by: '<S125>/Gain1'
                                        */
  real_T Constant_Value_k;             /* Expression: 0.5
                                        * Referenced by: '<S125>/Constant'
                                        */
  real_T Gain2_Gain_m;                 /* Expression: 2
                                        * Referenced by: '<S125>/Gain2'
                                        */
  real_T Bias_Bias_o;                  /* Expression: -1
                                        * Referenced by: '<S51>/Bias'
                                        */
  real_T Bias1_Bias_k;                 /* Expression: +1
                                        * Referenced by: '<S51>/Bias1'
                                        */
  real_T Bias_Bias_a;                  /* Expression: -1
                                        * Referenced by: '<S77>/Bias'
                                        */
  real_T Bias1_Bias_j;                 /* Expression: +1
                                        * Referenced by: '<S77>/Bias1'
                                        */
  real_T Constant_Value_h;             /* Expression: 0.5
                                        * Referenced by: '<S71>/Constant'
                                        */
  real_T Gain2_Gain_a;                 /* Expression: 2
                                        * Referenced by: '<S71>/Gain2'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 2
                                        * Referenced by: '<S71>/Gain'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 2
                                        * Referenced by: '<S71>/Gain1'
                                        */
  real_T Gain_Gain_ik;                 /* Expression: 2
                                        * Referenced by: '<S72>/Gain'
                                        */
  real_T Constant_Value_lw;            /* Expression: 0.5
                                        * Referenced by: '<S72>/Constant'
                                        */
  real_T Gain2_Gain_k;                 /* Expression: 2
                                        * Referenced by: '<S72>/Gain2'
                                        */
  real_T Gain1_Gain_ch;                /* Expression: 2
                                        * Referenced by: '<S72>/Gain1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 2
                                        * Referenced by: '<S73>/Gain'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 2
                                        * Referenced by: '<S73>/Gain1'
                                        */
  real_T Constant_Value_iu;            /* Expression: 0.5
                                        * Referenced by: '<S73>/Constant'
                                        */
  real_T Gain2_Gain_jz;                /* Expression: 2
                                        * Referenced by: '<S73>/Gain2'
                                        */
  real_T Bias_Bias_i;                  /* Expression: -1
                                        * Referenced by: '<S92>/Bias'
                                        */
  real_T Bias1_Bias_o;                 /* Expression: +1
                                        * Referenced by: '<S92>/Bias1'
                                        */
  real_T Gain_Gain_k;                  /* Expression: -1
                                        * Referenced by: '<S185>/Gain'
                                        */
  real_T Constant_Value_hl;            /* Expression: 0
                                        * Referenced by: '<S185>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S185>/Constant1'
                                        */
  real_T Gain2_Gain_ka;                /* Expression: -1
                                        * Referenced by: '<S185>/Gain2'
                                        */
  real_T Gain_Gain_m;                  /* Expression: -1
                                        * Referenced by: '<S200>/Gain'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S200>/Constant'
                                        */
  real_T Constant1_Value_n5;           /* Expression: 0
                                        * Referenced by: '<S200>/Constant1'
                                        */
  real_T Gain2_Gain_i5;                /* Expression: -1
                                        * Referenced by: '<S200>/Gain2'
                                        */
  real_T Constant_Value_lp;            /* Expression: 1
                                        * Referenced by: '<S237>/Constant'
                                        */
  real_T Constant_Value_a;             /* Expression: 1
                                        * Referenced by: '<S238>/Constant'
                                        */
  real_T Constant_Value_hs;            /* Expression: 0
                                        * Referenced by: '<S158>/Constant'
                                        */
  real_T Constant_Value_m5;            /* Expression: 0
                                        * Referenced by: '<S159>/Constant'
                                        */
  real_T Bias_Bias_p;                  /* Expression: -1
                                        * Referenced by: '<S156>/Bias'
                                        */
  real_T Bias1_Bias_e;                 /* Expression: +1
                                        * Referenced by: '<S156>/Bias1'
                                        */
  real_T Gain_Gain_c4;                 /* Expression: 2
                                        * Referenced by: '<S147>/Gain'
                                        */
  real_T Gain1_Gain_mx;                /* Expression: 2
                                        * Referenced by: '<S147>/Gain1'
                                        */
  real_T Constant_Value_iui;           /* Expression: 0.5
                                        * Referenced by: '<S147>/Constant'
                                        */
  real_T Gain2_Gain_bq;                /* Expression: 2
                                        * Referenced by: '<S147>/Gain2'
                                        */
  real_T Gain_Gain_de;                 /* Expression: 2
                                        * Referenced by: '<S148>/Gain'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 2
                                        * Referenced by: '<S148>/Gain1'
                                        */
  real_T Constant_Value_ji;            /* Expression: 0.5
                                        * Referenced by: '<S148>/Constant'
                                        */
  real_T Gain2_Gain_g;                 /* Expression: 2
                                        * Referenced by: '<S148>/Gain2'
                                        */
  real_T Gain_Gain_pb;                 /* Expression: 2
                                        * Referenced by: '<S149>/Gain'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: 2
                                        * Referenced by: '<S149>/Gain1'
                                        */
  real_T Constant_Value_fui;           /* Expression: 0.5
                                        * Referenced by: '<S149>/Constant'
                                        */
  real_T Gain2_Gain_bs;                /* Expression: 2
                                        * Referenced by: '<S149>/Gain2'
                                        */
  real_T Constant_Value_p;             /* Expression: 0.5
                                        * Referenced by: '<S229>/Constant'
                                        */
  real_T Gain2_Gain_p;                 /* Expression: 2
                                        * Referenced by: '<S229>/Gain2'
                                        */
  real_T Gain_Gain_jl;                 /* Expression: 2
                                        * Referenced by: '<S229>/Gain'
                                        */
  real_T Gain1_Gain_ie;                /* Expression: 2
                                        * Referenced by: '<S229>/Gain1'
                                        */
  real_T Gain_Gain_kx;                 /* Expression: 2
                                        * Referenced by: '<S230>/Gain'
                                        */
  real_T Constant_Value_fe;            /* Expression: 0.5
                                        * Referenced by: '<S230>/Constant'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: 2
                                        * Referenced by: '<S230>/Gain2'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: 2
                                        * Referenced by: '<S230>/Gain1'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 2
                                        * Referenced by: '<S231>/Gain'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 2
                                        * Referenced by: '<S231>/Gain1'
                                        */
  real_T Constant_Value_ow;            /* Expression: 0.5
                                        * Referenced by: '<S231>/Constant'
                                        */
  real_T Gain2_Gain_c;                 /* Expression: 2
                                        * Referenced by: '<S231>/Gain2'
                                        */
  real_T Bias_Bias_g;                  /* Expression: -1
                                        * Referenced by: '<S157>/Bias'
                                        */
  real_T Bias1_Bias_p;                 /* Expression: +1
                                        * Referenced by: '<S157>/Bias1'
                                        */
  real_T Bias_Bias_ib;                 /* Expression: -1
                                        * Referenced by: '<S183>/Bias'
                                        */
  real_T Bias1_Bias_h;                 /* Expression: +1
                                        * Referenced by: '<S183>/Bias1'
                                        */
  real_T Constant_Value_ds;            /* Expression: 0.5
                                        * Referenced by: '<S177>/Constant'
                                        */
  real_T Gain2_Gain_ga;                /* Expression: 2
                                        * Referenced by: '<S177>/Gain2'
                                        */
  real_T Gain_Gain_iw;                 /* Expression: 2
                                        * Referenced by: '<S177>/Gain'
                                        */
  real_T Gain1_Gain_iej;               /* Expression: 2
                                        * Referenced by: '<S177>/Gain1'
                                        */
  real_T Gain_Gain_b0;                 /* Expression: 2
                                        * Referenced by: '<S178>/Gain'
                                        */
  real_T Constant_Value_de;            /* Expression: 0.5
                                        * Referenced by: '<S178>/Constant'
                                        */
  real_T Gain2_Gain_me;                /* Expression: 2
                                        * Referenced by: '<S178>/Gain2'
                                        */
  real_T Gain1_Gain_ip;                /* Expression: 2
                                        * Referenced by: '<S178>/Gain1'
                                        */
  real_T Gain_Gain_jw;                 /* Expression: 2
                                        * Referenced by: '<S179>/Gain'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 2
                                        * Referenced by: '<S179>/Gain1'
                                        */
  real_T Constant_Value_di;            /* Expression: 0.5
                                        * Referenced by: '<S179>/Constant'
                                        */
  real_T Gain2_Gain_ii;                /* Expression: 2
                                        * Referenced by: '<S179>/Gain2'
                                        */
  real_T Bias_Bias_e;                  /* Expression: -1
                                        * Referenced by: '<S198>/Bias'
                                        */
  real_T Bias1_Bias_a;                 /* Expression: +1
                                        * Referenced by: '<S198>/Bias1'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S275>/Integrator'
                                        */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem2_o;/* '<S198>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem1_n;/* '<S198>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem_b;/* '<S198>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem2_p1;/* '<S183>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem1_d;/* '<S183>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem_p;/* '<S183>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem2_l;/* '<S157>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem1_k;/* '<S157>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem_ne;/* '<S157>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem2_iz;/* '<S156>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem1_h;/* '<S156>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem_h;/* '<S156>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem2_i2;/* '<S92>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem1_m;/* '<S92>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem_a;/* '<S92>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem2_i;/* '<S77>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem1_g;/* '<S77>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem_n;/* '<S77>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem2_n;/* '<S51>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem1_c;/* '<S51>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem_i;/* '<S51>/If Action Subsystem' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem2;/* '<S50>/If Action Subsystem2' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem1;/* '<S50>/If Action Subsystem1' */
  P_IfActionSubsystem_asbCubeSatACS_T IfActionSubsystem;/* '<S50>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_asbCubeSatACS_T {
  const char_T **errorStatus;
};

typedef struct {
  B_asbCubeSatACS_c_T rtb;
  DW_asbCubeSatACS_f_T rtdw;
  RT_MODEL_asbCubeSatACS_T rtm;
} MdlrefDW_asbCubeSatACS_T;

/* Model block global parameters (default storage) */
extern struct_9iDbyyjfBL0Y1ELTIVXdBC rtP_gains;/* Variable: gains
                                                * Referenced by:
                                                *   '<S267>/Derivative Gain'
                                                *   '<S272>/Integral Gain'
                                                *   '<S280>/Proportional Gain'
                                                */

/* Model reference registration function */
extern void asbCubeSatACS_initialize(const char_T **rt_errorStatus,
  RT_MODEL_asbCubeSatACS_T *const asbCubeSatACS_M);
extern void asbCubeSatACS_IfActionSubsystem(real_T *rty_Out1,
  P_IfActionSubsystem_asbCubeSatACS_T *localP);
extern void asbCubeSatACS_Init(ACSOutBus *rty_ACSOut, DW_asbCubeSatACS_f_T
  *localDW);
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
