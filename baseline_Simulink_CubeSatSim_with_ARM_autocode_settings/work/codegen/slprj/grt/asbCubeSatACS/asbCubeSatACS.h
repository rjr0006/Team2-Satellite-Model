/*
 * Code generation for system model 'asbCubeSatACS'
 * For more details, see corresponding source file asbCubeSatACS.c
 *
 */

#ifndef RTW_HEADER_asbCubeSatACS_h_
#define RTW_HEADER_asbCubeSatACS_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "asbCubeSatACS_types.h"
#include "rtw_modelmap.h"

extern "C" {

#include "rtGetInf.h"

}
  extern "C"
{

#include "rt_nonfinite.h"

}

#include <cstring>

/* Block signals for model 'asbCubeSatACS' */
struct B_asbCubeSatACS_T {
  StatesOutBus BusConversion_InsertedFor_Point;
  EnvBus BusConversion_InsertedFor_Poi_e;
  real_T ProportionalGain[3];          /* '<S280>/Proportional Gain' */
  real_T Integrator[3];                /* '<S275>/Integrator' */
  real_T DerivativeGain[3];            /* '<S267>/Derivative Gain' */
  real_T Tsamp[3];                     /* '<S270>/Tsamp' */
  real_T UD[3];                        /* '<S268>/UD' */
  real_T Diff[3];                      /* '<S268>/Diff' */
  real_T Sum[3];                       /* '<S284>/Sum' */
  real_T IntegralGain[3];              /* '<S272>/Integral Gain' */
  real_T ControlMode;                  /* '<S1>/Pointing Mode Selection' */
  real_T PointingCmd[3];               /* '<S1>/Pointing Mode Selection' */
  real_T cmd_q_b2tgt[4];               /* '<S1>/Pointing Mode Selection' */
  real_T Product;                      /* '<S155>/Product' */
  real_T UnaryMinus;                   /* '<S137>/Unary Minus' */
  real_T Product1;                     /* '<S155>/Product1' */
  real_T UnaryMinus1;                  /* '<S137>/Unary Minus1' */
  real_T Product2;                     /* '<S155>/Product2' */
  real_T UnaryMinus2;                  /* '<S137>/Unary Minus2' */
  real_T Product3;                     /* '<S155>/Product3' */
  real_T Sum_p;                        /* '<S155>/Sum' */
  real_T sqrt_f;                       /* '<S154>/sqrt' */
  real_T Product_h;                    /* '<S153>/Product' */
  real_T Product_g;                    /* '<S151>/Product' */
  real_T Product1_g;                   /* '<S153>/Product1' */
  real_T UnaryMinus_l;                 /* '<S152>/Unary Minus' */
  real_T Product1_gj;                  /* '<S151>/Product1' */
  real_T Product2_e;                   /* '<S153>/Product2' */
  real_T UnaryMinus1_j;                /* '<S152>/Unary Minus1' */
  real_T Product2_o;                   /* '<S151>/Product2' */
  real_T Product3_e;                   /* '<S153>/Product3' */
  real_T UnaryMinus2_m;                /* '<S152>/Unary Minus2' */
  real_T Product3_d;                   /* '<S151>/Product3' */
  real_T Sum_n;                        /* '<S151>/Sum' */
  real_T sqrt_o;                       /* '<S150>/sqrt' */
  real_T Product_m;                    /* '<S146>/Product' */
  real_T Product1_l;                   /* '<S146>/Product1' */
  real_T Product2_g;                   /* '<S146>/Product2' */
  real_T Product3_c;                   /* '<S146>/Product3' */
  real_T Product_hp;                   /* '<S147>/Product' */
  real_T Product1_n;                   /* '<S147>/Product1' */
  real_T Sum1;                         /* '<S147>/Sum1' */
  real_T Gain;                         /* '<S147>/Gain' */
  real_T Product2_k;                   /* '<S147>/Product2' */
  real_T Product3_p;                   /* '<S147>/Product3' */
  real_T Sum2;                         /* '<S147>/Sum2' */
  real_T Gain1;                        /* '<S147>/Gain1' */
  real_T Product6;                     /* '<S147>/Product6' */
  real_T Product7;                     /* '<S147>/Product7' */
  real_T Sum3;                         /* '<S147>/Sum3' */
  real_T Gain2;                        /* '<S147>/Gain2' */
  real_T Product4;                     /* '<S147>/Product4' */
  real_T Product5;                     /* '<S147>/Product5' */
  real_T Product8;                     /* '<S147>/Product8' */
  real_T Sum_l;                        /* '<S147>/Sum' */
  real_T Product_gr;                   /* '<S148>/Product' */
  real_T Product1_ls;                  /* '<S148>/Product1' */
  real_T Sum1_d;                       /* '<S148>/Sum1' */
  real_T Gain_g;                       /* '<S148>/Gain' */
  real_T Product2_l;                   /* '<S148>/Product2' */
  real_T Product3_j;                   /* '<S148>/Product3' */
  real_T Sum2_e;                       /* '<S148>/Sum2' */
  real_T Gain1_p;                      /* '<S148>/Gain1' */
  real_T Product6_k;                   /* '<S148>/Product6' */
  real_T Product7_n;                   /* '<S148>/Product7' */
  real_T Sum3_k;                       /* '<S148>/Sum3' */
  real_T Gain2_l;                      /* '<S148>/Gain2' */
  real_T Product4_m;                   /* '<S148>/Product4' */
  real_T Product5_i;                   /* '<S148>/Product5' */
  real_T Product8_a;                   /* '<S148>/Product8' */
  real_T Sum_m;                        /* '<S148>/Sum' */
  real_T Product_h0;                   /* '<S149>/Product' */
  real_T Product1_i;                   /* '<S149>/Product1' */
  real_T Sum1_p;                       /* '<S149>/Sum1' */
  real_T Gain_i;                       /* '<S149>/Gain' */
  real_T Product2_ep;                  /* '<S149>/Product2' */
  real_T Product3_dl;                  /* '<S149>/Product3' */
  real_T Sum2_p;                       /* '<S149>/Sum2' */
  real_T Gain1_j;                      /* '<S149>/Gain1' */
  real_T Product6_n;                   /* '<S149>/Product6' */
  real_T Product7_k;                   /* '<S149>/Product7' */
  real_T Sum3_m;                       /* '<S149>/Sum3' */
  real_T Gain2_p;                      /* '<S149>/Gain2' */
  real_T Product4_l;                   /* '<S149>/Product4' */
  real_T Product5_n;                   /* '<S149>/Product5' */
  real_T Product8_g;                   /* '<S149>/Product8' */
  real_T Sum_e;                        /* '<S149>/Sum' */
  real_T Merge;                        /* '<S156>/Merge' */
  real_T TmpSignalConversionAtDotProduct[3];
  real_T Product_hi;                   /* '<S233>/Product' */
  real_T Product1_a;                   /* '<S233>/Product1' */
  real_T Product2_a;                   /* '<S233>/Product2' */
  real_T Product3_eh;                  /* '<S233>/Product3' */
  real_T Sum_f;                        /* '<S233>/Sum' */
  real_T sqrt_l;                       /* '<S232>/sqrt' */
  real_T Product2_o4;                  /* '<S228>/Product2' */
  real_T Product6_i;                   /* '<S229>/Product6' */
  real_T Product3_h;                   /* '<S228>/Product3' */
  real_T Product7_c;                   /* '<S229>/Product7' */
  real_T Sum3_h;                       /* '<S229>/Sum3' */
  real_T Gain2_k;                      /* '<S229>/Gain2' */
  real_T Product8_p;                   /* '<S229>/Product8' */
  real_T Product1_f;                   /* '<S228>/Product1' */
  real_T Product_f;                    /* '<S229>/Product' */
  real_T Product_e;                    /* '<S228>/Product' */
  real_T Product1_iz;                  /* '<S229>/Product1' */
  real_T Sum1_c;                       /* '<S229>/Sum1' */
  real_T Gain_b;                       /* '<S229>/Gain' */
  real_T Product4_c;                   /* '<S229>/Product4' */
  real_T Product2_m;                   /* '<S229>/Product2' */
  real_T Product3_a;                   /* '<S229>/Product3' */
  real_T Sum2_l;                       /* '<S229>/Sum2' */
  real_T Gain1_i;                      /* '<S229>/Gain1' */
  real_T Product5_g;                   /* '<S229>/Product5' */
  real_T Sum_o;                        /* '<S229>/Sum' */
  real_T Product_f0;                   /* '<S230>/Product' */
  real_T Product1_m;                   /* '<S230>/Product1' */
  real_T Sum1_n;                       /* '<S230>/Sum1' */
  real_T Gain_a;                       /* '<S230>/Gain' */
  real_T Product4_g;                   /* '<S230>/Product4' */
  real_T Product6_h;                   /* '<S230>/Product6' */
  real_T Product7_f;                   /* '<S230>/Product7' */
  real_T Sum3_i;                       /* '<S230>/Sum3' */
  real_T Gain2_b;                      /* '<S230>/Gain2' */
  real_T Product8_o;                   /* '<S230>/Product8' */
  real_T Product2_ak;                  /* '<S230>/Product2' */
  real_T Product3_as;                  /* '<S230>/Product3' */
  real_T Sum2_ls;                      /* '<S230>/Sum2' */
  real_T Gain1_d;                      /* '<S230>/Gain1' */
  real_T Product5_j;                   /* '<S230>/Product5' */
  real_T Sum_k;                        /* '<S230>/Sum' */
  real_T Product_n;                    /* '<S231>/Product' */
  real_T Product1_o;                   /* '<S231>/Product1' */
  real_T Sum1_j;                       /* '<S231>/Sum1' */
  real_T Gain_iw;                      /* '<S231>/Gain' */
  real_T Product4_a;                   /* '<S231>/Product4' */
  real_T Product2_n;                   /* '<S231>/Product2' */
  real_T Product3_n;                   /* '<S231>/Product3' */
  real_T Sum2_k;                       /* '<S231>/Sum2' */
  real_T Gain1_io;                     /* '<S231>/Gain1' */
  real_T Product5_m;                   /* '<S231>/Product5' */
  real_T Product6_j;                   /* '<S231>/Product6' */
  real_T Product7_h;                   /* '<S231>/Product7' */
  real_T Sum3_f;                       /* '<S231>/Sum3' */
  real_T Gain2_c;                      /* '<S231>/Gain2' */
  real_T Product8_e;                   /* '<S231>/Product8' */
  real_T Sum_nm;                       /* '<S231>/Sum' */
  real_T TmpSignalConversionAtDotProdu_f[3];
  real_T DotProduct3;                  /* '<S157>/Dot Product3' */
  real_T DotProduct1;                  /* '<S157>/Dot Product1' */
  real_T DotProduct2;                  /* '<S157>/Dot Product2' */
  real_T Divide1;                      /* '<S157>/Divide1' */
  real_T Sqrt3;                        /* '<S157>/Sqrt3' */
  real_T Divide;                       /* '<S157>/Divide' */
  real_T Bias;                         /* '<S157>/Bias' */
  real_T Abs;                          /* '<S157>/Abs' */
  real_T Bias1;                        /* '<S157>/Bias1' */
  real_T Abs1;                         /* '<S157>/Abs1' */
  real_T Merge_b;                      /* '<S157>/Merge' */
  real_T DotProduct3_h;                /* '<S162>/Dot Product3' */
  real_T DotProduct2_a;                /* '<S162>/Dot Product2' */
  real_T Divide1_a;                    /* '<S162>/Divide1' */
  real_T Sqrt3_k;                      /* '<S162>/Sqrt3' */
  real_T Add2;                         /* '<S162>/Add2' */
  real_T Product_g0;                   /* '<S196>/Product' */
  real_T DotProduct3_k;                /* '<S183>/Dot Product3' */
  real_T DotProduct2_g;                /* '<S183>/Dot Product2' */
  real_T Divide1_e;                    /* '<S183>/Divide1' */
  real_T Sqrt3_f;                      /* '<S183>/Sqrt3' */
  real_T Divide_c;                     /* '<S183>/Divide' */
  real_T Bias_l;                       /* '<S183>/Bias' */
  real_T Abs_n;                        /* '<S183>/Abs' */
  real_T Bias1_f;                      /* '<S183>/Bias1' */
  real_T Abs1_p;                       /* '<S183>/Abs1' */
  real_T Merge_d;                      /* '<S183>/Merge' */
  real_T is180degRot[3];               /* '<S162>/is 180deg Rot' */
  real_T Product1_lm;                  /* '<S196>/Product1' */
  real_T Product2_n1;                  /* '<S196>/Product2' */
  real_T Product3_cn;                  /* '<S196>/Product3' */
  real_T Sum_oe;                       /* '<S196>/Sum' */
  real_T sqrt_e;                       /* '<S195>/sqrt' */
  real_T Product_i;                    /* '<S186>/Product' */
  real_T jxk;                          /* '<S220>/j x k' */
  real_T kxi;                          /* '<S220>/k x i' */
  real_T ixj;                          /* '<S220>/i x j' */
  real_T kxj;                          /* '<S221>/k x j' */
  real_T ixk;                          /* '<S221>/i x k' */
  real_T jxi;                          /* '<S221>/j x i' */
  real_T Sum_pc[3];                    /* '<S218>/Sum' */
  real_T jxk_o;                        /* '<S222>/j x k' */
  real_T kxi_c;                        /* '<S222>/k x i' */
  real_T ixj_g;                        /* '<S222>/i x j' */
  real_T kxj_k;                        /* '<S223>/k x j' */
  real_T ixk_b;                        /* '<S223>/i x k' */
  real_T jxi_n;                        /* '<S223>/j x i' */
  real_T Sum_i[3];                     /* '<S219>/Sum' */
  real_T Product2_od;                  /* '<S186>/Product2' */
  real_T Product_mz;                   /* '<S181>/Product' */
  real_T Product1_d;                   /* '<S186>/Product1' */
  real_T Product1_fo;                  /* '<S181>/Product1' */
  real_T Product2_os;                  /* '<S181>/Product2' */
  real_T Product3_d2;                  /* '<S186>/Product3' */
  real_T Product3_f;                   /* '<S181>/Product3' */
  real_T Sum_fi;                       /* '<S181>/Sum' */
  real_T sqrt_e2;                      /* '<S180>/sqrt' */
  real_T Product2_at;                  /* '<S176>/Product2' */
  real_T Product6_c;                   /* '<S177>/Product6' */
  real_T Product3_b;                   /* '<S176>/Product3' */
  real_T Product7_cz;                  /* '<S177>/Product7' */
  real_T Sum3_b;                       /* '<S177>/Sum3' */
  real_T Gain2_ce;                     /* '<S177>/Gain2' */
  real_T Product8_pp;                  /* '<S177>/Product8' */
  real_T Product1_j;                   /* '<S176>/Product1' */
  real_T Product_p;                    /* '<S177>/Product' */
  real_T Product_d;                    /* '<S176>/Product' */
  real_T Product1_ji;                  /* '<S177>/Product1' */
  real_T Sum1_a;                       /* '<S177>/Sum1' */
  real_T Gain_n;                       /* '<S177>/Gain' */
  real_T Product4_p;                   /* '<S177>/Product4' */
  real_T Product2_am;                  /* '<S177>/Product2' */
  real_T Product3_jh;                  /* '<S177>/Product3' */
  real_T Sum2_c;                       /* '<S177>/Sum2' */
  real_T Gain1_c;                      /* '<S177>/Gain1' */
  real_T Product5_b;                   /* '<S177>/Product5' */
  real_T Sum_j;                        /* '<S177>/Sum' */
  real_T Product_b;                    /* '<S178>/Product' */
  real_T Product1_mo;                  /* '<S178>/Product1' */
  real_T Sum1_pk;                      /* '<S178>/Sum1' */
  real_T Gain_l;                       /* '<S178>/Gain' */
  real_T Product4_h;                   /* '<S178>/Product4' */
  real_T Product6_kv;                  /* '<S178>/Product6' */
  real_T Product7_m;                   /* '<S178>/Product7' */
  real_T Sum3_d;                       /* '<S178>/Sum3' */
  real_T Gain2_p0;                     /* '<S178>/Gain2' */
  real_T Product8_j;                   /* '<S178>/Product8' */
  real_T Product2_gn;                  /* '<S178>/Product2' */
  real_T Product3_nm;                  /* '<S178>/Product3' */
  real_T Sum2_d;                       /* '<S178>/Sum2' */
  real_T Gain1_m;                      /* '<S178>/Gain1' */
  real_T Product5_nw;                  /* '<S178>/Product5' */
  real_T Sum_m4;                       /* '<S178>/Sum' */
  real_T Product_bs;                   /* '<S179>/Product' */
  real_T Product1_ie;                  /* '<S179>/Product1' */
  real_T Sum1_b;                       /* '<S179>/Sum1' */
  real_T Gain_iy;                      /* '<S179>/Gain' */
  real_T Product4_lc;                  /* '<S179>/Product4' */
  real_T Product2_h;                   /* '<S179>/Product2' */
  real_T Product3_ev;                  /* '<S179>/Product3' */
  real_T Sum2_g;                       /* '<S179>/Sum2' */
  real_T Gain1_ck;                     /* '<S179>/Gain1' */
  real_T Product5_i1;                  /* '<S179>/Product5' */
  real_T Product6_b;                   /* '<S179>/Product6' */
  real_T Product7_hk;                  /* '<S179>/Product7' */
  real_T Sum3_o;                       /* '<S179>/Sum3' */
  real_T Gain2_d;                      /* '<S179>/Gain2' */
  real_T Product8_c;                   /* '<S179>/Product8' */
  real_T Sum_ld;                       /* '<S179>/Sum' */
  real_T TmpSignalConversionAtDotProdu_d[3];
  real_T DotProduct3_l;                /* '<S198>/Dot Product3' */
  real_T DotProduct2_gh;               /* '<S198>/Dot Product2' */
  real_T Divide1_f;                    /* '<S198>/Divide1' */
  real_T Sqrt3_e;                      /* '<S198>/Sqrt3' */
  real_T Divide_i;                     /* '<S198>/Divide' */
  real_T Bias_b;                       /* '<S198>/Bias' */
  real_T Abs_l;                        /* '<S198>/Abs' */
  real_T Bias1_e;                      /* '<S198>/Bias1' */
  real_T Abs1_l;                       /* '<S198>/Abs1' */
  real_T Merge_f;                      /* '<S198>/Merge' */
  real_T Switch[4];                    /* '<S141>/Switch' */
  real_T Product_do;                   /* '<S241>/Product' */
  real_T Product1_h;                   /* '<S241>/Product1' */
  real_T Product2_p;                   /* '<S241>/Product2' */
  real_T Product3_pz;                  /* '<S241>/Product3' */
  real_T Sum_a;                        /* '<S241>/Sum' */
  real_T sqrt_k;                       /* '<S240>/sqrt' */
  real_T Product_mw;                   /* '<S235>/Product' */
  real_T Product1_lc;                  /* '<S235>/Product1' */
  real_T Product2_el;                  /* '<S235>/Product2' */
  real_T Product3_e1;                  /* '<S235>/Product3' */
  real_T fcn3;                         /* '<S138>/fcn3' */
  real_T Merge_j;                      /* '<S236>/Merge' */
  real_T fcn1;                         /* '<S138>/fcn1' */
  real_T fcn2;                         /* '<S138>/fcn2' */
  real_T fcn4;                         /* '<S138>/fcn4' */
  real_T fcn5;                         /* '<S138>/fcn5' */
  real_T is180degRot_m[3];             /* '<S163>/is 180deg Rot' */
  real_T Product3_jn;                  /* '<S211>/Product3' */
  real_T Product2_nf;                  /* '<S211>/Product2' */
  real_T Product1_az;                  /* '<S211>/Product1' */
  real_T DotProduct2_p;                /* '<S163>/Dot Product2' */
  real_T Divide1_d;                    /* '<S163>/Divide1' */
  real_T Sqrt3_o;                      /* '<S163>/Sqrt3' */
  real_T DotProduct3_j;                /* '<S163>/Dot Product3' */
  real_T Add2_p;                       /* '<S163>/Add2' */
  real_T Product_o;                    /* '<S211>/Product' */
  real_T Sum_o2;                       /* '<S211>/Sum' */
  real_T sqrt_ee;                      /* '<S210>/sqrt' */
  real_T Product3_i;                   /* '<S201>/Product3' */
  real_T Product3_jp;                  /* '<S172>/Product3' */
  real_T Product2_c;                   /* '<S201>/Product2' */
  real_T Product2_cn;                  /* '<S172>/Product2' */
  real_T Product1_dr;                  /* '<S201>/Product1' */
  real_T Product1_j4;                  /* '<S172>/Product1' */
  real_T Product_or;                   /* '<S201>/Product' */
  real_T Product_c;                    /* '<S172>/Product' */
  real_T Sum_id;                       /* '<S172>/Sum' */
  real_T Product3_ic;                  /* '<S173>/Product3' */
  real_T Product2_d;                   /* '<S173>/Product2' */
  real_T Product1_nc;                  /* '<S173>/Product1' */
  real_T Product_k;                    /* '<S173>/Product' */
  real_T Sum_c;                        /* '<S173>/Sum' */
  real_T Product3_ht;                  /* '<S174>/Product3' */
  real_T Product2_mx;                  /* '<S174>/Product2' */
  real_T Product1_jk;                  /* '<S174>/Product1' */
  real_T Product_kq;                   /* '<S174>/Product' */
  real_T Sum_ct;                       /* '<S174>/Sum' */
  real_T Product3_fq;                  /* '<S175>/Product3' */
  real_T Product2_eb;                  /* '<S175>/Product2' */
  real_T Product1_ac;                  /* '<S175>/Product1' */
  real_T Product_gm;                   /* '<S175>/Product' */
  real_T Sum_g;                        /* '<S175>/Sum' */
  real_T jxi_d;                        /* '<S203>/j x i' */
  real_T ixk_a;                        /* '<S203>/i x k' */
  real_T kxj_l;                        /* '<S203>/k x j' */
  real_T ixj_k;                        /* '<S202>/i x j' */
  real_T kxi_m;                        /* '<S202>/k x i' */
  real_T jxk_p;                        /* '<S202>/j x k' */
  real_T Sum_gy[3];                    /* '<S197>/Sum' */
  real_T jxi_a;                        /* '<S188>/j x i' */
  real_T ixk_o;                        /* '<S188>/i x k' */
  real_T kxj_j;                        /* '<S188>/k x j' */
  real_T ixj_l;                        /* '<S187>/i x j' */
  real_T kxi_n;                        /* '<S187>/k x i' */
  real_T jxk_n;                        /* '<S187>/j x k' */
  real_T Sum_d[3];                     /* '<S182>/Sum' */
  real_T Gain_h[3];                    /* '<S10>/Gain' */
  real_T Product_cs;                   /* '<S121>/Product' */
  real_T UnaryMinus_e;                 /* '<S8>/Unary Minus' */
  real_T Product1_p;                   /* '<S121>/Product1' */
  real_T UnaryMinus1_d;                /* '<S8>/Unary Minus1' */
  real_T Product2_j;                   /* '<S121>/Product2' */
  real_T UnaryMinus2_f;                /* '<S8>/Unary Minus2' */
  real_T Product3_ii;                  /* '<S121>/Product3' */
  real_T Sum_p4;                       /* '<S121>/Sum' */
  real_T sqrt_o5;                      /* '<S120>/sqrt' */
  real_T Product_ks;                   /* '<S119>/Product' */
  real_T Product_bb;                   /* '<S22>/Product' */
  real_T Product1_l0;                  /* '<S119>/Product1' */
  real_T UnaryMinus_ec;                /* '<S118>/Unary Minus' */
  real_T Product1_me;                  /* '<S22>/Product1' */
  real_T Product2_pc;                  /* '<S119>/Product2' */
  real_T UnaryMinus1_e;                /* '<S118>/Unary Minus1' */
  real_T Product2_i;                   /* '<S22>/Product2' */
  real_T Product3_c3;                  /* '<S119>/Product3' */
  real_T UnaryMinus2_k;                /* '<S118>/Unary Minus2' */
  real_T Product3_ff;                  /* '<S22>/Product3' */
  real_T Sum_ke;                       /* '<S22>/Sum' */
  real_T sqrt_la;                      /* '<S21>/sqrt' */
  real_T Product_gl;                   /* '<S17>/Product' */
  real_T Product1_gs;                  /* '<S17>/Product1' */
  real_T Product2_ef;                  /* '<S17>/Product2' */
  real_T Product3_fp;                  /* '<S17>/Product3' */
  real_T Product_fo;                   /* '<S18>/Product' */
  real_T Product1_b;                   /* '<S18>/Product1' */
  real_T Sum1_h;                       /* '<S18>/Sum1' */
  real_T Gain_lp;                      /* '<S18>/Gain' */
  real_T Product2_js;                  /* '<S18>/Product2' */
  real_T Product3_hw;                  /* '<S18>/Product3' */
  real_T Sum2_i;                       /* '<S18>/Sum2' */
  real_T Gain1_o;                      /* '<S18>/Gain1' */
  real_T Product6_m;                   /* '<S18>/Product6' */
  real_T Product7_k2;                  /* '<S18>/Product7' */
  real_T Sum3_c;                       /* '<S18>/Sum3' */
  real_T Gain2_cx;                     /* '<S18>/Gain2' */
  real_T Product4_f;                   /* '<S18>/Product4' */
  real_T Product5_f;                   /* '<S18>/Product5' */
  real_T Product8_ao;                  /* '<S18>/Product8' */
  real_T Sum_ah;                       /* '<S18>/Sum' */
  real_T Product_pp;                   /* '<S19>/Product' */
  real_T Product1_p3;                  /* '<S19>/Product1' */
  real_T Sum1_i;                       /* '<S19>/Sum1' */
  real_T Gain_ie;                      /* '<S19>/Gain' */
  real_T Product2_f;                   /* '<S19>/Product2' */
  real_T Product3_m;                   /* '<S19>/Product3' */
  real_T Sum2_f;                       /* '<S19>/Sum2' */
  real_T Gain1_l;                      /* '<S19>/Gain1' */
  real_T Product6_iz;                  /* '<S19>/Product6' */
  real_T Product7_e;                   /* '<S19>/Product7' */
  real_T Sum3_op;                      /* '<S19>/Sum3' */
  real_T Gain2_e;                      /* '<S19>/Gain2' */
  real_T Product4_o;                   /* '<S19>/Product4' */
  real_T Product5_ji;                  /* '<S19>/Product5' */
  real_T Product8_f;                   /* '<S19>/Product8' */
  real_T Sum_pcb;                      /* '<S19>/Sum' */
  real_T Product_ce;                   /* '<S20>/Product' */
  real_T Product1_mx;                  /* '<S20>/Product1' */
  real_T Sum1_m;                       /* '<S20>/Sum1' */
  real_T Gain_ab;                      /* '<S20>/Gain' */
  real_T Product2_av;                  /* '<S20>/Product2' */
  real_T Product3_cx;                  /* '<S20>/Product3' */
  real_T Sum2_o;                       /* '<S20>/Sum2' */
  real_T Gain1_g;                      /* '<S20>/Gain1' */
  real_T Product6_l;                   /* '<S20>/Product6' */
  real_T Product7_l;                   /* '<S20>/Product7' */
  real_T Sum3_a;                       /* '<S20>/Sum3' */
  real_T Gain2_o;                      /* '<S20>/Gain2' */
  real_T Product4_gi;                  /* '<S20>/Product4' */
  real_T Product5_my;                  /* '<S20>/Product5' */
  real_T Product8_gb;                  /* '<S20>/Product8' */
  real_T Sum_ml;                       /* '<S20>/Sum' */
  real_T DotProduct;                   /* '<S23>/Dot Product' */
  real_T jxk_pl;                       /* '<S38>/j x k' */
  real_T kxi_a;                        /* '<S38>/k x i' */
  real_T ixj_d;                        /* '<S38>/i x j' */
  real_T kxj_e;                        /* '<S39>/k x j' */
  real_T ixk_g;                        /* '<S39>/i x k' */
  real_T jxi_g;                        /* '<S39>/j x i' */
  real_T Sum_mp[3];                    /* '<S32>/Sum' */
  real_T jxk_c;                        /* '<S40>/j x k' */
  real_T kxi_na;                       /* '<S40>/k x i' */
  real_T ixj_p;                        /* '<S40>/i x j' */
  real_T kxj_d;                        /* '<S41>/k x j' */
  real_T ixk_h;                        /* '<S41>/i x k' */
  real_T jxi_gk;                       /* '<S41>/j x i' */
  real_T Sum_co[3];                    /* '<S34>/Sum' */
  real_T jxk_o5;                       /* '<S42>/j x k' */
  real_T kxi_f;                        /* '<S42>/k x i' */
  real_T ixj_lo;                       /* '<S42>/i x j' */
  real_T kxj_o;                        /* '<S43>/k x j' */
  real_T ixk_ab;                       /* '<S43>/i x k' */
  real_T jxi_j;                        /* '<S43>/j x i' */
  real_T Sum_jr[3];                    /* '<S35>/Sum' */
  real_T divide2[3];                   /* '<S23>/divide2' */
  real_T r;                            /* '<S23>/|r|' */
  real_T divide3[3];                   /* '<S23>/divide3' */
  real_T evxhmurr[3];                 /* '<S23>/e = (v x h) // mu - r // |r|' */
  real_T DotProduct1_b;                /* '<S23>/Dot Product1' */
  real_T DotProduct2_m;                /* '<S23>/Dot Product2' */
  real_T DotProduct3_h4;               /* '<S23>/Dot Product3' */
  real_T DotProduct4;                  /* '<S23>/Dot Product4' */
  real_T DotProduct5;                  /* '<S23>/Dot Product5' */
  real_T DotProduct6;                  /* '<S23>/Dot Product6' */
  real_T n;                            /* '<S23>/|n|' */
  real_T e;                            /* '<S23>/|e|' */
  real_T Product_k3;                   /* '<S23>/Product' */
  real_T Product1_e;                   /* '<S23>/Product1' */
  real_T divide;                       /* '<S23>/divide' */
  real_T Min;                          /* '<S30>/Min' */
  real_T Max;                          /* '<S30>/Max' */
  real_T RAANacosn_in;                 /* '<S23>/RAAN = acos(n_i // |n|)' */
  real_T n_j0;                         /* '<S23>/n_j < 0' */
  real_T h;                            /* '<S23>/|h|' */
  real_T divide1;                      /* '<S23>/divide1' */
  real_T Min_n;                        /* '<S31>/Min' */
  real_T Max_p;                        /* '<S31>/Max' */
  real_T iacosh_kh;                    /* '<S23>/i = acos(h_k // |h|)' */
  real_T divide4;                      /* '<S23>/divide4' */
  real_T Min_a;                        /* '<S29>/Min' */
  real_T Max_b;                        /* '<S29>/Max' */
  real_T argPacosnene;                 /* '<S23>/argP = acos(n.e//|n||e|)' */
  real_T e_k0;                         /* '<S23>/e_k < 0' */
  real_T divide5;                      /* '<S23>/divide5' */
  real_T Min_ni;                       /* '<S28>/Min' */
  real_T Max_pd;                       /* '<S28>/Max' */
  real_T nuacoserer;                   /* '<S23>/nu = acos(e.r//|e||r|)' */
  real_T rv0;                          /* '<S23>/r.v < 0' */
  real_T Sum3_p;                       /* '<S23>/Sum3' */
  real_T u2[3];                        /* '<S33>/1//2' */
  real_T sincos_o1[3];                 /* '<S33>/sincos' */
  real_T sincos_o2[3];                 /* '<S33>/sincos' */
  real_T q0;                           /* '<S33>/q0' */
  real_T Product_gh;                   /* '<S37>/Product' */
  real_T q1;                           /* '<S33>/q1' */
  real_T Product1_g5;                  /* '<S37>/Product1' */
  real_T q2;                           /* '<S33>/q2' */
  real_T Product2_ay;                  /* '<S37>/Product2' */
  real_T q3;                           /* '<S33>/q3' */
  real_T Product3_o;                   /* '<S37>/Product3' */
  real_T Sum_b;                        /* '<S37>/Sum' */
  real_T sqrt_p;                       /* '<S36>/sqrt' */
  real_T Product_pg;                   /* '<S27>/Product' */
  real_T Product1_c;                   /* '<S27>/Product1' */
  real_T Product2_oj;                  /* '<S27>/Product2' */
  real_T Product3_ch;                  /* '<S27>/Product3' */
  real_T Product_a;                    /* '<S49>/Product' */
  real_T Product1_hu;                  /* '<S49>/Product1' */
  real_T Product2_dr;                  /* '<S49>/Product2' */
  real_T Product3_do;                  /* '<S49>/Product3' */
  real_T Sum_cx;                       /* '<S49>/Sum' */
  real_T sqrt_b;                       /* '<S48>/sqrt' */
  real_T Product_on;                   /* '<S26>/Product' */
  real_T Product_ke;                   /* '<S45>/Product' */
  real_T Product1_ar;                  /* '<S26>/Product1' */
  real_T Product1_en;                  /* '<S45>/Product1' */
  real_T Product2_ov;                  /* '<S26>/Product2' */
  real_T Product2_gu;                  /* '<S45>/Product2' */
  real_T Product3_hh;                  /* '<S26>/Product3' */
  real_T Product3_hw3;                 /* '<S45>/Product3' */
  real_T Sum_dh;                       /* '<S45>/Sum' */
  real_T UnaryMinus_eq;                /* '<S24>/Unary Minus' */
  real_T Product_orf;                  /* '<S46>/Product' */
  real_T Product1_gs1;                 /* '<S46>/Product1' */
  real_T Product2_amg;                 /* '<S46>/Product2' */
  real_T Product3_ou;                  /* '<S46>/Product3' */
  real_T Sum_fc;                       /* '<S46>/Sum' */
  real_T UnaryMinus1_o;                /* '<S24>/Unary Minus1' */
  real_T Product_hl;                   /* '<S47>/Product' */
  real_T Product1_iu;                  /* '<S47>/Product1' */
  real_T Product2_m4;                  /* '<S47>/Product2' */
  real_T Product3_ax;                  /* '<S47>/Product3' */
  real_T Sum_cw;                       /* '<S47>/Sum' */
  real_T UnaryMinus2_e;                /* '<S24>/Unary Minus2' */
  real_T Product_e4;                   /* '<S44>/Product' */
  real_T Product1_o4;                  /* '<S44>/Product1' */
  real_T Product2_do;                  /* '<S44>/Product2' */
  real_T Product3_dd;                  /* '<S44>/Product3' */
  real_T Sum_bg;                       /* '<S44>/Sum' */
  real_T Merge_k;                      /* '<S50>/Merge' */
  real_T TmpSignalConversionAtDotProdu_k[3];
  real_T Product_pp0;                  /* '<S127>/Product' */
  real_T Product1_hp;                  /* '<S127>/Product1' */
  real_T Product2_fv;                  /* '<S127>/Product2' */
  real_T Product3_k;                   /* '<S127>/Product3' */
  real_T Sum_ik;                       /* '<S127>/Sum' */
  real_T sqrt_g;                       /* '<S126>/sqrt' */
  real_T Product2_ah;                  /* '<S122>/Product2' */
  real_T Product6_g;                   /* '<S123>/Product6' */
  real_T Product3_dn;                  /* '<S122>/Product3' */
  real_T Product7_hr;                  /* '<S123>/Product7' */
  real_T Sum3_hf;                      /* '<S123>/Sum3' */
  real_T Gain2_dd;                     /* '<S123>/Gain2' */
  real_T Product8_b;                   /* '<S123>/Product8' */
  real_T Product1_l1;                  /* '<S122>/Product1' */
  real_T Product_co;                   /* '<S123>/Product' */
  real_T Product_ki;                   /* '<S122>/Product' */
  real_T Product1_hh;                  /* '<S123>/Product1' */
  real_T Sum1_ax;                      /* '<S123>/Sum1' */
  real_T Gain_e;                       /* '<S123>/Gain' */
  real_T Product4_b;                   /* '<S123>/Product4' */
  real_T Product2_k3;                  /* '<S123>/Product2' */
  real_T Product3_oa;                  /* '<S123>/Product3' */
  real_T Sum2_ib;                      /* '<S123>/Sum2' */
  real_T Gain1_lm;                     /* '<S123>/Gain1' */
  real_T Product5_fa;                  /* '<S123>/Product5' */
  real_T Sum_mj;                       /* '<S123>/Sum' */
  real_T Product_i2;                   /* '<S124>/Product' */
  real_T Product1_ir;                  /* '<S124>/Product1' */
  real_T Sum1_g;                       /* '<S124>/Sum1' */
  real_T Gain_gi;                      /* '<S124>/Gain' */
  real_T Product4_oz;                  /* '<S124>/Product4' */
  real_T Product6_gv;                  /* '<S124>/Product6' */
  real_T Product7_i;                   /* '<S124>/Product7' */
  real_T Sum3_cr;                      /* '<S124>/Sum3' */
  real_T Gain2_m;                      /* '<S124>/Gain2' */
  real_T Product8_bm;                  /* '<S124>/Product8' */
  real_T Product2_ps;                  /* '<S124>/Product2' */
  real_T Product3_b1;                  /* '<S124>/Product3' */
  real_T Sum2_a;                       /* '<S124>/Sum2' */
  real_T Gain1_h;                      /* '<S124>/Gain1' */
  real_T Product5_nv;                  /* '<S124>/Product5' */
  real_T Sum_ia;                       /* '<S124>/Sum' */
  real_T Product_c2;                   /* '<S125>/Product' */
  real_T Product1_om;                  /* '<S125>/Product1' */
  real_T Sum1_h1;                      /* '<S125>/Sum1' */
  real_T Gain_lx;                      /* '<S125>/Gain' */
  real_T Product4_fe;                  /* '<S125>/Product4' */
  real_T Product2_gr;                  /* '<S125>/Product2' */
  real_T Product3_ju;                  /* '<S125>/Product3' */
  real_T Sum2_h;                       /* '<S125>/Sum2' */
  real_T Gain1_b;                      /* '<S125>/Gain1' */
  real_T Product5_k;                   /* '<S125>/Product5' */
  real_T Product6_bb;                  /* '<S125>/Product6' */
  real_T Product7_p;                   /* '<S125>/Product7' */
  real_T Sum3_n;                       /* '<S125>/Sum3' */
  real_T Gain2_a;                      /* '<S125>/Gain2' */
  real_T Product8_i;                   /* '<S125>/Product8' */
  real_T Sum_kr;                       /* '<S125>/Sum' */
  real_T TmpSignalConversionAtDotProdu_j[3];
  real_T DotProduct3_o;                /* '<S51>/Dot Product3' */
  real_T DotProduct1_n;                /* '<S51>/Dot Product1' */
  real_T DotProduct2_c;                /* '<S51>/Dot Product2' */
  real_T Divide1_n;                    /* '<S51>/Divide1' */
  real_T Sqrt3_a;                      /* '<S51>/Sqrt3' */
  real_T Divide_m;                     /* '<S51>/Divide' */
  real_T Bias_f;                       /* '<S51>/Bias' */
  real_T Abs_o;                        /* '<S51>/Abs' */
  real_T Bias1_p;                      /* '<S51>/Bias1' */
  real_T Abs1_o;                       /* '<S51>/Abs1' */
  real_T Merge_o;                      /* '<S51>/Merge' */
  real_T DotProduct3_n;                /* '<S56>/Dot Product3' */
  real_T DotProduct2_k;                /* '<S56>/Dot Product2' */
  real_T Divide1_nh;                   /* '<S56>/Divide1' */
  real_T Sqrt3_n;                      /* '<S56>/Sqrt3' */
  real_T Add2_c;                       /* '<S56>/Add2' */
  real_T Product_e0;                   /* '<S90>/Product' */
  real_T DotProduct3_b;                /* '<S77>/Dot Product3' */
  real_T DotProduct2_n;                /* '<S77>/Dot Product2' */
  real_T Divide1_nj;                   /* '<S77>/Divide1' */
  real_T Sqrt3_ko;                     /* '<S77>/Sqrt3' */
  real_T Divide_l;                     /* '<S77>/Divide' */
  real_T Bias_a;                       /* '<S77>/Bias' */
  real_T Abs_m;                        /* '<S77>/Abs' */
  real_T Bias1_m;                      /* '<S77>/Bias1' */
  real_T Abs1_m;                       /* '<S77>/Abs1' */
  real_T Merge_a;                      /* '<S77>/Merge' */
  real_T is180degRot_p[3];             /* '<S56>/is 180deg Rot' */
  real_T Product1_k;                   /* '<S90>/Product1' */
  real_T Product2_hd;                  /* '<S90>/Product2' */
  real_T Product3_hx;                  /* '<S90>/Product3' */
  real_T Sum_p1;                       /* '<S90>/Sum' */
  real_T sqrt_e5;                      /* '<S89>/sqrt' */
  real_T Product_fd;                   /* '<S80>/Product' */
  real_T jxk_i;                        /* '<S114>/j x k' */
  real_T kxi_p;                        /* '<S114>/k x i' */
  real_T ixj_gk;                       /* '<S114>/i x j' */
  real_T kxj_n;                        /* '<S115>/k x j' */
  real_T ixk_hg;                       /* '<S115>/i x k' */
  real_T jxi_dy;                       /* '<S115>/j x i' */
  real_T Sum_ab[3];                    /* '<S112>/Sum' */
  real_T jxk_h;                        /* '<S116>/j x k' */
  real_T kxi_f2;                       /* '<S116>/k x i' */
  real_T ixj_e;                        /* '<S116>/i x j' */
  real_T kxj_op;                       /* '<S117>/k x j' */
  real_T ixk_k;                        /* '<S117>/i x k' */
  real_T jxi_g0;                       /* '<S117>/j x i' */
  real_T Sum_gf[3];                    /* '<S113>/Sum' */
  real_T Product2_jl;                  /* '<S80>/Product2' */
  real_T Product_l;                    /* '<S75>/Product' */
  real_T Product1_ex;                  /* '<S80>/Product1' */
  real_T Product1_ef;                  /* '<S75>/Product1' */
  real_T Product2_b;                   /* '<S75>/Product2' */
  real_T Product3_l;                   /* '<S80>/Product3' */
  real_T Product3_hv;                  /* '<S75>/Product3' */
  real_T Sum_j3;                       /* '<S75>/Sum' */
  real_T sqrt_bh;                      /* '<S74>/sqrt' */
  real_T Product2_g5;                  /* '<S70>/Product2' */
  real_T Product6_f;                   /* '<S71>/Product6' */
  real_T Product3_fb;                  /* '<S70>/Product3' */
  real_T Product7_d;                   /* '<S71>/Product7' */
  real_T Sum3_dm;                      /* '<S71>/Sum3' */
  real_T Gain2_mk;                     /* '<S71>/Gain2' */
  real_T Product8_pc;                  /* '<S71>/Product8' */
  real_T Product1_o5;                  /* '<S70>/Product1' */
  real_T Product_ak;                   /* '<S71>/Product' */
  real_T Product_im;                   /* '<S70>/Product' */
  real_T Product1_jv;                  /* '<S71>/Product1' */
  real_T Sum1_jd;                      /* '<S71>/Sum1' */
  real_T Gain_bh;                      /* '<S71>/Gain' */
  real_T Product4_j;                   /* '<S71>/Product4' */
  real_T Product2_ls;                  /* '<S71>/Product2' */
  real_T Product3_kc;                  /* '<S71>/Product3' */
  real_T Sum2_d4;                      /* '<S71>/Sum2' */
  real_T Gain1_a;                      /* '<S71>/Gain1' */
  real_T Product5_jf;                  /* '<S71>/Product5' */
  real_T Sum_ev;                       /* '<S71>/Sum' */
  real_T Product_j;                    /* '<S72>/Product' */
  real_T Product1_bo;                  /* '<S72>/Product1' */
  real_T Sum1_cy;                      /* '<S72>/Sum1' */
  real_T Gain_n4;                      /* '<S72>/Gain' */
  real_T Product4_mx;                  /* '<S72>/Product4' */
  real_T Product6_mq;                  /* '<S72>/Product6' */
  real_T Product7_cs;                  /* '<S72>/Product7' */
  real_T Sum3_g;                       /* '<S72>/Sum3' */
  real_T Gain2_g;                      /* '<S72>/Gain2' */
  real_T Product8_cw;                  /* '<S72>/Product8' */
  real_T Product2_a0;                  /* '<S72>/Product2' */
  real_T Product3_a4;                  /* '<S72>/Product3' */
  real_T Sum2_j;                       /* '<S72>/Sum2' */
  real_T Gain1_bl;                     /* '<S72>/Gain1' */
  real_T Product5_ge;                  /* '<S72>/Product5' */
  real_T Sum_ow;                       /* '<S72>/Sum' */
  real_T Product_b3;                   /* '<S73>/Product' */
  real_T Product1_ph;                  /* '<S73>/Product1' */
  real_T Sum1_b2;                      /* '<S73>/Sum1' */
  real_T Gain_lj;                      /* '<S73>/Gain' */
  real_T Product4_pw;                  /* '<S73>/Product4' */
  real_T Product2_cw;                  /* '<S73>/Product2' */
  real_T Product3_ix;                  /* '<S73>/Product3' */
  real_T Sum2_dn;                      /* '<S73>/Sum2' */
  real_T Gain1_lm3;                    /* '<S73>/Gain1' */
  real_T Product5_jz;                  /* '<S73>/Product5' */
  real_T Product6_mo;                  /* '<S73>/Product6' */
  real_T Product7_mi;                  /* '<S73>/Product7' */
  real_T Sum3_al;                      /* '<S73>/Sum3' */
  real_T Gain2_pg;                     /* '<S73>/Gain2' */
  real_T Product8_bz;                  /* '<S73>/Product8' */
  real_T Sum_on;                       /* '<S73>/Sum' */
  real_T TmpSignalConversionAtDotProdu_c[3];
  real_T DotProduct3_m;                /* '<S92>/Dot Product3' */
  real_T DotProduct2_ck;               /* '<S92>/Dot Product2' */
  real_T Divide1_dp;                   /* '<S92>/Divide1' */
  real_T Sqrt3_av;                     /* '<S92>/Sqrt3' */
  real_T Divide_f;                     /* '<S92>/Divide' */
  real_T Bias_c;                       /* '<S92>/Bias' */
  real_T Abs_k;                        /* '<S92>/Abs' */
  real_T Bias1_fx;                     /* '<S92>/Bias1' */
  real_T Abs1_md;                      /* '<S92>/Abs1' */
  real_T Merge_di;                     /* '<S92>/Merge' */
  real_T Switch_p[4];                  /* '<S12>/Switch' */
  real_T Product_mx;                   /* '<S135>/Product' */
  real_T Product1_fz;                  /* '<S135>/Product1' */
  real_T Product2_p4;                  /* '<S135>/Product2' */
  real_T Product3_kb;                  /* '<S135>/Product3' */
  real_T Sum_ka;                       /* '<S135>/Sum' */
  real_T sqrt_j;                       /* '<S134>/sqrt' */
  real_T Product_j5;                   /* '<S129>/Product' */
  real_T Product1_ik;                  /* '<S129>/Product1' */
  real_T Product2_ev;                  /* '<S129>/Product2' */
  real_T Product3_fq1;                 /* '<S129>/Product3' */
  real_T fcn3_l;                       /* '<S9>/fcn3' */
  real_T Merge_c;                      /* '<S130>/Merge' */
  real_T fcn1_l;                       /* '<S9>/fcn1' */
  real_T fcn2_k;                       /* '<S9>/fcn2' */
  real_T fcn4_e;                       /* '<S9>/fcn4' */
  real_T fcn5_p;                       /* '<S9>/fcn5' */
  real_T is180degRot_o[3];             /* '<S57>/is 180deg Rot' */
  real_T Product3_fl;                  /* '<S105>/Product3' */
  real_T Product2_jr;                  /* '<S105>/Product2' */
  real_T Product1_ig;                  /* '<S105>/Product1' */
  real_T DotProduct2_ci;               /* '<S57>/Dot Product2' */
  real_T Divide1_nv;                   /* '<S57>/Divide1' */
  real_T Sqrt3_m;                      /* '<S57>/Sqrt3' */
  real_T DotProduct3_a;                /* '<S57>/Dot Product3' */
  real_T Add2_e;                       /* '<S57>/Add2' */
  real_T Product_f4;                   /* '<S105>/Product' */
  real_T Sum_gz;                       /* '<S105>/Sum' */
  real_T sqrt_c;                       /* '<S104>/sqrt' */
  real_T Product3_md;                  /* '<S95>/Product3' */
  real_T Product3_e5;                  /* '<S66>/Product3' */
  real_T Product2_pn;                  /* '<S95>/Product2' */
  real_T Product2_iy;                  /* '<S66>/Product2' */
  real_T Product1_di;                  /* '<S95>/Product1' */
  real_T Product1_g4;                  /* '<S66>/Product1' */
  real_T Product_hb;                   /* '<S95>/Product' */
  real_T Product_ek;                   /* '<S66>/Product' */
  real_T Sum_cu;                       /* '<S66>/Sum' */
  real_T Product3_g;                   /* '<S67>/Product3' */
  real_T Product2_gy;                  /* '<S67>/Product2' */
  real_T Product1_kh;                  /* '<S67>/Product1' */
  real_T Product_p5;                   /* '<S67>/Product' */
  real_T Sum_od;                       /* '<S67>/Sum' */
  real_T Product3_mq;                  /* '<S68>/Product3' */
  real_T Product2_o4z;                 /* '<S68>/Product2' */
  real_T Product1_iw;                  /* '<S68>/Product1' */
  real_T Product_hu;                   /* '<S68>/Product' */
  real_T Sum_krr;                      /* '<S68>/Sum' */
  real_T Product3_ics;                 /* '<S69>/Product3' */
  real_T Product2_au;                  /* '<S69>/Product2' */
  real_T Product1_a0;                  /* '<S69>/Product1' */
  real_T Product_nm;                   /* '<S69>/Product' */
  real_T Sum_mi;                       /* '<S69>/Sum' */
  real_T jxi_di;                       /* '<S97>/j x i' */
  real_T ixk_i;                        /* '<S97>/i x k' */
  real_T kxj_eu;                       /* '<S97>/k x j' */
  real_T ixj_h;                        /* '<S96>/i x j' */
  real_T kxi_k;                        /* '<S96>/k x i' */
  real_T jxk_hl;                       /* '<S96>/j x k' */
  real_T Sum_gh[3];                    /* '<S91>/Sum' */
  real_T jxi_l;                        /* '<S82>/j x i' */
  real_T ixk_l;                        /* '<S82>/i x k' */
  real_T kxj_b;                        /* '<S82>/k x j' */
  real_T ixj_j;                        /* '<S81>/i x j' */
  real_T kxi_o;                        /* '<S81>/k x i' */
  real_T jxk_hle;                      /* '<S81>/j x k' */
  real_T Sum_do[3];                    /* '<S76>/Sum' */
  real_T Sum2_fk;                      /* '<S23>/Sum2' */
  real_T Sum_e0;                       /* '<S23>/Sum' */
  real_T Sum1_d0;                      /* '<S23>/Sum1' */
  boolean_T Compare;                   /* '<S158>/Compare' */
  boolean_T Compare_c;                 /* '<S159>/Compare' */
  boolean_T OR;                        /* '<S141>/OR' */
  boolean_T Compare_m;                 /* '<S184>/Compare' */
  boolean_T Compare_j;                 /* '<S199>/Compare' */
  boolean_T Compare_f;                 /* '<S52>/Compare' */
  boolean_T Compare_l;                 /* '<S53>/Compare' */
  boolean_T OR_c;                      /* '<S12>/OR' */
  boolean_T Compare_fr;                /* '<S78>/Compare' */
  boolean_T Compare_b;                 /* '<S93>/Compare' */
};

