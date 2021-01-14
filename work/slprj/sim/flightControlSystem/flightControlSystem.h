#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include <math.h>
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#include "viphough_rt.h"
#include "vipedge_rt.h"
#endif
#include "flightControlSystem_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T fau3qf03xm ; } hrtts4l5bc ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T plfwnuys0s_mbvzarwird [ 12 ] ; real32_T
eqcnqbzceo_cl54gopm0x [ 9 ] ; real32_T eqcnqbzceo_kkiq3xxxve [ 9 ] ; real_T
n0q2f40jeb_cxarnvbvui [ 4 ] ; real_T dqe2bfipxh_bhxxfovxdy [ 3 ] ; real_T
eqcnqbzceo_pbm3vprmfu [ 3 ] ; real32_T fv [ 4 ] ; real_T oku3buin1p [ 2 ] ;
real_T f4tjnre2ob_cv5hdgrwft [ 2 ] ; real32_T l0g5emjzyf [ 3 ] ; real32_T
bg112otcn4_fqdqrf4qbc [ 3 ] ; real32_T cvasds0tme_g2mlkqadfk [ 3 ] ; real_T
djvwternf5 ; real_T hdxcsa3puy ; real_T oae5uhiiro [ 3 ] ; real_T i3pinaxgnz
[ 2 ] ; real_T i5nliynh4b [ 2 ] ; real_T f0gqdgw12c [ 2 ] ; real_T lt2smnvsra
[ 2 ] ; real_T lk3y2yn5py [ 2 ] ; real_T mbjhvtpbo1 [ 2 ] ; real_T hi2od0yox4
; real_T ewuj5vtwfn ; real_T ctra5q21al ; real_T g5edn5v53l ; real_T minError
; real_T Upper ; real_T Lower ; real_T ave1y1n2dn_g1smspu5ke ; real_T
iohpejipzk_merlcviukg ; real_T dtpqymzf5t_idx_1 ; real_T fq3kwemf4d_idx_0 ;
real_T fq3kwemf4d_idx_1 ; real32_T mgz0r1e0lz [ 2 ] ; real32_T dbrg54n24m [ 2
] ; real32_T na3yud1aut [ 2 ] ; real32_T bkldezu2v5 [ 2 ] ; real32_T
j11lmxm2oh_nz4o0shxby [ 2 ] ; real32_T aag1qkovd2_ppxrqq0gsf [ 2 ] ; real32_T
es1wx4dbqv_llw0u2ae0v [ 2 ] ; real32_T gg0qeth3qa_jwzvbuczlb [ 2 ] ; real32_T
fjthajd3v1_dhmrxtyqop [ 2 ] ; real32_T jeqi132dsy ; real32_T avzp0wm2ct [ 4 ]
; real32_T afm3j3s10e [ 2 ] ; real32_T kqmkgsbvnj [ 2 ] ; real32_T adrzywahri
[ 3 ] ; real32_T ave1y1n2dn [ 16 ] ; real32_T gi4jlxkjrs [ 4 ] ; real32_T
lkm5xcybxa [ 4 ] ; real32_T dsdwiqfetv [ 2 ] ; real32_T pzbtkrpf14 [ 2 ] ;
real32_T aoqbouuqaf [ 2 ] ; real32_T j5zb3re5gi ; real32_T numAccum ;
real32_T gatj3nvrfe_guugdwf2m3 ; real32_T du4oxjhfao_ldqodwenvz ; real32_T
cgkzo2biyi_dhamdvybc1 ; real32_T bnx0xdx4qj_idx_2 ; real32_T dsdwiqfetv_idx_2
; real32_T pfx3v1i1xd_idx_1 ; real32_T pfx3v1i1xd_idx_2 ; real32_T
pk1fweoqoh_idx_1 ; real32_T bnx0xdx4qj_idx_0 ; real32_T pk1fweoqoh_idx_0 ;
real32_T bnx0xdx4qj_idx_1 ; real32_T pk1fweoqoh_idx_2 ; real32_T
dsdwiqfetv_idx_1 ; real32_T e3by1w0q3b_idx_0 ; real32_T e3by1w0q3b_idx_1 ;
real32_T ng1ytkovmy_idx_1 ; real32_T cjczr1rx3u_idx_2 ; int32_T j ; int32_T
denIdx ; int32_T uIdx ; int32_T cff ; int32_T i ; uint32_T oyzhjxozb3 ;
uint32_T dnyhaxj3ut ; uint32_T eqvo5p0zbd ; real32_T ci1ods2gyi [ 6 ] ;
real32_T ergwl4u1xq [ 2 ] ; real32_T d1n2l0h0kx [ 3 ] ; uint8_T obwphurnwo ;
boolean_T jzwkwr45dp ; boolean_T gusludm5ar ; boolean_T b3jcj4u0eo ;
boolean_T arnw0qy1ix ; } eo4bbte2ey ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T mck2owxrk2 ; real_T etwz51o21c [ 2 ] ; real_T
c4t5e3w5ek [ 3 ] ; real_T kxowumjgxo ; real_T lo1lgeilki ; real_T gbluuntuvt
; real_T bw2ribqmwm ; real_T fl2edockfe ; struct { void * LoggedData ; void *
SignalProbe ; } mpopad3fr1 ; real32_T jxg1zvdttz [ 2 ] ; real32_T kgows215bs
[ 3 ] ; real32_T liybiw1jbg [ 5 ] ; real32_T nbbc5odoq4 [ 15 ] ; real32_T
kzeijhdtif [ 2 ] ; real32_T heeedoxzle [ 10 ] ; real32_T gqxdiwstsm [ 2 ] ;
real32_T a3uar2xrsb [ 2 ] ; real32_T lw3rw5s0ye [ 2 ] ; real32_T cosb2ibhn3 [
2 ] ; real32_T fuo05buemm [ 2 ] ; real32_T ppp4ajc3p1 ; int32_T cfcgwprtdx ;
uint32_T npsllq52wf ; uint32_T i13qoukcsn ; uint32_T dxm3w2i52x ; real32_T
ik5zcuhoy3 ; real32_T lfi3mnae2m [ 3 ] ; real32_T lpva1qajzk ; real32_T
dhhdwwczx2 [ 2 ] ; int8_T ii2o5s5qnf ; int8_T gafzug4yea ; int8_T nuogwfijir
; int8_T hihnlferdi ; int8_T pxamy50saq ; int8_T btfjf5acqg ; int8_T
oa1muqt4on ; int8_T h0cudiu0ft ; uint8_T ozjz0fr0k4 ; uint8_T pvn1aiza5a ;
uint8_T dqntvagmj1 ; uint8_T fcetmqke0e ; uint8_T j4rmema3ba ; uint8_T
bzm1oyuz1h ; boolean_T j20mj4ai3a ; boolean_T bgpppixzwr ; boolean_T
cmab1dak24 ; boolean_T jtnjtissuf ; hrtts4l5bc ciy1c2o0rv ; hrtts4l5bc
jvbbqhrajh ; hrtts4l5bc clwiujjdqo ; hrtts4l5bc acfz1zxm4t ; hrtts4l5bc
ghadbep3bbv ; } dmp1xsadgu ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T axah3umbni [ 430920 ] ; real32_T kerdr20skx_data [
39204 ] ; real32_T kerdr20skx_mbvzarwird [ 19200 ] ; uint8_T b_varargout_3 [
19200 ] ; uint8_T b_varargout_2 [ 19200 ] ; uint8_T b_varargout_1 [ 19200 ] ;
real_T haeonhasry [ 1080 ] ; real_T abnpilpwym [ 399 ] ; int32_T Xpix_data [
198 ] ; int32_T Ypix_data [ 198 ] ; int32_T ErrorBar_data [ 198 ] ; int32_T
b_data [ 198 ] ; int32_T c_data [ 198 ] ; real32_T tmp_data [ 198 ] ;
boolean_T tmp_data_cl54gopm0x [ 198 ] ; real_T eapzxg242s_kkiq3xxxve [ 8 ] ;
real_T dv3nduwlhz_cxarnvbvui [ 8 ] ; int32_T pkuyw2o5xp [ 16 ] ; boolean_T
mqqfmwc0qy [ 19200 ] ; boolean_T ekpkhlktpn [ 19200 ] ; int32_T XYPair_data [
16 ] ; real_T o2gay4a441_bhxxfovxdy [ 4 ] ; real_T gvjuoyzdkw_pbm3vprmfu [ 4
] ; uint32_T mrgssxrxhi_cv5hdgrwft [ 8 ] ; int16_T inSize [ 8 ] ; real_T
dgp11vlczy_fqdqrf4qbc [ 2 ] ; real_T laidaydbbz_g2mlkqadfk [ 2 ] ; real_T
nrf0fqeiex_g1smspu5ke [ 2 ] ; real_T oigvpp10wg_merlcviukg [ 2 ] ; uint32_T
dpgzwaap5x_nz4o0shxby [ 4 ] ; int32_T tmpOutRC [ 4 ] ; real_T q ; real_T
HIGH_x ; real_T xc ; real_T h1sa2iizg0_ppxrqq0gsf ; real_T
njavz5wjhl_llw0u2ae0v ; real_T ajfeut55hl_jwzvbuczlb ; int32_T tmp_size [ 2 ]
; int32_T kerdr20skx_size [ 2 ] ; int32_T countPeak ; int32_T q2 ; int32_T i
; int32_T i1 ; int32_T jRowsIn ; uint32_T fromIdx ; uint32_T toIdx ;
eo4bbte2ey otjykwnhb3s ; } ircitwx3zdm ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { uint32_T dvz31ct3b2 [ 19200 ] ; real32_T ob1hqnbsxq [ 19200
] ; real32_T ntccepke1s [ 19200 ] ; real32_T j4oqtum0fq [ 19200 ] ; int16_T
ej50gkms2t [ 19200 ] ; int16_T gbrasyzeyn [ 19200 ] ; uint8_T ojxolgzarl [
19764 ] ; bjqsgn0csy hvui0a4ftu ; real_T mdrqgzmhxm [ 4 ] ; real_T fdg0ctxzju
[ 4 ] ; real_T ollsqe4tkk [ 16 ] ; real_T j3dwnmtztc [ 430920 ] ; int32_T
l3fyk2x4px [ 2 ] ; int32_T afcdng2mhq [ 2 ] ; int32_T eoro3crqqr [ 2 ] ;
int32_T pbxktbsefq [ 2 ] ; int32_T ndanqgxmce [ 2 ] ; int32_T diypit1qqj [ 2
] ; uint32_T mnobpgve1a ; int8_T btek1dk1x3 ; int8_T jw22f2in0f ; int8_T
nbojvdn3wx ; boolean_T dlgapa3pxh ; dmp1xsadgu otjykwnhb3s ; } nllkaxiwhzw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct bpvdgm2xq5_ { uint8_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct nu4qaxumex_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 ; real32_T P_7 ; real32_T P_8 ;
real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T P_13
; real32_T P_14 ; real32_T P_15 ; real32_T P_16 ; real32_T P_17 ; real32_T
P_18 ; real32_T P_19 ; real32_T P_20 ; real32_T P_21 ; real32_T P_22 ;
real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26 ; real32_T P_27
; real32_T P_28 ; uint32_T P_29 ; uint32_T P_30 ; uint32_T P_31 ; uint32_T
P_32 ; uint32_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37
; real_T P_38 [ 4 ] ; real_T P_39 [ 4 ] ; real_T P_40 ; real_T P_41 ; real_T
P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ;
real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T
P_53 ; real_T P_54 [ 4 ] ; real_T P_55 [ 2 ] ; real_T P_56 [ 2 ] ; real_T
P_57 [ 4 ] ; real_T P_58 [ 2 ] ; real_T P_59 [ 2 ] ; real_T P_60 ; real_T
P_61 [ 4 ] ; real_T P_62 [ 2 ] ; real_T P_63 ; real_T P_64 ; real_T P_65 ;
real_T P_66 ; real_T P_67 [ 2 ] ; real_T P_68 [ 3 ] ; real_T P_69 [ 3 ] ;
real_T P_70 [ 4 ] ; real_T P_71 [ 4 ] ; real_T P_72 [ 4 ] ; real32_T P_73 [ 2
] ; real32_T P_74 ; real32_T P_75 ; real32_T P_76 ; real32_T P_77 [ 2 ] ;
real32_T P_78 ; real32_T P_79 ; real32_T P_80 ; real32_T P_81 ; real32_T P_82
; real32_T P_83 ; real32_T P_84 ; real32_T P_85 ; real32_T P_86 ; real32_T
P_87 ; real32_T P_88 ; real32_T P_89 ; real32_T P_90 ; real32_T P_91 ;
real32_T P_92 ; real32_T P_93 ; real32_T P_94 [ 4 ] ; real32_T P_95 [ 4 ] ;
real32_T P_96 ; real32_T P_97 [ 3 ] ; real32_T P_98 ; real32_T P_99 [ 6 ] ;
real32_T P_100 [ 6 ] ; real32_T P_101 [ 6 ] ; real32_T P_102 [ 6 ] ; real32_T
P_103 ; real32_T P_104 ; real32_T P_105 ; real32_T P_106 [ 6 ] ; real32_T
P_107 ; real32_T P_108 [ 6 ] ; real32_T P_109 [ 6 ] ; real32_T P_110 ;
real32_T P_111 ; real32_T P_112 ; real32_T P_113 ; real32_T P_114 ; real32_T
P_115 ; real32_T P_116 ; real32_T P_117 ; real32_T P_118 ; real32_T P_119 [ 2
] ; real32_T P_120 ; real32_T P_121 ; real32_T P_122 ; real32_T P_123 ;
real32_T P_124 ; real32_T P_125 [ 2 ] ; real32_T P_126 ; real32_T P_127 ;
real32_T P_128 ; real32_T P_129 ; real32_T P_130 ; real32_T P_131 ; real32_T
P_132 ; real32_T P_133 ; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ;
real32_T P_137 ; real32_T P_138 ; real32_T P_139 [ 4 ] ; real32_T P_140 ;
real32_T P_141 ; real32_T P_142 ; real32_T P_143 [ 16 ] ; real32_T P_144 ;
real32_T P_145 ; real32_T P_146 ; real32_T P_147 [ 4 ] ; real32_T P_148 [ 4 ]
; real32_T P_149 [ 4 ] ; real32_T P_150 [ 4 ] ; real32_T P_151 [ 4 ] ;
real32_T P_152 [ 4 ] ; real32_T P_153 [ 4 ] ; real32_T P_154 [ 4 ] ; real32_T
P_155 [ 4 ] ; real32_T P_156 [ 4 ] ; real32_T P_157 [ 2 ] ; uint32_T P_158 ;
uint32_T P_159 ; uint32_T P_160 ; uint32_T P_161 ; uint32_T P_162 ; uint32_T
P_163 ; uint32_T P_164 ; uint32_T P_165 ; uint32_T P_166 ; boolean_T P_167 ;
boolean_T P_168 ; uint8_T P_169 ; bpvdgm2xq5 ciy1c2o0rv ; bpvdgm2xq5
jvbbqhrajh ; bpvdgm2xq5 clwiujjdqo ; bpvdgm2xq5 acfz1zxm4t ; bpvdgm2xq5
ghadbep3bbv ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ileg2v2ld1r_ { real_T P_1 ; real_T P_2 ; int32_T P_3 ; real32_T P_4 ;
real_T P_5 [ 2 ] ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T
P_10 ; real_T P_11 ; real32_T P_12 ; nu4qaxumex otjykwnhb3s ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 23 ] ; int32_T * vardimsAddress [
23 ] ; RTWLoggingFcnPtr loggingPtrs [ 23 ] ; sysRanDType * systemRan [ 29 ] ;
int_T systemTid [ 29 ] ; } DataMapInfo ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ;
#endif
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern void ha1ipjbq54 (
uint8_T * o3vpgniqky ) ; extern void gwlyno50ln ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
pyvd4pdf3iTID0 ( void ) ; extern void pyvd4pdf3iTID1 ( void ) ; extern void
pyvd4pdf3iTID2 ( void ) ; extern void flightControlSystemTID0 ( const
SensorsBus * pxdb2gu5va , real32_T pikqq4svts [ 4 ] , uint8_T * o3vpgniqky )
; extern void flightControlSystemTID1 ( void ) ; extern void
flightControlSystemTID2 ( void ) ; extern void o2f5l50guo ( void ) ; extern
void f4qzdbbxmw ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_flightControlSystem_GetDWork ( ) ; extern void
mr_flightControlSystem_SetDWork ( const mxArray * ssDW ) ; extern void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap (
void ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) ;
extern void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu * localDW ,
nu4qaxumex * localP ) ; extern void bxsrqc204k ( dmp1xsadgu * localDW ,
nu4qaxumex * localP ) ; extern void kegjp2lgms ( eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void lsjhvu4egy (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern
void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const SensorsBus *
fp0u5nlpgw , const real_T ay1xsyaztb [ 2 ] , const real_T nfqd2uxnr0 [ 2 ] ,
const real_T melqzsunve [ 8 ] , eo4bbte2ey * localB , dmp1xsadgu * localDW ,
nu4qaxumex * localP ) ; extern void otjykwnhb3TID2 ( eo4bbte2ey * localB ,
nu4qaxumex * localP ) ;
#endif
void mr_flightControlSystem_CreateInitRestoreData ( ) ; void
mr_flightControlSystem_CopyFromInitRestoreData ( ) ; void
mr_flightControlSystem_DestroyInitRestoreData ( ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern lhjbdsj2rjg lhjbdsj2rj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern ircitwx3zdm ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ;
#endif
#endif
