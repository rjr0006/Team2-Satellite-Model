/*
 * asbCubeSatACS_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "asbCubeSatACS".
 *
 * Model version              : 6.9
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C source code generated on : Mon Sep 12 14:58:00 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "asbCubeSatACS_private.h"

/* Invariant block signals (default storage) */
const ConstB_asbCubeSatACS_h_T asbCubeSatACS_ConstB = {
  0.0,                                 /* '<S156>/Dot Product3' */
  1.0,                                 /* '<S156>/Dot Product1' */
  1.0,                                 /* '<S156>/Dot Product2' */
  1.0,                                 /* '<S156>/Divide1' */
  1.0,                                 /* '<S156>/Sqrt3' */
  0.0,                                 /* '<S156>/Divide' */
  -1.0,                                /* '<S156>/Bias' */
  1.0,                                 /* '<S156>/Abs' */
  1.0,                                 /* '<S156>/Bias1' */
  1.0,                                 /* '<S156>/Abs1' */
  1.0,                                 /* '<S183>/Dot Product1' */
  1.0,                                 /* '<S162>/Dot Product1' */
  -0.0,                                /* '<S185>/Gain' */
  1.0,                                 /* '<S185>/Gain2' */

  { -0.0, 0.0, 0.0 },                  /* '<S185>/Switch3' */
  0.0,                                 /* '<S193>/i x j' */
  0.0,                                 /* '<S193>/j x k' */
  0.0,                                 /* '<S193>/k x i' */
  0.0,                                 /* '<S194>/i x k' */
  -0.0,                                /* '<S194>/j x i' */
  -0.0,                                /* '<S194>/k x j' */

  { 0.0, 0.0, 0.0 },                   /* '<S192>/Sum' */
  0.0,                                 /* '<S214>/j x k' */
  -1.0,                                /* '<S214>/k x i' */
  0.0,                                 /* '<S214>/i x j' */
  -0.0,                                /* '<S215>/k x j' */
  0.0,                                 /* '<S215>/i x k' */
  0.0,                                 /* '<S215>/j x i' */

  { 0.0, -1.0, 0.0 },                  /* '<S212>/Sum' */
  1.0,                                 /* '<S216>/j x k' */
  0.0,                                 /* '<S216>/k x i' */
  0.0,                                 /* '<S216>/i x j' */
  0.0,                                 /* '<S217>/k x j' */
  -0.0,                                /* '<S217>/i x k' */
  -0.0,                                /* '<S217>/j x i' */

  { 1.0, 0.0, 0.0 },                   /* '<S213>/Sum' */
  1.0,                                 /* '<S198>/Dot Product1' */
  1.0,                                 /* '<S163>/Dot Product1' */
  -0.0,                                /* '<S200>/Gain' */
  -0.0,                                /* '<S200>/Gain2' */

  { -0.0, 1.0, 0.0 },                  /* '<S200>/Switch3' */
  1.0,                                 /* '<S208>/i x j' */
  0.0,                                 /* '<S208>/j x k' */
  -0.0,                                /* '<S208>/k x i' */
  0.0,                                 /* '<S209>/i x k' */
  -0.0,                                /* '<S209>/j x i' */
  0.0,                                 /* '<S209>/k x j' */

  { 0.0, -0.0, 1.0 },                  /* '<S207>/Sum' */
  0.0,                                 /* '<S50>/Dot Product3' */
  1.0,                                 /* '<S50>/Dot Product1' */
  1.0,                                 /* '<S50>/Dot Product2' */
  1.0,                                 /* '<S50>/Divide1' */
  1.0,                                 /* '<S50>/Sqrt3' */
  0.0,                                 /* '<S50>/Divide' */
  -1.0,                                /* '<S50>/Bias' */
  1.0,                                 /* '<S50>/Abs' */
  1.0,                                 /* '<S50>/Bias1' */
  1.0,                                 /* '<S50>/Abs1' */
  1.0,                                 /* '<S77>/Dot Product1' */
  1.0,                                 /* '<S56>/Dot Product1' */
  -0.0,                                /* '<S79>/Gain' */
  -1.0,                                /* '<S79>/Gain2' */

  { 0.0, -1.0, 0.0 },                  /* '<S79>/Switch3' */
  -0.0,                                /* '<S87>/i x j' */
  0.0,                                 /* '<S87>/j x k' */
  0.0,                                 /* '<S87>/k x i' */
  0.0,                                 /* '<S88>/i x k' */
  0.0,                                 /* '<S88>/j x i' */
  -1.0,                                /* '<S88>/k x j' */

  { 1.0, 0.0, -0.0 },                  /* '<S86>/Sum' */
  0.0,                                 /* '<S108>/j x k' */
  1.0,                                 /* '<S108>/k x i' */
  0.0,                                 /* '<S108>/i x j' */
  0.0,                                 /* '<S109>/k x j' */
  0.0,                                 /* '<S109>/i x k' */
  0.0,                                 /* '<S109>/j x i' */

  { 0.0, 1.0, 0.0 },                   /* '<S106>/Sum' */
  1.0,                                 /* '<S110>/j x k' */
  0.0,                                 /* '<S110>/k x i' */
  0.0,                                 /* '<S110>/i x j' */
  0.0,                                 /* '<S111>/k x j' */
  0.0,                                 /* '<S111>/i x k' */
  0.0,                                 /* '<S111>/j x i' */

  { 1.0, 0.0, 0.0 },                   /* '<S107>/Sum' */
  1.0,                                 /* '<S92>/Dot Product1' */
  1.0,                                 /* '<S57>/Dot Product1' */
  -0.0,                                /* '<S94>/Gain' */
  -0.0,                                /* '<S94>/Gain2' */

  { -0.0, 1.0, 0.0 },                  /* '<S94>/Switch3' */
  1.0,                                 /* '<S102>/i x j' */
  0.0,                                 /* '<S102>/j x k' */
  -0.0,                                /* '<S102>/k x i' */
  0.0,                                 /* '<S103>/i x k' */
  -0.0,                                /* '<S103>/j x i' */
  0.0,                                 /* '<S103>/k x j' */

  { 0.0, -0.0, 1.0 },                  /* '<S101>/Sum' */
  1,                                   /* '<S185>/x>z' */
  1,                                   /* '<S200>/x>z' */
  0,                                   /* '<S79>/x>z' */
  1                                    /* '<S94>/x>z' */
};