/* Block states (default storage) for model 'asbCubeSatACS' */
struct DW_asbCubeSatACS_T {
  real_T Integrator_DSTATE[3];         /* '<S275>/Integrator' */
  real_T UD_DSTATE[3];                 /* '<S268>/UD' */
  uint8_T is_active_c1_asbCubeSatACS;  /* '<S1>/Pointing Mode Selection' */
  uint8_T is_c1_asbCubeSatACS;         /* '<S1>/Pointing Mode Selection' */
  uint8_T is_On;                       /* '<S1>/Pointing Mode Selection' */
};

/* Invariant block signals for model 'asbCubeSatACS' */
struct ConstB_asbCubeSatACS_h_T {
  real_T DotProduct3;                  /* '<S156>/Dot Product3' */
  real_T DotProduct1;                  /* '<S156>/Dot Product1' */
  real_T DotProduct2;                  /* '<S156>/Dot Product2' */
  real_T Divide1;                      /* '<S156>/Divide1' */
  real_T Sqrt3;                        /* '<S156>/Sqrt3' */
  real_T Divide;                       /* '<S156>/Divide' */
  real_T Bias;                         /* '<S156>/Bias' */
  real_T Abs;                          /* '<S156>/Abs' */
  real_T Bias1;                        /* '<S156>/Bias1' */
  real_T Abs1;                         /* '<S156>/Abs1' */
  real_T DotProduct1_f;                /* '<S183>/Dot Product1' */
  real_T DotProduct1_l;                /* '<S162>/Dot Product1' */
  real_T Gain;                         /* '<S185>/Gain' */
  real_T Gain2;                        /* '<S185>/Gain2' */
  real_T Switch3[3];                   /* '<S185>/Switch3' */
  real_T ixj;                          /* '<S193>/i x j' */
  real_T jxk;                          /* '<S193>/j x k' */
  real_T kxi;                          /* '<S193>/k x i' */
  real_T ixk;                          /* '<S194>/i x k' */
  real_T jxi;                          /* '<S194>/j x i' */
  real_T kxj;                          /* '<S194>/k x j' */
  real_T Sum[3];                       /* '<S192>/Sum' */
  real_T jxk_p;                        /* '<S214>/j x k' */
  real_T kxi_i;                        /* '<S214>/k x i' */
  real_T ixj_c;                        /* '<S214>/i x j' */
  real_T kxj_g;                        /* '<S215>/k x j' */
  real_T ixk_b;                        /* '<S215>/i x k' */
  real_T jxi_n;                        /* '<S215>/j x i' */
  real_T Sum_j[3];                     /* '<S212>/Sum' */
  real_T jxk_a;                        /* '<S216>/j x k' */
  real_T kxi_d;                        /* '<S216>/k x i' */
  real_T ixj_a;                        /* '<S216>/i x j' */
  real_T kxj_n;                        /* '<S217>/k x j' */
  real_T ixk_a;                        /* '<S217>/i x k' */
  real_T jxi_i;                        /* '<S217>/j x i' */
  real_T Sum_i[3];                     /* '<S213>/Sum' */
  real_T DotProduct1_h;                /* '<S198>/Dot Product1' */
  real_T DotProduct1_j;                /* '<S163>/Dot Product1' */
  real_T Gain_m;                       /* '<S200>/Gain' */
  real_T Gain2_h;                      /* '<S200>/Gain2' */
  real_T Switch3_g[3];                 /* '<S200>/Switch3' */
  real_T ixj_o;                        /* '<S208>/i x j' */
  real_T jxk_k;                        /* '<S208>/j x k' */
  real_T kxi_h;                        /* '<S208>/k x i' */
  real_T ixk_am;                       /* '<S209>/i x k' */
  real_T jxi_j;                        /* '<S209>/j x i' */
  real_T kxj_ng;                       /* '<S209>/k x j' */
  real_T Sum_iv[3];                    /* '<S207>/Sum' */
  real_T DotProduct3_f;                /* '<S50>/Dot Product3' */
  real_T DotProduct1_o;                /* '<S50>/Dot Product1' */
  real_T DotProduct2_a;                /* '<S50>/Dot Product2' */
  real_T Divide1_b;                    /* '<S50>/Divide1' */
  real_T Sqrt3_o;                      /* '<S50>/Sqrt3' */
  real_T Divide_p;                     /* '<S50>/Divide' */
  real_T Bias_l;                       /* '<S50>/Bias' */
  real_T Abs_m;                        /* '<S50>/Abs' */
  real_T Bias1_e;                      /* '<S50>/Bias1' */
  real_T Abs1_g;                       /* '<S50>/Abs1' */
  real_T DotProduct1_p;                /* '<S77>/Dot Product1' */
  real_T DotProduct1_hl;               /* '<S56>/Dot Product1' */
  real_T Gain_d;                       /* '<S79>/Gain' */
  real_T Gain2_b;                      /* '<S79>/Gain2' */
  real_T Switch3_e[3];                 /* '<S79>/Switch3' */
  real_T ixj_b;                        /* '<S87>/i x j' */
  real_T jxk_m;                        /* '<S87>/j x k' */
  real_T kxi_j;                        /* '<S87>/k x i' */
  real_T ixk_k;                        /* '<S88>/i x k' */
  real_T jxi_d;                        /* '<S88>/j x i' */
  real_T kxj_b;                        /* '<S88>/k x j' */
  real_T Sum_c[3];                     /* '<S86>/Sum' */
  real_T jxk_d;                        /* '<S108>/j x k' */
  real_T kxi_o;                        /* '<S108>/k x i' */
  real_T ixj_k;                        /* '<S108>/i x j' */
  real_T kxj_ge;                       /* '<S109>/k x j' */
  real_T ixk_c;                        /* '<S109>/i x k' */
  real_T jxi_nc;                       /* '<S109>/j x i' */
  real_T Sum_n[3];                     /* '<S106>/Sum' */
  real_T jxk_j;                        /* '<S110>/j x k' */
  real_T kxi_p;                        /* '<S110>/k x i' */
  real_T ixj_h;                        /* '<S110>/i x j' */
  real_T kxj_p;                        /* '<S111>/k x j' */
  real_T ixk_i;                        /* '<S111>/i x k' */
  real_T jxi_o;                        /* '<S111>/j x i' */
  real_T Sum_e[3];                     /* '<S107>/Sum' */
  real_T DotProduct1_b;                /* '<S92>/Dot Product1' */
  real_T DotProduct1_d;                /* '<S57>/Dot Product1' */
  real_T Gain_j;                       /* '<S94>/Gain' */
  real_T Gain2_j;                      /* '<S94>/Gain2' */
  real_T Switch3_gg[3];                /* '<S94>/Switch3' */
  real_T ixj_as;                       /* '<S102>/i x j' */
  real_T jxk_p5;                       /* '<S102>/j x k' */
  real_T kxi_g;                        /* '<S102>/k x i' */
  real_T ixk_ce;                       /* '<S103>/i x k' */
  real_T jxi_n2;                       /* '<S103>/j x i' */
  real_T kxj_i;                        /* '<S103>/k x j' */
  real_T Sum_ij[3];                    /* '<S101>/Sum' */
  boolean_T xz;                        /* '<S185>/x>z' */
  boolean_T xz_a;                      /* '<S200>/x>z' */
  boolean_T xz_m;                      /* '<S79>/x>z' */
  boolean_T xz_k;                      /* '<S94>/x>z' */
};

