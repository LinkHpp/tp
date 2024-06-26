#
# Generate By: dol2asm
# Module: 147
#

# Libraries
LIBRARIES = [
	"d/a/b/d_a_b_gos",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_b_gos",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80604180,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806041AC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806041D8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806041F8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80604214,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8060426C,'size':48,'pad':0,'label':"__ct__13daB_GOS_HIO_cFv",'name':"__ct__13daB_GOS_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8060429C,'size':212,'pad':0,'label':"daB_GOS_Draw__FP11b_gos_class",'name':"daB_GOS_Draw__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80604370,'size':172,'pad':0,'label':"anm_init__FP11b_gos_classifUcf",'name':"anm_init__FP11b_gos_classifUcf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8060441C,'size':4,'pad':0,'label':"damage_check__FP11b_gos_class",'name':"damage_check__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80604420,'size':184,'pad':0,'label':"wait__FP11b_gos_class",'name':"wait__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806044D8,'size':268,'pad':0,'label':"walk__FP11b_gos_class",'name':"walk__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806045E4,'size':252,'pad':0,'label':"ball__FP11b_gos_class",'name':"ball__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806046E0,'size':512,'pad':0,'label':"stick__FP11b_gos_class",'name':"stick__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806048E0,'size':668,'pad':0,'label':"action__FP11b_gos_class",'name':"action__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80604B7C,'size':376,'pad':0,'label':"daB_GOS_Execute__FP11b_gos_class",'name':"daB_GOS_Execute__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80604CF4,'size':8,'pad':0,'label':"daB_GOS_IsDelete__FP11b_gos_class",'name':"daB_GOS_IsDelete__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80604CFC,'size':104,'pad':0,'label':"daB_GOS_Delete__FP11b_gos_class",'name':"daB_GOS_Delete__FP11b_gos_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80604D64,'size':248,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80604E5C,'size':456,'pad':0,'label':"daB_GOS_Create__FP10fopAc_ac_c",'name':"daB_GOS_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80605024,'size':436,'pad':0,'label':"__ct__11b_gos_classFv",'name':"__ct__11b_gos_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806051D8,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80605220,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80605268,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806052B0,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80605320,'size':72,'pad':0,'label':"__dt__13daB_GOS_HIO_cFv",'name':"__dt__13daB_GOS_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80605368,'size':60,'pad':0,'label':"__sinit_d_a_b_gos_cpp",'name':"__sinit_d_a_b_gos_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x806053A4,'size':8,'pad':0,'label':"func_806053A4",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806053AC,'size':8,'pad':0,'label':"func_806053AC",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806053B4,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x806053BC,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x806053C8,'size':4,'pad':0,'label':"lit_3646",'name':"@3646",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[9,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053CC,'size':4,'pad':0,'label':"lit_3647",'name':"@3647",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053D0,'size':4,'pad':0,'label':"lit_3674",'name':"@3674",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053D4,'size':4,'pad':0,'label':"lit_3675",'name':"@3675",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053D8,'size':4,'pad':0,'label':"lit_3676",'name':"@3676",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806053DC,'size':4,'pad':0,'label':"lit_3684",'name':"@3684",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053E0,'size':4,'pad':0,'label':"lit_3699",'name':"@3699",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053E4,'size':4,'pad':0,'label':"lit_3700",'name':"@3700",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053E8,'size':4,'pad':0,'label':"lit_3711",'name':"@3711",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053EC,'size':4,'pad':0,'label':"lit_3712",'name':"@3712",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053F0,'size':4,'pad':0,'label':"lit_3727",'name':"@3727",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053F4,'size':4,'pad':0,'label':"lit_3774",'name':"@3774",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053F8,'size':4,'pad':0,'label':"lit_3827",'name':"@3827",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x806053FC,'size':4,'pad':0,'label':"lit_3828",'name':"@3828",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80605400,'size':4,'pad':0,'label':"lit_3829",'name':"@3829",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80605404,'size':4,'pad':0,'label':"lit_3830",'name':"@3830",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80605408,'size':4,'pad':0,'label':"lit_3831",'name':"@3831",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8060540C,'size':4,'pad':0,'label':"lit_3953",'name':"@3953",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80605410,'size':4,'pad':0,'label':"lit_3954",'name':"@3954",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80605414,'size':6,'pad':0,'label':"d_a_b_gos__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x8060541C,'size':248,'pad':0,'label':"j_info",'name':"j_info",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80605514,'size':68,'pad':0,'label':"cc_cyl_src",'name':"cc_cyl_src$3915",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80605558,'size':32,'pad':0,'label':"l_daB_GOS_Method",'name':"l_daB_GOS_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80605578,'size':48,'pad':0,'label':"g_profile_B_GOS",'name':"g_profile_B_GOS",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806055A8,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806055B4,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806055C0,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806055CC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806055F0,'size':12,'pad':0,'label':"__vt__13daB_GOS_HIO_c",'name':"__vt__13daB_GOS_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80605600,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80605608,'size':4,'pad':0,'label':"boss",'name':"boss",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8060560C,'size':4,'pad':0,'label':"data_8060560C",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80605610,'size':12,'pad':0,'label':"lit_3641",'name':"@3641",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8060561C,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__13daB_GOS_HIO_cFv":5,
	"daB_GOS_Draw__FP11b_gos_class":6,
	"anm_init__FP11b_gos_classifUcf":7,
	"damage_check__FP11b_gos_class":8,
	"wait__FP11b_gos_class":9,
	"walk__FP11b_gos_class":10,
	"ball__FP11b_gos_class":11,
	"stick__FP11b_gos_class":12,
	"action__FP11b_gos_class":13,
	"daB_GOS_Execute__FP11b_gos_class":14,
	"daB_GOS_IsDelete__FP11b_gos_class":15,
	"daB_GOS_Delete__FP11b_gos_class":16,
	"useHeapInit__FP10fopAc_ac_c":17,
	"daB_GOS_Create__FP10fopAc_ac_c":18,
	"__ct__11b_gos_classFv":19,
	"__dt__8cM3dGCylFv":20,
	"__dt__8cM3dGSphFv":21,
	"__dt__8cM3dGAabFv":22,
	"__dt__12dBgS_ObjAcchFv":23,
	"__dt__13daB_GOS_HIO_cFv":24,
	"__sinit_d_a_b_gos_cpp":25,
	"func_806053A4":26,
	"func_806053AC":27,
	"_ctors":28,
	"_dtors":29,
	"lit_3646":30,
	"lit_3647":31,
	"lit_3674":32,
	"lit_3675":33,
	"lit_3676":34,
	"lit_3684":35,
	"lit_3699":36,
	"lit_3700":37,
	"lit_3711":38,
	"lit_3712":39,
	"lit_3727":40,
	"lit_3774":41,
	"lit_3827":42,
	"lit_3828":43,
	"lit_3829":44,
	"lit_3830":45,
	"lit_3831":46,
	"lit_3953":47,
	"lit_3954":48,
	"d_a_b_gos__stringBase0":49,
	"j_info":50,
	"cc_cyl_src":51,
	"l_daB_GOS_Method":52,
	"g_profile_B_GOS":53,
	"__vt__8cM3dGCyl":54,
	"__vt__8cM3dGSph":55,
	"__vt__8cM3dGAab":56,
	"__vt__12dBgS_ObjAcch":57,
	"__vt__13daB_GOS_HIO_c":58,
	"__global_destructor_chain":59,
	"boss":60,
	"data_8060560C":61,
	"lit_3641":62,
	"l_HIO":63,
}

