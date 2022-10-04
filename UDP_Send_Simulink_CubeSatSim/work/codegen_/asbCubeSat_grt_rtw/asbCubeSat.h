/*
 * asbCubeSat.h
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

#ifndef RTW_HEADER_asbCubeSat_h_
#define RTW_HEADER_asbCubeSat_h_
#ifndef asbCubeSat_COMMON_INCLUDES_
#define asbCubeSat_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "DAHostLib_Network.h"
#endif                                 /* asbCubeSat_COMMON_INCLUDES_ */

#include "asbCubeSat_types.h"
#include "asbCubeSatACS.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include <string.h>
#include <stddef.h>
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

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

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
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

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
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

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) <= 1)
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

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
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

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define asbCubeSat_rtModel             RT_MODEL_asbCubeSat_T

/* Block signals for system '<S28>/For Iterator Subsystem' */
typedef struct {
  real_T VectorConcatenate[13];        /* '<S31>/Vector Concatenate' */
  real_T UnitDelay1[13];               /* '<S31>/Unit Delay1' */
  real_T Switch[13];                   /* '<S31>/Switch' */
  real_T crlonm1;                      /* '<S31>/crlon[m-1]' */
  real_T Gain;                         /* '<S31>/Gain' */
  real_T Product;                      /* '<S31>/Product' */
  real_T crlonm11;                     /* '<S31>/crlon[m-1]1' */
  real_T Sum;                          /* '<S31>/Sum' */
  real_T Assignment[13];               /* '<S31>/Assignment' */
  int32_T ForIterator;                 /* '<S31>/For Iterator' */
  int32_T Bias2;                       /* '<S31>/Bias2' */
  int32_T Bias3;                       /* '<S31>/Bias3' */
  int32_T Bias4;                       /* '<S31>/Bias4' */
} B_ForIteratorSubsystem_asbCubeSat_T;

/* Block states (default storage) for system '<S28>/For Iterator Subsystem' */
typedef struct {
  real_T UnitDelay1_DSTATE[13];        /* '<S31>/Unit Delay1' */
} DW_ForIteratorSubsystem_asbCubeSat_T;

/* Block signals for system '<S34>/For Iterator Subsystem' */
typedef struct {
  real_T ForIterator;                  /* '<S36>/For Iterator' */
  real_T twot;                         /* '<S36>/Gain' */
  real_T VectorConcatenate[13];        /* '<S36>/Vector Concatenate' */
} B_ForIteratorSubsystem_asbCubeSat_n_T;

/* Block signals for system '<S35>/For Iterator Subsystem' */
typedef struct {
  int32_T ncm;                         /* '<S37>/ncm' */
  int32_T ForIterator;                 /* '<S38>/For Iterator' */
} B_ForIteratorSubsystem_asbCubeSat_j_T;

