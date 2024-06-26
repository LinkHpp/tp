#
# Generate By: dol2asm
# Module: 577
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_msima",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_msima",
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
	{'addr':0x80C9B320,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B34C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B378,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B398,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B3B4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B40C,'size':64,'pad':0,'label':"__ct__17daObj_Msima_HIO_cFv",'name':"__ct__17daObj_Msima_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B44C,'size':92,'pad':0,'label':"ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B4A8,'size':336,'pad':0,'label':"daObj_Msima_Draw__FP15obj_msima_class",'name':"daObj_Msima_Draw__FP15obj_msima_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B5F8,'size':20,'pad':0,'label':"msima_start__FP15obj_msima_class",'name':"msima_start__FP15obj_msima_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B60C,'size':644,'pad':0,'label':"msima_drop__FP15obj_msima_class",'name':"msima_drop__FP15obj_msima_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B890,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9B8CC,'size':356,'pad':0,'label':"msima_float__FP15obj_msima_class",'name':"msima_float__FP15obj_msima_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9BA30,'size':1152,'pad':0,'label':"action__FP15obj_msima_class",'name':"action__FP15obj_msima_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9BEB0,'size':348,'pad':0,'label':"chain_move__FP15obj_msima_classP10ms_chain_si",'name':"chain_move__FP15obj_msima_classP10ms_chain_si",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9C00C,'size':592,'pad':0,'label':"chain_move2__FP15obj_msima_classP10ms_chain_si",'name':"chain_move2__FP15obj_msima_classP10ms_chain_si",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9C25C,'size':332,'pad':0,'label':"daObj_Msima_Execute__FP15obj_msima_class",'name':"daObj_Msima_Execute__FP15obj_msima_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9C3A8,'size':8,'pad':0,'label':"daObj_Msima_IsDelete__FP15obj_msima_class",'name':"daObj_Msima_IsDelete__FP15obj_msima_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C9C3B0,'size':124,'pad':0,'label':"daObj_Msima_Delete__FP15obj_msima_class",'name':"daObj_Msima_Delete__FP15obj_msima_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9C42C,'size':756,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9C720,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9C768,'size':760,'pad':0,'label':"daObj_Msima_Create__FP10fopAc_ac_c",'name':"daObj_Msima_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9CA60,'size':60,'pad':0,'label':"__dt__10ms_chain_sFv",'name':"__dt__10ms_chain_sFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9CA9C,'size':4,'pad':0,'label':"__ct__10ms_chain_sFv",'name':"__ct__10ms_chain_sFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C9CAA0,'size':72,'pad':0,'label':"__dt__17daObj_Msima_HIO_cFv",'name':"__dt__17daObj_Msima_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C9CAE8,'size':592,'pad':0,'label':"__sinit_d_a_obj_msima_cpp",'name':"__sinit_d_a_obj_msima_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C9CD38,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C9CD40,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C9CD4C,'size':4,'pad':0,'label':"lit_3863",'name':"@3863",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[9,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD50,'size':4,'pad':0,'label':"lit_3864",'name':"@3864",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD54,'size':4,'pad':0,'label':"lit_4013",'name':"@4013",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD58,'size':4,'pad':0,'label':"lit_4014",'name':"@4014",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD5C,'size':4,'pad':0,'label':"lit_4015",'name':"@4015",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD60,'size':4,'pad':0,'label':"lit_4016",'name':"@4016",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD64,'size':4,'pad':0,'label':"lit_4017",'name':"@4017",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD68,'size':4,'pad':0,'label':"lit_4018",'name':"@4018",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD6C,'size':4,'pad':0,'label':"lit_4019",'name':"@4019",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CD70,'size':4,'pad':0,'label':"lit_4020",'name':"@4020",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD74,'size':4,'pad':0,'label':"lit_4043",'name':"@4043",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C9CD78,'size':4,'pad':0,'label':"lit_4044",'name':"@4044",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD7C,'size':4,'pad':0,'label':"lit_4045",'name':"@4045",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD80,'size':4,'pad':0,'label':"lit_4046",'name':"@4046",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD84,'size':4,'pad':0,'label':"lit_4168",'name':"@4168",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD88,'size':4,'pad':0,'label':"lit_4169",'name':"@4169",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD8C,'size':4,'pad':0,'label':"lit_4170",'name':"@4170",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD90,'size':4,'pad':0,'label':"lit_4171",'name':"@4171",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD94,'size':4,'pad':0,'label':"lit_4172",'name':"@4172",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD98,'size':4,'pad':0,'label':"lit_4173",'name':"@4173",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CD9C,'size':4,'pad':4,'label':"lit_4174",'name':"@4174",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDA4,'size':8,'pad':0,'label':"lit_4177",'name':"@4177",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CDAC,'size':4,'pad':0,'label':"lit_4214",'name':"@4214",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDB0,'size':4,'pad':0,'label':"lit_4215",'name':"@4215",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDB4,'size':4,'pad':0,'label':"lit_4216",'name':"@4216",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDB8,'size':4,'pad':0,'label':"lit_4265",'name':"@4265",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDBC,'size':4,'pad':0,'label':"lit_4266",'name':"@4266",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDC0,'size':4,'pad':0,'label':"lit_4267",'name':"@4267",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDC4,'size':4,'pad':0,'label':"lit_4268",'name':"@4268",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDC8,'size':4,'pad':0,'label':"lit_4269",'name':"@4269",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDCC,'size':4,'pad':0,'label':"lit_4412",'name':"@4412",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDD0,'size':4,'pad':0,'label':"lit_4524",'name':"@4524",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDD4,'size':4,'pad':0,'label':"lit_4525",'name':"@4525",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDD8,'size':4,'pad':0,'label':"lit_4526",'name':"@4526",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDDC,'size':4,'pad':0,'label':"lit_4602",'name':"@4602",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDE0,'size':4,'pad':0,'label':"lit_4603",'name':"@4603",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDE4,'size':4,'pad':0,'label':"lit_4604",'name':"@4604",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDE8,'size':4,'pad':0,'label':"lit_4605",'name':"@4605",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C9CDEC,'size':10,'pad':0,'label':"d_a_obj_msima__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C9CDF8,'size':32,'pad':0,'label':"l_daObj_Msima_Method",'name':"l_daObj_Msima_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C9CE18,'size':48,'pad':0,'label':"g_profile_OBJ_MSIMA",'name':"g_profile_OBJ_MSIMA",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C9CE48,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C9CE54,'size':12,'pad':0,'label':"__vt__17daObj_Msima_HIO_c",'name':"__vt__17daObj_Msima_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C9CE60,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE68,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE6C,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE70,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE74,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE78,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE7C,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE80,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE84,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE88,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE8C,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE90,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE94,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE98,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CE9C,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CEA0,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CEA4,'size':4,'pad':0,'label':"struct_80C9CEA4",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80C9CEA8,'size':12,'pad':0,'label':"lit_3858",'name':"@3858",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CEB4,'size':20,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CEC8,'size':12,'pad':0,'label':"lit_3958",'name':"@3958",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CED4,'size':12,'pad':0,'label':"c_pos",'name':"c_pos",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CEE0,'size':12,'pad':0,'label':"lit_4179",'name':"@4179",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CEEC,'size':12,'pad':0,'label':"lit_4180",'name':"@4180",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CEF8,'size':12,'pad':0,'label':"lit_4181",'name':"@4181",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CF04,'size':12,'pad':0,'label':"lit_4182",'name':"@4182",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CF10,'size':48,'pad':0,'label':"chain_p",'name':"chain_p",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CF40,'size':12,'pad':0,'label':"lit_4218",'name':"@4218",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CF4C,'size':12,'pad':0,'label':"lit_4219",'name':"@4219",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CF58,'size':12,'pad':0,'label':"lit_4220",'name':"@4220",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CF64,'size':12,'pad':0,'label':"lit_4221",'name':"@4221",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CF70,'size':48,'pad':0,'label':"chain_p2",'name':"chain_p2",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFA0,'size':4,'pad':0,'label':"data_80C9CFA0",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFA4,'size':4,'pad':0,'label':"data_80C9CFA4",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFA8,'size':4,'pad':0,'label':"data_80C9CFA8",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFAC,'size':4,'pad':0,'label':"data_80C9CFAC",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFB0,'size':4,'pad':0,'label':"data_80C9CFB0",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFB4,'size':4,'pad':0,'label':"data_80C9CFB4",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFB8,'size':4,'pad':0,'label':"data_80C9CFB8",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFBC,'size':4,'pad':0,'label':"data_80C9CFBC",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFC0,'size':4,'pad':0,'label':"data_80C9CFC0",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFC4,'size':4,'pad':0,'label':"data_80C9CFC4",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFC8,'size':4,'pad':0,'label':"data_80C9CFC8",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFCC,'size':4,'pad':0,'label':"data_80C9CFCC",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFD0,'size':4,'pad':0,'label':"data_80C9CFD0",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFD4,'size':4,'pad':0,'label':"data_80C9CFD4",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFD8,'size':4,'pad':0,'label':"data_80C9CFD8",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFDC,'size':4,'pad':0,'label':"data_80C9CFDC",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFE0,'size':4,'pad':0,'label':"data_80C9CFE0",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFE4,'size':4,'pad':0,'label':"data_80C9CFE4",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFE8,'size':4,'pad':0,'label':"data_80C9CFE8",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFEC,'size':4,'pad':0,'label':"data_80C9CFEC",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFF0,'size':4,'pad':0,'label':"data_80C9CFF0",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFF4,'size':4,'pad':0,'label':"data_80C9CFF4",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFF8,'size':4,'pad':0,'label':"data_80C9CFF8",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9CFFC,'size':4,'pad':0,'label':"data_80C9CFFC",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C9D000,'size':4,'pad':0,'label':"data_80C9D000",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__17daObj_Msima_HIO_cFv":5,
	"ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c":6,
	"daObj_Msima_Draw__FP15obj_msima_class":7,
	"msima_start__FP15obj_msima_class":8,
	"msima_drop__FP15obj_msima_class":9,
	"__dt__4cXyzFv":10,
	"msima_float__FP15obj_msima_class":11,
	"action__FP15obj_msima_class":12,
	"chain_move__FP15obj_msima_classP10ms_chain_si":13,
	"chain_move2__FP15obj_msima_classP10ms_chain_si":14,
	"daObj_Msima_Execute__FP15obj_msima_class":15,
	"daObj_Msima_IsDelete__FP15obj_msima_class":16,
	"daObj_Msima_Delete__FP15obj_msima_class":17,
	"useHeapInit__FP10fopAc_ac_c":18,
	"__dt__12J3DFrameCtrlFv":19,
	"daObj_Msima_Create__FP10fopAc_ac_c":20,
	"__dt__10ms_chain_sFv":21,
	"__ct__10ms_chain_sFv":22,
	"__dt__17daObj_Msima_HIO_cFv":23,
	"__sinit_d_a_obj_msima_cpp":24,
	"_ctors":25,
	"_dtors":26,
	"lit_3863":27,
	"lit_3864":28,
	"lit_4013":29,
	"lit_4014":30,
	"lit_4015":31,
	"lit_4016":32,
	"lit_4017":33,
	"lit_4018":34,
	"lit_4019":35,
	"lit_4020":36,
	"lit_4043":37,
	"lit_4044":38,
	"lit_4045":39,
	"lit_4046":40,
	"lit_4168":41,
	"lit_4169":42,
	"lit_4170":43,
	"lit_4171":44,
	"lit_4172":45,
	"lit_4173":46,
	"lit_4174":47,
	"lit_4177":48,
	"lit_4214":49,
	"lit_4215":50,
	"lit_4216":51,
	"lit_4265":52,
	"lit_4266":53,
	"lit_4267":54,
	"lit_4268":55,
	"lit_4269":56,
	"lit_4412":57,
	"lit_4524":58,
	"lit_4525":59,
	"lit_4526":60,
	"lit_4602":61,
	"lit_4603":62,
	"lit_4604":63,
	"lit_4605":64,
	"d_a_obj_msima__stringBase0":65,
	"l_daObj_Msima_Method":66,
	"g_profile_OBJ_MSIMA":67,
	"__vt__12J3DFrameCtrl":68,
	"__vt__17daObj_Msima_HIO_c":69,
	"__global_destructor_chain":70,
	"lit_1109":71,
	"lit_1107":72,
	"lit_1105":73,
	"lit_1104":74,
	"lit_1099":75,
	"lit_1097":76,
	"lit_1095":77,
	"lit_1094":78,
	"lit_1057":79,
	"lit_1055":80,
	"lit_1053":81,
	"lit_1052":82,
	"lit_1014":83,
	"lit_1012":84,
	"lit_1010":85,
	"struct_80C9CEA4":86,
	"lit_3858":87,
	"l_HIO":88,
	"lit_3958":89,
	"c_pos":90,
	"lit_4179":91,
	"lit_4180":92,
	"lit_4181":93,
	"lit_4182":94,
	"chain_p":95,
	"lit_4218":96,
	"lit_4219":97,
	"lit_4220":98,
	"lit_4221":99,
	"chain_p2":100,
	"data_80C9CFA0":101,
	"data_80C9CFA4":102,
	"data_80C9CFA8":103,
	"data_80C9CFAC":104,
	"data_80C9CFB0":105,
	"data_80C9CFB4":106,
	"data_80C9CFB8":107,
	"data_80C9CFBC":108,
	"data_80C9CFC0":109,
	"data_80C9CFC4":110,
	"data_80C9CFC8":111,
	"data_80C9CFCC":112,
	"data_80C9CFD0":113,
	"data_80C9CFD4":114,
	"data_80C9CFD8":115,
	"data_80C9CFDC":116,
	"data_80C9CFE0":117,
	"data_80C9CFE4":118,
	"data_80C9CFE8":119,
	"data_80C9CFEC":120,
	"data_80C9CFF0":121,
	"data_80C9CFF4":122,
	"data_80C9CFF8":123,
	"data_80C9CFFC":124,
	"data_80C9D000":125,
}

