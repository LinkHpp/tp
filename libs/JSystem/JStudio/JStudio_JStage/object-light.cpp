//
// Generated By: dol2asm
// Translation Unit: object-light
//

#include "JSystem/JStudio/JStudio_JStage/object-light.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __ct__Q214JStudio_JStage14TAdaptor_lightFPCQ26JStage7TSystemPQ26JStage6TLight();
extern "C" void __dt__Q214JStudio_JStage14TAdaptor_lightFv();
extern "C" void adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFv();
extern "C" void adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFv();
extern "C" void adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFv();
extern "C" void adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFUl();
extern "C" void adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCvUlPCvUl();
extern "C" void
adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
__cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor();
extern "C" void __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv();
extern "C" void func_8028D2B8();
extern "C" u8 saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light[72];

//
// External References:
//

extern "C" void __dt__Q37JStudio14TVariableValue7TOutputFv();
extern "C" void update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued();
extern "C" void adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec();
extern "C" void adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl();
extern "C" void adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor();
extern "C" void adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl();
extern "C" void __dt__Q27JStudio14TAdaptor_lightFv();
extern "C" void adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl();
extern "C" void
adaptor_object_ENABLE___Q214JStudio_JStage16TAdaptor_object_FQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void __ct__Q27JStudio14TVariableValueFv();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 const sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light[16];
extern "C" u8 const sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light[12];
extern "C" u8 const sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light[12];
extern "C" extern void* __vt__Q27JStudio14TAdaptor_light[10];
extern "C" extern void* __vt__Q27JStudio8TAdaptor[8];
extern "C" extern void* __vt__Q37JStudio14TVariableValue7TOutput[4];
extern "C" u8 soOutput_none___Q27JStudio14TVariableValue[4 + 4 /* padding */];

/* 8028CB50-8028CBF4 287490 00A4+00 0/0 1/1 0/0 .text
 * __ct__Q214JStudio_JStage14TAdaptor_lightFPCQ26JStage7TSystemPQ26JStage6TLight */
JStudio_JStage::TAdaptor_light::TAdaptor_light(JStage::TSystem const* param_1,
                                               JStage::TLight* param_2)
    : JStudio_JStage::TAdaptor_object_(param_1, param_2) {
    field_0x11c = 0;
}

/* 8028CBF4-8028CC68 287534 0074+00 1/0 0/0 0/0 .text __dt__Q214JStudio_JStage14TAdaptor_lightFv
 */
JStudio_JStage::TAdaptor_light::~TAdaptor_light() {
    adaptor_do_end();
}

/* 80431448-80431490 05E168 0048+00 1/2 0/0 0/0 .bss
 * saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light   */
JStudio_JStage::TAdaptor_light::TVVOutput_direction_
    JStudio_JStage::TAdaptor_light::saoVVOutput_direction_[6] = {
        JStudio_JStage::TAdaptor_light::TVVOutput_direction_(
            JStudio_JStage::TAdaptor_light::TE_VALUE_10,
            JStudio_JStage::TAdaptor_light::DIRECTION_1),
        JStudio_JStage::TAdaptor_light::TVVOutput_direction_(
            JStudio_JStage::TAdaptor_light::TE_VALUE_11,
            JStudio_JStage::TAdaptor_light::DIRECTION_1),
        JStudio_JStage::TAdaptor_light::TVVOutput_direction_(
            JStudio_JStage::TAdaptor_light::TE_VALUE_7,
            JStudio_JStage::TAdaptor_light::DIRECTION_2),
        JStudio_JStage::TAdaptor_light::TVVOutput_direction_(
            JStudio_JStage::TAdaptor_light::TE_VALUE_8,
            JStudio_JStage::TAdaptor_light::DIRECTION_2),
        JStudio_JStage::TAdaptor_light::TVVOutput_direction_(
            JStudio_JStage::TAdaptor_light::TE_VALUE_9,
            JStudio_JStage::TAdaptor_light::DIRECTION_2),
        JStudio_JStage::TAdaptor_light::TVVOutput_direction_(),
};