/* Real-time Model Data Structure */
struct tag_RTM_asbCubeSatACS_T {
  const char_T **errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[920];
    int32_T* vardimsAddress[920];
    RTWLoggingFcnPtr loggingPtrs[920];
  } DataMapInfo;
};

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  asbCubeSatACS_GetCAPIStaticMap(void);

/* Class declaration for model asbCubeSatACS */
class asbCubeSatACS final
{
  /* public data and function members */
 public:
  /* model initialize function */
  void initialize();

  /* Initial conditions function */
  void init(ACSOutBus *rty_ACSOut);

  /* Copy Constructor */
  asbCubeSatACS(asbCubeSatACS const&) = delete;

  /* Assignment Operator */
  asbCubeSatACS& operator= (asbCubeSatACS const&) & = delete;

  /* Move Constructor */
  asbCubeSatACS(asbCubeSatACS &&) = delete;

  /* Move Assignment Operator */
  asbCubeSatACS& operator= (asbCubeSatACS &&) = delete;

  /* Real-Time Model get method */
  RT_MODEL_asbCubeSatACS_T * getRTM();

  /* member function to set up the C-API information */
  void setupCAPIInfo(rtwCAPI_ModelMappingInfo *rt_ParentMMI, const char_T
                     *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx);

  /*member function to setup error status pointer */
  void setErrorStatusPointer(const char_T **rt_errorStatus);

