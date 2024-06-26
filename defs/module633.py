#
# Generate By: dol2asm
# Module: 633
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_stone",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_obj_stone",
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
	{'addr':0x80CE9000,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE902C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9058,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9078,'size':740,'pad':0,'label':"bound__FP4cXyzRC13cBgS_PolyInfof",'name':"bound__FP4cXyzRC13cBgS_PolyInfof",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE935C,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE93A4,'size':32,'pad':0,'label':"CheckCreateHeap__FP10fopAc_ac_c",'name':"CheckCreateHeap__FP10fopAc_ac_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE93C4,'size':164,'pad':0,'label':"initBaseMtx__12daObjStone_cFv",'name':"initBaseMtx__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9468,'size':216,'pad':0,'label':"setBaseMtx__12daObjStone_cFv",'name':"setBaseMtx__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9540,'size':640,'pad':0,'label':"Create__12daObjStone_cFv",'name':"Create__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE97C0,'size':128,'pad':0,'label':"CreateHeap__12daObjStone_cFv",'name':"CreateHeap__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9840,'size':404,'pad':0,'label':"create__12daObjStone_cFv",'name':"create__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE99D4,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9A1C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9A64,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9AC0,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9B30,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9BA0,'size':344,'pad':0,'label':"execute__12daObjStone_cFv",'name':"execute__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CE9CF8,'size':4632,'pad':0,'label':"mode_proc_call__12daObjStone_cFv",'name':"mode_proc_call__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEAF10,'size':120,'pad':0,'label':"__dt__14dBgS_ObjGndChkFv",'name':"__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEAF88,'size':80,'pad':0,'label':"init_modePutWait__12daObjStone_cFv",'name':"init_modePutWait__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEAFD8,'size':16,'pad':0,'label':"modePutWait__12daObjStone_cFv",'name':"modePutWait__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEAFE8,'size':52,'pad':0,'label':"init_modeWait__12daObjStone_cFv",'name':"init_modeWait__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEB01C,'size':156,'pad':0,'label':"modeWait__12daObjStone_cFv",'name':"modeWait__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEB0B8,'size':64,'pad':0,'label':"init_modeDrop__12daObjStone_cFv",'name':"init_modeDrop__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEB0F8,'size':612,'pad':0,'label':"modeDrop__12daObjStone_cFv",'name':"modeDrop__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEB35C,'size':292,'pad':0,'label':"init_modeCarry__12daObjStone_cFv",'name':"init_modeCarry__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEB480,'size':616,'pad':0,'label':"modeCarry__12daObjStone_cFv",'name':"modeCarry__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEB6E8,'size':56,'pad':0,'label':"init_modeWalk__12daObjStone_cFv",'name':"init_modeWalk__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEB720,'size':1468,'pad':0,'label':"modeWalk__12daObjStone_cFv",'name':"modeWalk__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEBCDC,'size':328,'pad':0,'label':"init_modePushWolfNonBreak__12daObjStone_cFv",'name':"init_modePushWolfNonBreak__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEBE24,'size':96,'pad':0,'label':"init_modeYogan__12daObjStone_cFv",'name':"init_modeYogan__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEBE84,'size':152,'pad':0,'label':"modeYogan__12daObjStone_cFv",'name':"modeYogan__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEBF1C,'size':612,'pad':0,'label':"init_modeBreak__12daObjStone_cFv",'name':"init_modeBreak__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC180,'size':44,'pad':0,'label':"modeBreak__12daObjStone_cFv",'name':"modeBreak__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC1AC,'size':184,'pad':0,'label':"CrrPos__12daObjStone_cFv",'name':"CrrPos__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC264,'size':216,'pad':0,'label':"createItem__12daObjStone_cFv",'name':"createItem__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC33C,'size':640,'pad':0,'label':"calcRotBaseMtx__12daObjStone_cFPs",'name':"calcRotBaseMtx__12daObjStone_cFPs",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC5BC,'size':284,'pad':0,'label':"checkRollAngle__12daObjStone_cFv",'name':"checkRollAngle__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC6D8,'size':260,'pad':0,'label':"set_carry_eff__12daObjStone_cFv",'name':"set_carry_eff__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC7DC,'size':172,'pad':0,'label':"effect_delete__12daObjStone_cFb",'name':"effect_delete__12daObjStone_cFb",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC888,'size':192,'pad':0,'label':"draw__12daObjStone_cFv",'name':"draw__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC948,'size':116,'pad':0,'label':"_delete__12daObjStone_cFv",'name':"_delete__12daObjStone_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC9BC,'size':32,'pad':0,'label':"daObjStone_Draw__FP12daObjStone_c",'name':"daObjStone_Draw__FP12daObjStone_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC9DC,'size':32,'pad':0,'label':"daObjStone_Execute__FP12daObjStone_c",'name':"daObjStone_Execute__FP12daObjStone_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEC9FC,'size':32,'pad':0,'label':"daObjStone_Delete__FP12daObjStone_c",'name':"daObjStone_Delete__FP12daObjStone_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECA1C,'size':32,'pad':0,'label':"daObjStone_Create__FP10fopAc_ac_c",'name':"daObjStone_Create__FP10fopAc_ac_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECA3C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECA84,'size':8,'pad':0,'label':"func_80CECA84",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECA8C,'size':8,'pad':0,'label':"func_80CECA8C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECA94,'size':8,'pad':0,'label':"func_80CECA94",'name':"@20@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECA9C,'size':8,'pad':0,'label':"func_80CECA9C",'name':"@76@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECAA4,'size':8,'pad':0,'label':"func_80CECAA4",'name':"@60@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECAAC,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CECAB0,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CECAB4,'size':8,'pad':0,'label':"l_bmdIdx",'name':"l_bmdIdx",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[14,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECABC,'size':64,'pad':0,'label':"l_sph_src",'name':"l_sph_src",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECAFC,'size':8,'pad':0,'label':"l_r",'name':"l_r",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB04,'size':8,'pad':0,'label':"l_rolling_speedF",'name':"l_rolling_speedF",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB0C,'size':8,'pad':0,'label':"l_rolling_time",'name':"l_rolling_time",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB14,'size':8,'pad':0,'label':"l_initial_offsetY",'name':"l_initial_offsetY",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB1C,'size':8,'pad':0,'label':"l_put_offsetY",'name':"l_put_offsetY",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB24,'size':2,'pad':2,'label':"l_weight",'name':"l_weight",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CECB28,'size':8,'pad':0,'label':"l_speedH",'name':"l_speedH",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB30,'size':8,'pad':0,'label':"l_speedV",'name':"l_speedV",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB38,'size':8,'pad':0,'label':"l_water_speedH",'name':"l_water_speedH",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB40,'size':8,'pad':0,'label':"l_water_speedV",'name':"l_water_speedV",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB48,'size':8,'pad':0,'label':"l_water_resist",'name':"l_water_resist",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB50,'size':8,'pad':0,'label':"l_water_walk_resist",'name':"l_water_walk_resist",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB58,'size':8,'pad':0,'label':"l_buoyancy",'name':"l_buoyancy",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB60,'size':8,'pad':0,'label':"l_shadow_size",'name':"l_shadow_size",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB68,'size':8,'pad':0,'label':"l_wpillar_scl",'name':"l_wpillar_scl",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB70,'size':8,'pad':0,'label':"l_hamon_scl",'name':"l_hamon_scl",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB78,'size':8,'pad':0,'label':"l_yogan_eff_scl",'name':"l_yogan_eff_scl",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB80,'size':8,'pad':0,'label':"l_wall_h",'name':"l_wall_h",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB88,'size':8,'pad':0,'label':"l_wall_r",'name':"l_wall_r",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB90,'size':4,'pad':0,'label':"l_rot_angle",'name':"l_rot_angle",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CECB94,'size':4,'pad':0,'label':"l_walk_rot_angle",'name':"l_walk_rot_angle",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CECB98,'size':4,'pad':0,'label':"lit_3746",'name':"@3746",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECB9C,'size':8,'pad':0,'label':"lit_3747",'name':"@3747",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECBA4,'size':8,'pad':0,'label':"lit_3748",'name':"@3748",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECBAC,'size':8,'pad':0,'label':"lit_3749",'name':"@3749",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECBB4,'size':4,'pad':0,'label':"lit_3844",'name':"@3844",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBB8,'size':4,'pad':0,'label':"lit_3845",'name':"@3845",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBBC,'size':4,'pad':0,'label':"lit_4010",'name':"@4010",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBC0,'size':4,'pad':0,'label':"lit_4632",'name':"@4632",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBC4,'size':4,'pad':0,'label':"lit_4633",'name':"@4633",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBC8,'size':4,'pad':0,'label':"lit_4634",'name':"@4634",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBCC,'size':4,'pad':0,'label':"lit_4635",'name':"@4635",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBD0,'size':4,'pad':0,'label':"lit_4636",'name':"@4636",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBD4,'size':4,'pad':0,'label':"lit_4637",'name':"@4637",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBD8,'size':4,'pad':0,'label':"lit_4638",'name':"@4638",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBDC,'size':4,'pad':0,'label':"lit_4639",'name':"@4639",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBE0,'size':4,'pad':0,'label':"lit_4640",'name':"@4640",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBE4,'size':4,'pad':0,'label':"lit_4641",'name':"@4641",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBE8,'size':4,'pad':0,'label':"lit_4642",'name':"@4642",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBEC,'size':4,'pad':0,'label':"lit_4643",'name':"@4643",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBF0,'size':4,'pad':0,'label':"lit_4644",'name':"@4644",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBF4,'size':4,'pad':0,'label':"lit_4678",'name':"@4678",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBF8,'size':4,'pad':0,'label':"lit_4679",'name':"@4679",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECBFC,'size':4,'pad':0,'label':"lit_4829",'name':"@4829",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECC00,'size':4,'pad':0,'label':"lit_5018",'name':"@5018",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CECC04,'size':4,'pad':0,'label':"lit_5019",'name':"@5019",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECC08,'size':4,'pad':0,'label':"lit_5020",'name':"@5020",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CECC0C,'size':4,'pad':0,'label':"lit_5021",'name':"@5021",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECC10,'size':4,'pad':0,'label':"lit_5063",'name':"@5063",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECC14,'size':4,'pad':0,'label':"lit_5064",'name':"@5064",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECC18,'size':4,'pad':0,'label':"lit_5074",'name':"@5074",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECC1C,'size':4,'pad':0,'label':"lit_5075",'name':"@5075",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CECC20,'size':6,'pad':6,'label':"l_eff_id",'name':"l_eff_id$5089",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECC2C,'size':8,'pad':0,'label':"lit_5256",'name':"@5256",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECC34,'size':6,'pad':2,'label':"l_carry_eff_id",'name':"l_carry_eff_id$5307",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECC3C,'size':23,'pad':0,'label':"d_a_obj_stone__stringBase0",'name':"@stringBase0",'lib':-1,'tu':4,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CECC54,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECC60,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CECC74,'size':8,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECC7C,'size':12,'pad':0,'label':"lit_4015",'name':"@4015",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECC88,'size':12,'pad':0,'label':"lit_4016",'name':"@4016",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECC94,'size':12,'pad':0,'label':"lit_4017",'name':"@4017",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECCA0,'size':12,'pad':0,'label':"lit_4018",'name':"@4018",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECCAC,'size':12,'pad':0,'label':"lit_4019",'name':"@4019",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECCB8,'size':12,'pad':0,'label':"lit_4020",'name':"@4020",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECCC4,'size':12,'pad':0,'label':"lit_4021",'name':"@4021",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECCD0,'size':84,'pad':0,'label':"l_func",'name':"l_func$4014",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CECD24,'size':32,'pad':0,'label':"l_daObjStone_Method",'name':"l_daObjStone_Method",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECD44,'size':48,'pad':0,'label':"g_profile_Obj_Stone",'name':"g_profile_Obj_Stone",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CECD74,'size':48,'pad':0,'label':"__vt__14dBgS_ObjGndChk",'name':"__vt__14dBgS_ObjGndChk",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CECDA4,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CECDB0,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CECDBC,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CECDC8,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CECDD4,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CECDE0,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CECE04,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CECE10,'size':4,'pad':0,'label':"data_80CECE10",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"bound__FP4cXyzRC13cBgS_PolyInfof":3,
	"__dt__8cM3dGPlaFv":4,
	"CheckCreateHeap__FP10fopAc_ac_c":5,
	"initBaseMtx__12daObjStone_cFv":6,
	"setBaseMtx__12daObjStone_cFv":7,
	"Create__12daObjStone_cFv":8,
	"CreateHeap__12daObjStone_cFv":9,
	"create__12daObjStone_cFv":10,
	"__dt__8cM3dGSphFv":11,
	"__dt__8cM3dGAabFv":12,
	"__dt__10dCcD_GSttsFv":13,
	"__dt__12dBgS_AcchCirFv":14,
	"__dt__12dBgS_ObjAcchFv":15,
	"execute__12daObjStone_cFv":16,
	"mode_proc_call__12daObjStone_cFv":17,
	"__dt__14dBgS_ObjGndChkFv":18,
	"init_modePutWait__12daObjStone_cFv":19,
	"modePutWait__12daObjStone_cFv":20,
	"init_modeWait__12daObjStone_cFv":21,
	"modeWait__12daObjStone_cFv":22,
	"init_modeDrop__12daObjStone_cFv":23,
	"modeDrop__12daObjStone_cFv":24,
	"init_modeCarry__12daObjStone_cFv":25,
	"modeCarry__12daObjStone_cFv":26,
	"init_modeWalk__12daObjStone_cFv":27,
	"modeWalk__12daObjStone_cFv":28,
	"init_modePushWolfNonBreak__12daObjStone_cFv":29,
	"init_modeYogan__12daObjStone_cFv":30,
	"modeYogan__12daObjStone_cFv":31,
	"init_modeBreak__12daObjStone_cFv":32,
	"modeBreak__12daObjStone_cFv":33,
	"CrrPos__12daObjStone_cFv":34,
	"createItem__12daObjStone_cFv":35,
	"calcRotBaseMtx__12daObjStone_cFPs":36,
	"checkRollAngle__12daObjStone_cFv":37,
	"set_carry_eff__12daObjStone_cFv":38,
	"effect_delete__12daObjStone_cFb":39,
	"draw__12daObjStone_cFv":40,
	"_delete__12daObjStone_cFv":41,
	"daObjStone_Draw__FP12daObjStone_c":42,
	"daObjStone_Execute__FP12daObjStone_c":43,
	"daObjStone_Delete__FP12daObjStone_c":44,
	"daObjStone_Create__FP10fopAc_ac_c":45,
	"__dt__10cCcD_GSttsFv":46,
	"func_80CECA84":47,
	"func_80CECA8C":48,
	"func_80CECA94":49,
	"func_80CECA9C":50,
	"func_80CECAA4":51,
	"_ctors":52,
	"_dtors":53,
	"l_bmdIdx":54,
	"l_sph_src":55,
	"l_r":56,
	"l_rolling_speedF":57,
	"l_rolling_time":58,
	"l_initial_offsetY":59,
	"l_put_offsetY":60,
	"l_weight":61,
	"l_speedH":62,
	"l_speedV":63,
	"l_water_speedH":64,
	"l_water_speedV":65,
	"l_water_resist":66,
	"l_water_walk_resist":67,
	"l_buoyancy":68,
	"l_shadow_size":69,
	"l_wpillar_scl":70,
	"l_hamon_scl":71,
	"l_yogan_eff_scl":72,
	"l_wall_h":73,
	"l_wall_r":74,
	"l_rot_angle":75,
	"l_walk_rot_angle":76,
	"lit_3746":77,
	"lit_3747":78,
	"lit_3748":79,
	"lit_3749":80,
	"lit_3844":81,
	"lit_3845":82,
	"lit_4010":83,
	"lit_4632":84,
	"lit_4633":85,
	"lit_4634":86,
	"lit_4635":87,
	"lit_4636":88,
	"lit_4637":89,
	"lit_4638":90,
	"lit_4639":91,
	"lit_4640":92,
	"lit_4641":93,
	"lit_4642":94,
	"lit_4643":95,
	"lit_4644":96,
	"lit_4678":97,
	"lit_4679":98,
	"lit_4829":99,
	"lit_5018":100,
	"lit_5019":101,
	"lit_5020":102,
	"lit_5021":103,
	"lit_5063":104,
	"lit_5064":105,
	"lit_5074":106,
	"lit_5075":107,
	"l_eff_id":108,
	"lit_5256":109,
	"l_carry_eff_id":110,
	"d_a_obj_stone__stringBase0":111,
	"cNullVec__6Z2Calc":112,
	"lit_1787":113,
	"l_arcName":114,
	"lit_4015":115,
	"lit_4016":116,
	"lit_4017":117,
	"lit_4018":118,
	"lit_4019":119,
	"lit_4020":120,
	"lit_4021":121,
	"l_func":122,
	"l_daObjStone_Method":123,
	"g_profile_Obj_Stone":124,
	"__vt__14dBgS_ObjGndChk":125,
	"__vt__12dBgS_AcchCir":126,
	"__vt__10cCcD_GStts":127,
	"__vt__10dCcD_GStts":128,
	"__vt__8cM3dGSph":129,
	"__vt__8cM3dGAab":130,
	"__vt__12dBgS_ObjAcch":131,
	"__vt__8cM3dGPla":132,
	"data_80CECE10":133,
}