/* 8028CC68-8028CCB0 2875A8 0048+00 1/0 0/0 0/0 .text
 * adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFv     */
void JStudio_JStage::TAdaptor_light::adaptor_do_prepare() {
    TVVOutput_direction_* pOutput = saoVVOutput_direction_;
    while (!pOutput->isEnd_()) {
        pOutput->adaptor_setOutput_(this);
        pOutput++;
    }
}

/* ############################################################################################## */
/* 804554E8-804554F0 003AE8 0004+04 1/1 0/0 0/0 .sdata2          @846 */
SECTION_SDATA2 static f32 lit_846[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 804554F0-804554F8 003AF0 0008+00 1/1 0/0 0/0 .sdata2          @847 */
SECTION_SDATA2 static f64 lit_847 = 0.5;

/* 804554F8-80455500 003AF8 0008+00 1/1 0/0 0/0 .sdata2          @848 */
SECTION_SDATA2 static f64 lit_848 = 3.0;

/* 80455500-80455508 003B00 0008+00 1/1 0/0 0/0 .sdata2          @849 */
SECTION_SDATA2 static u8 lit_849[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455508-8045550C 003B08 0004+00 1/1 0/0 0/0 .sdata2          @850 */
SECTION_SDATA2 static f32 lit_850 = 57.295780181884766f;

/* 8028CCB0-8028CF68 2875F0 02B8+00 1/0 0/0 0/0 .text
 * adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFv       */
// regalloc
#ifdef NONMATCHING
void JStudio_JStage::TAdaptor_light::adaptor_do_begin() {
    adaptor_object_begin_();
    JStage::TLight* pLightObj = get_pJSG_();
    const JStudio::TObject* pObject = adaptor_getObject();
    JUT_ASSERT(60, pObject != 0);
    JStudio::TControl* pControl = pObject->getControl();
    GXColor lightColor = pLightObj->JSGGetColor();
    adaptor_setVariableValue_GXColor(sauVariableValue_4_COLOR_RGBA, lightColor);
    JStudio::TControl::TTransform_position_direction lightObjTransform;
    JStudio::TControl::TTransform_position_direction aTStack_b8;
    pLightObj->JSGGetPosition(&lightObjTransform.position);
    pLightObj->JSGGetDirection(&lightObjTransform.direction);
    JStudio::TControl::TTransform_position_direction* finalTransform =
        pControl->transformOnGet_transform_ifEnabled(&lightObjTransform, &aTStack_b8);
    adaptor_setVariableValue_Vec(sauVariableValue_3_POSITION_XYZ, finalTransform->position);
    f32 dirx = finalTransform->direction.x;
    f32 diry = finalTransform->direction.y;
    f32 dirz = finalTransform->direction.z;
    f32 sqr = sqrtf(dirx * dirx + dirz * dirz);
    f32 dVar11 = atan2(dirx, dirz);
    f32 dVar9 = atan2(diry, sqr);
    adaptor_setVariableValue_immediate(10, (180.0f / M_PI) * dVar11);
    adaptor_setVariableValue_immediate(11, (180.0f / M_PI) * dVar9);
    Vec VStack_c4;
    VECAdd(&finalTransform->position, &finalTransform->direction, &VStack_c4);
    adaptor_setVariableValue_Vec(sauVariableValue_3_TARGET_POSITION_XYZ, VStack_c4);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_begin() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFv.s"
}
#pragma pop
#endif

/* 8028CF68-8028CFBC 2878A8 0054+00 1/0 0/0 0/0 .text
 * adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFv         */
void JStudio_JStage::TAdaptor_light::adaptor_do_end() {
    adaptor_object_end_();
}

/* ############################################################################################## */
/* 8045550C-80455510 003B0C 0004+00 1/1 0/0 0/0 .sdata2          @898 */
SECTION_SDATA2 static f32 lit_898 = 0.01745329238474369f;

/* 8028CFBC-8028D18C 2878FC 01D0+00 1/0 0/0 0/0 .text
 * adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFUl     */
// float regalloc
#ifdef NONMATCHING
void JStudio_JStage::TAdaptor_light::adaptor_do_update(u32 param_1) {
    JStage::TLight* lightObj = get_pJSG_();
    const JStudio::TObject* pObject = adaptor_getObject();
    JUT_ASSERT(118, pObject!=0);
    JStudio::TControl* pControl = pObject->getControl();
    JUT_ASSERT(120, pControl!=0);
    GXColor lightColor;
    adaptor_getVariableValue_GXColor(&lightColor, sauVariableValue_4_COLOR_RGBA);
    lightObj->JSGSetColor(lightColor);
    JStudio::TControl::TTransform_position_direction VStack_198;
    JStudio::TControl::TTransform_position_direction aTStack_1b0;
    adaptor_getVariableValue_Vec(&VStack_198.position, sauVariableValue_3_POSITION_XYZ);
    switch (field_0x11c) {
    case 1:
        f32 dVar10 = adaptor_getVariableValue(10)->getValue();
        f32 dVar11 = adaptor_getVariableValue(11)->getValue();
        f32 temp = 0.01745329238474369f * dVar11;
        f32 dVar12 = cos(temp);
        f32 sinVal = sin(temp);
        f32 temp2 = 0.01745329238474369f * dVar10;
        VStack_198.direction.x = dVar12 * (f32)sin(temp2);
        VStack_198.direction.y = sinVal;
        VStack_198.direction.z = dVar12 * (f32)cos(temp2);
        break;
    case 2:
        Vec VStack_1c0;
        adaptor_getVariableValue_Vec(&VStack_1c0, sauVariableValue_3_TARGET_POSITION_XYZ);
        VECSubtract(&VStack_1c0, &VStack_198.position, &VStack_198.direction);
    }
    JStudio::TControl::TTransform_position_direction* pTrans =
        pControl->transformOnSet_transform_ifEnabled(&VStack_198, &aTStack_1b0);
    lightObj->JSGSetPosition(pTrans->position);
    lightObj->JSGSetDirection(pTrans->direction);
    pJSGObject_->JSGUpdate();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_light::adaptor_do_update(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-light/adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFUl.s"
}
#pragma pop
#endif

/* 8028D18C-8028D1B0 287ACC 0024+00 1/0 0/0 0/0 .text
 * adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCvUlPCvUl */
void JStudio_JStage::TAdaptor_light::adaptor_do_data(void const* param_1, u32 param_2,
                                                     void const* param_3, u32 param_4) {
    adaptor_object_data_(param_1, param_2, param_3, param_4);
}

/* 8028D1B0-8028D228 287AF0 0078+00 1/0 0/0 0/0 .text
 * adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl */
void JStudio_JStage::TAdaptor_light::adaptor_do_FACULTY(JStudio::data::TEOperationData param_1,
                                                        void const* pContent, u32 uSize) {
    switch (param_1) {
    case JStudio::data::UNK_0x2:
        JUT_ASSERT(198, uSize==4);
        JUT_ASSERT(199, pContent!=0);
        JStage::TELight lightType;
        switch (*(u32*)pContent) {
        case 0x301:
            lightType = JStage::TELIGHT_1;
            break;
        case 0x302:
            lightType = JStage::TELIGHT_2;
            break;
        case 0x303:
            lightType = JStage::TELIGHT_3;
            break;
        default:
            // TODO: find out how to lose the goto
            goto end;
        }
        get_pJSG_()->JSGSetLightType(lightType);
        break;
    }
    end:;
}

/* 8028D228-8028D24C 287B68 0024+00 1/0 0/0 0/0 .text
 * adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl */
void JStudio_JStage::TAdaptor_light::adaptor_do_ENABLE(JStudio::data::TEOperationData param_1,
                                                       void const* param_2, u32 param_3) {
    adaptor_object_ENABLE_(param_1, param_2, param_3);
}

/* 8028D24C-8028D258 287B8C 000C+00 1/0 0/0 0/0 .text
 * __cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor */
void JStudio_JStage::TAdaptor_light::TVVOutput_direction_::operator()(
    f32 param_0, JStudio::TAdaptor* param_1) const {
    ((JStudio_JStage::TAdaptor_light*)param_1)->field_0x11c = field_0x8;
}