  /* model step function */
  void step(const real_T *rtu_SensorsOut_utc_JD, const real_T
            rtu_SensorsOut_X_ecef[3], const real_T rtu_SensorsOut_V_ecef[3],
            const real_T rtu_SensorsOut_X_eci[3], const real_T
            rtu_SensorsOut_V_eci[3], const real_T rtu_SensorsOut_q_ecef2b[4],
            const real_T rtu_SensorsOut_q_eci2b[4], const real_T
            rtu_SensorsOut_Euler[3], const real_T rtu_SensorsOut_LatLonAlt[3],
            const real_T *rtu_SensorsOut_SunAngle, const boolean_T
            *rtu_SensorsOut_SunInView, const real_T *rtu_AttitudeMode, const
            real_T rtu_Environment_envAccel_ecef[3], const real_T
            rtu_Environment_envForces_body[3], const real_T
            rtu_Environment_envTorques_body[3], const real_T
            rtu_Environment_x_sun_eci[3], const real_T
            rtu_Environment_earthAngRate[3], ACSOutBus *rty_ACSOut);

  /* Reset function */
  void reset();

  /* Constructor */
  asbCubeSatACS();

  /* Destructor */
  ~asbCubeSatACS();

  /* private data and function members */
 private:
  /* Block signals */
  B_asbCubeSatACS_T asbCubeSatACS_B;

  /* Block states */
  DW_asbCubeSatACS_T asbCubeSatACS_DW;

  /* private member function(s) for subsystem '<S50>/If Action Subsystem'*/
  static void asbCubeSatACS_IfActionSubsystem(real_T *rty_Out1);

  /* private member function(s) for subsystem '<S50>/If Action Subsystem1'*/
  static void asbCubeSatAC_IfActionSubsystem1(real_T *rty_Out1);

  /* private member function(s) for subsystem '<S50>/If Action Subsystem2'*/
  static void asbCubeSatAC_IfActionSubsystem2(real_T *rty_Out1);

  /* private member function(s) for subsystem '<S130>/If Action Subsystem2'*/
  static void asbCubeSat_IfActionSubsystem2_p(real_T rtu_In, real_T *rty_OutOrig);

  /* Real-Time Model */
  RT_MODEL_asbCubeSatACS_T asbCubeSatACS_M;
};

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
