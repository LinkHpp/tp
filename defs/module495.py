#
# Generate By: dol2asm
# Module: 495
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_katatsumuri",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_katatsumuri",
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
	{'addr':0x80C39880,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C398AC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C398D8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C398F8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39914,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3996C,'size':40,'pad':0,'label':"__ct__14daObj_KatHIO_cFv",'name':"__ct__14daObj_KatHIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39994,'size':108,'pad':0,'label':"InitCcSph__10daObjKAT_cFv",'name':"InitCcSph__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39A00,'size':88,'pad':0,'label':"SetCcSph__10daObjKAT_cFv",'name':"SetCcSph__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39A58,'size':212,'pad':0,'label':"ctrlJoint__10daObjKAT_cFP8J3DJointP8J3DModel",'name':"ctrlJoint__10daObjKAT_cFP8J3DJointP8J3DModel",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39B2C,'size':76,'pad':0,'label':"JointCallBack__FP8J3DJointi",'name':"JointCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39B78,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39B98,'size':744,'pad':0,'label':"CreateHeap__10daObjKAT_cFv",'name':"CreateHeap__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39E80,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39EC8,'size':32,'pad':0,'label':"daObjKAT_Create__FP10fopAc_ac_c",'name':"daObjKAT_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39EE8,'size':36,'pad':0,'label':"daObjKAT_Delete__FP10daObjKAT_c",'name':"daObjKAT_Delete__FP10daObjKAT_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C39F0C,'size':1412,'pad':0,'label':"WallWalk__10daObjKAT_cFv",'name':"WallWalk__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3A490,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3A4D8,'size':336,'pad':0,'label':"MoveAction__10daObjKAT_cFv",'name':"MoveAction__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3A628,'size':88,'pad':0,'label':"Action__10daObjKAT_cFv",'name':"Action__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3A680,'size':24,'pad':0,'label':"Insect_Release__10daObjKAT_cFv",'name':"Insect_Release__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3A698,'size':560,'pad':0,'label':"checkGround__10daObjKAT_cFv",'name':"checkGround__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3A8C8,'size':148,'pad':0,'label':"F_MoveAction__10daObjKAT_cFv",'name':"F_MoveAction__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3A95C,'size':52,'pad':0,'label':"FallAction__10daObjKAT_cFv",'name':"FallAction__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3A990,'size':292,'pad':0,'label':"ParticleSet__10daObjKAT_cFv",'name':"ParticleSet__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3AAB4,'size':788,'pad':0,'label':"BoomChk__10daObjKAT_cFv",'name':"BoomChk__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3ADC8,'size':256,'pad':0,'label':"ObjHit__10daObjKAT_cFv",'name':"ObjHit__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3AEC8,'size':2188,'pad':0,'label':"Execute__10daObjKAT_cFv",'name':"Execute__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3B754,'size':380,'pad':0,'label':"Z_BufferChk__10daObjKAT_cFv",'name':"Z_BufferChk__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3B8D0,'size':104,'pad':0,'label':"Delete__10daObjKAT_cFv",'name':"Delete__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3B938,'size':104,'pad':0,'label':"setBaseMtx__10daObjKAT_cFv",'name':"setBaseMtx__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3B9A0,'size':236,'pad':0,'label':"daObjKAT_Draw__FP10daObjKAT_c",'name':"daObjKAT_Draw__FP10daObjKAT_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3BA8C,'size':32,'pad':0,'label':"daObjKAT_Execute__FP10daObjKAT_c",'name':"daObjKAT_Execute__FP10daObjKAT_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3BAAC,'size':428,'pad':0,'label':"CreateChk__10daObjKAT_cFv",'name':"CreateChk__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3BC58,'size':2156,'pad':0,'label':"create__10daObjKAT_cFv",'name':"create__10daObjKAT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3C4C4,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3C50C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3C554,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3C5C4,'size':8,'pad':0,'label':"daObjKAT_IsDelete__FP10daObjKAT_c",'name':"daObjKAT_IsDelete__FP10daObjKAT_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C3C5CC,'size':72,'pad':0,'label':"__dt__14daObj_KatHIO_cFv",'name':"__dt__14daObj_KatHIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3C614,'size':60,'pad':0,'label':"__sinit_d_a_obj_katatsumuri_cpp",'name':"__sinit_d_a_obj_katatsumuri_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C3C650,'size':8,'pad':0,'label':"func_80C3C650",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3C658,'size':8,'pad':0,'label':"func_80C3C658",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3C660,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C3C668,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C3C674,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[10,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C678,'size':2,'pad':2,'label':"l_kat_itemno",'name':"l_kat_itemno",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C3C67C,'size':64,'pad':0,'label':"ccSphSrc",'name':"ccSphSrc$3779",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C6BC,'size':4,'pad':0,'label':"lit_3788",'name':"@3788",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6C0,'size':4,'pad':0,'label':"lit_3812",'name':"@3812",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6C4,'size':8,'pad':0,'label':"lit_3814",'name':"@3814",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C6CC,'size':4,'pad':0,'label':"lit_3959",'name':"@3959",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C6D0,'size':4,'pad':0,'label':"lit_3960",'name':"@3960",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6D4,'size':4,'pad':0,'label':"lit_3961",'name':"@3961",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6D8,'size':4,'pad':0,'label':"lit_3962",'name':"@3962",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6DC,'size':4,'pad':0,'label':"lit_4100",'name':"@4100",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6E0,'size':4,'pad':0,'label':"lit_4101",'name':"@4101",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6E4,'size':4,'pad':0,'label':"lit_4102",'name':"@4102",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6E8,'size':4,'pad':0,'label':"lit_4103",'name':"@4103",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C6EC,'size':8,'pad':0,'label':"lit_4104",'name':"@4104",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C6F4,'size':8,'pad':0,'label':"lit_4105",'name':"@4105",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C6FC,'size':8,'pad':0,'label':"lit_4106",'name':"@4106",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C704,'size':4,'pad':0,'label':"lit_4139",'name':"@4139",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C708,'size':4,'pad':0,'label':"lit_4140",'name':"@4140",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C70C,'size':4,'pad':0,'label':"lit_4141",'name':"@4141",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C710,'size':4,'pad':0,'label':"lit_4142",'name':"@4142",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C714,'size':4,'pad':4,'label':"lit_4223",'name':"@4223",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C71C,'size':8,'pad':0,'label':"lit_4258",'name':"@4258",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C724,'size':4,'pad':0,'label':"lit_4288",'name':"@4288",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C728,'size':4,'pad':0,'label':"lit_4361",'name':"@4361",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C72C,'size':4,'pad':0,'label':"lit_4362",'name':"@4362",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C730,'size':4,'pad':0,'label':"lit_4583",'name':"@4583",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C734,'size':4,'pad':0,'label':"lit_4584",'name':"@4584",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C738,'size':4,'pad':0,'label':"lit_4585",'name':"@4585",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C73C,'size':4,'pad':0,'label':"lit_4586",'name':"@4586",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C740,'size':4,'pad':0,'label':"lit_4625",'name':"@4625",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C744,'size':4,'pad':0,'label':"lit_4626",'name':"@4626",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C748,'size':4,'pad':0,'label':"lit_4627",'name':"@4627",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C74C,'size':4,'pad':0,'label':"lit_4695",'name':"@4695",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C750,'size':4,'pad':0,'label':"lit_4696",'name':"@4696",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C754,'size':4,'pad':0,'label':"l_musiya_num",'name':"l_musiya_num",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C3C758,'size':4,'pad':0,'label':"lit_5000",'name':"@5000",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C75C,'size':4,'pad':0,'label':"lit_5001",'name':"@5001",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C760,'size':4,'pad':0,'label':"lit_5002",'name':"@5002",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C3C764,'size':12,'pad':0,'label':"d_a_obj_katatsumuri__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C3C770,'size':32,'pad':0,'label':"l_daObjKAT_Method",'name':"l_daObjKAT_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C3C790,'size':48,'pad':0,'label':"g_profile_Obj_Kat",'name':"g_profile_Obj_Kat",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C3C7C0,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C3C7CC,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C3C7D8,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C3C7FC,'size':12,'pad':0,'label':"__vt__10daObjKAT_c",'name':"__vt__10daObjKAT_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C3C808,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C3C814,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C3C820,'size':12,'pad':0,'label':"__vt__14daObj_KatHIO_c",'name':"__vt__14daObj_KatHIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C3C830,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C838,'size':4,'pad':0,'label':"data_80C3C838",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C83C,'size':12,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C3C848,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daObj_KatHIO_cFv":5,
	"InitCcSph__10daObjKAT_cFv":6,
	"SetCcSph__10daObjKAT_cFv":7,
	"ctrlJoint__10daObjKAT_cFP8J3DJointP8J3DModel":8,
	"JointCallBack__FP8J3DJointi":9,
	"useHeapInit__FP10fopAc_ac_c":10,
	"CreateHeap__10daObjKAT_cFv":11,
	"__dt__12J3DFrameCtrlFv":12,
	"daObjKAT_Create__FP10fopAc_ac_c":13,
	"daObjKAT_Delete__FP10daObjKAT_c":14,
	"WallWalk__10daObjKAT_cFv":15,
	"__dt__8cM3dGPlaFv":16,
	"MoveAction__10daObjKAT_cFv":17,
	"Action__10daObjKAT_cFv":18,
	"Insect_Release__10daObjKAT_cFv":19,
	"checkGround__10daObjKAT_cFv":20,
	"F_MoveAction__10daObjKAT_cFv":21,
	"FallAction__10daObjKAT_cFv":22,
	"ParticleSet__10daObjKAT_cFv":23,
	"BoomChk__10daObjKAT_cFv":24,
	"ObjHit__10daObjKAT_cFv":25,
	"Execute__10daObjKAT_cFv":26,
	"Z_BufferChk__10daObjKAT_cFv":27,
	"Delete__10daObjKAT_cFv":28,
	"setBaseMtx__10daObjKAT_cFv":29,
	"daObjKAT_Draw__FP10daObjKAT_c":30,
	"daObjKAT_Execute__FP10daObjKAT_c":31,
	"CreateChk__10daObjKAT_cFv":32,
	"create__10daObjKAT_cFv":33,
	"__dt__8cM3dGSphFv":34,
	"__dt__8cM3dGAabFv":35,
	"__dt__12dBgS_ObjAcchFv":36,
	"daObjKAT_IsDelete__FP10daObjKAT_c":37,
	"__dt__14daObj_KatHIO_cFv":38,
	"__sinit_d_a_obj_katatsumuri_cpp":39,
	"func_80C3C650":40,
	"func_80C3C658":41,
	"_ctors":42,
	"_dtors":43,
	"lit_3775":44,
	"l_kat_itemno":45,
	"ccSphSrc":46,
	"lit_3788":47,
	"lit_3812":48,
	"lit_3814":49,
	"lit_3959":50,
	"lit_3960":51,
	"lit_3961":52,
	"lit_3962":53,
	"lit_4100":54,
	"lit_4101":55,
	"lit_4102":56,
	"lit_4103":57,
	"lit_4104":58,
	"lit_4105":59,
	"lit_4106":60,
	"lit_4139":61,
	"lit_4140":62,
	"lit_4141":63,
	"lit_4142":64,
	"lit_4223":65,
	"lit_4258":66,
	"lit_4288":67,
	"lit_4361":68,
	"lit_4362":69,
	"lit_4583":70,
	"lit_4584":71,
	"lit_4585":72,
	"lit_4586":73,
	"lit_4625":74,
	"lit_4626":75,
	"lit_4627":76,
	"lit_4695":77,
	"lit_4696":78,
	"l_musiya_num":79,
	"lit_5000":80,
	"lit_5001":81,
	"lit_5002":82,
	"d_a_obj_katatsumuri__stringBase0":83,
	"l_daObjKAT_Method":84,
	"g_profile_Obj_Kat":85,
	"__vt__8cM3dGSph":86,
	"__vt__8cM3dGAab":87,
	"__vt__12dBgS_ObjAcch":88,
	"__vt__10daObjKAT_c":89,
	"__vt__8cM3dGPla":90,
	"__vt__12J3DFrameCtrl":91,
	"__vt__14daObj_KatHIO_c":92,
	"__global_destructor_chain":93,
	"data_80C3C838":94,
	"lit_3770":95,
	"l_HIO":96,
}