/* Block signals (default storage) */
typedef struct {
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
  FCSOutBus FSWOut;                    /* '<S114>/Bus Creator' */
  ACSOutBus ACSOut;                    /* '<S114>/Attitude Control System' */
  real_T X_ecef[3];                    /* '<S113>/Spacecraft Dynamics' */
  real_T V_ecef[3];                    /* '<S113>/Spacecraft Dynamics' */
  real_T Euler[3];                     /* '<S113>/Spacecraft Dynamics' */
  real_T SpacecraftDynamics_o4[3];     /* '<S113>/Spacecraft Dynamics' */
  real_T SpacecraftDynamics_o5[4];     /* '<S113>/Spacecraft Dynamics' */
  real_T SpacecraftDynamics_o6;        /* '<S113>/Spacecraft Dynamics' */
  real_T Gain1[3];                     /* '<S117>/Gain1' */
  real_T sincos_o1[3];                 /* '<S121>/sincos' */
  real_T sincos_o2[3];                 /* '<S121>/sincos' */
  real_T VectorConcatenate[9];         /* '<S215>/Vector Concatenate' */
  real_T ECEFPositiontoLLA_o1[2];      /* '<S113>/ECEF Position to LLA' */
  real_T ECEFPositiontoLLA_o2;         /* '<S113>/ECEF Position to LLA' */
  real_T UnitConversion[2];            /* '<S171>/Unit Conversion' */
  real_T sincos_o1_g[2];               /* '<S118>/sincos' */
  real_T sincos_o2_k[2];               /* '<S118>/sincos' */
  real_T u1u4;                         /* '<S162>/u(1)*u(4)' */
  real_T u3u4;                         /* '<S168>/u(3)*u(4)' */
  real_T u1u2;                         /* '<S163>/u(1)*u(2)' */
  real_T u2u3;                         /* '<S169>/u(2)*u(3)' */
  real_T VectorConcatenate_h[9];       /* '<S172>/Vector Concatenate' */
  real_T Product2[9];                  /* '<S113>/Product2' */
  real_T Add;                          /* '<S176>/Add' */
  real_T Merge[4];                     /* '<S119>/Merge' */
  real_T Product;                      /* '<S92>/Product' */
  real_T Product1;                     /* '<S92>/Product1' */
  real_T Product2_f;                   /* '<S92>/Product2' */
  real_T Product3;                     /* '<S92>/Product3' */
  real_T Sum;                          /* '<S92>/Sum' */
  real_T sqrt_c;                       /* '<S91>/sqrt' */
  real_T Product2_o;                   /* '<S87>/Product2' */
  real_T Product6;                     /* '<S88>/Product6' */
  real_T Product3_n;                   /* '<S87>/Product3' */
  real_T Product7;                     /* '<S88>/Product7' */
  real_T Sum3;                         /* '<S88>/Sum3' */
  real_T Gain2;                        /* '<S88>/Gain2' */
  real_T Product8;                     /* '<S88>/Product8' */
  real_T Product1_o;                   /* '<S87>/Product1' */
  real_T Product_d;                    /* '<S88>/Product' */
  real_T Product_o;                    /* '<S87>/Product' */
  real_T Product1_f;                   /* '<S88>/Product1' */
  real_T Sum1;                         /* '<S88>/Sum1' */
  real_T Gain;                         /* '<S88>/Gain' */
  real_T Product4;                     /* '<S88>/Product4' */
  real_T Product2_n;                   /* '<S88>/Product2' */
  real_T Product3_g;                   /* '<S88>/Product3' */
  real_T Sum2;                         /* '<S88>/Sum2' */
  real_T Gain1_m;                      /* '<S88>/Gain1' */
  real_T Product5;                     /* '<S88>/Product5' */
  real_T Sum_i;                        /* '<S88>/Sum' */
  real_T Product_m;                    /* '<S213>/Product' */
  real_T Product1_a;                   /* '<S213>/Product1' */
  real_T Product2_j;                   /* '<S213>/Product2' */
  real_T Product3_o;                   /* '<S213>/Product3' */
  real_T Sum_f;                        /* '<S213>/Sum' */
  real_T UnaryMinus1;                  /* '<S85>/Unary Minus1' */
  real_T Product_g;                    /* '<S211>/Product' */
  real_T Product1_ac;                  /* '<S211>/Product1' */
  real_T Product2_n3;                  /* '<S211>/Product2' */
  real_T Product3_p;                   /* '<S211>/Product3' */
  real_T Sum_a;                        /* '<S211>/Sum' */
  real_T Product_n;                    /* '<S86>/Product' */
  real_T Product_a;                    /* '<S212>/Product' */
  real_T Product1_c;                   /* '<S212>/Product1' */
  real_T Product2_jk;                  /* '<S212>/Product2' */
  real_T Product3_oq;                  /* '<S212>/Product3' */
  real_T Sum_in;                       /* '<S212>/Sum' */
  real_T Product1_l;                   /* '<S86>/Product1' */
  real_T Product2_p;                   /* '<S86>/Product2' */
  real_T Product_j;                    /* '<S214>/Product' */
  real_T Product1_ol;                  /* '<S214>/Product1' */
  real_T Product2_m;                   /* '<S214>/Product2' */
  real_T Product3_e;                   /* '<S214>/Product3' */
  real_T Sum_j;                        /* '<S214>/Sum' */
  real_T Product3_a;                   /* '<S86>/Product3' */
  real_T Sum_m;                        /* '<S86>/Sum' */
  real_T Divide2;                      /* '<S78>/Divide2' */
  real_T Divide;                       /* '<S78>/Divide' */
  real_T Product_p;                    /* '<S98>/Product' */
  real_T UnaryMinus;                   /* '<S85>/Unary Minus' */
  real_T Divide1;                      /* '<S78>/Divide1' */
  real_T Product1_l4;                  /* '<S98>/Product1' */
  real_T Product2_oh;                  /* '<S98>/Product2' */
  real_T UnaryMinus2;                  /* '<S85>/Unary Minus2' */
  real_T Divide3;                      /* '<S78>/Divide3' */
  real_T Product3_f;                   /* '<S98>/Product3' */
  real_T Sum_b;                        /* '<S98>/Sum' */
  real_T sqrt_l;                       /* '<S97>/sqrt' */
  real_T Product2_e;                   /* '<S93>/Product2' */
  real_T Product6_e;                   /* '<S94>/Product6' */
  real_T Product3_j;                   /* '<S93>/Product3' */
  real_T Product7_a;                   /* '<S94>/Product7' */
  real_T Sum3_a;                       /* '<S94>/Sum3' */
  real_T Gain2_p;                      /* '<S94>/Gain2' */
  real_T Product8_i;                   /* '<S94>/Product8' */
  real_T Product1_p;                   /* '<S93>/Product1' */
  real_T Product_pu;                   /* '<S94>/Product' */
  real_T Product_h;                    /* '<S93>/Product' */
  real_T Product1_d;                   /* '<S94>/Product1' */
  real_T Sum1_b;                       /* '<S94>/Sum1' */
  real_T Gain_i;                       /* '<S94>/Gain' */
  real_T Product_dn;                   /* '<S89>/Product' */
  real_T Product1_k;                   /* '<S89>/Product1' */
  real_T Sum1_n;                       /* '<S89>/Sum1' */
  real_T Gain_l;                       /* '<S89>/Gain' */
  real_T Product4_g;                   /* '<S89>/Product4' */
  real_T Product6_j;                   /* '<S89>/Product6' */
  real_T Product7_n;                   /* '<S89>/Product7' */
  real_T Sum3_m;                       /* '<S89>/Sum3' */
  real_T Gain2_j;                      /* '<S89>/Gain2' */
  real_T Product8_o;                   /* '<S89>/Product8' */
  real_T Product2_fx;                  /* '<S89>/Product2' */
  real_T Product3_os;                  /* '<S89>/Product3' */
  real_T Sum2_e;                       /* '<S89>/Sum2' */
  real_T Gain1_c;                      /* '<S89>/Gain1' */
  real_T Product5_n;                   /* '<S89>/Product5' */
  real_T Sum_b5;                       /* '<S89>/Sum' */
  real_T Product4_i;                   /* '<S94>/Product4' */
  real_T Product2_nd;                  /* '<S94>/Product2' */
  real_T Product3_i;                   /* '<S94>/Product3' */
  real_T Sum2_eq;                      /* '<S94>/Sum2' */
  real_T Gain1_g;                      /* '<S94>/Gain1' */
  real_T Product_e;                    /* '<S90>/Product' */
  real_T Product1_m;                   /* '<S90>/Product1' */
  real_T Sum1_nn;                      /* '<S90>/Sum1' */
  real_T Gain_e;                       /* '<S90>/Gain' */
  real_T Product4_gg;                  /* '<S90>/Product4' */
  real_T Product2_i;                   /* '<S90>/Product2' */
  real_T Product3_nq;                  /* '<S90>/Product3' */
  real_T Sum2_m;                       /* '<S90>/Sum2' */
  real_T Gain1_h;                      /* '<S90>/Gain1' */
  real_T Product5_b;                   /* '<S90>/Product5' */
  real_T Product6_o;                   /* '<S90>/Product6' */
  real_T Product7_h;                   /* '<S90>/Product7' */
  real_T Sum3_h;                       /* '<S90>/Sum3' */
  real_T Gain2_jv;                     /* '<S90>/Gain2' */
  real_T Product8_n;                   /* '<S90>/Product8' */
  real_T Sum_g;                        /* '<S90>/Sum' */
  real_T Product5_l;                   /* '<S94>/Product5' */
  real_T Sum_ii;                       /* '<S94>/Sum' */
  real_T Product_k;                    /* '<S95>/Product' */
  real_T Product1_e;                   /* '<S95>/Product1' */
  real_T Sum1_n2;                      /* '<S95>/Sum1' */
  real_T Gain_c;                       /* '<S95>/Gain' */
  real_T Product4_d;                   /* '<S95>/Product4' */
  real_T Product6_ju;                  /* '<S95>/Product6' */
  real_T Product7_nw;                  /* '<S95>/Product7' */
  real_T Sum3_l;                       /* '<S95>/Sum3' */
  real_T Gain2_e;                      /* '<S95>/Gain2' */
  real_T Product8_on;                  /* '<S95>/Product8' */
  real_T Product2_k;                   /* '<S95>/Product2' */
  real_T Product3_nz;                  /* '<S95>/Product3' */
  real_T Sum2_g;                       /* '<S95>/Sum2' */
  real_T Gain1_p;                      /* '<S95>/Gain1' */
  real_T Product5_j;                   /* '<S95>/Product5' */
  real_T Sum_o;                        /* '<S95>/Sum' */
  real_T Product_ps;                   /* '<S96>/Product' */
  real_T Product1_g;                   /* '<S96>/Product1' */
  real_T Sum1_d;                       /* '<S96>/Sum1' */
  real_T Gain_h;                       /* '<S96>/Gain' */
  real_T Product4_gk;                  /* '<S96>/Product4' */
  real_T Product2_c;                   /* '<S96>/Product2' */
  real_T Product3_pi;                  /* '<S96>/Product3' */
  real_T Sum2_o;                       /* '<S96>/Sum2' */
  real_T Gain1_pd;                     /* '<S96>/Gain1' */
  real_T Product5_i;                   /* '<S96>/Product5' */
  real_T Product6_l;                   /* '<S96>/Product6' */
  real_T Product7_i;                   /* '<S96>/Product7' */
  real_T Sum3_n;                       /* '<S96>/Sum3' */
  real_T Gain2_pw;                     /* '<S96>/Gain2' */
  real_T Product8_j;                   /* '<S96>/Product8' */
  real_T Sum_oh;                       /* '<S96>/Sum' */
  real_T UnitConversion_e[3];          /* '<S75>/Unit Conversion' */
  real_T jxk;                          /* '<S83>/j x k' */
  real_T kxi;                          /* '<S83>/k x i' */
  real_T ixj;                          /* '<S83>/i x j' */
  real_T kxj;                          /* '<S84>/k x j' */
  real_T ixk;                          /* '<S84>/i x k' */
  real_T jxi;                          /* '<S84>/j x i' */
  real_T Sum_p[3];                     /* '<S77>/Sum' */
  real_T Sum_h[3];                     /* '<S71>/Sum' */
  real_T Product_jj;                   /* '<S104>/Product' */
  real_T Product1_gg;                  /* '<S104>/Product1' */
  real_T Product2_ov;                  /* '<S104>/Product2' */
  real_T Product3_l;                   /* '<S104>/Product3' */
  real_T Sum_n;                        /* '<S104>/Sum' */
  real_T sqrt_g;                       /* '<S103>/sqrt' */
  real_T Product2_pk;                  /* '<S99>/Product2' */
  real_T Product6_i;                   /* '<S100>/Product6' */
  real_T Product3_b;                   /* '<S99>/Product3' */
  real_T Product7_g;                   /* '<S100>/Product7' */
  real_T Sum3_i;                       /* '<S100>/Sum3' */
  real_T Gain2_o;                      /* '<S100>/Gain2' */
  real_T Product8_jd;                  /* '<S100>/Product8' */
  real_T Product1_h;                   /* '<S99>/Product1' */
  real_T Product_oi;                   /* '<S100>/Product' */
  real_T Product_c;                    /* '<S99>/Product' */
  real_T Product1_du;                  /* '<S100>/Product1' */
  real_T Sum1_nk;                      /* '<S100>/Sum1' */
  real_T Gain_cn;                      /* '<S100>/Gain' */
  real_T Product4_o;                   /* '<S100>/Product4' */
  real_T Product2_h;                   /* '<S100>/Product2' */
  real_T Product3_ab;                  /* '<S100>/Product3' */
  real_T Sum2_h;                       /* '<S100>/Sum2' */
  real_T Gain1_j;                      /* '<S100>/Gain1' */
  real_T Product5_b2;                  /* '<S100>/Product5' */
  real_T Sum_mu;                       /* '<S100>/Sum' */
  real_T Product_kt;                   /* '<S110>/Product' */
  real_T Product1_n;                   /* '<S110>/Product1' */
  real_T Product2_e2;                  /* '<S110>/Product2' */
  real_T Product3_ib;                  /* '<S110>/Product3' */
  real_T Sum_mf;                       /* '<S110>/Sum' */
  real_T sqrt_p;                       /* '<S109>/sqrt' */
  real_T Product2_ih;                  /* '<S105>/Product2' */
  real_T Product6_ls;                  /* '<S106>/Product6' */
  real_T Product3_l0;                  /* '<S105>/Product3' */
  real_T Product7_b;                   /* '<S106>/Product7' */
  real_T Sum3_iq;                      /* '<S106>/Sum3' */
  real_T Gain2_k;                      /* '<S106>/Gain2' */
  real_T Product8_g;                   /* '<S106>/Product8' */
  real_T Product1_ay;                  /* '<S105>/Product1' */
  real_T Product_en;                   /* '<S106>/Product' */
  real_T Product_j4;                   /* '<S105>/Product' */
  real_T Product1_or;                  /* '<S106>/Product1' */
  real_T Sum1_dr;                      /* '<S106>/Sum1' */
  real_T Gain_ls;                      /* '<S106>/Gain' */
  real_T Product_i;                    /* '<S101>/Product' */
  real_T Product1_i;                   /* '<S101>/Product1' */
  real_T Sum1_p;                       /* '<S101>/Sum1' */
  real_T Gain_o;                       /* '<S101>/Gain' */
  real_T Product4_oc;                  /* '<S101>/Product4' */
  real_T Product6_e5;                  /* '<S101>/Product6' */
  real_T Product7_e;                   /* '<S101>/Product7' */
  real_T Sum3_e;                       /* '<S101>/Sum3' */
  real_T Gain2_n;                      /* '<S101>/Gain2' */
  real_T Product8_f;                   /* '<S101>/Product8' */
  real_T Product2_d;                   /* '<S101>/Product2' */
  real_T Product3_h;                   /* '<S101>/Product3' */
  real_T Sum2_hn;                      /* '<S101>/Sum2' */
  real_T Gain1_f;                      /* '<S101>/Gain1' */
  real_T Product5_lz;                  /* '<S101>/Product5' */
  real_T Sum_oi;                       /* '<S101>/Sum' */
  real_T Product4_f;                   /* '<S106>/Product4' */
  real_T Product2_ed;                  /* '<S106>/Product2' */
  real_T Product3_m;                   /* '<S106>/Product3' */
  real_T Sum2_c;                       /* '<S106>/Sum2' */
  real_T Gain1_i;                      /* '<S106>/Gain1' */
  real_T Product_jp;                   /* '<S102>/Product' */
  real_T Product1_om;                  /* '<S102>/Product1' */
  real_T Sum1_bl;                      /* '<S102>/Sum1' */
  real_T Gain_ct;                      /* '<S102>/Gain' */
  real_T Product4_m;                   /* '<S102>/Product4' */
  real_T Product2_ju;                  /* '<S102>/Product2' */
  real_T Product3_mx;                  /* '<S102>/Product3' */
  real_T Sum2_g1;                      /* '<S102>/Sum2' */
  real_T Gain1_n;                      /* '<S102>/Gain1' */
  real_T Product5_d;                   /* '<S102>/Product5' */
  real_T Product6_g;                   /* '<S102>/Product6' */
  real_T Product7_bh;                  /* '<S102>/Product7' */
  real_T Sum3_hu;                      /* '<S102>/Sum3' */
  real_T Gain2_nw;                     /* '<S102>/Gain2' */
  real_T Product8_fe;                  /* '<S102>/Product8' */
  real_T Sum_l;                        /* '<S102>/Sum' */
  real_T Product5_k;                   /* '<S106>/Product5' */
  real_T Sum_d;                        /* '<S106>/Sum' */
  real_T Product_ew;                   /* '<S107>/Product' */
  real_T Product1_gl;                  /* '<S107>/Product1' */
  real_T Sum1_i;                       /* '<S107>/Sum1' */
  real_T Gain_h4;                      /* '<S107>/Gain' */
  real_T Product4_e;                   /* '<S107>/Product4' */
  real_T Product6_el;                  /* '<S107>/Product6' */
  real_T Product7_o;                   /* '<S107>/Product7' */
  real_T Sum3_d;                       /* '<S107>/Sum3' */
  real_T Gain2_el;                     /* '<S107>/Gain2' */
  real_T Product8_b;                   /* '<S107>/Product8' */
  real_T Product2_de;                  /* '<S107>/Product2' */
  real_T Product3_bz;                  /* '<S107>/Product3' */
  real_T Sum2_i;                       /* '<S107>/Sum2' */
  real_T Gain1_a;                      /* '<S107>/Gain1' */
  real_T Product5_c;                   /* '<S107>/Product5' */
  real_T Sum_o5;                       /* '<S107>/Sum' */
  real_T Product_ka;                   /* '<S108>/Product' */
  real_T Product1_mx;                  /* '<S108>/Product1' */
  real_T Sum1_m;                       /* '<S108>/Sum1' */
  real_T Gain_j;                       /* '<S108>/Gain' */
  real_T Product4_n;                   /* '<S108>/Product4' */
  real_T Product2_jy;                  /* '<S108>/Product2' */
  real_T Product3_d;                   /* '<S108>/Product3' */
  real_T Sum2_l;                       /* '<S108>/Sum2' */
  real_T Gain1_nk;                     /* '<S108>/Gain1' */
  real_T Product5_o;                   /* '<S108>/Product5' */
  real_T Product6_oo;                  /* '<S108>/Product6' */
  real_T Product7_k;                   /* '<S108>/Product7' */
  real_T Sum3_g;                       /* '<S108>/Sum3' */
  real_T Gain2_h;                      /* '<S108>/Gain2' */
  real_T Product8_m;                   /* '<S108>/Product8' */
  real_T Sum_k;                        /* '<S108>/Sum' */
  real_T UnitConversion_ee[3];         /* '<S76>/Unit Conversion' */
  real_T UnitConversion_h[3];          /* '<S73>/Unit Conversion' */
  real_T UnitConversion_m[3];          /* '<S74>/Unit Conversion' */
  real_T UnitConversion_k;             /* '<S72>/Unit Conversion' */
  real_T VectorConcatenate_j[23];      /* '<S5>/Vector Concatenate' */
  real_T UnaryMinus1_f;                /* '<S251>/Unary Minus1' */
  real_T Product_af;                   /* '<S252>/Product' */
  real_T Product1_j;                   /* '<S252>/Product1' */
  real_T Product2_o3;                  /* '<S252>/Product2' */
  real_T Product3_mxy;                 /* '<S252>/Product3' */
  real_T Sum_bq;                       /* '<S252>/Sum' */
  real_T Divide2_o;                    /* '<S230>/Divide2' */
  real_T Divide_e;                     /* '<S230>/Divide' */
  real_T Product_ju;                   /* '<S260>/Product' */
  real_T UnaryMinus_i;                 /* '<S251>/Unary Minus' */
  real_T Divide1_k;                    /* '<S230>/Divide1' */
  real_T Product1_h2;                  /* '<S260>/Product1' */
  real_T Product2_fj;                  /* '<S260>/Product2' */
  real_T UnaryMinus2_a;                /* '<S251>/Unary Minus2' */
  real_T Divide3_i;                    /* '<S230>/Divide3' */
  real_T Product3_df;                  /* '<S260>/Product3' */
  real_T Sum_hb;                       /* '<S260>/Sum' */
  real_T sqrt_e;                       /* '<S259>/sqrt' */
  real_T Product2_ka;                  /* '<S255>/Product2' */
  real_T Product6_es;                  /* '<S256>/Product6' */
  real_T Product3_jt;                  /* '<S255>/Product3' */
  real_T Product7_l;                   /* '<S256>/Product7' */
  real_T Sum3_dg;                      /* '<S256>/Sum3' */
  real_T Gain2_c;                      /* '<S256>/Gain2' */
  real_T Product8_n2;                  /* '<S256>/Product8' */
  real_T Product1_do;                  /* '<S255>/Product1' */
  real_T Product_ma;                   /* '<S256>/Product' */
  real_T Product_i0;                   /* '<S255>/Product' */
  real_T Product1_kr;                  /* '<S256>/Product1' */
  real_T Sum1_nm;                      /* '<S256>/Sum1' */
  real_T Gain_b;                       /* '<S256>/Gain' */
  real_T Product4_dl;                  /* '<S256>/Product4' */
  real_T Product2_j2;                  /* '<S256>/Product2' */
  real_T Product3_k;                   /* '<S256>/Product3' */
  real_T Sum2_b;                       /* '<S256>/Sum2' */
  real_T Gain1_b;                      /* '<S256>/Gain1' */
  real_T Product5_oj;                  /* '<S256>/Product5' */
  real_T Sum_hn;                       /* '<S256>/Sum' */
  real_T Product_e5;                   /* '<S257>/Product' */
  real_T Product1_at;                  /* '<S257>/Product1' */
  real_T Sum1_c;                       /* '<S257>/Sum1' */
  real_T Gain_k;                       /* '<S257>/Gain' */
  real_T Product4_k;                   /* '<S257>/Product4' */
  real_T Product6_n;                   /* '<S257>/Product6' */
  real_T Product7_nf;                  /* '<S257>/Product7' */
  real_T Sum3_b;                       /* '<S257>/Sum3' */
  real_T Gain2_a;                      /* '<S257>/Gain2' */
  real_T Product8_a;                   /* '<S257>/Product8' */
  real_T Product2_l;                   /* '<S257>/Product2' */
  real_T Product3_g2;                  /* '<S257>/Product3' */
  real_T Sum2_j;                       /* '<S257>/Sum2' */
  real_T Gain1_e;                      /* '<S257>/Gain1' */
  real_T Product5_o0;                  /* '<S257>/Product5' */
  real_T Sum_j0;                       /* '<S257>/Sum' */
  real_T Product_cf;                   /* '<S258>/Product' */
  real_T Product1_ce;                  /* '<S258>/Product1' */
  real_T Sum1_mp;                      /* '<S258>/Sum1' */
  real_T Gain_ok;                      /* '<S258>/Gain' */
  real_T Product4_ei;                  /* '<S258>/Product4' */
  real_T Product2_ol;                  /* '<S258>/Product2' */
  real_T Product3_i3;                  /* '<S258>/Product3' */
  real_T Sum2_lw;                      /* '<S258>/Sum2' */
  real_T Gain1_fn;                     /* '<S258>/Gain1' */
  real_T Product5_p;                   /* '<S258>/Product5' */
  real_T Product6_gf;                  /* '<S258>/Product6' */
  real_T Product7_m;                   /* '<S258>/Product7' */
  real_T Sum3_j;                       /* '<S258>/Sum3' */
  real_T Gain2_ja;                     /* '<S258>/Gain2' */
  real_T Product8_g1;                  /* '<S258>/Product8' */
  real_T Sum_ik;                       /* '<S258>/Sum' */
  real_T Sum_ohw[3];                   /* '<S225>/Sum' */
  real_T UnitConversion_j[3];          /* '<S243>/Unit Conversion' */
  real_T kmtoVRMLunits[3];             /* '<S226>/km to VRML units' */
  real_T UnitDelay[3];                 /* '<S228>/Unit Delay' */
  real_T Sum_ku[3];                    /* '<S228>/Sum' */
  real_T u2[3];                        /* '<S244>/1//2' */
  real_T SinCos_o1[3];                 /* '<S244>/SinCos' */
  real_T SinCos_o2[3];                 /* '<S244>/SinCos' */
  real_T u1u2u3;                       /* '<S246>/u(1)*u(2)*u(3)' */
  real_T u4u5u6;                       /* '<S246>/u(4)*u(5)*u(6)' */
  real_T Sum_c;                        /* '<S246>/Sum' */
  real_T u2u3u4;                       /* '<S247>/u(2)*u(3)*u(4)' */
  real_T u1u5u6;                       /* '<S247>/u(1)*u(5)*u(6)' */
  real_T Sum_kk;                       /* '<S247>/Sum' */
  real_T u2u4u6;                       /* '<S248>/u(2)*u(4)*u(6)' */
  real_T u1u3u5;                       /* '<S248>/u(1)*u(3)*u(5)' */
  real_T Sum_fi;                       /* '<S248>/Sum' */
  real_T u1u2u6;                       /* '<S249>/u(1)*u(2)*u(6)' */
  real_T u3u4u5;                       /* '<S249>/u(3)*u(4)*u(5)' */
  real_T Sum_e;                        /* '<S249>/Sum' */
  real_T TrigonometricFunction;        /* '<S245>/Trigonometric Function' */
  real_T Gain_lh;                      /* '<S245>/Gain' */
  real_T Gain3[4];                     /* '<S245>/Gain3' */
  real_T DigitalClock;                 /* '<S1>/Digital Clock' */
  real_T Divide_a;                     /* '<S1>/Divide' */
  real_T Sum_fp;                       /* '<S1>/Sum' */
  real_T Bias;                         /* '<S21>/Bias' */
  real_T RoundingFunction;             /* '<S53>/Rounding Function' */
  real_T Sum1_cv;                      /* '<S21>/Sum1' */
  real_T pjd1;                         /* '<S21>/Bias1' */
  real_T Sum_lv;                       /* '<S53>/Sum' */
  real_T pjd2;                         /* '<S21>/Sum2' */
  real_T RoundingFunction_o;           /* '<S55>/Rounding Function' */
  real_T pjd1_d;                       /* '<S21>/Sum3' */
  real_T Sum5;                         /* '<S21>/Sum5' */
  real_T Divide_g;                     /* '<S21>/Divide' */
  real_T RoundingFunction_i;           /* '<S21>/Rounding Function' */
  real_T nr;                           /* '<S21>/Bias2' */
  real_T nr_l;                         /* '<S21>/Merge' */
  real_T Bias3;                        /* '<S21>/Bias3' */
  real_T ephdata[78];                  /* '<S19>/eph data' */
  real_T Sum_m0;                       /* '<S55>/Sum' */
  real_T Divide1_o;                    /* '<S21>/Divide1' */
  real_T tmp1;                         /* '<S21>/Sum6' */
  real_T tmp2;                         /* '<S21>/Sum7' */
  real_T Sum8;                         /* '<S21>/Sum8' */
  real_T t1;                           /* '<S21>/Divide2' */
  real_T dt1;                          /* '<S25>/Rounding Function' */
  real_T temp;                         /* '<S25>/Product' */
  real_T Sum_bf;                       /* '<S25>/Sum' */
  real_T RoundingFunction1;            /* '<S25>/Rounding Function1' */
  real_T l;                            /* '<S25>/Bias1' */
  real_T MathFunction;                 /* '<S25>/Math Function' */
  real_T Sum2_n;                       /* '<S25>/Sum2' */
  real_T Gain_g;                       /* '<S25>/Gain' */
  real_T tc;                           /* '<S25>/Bias' */
  real_T ephdatamoon[312];             /* '<S26>/eph data moon' */
  real_T dt1_j;                        /* '<S27>/Rounding Function' */
  real_T temp_m;                       /* '<S27>/Product' */
  real_T Sum_bfa;                      /* '<S27>/Sum' */
  real_T RoundingFunction1_o;          /* '<S27>/Rounding Function1' */
  real_T l_b;                          /* '<S27>/Bias1' */
  real_T MathFunction_m;               /* '<S27>/Math Function' */
  real_T Sum2_em;                      /* '<S27>/Sum2' */
  real_T Gain_p;                       /* '<S27>/Gain' */
  real_T tc_p;                         /* '<S27>/Bias' */
  real_T Divide3_a[3];                 /* '<S24>/Divide3' */
  real_T Sum8_l[3];                    /* '<S24>/Sum8' */
  real_T ephdata_f[66];                /* '<S22>/eph data' */
  real_T dt1_p;                        /* '<S56>/Rounding Function' */
  real_T temp_g;                       /* '<S56>/Product' */
  real_T Sum_hq;                       /* '<S56>/Sum' */
  real_T RoundingFunction1_p;          /* '<S56>/Rounding Function1' */
  real_T l_e;                          /* '<S56>/Bias1' */
  real_T MathFunction_h;               /* '<S56>/Math Function' */
  real_T Sum2_my;                      /* '<S56>/Sum2' */
  real_T Gain_bc;                      /* '<S56>/Gain' */
  real_T tc_a;                         /* '<S56>/Bias' */
  real_T Sum_cz[3];                    /* '<S12>/Sum' */
  real_T aufac;                        /* '<S23>/Merge2' */
  real_T Divide3_p[3];                 /* '<S12>/Divide3' */
  real_T UnitConversion_f[3];          /* '<S11>/Unit Conversion' */
  real_T Product_az;                   /* '<S266>/Product' */
  real_T Product1_ma;                  /* '<S266>/Product1' */
  real_T Product2_a;                   /* '<S266>/Product2' */
  real_T Product3_md;                  /* '<S266>/Product3' */
  real_T Sum_ai;                       /* '<S266>/Sum' */
  real_T sqrt_h;                       /* '<S265>/sqrt' */
  real_T Product2_i5;                  /* '<S261>/Product2' */
  real_T Product6_jx;                  /* '<S262>/Product6' */
  real_T Product3_nv;                  /* '<S261>/Product3' */
  real_T Product7_ma;                  /* '<S262>/Product7' */
  real_T Sum3_jg;                      /* '<S262>/Sum3' */
  real_T Gain2_m;                      /* '<S262>/Gain2' */
  real_T Product8_g2;                  /* '<S262>/Product8' */
  real_T Product1_i4;                  /* '<S261>/Product1' */
  real_T Product_ie;                   /* '<S262>/Product' */
  real_T Product_c1;                   /* '<S261>/Product' */
  real_T Product1_ka;                  /* '<S262>/Product1' */
  real_T Sum1_b1;                      /* '<S262>/Sum1' */
  real_T Gain_g4;                      /* '<S262>/Gain' */
  real_T Product4_h;                   /* '<S262>/Product4' */
  real_T Product2_c4;                  /* '<S262>/Product2' */
  real_T Product3_gq;                  /* '<S262>/Product3' */
  real_T Sum2_eqc;                     /* '<S262>/Sum2' */
  real_T Gain1_cy;                     /* '<S262>/Gain1' */
  real_T Product5_nf;                  /* '<S262>/Product5' */
  real_T Sum_ko;                       /* '<S262>/Sum' */
  real_T UnaryMinus1_e;                /* '<S253>/Unary Minus1' */
  real_T Product_f;                    /* '<S254>/Product' */
  real_T Product1_aa;                  /* '<S254>/Product1' */
  real_T Product2_fd;                  /* '<S254>/Product2' */
  real_T Product3_jd;                  /* '<S254>/Product3' */
  real_T Sum_am;                       /* '<S254>/Sum' */
  real_T Divide2_g;                    /* '<S231>/Divide2' */
  real_T Divide_gw;                    /* '<S231>/Divide' */
  real_T Product_ou;                   /* '<S272>/Product' */
  real_T UnaryMinus_n;                 /* '<S253>/Unary Minus' */
  real_T Divide1_p;                    /* '<S231>/Divide1' */
  real_T Product1_jj;                  /* '<S272>/Product1' */
  real_T Product2_ob;                  /* '<S272>/Product2' */
  real_T UnaryMinus2_k;                /* '<S253>/Unary Minus2' */
  real_T Divide3_j;                    /* '<S231>/Divide3' */
  real_T Product3_osa;                 /* '<S272>/Product3' */
  real_T Sum_lo;                       /* '<S272>/Sum' */
  real_T sqrt_co;                      /* '<S271>/sqrt' */
  real_T Product2_ho;                  /* '<S267>/Product2' */
  real_T Product6_np;                  /* '<S268>/Product6' */
  real_T Product3_jd0;                 /* '<S267>/Product3' */
  real_T Product7_p;                   /* '<S268>/Product7' */
  real_T Sum3_c;                       /* '<S268>/Sum3' */
  real_T Gain2_l;                      /* '<S268>/Gain2' */
  real_T Product8_e;                   /* '<S268>/Product8' */
  real_T Product1_kt;                  /* '<S267>/Product1' */
  real_T Product_ck;                   /* '<S268>/Product' */
  real_T Product_fd;                   /* '<S267>/Product' */
  real_T Product1_oy;                  /* '<S268>/Product1' */
  real_T Sum1_h;                       /* '<S268>/Sum1' */
  real_T Gain_j3;                      /* '<S268>/Gain' */
  real_T Product_ht;                   /* '<S263>/Product' */
  real_T Product1_acg;                 /* '<S263>/Product1' */
  real_T Sum1_f;                       /* '<S263>/Sum1' */
  real_T Gain_d;                       /* '<S263>/Gain' */
  real_T Product4_l;                   /* '<S263>/Product4' */
  real_T Product6_jt;                  /* '<S263>/Product6' */
  real_T Product7_j;                   /* '<S263>/Product7' */
  real_T Sum3_c4;                      /* '<S263>/Sum3' */
  real_T Gain2_cm;                     /* '<S263>/Gain2' */
  real_T Product8_it;                  /* '<S263>/Product8' */
  real_T Product2_cu;                  /* '<S263>/Product2' */
  real_T Product3_gz;                  /* '<S263>/Product3' */
  real_T Sum2_l0;                      /* '<S263>/Sum2' */
  real_T Gain1_ia;                     /* '<S263>/Gain1' */
  real_T Product5_m;                   /* '<S263>/Product5' */
  real_T Sum_ain;                      /* '<S263>/Sum' */
  real_T Product4_ia;                  /* '<S268>/Product4' */
  real_T Product2_ce;                  /* '<S268>/Product2' */
  real_T Product3_po;                  /* '<S268>/Product3' */
  real_T Sum2_gl;                      /* '<S268>/Sum2' */
  real_T Gain1_k;                      /* '<S268>/Gain1' */
  real_T Product_g3;                   /* '<S264>/Product' */
  real_T Product1_kg;                  /* '<S264>/Product1' */
  real_T Sum1_a;                       /* '<S264>/Sum1' */
  real_T Gain_gk;                      /* '<S264>/Gain' */
  real_T Product4_o4;                  /* '<S264>/Product4' */
  real_T Product2_oe;                  /* '<S264>/Product2' */
  real_T Product3_fl;                  /* '<S264>/Product3' */
  real_T Sum2_jw;                      /* '<S264>/Sum2' */
  real_T Gain1_ax;                     /* '<S264>/Gain1' */
  real_T Product5_lx;                  /* '<S264>/Product5' */
  real_T Product6_k;                   /* '<S264>/Product6' */
  real_T Product7_py;                  /* '<S264>/Product7' */
  real_T Sum3_hq;                      /* '<S264>/Sum3' */
  real_T Gain2_g;                      /* '<S264>/Gain2' */
  real_T Product8_d;                   /* '<S264>/Product8' */
  real_T Sum_k5;                       /* '<S264>/Sum' */
  real_T Product5_ns;                  /* '<S268>/Product5' */
  real_T Sum_im;                       /* '<S268>/Sum' */
  real_T Product_ci;                   /* '<S269>/Product' */
  real_T Product1_az;                  /* '<S269>/Product1' */
  real_T Sum1_hj;                      /* '<S269>/Sum1' */
  real_T Gain_gt;                      /* '<S269>/Gain' */
  real_T Product4_fk;                  /* '<S269>/Product4' */
  real_T Product6_gfw;                 /* '<S269>/Product6' */
  real_T Product7_of;                  /* '<S269>/Product7' */
  real_T Sum3_n3;                      /* '<S269>/Sum3' */
  real_T Gain2_hb;                     /* '<S269>/Gain2' */
  real_T Product8_eq;                  /* '<S269>/Product8' */
  real_T Product2_f2;                  /* '<S269>/Product2' */
  real_T Product3_nj;                  /* '<S269>/Product3' */
  real_T Sum2_c2;                      /* '<S269>/Sum2' */
  real_T Gain1_cs;                     /* '<S269>/Gain1' */
  real_T Product5_kr;                  /* '<S269>/Product5' */
  real_T Sum_di;                       /* '<S269>/Sum' */
  real_T Product_f5;                   /* '<S270>/Product' */
  real_T Product1_fr;                  /* '<S270>/Product1' */
  real_T Sum1_e;                       /* '<S270>/Sum1' */
  real_T Gain_pt;                      /* '<S270>/Gain' */
  real_T Product4_a;                   /* '<S270>/Product4' */
  real_T Product2_eh;                  /* '<S270>/Product2' */
  real_T Product3_gd;                  /* '<S270>/Product3' */
  real_T Sum2_im;                      /* '<S270>/Sum2' */
  real_T Gain1_fv;                     /* '<S270>/Gain1' */
  real_T Product5_kn;                  /* '<S270>/Product5' */
  real_T Product6_ga;                  /* '<S270>/Product6' */
  real_T Product7_hk;                  /* '<S270>/Product7' */
  real_T Sum3_id;                      /* '<S270>/Sum3' */
  real_T Gain2_os;                     /* '<S270>/Gain2' */
  real_T Product8_ai;                  /* '<S270>/Product8' */
  real_T Sum_b4;                       /* '<S270>/Sum' */
  real_T TmpSignalConversionAtDotProduct2Inport1[3];
  real_T UnitConversion_kh[3];         /* '<S302>/Unit Conversion' */
  real_T kmtoVRMLunits_n[3];           /* '<S241>/km to VRML units' */
  real_T KeepSunInView[3];             /* '<S225>/KeepSunInView' */
  real_T InvertSunPosECEF[3];          /* '<S229>/InvertSunPosECEF' */
  real_T DotProduct;                   /* '<S250>/Dot Product' */
  real_T Sqrt;                         /* '<S250>/Sqrt' */
  real_T Divide_b[3];                  /* '<S250>/Divide' */
  real_T ConeHalfLength[3];            /* '<S229>/ConeHalfLength' */
  real_T Add_m[3];                     /* '<S229>/Add' */
  real_T DotProduct3;                  /* '<S235>/Dot Product3' */
  real_T DotProduct2;                  /* '<S235>/Dot Product2' */
  real_T Divide1_i;                    /* '<S235>/Divide1' */
  real_T Sqrt3;                        /* '<S235>/Sqrt3' */
  real_T Add2;                         /* '<S235>/Add2' */
  real_T DotProduct3_m;                /* '<S274>/Dot Product3' */
  real_T DotProduct2_g;                /* '<S274>/Dot Product2' */
  real_T Divide1_n;                    /* '<S274>/Divide1' */
  real_T Sqrt3_m;                      /* '<S274>/Sqrt3' */
  real_T Divide_c;                     /* '<S274>/Divide' */
  real_T Bias_f;                       /* '<S274>/Bias' */
  real_T Abs;                          /* '<S274>/Abs' */
  real_T Bias1;                        /* '<S274>/Bias1' */
  real_T Abs1;                         /* '<S274>/Abs1' */
  real_T Merge_m;                      /* '<S274>/Merge' */
  real_T Product_fw;                   /* '<S287>/Product' */
  real_T is180degRot[3];               /* '<S235>/is 180deg Rot' */
  real_T Product1_ej;                  /* '<S287>/Product1' */
  real_T Product2_g;                   /* '<S287>/Product2' */
  real_T Product3_c;                   /* '<S287>/Product3' */
  real_T Sum_k0;                       /* '<S287>/Sum' */
  real_T sqrt_ex;                      /* '<S286>/sqrt' */
  real_T Product_jo;                   /* '<S277>/Product' */
  real_T Product1_nd;                  /* '<S277>/Product1' */
  real_T Product2_a3;                  /* '<S277>/Product2' */
  real_T Product3_fo;                  /* '<S277>/Product3' */
  real_T Product_b;                    /* '<S289>/Product' */
  real_T Product1_ca;                  /* '<S289>/Product1' */
  real_T Product2_i5r;                 /* '<S289>/Product2' */
  real_T Product3_gr;                  /* '<S289>/Product3' */
  real_T Sum_dit;                      /* '<S289>/Sum' */
  real_T TrigonometricFunction_e;      /* '<S236>/Trigonometric Function' */
  real_T Gain_a;                       /* '<S236>/Gain' */
  real_T Product_ft;                   /* '<S290>/Product' */
  real_T Product1_jo;                  /* '<S290>/Product1' */
  real_T Product2_az;                  /* '<S290>/Product2' */
  real_T Product3_n5;                  /* '<S290>/Product3' */
  real_T Sum_hh;                       /* '<S290>/Sum' */
  real_T Product_nt;                   /* '<S291>/Product' */
  real_T Product1_ee;                  /* '<S291>/Product1' */
  real_T Product2_jr;                  /* '<S291>/Product2' */
  real_T Product3_hm;                  /* '<S291>/Product3' */
  real_T Sum_dv;                       /* '<S291>/Sum' */
  real_T Product_ja;                   /* '<S292>/Product' */
  real_T Product1_g5;                  /* '<S292>/Product1' */
  real_T Product2_os;                  /* '<S292>/Product2' */
  real_T Product3_m1;                  /* '<S292>/Product3' */
  real_T Sum_a5;                       /* '<S292>/Sum' */
  real_T Product_fl;                   /* '<S294>/Product' */
  real_T Product1_di;                  /* '<S294>/Product1' */
  real_T Product2_io;                  /* '<S294>/Product2' */
  real_T Product3_kg;                  /* '<S294>/Product3' */
  real_T Sum_p3;                       /* '<S294>/Sum' */
  real_T TrigonometricFunction_c;      /* '<S237>/Trigonometric Function' */
  real_T Gain_at;                      /* '<S237>/Gain' */
  real_T Product_dt;                   /* '<S295>/Product' */
  real_T Product1_lv;                  /* '<S295>/Product1' */
  real_T Product2_fs;                  /* '<S295>/Product2' */
  real_T Product3_fv;                  /* '<S295>/Product3' */
  real_T Sum_k1;                       /* '<S295>/Sum' */
  real_T Product_i5;                   /* '<S296>/Product' */
  real_T Product1_kl;                  /* '<S296>/Product1' */
  real_T Product2_b;                   /* '<S296>/Product2' */
  real_T Product3_fh;                  /* '<S296>/Product3' */
  real_T Sum_aj;                       /* '<S296>/Sum' */
  real_T Product_hl;                   /* '<S297>/Product' */
  real_T Product1_h22;                 /* '<S297>/Product1' */
  real_T Product2_hj;                  /* '<S297>/Product2' */
  real_T Product3_bn;                  /* '<S297>/Product3' */
  real_T Sum_hqh;                      /* '<S297>/Sum' */
  real_T UnitConversion_e0[3];         /* '<S300>/Unit Conversion' */
  real_T kmtoVRMLunits_c[3];           /* '<S239>/km to VRML units' */
  real_T t2;                           /* '<S23>/Merge1' */
  real_T PointingMode;                 /* '<S70>/fromWS_Signal 1' */
  real_T MultiportSwitch;              /* '<S3>/Multiport Switch' */
  real_T utc_JD;                       /* '<S112>/Unit Delay' */
  real_T SunAngle;                     /* '<S112>/Unit Delay' */
  real_T X_ecef_h[3];                  /* '<S112>/Unit Delay' */
  real_T V_ecef_o[3];                  /* '<S112>/Unit Delay' */
  real_T X_eci[3];                     /* '<S112>/Unit Delay' */
  real_T V_eci[3];                     /* '<S112>/Unit Delay' */
  real_T q_ecef2b[4];                  /* '<S112>/Unit Delay' */
  real_T q_eci2b[4];                   /* '<S112>/Unit Delay' */
  real_T Euler_e[3];                   /* '<S112>/Unit Delay' */
  real_T LatLonAlt[3];                 /* '<S112>/Unit Delay' */
  real_T JDtoMJD;                      /* '<S116>/JD to MJD' */
  real_T Sum_nt;                       /* '<S116>/Sum' */
  real_T Bias1_h;                      /* '<S116>/Bias1' */
  real_T Divide1_j;                    /* '<S116>/Divide1' */
  real_T Gain_dd;                      /* '<S116>/Gain' */
  real_T Divide2_op;                   /* '<S116>/Divide2' */
  real_T UnitConversion_g;             /* '<S127>/Unit Conversion' */
  real_T EarthOrientationParameters_o1;
                                     /* '<S116>/Earth Orientation Parameters' */
  real_T EarthOrientationParameters_o2[2];
                                     /* '<S116>/Earth Orientation Parameters' */
  real_T EarthOrientationParameters_o3[2];
                                     /* '<S116>/Earth Orientation Parameters' */
  real_T Gain1_kk[2];                  /* '<S116>/Gain1' */
  real_T TmpSignalConversionAtsincosInport1[3];
  real_T sincos_o1_o[3];               /* '<S125>/sincos' */
  real_T sincos_o2_g[3];               /* '<S125>/sincos' */
  real_T VectorConcatenate_jj[9];      /* '<S130>/Vector Concatenate' */
  real_T Transpose[9];                 /* '<S116>/Transpose' */
  real_T r_pef[3];                     /* '<S116>/r_pef' */
  real_T ixj_p;                        /* '<S128>/i x j' */
  real_T jxk_j;                        /* '<S128>/j x k' */
  real_T kxi_j;                        /* '<S128>/k x i' */
  real_T ixk_k;                        /* '<S129>/i x k' */
  real_T jxi_i;                        /* '<S129>/j x i' */
  real_T kxj_p;                        /* '<S129>/k x j' */
  real_T Sum_eq[3];                    /* '<S124>/Sum' */
  real_T Merge_o;                      /* '<S134>/Merge' */
  real_T Gain_n;                       /* '<S134>/Gain' */
  real_T RoundingFunction2;            /* '<S134>/Rounding Function2' */
  real_T Merge1;                       /* '<S134>/Merge1' */
  real_T Bias1_m;                      /* '<S134>/Bias1' */
  real_T Gain1_pm;                     /* '<S134>/Gain1' */
  real_T RoundingFunction_h;           /* '<S134>/Rounding Function' */
  real_T Sum_oo;                       /* '<S134>/Sum' */
  real_T Bias2;                        /* '<S134>/Bias2' */
  real_T Gain2_lq;                     /* '<S134>/Gain2' */
  real_T RoundingFunction1_j;          /* '<S134>/Rounding Function1' */
  real_T Sum1_dj;                      /* '<S134>/Sum1' */
  real_T Gain3_e;                      /* '<S134>/Gain3' */
  real_T RoundingFunction3;            /* '<S134>/Rounding Function3' */
  real_T Sum2_jj;                      /* '<S134>/Sum2' */
  real_T Assignment[4];                /* '<S134>/Assignment' */
  real_T Sum4[4];                      /* '<S134>/Sum4' */
  real_T Sum3_ie;                      /* '<S134>/Sum3' */
  real_T BiasDay;                      /* '<S134>/BiasDay' */
  real_T Gain5;                        /* '<S134>/Gain5' */
  real_T Gain6;                        /* '<S134>/Gain6' */
  real_T Sum6;                         /* '<S134>/Sum6' */
  real_T Gain4;                        /* '<S134>/Gain4' */
  real_T Sum5_f;                       /* '<S134>/Sum5' */
  real_T Sum2_f;                       /* '<S132>/Sum2' */
  real_T Bias1_o;                      /* '<S132>/Bias1' */
  real_T Gain_ig;                      /* '<S132>/Gain' */
  real_T Sum_kx;                       /* '<S132>/Sum' */
  real_T Merge_b;                      /* '<S142>/Merge' */
  real_T Gain_di;                      /* '<S142>/Gain' */
  real_T RoundingFunction2_n;          /* '<S142>/Rounding Function2' */
  real_T Merge1_j;                     /* '<S142>/Merge1' */
  real_T Bias1_f;                      /* '<S142>/Bias1' */
  real_T Gain1_pq;                     /* '<S142>/Gain1' */
  real_T RoundingFunction_k;           /* '<S142>/Rounding Function' */
  real_T Sum_ec;                       /* '<S142>/Sum' */
  real_T Bias2_b;                      /* '<S142>/Bias2' */
  real_T Gain2_b;                      /* '<S142>/Gain2' */
  real_T RoundingFunction1_f;          /* '<S142>/Rounding Function1' */
  real_T Sum1_pn;                      /* '<S142>/Sum1' */
  real_T Gain3_a;                      /* '<S142>/Gain3' */
  real_T RoundingFunction3_l;          /* '<S142>/Rounding Function3' */
  real_T Sum2_f2;                      /* '<S142>/Sum2' */
  real_T Assignment_o[4];              /* '<S142>/Assignment' */
  real_T Sum4_n[4];                    /* '<S142>/Sum4' */
  real_T Sum3_ji;                      /* '<S142>/Sum3' */
  real_T BiasDay_n;                    /* '<S142>/BiasDay' */
  real_T Gain5_c;                      /* '<S142>/Gain5' */
  real_T Gain6_o;                      /* '<S142>/Gain6' */
  real_T Sum6_c;                       /* '<S142>/Sum6' */
  real_T Gain4_a;                      /* '<S142>/Gain4' */
  real_T Sum5_o;                       /* '<S142>/Sum5' */
  real_T gainVal;                      /* '<S138>/gainVal' */
  real_T jdUT1;                        /* '<S138>/Sum' */
  real_T Bias_j;                       /* '<S138>/Bias' */
  real_T MathFunction_j;               /* '<S138>/Math Function' */
  real_T mMoon;                        /* '<S146>/mMoon' */
  real_T mSun;                         /* '<S146>/mSun' */
  real_T umMoon;                       /* '<S146>/umMoon' */
  real_T dSun;                         /* '<S146>/dSun' */
  real_T omegaMoon;                    /* '<S146>/omegaMoon' */
  real_T Gain_g42[5];                  /* '<S146>/Gain' */
  real_T UnitConversion_jx[5];         /* '<S148>/Unit Conversion' */
  real_T lMercury;                     /* '<S146>/lMercury' */
  real_T lVenus;                       /* '<S146>/lVenus' */
  real_T lEarth;                       /* '<S146>/lEarth' */
  real_T lMars;                        /* '<S146>/lMars' */
  real_T lJupiter;                     /* '<S146>/lJupiter' */
  real_T lSaturn;                      /* '<S146>/lSaturn' */
  real_T lUranus;                      /* '<S146>/lUranus' */
  real_T lNeptune;                     /* '<S146>/lNeptune' */
  real_T pa;                           /* '<S146>/pa' */
  real_T TmpSignalConversionAtMathFunctionInport1[14];
  real_T MathFunction_k[14];           /* '<S146>/Math Function' */
  real_T S0;                           /* '<S147>/S0' */
  real_T Assignment_p[3];              /* '<S153>/Assignment' */
  real_T Divide_ci;                    /* '<S153>/Divide' */
  real_T Assignment1[25];              /* '<S153>/Assignment1' */
  real_T Divide1_f;                    /* '<S153>/Divide1' */
  real_T Assignment2[4];               /* '<S153>/Assignment2' */
  real_T Divide2_j;                    /* '<S153>/Divide2' */
  real_T TmpSignalConversionAtDivide3Inport2[8];
  real_T argS[66];                     /* '<S153>/Divide3' */
  real_T TrigonometricFunction_d[66];  /* '<S153>/Trigonometric Function' */
  real_T Divide4[66];                  /* '<S153>/Divide4' */
  real_T TrigonometricFunction1[66];   /* '<S153>/Trigonometric Function1' */
  real_T Divide5[66];                  /* '<S153>/Divide5' */
  real_T Sum_ep[66];                   /* '<S153>/Sum' */
  real_T Sum1_am;                      /* '<S153>/Sum1' */
  real_T Sum2_n3;                      /* '<S147>/Sum2' */
  real_T Gain2_eo;                     /* '<S147>/Gain2' */
  real_T UnitConversion_eq;            /* '<S149>/Unit Conversion' */
  real_T X0;                           /* '<S147>/X0' */
  real_T Assignment_f[253];            /* '<S154>/Assignment' */
  real_T Divide_l;                     /* '<S154>/Divide' */
  real_T Assignment1_d[36];            /* '<S154>/Assignment1' */
  real_T Divide1_jp;                   /* '<S154>/Divide1' */
  real_T Assignment2_k[4];             /* '<S154>/Assignment2' */
  real_T Divide2_c;                    /* '<S154>/Divide2' */
  real_T argX[1600];                   /* '<S154>/Divide3' */
  real_T TrigonometricFunction_f[1600];/* '<S154>/Trigonometric Function' */
  real_T Divide4_f[1600];              /* '<S154>/Divide4' */
  real_T TrigonometricFunction1_j[1600];/* '<S154>/Trigonometric Function1' */
  real_T Divide5_j[1600];              /* '<S154>/Divide5' */
  real_T Sum_bw[1600];                 /* '<S154>/Sum' */
  real_T Sum1_bj;                      /* '<S154>/Sum1' */
  real_T Sum_bn;                       /* '<S147>/Sum' */
  real_T Gain3_j;                      /* '<S147>/Gain3' */
  real_T UnitConversion_b;             /* '<S150>/Unit Conversion' */
  real_T Y0;                           /* '<S147>/Y0' */
  real_T Assignment_i[277];            /* '<S155>/Assignment' */
  real_T Divide_k;                     /* '<S155>/Divide' */
  real_T Assignment1_c[30];            /* '<S155>/Assignment1' */
  real_T Divide1_if;                   /* '<S155>/Divide1' */
  real_T Assignment2_p[5];             /* '<S155>/Assignment2' */
  real_T Divide2_i;                    /* '<S155>/Divide2' */
  real_T argY[1275];                   /* '<S155>/Divide3' */
  real_T TrigonometricFunction_dw[1275];/* '<S155>/Trigonometric Function' */
  real_T Divide4_p[1275];              /* '<S155>/Divide4' */
  real_T TrigonometricFunction1_jv[1275];/* '<S155>/Trigonometric Function1' */
  real_T Divide5_h[1275];              /* '<S155>/Divide5' */
  real_T Sum_dj[1275];                 /* '<S155>/Sum' */
  real_T Sum1_o;                       /* '<S155>/Sum1' */
  real_T Sum1_f5;                      /* '<S147>/Sum1' */
  real_T Gain4_n;                      /* '<S147>/Gain4' */
  real_T UnitConversion_l;             /* '<S151>/Unit Conversion' */
  real_T Sum7;                         /* '<S147>/Sum7' */
  real_T MathFunction_o;               /* '<S147>/Math Function' */
  real_T Sum8_k;                       /* '<S147>/Sum8' */
  real_T MathFunction1;                /* '<S147>/Math Function1' */
  real_T Sum3_jx;                      /* '<S147>/Sum3' */
  real_T Sum4_i;                       /* '<S147>/Sum4' */
  real_T Divide_m;                     /* '<S147>/Divide' */
  real_T Divide1_c;                    /* '<S147>/Divide1' */
  real_T Gain5_n;                      /* '<S147>/Gain5' */
  real_T Sum6_p;                       /* '<S147>/Sum6' */
  real_T E;                            /* '<S147>/Trigonometric Function' */
  real_T Sum5_a;                       /* '<S147>/Sum5' */
  real_T Gain1_ba;                     /* '<S147>/Gain1' */
  real_T d;                            /* '<S147>/Sqrt' */
  real_T d_j;                          /* '<S147>/Trigonometric Function1' */
  real_T TmpSignalConversionAtsincosInport1_d[3];
  real_T sincos_o1_d[3];               /* '<S152>/sincos' */
  real_T sincos_o2_e[3];               /* '<S152>/sincos' */
  real_T VectorConcatenate_g[9];       /* '<S156>/Vector Concatenate' */
  real_T Bias1_n;                      /* '<S140>/Bias1' */
  real_T Gain_dh;                      /* '<S140>/Gain' */
  real_T Sum_e3;                       /* '<S140>/Sum' */
  real_T Gain1_jn;                     /* '<S140>/Gain1' */
  real_T thetaERA;                     /* '<S140>/Math Function' */
  real_T TmpSignalConversionAtsincosInport1_b[3];
  real_T sincos_o1_h[3];               /* '<S157>/sincos' */
  real_T sincos_o2_f[3];               /* '<S157>/sincos' */
  real_T VectorConcatenate_c[9];       /* '<S158>/Vector Concatenate' */
  real_T Gain_bk;                      /* '<S141>/Gain' */
  real_T UnitConversion_en;            /* '<S159>/Unit Conversion' */
  real_T TmpSignalConversionAtsincosInport1_j[3];
  real_T sincos_o1_i[3];               /* '<S160>/sincos' */
  real_T sincos_o2_h[3];               /* '<S160>/sincos' */
  real_T VectorConcatenate_b[9];       /* '<S161>/Vector Concatenate' */
  real_T Product_jg[9];                /* '<S133>/Product' */
  real_T v_pef[3];                     /* '<S116>/v_pef' */
  real_T Sum1_az[3];                   /* '<S116>/Sum1' */
  real_T Transpose1[9];                /* '<S116>/Transpose1' */
  real_T r_eci[3];                     /* '<S116>/r_eci' */
  real_T v_eci[3];                     /* '<S116>/v_eci' */
  real_T Sum1_ar[3];                   /* '<S113>/Sum1' */
  real_T UnaryMinus1_l;                /* '<S216>/Unary Minus1' */
  real_T Product_pm;                   /* '<S224>/Product' */
  real_T UnaryMinus_o;                 /* '<S216>/Unary Minus' */
  real_T Product1_nx;                  /* '<S224>/Product1' */
  real_T Product2_jt;                  /* '<S224>/Product2' */
  real_T UnaryMinus2_p;                /* '<S216>/Unary Minus2' */
  real_T Product3_ho;                  /* '<S224>/Product3' */
  real_T Sum_jy;                       /* '<S224>/Sum' */
  real_T sqrt_e1;                      /* '<S223>/sqrt' */
  real_T Product2_ou;                  /* '<S219>/Product2' */
  real_T Product6_ox;                  /* '<S220>/Product6' */
  real_T Product3_lo;                  /* '<S219>/Product3' */
  real_T Product7_ho;                  /* '<S220>/Product7' */
  real_T Sum3_p;                       /* '<S220>/Sum3' */
  real_T Gain2_nk;                     /* '<S220>/Gain2' */
  real_T Product8_a0;                  /* '<S220>/Product8' */
  real_T Product1_ev;                  /* '<S219>/Product1' */
  real_T Product_hlu;                  /* '<S220>/Product' */
  real_T Product_cz;                   /* '<S219>/Product' */
  real_T Product1_iv;                  /* '<S220>/Product1' */
  real_T Sum1_l;                       /* '<S220>/Sum1' */
  real_T Gain_m;                       /* '<S220>/Gain' */
  real_T Product4_b;                   /* '<S220>/Product4' */
  real_T Product2_j5;                  /* '<S220>/Product2' */
  real_T Product3_pp;                  /* '<S220>/Product3' */
  real_T Sum2_k;                       /* '<S220>/Sum2' */
  real_T Gain1_hq;                     /* '<S220>/Gain1' */
  real_T Product5_jg;                  /* '<S220>/Product5' */
  real_T Sum_jj;                       /* '<S220>/Sum' */
  real_T Product_oq;                   /* '<S221>/Product' */
  real_T Product1_h1;                  /* '<S221>/Product1' */
  real_T Sum1_m1;                      /* '<S221>/Sum1' */
  real_T Gain_oe;                      /* '<S221>/Gain' */
  real_T Product4_ee;                  /* '<S221>/Product4' */
  real_T Product6_b;                   /* '<S221>/Product6' */
  real_T Product7_pr;                  /* '<S221>/Product7' */
  real_T Sum3_pk;                      /* '<S221>/Sum3' */
  real_T Gain2_nd;                     /* '<S221>/Gain2' */
  real_T Product8_n5;                  /* '<S221>/Product8' */
  real_T Product2_ll;                  /* '<S221>/Product2' */
  real_T Product3_kz;                  /* '<S221>/Product3' */
  real_T Sum2_cw;                      /* '<S221>/Sum2' */
  real_T Gain1_nt;                     /* '<S221>/Gain1' */
  real_T Product5_cv;                  /* '<S221>/Product5' */
  real_T Sum_mk;                       /* '<S221>/Sum' */
  real_T Product_ed;                   /* '<S222>/Product' */
  real_T Product1_cd;                  /* '<S222>/Product1' */
  real_T Sum1_fo;                      /* '<S222>/Sum1' */
  real_T Gain_aw;                      /* '<S222>/Gain' */
  real_T Product4_d1;                  /* '<S222>/Product4' */
  real_T Product2_j4;                  /* '<S222>/Product2' */
  real_T Product3_ag;                  /* '<S222>/Product3' */
  real_T Sum2_js;                      /* '<S222>/Sum2' */
  real_T Gain1_d;                      /* '<S222>/Gain1' */
  real_T Product5_a;                   /* '<S222>/Product5' */
  real_T Product6_gn;                  /* '<S222>/Product6' */
  real_T Product7_jo;                  /* '<S222>/Product7' */
  real_T Sum3_e1;                      /* '<S222>/Sum3' */
  real_T Gain2_nm;                     /* '<S222>/Gain2' */
  real_T Product8_mp;                  /* '<S222>/Product8' */
  real_T Sum_fw;                       /* '<S222>/Sum' */
  real_T zvector[3];                   /* '<S122>/Quaternion Rotation' */
  real_T DotProduct_d;                 /* '<S122>/Dot Product' */
  real_T DotProduct1;                  /* '<S122>/Dot Product1' */
  real_T Sqrt1;                        /* '<S122>/Sqrt1' */
  real_T DotProduct2_k;                /* '<S122>/Dot Product2' */
  real_T Sqrt2;                        /* '<S122>/Sqrt2' */
  real_T Product_n3;                   /* '<S122>/Product' */
  real_T Max;                          /* '<S122>/Max' */
  real_T Divide_o;                     /* '<S122>/Divide' */
  real_T Acos;                         /* '<S122>/Acos' */
  real_T Gain_og;                      /* '<S218>/Gain' */
  real_T DotProduct2_kj;               /* '<S123>/Dot Product2' */
  real_T Sqrt1_p;                      /* '<S123>/Sqrt1' */
  real_T Divide1_d;                    /* '<S123>/Divide1' */
  real_T rho;                          /* '<S123>/Acos' */
  real_T Acos1;                        /* '<S123>/Acos1' */
  real_T Gain_cp[3];                   /* '<S123>/Gain' */
  real_T DotProduct1_n;                /* '<S123>/Dot Product1' */
  real_T Sqrt2_i;                      /* '<S123>/Sqrt2' */
  real_T Max_j[3];                     /* '<S123>/Max' */
  real_T Divide_i[3];                  /* '<S123>/Divide' */
  real_T Divide2_k[3];                 /* '<S123>/Divide2' */
  real_T DotProduct3_e;                /* '<S123>/Dot Product3' */
  real_T RateTransition7[4];           /* '<S225>/Rate Transition7' */
  real_T RateTransition6[4];           /* '<S225>/Rate Transition6' */
  real_T TmpSignalConversionAtVRSinkInport3[3];/* '<S225>/Satellite Model Scaling' */
  real_T RateTransition3[3];           /* '<S225>/Rate Transition3' */
  real_T RateTransition5[3];           /* '<S225>/Rate Transition5' */
  real_T RateTransition1[3];           /* '<S225>/Rate Transition1' */
  real_T RateTransition2[4];           /* '<S225>/Rate Transition2' */
  real_T RateTransition4[3];           /* '<S225>/Rate Transition4' */
  real_T kxj_b;                        /* '<S279>/k x j' */
  real_T jxi_k;                        /* '<S279>/j x i' */
  real_T ixk_h;                        /* '<S279>/i x k' */
  real_T kxi_o;                        /* '<S278>/k x i' */
  real_T jxk_d;                        /* '<S278>/j x k' */
  real_T ixj_a;                        /* '<S278>/i x j' */
  real_T Sum_hu[3];                    /* '<S273>/Sum' */
  real_T Reshape[9];                   /* '<S209>/Reshape' */
  real_T Product_oa;                   /* '<S209>/Product' */
  real_T Product1_le;                  /* '<S209>/Product1' */
  real_T Product2_fsj;                 /* '<S209>/Product2' */
  real_T Product3_hk;                  /* '<S209>/Product3' */
  real_T Product4_p;                   /* '<S209>/Product4' */
  real_T Product5_cd;                  /* '<S209>/Product5' */
  real_T detMatrix;                    /* '<S209>/Sum' */
  real_T Bias_b;                       /* '<S203>/Bias' */
  real_T Abs1_f;                       /* '<S203>/Abs1' */
  real_T MathFunction_j5[9];           /* '<S202>/Math Function' */
  real_T Product_f0[9];                /* '<S202>/Product' */
  real_T Bias1_a[9];                   /* '<S202>/Bias1' */
  real_T Abs2[9];                      /* '<S202>/Abs2' */
  real_T Add_o;                        /* '<S185>/Add' */
  real_T sqrt_pq;                      /* '<S177>/sqrt' */
  real_T Switch[2];                    /* '<S184>/Switch' */
  real_T Product_k1;                   /* '<S184>/Product' */
  real_T Add_l;                        /* '<S183>/Add' */
  real_T Add_h;                        /* '<S181>/Add' */
  real_T Add_f;                        /* '<S182>/Add' */
  real_T Product_cfl[3];               /* '<S177>/Product' */
  real_T Add_fq;                       /* '<S195>/Add' */
  real_T sqrt_i;                       /* '<S179>/sqrt' */
  real_T Add_ms;                       /* '<S191>/Add' */
  real_T Add_a;                        /* '<S192>/Add' */
  real_T Add_k;                        /* '<S193>/Add' */
  real_T Switch_e[2];                  /* '<S194>/Switch' */
  real_T Product_kh;                   /* '<S194>/Product' */
  real_T Product_gp[3];                /* '<S179>/Product' */
  real_T Add_j;                        /* '<S190>/Add' */
  real_T sqrt_ee;                      /* '<S178>/sqrt' */
  real_T Add_c;                        /* '<S188>/Add' */
  real_T Add_g;                        /* '<S187>/Add' */
  real_T Add_g4;                       /* '<S186>/Add' */
  real_T Switch_j[2];                  /* '<S189>/Switch' */
  real_T Product_ik;                   /* '<S189>/Product' */
  real_T Product_ig[3];                /* '<S178>/Product' */
  real_T Sum_ob;                       /* '<S174>/Sum' */
  real_T sqrt_a;                       /* '<S174>/sqrt' */
  real_T Gain1_gv;                     /* '<S174>/Gain1' */
  real_T Add_b;                        /* '<S197>/Add' */
  real_T Add_i;                        /* '<S196>/Add' */
  real_T Add_c4;                       /* '<S198>/Add' */
  real_T ForIterator;                  /* '<S65>/For Iterator' */
  real_T twot;                         /* '<S65>/Gain' */
  real_T VectorConcatenate_gb[11];     /* '<S65>/Vector Concatenate' */
  real_T ncm;                          /* '<S61>/ncm' */
  real_T SumofElements;                /* '<S61>/Sum of Elements' */
  real_T Assignment_m[3];              /* '<S61>/Assignment' */
  real_T ncf;                          /* '<S62>/ncf' */
  real_T Selector1;                    /* '<S62>/Selector1' */
  real_T Bias_d;                       /* '<S62>/Bias' */
  real_T Divide_ov;                    /* '<S62>/Divide' */
  real_T Bias1_e;                      /* '<S62>/Bias1' */
  real_T Divide1_b;                    /* '<S62>/Divide1' */
  real_T Sum_mw;                       /* '<S62>/Sum' */
  real_T Selector;                     /* '<S62>/Selector' */
  real_T Divide2_a;                    /* '<S62>/Divide2' */
  real_T Assignment_d[11];             /* '<S62>/Assignment' */
  real_T VectorConcatenate_p[11];      /* '<S60>/Vector Concatenate' */
  real_T UnitDelay1[11];               /* '<S60>/Unit Delay1' */
  real_T Switch_l[11];                 /* '<S60>/Switch' */
  real_T crlonm1;                      /* '<S60>/crlon[m-1]' */
  real_T Gain_e1;                      /* '<S60>/Gain' */
  real_T Product_ic;                   /* '<S60>/Product' */
  real_T crlonm11;                     /* '<S60>/crlon[m-1]1' */
  real_T Sum_ni;                       /* '<S60>/Sum' */
  real_T Assignment_is[11];            /* '<S60>/Assignment' */
  real_T ncm_f;                        /* '<S43>/ncm' */
  real_T SumofElements_e;              /* '<S43>/Sum of Elements' */
  real_T Assignment_d3[3];             /* '<S43>/Assignment' */
  real_T ncf_h;                        /* '<S44>/ncf' */
  real_T Selector1_c;                  /* '<S44>/Selector1' */
  real_T Bias_a;                       /* '<S44>/Bias' */
  real_T Divide_gq;                    /* '<S44>/Divide' */
  real_T Bias1_p;                      /* '<S44>/Bias1' */
  real_T Divide1_jh;                   /* '<S44>/Divide1' */
  real_T Sum_ap;                       /* '<S44>/Sum' */
  real_T Selector_k;                   /* '<S44>/Selector' */
  real_T Divide2_ok;                   /* '<S44>/Divide2' */
  real_T Assignment_n[13];             /* '<S44>/Assignment' */
  real_T ncm_i;                        /* '<S32>/ncm' */
  real_T SumofElements_a;              /* '<S32>/Sum of Elements' */
  real_T Assignment_g[3];              /* '<S32>/Assignment' */
  real_T ncf_hr;                       /* '<S33>/ncf' */
  real_T Selector1_o;                  /* '<S33>/Selector1' */
  real_T Bias_ji;                      /* '<S33>/Bias' */
  real_T Divide_a4;                    /* '<S33>/Divide' */
  real_T Bias1_nc;                     /* '<S33>/Bias1' */
  real_T Divide1_cr;                   /* '<S33>/Divide1' */
  real_T Sum_ip;                       /* '<S33>/Sum' */
  real_T Selector_f;                   /* '<S33>/Selector' */
  real_T Divide2_l;                    /* '<S33>/Divide2' */
  real_T Assignment_pv[13];            /* '<S33>/Assignment' */
  int32_T ncm_ig;                      /* '<S66>/ncm' */
  int32_T ForIterator_f;               /* '<S67>/For Iterator' */
  int32_T ForIterator_h;               /* '<S60>/For Iterator' */
  int32_T Bias2_i;                     /* '<S60>/Bias2' */
  int32_T Bias3_i;                     /* '<S60>/Bias3' */
  int32_T Bias4;                       /* '<S60>/Bias4' */
  boolean_T Compare;                   /* '<S275>/Compare' */
  boolean_T SunInView;                 /* '<S112>/Unit Delay' */
  boolean_T InSunView;                 /* '<S123>/In Sun View' */
  boolean_T Compare_g;                 /* '<S210>/Compare' */
  boolean_T Compare_j[9];              /* '<S208>/Compare' */
  boolean_T LogicalOperator1;          /* '<S202>/Logical Operator1' */
  B_ForIteratorSubsystem_asbCubeSat_j_T ForIteratorSubsystem_l;/* '<S46>/For Iterator Subsystem' */
  B_ForIteratorSubsystem_asbCubeSat_n_T ForIteratorSubsystem_m;/* '<S45>/For Iterator Subsystem' */
  B_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem_o;/* '<S39>/For Iterator Subsystem' */
  B_ForIteratorSubsystem_asbCubeSat_j_T ForIteratorSubsystem_e;/* '<S35>/For Iterator Subsystem' */
  B_ForIteratorSubsystem_asbCubeSat_n_T ForIteratorSubsystem_k;/* '<S34>/For Iterator Subsystem' */
  B_ForIteratorSubsystem_asbCubeSat_T ForIteratorSubsystem;/* '<S28>/For Iterator Subsystem' */
} B_asbCubeSat_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE[3];          /* '<S228>/Unit Delay' */
  real_T UnitDelay_1_DSTATE;           /* '<S112>/Unit Delay' */
  real_T UnitDelay_10_DSTATE;          /* '<S112>/Unit Delay' */
  real_T UnitDelay_2_DSTATE[3];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_3_DSTATE[3];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_4_DSTATE[3];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_5_DSTATE[3];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_6_DSTATE[4];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_7_DSTATE[4];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_8_DSTATE[3];        /* '<S112>/Unit Delay' */
  real_T UnitDelay_9_DSTATE[3];        /* '<S112>/Unit Delay' */
  real_T UnitDelay1_DSTATE[11];        /* '<S60>/Unit Delay1' */
  real_T SpacecraftDynamics_DWORK2[3]; /* '<S113>/Spacecraft Dynamics' */
  real_T SpacecraftDynamics_DWORK3[3]; /* '<S113>/Spacecraft Dynamics' */
  real_T UDPSend_NetworkLib[137];      /* '<S5>/UDP Send' */
  real_T RateTransition1_Buffer[3];    /* '<S225>/Rate Transition1' */
  real_T RateTransition2_Buffer[4];    /* '<S225>/Rate Transition2' */
  real_T RateTransition3_Buffer[3];    /* '<S225>/Rate Transition3' */
  real_T RateTransition4_Buffer[3];    /* '<S225>/Rate Transition4' */
  real_T RateTransition5_Buffer[3];    /* '<S225>/Rate Transition5' */
  real_T RateTransition6_Buffer[4];    /* '<S225>/Rate Transition6' */
  real_T RateTransition7_Buffer[4];    /* '<S225>/Rate Transition7' */
  real_T Product_DWORK1[9];            /* '<S133>/Product' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } fromWS_Signal1_PWORK;              /* '<S70>/fromWS_Signal 1' */

  void *VRSink_PWORK[25];              /* '<S225>/VR Sink' */
  struct {
    int_T PrevIndex;
  } fromWS_Signal1_IWORK;              /* '<S70>/fromWS_Signal 1' */

  boolean_T UnitDelay_11_DSTATE;       /* '<S112>/Unit Delay' */
  int8_T If_ActiveSubsystem;           /* '<S119>/If' */
  int8_T If1_ActiveSubsystem;          /* '<S21>/If1' */
  int8_T If2_ActiveSubsystem;          /* '<S23>/If2' */
  int8_T If_ActiveSubsystem_d;         /* '<S274>/If' */
  int8_T If_ActiveSubsystem_p;         /* '<S134>/If' */
  int8_T If_ActiveSubsystem_m;         /* '<S142>/If' */
  int8_T If1_ActiveSubsystem_f;        /* '<S175>/If1' */
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

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Gain1;                  /* '<S227>/Gain1' */
  const real_T Gain2;                  /* '<S227>/Gain2' */
  const real_T TrigonometricFunction;  /* '<S227>/Trigonometric Function' */
  const real_T Product;                /* '<S227>/Product' */
  const real_T ScaleModelToVRML;       /* '<S240>/ScaleModelToVRML' */
  const real_T gain;                   /* '<S227>/gain' */
  const real_T Sum1;                   /* '<S227>/Sum1' */
  const real_T DotProduct1;            /* '<S274>/Dot Product1' */
  const real_T DotProduct1_m;          /* '<S235>/Dot Product1' */
  const real_T Gain;                   /* '<S276>/Gain' */
  const real_T Gain2_a;                /* '<S276>/Gain2' */
  const real_T Switch3[3];             /* '<S276>/Switch3' */
  const real_T ixj;                    /* '<S284>/i x j' */
  const real_T jxk;                    /* '<S284>/j x k' */
  const real_T kxi;                    /* '<S284>/k x i' */
  const real_T ixk;                    /* '<S285>/i x k' */
  const real_T jxi;                    /* '<S285>/j x i' */
  const real_T kxj;                    /* '<S285>/k x j' */
  const real_T Sum[3];                 /* '<S283>/Sum' */
  const real_T DataTypeConversion;     /* '<S238>/Data Type Conversion' */
  const real_T Gain_b;                 /* '<S238>/Gain' */
  const real_T Add;                    /* '<S238>/Add' */
  const real_T mtoVRML[3];             /* '<S225>/m to VRML' */
  const real_T Bias1;                  /* '<S28>/Bias1' */
  const real_T Bias1_k;                /* '<S34>/Bias1' */
  const real_T Bias1_i;                /* '<S39>/Bias1' */
  const real_T Bias1_m;                /* '<S45>/Bias1' */
  const real_T RoundingFunction;       /* '<S54>/Rounding Function' */
  const real_T Sum_p;                  /* '<S54>/Sum' */
  const real_T Bias1_i2;               /* '<S57>/Bias1' */
  const real_T Bias1_e;                /* '<S63>/Bias1' */
  const real_T Bias;                   /* '<S116>/Bias' */
  const real_T Divide;                 /* '<S116>/Divide' */
  const real_T Sum1_g;                 /* '<S132>/Sum1' */
  const real_T Bias_h;                 /* '<S132>/Bias' */
  const real_T secGain;                /* '<S132>/secGain' */
  const real_T Selector[528];          /* '<S153>/Selector' */
  const real_T Selector1[66];          /* '<S153>/Selector1' */
  const real_T Selector2[66];          /* '<S153>/Selector2' */
  const real_T Selector_n[22400];      /* '<S154>/Selector' */
  const real_T Selector1_m[1600];      /* '<S154>/Selector1' */
  const real_T Selector2_d[1600];      /* '<S154>/Selector2' */
  const real_T Selector_h[17850];      /* '<S155>/Selector' */
  const real_T Selector1_l[1275];      /* '<S155>/Selector1' */
  const real_T Selector2_p[1275];      /* '<S155>/Selector2' */
  const real_T Gain1_m[2];             /* '<S141>/Gain1' */
  const real_T Sum2[3];                /* '<S113>/Sum2' */
  const boolean_T xz;                  /* '<S276>/x>z' */
  const boolean_T Compare;             /* '<S298>/Compare' */
} ConstB_asbCubeSat_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            asbCubeSat_B
#define BlockIO                        B_asbCubeSat_T
#define rtX                            asbCubeSat_X
#define ContinuousStates               X_asbCubeSat_T
#define rtXdot                         asbCubeSat_XDot
#define StateDerivatives               XDot_asbCubeSat_T
#define tXdis                          asbCubeSat_XDis
#define StateDisabled                  XDis_asbCubeSat_T
#define rtDWork                        asbCubeSat_DW
#define D_Work                         DW_asbCubeSat_T
#define tConstBlockIOType              ConstB_asbCubeSat_T
#define rtC                            asbCubeSat_ConstB

/* Real-time Model Data Structure */
struct tag_RTM_asbCubeSat_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[13];
  real_T odeF[3][13];
  ODE3_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint32_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block signals (default storage) */
extern B_asbCubeSat_T asbCubeSat_B;

/* Continuous states (default storage) */
extern X_asbCubeSat_T asbCubeSat_X;

/* Block states (default storage) */
extern DW_asbCubeSat_T asbCubeSat_DW;

/* External data declarations for dependent source files */
extern const ACSOutBus asbCubeSat_rtZACSOutBus;/* ACSOutBus ground */
extern const FCSOutBus asbCubeSat_rtZFCSOutBus;/* FCSOutBus ground */
extern const ConstB_asbCubeSat_T asbCubeSat_ConstB;/* constant block i/o */

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* Model entry point functions */
extern void asbCubeSat_initialize(void);
extern void asbCubeSat_output0(void);
extern void asbCubeSat_update0(void);
extern void asbCubeSat_output2(void);
extern void asbCubeSat_update2(void);
extern void asbCubeSat_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern asbCubeSat_rtModel *asbCubeSat(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_asbCubeSat_T *const asbCubeSat_M;

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
