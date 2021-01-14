#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "flightControlSystem_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "flightControlSystem.h"
#include "flightControlSystem_capi.h"
#include "flightControlSystem_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
"flightControlSystem/Control System/Crash Predictor Flags/Delay One Step" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 ,
TARGET_STRING ( "flightControlSystem/Control System/State Estimator/Delay1" )
, TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1 ,
TARGET_STRING (
 "flightControlSystem/Control System/Controller/Attitude/Discrete-Time\nIntegrator"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 3 , - 1
, TARGET_STRING (
"flightControlSystem/Control System/Controller/Attitude/Delay" ) ,
TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 4 , - 1 ,
TARGET_STRING (
 "flightControlSystem/Control System/Controller/gravity feedforward//equilibrium thrust/Discrete-Time\nIntegrator"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 5 , - 1
, TARGET_STRING (
 "flightControlSystem/Control System/Crash Predictor Flags/Counter\nFree-Running/Output"
) , TARGET_STRING ( "" ) , "" , 0 , 2 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 6 , - 1
, TARGET_STRING (
"flightControlSystem/Control System/Path Planning/Linear Path/Unit Delay" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 7 , - 1 ,
TARGET_STRING (
"flightControlSystem/Control System/Path Planning/Linear Path/Unit Delay1" )
, TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 8 , - 1 ,
TARGET_STRING (
"flightControlSystem/Control System/Path Planning/Linear Path/Unit Delay2" )
, TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 9 , - 1 ,
TARGET_STRING (
"flightControlSystem/Control System/State Estimator/EstimatorAltitude/Delay2"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 10 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/SensorPreprocessing/FIR_IMUaccel"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 11 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/SensorPreprocessing/FIR_IMUaccel"
) , TARGET_STRING ( "" ) , "" , 0 , 3 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 12 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/SensorPreprocessing/IIR_IMUgyro_r"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 3 , 0 , 0 , 0 , - 1 , 0 } , { 13 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/Controller/gravity feedforward//equilibrium thrust/Counter\nFree-Running/Output"
) , TARGET_STRING ( "" ) , "" , 0 , 2 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 14 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/MemoryX"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 15 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorAltitude/OutlierHandling/pressureFilter_IIR"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 4 , 0 , 0 , 0 , - 1 , 0 } , { 16 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorAltitude/OutlierHandling/soonarFilter_IIR"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 4 , 0 , 0 , 0 , - 1 , 0 } , { 17 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/Delay"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 18 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorXYPosition/EstimatorXYPosition/SimplyIntegrateVelocity"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 19 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/Counter\nFree-Running/Output"
) , TARGET_STRING ( "" ) , "" , 0 , 2 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 20 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/IIRgyroz"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 5 , 0 , 0 , 0 , - 1 , 0 } , { 21 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/MemoryX"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 22 , -
1 , TARGET_STRING (
 "flightControlSystem/Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/DiscreteDerivative/UD"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void flightControlSystem_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ;
dataAddr [ 1 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s . lw3rw5s0ye [ 0 ]
) ; dataAddr [ 2 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s . fuo05buemm [
0 ] ) ; dataAddr [ 3 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s .
cosb2ibhn3 [ 0 ] ) ; dataAddr [ 4 ] = ( void * ) ( & dqykr4eggmg .
otjykwnhb3s . ppp4ajc3p1 ) ; dataAddr [ 5 ] = ( void * ) ( & dqykr4eggmg .
otjykwnhb3s . dxm3w2i52x ) ; dataAddr [ 6 ] = ( void * ) ( & dqykr4eggmg .
otjykwnhb3s . kxowumjgxo ) ; dataAddr [ 7 ] = ( void * ) ( & dqykr4eggmg .
otjykwnhb3s . gbluuntuvt ) ; dataAddr [ 8 ] = ( void * ) ( & dqykr4eggmg .
otjykwnhb3s . lo1lgeilki ) ; dataAddr [ 9 ] = ( void * ) ( & dqykr4eggmg .
otjykwnhb3s . mck2owxrk2 ) ; dataAddr [ 10 ] = ( void * ) ( & dqykr4eggmg .
otjykwnhb3s . nbbc5odoq4 [ 0 ] ) ; dataAddr [ 11 ] = ( void * ) ( &
dqykr4eggmg . otjykwnhb3s . cfcgwprtdx ) ; dataAddr [ 12 ] = ( void * ) ( &
dqykr4eggmg . otjykwnhb3s . liybiw1jbg [ 0 ] ) ; dataAddr [ 13 ] = ( void * )
( & dqykr4eggmg . otjykwnhb3s . i13qoukcsn ) ; dataAddr [ 14 ] = ( void * ) (
& dqykr4eggmg . otjykwnhb3s . etwz51o21c [ 0 ] ) ; dataAddr [ 15 ] = ( void *
) ( & dqykr4eggmg . otjykwnhb3s . kgows215bs [ 0 ] ) ; dataAddr [ 16 ] = (
void * ) ( & dqykr4eggmg . otjykwnhb3s . c4t5e3w5ek [ 0 ] ) ; dataAddr [ 17 ]
= ( void * ) ( & dqykr4eggmg . otjykwnhb3s . a3uar2xrsb [ 0 ] ) ; dataAddr [
18 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s . jxg1zvdttz [ 0 ] ) ;
dataAddr [ 19 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s . npsllq52wf ) ;
dataAddr [ 20 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s . heeedoxzle [ 0 ]
) ; dataAddr [ 21 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s . kzeijhdtif [
0 ] ) ; dataAddr [ 22 ] = ( void * ) ( & dqykr4eggmg . otjykwnhb3s .
gqxdiwstsm [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void flightControlSystem_InitializeVarDimsAddr ( int32_T * vardimsAddr
[ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void flightControlSystem_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; loggingPtrs [ 15 ] = ( NULL ) ; loggingPtrs [
16 ] = ( NULL ) ; loggingPtrs [ 17 ] = ( NULL ) ; loggingPtrs [ 18 ] = ( NULL
) ; loggingPtrs [ 19 ] = ( NULL ) ; loggingPtrs [ 20 ] = ( NULL ) ;
loggingPtrs [ 21 ] = ( NULL ) ; loggingPtrs [ 22 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , SS_SINGLE , 0 , 0 , 0 } , {
"unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , SS_UINT32 , 0 , 0
, 0 } , { "int" , "int32_T" , 0 , 0 , sizeof ( int32_T ) , SS_INT32 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 15 , 1 , 5 , 1 , 3 , 1 , 10 ,
1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.005 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 29 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ]
= { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 29 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 23 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 4160939316U , 2041757608U , 2461990162U ,
566615679U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void flightControlSystem_InitializeSystemRan ( ipf5ube4r0 * const
accn4cnket , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( accn4cnket ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemRan [ 2 ] = ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = (
NULL ) ; systemRan [ 5 ] = ( NULL ) ; systemRan [ 6 ] = ( sysRanDType * ) &
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ; systemRan [ 7 ] = (
sysRanDType * ) & dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ;
systemRan [ 8 ] = ( sysRanDType * ) & dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv
. fau3qf03xm ; systemRan [ 9 ] = ( sysRanDType * ) & dqykr4eggmg .
otjykwnhb3s . jvbbqhrajh . fau3qf03xm ; systemRan [ 10 ] = ( sysRanDType * )
& dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ; systemRan [ 11 ] = (
NULL ) ; systemRan [ 12 ] = ( NULL ) ; systemRan [ 13 ] = ( NULL ) ;
systemRan [ 14 ] = ( sysRanDType * ) & dqykr4eggmg . otjykwnhb3s . h0cudiu0ft
; systemRan [ 15 ] = ( sysRanDType * ) & dqykr4eggmg . otjykwnhb3s .
oa1muqt4on ; systemRan [ 16 ] = ( sysRanDType * ) & dqykr4eggmg . otjykwnhb3s
. btfjf5acqg ; systemRan [ 17 ] = ( sysRanDType * ) & dqykr4eggmg .
otjykwnhb3s . pxamy50saq ; systemRan [ 18 ] = ( NULL ) ; systemRan [ 19 ] = (
sysRanDType * ) & dqykr4eggmg . otjykwnhb3s . hihnlferdi ; systemRan [ 20 ] =
( sysRanDType * ) & dqykr4eggmg . otjykwnhb3s . nuogwfijir ; systemRan [ 21 ]
= ( NULL ) ; systemRan [ 22 ] = ( NULL ) ; systemRan [ 23 ] = ( NULL ) ;
systemRan [ 24 ] = ( NULL ) ; systemRan [ 25 ] = ( NULL ) ; systemRan [ 26 ]
= ( NULL ) ; systemRan [ 27 ] = ( NULL ) ; systemRan [ 28 ] = ( NULL ) ;
systemTid [ 1 ] = nmtwkzsqud [ 0 ] ; systemTid [ 2 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 3 ] = nmtwkzsqud [ 0 ] ; systemTid [ 4 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 5 ] = nmtwkzsqud [ 0 ] ; systemTid [ 6 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 10 ] = nmtwkzsqud [ 0 ] ; systemTid [ 7 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 9 ] = nmtwkzsqud [ 0 ] ; systemTid [ 8 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 11 ] = nmtwkzsqud [ 0 ] ; systemTid [ 12 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 13 ] = nmtwkzsqud [ 0 ] ; systemTid [ 14 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 15 ] = nmtwkzsqud [ 0 ] ; systemTid [ 16 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 17 ] = nmtwkzsqud [ 0 ] ; systemTid [ 18 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 19 ] = nmtwkzsqud [ 0 ] ; systemTid [ 20 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 21 ] = nmtwkzsqud [ 0 ] ; systemTid [ 22 ] = nmtwkzsqud [ 1 ] ;
systemTid [ 23 ] = nmtwkzsqud [ 1 ] ; systemTid [ 24 ] = nmtwkzsqud [ 1 ] ;
systemTid [ 25 ] = nmtwkzsqud [ 1 ] ; systemTid [ 26 ] = nmtwkzsqud [ 1 ] ;
systemTid [ 27 ] = nmtwkzsqud [ 1 ] ; systemTid [ 28 ] = nmtwkzsqud [ 0 ] ;
systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1
] = 0 ; rtContextSystems [ 2 ] = 0 ; rtContextSystems [ 3 ] = 0 ;
rtContextSystems [ 4 ] = 0 ; rtContextSystems [ 5 ] = 0 ; rtContextSystems [
6 ] = 6 ; rtContextSystems [ 7 ] = 7 ; rtContextSystems [ 8 ] = 8 ;
rtContextSystems [ 9 ] = 9 ; rtContextSystems [ 10 ] = 10 ; rtContextSystems
[ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ; rtContextSystems [ 13 ] = 0 ;
rtContextSystems [ 14 ] = 14 ; rtContextSystems [ 15 ] = 15 ;
rtContextSystems [ 16 ] = 16 ; rtContextSystems [ 17 ] = 17 ;
rtContextSystems [ 18 ] = 0 ; rtContextSystems [ 19 ] = 19 ; rtContextSystems
[ 20 ] = 20 ; rtContextSystems [ 21 ] = 0 ; rtContextSystems [ 22 ] = 0 ;
rtContextSystems [ 23 ] = 0 ; rtContextSystems [ 24 ] = 0 ; rtContextSystems
[ 25 ] = 0 ; rtContextSystems [ 26 ] = 0 ; rtContextSystems [ 27 ] = 0 ;
rtContextSystems [ 28 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void flightControlSystem_InitializeDataMapInfo ( ipf5ube4r0 * const
accn4cnket , void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion (
accn4cnket -> DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( accn4cnket ->
DataMapInfo . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( accn4cnket
-> DataMapInfo . mmi , & mmiStaticInfoLogging ) ;
flightControlSystem_InitializeDataAddr ( accn4cnket -> DataMapInfo .
dataAddress ) ; rtwCAPI_SetDataAddressMap ( accn4cnket -> DataMapInfo . mmi ,
accn4cnket -> DataMapInfo . dataAddress ) ;
flightControlSystem_InitializeVarDimsAddr ( accn4cnket -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( accn4cnket -> DataMapInfo .
mmi , accn4cnket -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
accn4cnket -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
accn4cnket -> DataMapInfo . mmi , ( NULL ) ) ;
flightControlSystem_InitializeLoggingFunctions ( accn4cnket -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( accn4cnket -> DataMapInfo . mmi ,
accn4cnket -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
accn4cnket -> DataMapInfo . mmi , & accn4cnket -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( accn4cnket -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( accn4cnket -> DataMapInfo .
mmi , 0 ) ; flightControlSystem_InitializeSystemRan ( accn4cnket , accn4cnket
-> DataMapInfo . systemRan , accn4cnket -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( accn4cnket -> DataMapInfo .
mmi , accn4cnket -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
accn4cnket -> DataMapInfo . mmi , accn4cnket -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( accn4cnket -> DataMapInfo . mmi , & nmtwkzsqud [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void flightControlSystem_host_InitializeDataMapInfo (
flightControlSystem_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
