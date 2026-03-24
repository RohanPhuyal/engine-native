#include "scripting/js-bindings/auto/jsb_cocos2dx_spine4_auto.hpp"
#if USE_SPINE4 > 0
#include "scripting/js-bindings/manual/jsb_conversions.hpp"
#include "scripting/js-bindings/manual/jsb_global.h"
#include "spine4-creator-support/spine-cocos2dx.h"

se::Object* __jsb_spine4_Animation_proto = nullptr;
se::Class* __jsb_spine4_Animation_class = nullptr;

static bool js_cocos2dx_spine4_Animation_getTimelines(se::State& s)
{
    spine4::Animation* cobj = (spine4::Animation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Animation_getTimelines : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Timeline *>& result = cobj->getTimelines();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Animation_getTimelines : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Animation_getTimelines)

static bool js_cocos2dx_spine4_Animation_hasTimeline(se::State& s)
{
    spine4::Animation* cobj = (spine4::Animation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Animation_hasTimeline : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Vector<long long> arg0;
        ok &= seval_to_Vector(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Animation_hasTimeline : Error processing arguments");
        bool result = cobj->hasTimeline(arg0);
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Animation_hasTimeline : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Animation_hasTimeline)

static bool js_cocos2dx_spine4_Animation_getName(se::State& s)
{
    spine4::Animation* cobj = (spine4::Animation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Animation_getName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Animation_getName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Animation_getName)

static bool js_cocos2dx_spine4_Animation_getDuration(se::State& s)
{
    spine4::Animation* cobj = (spine4::Animation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Animation_getDuration : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getDuration();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Animation_getDuration : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Animation_getDuration)

static bool js_cocos2dx_spine4_Animation_setDuration(se::State& s)
{
    spine4::Animation* cobj = (spine4::Animation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Animation_setDuration : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Animation_setDuration : Error processing arguments");
        cobj->setDuration(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Animation_setDuration)

static bool js_cocos2dx_spine4_Animation_search(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 3) {
            spine4::Vector<float> arg0;
            ok &= seval_to_Vector(args[0], &arg0);
            if (!ok) { ok = true; break; }
            float arg1 = 0;
            ok &= seval_to_float(args[1], &arg1);
            if (!ok) { ok = true; break; }
            int arg2 = 0;
            do { int32_t tmp = 0; ok &= seval_to_int32(args[2], &tmp); arg2 = (int)tmp; } while(false);
            if (!ok) { ok = true; break; }
            int result = spine4::Animation::search(arg0, arg1, arg2);
            ok &= int32_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Animation_search : Error processing arguments");
            return true;
        }
    } while (false);
    do {
        if (argc == 2) {
            spine4::Vector<float> arg0;
            ok &= seval_to_Vector(args[0], &arg0);
            if (!ok) { ok = true; break; }
            float arg1 = 0;
            ok &= seval_to_float(args[1], &arg1);
            if (!ok) { ok = true; break; }
            int result = spine4::Animation::search(arg0, arg1);
            ok &= int32_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Animation_search : Error processing arguments");
            return true;
        }
    } while (false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Animation_search)




bool js_register_cocos2dx_spine4_Animation(se::Object* obj)
{
    auto cls = se::Class::create("Animation", obj, nullptr, nullptr);

    cls->defineFunction("getTimelines", _SE(js_cocos2dx_spine4_Animation_getTimelines));
    cls->defineFunction("hasTimeline", _SE(js_cocos2dx_spine4_Animation_hasTimeline));
    cls->defineFunction("getName", _SE(js_cocos2dx_spine4_Animation_getName));
    cls->defineFunction("getDuration", _SE(js_cocos2dx_spine4_Animation_getDuration));
    cls->defineFunction("setDuration", _SE(js_cocos2dx_spine4_Animation_setDuration));
    cls->defineStaticFunction("search", _SE(js_cocos2dx_spine4_Animation_search));
    cls->install();
    JSBClassType::registerClass<spine4::Animation>(cls);

    __jsb_spine4_Animation_proto = cls->getProto();
    __jsb_spine4_Animation_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Color_proto = nullptr;
se::Class* __jsb_spine4_Color_class = nullptr;

static bool js_cocos2dx_spine4_Color_clamp(se::State& s)
{
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_clamp : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->clamp();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Color_clamp : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Color_clamp)

static bool js_cocos2dx_spine4_Color_get_r(se::State& s)
{
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_get_r : Invalid Native Object");

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= float_to_seval(cobj->r, &jsret);
    s.rval() = jsret;
    return true;
}
SE_BIND_PROP_GET(js_cocos2dx_spine4_Color_get_r)

static bool js_cocos2dx_spine4_Color_set_r(se::State& s)
{
    const auto& args = s.args();
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_set_r : Invalid Native Object");

    CC_UNUSED bool ok = true;
    float arg0 = 0;
    ok &= seval_to_float(args[0], &arg0);
    SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Color_set_r : Error processing new value");
    cobj->r = arg0;
    return true;
}
SE_BIND_PROP_SET(js_cocos2dx_spine4_Color_set_r)

static bool js_cocos2dx_spine4_Color_get_g(se::State& s)
{
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_get_g : Invalid Native Object");

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= float_to_seval(cobj->g, &jsret);
    s.rval() = jsret;
    return true;
}
SE_BIND_PROP_GET(js_cocos2dx_spine4_Color_get_g)

static bool js_cocos2dx_spine4_Color_set_g(se::State& s)
{
    const auto& args = s.args();
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_set_g : Invalid Native Object");

    CC_UNUSED bool ok = true;
    float arg0 = 0;
    ok &= seval_to_float(args[0], &arg0);
    SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Color_set_g : Error processing new value");
    cobj->g = arg0;
    return true;
}
SE_BIND_PROP_SET(js_cocos2dx_spine4_Color_set_g)

static bool js_cocos2dx_spine4_Color_get_b(se::State& s)
{
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_get_b : Invalid Native Object");

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= float_to_seval(cobj->b, &jsret);
    s.rval() = jsret;
    return true;
}
SE_BIND_PROP_GET(js_cocos2dx_spine4_Color_get_b)

static bool js_cocos2dx_spine4_Color_set_b(se::State& s)
{
    const auto& args = s.args();
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_set_b : Invalid Native Object");

    CC_UNUSED bool ok = true;
    float arg0 = 0;
    ok &= seval_to_float(args[0], &arg0);
    SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Color_set_b : Error processing new value");
    cobj->b = arg0;
    return true;
}
SE_BIND_PROP_SET(js_cocos2dx_spine4_Color_set_b)

static bool js_cocos2dx_spine4_Color_get_a(se::State& s)
{
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_get_a : Invalid Native Object");

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= float_to_seval(cobj->a, &jsret);
    s.rval() = jsret;
    return true;
}
SE_BIND_PROP_GET(js_cocos2dx_spine4_Color_get_a)

static bool js_cocos2dx_spine4_Color_set_a(se::State& s)
{
    const auto& args = s.args();
    spine4::Color* cobj = (spine4::Color*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Color_set_a : Invalid Native Object");

    CC_UNUSED bool ok = true;
    float arg0 = 0;
    ok &= seval_to_float(args[0], &arg0);
    SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Color_set_a : Error processing new value");
    cobj->a = arg0;
    return true;
}
SE_BIND_PROP_SET(js_cocos2dx_spine4_Color_set_a)




bool js_register_cocos2dx_spine4_Color(se::Object* obj)
{
    auto cls = se::Class::create("Color", obj, nullptr, nullptr);

    cls->defineProperty("r", _SE(js_cocos2dx_spine4_Color_get_r), _SE(js_cocos2dx_spine4_Color_set_r));
    cls->defineProperty("g", _SE(js_cocos2dx_spine4_Color_get_g), _SE(js_cocos2dx_spine4_Color_set_g));
    cls->defineProperty("b", _SE(js_cocos2dx_spine4_Color_get_b), _SE(js_cocos2dx_spine4_Color_set_b));
    cls->defineProperty("a", _SE(js_cocos2dx_spine4_Color_get_a), _SE(js_cocos2dx_spine4_Color_set_a));
    cls->defineFunction("clamp", _SE(js_cocos2dx_spine4_Color_clamp));
    cls->install();
    JSBClassType::registerClass<spine4::Color>(cls);

    __jsb_spine4_Color_proto = cls->getProto();
    __jsb_spine4_Color_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Slot_proto = nullptr;
se::Class* __jsb_spine4_Slot_class = nullptr;

static bool js_cocos2dx_spine4_Slot_getBone(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getBone : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Bone& result = cobj->getBone();
        ok &= native_ptr_to_rooted_seval<spine4::Bone>((spine4::Bone*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getBone : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getBone)

static bool js_cocos2dx_spine4_Slot_getDarkColor(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getDarkColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getDarkColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getDarkColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getDarkColor)

static bool js_cocos2dx_spine4_Slot_setSequenceIndex(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_setSequenceIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_setSequenceIndex : Error processing arguments");
        cobj->setSequenceIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_setSequenceIndex)

static bool js_cocos2dx_spine4_Slot_getColor(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getColor)

static bool js_cocos2dx_spine4_Slot_setToSetupPose(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_setToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_setToSetupPose)

static bool js_cocos2dx_spine4_Slot_getSequenceIndex(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getSequenceIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getSequenceIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getSequenceIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getSequenceIndex)

static bool js_cocos2dx_spine4_Slot_getAttachment(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->getAttachment();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getAttachment : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getAttachment)

static bool js_cocos2dx_spine4_Slot_setAttachment(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_setAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Attachment* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_setAttachment : Error processing arguments");
        cobj->setAttachment(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_setAttachment)

static bool js_cocos2dx_spine4_Slot_hasDarkColor(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_hasDarkColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->hasDarkColor();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_hasDarkColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_hasDarkColor)

static bool js_cocos2dx_spine4_Slot_getDeform(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getDeform : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getDeform();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getDeform : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getDeform)

static bool js_cocos2dx_spine4_Slot_setAttachmentState(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_setAttachmentState : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_setAttachmentState : Error processing arguments");
        cobj->setAttachmentState(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_setAttachmentState)

static bool js_cocos2dx_spine4_Slot_getSkeleton(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getSkeleton : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Skeleton& result = cobj->getSkeleton();
        ok &= native_ptr_to_rooted_seval<spine4::Skeleton>((spine4::Skeleton*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getSkeleton : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getSkeleton)

static bool js_cocos2dx_spine4_Slot_getData(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::SlotData& result = cobj->getData();
        ok &= native_ptr_to_rooted_seval<spine4::SlotData>((spine4::SlotData*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getData)

static bool js_cocos2dx_spine4_Slot_getAttachmentState(se::State& s)
{
    spine4::Slot* cobj = (spine4::Slot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Slot_getAttachmentState : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getAttachmentState();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Slot_getAttachmentState : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Slot_getAttachmentState)




bool js_register_cocos2dx_spine4_Slot(se::Object* obj)
{
    auto cls = se::Class::create("Slot", obj, nullptr, nullptr);

    cls->defineFunction("getBone", _SE(js_cocos2dx_spine4_Slot_getBone));
    cls->defineFunction("getDarkColor", _SE(js_cocos2dx_spine4_Slot_getDarkColor));
    cls->defineFunction("setSequenceIndex", _SE(js_cocos2dx_spine4_Slot_setSequenceIndex));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_Slot_getColor));
    cls->defineFunction("setToSetupPose", _SE(js_cocos2dx_spine4_Slot_setToSetupPose));
    cls->defineFunction("getSequenceIndex", _SE(js_cocos2dx_spine4_Slot_getSequenceIndex));
    cls->defineFunction("getAttachment", _SE(js_cocos2dx_spine4_Slot_getAttachment));
    cls->defineFunction("setAttachment", _SE(js_cocos2dx_spine4_Slot_setAttachment));
    cls->defineFunction("hasDarkColor", _SE(js_cocos2dx_spine4_Slot_hasDarkColor));
    cls->defineFunction("getDeform", _SE(js_cocos2dx_spine4_Slot_getDeform));
    cls->defineFunction("setAttachmentState", _SE(js_cocos2dx_spine4_Slot_setAttachmentState));
    cls->defineFunction("getSkeleton", _SE(js_cocos2dx_spine4_Slot_getSkeleton));
    cls->defineFunction("getData", _SE(js_cocos2dx_spine4_Slot_getData));
    cls->defineFunction("getAttachmentState", _SE(js_cocos2dx_spine4_Slot_getAttachmentState));
    cls->install();
    JSBClassType::registerClass<spine4::Slot>(cls);

    __jsb_spine4_Slot_proto = cls->getProto();
    __jsb_spine4_Slot_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_TrackEntry_proto = nullptr;
se::Class* __jsb_spine4_TrackEntry_class = nullptr;

static bool js_cocos2dx_spine4_TrackEntry_getNext(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getNext : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::TrackEntry* result = cobj->getNext();
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getNext : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getNext)

static bool js_cocos2dx_spine4_TrackEntry_getTrackComplete(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getTrackComplete : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTrackComplete();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getTrackComplete : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getTrackComplete)

static bool js_cocos2dx_spine4_TrackEntry_setTimeScale(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setTimeScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setTimeScale : Error processing arguments");
        cobj->setTimeScale(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setTimeScale)

static bool js_cocos2dx_spine4_TrackEntry_getMixDuration(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getMixDuration : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixDuration();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getMixDuration : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getMixDuration)

static bool js_cocos2dx_spine4_TrackEntry_setAnimationEnd(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setAnimationEnd : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setAnimationEnd : Error processing arguments");
        cobj->setAnimationEnd(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setAnimationEnd)

static bool js_cocos2dx_spine4_TrackEntry_setEventThreshold(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setEventThreshold : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setEventThreshold : Error processing arguments");
        cobj->setEventThreshold(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setEventThreshold)

static bool js_cocos2dx_spine4_TrackEntry_getShortestRotation(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getShortestRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getShortestRotation();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getShortestRotation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getShortestRotation)

static bool js_cocos2dx_spine4_TrackEntry_setTrackEnd(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setTrackEnd : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setTrackEnd : Error processing arguments");
        cobj->setTrackEnd(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setTrackEnd)

static bool js_cocos2dx_spine4_TrackEntry_setAlphaAttachmentThreshold(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setAlphaAttachmentThreshold : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setAlphaAttachmentThreshold : Error processing arguments");
        cobj->setAlphaAttachmentThreshold(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setAlphaAttachmentThreshold)

static bool js_cocos2dx_spine4_TrackEntry_getMixBlend(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getMixBlend : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = (unsigned int)cobj->getMixBlend();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getMixBlend : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getMixBlend)

static bool js_cocos2dx_spine4_TrackEntry_getTrackEnd(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getTrackEnd : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTrackEnd();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getTrackEnd : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getTrackEnd)

static bool js_cocos2dx_spine4_TrackEntry_setDelay(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setDelay : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setDelay : Error processing arguments");
        cobj->setDelay(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setDelay)

static bool js_cocos2dx_spine4_TrackEntry_getAnimationEnd(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getAnimationEnd : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAnimationEnd();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getAnimationEnd : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getAnimationEnd)

static bool js_cocos2dx_spine4_TrackEntry_setMixTime(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setMixTime : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setMixTime : Error processing arguments");
        cobj->setMixTime(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setMixTime)

static bool js_cocos2dx_spine4_TrackEntry_wasApplied(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_wasApplied : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->wasApplied();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_wasApplied : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_wasApplied)

static bool js_cocos2dx_spine4_TrackEntry_isComplete(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_isComplete : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isComplete();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_isComplete : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_isComplete)

static bool js_cocos2dx_spine4_TrackEntry_setMixDrawOrderThreshold(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setMixDrawOrderThreshold : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setMixDrawOrderThreshold : Error processing arguments");
        cobj->setMixDrawOrderThreshold(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setMixDrawOrderThreshold)

static bool js_cocos2dx_spine4_TrackEntry_setShortestRotation(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setShortestRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setShortestRotation : Error processing arguments");
        cobj->setShortestRotation(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setShortestRotation)

static bool js_cocos2dx_spine4_TrackEntry_getReverse(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getReverse : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getReverse();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getReverse : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getReverse)

static bool js_cocos2dx_spine4_TrackEntry_getMixDrawOrderThreshold(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getMixDrawOrderThreshold : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixDrawOrderThreshold();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getMixDrawOrderThreshold : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getMixDrawOrderThreshold)

static bool js_cocos2dx_spine4_TrackEntry_setAlpha(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setAlpha : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setAlpha : Error processing arguments");
        cobj->setAlpha(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setAlpha)

static bool js_cocos2dx_spine4_TrackEntry_getMixTime(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getMixTime : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixTime();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getMixTime : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getMixTime)

static bool js_cocos2dx_spine4_TrackEntry_getMixingTo(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getMixingTo : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::TrackEntry* result = cobj->getMixingTo();
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getMixingTo : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getMixingTo)

static bool js_cocos2dx_spine4_TrackEntry_setTrackTime(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setTrackTime : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setTrackTime : Error processing arguments");
        cobj->setTrackTime(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setTrackTime)

static bool js_cocos2dx_spine4_TrackEntry_setMixDuration(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_TrackEntry_setMixDuration : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            float arg0 = 0;
            ok &= seval_to_float(args[0], &arg0);
            if (!ok) { ok = true; break; }
            float arg1 = 0;
            ok &= seval_to_float(args[1], &arg1);
            if (!ok) { ok = true; break; }
            cobj->setMixDuration(arg0, arg1);
            return true;
        }
    } while(false);

    do {
        if (argc == 1) {
            float arg0 = 0;
            ok &= seval_to_float(args[0], &arg0);
            if (!ok) { ok = true; break; }
            cobj->setMixDuration(arg0);
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setMixDuration)

static bool js_cocos2dx_spine4_TrackEntry_resetRotationDirections(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_resetRotationDirections : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->resetRotationDirections();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_resetRotationDirections)

static bool js_cocos2dx_spine4_TrackEntry_setMixAttachmentThreshold(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setMixAttachmentThreshold : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setMixAttachmentThreshold : Error processing arguments");
        cobj->setMixAttachmentThreshold(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setMixAttachmentThreshold)

static bool js_cocos2dx_spine4_TrackEntry_getMixAttachmentThreshold(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getMixAttachmentThreshold : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixAttachmentThreshold();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getMixAttachmentThreshold : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getMixAttachmentThreshold)

static bool js_cocos2dx_spine4_TrackEntry_setReverse(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setReverse : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setReverse : Error processing arguments");
        cobj->setReverse(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setReverse)

static bool js_cocos2dx_spine4_TrackEntry_setHoldPrevious(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setHoldPrevious : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setHoldPrevious : Error processing arguments");
        cobj->setHoldPrevious(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setHoldPrevious)

static bool js_cocos2dx_spine4_TrackEntry_getLoop(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getLoop : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getLoop();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getLoop : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getLoop)

static bool js_cocos2dx_spine4_TrackEntry_getTrackTime(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getTrackTime : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTrackTime();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getTrackTime : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getTrackTime)

static bool js_cocos2dx_spine4_TrackEntry_getAnimationStart(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getAnimationStart : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAnimationStart();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getAnimationStart : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getAnimationStart)

static bool js_cocos2dx_spine4_TrackEntry_getAnimationLast(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getAnimationLast : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAnimationLast();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getAnimationLast : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getAnimationLast)

static bool js_cocos2dx_spine4_TrackEntry_setAnimationStart(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setAnimationStart : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setAnimationStart : Error processing arguments");
        cobj->setAnimationStart(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setAnimationStart)

static bool js_cocos2dx_spine4_TrackEntry_setLoop(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setLoop : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setLoop : Error processing arguments");
        cobj->setLoop(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setLoop)

static bool js_cocos2dx_spine4_TrackEntry_getTrackIndex(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getTrackIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getTrackIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getTrackIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getTrackIndex)

static bool js_cocos2dx_spine4_TrackEntry_getTimeScale(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getTimeScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTimeScale();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getTimeScale : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getTimeScale)

static bool js_cocos2dx_spine4_TrackEntry_getPrevious(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getPrevious : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::TrackEntry* result = cobj->getPrevious();
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getPrevious : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getPrevious)

static bool js_cocos2dx_spine4_TrackEntry_getDelay(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getDelay : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getDelay();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getDelay : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getDelay)

static bool js_cocos2dx_spine4_TrackEntry_getAnimation(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Animation* result = cobj->getAnimation();
        ok &= native_ptr_to_rooted_seval<spine4::Animation>((spine4::Animation*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getAnimation)

static bool js_cocos2dx_spine4_TrackEntry_getHoldPrevious(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getHoldPrevious : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getHoldPrevious();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getHoldPrevious : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getHoldPrevious)

static bool js_cocos2dx_spine4_TrackEntry_getMixingFrom(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getMixingFrom : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::TrackEntry* result = cobj->getMixingFrom();
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getMixingFrom : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getMixingFrom)

static bool js_cocos2dx_spine4_TrackEntry_isNextReady(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_isNextReady : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isNextReady();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_isNextReady : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_isNextReady)

static bool js_cocos2dx_spine4_TrackEntry_getAnimationTime(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getAnimationTime : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAnimationTime();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getAnimationTime : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getAnimationTime)

static bool js_cocos2dx_spine4_TrackEntry_getEventThreshold(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getEventThreshold : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getEventThreshold();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getEventThreshold : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getEventThreshold)

static bool js_cocos2dx_spine4_TrackEntry_setAnimationLast(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setAnimationLast : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setAnimationLast : Error processing arguments");
        cobj->setAnimationLast(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setAnimationLast)

static bool js_cocos2dx_spine4_TrackEntry_getAlpha(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getAlpha : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAlpha();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getAlpha : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getAlpha)

static bool js_cocos2dx_spine4_TrackEntry_getAlphaAttachmentThreshold(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_getAlphaAttachmentThreshold : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAlphaAttachmentThreshold();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_getAlphaAttachmentThreshold : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_getAlphaAttachmentThreshold)

static bool js_cocos2dx_spine4_TrackEntry_setMixBlend(se::State& s)
{
    spine4::TrackEntry* cobj = (spine4::TrackEntry*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TrackEntry_setMixBlend : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::MixBlend arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TrackEntry_setMixBlend : Error processing arguments");
        cobj->setMixBlend(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TrackEntry_setMixBlend)




bool js_register_cocos2dx_spine4_TrackEntry(se::Object* obj)
{
    auto cls = se::Class::create("TrackEntry", obj, nullptr, nullptr);

    cls->defineFunction("getNext", _SE(js_cocos2dx_spine4_TrackEntry_getNext));
    cls->defineFunction("getTrackComplete", _SE(js_cocos2dx_spine4_TrackEntry_getTrackComplete));
    cls->defineFunction("setTimeScale", _SE(js_cocos2dx_spine4_TrackEntry_setTimeScale));
    cls->defineFunction("getMixDuration", _SE(js_cocos2dx_spine4_TrackEntry_getMixDuration));
    cls->defineFunction("setAnimationEnd", _SE(js_cocos2dx_spine4_TrackEntry_setAnimationEnd));
    cls->defineFunction("setEventThreshold", _SE(js_cocos2dx_spine4_TrackEntry_setEventThreshold));
    cls->defineFunction("getShortestRotation", _SE(js_cocos2dx_spine4_TrackEntry_getShortestRotation));
    cls->defineFunction("setTrackEnd", _SE(js_cocos2dx_spine4_TrackEntry_setTrackEnd));
    cls->defineFunction("setAlphaAttachmentThreshold", _SE(js_cocos2dx_spine4_TrackEntry_setAlphaAttachmentThreshold));
    cls->defineFunction("getMixBlend", _SE(js_cocos2dx_spine4_TrackEntry_getMixBlend));
    cls->defineFunction("getTrackEnd", _SE(js_cocos2dx_spine4_TrackEntry_getTrackEnd));
    cls->defineFunction("setDelay", _SE(js_cocos2dx_spine4_TrackEntry_setDelay));
    cls->defineFunction("getAnimationEnd", _SE(js_cocos2dx_spine4_TrackEntry_getAnimationEnd));
    cls->defineFunction("setMixTime", _SE(js_cocos2dx_spine4_TrackEntry_setMixTime));
    cls->defineFunction("wasApplied", _SE(js_cocos2dx_spine4_TrackEntry_wasApplied));
    cls->defineFunction("isComplete", _SE(js_cocos2dx_spine4_TrackEntry_isComplete));
    cls->defineFunction("setMixDrawOrderThreshold", _SE(js_cocos2dx_spine4_TrackEntry_setMixDrawOrderThreshold));
    cls->defineFunction("setShortestRotation", _SE(js_cocos2dx_spine4_TrackEntry_setShortestRotation));
    cls->defineFunction("getReverse", _SE(js_cocos2dx_spine4_TrackEntry_getReverse));
    cls->defineFunction("getMixDrawOrderThreshold", _SE(js_cocos2dx_spine4_TrackEntry_getMixDrawOrderThreshold));
    cls->defineFunction("setAlpha", _SE(js_cocos2dx_spine4_TrackEntry_setAlpha));
    cls->defineFunction("getMixTime", _SE(js_cocos2dx_spine4_TrackEntry_getMixTime));
    cls->defineFunction("getMixingTo", _SE(js_cocos2dx_spine4_TrackEntry_getMixingTo));
    cls->defineFunction("setTrackTime", _SE(js_cocos2dx_spine4_TrackEntry_setTrackTime));
    cls->defineFunction("setMixDuration", _SE(js_cocos2dx_spine4_TrackEntry_setMixDuration));
    cls->defineFunction("resetRotationDirections", _SE(js_cocos2dx_spine4_TrackEntry_resetRotationDirections));
    cls->defineFunction("setMixAttachmentThreshold", _SE(js_cocos2dx_spine4_TrackEntry_setMixAttachmentThreshold));
    cls->defineFunction("getMixAttachmentThreshold", _SE(js_cocos2dx_spine4_TrackEntry_getMixAttachmentThreshold));
    cls->defineFunction("setReverse", _SE(js_cocos2dx_spine4_TrackEntry_setReverse));
    cls->defineFunction("setHoldPrevious", _SE(js_cocos2dx_spine4_TrackEntry_setHoldPrevious));
    cls->defineFunction("getLoop", _SE(js_cocos2dx_spine4_TrackEntry_getLoop));
    cls->defineFunction("getTrackTime", _SE(js_cocos2dx_spine4_TrackEntry_getTrackTime));
    cls->defineFunction("getAnimationStart", _SE(js_cocos2dx_spine4_TrackEntry_getAnimationStart));
    cls->defineFunction("getAnimationLast", _SE(js_cocos2dx_spine4_TrackEntry_getAnimationLast));
    cls->defineFunction("setAnimationStart", _SE(js_cocos2dx_spine4_TrackEntry_setAnimationStart));
    cls->defineFunction("setLoop", _SE(js_cocos2dx_spine4_TrackEntry_setLoop));
    cls->defineFunction("getTrackIndex", _SE(js_cocos2dx_spine4_TrackEntry_getTrackIndex));
    cls->defineFunction("getTimeScale", _SE(js_cocos2dx_spine4_TrackEntry_getTimeScale));
    cls->defineFunction("getPrevious", _SE(js_cocos2dx_spine4_TrackEntry_getPrevious));
    cls->defineFunction("getDelay", _SE(js_cocos2dx_spine4_TrackEntry_getDelay));
    cls->defineFunction("getAnimation", _SE(js_cocos2dx_spine4_TrackEntry_getAnimation));
    cls->defineFunction("getHoldPrevious", _SE(js_cocos2dx_spine4_TrackEntry_getHoldPrevious));
    cls->defineFunction("getMixingFrom", _SE(js_cocos2dx_spine4_TrackEntry_getMixingFrom));
    cls->defineFunction("isNextReady", _SE(js_cocos2dx_spine4_TrackEntry_isNextReady));
    cls->defineFunction("getAnimationTime", _SE(js_cocos2dx_spine4_TrackEntry_getAnimationTime));
    cls->defineFunction("getEventThreshold", _SE(js_cocos2dx_spine4_TrackEntry_getEventThreshold));
    cls->defineFunction("setAnimationLast", _SE(js_cocos2dx_spine4_TrackEntry_setAnimationLast));
    cls->defineFunction("getAlpha", _SE(js_cocos2dx_spine4_TrackEntry_getAlpha));
    cls->defineFunction("getAlphaAttachmentThreshold", _SE(js_cocos2dx_spine4_TrackEntry_getAlphaAttachmentThreshold));
    cls->defineFunction("setMixBlend", _SE(js_cocos2dx_spine4_TrackEntry_setMixBlend));
    cls->install();
    JSBClassType::registerClass<spine4::TrackEntry>(cls);

    __jsb_spine4_TrackEntry_proto = cls->getProto();
    __jsb_spine4_TrackEntry_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_AnimationState_proto = nullptr;
se::Class* __jsb_spine4_AnimationState_class = nullptr;

static bool js_cocos2dx_spine4_AnimationState_getData(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_getData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::AnimationStateData* result = cobj->getData();
        ok &= native_ptr_to_rooted_seval<spine4::AnimationStateData>((spine4::AnimationStateData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_getData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_getData)

static bool js_cocos2dx_spine4_AnimationState_addAnimation(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_AnimationState_addAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 4) {
            size_t arg0 = 0;
            ok &= seval_to_size(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Animation* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            bool arg2;
            ok &= seval_to_boolean(args[2], &arg2);
            float arg3 = 0;
            ok &= seval_to_float(args[3], &arg3);
            if (!ok) { ok = true; break; }
            spine4::TrackEntry* result = cobj->addAnimation(arg0, arg1, arg2, arg3);
            ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_addAnimation : Error processing arguments");
            return true;
        }
    } while(false);

    do {
        if (argc == 4) {
            size_t arg0 = 0;
            ok &= seval_to_size(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::String arg1;
            arg1 = args[1].toStringForce().c_str();
            if (!ok) { ok = true; break; }
            bool arg2;
            ok &= seval_to_boolean(args[2], &arg2);
            float arg3 = 0;
            ok &= seval_to_float(args[3], &arg3);
            if (!ok) { ok = true; break; }
            spine4::TrackEntry* result = cobj->addAnimation(arg0, arg1, arg2, arg3);
            ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_addAnimation : Error processing arguments");
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_addAnimation)

static bool js_cocos2dx_spine4_AnimationState_setManualTrackEntryDisposal(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_setManualTrackEntryDisposal : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_setManualTrackEntryDisposal : Error processing arguments");
        cobj->setManualTrackEntryDisposal(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_setManualTrackEntryDisposal)

static bool js_cocos2dx_spine4_AnimationState_setEmptyAnimations(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_setEmptyAnimations : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_setEmptyAnimations : Error processing arguments");
        cobj->setEmptyAnimations(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_setEmptyAnimations)

static bool js_cocos2dx_spine4_AnimationState_getCurrent(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_getCurrent : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        size_t arg0 = 0;
        ok &= seval_to_size(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_getCurrent : Error processing arguments");
        spine4::TrackEntry* result = cobj->getCurrent(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_getCurrent : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_getCurrent)

static bool js_cocos2dx_spine4_AnimationState_enableQueue(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_enableQueue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->enableQueue();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_enableQueue)

static bool js_cocos2dx_spine4_AnimationState_clearTracks(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_clearTracks : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->clearTracks();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_clearTracks)

static bool js_cocos2dx_spine4_AnimationState_update(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_update : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_update : Error processing arguments");
        cobj->update(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_update)

static bool js_cocos2dx_spine4_AnimationState_disposeTrackEntry(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_disposeTrackEntry : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::TrackEntry* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_disposeTrackEntry : Error processing arguments");
        cobj->disposeTrackEntry(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_disposeTrackEntry)

static bool js_cocos2dx_spine4_AnimationState_disableQueue(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_disableQueue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->disableQueue();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_disableQueue)

static bool js_cocos2dx_spine4_AnimationState_setEmptyAnimation(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_setEmptyAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        size_t arg0 = 0;
        float arg1 = 0;
        ok &= seval_to_size(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_setEmptyAnimation : Error processing arguments");
        spine4::TrackEntry* result = cobj->setEmptyAnimation(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_setEmptyAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_setEmptyAnimation)

static bool js_cocos2dx_spine4_AnimationState_setTimeScale(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_setTimeScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_setTimeScale : Error processing arguments");
        cobj->setTimeScale(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_setTimeScale)

static bool js_cocos2dx_spine4_AnimationState_getManualTrackEntryDisposal(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_getManualTrackEntryDisposal : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getManualTrackEntryDisposal();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_getManualTrackEntryDisposal : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_getManualTrackEntryDisposal)

static bool js_cocos2dx_spine4_AnimationState_getTracks(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_getTracks : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::TrackEntry *>& result = cobj->getTracks();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_getTracks : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_getTracks)

static bool js_cocos2dx_spine4_AnimationState_clearTrack(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_clearTrack : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        size_t arg0 = 0;
        ok &= seval_to_size(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_clearTrack : Error processing arguments");
        cobj->clearTrack(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_clearTrack)

static bool js_cocos2dx_spine4_AnimationState_setAnimation(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_AnimationState_setAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 3) {
            size_t arg0 = 0;
            ok &= seval_to_size(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Animation* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            bool arg2;
            ok &= seval_to_boolean(args[2], &arg2);
            spine4::TrackEntry* result = cobj->setAnimation(arg0, arg1, arg2);
            ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_setAnimation : Error processing arguments");
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            size_t arg0 = 0;
            ok &= seval_to_size(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::String arg1;
            arg1 = args[1].toStringForce().c_str();
            if (!ok) { ok = true; break; }
            bool arg2;
            ok &= seval_to_boolean(args[2], &arg2);
            spine4::TrackEntry* result = cobj->setAnimation(arg0, arg1, arg2);
            ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_setAnimation : Error processing arguments");
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_setAnimation)

static bool js_cocos2dx_spine4_AnimationState_addEmptyAnimation(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_addEmptyAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        size_t arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        ok &= seval_to_size(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_addEmptyAnimation : Error processing arguments");
        spine4::TrackEntry* result = cobj->addEmptyAnimation(arg0, arg1, arg2);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_addEmptyAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_addEmptyAnimation)

static bool js_cocos2dx_spine4_AnimationState_getTimeScale(se::State& s)
{
    spine4::AnimationState* cobj = (spine4::AnimationState*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationState_getTimeScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTimeScale();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationState_getTimeScale : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationState_getTimeScale)




bool js_register_cocos2dx_spine4_AnimationState(se::Object* obj)
{
    auto cls = se::Class::create("AnimationState", obj, nullptr, nullptr);

    cls->defineFunction("getData", _SE(js_cocos2dx_spine4_AnimationState_getData));
    cls->defineFunction("addAnimation", _SE(js_cocos2dx_spine4_AnimationState_addAnimation));
    cls->defineFunction("setManualTrackEntryDisposal", _SE(js_cocos2dx_spine4_AnimationState_setManualTrackEntryDisposal));
    cls->defineFunction("setEmptyAnimations", _SE(js_cocos2dx_spine4_AnimationState_setEmptyAnimations));
    cls->defineFunction("getCurrent", _SE(js_cocos2dx_spine4_AnimationState_getCurrent));
    cls->defineFunction("enableQueue", _SE(js_cocos2dx_spine4_AnimationState_enableQueue));
    cls->defineFunction("clearTracks", _SE(js_cocos2dx_spine4_AnimationState_clearTracks));
    cls->defineFunction("update", _SE(js_cocos2dx_spine4_AnimationState_update));
    cls->defineFunction("disposeTrackEntry", _SE(js_cocos2dx_spine4_AnimationState_disposeTrackEntry));
    cls->defineFunction("disableQueue", _SE(js_cocos2dx_spine4_AnimationState_disableQueue));
    cls->defineFunction("setEmptyAnimation", _SE(js_cocos2dx_spine4_AnimationState_setEmptyAnimation));
    cls->defineFunction("setTimeScale", _SE(js_cocos2dx_spine4_AnimationState_setTimeScale));
    cls->defineFunction("getManualTrackEntryDisposal", _SE(js_cocos2dx_spine4_AnimationState_getManualTrackEntryDisposal));
    cls->defineFunction("getTracks", _SE(js_cocos2dx_spine4_AnimationState_getTracks));
    cls->defineFunction("clearTrack", _SE(js_cocos2dx_spine4_AnimationState_clearTrack));
    cls->defineFunction("setAnimation", _SE(js_cocos2dx_spine4_AnimationState_setAnimation));
    cls->defineFunction("addEmptyAnimation", _SE(js_cocos2dx_spine4_AnimationState_addEmptyAnimation));
    cls->defineFunction("getTimeScale", _SE(js_cocos2dx_spine4_AnimationState_getTimeScale));
    cls->install();
    JSBClassType::registerClass<spine4::AnimationState>(cls);

    __jsb_spine4_AnimationState_proto = cls->getProto();
    __jsb_spine4_AnimationState_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_AnimationStateData_proto = nullptr;
se::Class* __jsb_spine4_AnimationStateData_class = nullptr;

static bool js_cocos2dx_spine4_AnimationStateData_getMix(se::State& s)
{
    spine4::AnimationStateData* cobj = (spine4::AnimationStateData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationStateData_getMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::Animation* arg0 = nullptr;
        spine4::Animation* arg1 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        ok &= seval_to_native_ptr(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationStateData_getMix : Error processing arguments");
        float result = cobj->getMix(arg0, arg1);
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationStateData_getMix : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationStateData_getMix)

static bool js_cocos2dx_spine4_AnimationStateData_getDefaultMix(se::State& s)
{
    spine4::AnimationStateData* cobj = (spine4::AnimationStateData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationStateData_getDefaultMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getDefaultMix();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationStateData_getDefaultMix : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationStateData_getDefaultMix)

static bool js_cocos2dx_spine4_AnimationStateData_getSkeletonData(se::State& s)
{
    spine4::AnimationStateData* cobj = (spine4::AnimationStateData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationStateData_getSkeletonData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::SkeletonData* result = cobj->getSkeletonData();
        ok &= native_ptr_to_rooted_seval<spine4::SkeletonData>((spine4::SkeletonData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationStateData_getSkeletonData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationStateData_getSkeletonData)

static bool js_cocos2dx_spine4_AnimationStateData_clear(se::State& s)
{
    spine4::AnimationStateData* cobj = (spine4::AnimationStateData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationStateData_clear : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->clear();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationStateData_clear)

static bool js_cocos2dx_spine4_AnimationStateData_setDefaultMix(se::State& s)
{
    spine4::AnimationStateData* cobj = (spine4::AnimationStateData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AnimationStateData_setDefaultMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AnimationStateData_setDefaultMix : Error processing arguments");
        cobj->setDefaultMix(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationStateData_setDefaultMix)

static bool js_cocos2dx_spine4_AnimationStateData_setMix(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::AnimationStateData* cobj = (spine4::AnimationStateData*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_AnimationStateData_setMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 3) {
            spine4::Animation* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Animation* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            cobj->setMix(arg0, arg1, arg2);
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            spine4::String arg0;
            arg0 = args[0].toStringForce().c_str();
            if (!ok) { ok = true; break; }
            spine4::String arg1;
            arg1 = args[1].toStringForce().c_str();
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            cobj->setMix(arg0, arg1, arg2);
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AnimationStateData_setMix)




bool js_register_cocos2dx_spine4_AnimationStateData(se::Object* obj)
{
    auto cls = se::Class::create("AnimationStateData", obj, nullptr, nullptr);

    cls->defineFunction("getMix", _SE(js_cocos2dx_spine4_AnimationStateData_getMix));
    cls->defineFunction("getDefaultMix", _SE(js_cocos2dx_spine4_AnimationStateData_getDefaultMix));
    cls->defineFunction("getSkeletonData", _SE(js_cocos2dx_spine4_AnimationStateData_getSkeletonData));
    cls->defineFunction("clear", _SE(js_cocos2dx_spine4_AnimationStateData_clear));
    cls->defineFunction("setDefaultMix", _SE(js_cocos2dx_spine4_AnimationStateData_setDefaultMix));
    cls->defineFunction("setMix", _SE(js_cocos2dx_spine4_AnimationStateData_setMix));
    cls->install();
    JSBClassType::registerClass<spine4::AnimationStateData>(cls);

    __jsb_spine4_AnimationStateData_proto = cls->getProto();
    __jsb_spine4_AnimationStateData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Attachment_proto = nullptr;
se::Class* __jsb_spine4_Attachment_class = nullptr;

static bool js_cocos2dx_spine4_Attachment_getRefCount(se::State& s)
{
    spine4::Attachment* cobj = (spine4::Attachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Attachment_getRefCount : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getRefCount();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Attachment_getRefCount : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Attachment_getRefCount)

static bool js_cocos2dx_spine4_Attachment_reference(se::State& s)
{
    spine4::Attachment* cobj = (spine4::Attachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Attachment_reference : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->reference();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Attachment_reference)

static bool js_cocos2dx_spine4_Attachment_getName(se::State& s)
{
    spine4::Attachment* cobj = (spine4::Attachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Attachment_getName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Attachment_getName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Attachment_getName)

static bool js_cocos2dx_spine4_Attachment_dereference(se::State& s)
{
    spine4::Attachment* cobj = (spine4::Attachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Attachment_dereference : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->dereference();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Attachment_dereference)

static bool js_cocos2dx_spine4_Attachment_copy(se::State& s)
{
    spine4::Attachment* cobj = (spine4::Attachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Attachment_copy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->copy();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Attachment_copy : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Attachment_copy)




bool js_register_cocos2dx_spine4_Attachment(se::Object* obj)
{
    auto cls = se::Class::create("Attachment", obj, nullptr, nullptr);

    cls->defineFunction("getRefCount", _SE(js_cocos2dx_spine4_Attachment_getRefCount));
    cls->defineFunction("reference", _SE(js_cocos2dx_spine4_Attachment_reference));
    cls->defineFunction("getName", _SE(js_cocos2dx_spine4_Attachment_getName));
    cls->defineFunction("dereference", _SE(js_cocos2dx_spine4_Attachment_dereference));
    cls->defineFunction("copy", _SE(js_cocos2dx_spine4_Attachment_copy));
    cls->install();
    JSBClassType::registerClass<spine4::Attachment>(cls);

    __jsb_spine4_Attachment_proto = cls->getProto();
    __jsb_spine4_Attachment_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Timeline_proto = nullptr;
se::Class* __jsb_spine4_Timeline_class = nullptr;

static bool js_cocos2dx_spine4_Timeline_getPropertyIds(se::State& s)
{
    spine4::Timeline* cobj = (spine4::Timeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Timeline_getPropertyIds : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<long long>& result = cobj->getPropertyIds();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Timeline_getPropertyIds : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Timeline_getPropertyIds)

static bool js_cocos2dx_spine4_Timeline_getFrameCount(se::State& s)
{
    spine4::Timeline* cobj = (spine4::Timeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Timeline_getFrameCount : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        size_t result = cobj->getFrameCount();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Timeline_getFrameCount : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Timeline_getFrameCount)

static bool js_cocos2dx_spine4_Timeline_getFrames(se::State& s)
{
    spine4::Timeline* cobj = (spine4::Timeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Timeline_getFrames : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getFrames();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Timeline_getFrames : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Timeline_getFrames)

static bool js_cocos2dx_spine4_Timeline_getDuration(se::State& s)
{
    spine4::Timeline* cobj = (spine4::Timeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Timeline_getDuration : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getDuration();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Timeline_getDuration : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Timeline_getDuration)

static bool js_cocos2dx_spine4_Timeline_getFrameEntries(se::State& s)
{
    spine4::Timeline* cobj = (spine4::Timeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Timeline_getFrameEntries : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        size_t result = cobj->getFrameEntries();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Timeline_getFrameEntries : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Timeline_getFrameEntries)




bool js_register_cocos2dx_spine4_Timeline(se::Object* obj)
{
    auto cls = se::Class::create("Timeline", obj, nullptr, nullptr);

    cls->defineFunction("getPropertyIds", _SE(js_cocos2dx_spine4_Timeline_getPropertyIds));
    cls->defineFunction("getFrameCount", _SE(js_cocos2dx_spine4_Timeline_getFrameCount));
    cls->defineFunction("getFrames", _SE(js_cocos2dx_spine4_Timeline_getFrames));
    cls->defineFunction("getDuration", _SE(js_cocos2dx_spine4_Timeline_getDuration));
    cls->defineFunction("getFrameEntries", _SE(js_cocos2dx_spine4_Timeline_getFrameEntries));
    cls->install();
    JSBClassType::registerClass<spine4::Timeline>(cls);

    __jsb_spine4_Timeline_proto = cls->getProto();
    __jsb_spine4_Timeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_AttachmentTimeline_proto = nullptr;
se::Class* __jsb_spine4_AttachmentTimeline_class = nullptr;

static bool js_cocos2dx_spine4_AttachmentTimeline_getAttachmentNames(se::State& s)
{
    spine4::AttachmentTimeline* cobj = (spine4::AttachmentTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AttachmentTimeline_getAttachmentNames : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::String>& result = cobj->getAttachmentNames();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AttachmentTimeline_getAttachmentNames : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AttachmentTimeline_getAttachmentNames)

static bool js_cocos2dx_spine4_AttachmentTimeline_setSlotIndex(se::State& s)
{
    spine4::AttachmentTimeline* cobj = (spine4::AttachmentTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AttachmentTimeline_setSlotIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AttachmentTimeline_setSlotIndex : Error processing arguments");
        cobj->setSlotIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AttachmentTimeline_setSlotIndex)

static bool js_cocos2dx_spine4_AttachmentTimeline_setFrame(se::State& s)
{
    spine4::AttachmentTimeline* cobj = (spine4::AttachmentTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AttachmentTimeline_setFrame : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        int arg0 = 0;
        float arg1 = 0;
        spine4::String arg2;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_float(args[1], &arg1);
        arg2 = args[2].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AttachmentTimeline_setFrame : Error processing arguments");
        cobj->setFrame(arg0, arg1, arg2);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AttachmentTimeline_setFrame)

static bool js_cocos2dx_spine4_AttachmentTimeline_getSlotIndex(se::State& s)
{
    spine4::AttachmentTimeline* cobj = (spine4::AttachmentTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AttachmentTimeline_getSlotIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getSlotIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AttachmentTimeline_getSlotIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AttachmentTimeline_getSlotIndex)


extern se::Object* __jsb_spine4_Timeline_proto;


bool js_register_cocos2dx_spine4_AttachmentTimeline(se::Object* obj)
{
    auto cls = se::Class::create("AttachmentTimeline", obj, __jsb_spine4_Timeline_proto, nullptr);

    cls->defineFunction("getAttachmentNames", _SE(js_cocos2dx_spine4_AttachmentTimeline_getAttachmentNames));
    cls->defineFunction("setSlotIndex", _SE(js_cocos2dx_spine4_AttachmentTimeline_setSlotIndex));
    cls->defineFunction("setFrame", _SE(js_cocos2dx_spine4_AttachmentTimeline_setFrame));
    cls->defineFunction("getSlotIndex", _SE(js_cocos2dx_spine4_AttachmentTimeline_getSlotIndex));
    cls->install();
    JSBClassType::registerClass<spine4::AttachmentTimeline>(cls);

    __jsb_spine4_AttachmentTimeline_proto = cls->getProto();
    __jsb_spine4_AttachmentTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Bone_proto = nullptr;
se::Class* __jsb_spine4_Bone_class = nullptr;

static bool js_cocos2dx_spine4_Bone_setD(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setD : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setD : Error processing arguments");
        cobj->setD(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setD)

static bool js_cocos2dx_spine4_Bone_setInherit(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setInherit : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Inherit arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setInherit : Error processing arguments");
        cobj->setInherit(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setInherit)

static bool js_cocos2dx_spine4_Bone_setAppliedRotation(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setAppliedRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setAppliedRotation : Error processing arguments");
        cobj->setAppliedRotation(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setAppliedRotation)

static bool js_cocos2dx_spine4_Bone_setAScaleY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setAScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setAScaleY : Error processing arguments");
        cobj->setAScaleY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setAScaleY)

static bool js_cocos2dx_spine4_Bone_setAScaleX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setAScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setAScaleX : Error processing arguments");
        cobj->setAScaleX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setAScaleX)

static bool js_cocos2dx_spine4_Bone_getB(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getB : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getB();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getB : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getB)

static bool js_cocos2dx_spine4_Bone_getC(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getC : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getC();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getC : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getC)

static bool js_cocos2dx_spine4_Bone_getD(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getD : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getD();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getD : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getD)

static bool js_cocos2dx_spine4_Bone_getWorldScaleY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getWorldScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWorldScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getWorldScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getWorldScaleY)

static bool js_cocos2dx_spine4_Bone_getX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getX)

static bool js_cocos2dx_spine4_Bone_getY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getY)

static bool js_cocos2dx_spine4_Bone_getChildren(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getChildren : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Bone *>& result = cobj->getChildren();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getChildren : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getChildren)

static bool js_cocos2dx_spine4_Bone_setWorldX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setWorldX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setWorldX : Error processing arguments");
        cobj->setWorldX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setWorldX)

static bool js_cocos2dx_spine4_Bone_getRotation(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getRotation();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getRotation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getRotation)

static bool js_cocos2dx_spine4_Bone_getAShearX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getAShearX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAShearX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getAShearX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getAShearX)

static bool js_cocos2dx_spine4_Bone_getAShearY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getAShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAShearY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getAShearY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getAShearY)

static bool js_cocos2dx_spine4_Bone_parentToWorld(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_parentToWorld : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        float arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        float arg3 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_parentToWorld : Error processing arguments");
        cobj->parentToWorld(arg0, arg1, arg2, arg3);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_parentToWorld)

static bool js_cocos2dx_spine4_Bone_updateAppliedTransform(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_updateAppliedTransform : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->updateAppliedTransform();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_updateAppliedTransform)

static bool js_cocos2dx_spine4_Bone_getWorldRotationY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getWorldRotationY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWorldRotationY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getWorldRotationY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getWorldRotationY)

static bool js_cocos2dx_spine4_Bone_getScaleY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getScaleY)

static bool js_cocos2dx_spine4_Bone_getScaleX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getScaleX)

static bool js_cocos2dx_spine4_Bone_setToSetupPose(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setToSetupPose)

static bool js_cocos2dx_spine4_Bone_getInherit(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getInherit : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = (unsigned int)cobj->getInherit();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getInherit : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getInherit)

static bool js_cocos2dx_spine4_Bone_getWorldToLocalRotationX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getWorldToLocalRotationX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWorldToLocalRotationX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getWorldToLocalRotationX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getWorldToLocalRotationX)

static bool js_cocos2dx_spine4_Bone_getWorldToLocalRotationY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getWorldToLocalRotationY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWorldToLocalRotationY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getWorldToLocalRotationY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getWorldToLocalRotationY)

static bool js_cocos2dx_spine4_Bone_getAScaleX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getAScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getAScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getAScaleX)

static bool js_cocos2dx_spine4_Bone_getA(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getA : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getA();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getA : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getA)

static bool js_cocos2dx_spine4_Bone_setRotation(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setRotation : Error processing arguments");
        cobj->setRotation(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setRotation)

static bool js_cocos2dx_spine4_Bone_getAX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getAX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getAX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getAX)

static bool js_cocos2dx_spine4_Bone_getData(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::BoneData& result = cobj->getData();
        ok &= native_ptr_to_rooted_seval<spine4::BoneData>((spine4::BoneData*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getData)

static bool js_cocos2dx_spine4_Bone_setShearX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setShearX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setShearX : Error processing arguments");
        cobj->setShearX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setShearX)

static bool js_cocos2dx_spine4_Bone_setShearY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setShearY : Error processing arguments");
        cobj->setShearY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setShearY)

static bool js_cocos2dx_spine4_Bone_setScaleY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setScaleY : Error processing arguments");
        cobj->setScaleY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setScaleY)

static bool js_cocos2dx_spine4_Bone_setScaleX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setScaleX : Error processing arguments");
        cobj->setScaleX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setScaleX)

static bool js_cocos2dx_spine4_Bone_setA(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setA : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setA : Error processing arguments");
        cobj->setA(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setA)

static bool js_cocos2dx_spine4_Bone_setB(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setB : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setB : Error processing arguments");
        cobj->setB(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setB)

static bool js_cocos2dx_spine4_Bone_getAScaleY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getAScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getAScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getAScaleY)

static bool js_cocos2dx_spine4_Bone_getWorldScaleX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getWorldScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWorldScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getWorldScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getWorldScaleX)

static bool js_cocos2dx_spine4_Bone_worldToParent(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_worldToParent : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        float arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        float arg3 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_worldToParent : Error processing arguments");
        cobj->worldToParent(arg0, arg1, arg2, arg3);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_worldToParent)

static bool js_cocos2dx_spine4_Bone_getWorldRotationX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getWorldRotationX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWorldRotationX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getWorldRotationX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getWorldRotationX)

static bool js_cocos2dx_spine4_Bone_getShearX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getShearX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getShearX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getShearX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getShearX)

static bool js_cocos2dx_spine4_Bone_update(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_update : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Physics arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_update : Error processing arguments");
        cobj->update(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_update)

static bool js_cocos2dx_spine4_Bone_getShearY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getShearY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getShearY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getShearY)

static bool js_cocos2dx_spine4_Bone_setAShearX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setAShearX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setAShearX : Error processing arguments");
        cobj->setAShearX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setAShearX)

static bool js_cocos2dx_spine4_Bone_setAShearY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setAShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setAShearY : Error processing arguments");
        cobj->setAShearY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setAShearY)

static bool js_cocos2dx_spine4_Bone_setActive(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setActive : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setActive : Error processing arguments");
        cobj->setActive(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setActive)

static bool js_cocos2dx_spine4_Bone_setC(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setC : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setC : Error processing arguments");
        cobj->setC(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setC)

static bool js_cocos2dx_spine4_Bone_setWorldY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setWorldY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setWorldY : Error processing arguments");
        cobj->setWorldY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setWorldY)

static bool js_cocos2dx_spine4_Bone_setX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setX : Error processing arguments");
        cobj->setX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setX)

static bool js_cocos2dx_spine4_Bone_setY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setY : Error processing arguments");
        cobj->setY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setY)

static bool js_cocos2dx_spine4_Bone_setAX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setAX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setAX : Error processing arguments");
        cobj->setAX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setAX)

static bool js_cocos2dx_spine4_Bone_setAY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_setAY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setAY : Error processing arguments");
        cobj->setAY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setAY)

static bool js_cocos2dx_spine4_Bone_isActive(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_isActive : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isActive();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_isActive : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_isActive)

static bool js_cocos2dx_spine4_Bone_getAY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getAY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getAY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getAY)

static bool js_cocos2dx_spine4_Bone_rotateWorld(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_rotateWorld : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_rotateWorld : Error processing arguments");
        cobj->rotateWorld(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_rotateWorld)

static bool js_cocos2dx_spine4_Bone_getParent(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getParent : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Bone* result = cobj->getParent();
        ok &= native_ptr_to_rooted_seval<spine4::Bone>((spine4::Bone*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getParent : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getParent)

static bool js_cocos2dx_spine4_Bone_getAppliedRotation(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getAppliedRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getAppliedRotation();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getAppliedRotation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getAppliedRotation)

static bool js_cocos2dx_spine4_Bone_updateWorldTransform(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_Bone_updateWorldTransform : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 7) {
            float arg0 = 0;
            ok &= seval_to_float(args[0], &arg0);
            if (!ok) { ok = true; break; }
            float arg1 = 0;
            ok &= seval_to_float(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            float arg3 = 0;
            ok &= seval_to_float(args[3], &arg3);
            if (!ok) { ok = true; break; }
            float arg4 = 0;
            ok &= seval_to_float(args[4], &arg4);
            if (!ok) { ok = true; break; }
            float arg5 = 0;
            ok &= seval_to_float(args[5], &arg5);
            if (!ok) { ok = true; break; }
            float arg6 = 0;
            ok &= seval_to_float(args[6], &arg6);
            if (!ok) { ok = true; break; }
            cobj->updateWorldTransform(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
            return true;
        }
    } while(false);

    do {
        if (argc == 0) {
            cobj->updateWorldTransform();
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_updateWorldTransform)

static bool js_cocos2dx_spine4_Bone_getWorldY(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getWorldY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWorldY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getWorldY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getWorldY)

static bool js_cocos2dx_spine4_Bone_getWorldX(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getWorldX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWorldX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getWorldX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getWorldX)

static bool js_cocos2dx_spine4_Bone_getSkeleton(se::State& s)
{
    spine4::Bone* cobj = (spine4::Bone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Bone_getSkeleton : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Skeleton& result = cobj->getSkeleton();
        ok &= native_ptr_to_rooted_seval<spine4::Skeleton>((spine4::Skeleton*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_getSkeleton : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_getSkeleton)

static bool js_cocos2dx_spine4_Bone_isYDown(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = spine4::Bone::isYDown();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_isYDown : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_isYDown)

static bool js_cocos2dx_spine4_Bone_setYDown(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Bone_setYDown : Error processing arguments");
        spine4::Bone::setYDown(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Bone_setYDown)




bool js_register_cocos2dx_spine4_Bone(se::Object* obj)
{
    auto cls = se::Class::create("Bone", obj, nullptr, nullptr);

    cls->defineFunction("setD", _SE(js_cocos2dx_spine4_Bone_setD));
    cls->defineFunction("setInherit", _SE(js_cocos2dx_spine4_Bone_setInherit));
    cls->defineFunction("setAppliedRotation", _SE(js_cocos2dx_spine4_Bone_setAppliedRotation));
    cls->defineFunction("setAScaleY", _SE(js_cocos2dx_spine4_Bone_setAScaleY));
    cls->defineFunction("setAScaleX", _SE(js_cocos2dx_spine4_Bone_setAScaleX));
    cls->defineFunction("getB", _SE(js_cocos2dx_spine4_Bone_getB));
    cls->defineFunction("getC", _SE(js_cocos2dx_spine4_Bone_getC));
    cls->defineFunction("getD", _SE(js_cocos2dx_spine4_Bone_getD));
    cls->defineFunction("getWorldScaleY", _SE(js_cocos2dx_spine4_Bone_getWorldScaleY));
    cls->defineFunction("getX", _SE(js_cocos2dx_spine4_Bone_getX));
    cls->defineFunction("getY", _SE(js_cocos2dx_spine4_Bone_getY));
    cls->defineFunction("getChildren", _SE(js_cocos2dx_spine4_Bone_getChildren));
    cls->defineFunction("setWorldX", _SE(js_cocos2dx_spine4_Bone_setWorldX));
    cls->defineFunction("getRotation", _SE(js_cocos2dx_spine4_Bone_getRotation));
    cls->defineFunction("getAShearX", _SE(js_cocos2dx_spine4_Bone_getAShearX));
    cls->defineFunction("getAShearY", _SE(js_cocos2dx_spine4_Bone_getAShearY));
    cls->defineFunction("parentToWorld", _SE(js_cocos2dx_spine4_Bone_parentToWorld));
    cls->defineFunction("updateAppliedTransform", _SE(js_cocos2dx_spine4_Bone_updateAppliedTransform));
    cls->defineFunction("getWorldRotationY", _SE(js_cocos2dx_spine4_Bone_getWorldRotationY));
    cls->defineFunction("getScaleY", _SE(js_cocos2dx_spine4_Bone_getScaleY));
    cls->defineFunction("getScaleX", _SE(js_cocos2dx_spine4_Bone_getScaleX));
    cls->defineFunction("setToSetupPose", _SE(js_cocos2dx_spine4_Bone_setToSetupPose));
    cls->defineFunction("getInherit", _SE(js_cocos2dx_spine4_Bone_getInherit));
    cls->defineFunction("getWorldToLocalRotationX", _SE(js_cocos2dx_spine4_Bone_getWorldToLocalRotationX));
    cls->defineFunction("getWorldToLocalRotationY", _SE(js_cocos2dx_spine4_Bone_getWorldToLocalRotationY));
    cls->defineFunction("getAScaleX", _SE(js_cocos2dx_spine4_Bone_getAScaleX));
    cls->defineFunction("getA", _SE(js_cocos2dx_spine4_Bone_getA));
    cls->defineFunction("setRotation", _SE(js_cocos2dx_spine4_Bone_setRotation));
    cls->defineFunction("getAX", _SE(js_cocos2dx_spine4_Bone_getAX));
    cls->defineFunction("getData", _SE(js_cocos2dx_spine4_Bone_getData));
    cls->defineFunction("setShearX", _SE(js_cocos2dx_spine4_Bone_setShearX));
    cls->defineFunction("setShearY", _SE(js_cocos2dx_spine4_Bone_setShearY));
    cls->defineFunction("setScaleY", _SE(js_cocos2dx_spine4_Bone_setScaleY));
    cls->defineFunction("setScaleX", _SE(js_cocos2dx_spine4_Bone_setScaleX));
    cls->defineFunction("setA", _SE(js_cocos2dx_spine4_Bone_setA));
    cls->defineFunction("setB", _SE(js_cocos2dx_spine4_Bone_setB));
    cls->defineFunction("getAScaleY", _SE(js_cocos2dx_spine4_Bone_getAScaleY));
    cls->defineFunction("getWorldScaleX", _SE(js_cocos2dx_spine4_Bone_getWorldScaleX));
    cls->defineFunction("worldToParent", _SE(js_cocos2dx_spine4_Bone_worldToParent));
    cls->defineFunction("getWorldRotationX", _SE(js_cocos2dx_spine4_Bone_getWorldRotationX));
    cls->defineFunction("getShearX", _SE(js_cocos2dx_spine4_Bone_getShearX));
    cls->defineFunction("update", _SE(js_cocos2dx_spine4_Bone_update));
    cls->defineFunction("getShearY", _SE(js_cocos2dx_spine4_Bone_getShearY));
    cls->defineFunction("setAShearX", _SE(js_cocos2dx_spine4_Bone_setAShearX));
    cls->defineFunction("setAShearY", _SE(js_cocos2dx_spine4_Bone_setAShearY));
    cls->defineFunction("setActive", _SE(js_cocos2dx_spine4_Bone_setActive));
    cls->defineFunction("setC", _SE(js_cocos2dx_spine4_Bone_setC));
    cls->defineFunction("setWorldY", _SE(js_cocos2dx_spine4_Bone_setWorldY));
    cls->defineFunction("setX", _SE(js_cocos2dx_spine4_Bone_setX));
    cls->defineFunction("setY", _SE(js_cocos2dx_spine4_Bone_setY));
    cls->defineFunction("setAX", _SE(js_cocos2dx_spine4_Bone_setAX));
    cls->defineFunction("setAY", _SE(js_cocos2dx_spine4_Bone_setAY));
    cls->defineFunction("isActive", _SE(js_cocos2dx_spine4_Bone_isActive));
    cls->defineFunction("getAY", _SE(js_cocos2dx_spine4_Bone_getAY));
    cls->defineFunction("rotateWorld", _SE(js_cocos2dx_spine4_Bone_rotateWorld));
    cls->defineFunction("getParent", _SE(js_cocos2dx_spine4_Bone_getParent));
    cls->defineFunction("getAppliedRotation", _SE(js_cocos2dx_spine4_Bone_getAppliedRotation));
    cls->defineFunction("updateWorldTransform", _SE(js_cocos2dx_spine4_Bone_updateWorldTransform));
    cls->defineFunction("getWorldY", _SE(js_cocos2dx_spine4_Bone_getWorldY));
    cls->defineFunction("getWorldX", _SE(js_cocos2dx_spine4_Bone_getWorldX));
    cls->defineFunction("getSkeleton", _SE(js_cocos2dx_spine4_Bone_getSkeleton));
    cls->defineStaticFunction("isYDown", _SE(js_cocos2dx_spine4_Bone_isYDown));
    cls->defineStaticFunction("setYDown", _SE(js_cocos2dx_spine4_Bone_setYDown));
    cls->install();
    JSBClassType::registerClass<spine4::Bone>(cls);

    __jsb_spine4_Bone_proto = cls->getProto();
    __jsb_spine4_Bone_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_BoneData_proto = nullptr;
se::Class* __jsb_spine4_BoneData_class = nullptr;

static bool js_cocos2dx_spine4_BoneData_getX(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getX)

static bool js_cocos2dx_spine4_BoneData_getY(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getY)

static bool js_cocos2dx_spine4_BoneData_setInherit(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setInherit : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Inherit arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setInherit : Error processing arguments");
        cobj->setInherit(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setInherit)

static bool js_cocos2dx_spine4_BoneData_getRotation(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getRotation();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getRotation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getRotation)

static bool js_cocos2dx_spine4_BoneData_isSkinRequired(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_isSkinRequired : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isSkinRequired();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_isSkinRequired : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_isSkinRequired)

static bool js_cocos2dx_spine4_BoneData_getIndex(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getIndex)

static bool js_cocos2dx_spine4_BoneData_getScaleY(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getScaleY)

static bool js_cocos2dx_spine4_BoneData_getScaleX(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getScaleX)

static bool js_cocos2dx_spine4_BoneData_getLength(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getLength : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getLength();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getLength : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getLength)

static bool js_cocos2dx_spine4_BoneData_getName(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getName)

static bool js_cocos2dx_spine4_BoneData_setLength(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setLength : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setLength : Error processing arguments");
        cobj->setLength(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setLength)

static bool js_cocos2dx_spine4_BoneData_setRotation(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setRotation : Error processing arguments");
        cobj->setRotation(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setRotation)

static bool js_cocos2dx_spine4_BoneData_setIcon(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setIcon : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setIcon : Error processing arguments");
        cobj->setIcon(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setIcon)

static bool js_cocos2dx_spine4_BoneData_setShearX(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setShearX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setShearX : Error processing arguments");
        cobj->setShearX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setShearX)

static bool js_cocos2dx_spine4_BoneData_setShearY(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setShearY : Error processing arguments");
        cobj->setShearY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setShearY)

static bool js_cocos2dx_spine4_BoneData_setScaleY(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setScaleY : Error processing arguments");
        cobj->setScaleY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setScaleY)

static bool js_cocos2dx_spine4_BoneData_setScaleX(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setScaleX : Error processing arguments");
        cobj->setScaleX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setScaleX)

static bool js_cocos2dx_spine4_BoneData_getInherit(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getInherit : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = (unsigned int)cobj->getInherit();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getInherit : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getInherit)

static bool js_cocos2dx_spine4_BoneData_getColor(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getColor)

static bool js_cocos2dx_spine4_BoneData_getShearX(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getShearX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getShearX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getShearX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getShearX)

static bool js_cocos2dx_spine4_BoneData_getShearY(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getShearY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getShearY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getShearY)

static bool js_cocos2dx_spine4_BoneData_setX(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setX : Error processing arguments");
        cobj->setX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setX)

static bool js_cocos2dx_spine4_BoneData_setY(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setY : Error processing arguments");
        cobj->setY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setY)

static bool js_cocos2dx_spine4_BoneData_setSkinRequired(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setSkinRequired : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setSkinRequired : Error processing arguments");
        cobj->setSkinRequired(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setSkinRequired)

static bool js_cocos2dx_spine4_BoneData_getParent(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getParent : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::BoneData* result = cobj->getParent();
        ok &= native_ptr_to_rooted_seval<spine4::BoneData>((spine4::BoneData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getParent : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getParent)

static bool js_cocos2dx_spine4_BoneData_getIcon(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_getIcon : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getIcon();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_getIcon : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_getIcon)

static bool js_cocos2dx_spine4_BoneData_isVisible(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_isVisible : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isVisible();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_isVisible : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_isVisible)

static bool js_cocos2dx_spine4_BoneData_setVisible(se::State& s)
{
    spine4::BoneData* cobj = (spine4::BoneData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoneData_setVisible : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoneData_setVisible : Error processing arguments");
        cobj->setVisible(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoneData_setVisible)




bool js_register_cocos2dx_spine4_BoneData(se::Object* obj)
{
    auto cls = se::Class::create("BoneData", obj, nullptr, nullptr);

    cls->defineFunction("getX", _SE(js_cocos2dx_spine4_BoneData_getX));
    cls->defineFunction("getY", _SE(js_cocos2dx_spine4_BoneData_getY));
    cls->defineFunction("setInherit", _SE(js_cocos2dx_spine4_BoneData_setInherit));
    cls->defineFunction("getRotation", _SE(js_cocos2dx_spine4_BoneData_getRotation));
    cls->defineFunction("isSkinRequired", _SE(js_cocos2dx_spine4_BoneData_isSkinRequired));
    cls->defineFunction("getIndex", _SE(js_cocos2dx_spine4_BoneData_getIndex));
    cls->defineFunction("getScaleY", _SE(js_cocos2dx_spine4_BoneData_getScaleY));
    cls->defineFunction("getScaleX", _SE(js_cocos2dx_spine4_BoneData_getScaleX));
    cls->defineFunction("getLength", _SE(js_cocos2dx_spine4_BoneData_getLength));
    cls->defineFunction("getName", _SE(js_cocos2dx_spine4_BoneData_getName));
    cls->defineFunction("setLength", _SE(js_cocos2dx_spine4_BoneData_setLength));
    cls->defineFunction("setRotation", _SE(js_cocos2dx_spine4_BoneData_setRotation));
    cls->defineFunction("setIcon", _SE(js_cocos2dx_spine4_BoneData_setIcon));
    cls->defineFunction("setShearX", _SE(js_cocos2dx_spine4_BoneData_setShearX));
    cls->defineFunction("setShearY", _SE(js_cocos2dx_spine4_BoneData_setShearY));
    cls->defineFunction("setScaleY", _SE(js_cocos2dx_spine4_BoneData_setScaleY));
    cls->defineFunction("setScaleX", _SE(js_cocos2dx_spine4_BoneData_setScaleX));
    cls->defineFunction("getInherit", _SE(js_cocos2dx_spine4_BoneData_getInherit));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_BoneData_getColor));
    cls->defineFunction("getShearX", _SE(js_cocos2dx_spine4_BoneData_getShearX));
    cls->defineFunction("getShearY", _SE(js_cocos2dx_spine4_BoneData_getShearY));
    cls->defineFunction("setX", _SE(js_cocos2dx_spine4_BoneData_setX));
    cls->defineFunction("setY", _SE(js_cocos2dx_spine4_BoneData_setY));
    cls->defineFunction("setSkinRequired", _SE(js_cocos2dx_spine4_BoneData_setSkinRequired));
    cls->defineFunction("getParent", _SE(js_cocos2dx_spine4_BoneData_getParent));
    cls->defineFunction("getIcon", _SE(js_cocos2dx_spine4_BoneData_getIcon));
    cls->defineFunction("isVisible", _SE(js_cocos2dx_spine4_BoneData_isVisible));
    cls->defineFunction("setVisible", _SE(js_cocos2dx_spine4_BoneData_setVisible));
    cls->install();
    JSBClassType::registerClass<spine4::BoneData>(cls);

    __jsb_spine4_BoneData_proto = cls->getProto();
    __jsb_spine4_BoneData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_VertexAttachment_proto = nullptr;
se::Class* __jsb_spine4_VertexAttachment_class = nullptr;

static bool js_cocos2dx_spine4_VertexAttachment_getVertices(se::State& s)
{
    spine4::VertexAttachment* cobj = (spine4::VertexAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexAttachment_getVertices : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getVertices();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexAttachment_getVertices : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexAttachment_getVertices)

static bool js_cocos2dx_spine4_VertexAttachment_getTimelineAttachment(se::State& s)
{
    spine4::VertexAttachment* cobj = (spine4::VertexAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexAttachment_getTimelineAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->getTimelineAttachment();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexAttachment_getTimelineAttachment : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexAttachment_getTimelineAttachment)

static bool js_cocos2dx_spine4_VertexAttachment_getId(se::State& s)
{
    spine4::VertexAttachment* cobj = (spine4::VertexAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexAttachment_getId : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getId();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexAttachment_getId : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexAttachment_getId)

static bool js_cocos2dx_spine4_VertexAttachment_setTimelineAttachment(se::State& s)
{
    spine4::VertexAttachment* cobj = (spine4::VertexAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexAttachment_setTimelineAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Attachment* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexAttachment_setTimelineAttachment : Error processing arguments");
        cobj->setTimelineAttachment(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexAttachment_setTimelineAttachment)

static bool js_cocos2dx_spine4_VertexAttachment_copyTo(se::State& s)
{
    spine4::VertexAttachment* cobj = (spine4::VertexAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexAttachment_copyTo : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::VertexAttachment* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexAttachment_copyTo : Error processing arguments");
        cobj->copyTo(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexAttachment_copyTo)

static bool js_cocos2dx_spine4_VertexAttachment_getWorldVerticesLength(se::State& s)
{
    spine4::VertexAttachment* cobj = (spine4::VertexAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexAttachment_getWorldVerticesLength : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        size_t result = cobj->getWorldVerticesLength();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexAttachment_getWorldVerticesLength : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexAttachment_getWorldVerticesLength)

static bool js_cocos2dx_spine4_VertexAttachment_setWorldVerticesLength(se::State& s)
{
    spine4::VertexAttachment* cobj = (spine4::VertexAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexAttachment_setWorldVerticesLength : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        size_t arg0 = 0;
        ok &= seval_to_size(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexAttachment_setWorldVerticesLength : Error processing arguments");
        cobj->setWorldVerticesLength(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexAttachment_setWorldVerticesLength)


extern se::Object* __jsb_spine4_Attachment_proto;


bool js_register_cocos2dx_spine4_VertexAttachment(se::Object* obj)
{
    auto cls = se::Class::create("VertexAttachment", obj, __jsb_spine4_Attachment_proto, nullptr);

    cls->defineFunction("getVertices", _SE(js_cocos2dx_spine4_VertexAttachment_getVertices));
    cls->defineFunction("getTimelineAttachment", _SE(js_cocos2dx_spine4_VertexAttachment_getTimelineAttachment));
    cls->defineFunction("getId", _SE(js_cocos2dx_spine4_VertexAttachment_getId));
    cls->defineFunction("setTimelineAttachment", _SE(js_cocos2dx_spine4_VertexAttachment_setTimelineAttachment));
    cls->defineFunction("copyTo", _SE(js_cocos2dx_spine4_VertexAttachment_copyTo));
    cls->defineFunction("getWorldVerticesLength", _SE(js_cocos2dx_spine4_VertexAttachment_getWorldVerticesLength));
    cls->defineFunction("setWorldVerticesLength", _SE(js_cocos2dx_spine4_VertexAttachment_setWorldVerticesLength));
    cls->install();
    JSBClassType::registerClass<spine4::VertexAttachment>(cls);

    __jsb_spine4_VertexAttachment_proto = cls->getProto();
    __jsb_spine4_VertexAttachment_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_BoundingBoxAttachment_proto = nullptr;
se::Class* __jsb_spine4_BoundingBoxAttachment_class = nullptr;

static bool js_cocos2dx_spine4_BoundingBoxAttachment_getColor(se::State& s)
{
    spine4::BoundingBoxAttachment* cobj = (spine4::BoundingBoxAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoundingBoxAttachment_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoundingBoxAttachment_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoundingBoxAttachment_getColor)

static bool js_cocos2dx_spine4_BoundingBoxAttachment_copy(se::State& s)
{
    spine4::BoundingBoxAttachment* cobj = (spine4::BoundingBoxAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_BoundingBoxAttachment_copy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->copy();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_BoundingBoxAttachment_copy : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_BoundingBoxAttachment_copy)


extern se::Object* __jsb_spine4_VertexAttachment_proto;


bool js_register_cocos2dx_spine4_BoundingBoxAttachment(se::Object* obj)
{
    auto cls = se::Class::create("BoundingBoxAttachment", obj, __jsb_spine4_VertexAttachment_proto, nullptr);

    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_BoundingBoxAttachment_getColor));
    cls->defineFunction("copy", _SE(js_cocos2dx_spine4_BoundingBoxAttachment_copy));
    cls->install();
    JSBClassType::registerClass<spine4::BoundingBoxAttachment>(cls);

    __jsb_spine4_BoundingBoxAttachment_proto = cls->getProto();
    __jsb_spine4_BoundingBoxAttachment_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_ClippingAttachment_proto = nullptr;
se::Class* __jsb_spine4_ClippingAttachment_class = nullptr;

static bool js_cocos2dx_spine4_ClippingAttachment_setEndSlot(se::State& s)
{
    spine4::ClippingAttachment* cobj = (spine4::ClippingAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ClippingAttachment_setEndSlot : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::SlotData* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ClippingAttachment_setEndSlot : Error processing arguments");
        cobj->setEndSlot(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ClippingAttachment_setEndSlot)

static bool js_cocos2dx_spine4_ClippingAttachment_copy(se::State& s)
{
    spine4::ClippingAttachment* cobj = (spine4::ClippingAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ClippingAttachment_copy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->copy();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ClippingAttachment_copy : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ClippingAttachment_copy)

static bool js_cocos2dx_spine4_ClippingAttachment_getEndSlot(se::State& s)
{
    spine4::ClippingAttachment* cobj = (spine4::ClippingAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ClippingAttachment_getEndSlot : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::SlotData* result = cobj->getEndSlot();
        ok &= native_ptr_to_rooted_seval<spine4::SlotData>((spine4::SlotData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ClippingAttachment_getEndSlot : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ClippingAttachment_getEndSlot)

static bool js_cocos2dx_spine4_ClippingAttachment_getColor(se::State& s)
{
    spine4::ClippingAttachment* cobj = (spine4::ClippingAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ClippingAttachment_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ClippingAttachment_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ClippingAttachment_getColor)


extern se::Object* __jsb_spine4_VertexAttachment_proto;


bool js_register_cocos2dx_spine4_ClippingAttachment(se::Object* obj)
{
    auto cls = se::Class::create("ClippingAttachment", obj, __jsb_spine4_VertexAttachment_proto, nullptr);

    cls->defineFunction("setEndSlot", _SE(js_cocos2dx_spine4_ClippingAttachment_setEndSlot));
    cls->defineFunction("copy", _SE(js_cocos2dx_spine4_ClippingAttachment_copy));
    cls->defineFunction("getEndSlot", _SE(js_cocos2dx_spine4_ClippingAttachment_getEndSlot));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_ClippingAttachment_getColor));
    cls->install();
    JSBClassType::registerClass<spine4::ClippingAttachment>(cls);

    __jsb_spine4_ClippingAttachment_proto = cls->getProto();
    __jsb_spine4_ClippingAttachment_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_CurveTimeline_proto = nullptr;
se::Class* __jsb_spine4_CurveTimeline_class = nullptr;
se::Object* __jsb_spine4_CurveTimeline1_proto = nullptr;
se::Object* __jsb_spine4_CurveTimeline2_proto = nullptr;

static bool js_cocos2dx_spine4_CurveTimeline_setBezier(se::State& s)
{
    spine4::CurveTimeline* cobj = (spine4::CurveTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_CurveTimeline_setBezier : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 11) {
        size_t arg0 = 0;
        size_t arg1 = 0;
        float arg2 = 0;
        float arg3 = 0;
        float arg4 = 0;
        float arg5 = 0;
        float arg6 = 0;
        float arg7 = 0;
        float arg8 = 0;
        float arg9 = 0;
        float arg10 = 0;
        ok &= seval_to_size(args[0], &arg0);
        ok &= seval_to_size(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        ok &= seval_to_float(args[4], &arg4);
        ok &= seval_to_float(args[5], &arg5);
        ok &= seval_to_float(args[6], &arg6);
        ok &= seval_to_float(args[7], &arg7);
        ok &= seval_to_float(args[8], &arg8);
        ok &= seval_to_float(args[9], &arg9);
        ok &= seval_to_float(args[10], &arg10);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_CurveTimeline_setBezier : Error processing arguments");
        cobj->setBezier(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 11);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_CurveTimeline_setBezier)

static bool js_cocos2dx_spine4_CurveTimeline_setLinear(se::State& s)
{
    spine4::CurveTimeline* cobj = (spine4::CurveTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_CurveTimeline_setLinear : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        size_t arg0 = 0;
        ok &= seval_to_size(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_CurveTimeline_setLinear : Error processing arguments");
        cobj->setLinear(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_CurveTimeline_setLinear)

static bool js_cocos2dx_spine4_CurveTimeline_setStepped(se::State& s)
{
    spine4::CurveTimeline* cobj = (spine4::CurveTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_CurveTimeline_setStepped : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        size_t arg0 = 0;
        ok &= seval_to_size(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_CurveTimeline_setStepped : Error processing arguments");
        cobj->setStepped(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_CurveTimeline_setStepped)

static bool js_cocos2dx_spine4_CurveTimeline_getCurves(se::State& s)
{
    spine4::CurveTimeline* cobj = (spine4::CurveTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_CurveTimeline_getCurves : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getCurves();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_CurveTimeline_getCurves : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_CurveTimeline_getCurves)

static bool js_cocos2dx_spine4_CurveTimeline_getBezierValue(se::State& s)
{
    spine4::CurveTimeline* cobj = (spine4::CurveTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_CurveTimeline_getBezierValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        float arg0 = 0;
        size_t arg1 = 0;
        size_t arg2 = 0;
        size_t arg3 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_size(args[1], &arg1);
        ok &= seval_to_size(args[2], &arg2);
        ok &= seval_to_size(args[3], &arg3);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_CurveTimeline_getBezierValue : Error processing arguments");
        float result = cobj->getBezierValue(arg0, arg1, arg2, arg3);
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_CurveTimeline_getBezierValue : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_CurveTimeline_getBezierValue)


extern se::Object* __jsb_spine4_Timeline_proto;


bool js_register_cocos2dx_spine4_CurveTimeline(se::Object* obj)
{
    auto cls = se::Class::create("CurveTimeline", obj, __jsb_spine4_Timeline_proto, nullptr);

    cls->defineFunction("setBezier", _SE(js_cocos2dx_spine4_CurveTimeline_setBezier));
    cls->defineFunction("setLinear", _SE(js_cocos2dx_spine4_CurveTimeline_setLinear));
    cls->defineFunction("setStepped", _SE(js_cocos2dx_spine4_CurveTimeline_setStepped));
    cls->defineFunction("getCurves", _SE(js_cocos2dx_spine4_CurveTimeline_getCurves));
    cls->defineFunction("getBezierValue", _SE(js_cocos2dx_spine4_CurveTimeline_getBezierValue));
    cls->install();
    JSBClassType::registerClass<spine4::CurveTimeline>(cls);

    __jsb_spine4_CurveTimeline_proto = cls->getProto();
    __jsb_spine4_CurveTimeline1_proto = __jsb_spine4_CurveTimeline_proto;
    __jsb_spine4_CurveTimeline2_proto = __jsb_spine4_CurveTimeline_proto;
    __jsb_spine4_CurveTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_ConstraintData_proto = nullptr;
se::Class* __jsb_spine4_ConstraintData_class = nullptr;

static bool js_cocos2dx_spine4_ConstraintData_setSkinRequired(se::State& s)
{
    spine4::ConstraintData* cobj = (spine4::ConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ConstraintData_setSkinRequired : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ConstraintData_setSkinRequired : Error processing arguments");
        cobj->setSkinRequired(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ConstraintData_setSkinRequired)

static bool js_cocos2dx_spine4_ConstraintData_getName(se::State& s)
{
    spine4::ConstraintData* cobj = (spine4::ConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ConstraintData_getName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ConstraintData_getName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ConstraintData_getName)

static bool js_cocos2dx_spine4_ConstraintData_setOrder(se::State& s)
{
    spine4::ConstraintData* cobj = (spine4::ConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ConstraintData_setOrder : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        size_t arg0 = 0;
        ok &= seval_to_size(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ConstraintData_setOrder : Error processing arguments");
        cobj->setOrder(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ConstraintData_setOrder)

static bool js_cocos2dx_spine4_ConstraintData_getOrder(se::State& s)
{
    spine4::ConstraintData* cobj = (spine4::ConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ConstraintData_getOrder : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        size_t result = cobj->getOrder();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ConstraintData_getOrder : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ConstraintData_getOrder)

static bool js_cocos2dx_spine4_ConstraintData_getRTTI(se::State& s)
{
    spine4::ConstraintData* cobj = (spine4::ConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ConstraintData_getRTTI : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::RTTI& result = cobj->getRTTI();
        ok &= native_ptr_to_seval<spine4::RTTI&>((spine4::RTTI&)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ConstraintData_getRTTI : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ConstraintData_getRTTI)

static bool js_cocos2dx_spine4_ConstraintData_isSkinRequired(se::State& s)
{
    spine4::ConstraintData* cobj = (spine4::ConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ConstraintData_isSkinRequired : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isSkinRequired();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ConstraintData_isSkinRequired : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ConstraintData_isSkinRequired)




bool js_register_cocos2dx_spine4_ConstraintData(se::Object* obj)
{
    auto cls = se::Class::create("ConstraintData", obj, nullptr, nullptr);

    cls->defineFunction("setSkinRequired", _SE(js_cocos2dx_spine4_ConstraintData_setSkinRequired));
    cls->defineFunction("getName", _SE(js_cocos2dx_spine4_ConstraintData_getName));
    cls->defineFunction("setOrder", _SE(js_cocos2dx_spine4_ConstraintData_setOrder));
    cls->defineFunction("getOrder", _SE(js_cocos2dx_spine4_ConstraintData_getOrder));
    cls->defineFunction("getRTTI", _SE(js_cocos2dx_spine4_ConstraintData_getRTTI));
    cls->defineFunction("isSkinRequired", _SE(js_cocos2dx_spine4_ConstraintData_isSkinRequired));
    cls->install();
    JSBClassType::registerClass<spine4::ConstraintData>(cls);

    __jsb_spine4_ConstraintData_proto = cls->getProto();
    __jsb_spine4_ConstraintData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_DeformTimeline_proto = nullptr;
se::Class* __jsb_spine4_DeformTimeline_class = nullptr;

static bool js_cocos2dx_spine4_DeformTimeline_setBezier(se::State& s)
{
    spine4::DeformTimeline* cobj = (spine4::DeformTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_DeformTimeline_setBezier : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 11) {
        size_t arg0 = 0;
        size_t arg1 = 0;
        float arg2 = 0;
        float arg3 = 0;
        float arg4 = 0;
        float arg5 = 0;
        float arg6 = 0;
        float arg7 = 0;
        float arg8 = 0;
        float arg9 = 0;
        float arg10 = 0;
        ok &= seval_to_size(args[0], &arg0);
        ok &= seval_to_size(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        ok &= seval_to_float(args[4], &arg4);
        ok &= seval_to_float(args[5], &arg5);
        ok &= seval_to_float(args[6], &arg6);
        ok &= seval_to_float(args[7], &arg7);
        ok &= seval_to_float(args[8], &arg8);
        ok &= seval_to_float(args[9], &arg9);
        ok &= seval_to_float(args[10], &arg10);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_DeformTimeline_setBezier : Error processing arguments");
        cobj->setBezier(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 11);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_DeformTimeline_setBezier)

static bool js_cocos2dx_spine4_DeformTimeline_setSlotIndex(se::State& s)
{
    spine4::DeformTimeline* cobj = (spine4::DeformTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_DeformTimeline_setSlotIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_DeformTimeline_setSlotIndex : Error processing arguments");
        cobj->setSlotIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_DeformTimeline_setSlotIndex)

static bool js_cocos2dx_spine4_DeformTimeline_getSlotIndex(se::State& s)
{
    spine4::DeformTimeline* cobj = (spine4::DeformTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_DeformTimeline_getSlotIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getSlotIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_DeformTimeline_getSlotIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_DeformTimeline_getSlotIndex)

static bool js_cocos2dx_spine4_DeformTimeline_getAttachment(se::State& s)
{
    spine4::DeformTimeline* cobj = (spine4::DeformTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_DeformTimeline_getAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::VertexAttachment* result = cobj->getAttachment();
        ok &= native_ptr_to_rooted_seval<spine4::VertexAttachment>((spine4::VertexAttachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_DeformTimeline_getAttachment : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_DeformTimeline_getAttachment)

static bool js_cocos2dx_spine4_DeformTimeline_setAttachment(se::State& s)
{
    spine4::DeformTimeline* cobj = (spine4::DeformTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_DeformTimeline_setAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::VertexAttachment* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_DeformTimeline_setAttachment : Error processing arguments");
        cobj->setAttachment(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_DeformTimeline_setAttachment)

static bool js_cocos2dx_spine4_DeformTimeline_getCurvePercent(se::State& s)
{
    spine4::DeformTimeline* cobj = (spine4::DeformTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_DeformTimeline_getCurvePercent : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        float arg0 = 0;
        int arg1 = 0;
        ok &= seval_to_float(args[0], &arg0);
        do { int32_t tmp = 0; ok &= seval_to_int32(args[1], &tmp); arg1 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_DeformTimeline_getCurvePercent : Error processing arguments");
        float result = cobj->getCurvePercent(arg0, arg1);
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_DeformTimeline_getCurvePercent : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_DeformTimeline_getCurvePercent)


extern se::Object* __jsb_spine4_CurveTimeline_proto;


bool js_register_cocos2dx_spine4_DeformTimeline(se::Object* obj)
{
    auto cls = se::Class::create("DeformTimeline", obj, __jsb_spine4_CurveTimeline_proto, nullptr);

    cls->defineFunction("setBezier", _SE(js_cocos2dx_spine4_DeformTimeline_setBezier));
    cls->defineFunction("setSlotIndex", _SE(js_cocos2dx_spine4_DeformTimeline_setSlotIndex));
    cls->defineFunction("getSlotIndex", _SE(js_cocos2dx_spine4_DeformTimeline_getSlotIndex));
    cls->defineFunction("getAttachment", _SE(js_cocos2dx_spine4_DeformTimeline_getAttachment));
    cls->defineFunction("setAttachment", _SE(js_cocos2dx_spine4_DeformTimeline_setAttachment));
    cls->defineFunction("getCurvePercent", _SE(js_cocos2dx_spine4_DeformTimeline_getCurvePercent));
    cls->install();
    JSBClassType::registerClass<spine4::DeformTimeline>(cls);

    __jsb_spine4_DeformTimeline_proto = cls->getProto();
    __jsb_spine4_DeformTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_DrawOrderTimeline_proto = nullptr;
se::Class* __jsb_spine4_DrawOrderTimeline_class = nullptr;


extern se::Object* __jsb_spine4_Timeline_proto;


bool js_register_cocos2dx_spine4_DrawOrderTimeline(se::Object* obj)
{
    auto cls = se::Class::create("DrawOrderTimeline", obj, __jsb_spine4_Timeline_proto, nullptr);

    cls->install();
    JSBClassType::registerClass<spine4::DrawOrderTimeline>(cls);

    __jsb_spine4_DrawOrderTimeline_proto = cls->getProto();
    __jsb_spine4_DrawOrderTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Event_proto = nullptr;
se::Class* __jsb_spine4_Event_class = nullptr;

static bool js_cocos2dx_spine4_Event_getFloatValue(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_getFloatValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getFloatValue();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_getFloatValue : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_getFloatValue)

static bool js_cocos2dx_spine4_Event_getIntValue(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_getIntValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getIntValue();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_getIntValue : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_getIntValue)

static bool js_cocos2dx_spine4_Event_getStringValue(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_getStringValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getStringValue();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_getStringValue : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_getStringValue)

static bool js_cocos2dx_spine4_Event_getTime(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_getTime : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTime();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_getTime : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_getTime)

static bool js_cocos2dx_spine4_Event_getBalance(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_getBalance : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getBalance();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_getBalance : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_getBalance)

static bool js_cocos2dx_spine4_Event_setFloatValue(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_setFloatValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_setFloatValue : Error processing arguments");
        cobj->setFloatValue(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_setFloatValue)

static bool js_cocos2dx_spine4_Event_setIntValue(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_setIntValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_setIntValue : Error processing arguments");
        cobj->setIntValue(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_setIntValue)

static bool js_cocos2dx_spine4_Event_getVolume(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_getVolume : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getVolume();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_getVolume : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_getVolume)

static bool js_cocos2dx_spine4_Event_setBalance(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_setBalance : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_setBalance : Error processing arguments");
        cobj->setBalance(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_setBalance)

static bool js_cocos2dx_spine4_Event_getData(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_getData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::EventData& result = cobj->getData();
        ok &= native_ptr_to_rooted_seval<spine4::EventData>((spine4::EventData*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_getData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_getData)

static bool js_cocos2dx_spine4_Event_setStringValue(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_setStringValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_setStringValue : Error processing arguments");
        cobj->setStringValue(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_setStringValue)

static bool js_cocos2dx_spine4_Event_setVolume(se::State& s)
{
    spine4::Event* cobj = (spine4::Event*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Event_setVolume : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Event_setVolume : Error processing arguments");
        cobj->setVolume(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Event_setVolume)




bool js_register_cocos2dx_spine4_Event(se::Object* obj)
{
    auto cls = se::Class::create("Event", obj, nullptr, nullptr);

    cls->defineFunction("getFloatValue", _SE(js_cocos2dx_spine4_Event_getFloatValue));
    cls->defineFunction("getIntValue", _SE(js_cocos2dx_spine4_Event_getIntValue));
    cls->defineFunction("getStringValue", _SE(js_cocos2dx_spine4_Event_getStringValue));
    cls->defineFunction("getTime", _SE(js_cocos2dx_spine4_Event_getTime));
    cls->defineFunction("getBalance", _SE(js_cocos2dx_spine4_Event_getBalance));
    cls->defineFunction("setFloatValue", _SE(js_cocos2dx_spine4_Event_setFloatValue));
    cls->defineFunction("setIntValue", _SE(js_cocos2dx_spine4_Event_setIntValue));
    cls->defineFunction("getVolume", _SE(js_cocos2dx_spine4_Event_getVolume));
    cls->defineFunction("setBalance", _SE(js_cocos2dx_spine4_Event_setBalance));
    cls->defineFunction("getData", _SE(js_cocos2dx_spine4_Event_getData));
    cls->defineFunction("setStringValue", _SE(js_cocos2dx_spine4_Event_setStringValue));
    cls->defineFunction("setVolume", _SE(js_cocos2dx_spine4_Event_setVolume));
    cls->install();
    JSBClassType::registerClass<spine4::Event>(cls);

    __jsb_spine4_Event_proto = cls->getProto();
    __jsb_spine4_Event_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_EventData_proto = nullptr;
se::Class* __jsb_spine4_EventData_class = nullptr;

static bool js_cocos2dx_spine4_EventData_getAudioPath(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_getAudioPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getAudioPath();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_getAudioPath : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_getAudioPath)

static bool js_cocos2dx_spine4_EventData_getIntValue(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_getIntValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getIntValue();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_getIntValue : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_getIntValue)

static bool js_cocos2dx_spine4_EventData_getStringValue(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_getStringValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getStringValue();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_getStringValue : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_getStringValue)

static bool js_cocos2dx_spine4_EventData_getFloatValue(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_getFloatValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getFloatValue();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_getFloatValue : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_getFloatValue)

static bool js_cocos2dx_spine4_EventData_getName(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_getName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_getName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_getName)

static bool js_cocos2dx_spine4_EventData_setFloatValue(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_setFloatValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_setFloatValue : Error processing arguments");
        cobj->setFloatValue(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_setFloatValue)

static bool js_cocos2dx_spine4_EventData_setIntValue(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_setIntValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_setIntValue : Error processing arguments");
        cobj->setIntValue(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_setIntValue)

static bool js_cocos2dx_spine4_EventData_getVolume(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_getVolume : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getVolume();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_getVolume : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_getVolume)

static bool js_cocos2dx_spine4_EventData_setBalance(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_setBalance : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_setBalance : Error processing arguments");
        cobj->setBalance(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_setBalance)

static bool js_cocos2dx_spine4_EventData_setVolume(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_setVolume : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_setVolume : Error processing arguments");
        cobj->setVolume(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_setVolume)

static bool js_cocos2dx_spine4_EventData_setStringValue(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_setStringValue : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_setStringValue : Error processing arguments");
        cobj->setStringValue(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_setStringValue)

static bool js_cocos2dx_spine4_EventData_getBalance(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_getBalance : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getBalance();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_getBalance : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_getBalance)

static bool js_cocos2dx_spine4_EventData_setAudioPath(se::State& s)
{
    spine4::EventData* cobj = (spine4::EventData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventData_setAudioPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventData_setAudioPath : Error processing arguments");
        cobj->setAudioPath(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventData_setAudioPath)




bool js_register_cocos2dx_spine4_EventData(se::Object* obj)
{
    auto cls = se::Class::create("EventData", obj, nullptr, nullptr);

    cls->defineFunction("getAudioPath", _SE(js_cocos2dx_spine4_EventData_getAudioPath));
    cls->defineFunction("getIntValue", _SE(js_cocos2dx_spine4_EventData_getIntValue));
    cls->defineFunction("getStringValue", _SE(js_cocos2dx_spine4_EventData_getStringValue));
    cls->defineFunction("getFloatValue", _SE(js_cocos2dx_spine4_EventData_getFloatValue));
    cls->defineFunction("getName", _SE(js_cocos2dx_spine4_EventData_getName));
    cls->defineFunction("setFloatValue", _SE(js_cocos2dx_spine4_EventData_setFloatValue));
    cls->defineFunction("setIntValue", _SE(js_cocos2dx_spine4_EventData_setIntValue));
    cls->defineFunction("getVolume", _SE(js_cocos2dx_spine4_EventData_getVolume));
    cls->defineFunction("setBalance", _SE(js_cocos2dx_spine4_EventData_setBalance));
    cls->defineFunction("setVolume", _SE(js_cocos2dx_spine4_EventData_setVolume));
    cls->defineFunction("setStringValue", _SE(js_cocos2dx_spine4_EventData_setStringValue));
    cls->defineFunction("getBalance", _SE(js_cocos2dx_spine4_EventData_getBalance));
    cls->defineFunction("setAudioPath", _SE(js_cocos2dx_spine4_EventData_setAudioPath));
    cls->install();
    JSBClassType::registerClass<spine4::EventData>(cls);

    __jsb_spine4_EventData_proto = cls->getProto();
    __jsb_spine4_EventData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_EventTimeline_proto = nullptr;
se::Class* __jsb_spine4_EventTimeline_class = nullptr;

static bool js_cocos2dx_spine4_EventTimeline_getEvents(se::State& s)
{
    spine4::EventTimeline* cobj = (spine4::EventTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventTimeline_getEvents : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Event *>& result = cobj->getEvents();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventTimeline_getEvents : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventTimeline_getEvents)

static bool js_cocos2dx_spine4_EventTimeline_setFrame(se::State& s)
{
    spine4::EventTimeline* cobj = (spine4::EventTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_EventTimeline_setFrame : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        size_t arg0 = 0;
        spine4::Event* arg1 = nullptr;
        ok &= seval_to_size(args[0], &arg0);
        ok &= seval_to_native_ptr(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_EventTimeline_setFrame : Error processing arguments");
        cobj->setFrame(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_EventTimeline_setFrame)


extern se::Object* __jsb_spine4_Timeline_proto;


bool js_register_cocos2dx_spine4_EventTimeline(se::Object* obj)
{
    auto cls = se::Class::create("EventTimeline", obj, __jsb_spine4_Timeline_proto, nullptr);

    cls->defineFunction("getEvents", _SE(js_cocos2dx_spine4_EventTimeline_getEvents));
    cls->defineFunction("setFrame", _SE(js_cocos2dx_spine4_EventTimeline_setFrame));
    cls->install();
    JSBClassType::registerClass<spine4::EventTimeline>(cls);

    __jsb_spine4_EventTimeline_proto = cls->getProto();
    __jsb_spine4_EventTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_IkConstraint_proto = nullptr;
se::Class* __jsb_spine4_IkConstraint_class = nullptr;

static bool js_cocos2dx_spine4_IkConstraint_getMix(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMix();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getMix : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getMix)

static bool js_cocos2dx_spine4_IkConstraint_setActive(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_setActive : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_setActive : Error processing arguments");
        cobj->setActive(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_setActive)

static bool js_cocos2dx_spine4_IkConstraint_getCompress(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getCompress : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getCompress();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getCompress : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getCompress)

static bool js_cocos2dx_spine4_IkConstraint_setStretch(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_setStretch : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_setStretch : Error processing arguments");
        cobj->setStretch(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_setStretch)

static bool js_cocos2dx_spine4_IkConstraint_getBones(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Bone *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getBones)

static bool js_cocos2dx_spine4_IkConstraint_setTarget(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_setTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Bone* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_setTarget : Error processing arguments");
        cobj->setTarget(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_setTarget)

static bool js_cocos2dx_spine4_IkConstraint_setBendDirection(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_setBendDirection : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_setBendDirection : Error processing arguments");
        cobj->setBendDirection(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_setBendDirection)

static bool js_cocos2dx_spine4_IkConstraint_update(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_update : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Physics arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_update : Error processing arguments");
        cobj->update(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_update)

static bool js_cocos2dx_spine4_IkConstraint_getTarget(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Bone* result = cobj->getTarget();
        ok &= native_ptr_to_rooted_seval<spine4::Bone>((spine4::Bone*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getTarget : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getTarget)

static bool js_cocos2dx_spine4_IkConstraint_setCompress(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_setCompress : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_setCompress : Error processing arguments");
        cobj->setCompress(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_setCompress)

static bool js_cocos2dx_spine4_IkConstraint_getBendDirection(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getBendDirection : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getBendDirection();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getBendDirection : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getBendDirection)

static bool js_cocos2dx_spine4_IkConstraint_getOrder(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getOrder : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getOrder();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getOrder : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getOrder)

static bool js_cocos2dx_spine4_IkConstraint_setToSetupPose(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_setToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_setToSetupPose)

static bool js_cocos2dx_spine4_IkConstraint_getSoftness(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getSoftness : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getSoftness();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getSoftness : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getSoftness)

static bool js_cocos2dx_spine4_IkConstraint_getStretch(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getStretch : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getStretch();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getStretch : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getStretch)

static bool js_cocos2dx_spine4_IkConstraint_setMix(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_setMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_setMix : Error processing arguments");
        cobj->setMix(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_setMix)

static bool js_cocos2dx_spine4_IkConstraint_getData(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_getData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::IkConstraintData& result = cobj->getData();
        ok &= native_ptr_to_rooted_seval<spine4::IkConstraintData>((spine4::IkConstraintData*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_getData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_getData)

static bool js_cocos2dx_spine4_IkConstraint_setSoftness(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_setSoftness : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_setSoftness : Error processing arguments");
        cobj->setSoftness(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_setSoftness)

static bool js_cocos2dx_spine4_IkConstraint_isActive(se::State& s)
{
    spine4::IkConstraint* cobj = (spine4::IkConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraint_isActive : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isActive();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraint_isActive : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraint_isActive)




bool js_register_cocos2dx_spine4_IkConstraint(se::Object* obj)
{
    auto cls = se::Class::create("IkConstraint", obj, nullptr, nullptr);

    cls->defineFunction("getMix", _SE(js_cocos2dx_spine4_IkConstraint_getMix));
    cls->defineFunction("setActive", _SE(js_cocos2dx_spine4_IkConstraint_setActive));
    cls->defineFunction("getCompress", _SE(js_cocos2dx_spine4_IkConstraint_getCompress));
    cls->defineFunction("setStretch", _SE(js_cocos2dx_spine4_IkConstraint_setStretch));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_IkConstraint_getBones));
    cls->defineFunction("setTarget", _SE(js_cocos2dx_spine4_IkConstraint_setTarget));
    cls->defineFunction("setBendDirection", _SE(js_cocos2dx_spine4_IkConstraint_setBendDirection));
    cls->defineFunction("update", _SE(js_cocos2dx_spine4_IkConstraint_update));
    cls->defineFunction("getTarget", _SE(js_cocos2dx_spine4_IkConstraint_getTarget));
    cls->defineFunction("setCompress", _SE(js_cocos2dx_spine4_IkConstraint_setCompress));
    cls->defineFunction("getBendDirection", _SE(js_cocos2dx_spine4_IkConstraint_getBendDirection));
    cls->defineFunction("getOrder", _SE(js_cocos2dx_spine4_IkConstraint_getOrder));
    cls->defineFunction("setToSetupPose", _SE(js_cocos2dx_spine4_IkConstraint_setToSetupPose));
    cls->defineFunction("getSoftness", _SE(js_cocos2dx_spine4_IkConstraint_getSoftness));
    cls->defineFunction("getStretch", _SE(js_cocos2dx_spine4_IkConstraint_getStretch));
    cls->defineFunction("setMix", _SE(js_cocos2dx_spine4_IkConstraint_setMix));
    cls->defineFunction("getData", _SE(js_cocos2dx_spine4_IkConstraint_getData));
    cls->defineFunction("setSoftness", _SE(js_cocos2dx_spine4_IkConstraint_setSoftness));
    cls->defineFunction("isActive", _SE(js_cocos2dx_spine4_IkConstraint_isActive));
    cls->install();
    JSBClassType::registerClass<spine4::IkConstraint>(cls);

    __jsb_spine4_IkConstraint_proto = cls->getProto();
    __jsb_spine4_IkConstraint_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_IkConstraintData_proto = nullptr;
se::Class* __jsb_spine4_IkConstraintData_class = nullptr;

static bool js_cocos2dx_spine4_IkConstraintData_getMix(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMix();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getMix : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getMix)

static bool js_cocos2dx_spine4_IkConstraintData_setUniform(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_setUniform : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_setUniform : Error processing arguments");
        cobj->setUniform(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_setUniform)

static bool js_cocos2dx_spine4_IkConstraintData_setStretch(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_setStretch : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_setStretch : Error processing arguments");
        cobj->setStretch(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_setStretch)

static bool js_cocos2dx_spine4_IkConstraintData_getUniform(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getUniform : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getUniform();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getUniform : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getUniform)

static bool js_cocos2dx_spine4_IkConstraintData_getBones(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::BoneData *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getBones)

static bool js_cocos2dx_spine4_IkConstraintData_setTarget(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_setTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::BoneData* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_setTarget : Error processing arguments");
        cobj->setTarget(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_setTarget)

static bool js_cocos2dx_spine4_IkConstraintData_getTarget(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::BoneData* result = cobj->getTarget();
        ok &= native_ptr_to_rooted_seval<spine4::BoneData>((spine4::BoneData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getTarget : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getTarget)

static bool js_cocos2dx_spine4_IkConstraintData_setCompress(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_setCompress : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_setCompress : Error processing arguments");
        cobj->setCompress(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_setCompress)

static bool js_cocos2dx_spine4_IkConstraintData_getBendDirection(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getBendDirection : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getBendDirection();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getBendDirection : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getBendDirection)

static bool js_cocos2dx_spine4_IkConstraintData_setBendDirection(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_setBendDirection : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_setBendDirection : Error processing arguments");
        cobj->setBendDirection(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_setBendDirection)

static bool js_cocos2dx_spine4_IkConstraintData_getSoftness(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getSoftness : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getSoftness();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getSoftness : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getSoftness)

static bool js_cocos2dx_spine4_IkConstraintData_getStretch(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getStretch : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getStretch();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getStretch : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getStretch)

static bool js_cocos2dx_spine4_IkConstraintData_getRTTI(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getRTTI : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::RTTI& result = cobj->getRTTI();
        ok &= native_ptr_to_seval<spine4::RTTI&>((spine4::RTTI&)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getRTTI : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getRTTI)

static bool js_cocos2dx_spine4_IkConstraintData_setMix(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_setMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_setMix : Error processing arguments");
        cobj->setMix(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_setMix)

static bool js_cocos2dx_spine4_IkConstraintData_getCompress(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_getCompress : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getCompress();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_getCompress : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_getCompress)

static bool js_cocos2dx_spine4_IkConstraintData_setSoftness(se::State& s)
{
    spine4::IkConstraintData* cobj = (spine4::IkConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintData_setSoftness : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintData_setSoftness : Error processing arguments");
        cobj->setSoftness(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintData_setSoftness)


extern se::Object* __jsb_spine4_ConstraintData_proto;


bool js_register_cocos2dx_spine4_IkConstraintData(se::Object* obj)
{
    auto cls = se::Class::create("IkConstraintData", obj, __jsb_spine4_ConstraintData_proto, nullptr);

    cls->defineFunction("getMix", _SE(js_cocos2dx_spine4_IkConstraintData_getMix));
    cls->defineFunction("setUniform", _SE(js_cocos2dx_spine4_IkConstraintData_setUniform));
    cls->defineFunction("setStretch", _SE(js_cocos2dx_spine4_IkConstraintData_setStretch));
    cls->defineFunction("getUniform", _SE(js_cocos2dx_spine4_IkConstraintData_getUniform));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_IkConstraintData_getBones));
    cls->defineFunction("setTarget", _SE(js_cocos2dx_spine4_IkConstraintData_setTarget));
    cls->defineFunction("getTarget", _SE(js_cocos2dx_spine4_IkConstraintData_getTarget));
    cls->defineFunction("setCompress", _SE(js_cocos2dx_spine4_IkConstraintData_setCompress));
    cls->defineFunction("getBendDirection", _SE(js_cocos2dx_spine4_IkConstraintData_getBendDirection));
    cls->defineFunction("setBendDirection", _SE(js_cocos2dx_spine4_IkConstraintData_setBendDirection));
    cls->defineFunction("getSoftness", _SE(js_cocos2dx_spine4_IkConstraintData_getSoftness));
    cls->defineFunction("getStretch", _SE(js_cocos2dx_spine4_IkConstraintData_getStretch));
    cls->defineFunction("getRTTI", _SE(js_cocos2dx_spine4_IkConstraintData_getRTTI));
    cls->defineFunction("setMix", _SE(js_cocos2dx_spine4_IkConstraintData_setMix));
    cls->defineFunction("getCompress", _SE(js_cocos2dx_spine4_IkConstraintData_getCompress));
    cls->defineFunction("setSoftness", _SE(js_cocos2dx_spine4_IkConstraintData_setSoftness));
    cls->install();
    JSBClassType::registerClass<spine4::IkConstraintData>(cls);

    __jsb_spine4_IkConstraintData_proto = cls->getProto();
    __jsb_spine4_IkConstraintData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_IkConstraintTimeline_proto = nullptr;
se::Class* __jsb_spine4_IkConstraintTimeline_class = nullptr;

static bool js_cocos2dx_spine4_IkConstraintTimeline_setIkConstraintIndex(se::State& s)
{
    spine4::IkConstraintTimeline* cobj = (spine4::IkConstraintTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintTimeline_setIkConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintTimeline_setIkConstraintIndex : Error processing arguments");
        cobj->setIkConstraintIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintTimeline_setIkConstraintIndex)

static bool js_cocos2dx_spine4_IkConstraintTimeline_getIkConstraintIndex(se::State& s)
{
    spine4::IkConstraintTimeline* cobj = (spine4::IkConstraintTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintTimeline_getIkConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getIkConstraintIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintTimeline_getIkConstraintIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintTimeline_getIkConstraintIndex)

static bool js_cocos2dx_spine4_IkConstraintTimeline_setFrame(se::State& s)
{
    spine4::IkConstraintTimeline* cobj = (spine4::IkConstraintTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_IkConstraintTimeline_setFrame : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 7) {
        int arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        float arg3 = 0;
        int arg4 = 0;
        bool arg5;
        bool arg6;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        do { int32_t tmp = 0; ok &= seval_to_int32(args[4], &tmp); arg4 = (int)tmp; } while(false);
        ok &= seval_to_boolean(args[5], &arg5);
        ok &= seval_to_boolean(args[6], &arg6);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_IkConstraintTimeline_setFrame : Error processing arguments");
        cobj->setFrame(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 7);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_IkConstraintTimeline_setFrame)


extern se::Object* __jsb_spine4_CurveTimeline_proto;


bool js_register_cocos2dx_spine4_IkConstraintTimeline(se::Object* obj)
{
    auto cls = se::Class::create("IkConstraintTimeline", obj, __jsb_spine4_CurveTimeline_proto, nullptr);

    cls->defineFunction("setIkConstraintIndex", _SE(js_cocos2dx_spine4_IkConstraintTimeline_setIkConstraintIndex));
    cls->defineFunction("getIkConstraintIndex", _SE(js_cocos2dx_spine4_IkConstraintTimeline_getIkConstraintIndex));
    cls->defineFunction("setFrame", _SE(js_cocos2dx_spine4_IkConstraintTimeline_setFrame));
    cls->install();
    JSBClassType::registerClass<spine4::IkConstraintTimeline>(cls);

    __jsb_spine4_IkConstraintTimeline_proto = cls->getProto();
    __jsb_spine4_IkConstraintTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_MeshAttachment_proto = nullptr;
se::Class* __jsb_spine4_MeshAttachment_class = nullptr;

static bool js_cocos2dx_spine4_MeshAttachment_getSequence(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getSequence : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Sequence* result = cobj->getSequence();
        ok &= native_ptr_to_seval<spine4::Sequence>((spine4::Sequence*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getSequence : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getSequence)

static bool js_cocos2dx_spine4_MeshAttachment_computeWorldVertices(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_computeWorldVertices : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 5) {
        spine4::Slot* arg0 = nullptr;
        size_t arg1 = 0;
        size_t arg2 = 0;
        float* arg3 = 0;
        size_t arg4 = 0;
        ok &= seval_to_native_ptr(args[0], &arg0);
        ok &= seval_to_size(args[1], &arg1);
        ok &= seval_to_size(args[2], &arg2);
        #pragma warning NO CONVERSION TO NATIVE FOR float*
        ok = false;
        ok &= seval_to_size(args[4], &arg4);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_computeWorldVertices : Error processing arguments");
        cobj->computeWorldVertices(*arg0, arg1, arg2, arg3, arg4);
        return true;
    }
    if (argc == 6) {
        spine4::Slot* arg0 = nullptr;
        size_t arg1 = 0;
        size_t arg2 = 0;
        float* arg3 = 0;
        size_t arg4 = 0;
        size_t arg5 = 0;
        ok &= seval_to_native_ptr(args[0], &arg0);
        ok &= seval_to_size(args[1], &arg1);
        ok &= seval_to_size(args[2], &arg2);
        #pragma warning NO CONVERSION TO NATIVE FOR float*
        ok = false;
        ok &= seval_to_size(args[4], &arg4);
        ok &= seval_to_size(args[5], &arg5);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_computeWorldVertices : Error processing arguments");
        cobj->computeWorldVertices(*arg0, arg1, arg2, arg3, arg4, arg5);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 6);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_computeWorldVertices)

static bool js_cocos2dx_spine4_MeshAttachment_getWidth(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getWidth : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWidth();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getWidth : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getWidth)

static bool js_cocos2dx_spine4_MeshAttachment_setParentMesh(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_setParentMesh : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::MeshAttachment* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_setParentMesh : Error processing arguments");
        cobj->setParentMesh(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_setParentMesh)

static bool js_cocos2dx_spine4_MeshAttachment_setWidth(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_setWidth : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_setWidth : Error processing arguments");
        cobj->setWidth(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_setWidth)

static bool js_cocos2dx_spine4_MeshAttachment_getUVs(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getUVs : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getUVs();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getUVs : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getUVs)

static bool js_cocos2dx_spine4_MeshAttachment_getHeight(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getHeight : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getHeight();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getHeight : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getHeight)

static bool js_cocos2dx_spine4_MeshAttachment_getPath(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getPath();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getPath : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getPath)

static bool js_cocos2dx_spine4_MeshAttachment_getEdges(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getEdges : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<unsigned short>& result = cobj->getEdges();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getEdges : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getEdges)

static bool js_cocos2dx_spine4_MeshAttachment_updateRegion(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_updateRegion : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->updateRegion();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_updateRegion)

static bool js_cocos2dx_spine4_MeshAttachment_setHullLength(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_setHullLength : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_setHullLength : Error processing arguments");
        cobj->setHullLength(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_setHullLength)

static bool js_cocos2dx_spine4_MeshAttachment_setRegion(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_setRegion : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::TextureRegion* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_setRegion : Error processing arguments");
        cobj->setRegion(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_setRegion)

static bool js_cocos2dx_spine4_MeshAttachment_getColor(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getColor)

static bool js_cocos2dx_spine4_MeshAttachment_setSequence(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_setSequence : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Sequence* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_setSequence : Error processing arguments");
        cobj->setSequence(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_setSequence)

static bool js_cocos2dx_spine4_MeshAttachment_copy(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_copy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->copy();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_copy : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_copy)

static bool js_cocos2dx_spine4_MeshAttachment_setPath(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_setPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_setPath : Error processing arguments");
        cobj->setPath(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_setPath)

static bool js_cocos2dx_spine4_MeshAttachment_setHeight(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_setHeight : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_setHeight : Error processing arguments");
        cobj->setHeight(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_setHeight)

static bool js_cocos2dx_spine4_MeshAttachment_newLinkedMesh(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_newLinkedMesh : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::MeshAttachment* result = cobj->newLinkedMesh();
        ok &= native_ptr_to_rooted_seval<spine4::MeshAttachment>((spine4::MeshAttachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_newLinkedMesh : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_newLinkedMesh)

static bool js_cocos2dx_spine4_MeshAttachment_getRegionUVs(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getRegionUVs : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getRegionUVs();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getRegionUVs : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getRegionUVs)

static bool js_cocos2dx_spine4_MeshAttachment_getRegion(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getRegion : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::TextureRegion* result = cobj->getRegion();
        ok &= native_ptr_to_seval<spine4::TextureRegion>((spine4::TextureRegion*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getRegion : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getRegion)

static bool js_cocos2dx_spine4_MeshAttachment_getHullLength(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getHullLength : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getHullLength();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getHullLength : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getHullLength)

static bool js_cocos2dx_spine4_MeshAttachment_getTriangles(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getTriangles : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<unsigned short>& result = cobj->getTriangles();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getTriangles : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getTriangles)

static bool js_cocos2dx_spine4_MeshAttachment_getParentMesh(se::State& s)
{
    spine4::MeshAttachment* cobj = (spine4::MeshAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_MeshAttachment_getParentMesh : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::MeshAttachment* result = cobj->getParentMesh();
        ok &= native_ptr_to_rooted_seval<spine4::MeshAttachment>((spine4::MeshAttachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_MeshAttachment_getParentMesh : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_MeshAttachment_getParentMesh)


extern se::Object* __jsb_spine4_VertexAttachment_proto;


bool js_register_cocos2dx_spine4_MeshAttachment(se::Object* obj)
{
    auto cls = se::Class::create("MeshAttachment", obj, __jsb_spine4_VertexAttachment_proto, nullptr);

    cls->defineFunction("getSequence", _SE(js_cocos2dx_spine4_MeshAttachment_getSequence));
    cls->defineFunction("computeWorldVertices", _SE(js_cocos2dx_spine4_MeshAttachment_computeWorldVertices));
    cls->defineFunction("getWidth", _SE(js_cocos2dx_spine4_MeshAttachment_getWidth));
    cls->defineFunction("setParentMesh", _SE(js_cocos2dx_spine4_MeshAttachment_setParentMesh));
    cls->defineFunction("setWidth", _SE(js_cocos2dx_spine4_MeshAttachment_setWidth));
    cls->defineFunction("getUVs", _SE(js_cocos2dx_spine4_MeshAttachment_getUVs));
    cls->defineFunction("getHeight", _SE(js_cocos2dx_spine4_MeshAttachment_getHeight));
    cls->defineFunction("getPath", _SE(js_cocos2dx_spine4_MeshAttachment_getPath));
    cls->defineFunction("getEdges", _SE(js_cocos2dx_spine4_MeshAttachment_getEdges));
    cls->defineFunction("updateRegion", _SE(js_cocos2dx_spine4_MeshAttachment_updateRegion));
    cls->defineFunction("setHullLength", _SE(js_cocos2dx_spine4_MeshAttachment_setHullLength));
    cls->defineFunction("setRegion", _SE(js_cocos2dx_spine4_MeshAttachment_setRegion));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_MeshAttachment_getColor));
    cls->defineFunction("setSequence", _SE(js_cocos2dx_spine4_MeshAttachment_setSequence));
    cls->defineFunction("copy", _SE(js_cocos2dx_spine4_MeshAttachment_copy));
    cls->defineFunction("setPath", _SE(js_cocos2dx_spine4_MeshAttachment_setPath));
    cls->defineFunction("setHeight", _SE(js_cocos2dx_spine4_MeshAttachment_setHeight));
    cls->defineFunction("newLinkedMesh", _SE(js_cocos2dx_spine4_MeshAttachment_newLinkedMesh));
    cls->defineFunction("getRegionUVs", _SE(js_cocos2dx_spine4_MeshAttachment_getRegionUVs));
    cls->defineFunction("getRegion", _SE(js_cocos2dx_spine4_MeshAttachment_getRegion));
    cls->defineFunction("getHullLength", _SE(js_cocos2dx_spine4_MeshAttachment_getHullLength));
    cls->defineFunction("getTriangles", _SE(js_cocos2dx_spine4_MeshAttachment_getTriangles));
    cls->defineFunction("getParentMesh", _SE(js_cocos2dx_spine4_MeshAttachment_getParentMesh));
    cls->install();
    JSBClassType::registerClass<spine4::MeshAttachment>(cls);

    __jsb_spine4_MeshAttachment_proto = cls->getProto();
    __jsb_spine4_MeshAttachment_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_PathAttachment_proto = nullptr;
se::Class* __jsb_spine4_PathAttachment_class = nullptr;

static bool js_cocos2dx_spine4_PathAttachment_isConstantSpeed(se::State& s)
{
    spine4::PathAttachment* cobj = (spine4::PathAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathAttachment_isConstantSpeed : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isConstantSpeed();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathAttachment_isConstantSpeed : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathAttachment_isConstantSpeed)

static bool js_cocos2dx_spine4_PathAttachment_getColor(se::State& s)
{
    spine4::PathAttachment* cobj = (spine4::PathAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathAttachment_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathAttachment_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathAttachment_getColor)

static bool js_cocos2dx_spine4_PathAttachment_isClosed(se::State& s)
{
    spine4::PathAttachment* cobj = (spine4::PathAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathAttachment_isClosed : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isClosed();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathAttachment_isClosed : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathAttachment_isClosed)

static bool js_cocos2dx_spine4_PathAttachment_setConstantSpeed(se::State& s)
{
    spine4::PathAttachment* cobj = (spine4::PathAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathAttachment_setConstantSpeed : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathAttachment_setConstantSpeed : Error processing arguments");
        cobj->setConstantSpeed(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathAttachment_setConstantSpeed)

static bool js_cocos2dx_spine4_PathAttachment_setClosed(se::State& s)
{
    spine4::PathAttachment* cobj = (spine4::PathAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathAttachment_setClosed : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathAttachment_setClosed : Error processing arguments");
        cobj->setClosed(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathAttachment_setClosed)

static bool js_cocos2dx_spine4_PathAttachment_getLengths(se::State& s)
{
    spine4::PathAttachment* cobj = (spine4::PathAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathAttachment_getLengths : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getLengths();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathAttachment_getLengths : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathAttachment_getLengths)

static bool js_cocos2dx_spine4_PathAttachment_copy(se::State& s)
{
    spine4::PathAttachment* cobj = (spine4::PathAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathAttachment_copy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->copy();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathAttachment_copy : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathAttachment_copy)


extern se::Object* __jsb_spine4_VertexAttachment_proto;


bool js_register_cocos2dx_spine4_PathAttachment(se::Object* obj)
{
    auto cls = se::Class::create("PathAttachment", obj, __jsb_spine4_VertexAttachment_proto, nullptr);

    cls->defineFunction("isConstantSpeed", _SE(js_cocos2dx_spine4_PathAttachment_isConstantSpeed));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_PathAttachment_getColor));
    cls->defineFunction("isClosed", _SE(js_cocos2dx_spine4_PathAttachment_isClosed));
    cls->defineFunction("setConstantSpeed", _SE(js_cocos2dx_spine4_PathAttachment_setConstantSpeed));
    cls->defineFunction("setClosed", _SE(js_cocos2dx_spine4_PathAttachment_setClosed));
    cls->defineFunction("getLengths", _SE(js_cocos2dx_spine4_PathAttachment_getLengths));
    cls->defineFunction("copy", _SE(js_cocos2dx_spine4_PathAttachment_copy));
    cls->install();
    JSBClassType::registerClass<spine4::PathAttachment>(cls);

    __jsb_spine4_PathAttachment_proto = cls->getProto();
    __jsb_spine4_PathAttachment_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_PathConstraint_proto = nullptr;
se::Class* __jsb_spine4_PathConstraint_class = nullptr;

static bool js_cocos2dx_spine4_PathConstraint_setSpacing(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_setSpacing : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_setSpacing : Error processing arguments");
        cobj->setSpacing(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_setSpacing)

static bool js_cocos2dx_spine4_PathConstraint_setToSetupPose(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_setToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_setToSetupPose)

static bool js_cocos2dx_spine4_PathConstraint_setMixY(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_setMixY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_setMixY : Error processing arguments");
        cobj->setMixY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_setMixY)

static bool js_cocos2dx_spine4_PathConstraint_getBones(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Bone *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getBones)

static bool js_cocos2dx_spine4_PathConstraint_setTarget(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_setTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Slot* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_setTarget : Error processing arguments");
        cobj->setTarget(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_setTarget)

static bool js_cocos2dx_spine4_PathConstraint_setMixRotate(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_setMixRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_setMixRotate : Error processing arguments");
        cobj->setMixRotate(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_setMixRotate)

static bool js_cocos2dx_spine4_PathConstraint_getMixY(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getMixY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getMixY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getMixY)

static bool js_cocos2dx_spine4_PathConstraint_update(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_update : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Physics arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_update : Error processing arguments");
        cobj->update(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_update)

static bool js_cocos2dx_spine4_PathConstraint_getTarget(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Slot* result = cobj->getTarget();
        ok &= native_ptr_to_rooted_seval<spine4::Slot>((spine4::Slot*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getTarget : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getTarget)

static bool js_cocos2dx_spine4_PathConstraint_getSpacing(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getSpacing : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getSpacing();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getSpacing : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getSpacing)

static bool js_cocos2dx_spine4_PathConstraint_getMixX(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getMixX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getMixX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getMixX)

static bool js_cocos2dx_spine4_PathConstraint_setMixX(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_setMixX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_setMixX : Error processing arguments");
        cobj->setMixX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_setMixX)

static bool js_cocos2dx_spine4_PathConstraint_getOrder(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getOrder : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getOrder();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getOrder : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getOrder)

static bool js_cocos2dx_spine4_PathConstraint_isActive(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_isActive : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isActive();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_isActive : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_isActive)

static bool js_cocos2dx_spine4_PathConstraint_setActive(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_setActive : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_setActive : Error processing arguments");
        cobj->setActive(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_setActive)

static bool js_cocos2dx_spine4_PathConstraint_getMixRotate(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getMixRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixRotate();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getMixRotate : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getMixRotate)

static bool js_cocos2dx_spine4_PathConstraint_setPosition(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_setPosition : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_setPosition : Error processing arguments");
        cobj->setPosition(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_setPosition)

static bool js_cocos2dx_spine4_PathConstraint_getData(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::PathConstraintData& result = cobj->getData();
        ok &= native_ptr_to_rooted_seval<spine4::PathConstraintData>((spine4::PathConstraintData*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getData)

static bool js_cocos2dx_spine4_PathConstraint_getPosition(se::State& s)
{
    spine4::PathConstraint* cobj = (spine4::PathConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraint_getPosition : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getPosition();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraint_getPosition : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraint_getPosition)




bool js_register_cocos2dx_spine4_PathConstraint(se::Object* obj)
{
    auto cls = se::Class::create("PathConstraint", obj, nullptr, nullptr);

    cls->defineFunction("setSpacing", _SE(js_cocos2dx_spine4_PathConstraint_setSpacing));
    cls->defineFunction("setToSetupPose", _SE(js_cocos2dx_spine4_PathConstraint_setToSetupPose));
    cls->defineFunction("setMixY", _SE(js_cocos2dx_spine4_PathConstraint_setMixY));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_PathConstraint_getBones));
    cls->defineFunction("setTarget", _SE(js_cocos2dx_spine4_PathConstraint_setTarget));
    cls->defineFunction("setMixRotate", _SE(js_cocos2dx_spine4_PathConstraint_setMixRotate));
    cls->defineFunction("getMixY", _SE(js_cocos2dx_spine4_PathConstraint_getMixY));
    cls->defineFunction("update", _SE(js_cocos2dx_spine4_PathConstraint_update));
    cls->defineFunction("getTarget", _SE(js_cocos2dx_spine4_PathConstraint_getTarget));
    cls->defineFunction("getSpacing", _SE(js_cocos2dx_spine4_PathConstraint_getSpacing));
    cls->defineFunction("getMixX", _SE(js_cocos2dx_spine4_PathConstraint_getMixX));
    cls->defineFunction("setMixX", _SE(js_cocos2dx_spine4_PathConstraint_setMixX));
    cls->defineFunction("getOrder", _SE(js_cocos2dx_spine4_PathConstraint_getOrder));
    cls->defineFunction("isActive", _SE(js_cocos2dx_spine4_PathConstraint_isActive));
    cls->defineFunction("setActive", _SE(js_cocos2dx_spine4_PathConstraint_setActive));
    cls->defineFunction("getMixRotate", _SE(js_cocos2dx_spine4_PathConstraint_getMixRotate));
    cls->defineFunction("setPosition", _SE(js_cocos2dx_spine4_PathConstraint_setPosition));
    cls->defineFunction("getData", _SE(js_cocos2dx_spine4_PathConstraint_getData));
    cls->defineFunction("getPosition", _SE(js_cocos2dx_spine4_PathConstraint_getPosition));
    cls->install();
    JSBClassType::registerClass<spine4::PathConstraint>(cls);

    __jsb_spine4_PathConstraint_proto = cls->getProto();
    __jsb_spine4_PathConstraint_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_PathConstraintData_proto = nullptr;
se::Class* __jsb_spine4_PathConstraintData_class = nullptr;

static bool js_cocos2dx_spine4_PathConstraintData_getOffsetRotation(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getOffsetRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getOffsetRotation();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getOffsetRotation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getOffsetRotation)

static bool js_cocos2dx_spine4_PathConstraintData_getPositionMode(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getPositionMode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = (unsigned int)cobj->getPositionMode();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getPositionMode : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getPositionMode)

static bool js_cocos2dx_spine4_PathConstraintData_setMixRotate(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setMixRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setMixRotate : Error processing arguments");
        cobj->setMixRotate(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setMixRotate)

static bool js_cocos2dx_spine4_PathConstraintData_getTarget(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::SlotData* result = cobj->getTarget();
        ok &= native_ptr_to_rooted_seval<spine4::SlotData>((spine4::SlotData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getTarget : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getTarget)

static bool js_cocos2dx_spine4_PathConstraintData_getSpacingMode(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getSpacingMode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = (unsigned int)cobj->getSpacingMode();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getSpacingMode : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getSpacingMode)

static bool js_cocos2dx_spine4_PathConstraintData_setSpacing(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setSpacing : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setSpacing : Error processing arguments");
        cobj->setSpacing(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setSpacing)

static bool js_cocos2dx_spine4_PathConstraintData_getRTTI(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getRTTI : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::RTTI& result = cobj->getRTTI();
        ok &= native_ptr_to_seval<spine4::RTTI&>((spine4::RTTI&)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getRTTI : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getRTTI)

static bool js_cocos2dx_spine4_PathConstraintData_setRotateMode(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setRotateMode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::RotateMode arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setRotateMode : Error processing arguments");
        cobj->setRotateMode(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setRotateMode)

static bool js_cocos2dx_spine4_PathConstraintData_setTarget(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::SlotData* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setTarget : Error processing arguments");
        cobj->setTarget(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setTarget)

static bool js_cocos2dx_spine4_PathConstraintData_getMixY(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getMixY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getMixY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getMixY)

static bool js_cocos2dx_spine4_PathConstraintData_getSpacing(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getSpacing : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getSpacing();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getSpacing : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getSpacing)

static bool js_cocos2dx_spine4_PathConstraintData_setOffsetRotation(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setOffsetRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setOffsetRotation : Error processing arguments");
        cobj->setOffsetRotation(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setOffsetRotation)

static bool js_cocos2dx_spine4_PathConstraintData_getMixX(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getMixX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getMixX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getMixX)

static bool js_cocos2dx_spine4_PathConstraintData_getRotateMode(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getRotateMode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = (unsigned int)cobj->getRotateMode();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getRotateMode : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getRotateMode)

static bool js_cocos2dx_spine4_PathConstraintData_getMixRotate(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getMixRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixRotate();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getMixRotate : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getMixRotate)

static bool js_cocos2dx_spine4_PathConstraintData_setPosition(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setPosition : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setPosition : Error processing arguments");
        cobj->setPosition(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setPosition)

static bool js_cocos2dx_spine4_PathConstraintData_getPosition(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getPosition : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getPosition();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getPosition : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getPosition)

static bool js_cocos2dx_spine4_PathConstraintData_setSpacingMode(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setSpacingMode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::SpacingMode arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setSpacingMode : Error processing arguments");
        cobj->setSpacingMode(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setSpacingMode)

static bool js_cocos2dx_spine4_PathConstraintData_setMixY(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setMixY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setMixY : Error processing arguments");
        cobj->setMixY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setMixY)

static bool js_cocos2dx_spine4_PathConstraintData_getBones(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::BoneData *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_getBones)

static bool js_cocos2dx_spine4_PathConstraintData_setMixX(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setMixX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setMixX : Error processing arguments");
        cobj->setMixX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setMixX)

static bool js_cocos2dx_spine4_PathConstraintData_setPositionMode(se::State& s)
{
    spine4::PathConstraintData* cobj = (spine4::PathConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintData_setPositionMode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::PositionMode arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintData_setPositionMode : Error processing arguments");
        cobj->setPositionMode(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintData_setPositionMode)


extern se::Object* __jsb_spine4_ConstraintData_proto;


bool js_register_cocos2dx_spine4_PathConstraintData(se::Object* obj)
{
    auto cls = se::Class::create("PathConstraintData", obj, __jsb_spine4_ConstraintData_proto, nullptr);

    cls->defineFunction("getOffsetRotation", _SE(js_cocos2dx_spine4_PathConstraintData_getOffsetRotation));
    cls->defineFunction("getPositionMode", _SE(js_cocos2dx_spine4_PathConstraintData_getPositionMode));
    cls->defineFunction("setMixRotate", _SE(js_cocos2dx_spine4_PathConstraintData_setMixRotate));
    cls->defineFunction("getTarget", _SE(js_cocos2dx_spine4_PathConstraintData_getTarget));
    cls->defineFunction("getSpacingMode", _SE(js_cocos2dx_spine4_PathConstraintData_getSpacingMode));
    cls->defineFunction("setSpacing", _SE(js_cocos2dx_spine4_PathConstraintData_setSpacing));
    cls->defineFunction("getRTTI", _SE(js_cocos2dx_spine4_PathConstraintData_getRTTI));
    cls->defineFunction("setRotateMode", _SE(js_cocos2dx_spine4_PathConstraintData_setRotateMode));
    cls->defineFunction("setTarget", _SE(js_cocos2dx_spine4_PathConstraintData_setTarget));
    cls->defineFunction("getMixY", _SE(js_cocos2dx_spine4_PathConstraintData_getMixY));
    cls->defineFunction("getSpacing", _SE(js_cocos2dx_spine4_PathConstraintData_getSpacing));
    cls->defineFunction("setOffsetRotation", _SE(js_cocos2dx_spine4_PathConstraintData_setOffsetRotation));
    cls->defineFunction("getMixX", _SE(js_cocos2dx_spine4_PathConstraintData_getMixX));
    cls->defineFunction("getRotateMode", _SE(js_cocos2dx_spine4_PathConstraintData_getRotateMode));
    cls->defineFunction("getMixRotate", _SE(js_cocos2dx_spine4_PathConstraintData_getMixRotate));
    cls->defineFunction("setPosition", _SE(js_cocos2dx_spine4_PathConstraintData_setPosition));
    cls->defineFunction("getPosition", _SE(js_cocos2dx_spine4_PathConstraintData_getPosition));
    cls->defineFunction("setSpacingMode", _SE(js_cocos2dx_spine4_PathConstraintData_setSpacingMode));
    cls->defineFunction("setMixY", _SE(js_cocos2dx_spine4_PathConstraintData_setMixY));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_PathConstraintData_getBones));
    cls->defineFunction("setMixX", _SE(js_cocos2dx_spine4_PathConstraintData_setMixX));
    cls->defineFunction("setPositionMode", _SE(js_cocos2dx_spine4_PathConstraintData_setPositionMode));
    cls->install();
    JSBClassType::registerClass<spine4::PathConstraintData>(cls);

    __jsb_spine4_PathConstraintData_proto = cls->getProto();
    __jsb_spine4_PathConstraintData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_PathConstraintMixTimeline_proto = nullptr;
se::Class* __jsb_spine4_PathConstraintMixTimeline_class = nullptr;

static bool js_cocos2dx_spine4_PathConstraintMixTimeline_getPathConstraintIndex(se::State& s)
{
    spine4::PathConstraintMixTimeline* cobj = (spine4::PathConstraintMixTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintMixTimeline_getPathConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getPathConstraintIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintMixTimeline_getPathConstraintIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintMixTimeline_getPathConstraintIndex)

static bool js_cocos2dx_spine4_PathConstraintMixTimeline_setPathConstraintIndex(se::State& s)
{
    spine4::PathConstraintMixTimeline* cobj = (spine4::PathConstraintMixTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintMixTimeline_setPathConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintMixTimeline_setPathConstraintIndex : Error processing arguments");
        cobj->setPathConstraintIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintMixTimeline_setPathConstraintIndex)

static bool js_cocos2dx_spine4_PathConstraintMixTimeline_setFrame(se::State& s)
{
    spine4::PathConstraintMixTimeline* cobj = (spine4::PathConstraintMixTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintMixTimeline_setFrame : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 5) {
        int arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        float arg3 = 0;
        float arg4 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        ok &= seval_to_float(args[4], &arg4);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintMixTimeline_setFrame : Error processing arguments");
        cobj->setFrame(arg0, arg1, arg2, arg3, arg4);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 5);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintMixTimeline_setFrame)


extern se::Object* __jsb_spine4_CurveTimeline_proto;


bool js_register_cocos2dx_spine4_PathConstraintMixTimeline(se::Object* obj)
{
    auto cls = se::Class::create("PathConstraintMixTimeline", obj, __jsb_spine4_CurveTimeline_proto, nullptr);

    cls->defineFunction("getPathConstraintIndex", _SE(js_cocos2dx_spine4_PathConstraintMixTimeline_getPathConstraintIndex));
    cls->defineFunction("setPathConstraintIndex", _SE(js_cocos2dx_spine4_PathConstraintMixTimeline_setPathConstraintIndex));
    cls->defineFunction("setFrame", _SE(js_cocos2dx_spine4_PathConstraintMixTimeline_setFrame));
    cls->install();
    JSBClassType::registerClass<spine4::PathConstraintMixTimeline>(cls);

    __jsb_spine4_PathConstraintMixTimeline_proto = cls->getProto();
    __jsb_spine4_PathConstraintMixTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_PathConstraintPositionTimeline_proto = nullptr;
se::Class* __jsb_spine4_PathConstraintPositionTimeline_class = nullptr;

static bool js_cocos2dx_spine4_PathConstraintPositionTimeline_getPathConstraintIndex(se::State& s)
{
    spine4::PathConstraintPositionTimeline* cobj = (spine4::PathConstraintPositionTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintPositionTimeline_getPathConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getPathConstraintIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintPositionTimeline_getPathConstraintIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintPositionTimeline_getPathConstraintIndex)

static bool js_cocos2dx_spine4_PathConstraintPositionTimeline_setPathConstraintIndex(se::State& s)
{
    spine4::PathConstraintPositionTimeline* cobj = (spine4::PathConstraintPositionTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintPositionTimeline_setPathConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintPositionTimeline_setPathConstraintIndex : Error processing arguments");
        cobj->setPathConstraintIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintPositionTimeline_setPathConstraintIndex)


extern se::Object* __jsb_spine4_CurveTimeline1_proto;


bool js_register_cocos2dx_spine4_PathConstraintPositionTimeline(se::Object* obj)
{
    auto cls = se::Class::create("PathConstraintPositionTimeline", obj, __jsb_spine4_CurveTimeline1_proto, nullptr);

    cls->defineFunction("getPathConstraintIndex", _SE(js_cocos2dx_spine4_PathConstraintPositionTimeline_getPathConstraintIndex));
    cls->defineFunction("setPathConstraintIndex", _SE(js_cocos2dx_spine4_PathConstraintPositionTimeline_setPathConstraintIndex));
    cls->install();
    JSBClassType::registerClass<spine4::PathConstraintPositionTimeline>(cls);

    __jsb_spine4_PathConstraintPositionTimeline_proto = cls->getProto();
    __jsb_spine4_PathConstraintPositionTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_PathConstraintSpacingTimeline_proto = nullptr;
se::Class* __jsb_spine4_PathConstraintSpacingTimeline_class = nullptr;

static bool js_cocos2dx_spine4_PathConstraintSpacingTimeline_getPathConstraintIndex(se::State& s)
{
    spine4::PathConstraintSpacingTimeline* cobj = (spine4::PathConstraintSpacingTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintSpacingTimeline_getPathConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getPathConstraintIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintSpacingTimeline_getPathConstraintIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintSpacingTimeline_getPathConstraintIndex)

static bool js_cocos2dx_spine4_PathConstraintSpacingTimeline_setPathConstraintIndex(se::State& s)
{
    spine4::PathConstraintSpacingTimeline* cobj = (spine4::PathConstraintSpacingTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PathConstraintSpacingTimeline_setPathConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PathConstraintSpacingTimeline_setPathConstraintIndex : Error processing arguments");
        cobj->setPathConstraintIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PathConstraintSpacingTimeline_setPathConstraintIndex)


extern se::Object* __jsb_spine4_CurveTimeline1_proto;


bool js_register_cocos2dx_spine4_PathConstraintSpacingTimeline(se::Object* obj)
{
    auto cls = se::Class::create("PathConstraintSpacingTimeline", obj, __jsb_spine4_CurveTimeline1_proto, nullptr);

    cls->defineFunction("getPathConstraintIndex", _SE(js_cocos2dx_spine4_PathConstraintSpacingTimeline_getPathConstraintIndex));
    cls->defineFunction("setPathConstraintIndex", _SE(js_cocos2dx_spine4_PathConstraintSpacingTimeline_setPathConstraintIndex));
    cls->install();
    JSBClassType::registerClass<spine4::PathConstraintSpacingTimeline>(cls);

    __jsb_spine4_PathConstraintSpacingTimeline_proto = cls->getProto();
    __jsb_spine4_PathConstraintSpacingTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_PointAttachment_proto = nullptr;
se::Class* __jsb_spine4_PointAttachment_class = nullptr;

static bool js_cocos2dx_spine4_PointAttachment_getColor(se::State& s)
{
    spine4::PointAttachment* cobj = (spine4::PointAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PointAttachment_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PointAttachment_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PointAttachment_getColor)

static bool js_cocos2dx_spine4_PointAttachment_getX(se::State& s)
{
    spine4::PointAttachment* cobj = (spine4::PointAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PointAttachment_getX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PointAttachment_getX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PointAttachment_getX)

static bool js_cocos2dx_spine4_PointAttachment_getY(se::State& s)
{
    spine4::PointAttachment* cobj = (spine4::PointAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PointAttachment_getY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PointAttachment_getY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PointAttachment_getY)

static bool js_cocos2dx_spine4_PointAttachment_getRotation(se::State& s)
{
    spine4::PointAttachment* cobj = (spine4::PointAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PointAttachment_getRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getRotation();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PointAttachment_getRotation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PointAttachment_getRotation)

static bool js_cocos2dx_spine4_PointAttachment_setRotation(se::State& s)
{
    spine4::PointAttachment* cobj = (spine4::PointAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PointAttachment_setRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PointAttachment_setRotation : Error processing arguments");
        cobj->setRotation(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PointAttachment_setRotation)

static bool js_cocos2dx_spine4_PointAttachment_copy(se::State& s)
{
    spine4::PointAttachment* cobj = (spine4::PointAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PointAttachment_copy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->copy();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PointAttachment_copy : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PointAttachment_copy)

static bool js_cocos2dx_spine4_PointAttachment_setX(se::State& s)
{
    spine4::PointAttachment* cobj = (spine4::PointAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PointAttachment_setX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PointAttachment_setX : Error processing arguments");
        cobj->setX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PointAttachment_setX)

static bool js_cocos2dx_spine4_PointAttachment_setY(se::State& s)
{
    spine4::PointAttachment* cobj = (spine4::PointAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_PointAttachment_setY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_PointAttachment_setY : Error processing arguments");
        cobj->setY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_PointAttachment_setY)


extern se::Object* __jsb_spine4_Attachment_proto;


bool js_register_cocos2dx_spine4_PointAttachment(se::Object* obj)
{
    auto cls = se::Class::create("PointAttachment", obj, __jsb_spine4_Attachment_proto, nullptr);

    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_PointAttachment_getColor));
    cls->defineFunction("getX", _SE(js_cocos2dx_spine4_PointAttachment_getX));
    cls->defineFunction("getY", _SE(js_cocos2dx_spine4_PointAttachment_getY));
    cls->defineFunction("getRotation", _SE(js_cocos2dx_spine4_PointAttachment_getRotation));
    cls->defineFunction("setRotation", _SE(js_cocos2dx_spine4_PointAttachment_setRotation));
    cls->defineFunction("copy", _SE(js_cocos2dx_spine4_PointAttachment_copy));
    cls->defineFunction("setX", _SE(js_cocos2dx_spine4_PointAttachment_setX));
    cls->defineFunction("setY", _SE(js_cocos2dx_spine4_PointAttachment_setY));
    cls->install();
    JSBClassType::registerClass<spine4::PointAttachment>(cls);

    __jsb_spine4_PointAttachment_proto = cls->getProto();
    __jsb_spine4_PointAttachment_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_RegionAttachment_proto = nullptr;
se::Class* __jsb_spine4_RegionAttachment_class = nullptr;

static bool js_cocos2dx_spine4_RegionAttachment_getSequence(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getSequence : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Sequence* result = cobj->getSequence();
        ok &= native_ptr_to_seval<spine4::Sequence>((spine4::Sequence*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getSequence : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getSequence)

static bool js_cocos2dx_spine4_RegionAttachment_getWidth(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getWidth : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWidth();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getWidth : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getWidth)

static bool js_cocos2dx_spine4_RegionAttachment_getY(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getY)

static bool js_cocos2dx_spine4_RegionAttachment_getRotation(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getRotation();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getRotation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getRotation)

static bool js_cocos2dx_spine4_RegionAttachment_setWidth(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setWidth : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setWidth : Error processing arguments");
        cobj->setWidth(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setWidth)

static bool js_cocos2dx_spine4_RegionAttachment_getUVs(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getUVs : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getUVs();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getUVs : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getUVs)

static bool js_cocos2dx_spine4_RegionAttachment_getScaleY(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getScaleY)

static bool js_cocos2dx_spine4_RegionAttachment_getScaleX(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getScaleX)

static bool js_cocos2dx_spine4_RegionAttachment_getHeight(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getHeight : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getHeight();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getHeight : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getHeight)

static bool js_cocos2dx_spine4_RegionAttachment_getPath(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getPath();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getPath : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getPath)

static bool js_cocos2dx_spine4_RegionAttachment_setRotation(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setRotation : Error processing arguments");
        cobj->setRotation(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setRotation)

static bool js_cocos2dx_spine4_RegionAttachment_setPath(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setPath : Error processing arguments");
        cobj->setPath(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setPath)

static bool js_cocos2dx_spine4_RegionAttachment_updateRegion(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_updateRegion : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->updateRegion();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_updateRegion)

static bool js_cocos2dx_spine4_RegionAttachment_setScaleY(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setScaleY : Error processing arguments");
        cobj->setScaleY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setScaleY)

static bool js_cocos2dx_spine4_RegionAttachment_setScaleX(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setScaleX : Error processing arguments");
        cobj->setScaleX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setScaleX)

static bool js_cocos2dx_spine4_RegionAttachment_setRegion(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setRegion : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::TextureRegion* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setRegion : Error processing arguments");
        cobj->setRegion(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setRegion)

static bool js_cocos2dx_spine4_RegionAttachment_getColor(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getColor)

static bool js_cocos2dx_spine4_RegionAttachment_getOffset(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getOffset : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<float>& result = cobj->getOffset();
        ok &= spine_Vector_T_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getOffset : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getOffset)

static bool js_cocos2dx_spine4_RegionAttachment_copy(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_copy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Attachment* result = cobj->copy();
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_copy : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_copy)

static bool js_cocos2dx_spine4_RegionAttachment_setX(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setX : Error processing arguments");
        cobj->setX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setX)

static bool js_cocos2dx_spine4_RegionAttachment_setY(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setY : Error processing arguments");
        cobj->setY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setY)

static bool js_cocos2dx_spine4_RegionAttachment_setHeight(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setHeight : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setHeight : Error processing arguments");
        cobj->setHeight(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setHeight)

static bool js_cocos2dx_spine4_RegionAttachment_getX(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getX)

static bool js_cocos2dx_spine4_RegionAttachment_setSequence(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_setSequence : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Sequence* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_setSequence : Error processing arguments");
        cobj->setSequence(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_setSequence)

static bool js_cocos2dx_spine4_RegionAttachment_getRegion(se::State& s)
{
    spine4::RegionAttachment* cobj = (spine4::RegionAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RegionAttachment_getRegion : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::TextureRegion* result = cobj->getRegion();
        ok &= native_ptr_to_seval<spine4::TextureRegion>((spine4::TextureRegion*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RegionAttachment_getRegion : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RegionAttachment_getRegion)


extern se::Object* __jsb_spine4_Attachment_proto;


bool js_register_cocos2dx_spine4_RegionAttachment(se::Object* obj)
{
    auto cls = se::Class::create("RegionAttachment", obj, __jsb_spine4_Attachment_proto, nullptr);

    cls->defineFunction("getSequence", _SE(js_cocos2dx_spine4_RegionAttachment_getSequence));
    cls->defineFunction("getWidth", _SE(js_cocos2dx_spine4_RegionAttachment_getWidth));
    cls->defineFunction("getY", _SE(js_cocos2dx_spine4_RegionAttachment_getY));
    cls->defineFunction("getRotation", _SE(js_cocos2dx_spine4_RegionAttachment_getRotation));
    cls->defineFunction("setWidth", _SE(js_cocos2dx_spine4_RegionAttachment_setWidth));
    cls->defineFunction("getUVs", _SE(js_cocos2dx_spine4_RegionAttachment_getUVs));
    cls->defineFunction("getScaleY", _SE(js_cocos2dx_spine4_RegionAttachment_getScaleY));
    cls->defineFunction("getScaleX", _SE(js_cocos2dx_spine4_RegionAttachment_getScaleX));
    cls->defineFunction("getHeight", _SE(js_cocos2dx_spine4_RegionAttachment_getHeight));
    cls->defineFunction("getPath", _SE(js_cocos2dx_spine4_RegionAttachment_getPath));
    cls->defineFunction("setRotation", _SE(js_cocos2dx_spine4_RegionAttachment_setRotation));
    cls->defineFunction("setPath", _SE(js_cocos2dx_spine4_RegionAttachment_setPath));
    cls->defineFunction("updateRegion", _SE(js_cocos2dx_spine4_RegionAttachment_updateRegion));
    cls->defineFunction("setScaleY", _SE(js_cocos2dx_spine4_RegionAttachment_setScaleY));
    cls->defineFunction("setScaleX", _SE(js_cocos2dx_spine4_RegionAttachment_setScaleX));
    cls->defineFunction("setRegion", _SE(js_cocos2dx_spine4_RegionAttachment_setRegion));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_RegionAttachment_getColor));
    cls->defineFunction("getOffset", _SE(js_cocos2dx_spine4_RegionAttachment_getOffset));
    cls->defineFunction("copy", _SE(js_cocos2dx_spine4_RegionAttachment_copy));
    cls->defineFunction("setX", _SE(js_cocos2dx_spine4_RegionAttachment_setX));
    cls->defineFunction("setY", _SE(js_cocos2dx_spine4_RegionAttachment_setY));
    cls->defineFunction("setHeight", _SE(js_cocos2dx_spine4_RegionAttachment_setHeight));
    cls->defineFunction("getX", _SE(js_cocos2dx_spine4_RegionAttachment_getX));
    cls->defineFunction("setSequence", _SE(js_cocos2dx_spine4_RegionAttachment_setSequence));
    cls->defineFunction("getRegion", _SE(js_cocos2dx_spine4_RegionAttachment_getRegion));
    cls->install();
    JSBClassType::registerClass<spine4::RegionAttachment>(cls);

    __jsb_spine4_RegionAttachment_proto = cls->getProto();
    __jsb_spine4_RegionAttachment_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_RotateTimeline_proto = nullptr;
se::Class* __jsb_spine4_RotateTimeline_class = nullptr;

static bool js_cocos2dx_spine4_RotateTimeline_setBoneIndex(se::State& s)
{
    spine4::RotateTimeline* cobj = (spine4::RotateTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RotateTimeline_setBoneIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RotateTimeline_setBoneIndex : Error processing arguments");
        cobj->setBoneIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RotateTimeline_setBoneIndex)

static bool js_cocos2dx_spine4_RotateTimeline_getBoneIndex(se::State& s)
{
    spine4::RotateTimeline* cobj = (spine4::RotateTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_RotateTimeline_getBoneIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getBoneIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_RotateTimeline_getBoneIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_RotateTimeline_getBoneIndex)


extern se::Object* __jsb_spine4_CurveTimeline1_proto;


bool js_register_cocos2dx_spine4_RotateTimeline(se::Object* obj)
{
    auto cls = se::Class::create("RotateTimeline", obj, __jsb_spine4_CurveTimeline1_proto, nullptr);

    cls->defineFunction("setBoneIndex", _SE(js_cocos2dx_spine4_RotateTimeline_setBoneIndex));
    cls->defineFunction("getBoneIndex", _SE(js_cocos2dx_spine4_RotateTimeline_getBoneIndex));
    cls->install();
    JSBClassType::registerClass<spine4::RotateTimeline>(cls);

    __jsb_spine4_RotateTimeline_proto = cls->getProto();
    __jsb_spine4_RotateTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_TranslateTimeline_proto = nullptr;
se::Class* __jsb_spine4_TranslateTimeline_class = nullptr;

static bool js_cocos2dx_spine4_TranslateTimeline_setBoneIndex(se::State& s)
{
    spine4::TranslateTimeline* cobj = (spine4::TranslateTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TranslateTimeline_setBoneIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TranslateTimeline_setBoneIndex : Error processing arguments");
        cobj->setBoneIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TranslateTimeline_setBoneIndex)

static bool js_cocos2dx_spine4_TranslateTimeline_getBoneIndex(se::State& s)
{
    spine4::TranslateTimeline* cobj = (spine4::TranslateTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TranslateTimeline_getBoneIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getBoneIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TranslateTimeline_getBoneIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TranslateTimeline_getBoneIndex)


extern se::Object* __jsb_spine4_CurveTimeline2_proto;


bool js_register_cocos2dx_spine4_TranslateTimeline(se::Object* obj)
{
    auto cls = se::Class::create("TranslateTimeline", obj, __jsb_spine4_CurveTimeline2_proto, nullptr);

    cls->defineFunction("setBoneIndex", _SE(js_cocos2dx_spine4_TranslateTimeline_setBoneIndex));
    cls->defineFunction("getBoneIndex", _SE(js_cocos2dx_spine4_TranslateTimeline_getBoneIndex));
    cls->install();
    JSBClassType::registerClass<spine4::TranslateTimeline>(cls);

    __jsb_spine4_TranslateTimeline_proto = cls->getProto();
    __jsb_spine4_TranslateTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_ScaleTimeline_proto = nullptr;
se::Class* __jsb_spine4_ScaleTimeline_class = nullptr;

static bool js_cocos2dx_spine4_ScaleTimeline_setBoneIndex(se::State& s)
{
    spine4::ScaleTimeline* cobj = (spine4::ScaleTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ScaleTimeline_setBoneIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ScaleTimeline_setBoneIndex : Error processing arguments");
        cobj->setBoneIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ScaleTimeline_setBoneIndex)

static bool js_cocos2dx_spine4_ScaleTimeline_getBoneIndex(se::State& s)
{
    spine4::ScaleTimeline* cobj = (spine4::ScaleTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ScaleTimeline_getBoneIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getBoneIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ScaleTimeline_getBoneIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ScaleTimeline_getBoneIndex)


extern se::Object* __jsb_spine4_CurveTimeline2_proto;


bool js_register_cocos2dx_spine4_ScaleTimeline(se::Object* obj)
{
    auto cls = se::Class::create("ScaleTimeline", obj, __jsb_spine4_CurveTimeline2_proto, nullptr);

    cls->defineFunction("setBoneIndex", _SE(js_cocos2dx_spine4_ScaleTimeline_setBoneIndex));
    cls->defineFunction("getBoneIndex", _SE(js_cocos2dx_spine4_ScaleTimeline_getBoneIndex));
    cls->install();
    JSBClassType::registerClass<spine4::ScaleTimeline>(cls);

    __jsb_spine4_ScaleTimeline_proto = cls->getProto();
    __jsb_spine4_ScaleTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_ShearTimeline_proto = nullptr;
se::Class* __jsb_spine4_ShearTimeline_class = nullptr;

static bool js_cocos2dx_spine4_ShearTimeline_setBoneIndex(se::State& s)
{
    spine4::ShearTimeline* cobj = (spine4::ShearTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ShearTimeline_setBoneIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ShearTimeline_setBoneIndex : Error processing arguments");
        cobj->setBoneIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ShearTimeline_setBoneIndex)

static bool js_cocos2dx_spine4_ShearTimeline_getBoneIndex(se::State& s)
{
    spine4::ShearTimeline* cobj = (spine4::ShearTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_ShearTimeline_getBoneIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getBoneIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_ShearTimeline_getBoneIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_ShearTimeline_getBoneIndex)


extern se::Object* __jsb_spine4_CurveTimeline2_proto;


bool js_register_cocos2dx_spine4_ShearTimeline(se::Object* obj)
{
    auto cls = se::Class::create("ShearTimeline", obj, __jsb_spine4_CurveTimeline2_proto, nullptr);

    cls->defineFunction("setBoneIndex", _SE(js_cocos2dx_spine4_ShearTimeline_setBoneIndex));
    cls->defineFunction("getBoneIndex", _SE(js_cocos2dx_spine4_ShearTimeline_getBoneIndex));
    cls->install();
    JSBClassType::registerClass<spine4::ShearTimeline>(cls);

    __jsb_spine4_ShearTimeline_proto = cls->getProto();
    __jsb_spine4_ShearTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Skeleton_proto = nullptr;
se::Class* __jsb_spine4_Skeleton_class = nullptr;

static bool js_cocos2dx_spine4_Skeleton_setToSetupPose(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setToSetupPose)

static bool js_cocos2dx_spine4_Skeleton_getSkin(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getSkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Skin* result = cobj->getSkin();
        ok &= native_ptr_to_rooted_seval<spine4::Skin>((spine4::Skin*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getSkin : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getSkin)

static bool js_cocos2dx_spine4_Skeleton_getX(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getX)

static bool js_cocos2dx_spine4_Skeleton_findTransformConstraint(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_findTransformConstraint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findTransformConstraint : Error processing arguments");
        spine4::TransformConstraint* result = cobj->findTransformConstraint(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::TransformConstraint>((spine4::TransformConstraint*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findTransformConstraint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_findTransformConstraint)

static bool js_cocos2dx_spine4_Skeleton_setAttachment(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::String arg0;
        spine4::String arg1;
        arg0 = args[0].toStringForce().c_str();
        arg1 = args[1].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_setAttachment : Error processing arguments");
        cobj->setAttachment(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setAttachment)

static bool js_cocos2dx_spine4_Skeleton_findIkConstraint(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_findIkConstraint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findIkConstraint : Error processing arguments");
        spine4::IkConstraint* result = cobj->findIkConstraint(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::IkConstraint>((spine4::IkConstraint*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findIkConstraint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_findIkConstraint)

static bool js_cocos2dx_spine4_Skeleton_findPhysicsConstraint(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_findPhysicsConstraint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findPhysicsConstraint : Error processing arguments");
        spine4::PhysicsConstraint* result = cobj->findPhysicsConstraint(arg0);
        ok &= native_ptr_to_seval<spine4::PhysicsConstraint>((spine4::PhysicsConstraint*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findPhysicsConstraint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_findPhysicsConstraint)

static bool js_cocos2dx_spine4_Skeleton_setBonesToSetupPose(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setBonesToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setBonesToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setBonesToSetupPose)

static bool js_cocos2dx_spine4_Skeleton_physicsTranslate(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_physicsTranslate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        float arg0 = 0;
        float arg1 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_physicsTranslate : Error processing arguments");
        cobj->physicsTranslate(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_physicsTranslate)

static bool js_cocos2dx_spine4_Skeleton_getScaleY(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getScaleY)

static bool js_cocos2dx_spine4_Skeleton_getScaleX(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getScaleX)

static bool js_cocos2dx_spine4_Skeleton_setX(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_setX : Error processing arguments");
        cobj->setX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setX)

static bool js_cocos2dx_spine4_Skeleton_setSlotsToSetupPose(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setSlotsToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setSlotsToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setSlotsToSetupPose)

static bool js_cocos2dx_spine4_Skeleton_getDrawOrder(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getDrawOrder : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Slot *>& result = cobj->getDrawOrder();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getDrawOrder : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getDrawOrder)

static bool js_cocos2dx_spine4_Skeleton_getTime(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getTime : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTime();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getTime : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getTime)

static bool js_cocos2dx_spine4_Skeleton_getColor(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getColor)

static bool js_cocos2dx_spine4_Skeleton_getIkConstraints(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getIkConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::IkConstraint *>& result = cobj->getIkConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getIkConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getIkConstraints)

static bool js_cocos2dx_spine4_Skeleton_getData(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::SkeletonData* result = cobj->getData();
        ok &= native_ptr_to_rooted_seval<spine4::SkeletonData>((spine4::SkeletonData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getData)

static bool js_cocos2dx_spine4_Skeleton_getUpdateCacheList(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getUpdateCacheList : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Updatable *>& result = cobj->getUpdateCacheList();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getUpdateCacheList : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getUpdateCacheList)

static bool js_cocos2dx_spine4_Skeleton_setScaleY(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_setScaleY : Error processing arguments");
        cobj->setScaleY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setScaleY)

static bool js_cocos2dx_spine4_Skeleton_setScaleX(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_setScaleX : Error processing arguments");
        cobj->setScaleX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setScaleX)

static bool js_cocos2dx_spine4_Skeleton_getPathConstraints(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getPathConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::PathConstraint *>& result = cobj->getPathConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getPathConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getPathConstraints)

static bool js_cocos2dx_spine4_Skeleton_getSlots(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getSlots : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Slot *>& result = cobj->getSlots();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getSlots : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getSlots)

static bool js_cocos2dx_spine4_Skeleton_printUpdateCache(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_printUpdateCache : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->printUpdateCache();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_printUpdateCache)

static bool js_cocos2dx_spine4_Skeleton_update(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_update : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_update : Error processing arguments");
        cobj->update(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_update)

static bool js_cocos2dx_spine4_Skeleton_getAttachment(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_Skeleton_getAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            int arg0 = 0;
            do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
            if (!ok) { ok = true; break; }
            spine4::String arg1;
            arg1 = args[1].toStringForce().c_str();
            if (!ok) { ok = true; break; }
            spine4::Attachment* result = cobj->getAttachment(arg0, arg1);
            ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getAttachment : Error processing arguments");
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            spine4::String arg0;
            arg0 = args[0].toStringForce().c_str();
            if (!ok) { ok = true; break; }
            spine4::String arg1;
            arg1 = args[1].toStringForce().c_str();
            if (!ok) { ok = true; break; }
            spine4::Attachment* result = cobj->getAttachment(arg0, arg1);
            ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getAttachment : Error processing arguments");
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getAttachment)

static bool js_cocos2dx_spine4_Skeleton_physicsRotate(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_physicsRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        float arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_physicsRotate : Error processing arguments");
        cobj->physicsRotate(arg0, arg1, arg2);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_physicsRotate)

static bool js_cocos2dx_spine4_Skeleton_setTime(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setTime : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_setTime : Error processing arguments");
        cobj->setTime(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setTime)

static bool js_cocos2dx_spine4_Skeleton_setPosition(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setPosition : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        float arg0 = 0;
        float arg1 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_setPosition : Error processing arguments");
        cobj->setPosition(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setPosition)

static bool js_cocos2dx_spine4_Skeleton_getPhysicsConstraints(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getPhysicsConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::PhysicsConstraint *>& result = cobj->getPhysicsConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getPhysicsConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getPhysicsConstraints)

static bool js_cocos2dx_spine4_Skeleton_setY(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_setY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_setY : Error processing arguments");
        cobj->setY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setY)

static bool js_cocos2dx_spine4_Skeleton_findBone(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_findBone : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findBone : Error processing arguments");
        spine4::Bone* result = cobj->findBone(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Bone>((spine4::Bone*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findBone : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_findBone)

static bool js_cocos2dx_spine4_Skeleton_getY(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getY)

static bool js_cocos2dx_spine4_Skeleton_getBones(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Bone *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getBones)

static bool js_cocos2dx_spine4_Skeleton_getRootBone(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getRootBone : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Bone* result = cobj->getRootBone();
        ok &= native_ptr_to_rooted_seval<spine4::Bone>((spine4::Bone*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getRootBone : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getRootBone)

static bool js_cocos2dx_spine4_Skeleton_updateCache(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_updateCache : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->updateCache();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_updateCache)

static bool js_cocos2dx_spine4_Skeleton_getTransformConstraints(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_getTransformConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::TransformConstraint *>& result = cobj->getTransformConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_getTransformConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_getTransformConstraints)

static bool js_cocos2dx_spine4_Skeleton_setSkin(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_Skeleton_setSkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            spine4::Skin* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            cobj->setSkin(arg0);
            return true;
        }
    } while(false);

    do {
        if (argc == 1) {
            spine4::String arg0;
            arg0 = args[0].toStringForce().c_str();
            if (!ok) { ok = true; break; }
            cobj->setSkin(arg0);
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_setSkin)

static bool js_cocos2dx_spine4_Skeleton_findSlot(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_findSlot : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findSlot : Error processing arguments");
        spine4::Slot* result = cobj->findSlot(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Slot>((spine4::Slot*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findSlot : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_findSlot)

static bool js_cocos2dx_spine4_Skeleton_updateWorldTransform(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_Skeleton_updateWorldTransform : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            spine4::Physics arg0;
            ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
            if (!ok) { ok = true; break; }
            spine4::Bone* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            cobj->updateWorldTransform(arg0, arg1);
            return true;
        }
    } while(false);

    do {
        if (argc == 1) {
            spine4::Physics arg0;
            ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
            if (!ok) { ok = true; break; }
            cobj->updateWorldTransform(arg0);
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_updateWorldTransform)

static bool js_cocos2dx_spine4_Skeleton_findPathConstraint(se::State& s)
{
    spine4::Skeleton* cobj = (spine4::Skeleton*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skeleton_findPathConstraint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findPathConstraint : Error processing arguments");
        spine4::PathConstraint* result = cobj->findPathConstraint(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::PathConstraint>((spine4::PathConstraint*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skeleton_findPathConstraint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skeleton_findPathConstraint)




bool js_register_cocos2dx_spine4_Skeleton(se::Object* obj)
{
    auto cls = se::Class::create("Skeleton", obj, nullptr, nullptr);

    cls->defineFunction("setToSetupPose", _SE(js_cocos2dx_spine4_Skeleton_setToSetupPose));
    cls->defineFunction("getSkin", _SE(js_cocos2dx_spine4_Skeleton_getSkin));
    cls->defineFunction("getX", _SE(js_cocos2dx_spine4_Skeleton_getX));
    cls->defineFunction("findTransformConstraint", _SE(js_cocos2dx_spine4_Skeleton_findTransformConstraint));
    cls->defineFunction("setAttachment", _SE(js_cocos2dx_spine4_Skeleton_setAttachment));
    cls->defineFunction("findIkConstraint", _SE(js_cocos2dx_spine4_Skeleton_findIkConstraint));
    cls->defineFunction("findPhysicsConstraint", _SE(js_cocos2dx_spine4_Skeleton_findPhysicsConstraint));
    cls->defineFunction("setBonesToSetupPose", _SE(js_cocos2dx_spine4_Skeleton_setBonesToSetupPose));
    cls->defineFunction("physicsTranslate", _SE(js_cocos2dx_spine4_Skeleton_physicsTranslate));
    cls->defineFunction("getScaleY", _SE(js_cocos2dx_spine4_Skeleton_getScaleY));
    cls->defineFunction("getScaleX", _SE(js_cocos2dx_spine4_Skeleton_getScaleX));
    cls->defineFunction("setX", _SE(js_cocos2dx_spine4_Skeleton_setX));
    cls->defineFunction("setSlotsToSetupPose", _SE(js_cocos2dx_spine4_Skeleton_setSlotsToSetupPose));
    cls->defineFunction("getDrawOrder", _SE(js_cocos2dx_spine4_Skeleton_getDrawOrder));
    cls->defineFunction("getTime", _SE(js_cocos2dx_spine4_Skeleton_getTime));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_Skeleton_getColor));
    cls->defineFunction("getIkConstraints", _SE(js_cocos2dx_spine4_Skeleton_getIkConstraints));
    cls->defineFunction("getData", _SE(js_cocos2dx_spine4_Skeleton_getData));
    cls->defineFunction("getUpdateCacheList", _SE(js_cocos2dx_spine4_Skeleton_getUpdateCacheList));
    cls->defineFunction("setScaleY", _SE(js_cocos2dx_spine4_Skeleton_setScaleY));
    cls->defineFunction("setScaleX", _SE(js_cocos2dx_spine4_Skeleton_setScaleX));
    cls->defineFunction("getPathConstraints", _SE(js_cocos2dx_spine4_Skeleton_getPathConstraints));
    cls->defineFunction("getSlots", _SE(js_cocos2dx_spine4_Skeleton_getSlots));
    cls->defineFunction("printUpdateCache", _SE(js_cocos2dx_spine4_Skeleton_printUpdateCache));
    cls->defineFunction("update", _SE(js_cocos2dx_spine4_Skeleton_update));
    cls->defineFunction("getAttachment", _SE(js_cocos2dx_spine4_Skeleton_getAttachment));
    cls->defineFunction("physicsRotate", _SE(js_cocos2dx_spine4_Skeleton_physicsRotate));
    cls->defineFunction("setTime", _SE(js_cocos2dx_spine4_Skeleton_setTime));
    cls->defineFunction("setPosition", _SE(js_cocos2dx_spine4_Skeleton_setPosition));
    cls->defineFunction("getPhysicsConstraints", _SE(js_cocos2dx_spine4_Skeleton_getPhysicsConstraints));
    cls->defineFunction("setY", _SE(js_cocos2dx_spine4_Skeleton_setY));
    cls->defineFunction("findBone", _SE(js_cocos2dx_spine4_Skeleton_findBone));
    cls->defineFunction("getY", _SE(js_cocos2dx_spine4_Skeleton_getY));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_Skeleton_getBones));
    cls->defineFunction("getRootBone", _SE(js_cocos2dx_spine4_Skeleton_getRootBone));
    cls->defineFunction("updateCache", _SE(js_cocos2dx_spine4_Skeleton_updateCache));
    cls->defineFunction("getTransformConstraints", _SE(js_cocos2dx_spine4_Skeleton_getTransformConstraints));
    cls->defineFunction("setSkin", _SE(js_cocos2dx_spine4_Skeleton_setSkin));
    cls->defineFunction("findSlot", _SE(js_cocos2dx_spine4_Skeleton_findSlot));
    cls->defineFunction("updateWorldTransform", _SE(js_cocos2dx_spine4_Skeleton_updateWorldTransform));
    cls->defineFunction("findPathConstraint", _SE(js_cocos2dx_spine4_Skeleton_findPathConstraint));
    cls->install();
    JSBClassType::registerClass<spine4::Skeleton>(cls);

    __jsb_spine4_Skeleton_proto = cls->getProto();
    __jsb_spine4_Skeleton_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SkeletonBounds_proto = nullptr;
se::Class* __jsb_spine4_SkeletonBounds_class = nullptr;

static bool js_cocos2dx_spine4_SkeletonBounds_getBoundingBoxes(se::State& s)
{
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonBounds_getBoundingBoxes : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::BoundingBoxAttachment *>& result = cobj->getBoundingBoxes();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_getBoundingBoxes : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_getBoundingBoxes)

static bool js_cocos2dx_spine4_SkeletonBounds_getHeight(se::State& s)
{
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonBounds_getHeight : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getHeight();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_getHeight : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_getHeight)

static bool js_cocos2dx_spine4_SkeletonBounds_aabbintersectsSegment(se::State& s)
{
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonBounds_aabbintersectsSegment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        float arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        float arg3 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_aabbintersectsSegment : Error processing arguments");
        bool result = cobj->aabbintersectsSegment(arg0, arg1, arg2, arg3);
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_aabbintersectsSegment : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_aabbintersectsSegment)

static bool js_cocos2dx_spine4_SkeletonBounds_getWidth(se::State& s)
{
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonBounds_getWidth : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWidth();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_getWidth : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_getWidth)

static bool js_cocos2dx_spine4_SkeletonBounds_aabbcontainsPoint(se::State& s)
{
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonBounds_aabbcontainsPoint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        float arg0 = 0;
        float arg1 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_aabbcontainsPoint : Error processing arguments");
        bool result = cobj->aabbcontainsPoint(arg0, arg1);
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_aabbcontainsPoint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_aabbcontainsPoint)

static bool js_cocos2dx_spine4_SkeletonBounds_intersectsSegment(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_SkeletonBounds_intersectsSegment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 5) {
            spine4::Polygon* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            float arg1 = 0;
            ok &= seval_to_float(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            float arg3 = 0;
            ok &= seval_to_float(args[3], &arg3);
            if (!ok) { ok = true; break; }
            float arg4 = 0;
            ok &= seval_to_float(args[4], &arg4);
            if (!ok) { ok = true; break; }
            bool result = cobj->intersectsSegment(arg0, arg1, arg2, arg3, arg4);
            ok &= boolean_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_intersectsSegment : Error processing arguments");
            return true;
        }
    } while(false);

    do {
        if (argc == 4) {
            float arg0 = 0;
            ok &= seval_to_float(args[0], &arg0);
            if (!ok) { ok = true; break; }
            float arg1 = 0;
            ok &= seval_to_float(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            float arg3 = 0;
            ok &= seval_to_float(args[3], &arg3);
            if (!ok) { ok = true; break; }
            spine4::BoundingBoxAttachment* result = cobj->intersectsSegment(arg0, arg1, arg2, arg3);
            ok &= native_ptr_to_rooted_seval<spine4::BoundingBoxAttachment>((spine4::BoundingBoxAttachment*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_intersectsSegment : Error processing arguments");
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_intersectsSegment)

static bool js_cocos2dx_spine4_SkeletonBounds_getBoundingBox(se::State& s)
{
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonBounds_getBoundingBox : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Polygon* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_getBoundingBox : Error processing arguments");
        spine4::BoundingBoxAttachment* result = cobj->getBoundingBox(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::BoundingBoxAttachment>((spine4::BoundingBoxAttachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_getBoundingBox : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_getBoundingBox)

static bool js_cocos2dx_spine4_SkeletonBounds_containsPoint(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_SkeletonBounds_containsPoint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            float arg0 = 0;
            ok &= seval_to_float(args[0], &arg0);
            if (!ok) { ok = true; break; }
            float arg1 = 0;
            ok &= seval_to_float(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::BoundingBoxAttachment* result = cobj->containsPoint(arg0, arg1);
            ok &= native_ptr_to_rooted_seval<spine4::BoundingBoxAttachment>((spine4::BoundingBoxAttachment*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_containsPoint : Error processing arguments");
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            spine4::Polygon* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            float arg1 = 0;
            ok &= seval_to_float(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            bool result = cobj->containsPoint(arg0, arg1, arg2);
            ok &= boolean_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_containsPoint : Error processing arguments");
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_containsPoint)

static bool js_cocos2dx_spine4_SkeletonBounds_getPolygon(se::State& s)
{
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonBounds_getPolygon : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::BoundingBoxAttachment* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_getPolygon : Error processing arguments");
        spine4::Polygon* result = cobj->getPolygon(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Polygon>((spine4::Polygon*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_getPolygon : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_getPolygon)

static bool js_cocos2dx_spine4_SkeletonBounds_getPolygons(se::State& s)
{
    spine4::SkeletonBounds* cobj = (spine4::SkeletonBounds*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonBounds_getPolygons : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Polygon *>& result = cobj->getPolygons();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonBounds_getPolygons : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonBounds_getPolygons)




bool js_register_cocos2dx_spine4_SkeletonBounds(se::Object* obj)
{
    auto cls = se::Class::create("SkeletonBounds", obj, nullptr, nullptr);

    cls->defineFunction("getBoundingBoxes", _SE(js_cocos2dx_spine4_SkeletonBounds_getBoundingBoxes));
    cls->defineFunction("getHeight", _SE(js_cocos2dx_spine4_SkeletonBounds_getHeight));
    cls->defineFunction("aabbintersectsSegment", _SE(js_cocos2dx_spine4_SkeletonBounds_aabbintersectsSegment));
    cls->defineFunction("getWidth", _SE(js_cocos2dx_spine4_SkeletonBounds_getWidth));
    cls->defineFunction("aabbcontainsPoint", _SE(js_cocos2dx_spine4_SkeletonBounds_aabbcontainsPoint));
    cls->defineFunction("intersectsSegment", _SE(js_cocos2dx_spine4_SkeletonBounds_intersectsSegment));
    cls->defineFunction("getBoundingBox", _SE(js_cocos2dx_spine4_SkeletonBounds_getBoundingBox));
    cls->defineFunction("containsPoint", _SE(js_cocos2dx_spine4_SkeletonBounds_containsPoint));
    cls->defineFunction("getPolygon", _SE(js_cocos2dx_spine4_SkeletonBounds_getPolygon));
    cls->defineFunction("getPolygons", _SE(js_cocos2dx_spine4_SkeletonBounds_getPolygons));
    cls->install();
    JSBClassType::registerClass<spine4::SkeletonBounds>(cls);

    __jsb_spine4_SkeletonBounds_proto = cls->getProto();
    __jsb_spine4_SkeletonBounds_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Polygon_proto = nullptr;
se::Class* __jsb_spine4_Polygon_class = nullptr;




bool js_register_cocos2dx_spine4_Polygon(se::Object* obj)
{
    auto cls = se::Class::create("Polygon", obj, nullptr, nullptr);

    cls->install();
    JSBClassType::registerClass<spine4::Polygon>(cls);

    __jsb_spine4_Polygon_proto = cls->getProto();
    __jsb_spine4_Polygon_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SkeletonData_proto = nullptr;
se::Class* __jsb_spine4_SkeletonData_class = nullptr;

static bool js_cocos2dx_spine4_SkeletonData_getReferenceScale(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getReferenceScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getReferenceScale();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getReferenceScale : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getReferenceScale)

static bool js_cocos2dx_spine4_SkeletonData_findEvent(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findEvent : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findEvent : Error processing arguments");
        spine4::EventData* result = cobj->findEvent(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::EventData>((spine4::EventData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findEvent : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findEvent)

static bool js_cocos2dx_spine4_SkeletonData_findAnimation(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findAnimation : Error processing arguments");
        spine4::Animation* result = cobj->findAnimation(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Animation>((spine4::Animation*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findAnimation)

static bool js_cocos2dx_spine4_SkeletonData_getX(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getX)

static bool js_cocos2dx_spine4_SkeletonData_findTransformConstraint(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findTransformConstraint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findTransformConstraint : Error processing arguments");
        spine4::TransformConstraintData* result = cobj->findTransformConstraint(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::TransformConstraintData>((spine4::TransformConstraintData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findTransformConstraint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findTransformConstraint)

static bool js_cocos2dx_spine4_SkeletonData_setFps(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setFps : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setFps : Error processing arguments");
        cobj->setFps(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setFps)

static bool js_cocos2dx_spine4_SkeletonData_findIkConstraint(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findIkConstraint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findIkConstraint : Error processing arguments");
        spine4::IkConstraintData* result = cobj->findIkConstraint(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::IkConstraintData>((spine4::IkConstraintData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findIkConstraint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findIkConstraint)

static bool js_cocos2dx_spine4_SkeletonData_getFps(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getFps : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getFps();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getFps : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getFps)

static bool js_cocos2dx_spine4_SkeletonData_getSkins(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getSkins : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Skin *>& result = cobj->getSkins();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getSkins : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getSkins)

static bool js_cocos2dx_spine4_SkeletonData_findPhysicsConstraint(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findPhysicsConstraint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findPhysicsConstraint : Error processing arguments");
        spine4::PhysicsConstraintData* result = cobj->findPhysicsConstraint(arg0);
        ok &= native_ptr_to_seval<spine4::PhysicsConstraintData>((spine4::PhysicsConstraintData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findPhysicsConstraint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findPhysicsConstraint)

static bool js_cocos2dx_spine4_SkeletonData_setWidth(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setWidth : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setWidth : Error processing arguments");
        cobj->setWidth(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setWidth)

static bool js_cocos2dx_spine4_SkeletonData_setVersion(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setVersion : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setVersion : Error processing arguments");
        cobj->setVersion(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setVersion)

static bool js_cocos2dx_spine4_SkeletonData_setHash(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setHash : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setHash : Error processing arguments");
        cobj->setHash(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setHash)

static bool js_cocos2dx_spine4_SkeletonData_setX(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setX : Error processing arguments");
        cobj->setX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setX)

static bool js_cocos2dx_spine4_SkeletonData_getDefaultSkin(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getDefaultSkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Skin* result = cobj->getDefaultSkin();
        ok &= native_ptr_to_rooted_seval<spine4::Skin>((spine4::Skin*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getDefaultSkin : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getDefaultSkin)

static bool js_cocos2dx_spine4_SkeletonData_getHeight(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getHeight : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getHeight();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getHeight : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getHeight)

static bool js_cocos2dx_spine4_SkeletonData_setDefaultSkin(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setDefaultSkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Skin* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setDefaultSkin : Error processing arguments");
        cobj->setDefaultSkin(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setDefaultSkin)

static bool js_cocos2dx_spine4_SkeletonData_getHash(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getHash : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getHash();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getHash : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getHash)

static bool js_cocos2dx_spine4_SkeletonData_getAnimations(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getAnimations : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Animation *>& result = cobj->getAnimations();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getAnimations : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getAnimations)

static bool js_cocos2dx_spine4_SkeletonData_setImagesPath(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setImagesPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setImagesPath : Error processing arguments");
        cobj->setImagesPath(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setImagesPath)

static bool js_cocos2dx_spine4_SkeletonData_getIkConstraints(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getIkConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::IkConstraintData *>& result = cobj->getIkConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getIkConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getIkConstraints)

static bool js_cocos2dx_spine4_SkeletonData_getImagesPath(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getImagesPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getImagesPath();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getImagesPath : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getImagesPath)

static bool js_cocos2dx_spine4_SkeletonData_getEvents(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getEvents : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::EventData *>& result = cobj->getEvents();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getEvents : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getEvents)

static bool js_cocos2dx_spine4_SkeletonData_findBone(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findBone : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findBone : Error processing arguments");
        spine4::BoneData* result = cobj->findBone(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::BoneData>((spine4::BoneData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findBone : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findBone)

static bool js_cocos2dx_spine4_SkeletonData_setName(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setName : Error processing arguments");
        cobj->setName(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setName)

static bool js_cocos2dx_spine4_SkeletonData_getPathConstraints(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getPathConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::PathConstraintData *>& result = cobj->getPathConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getPathConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getPathConstraints)

static bool js_cocos2dx_spine4_SkeletonData_getAudioPath(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getAudioPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getAudioPath();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getAudioPath : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getAudioPath)

static bool js_cocos2dx_spine4_SkeletonData_getVersion(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getVersion : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getVersion();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getVersion : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getVersion)

static bool js_cocos2dx_spine4_SkeletonData_getPhysicsConstraints(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getPhysicsConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::PhysicsConstraintData *>& result = cobj->getPhysicsConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getPhysicsConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getPhysicsConstraints)

static bool js_cocos2dx_spine4_SkeletonData_setY(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setY : Error processing arguments");
        cobj->setY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setY)

static bool js_cocos2dx_spine4_SkeletonData_setHeight(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setHeight : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setHeight : Error processing arguments");
        cobj->setHeight(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setHeight)

static bool js_cocos2dx_spine4_SkeletonData_getWidth(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getWidth : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getWidth();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getWidth : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getWidth)

static bool js_cocos2dx_spine4_SkeletonData_setReferenceScale(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setReferenceScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setReferenceScale : Error processing arguments");
        cobj->setReferenceScale(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setReferenceScale)

static bool js_cocos2dx_spine4_SkeletonData_getSlots(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getSlots : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::SlotData *>& result = cobj->getSlots();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getSlots : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getSlots)

static bool js_cocos2dx_spine4_SkeletonData_findSkin(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findSkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findSkin : Error processing arguments");
        spine4::Skin* result = cobj->findSkin(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Skin>((spine4::Skin*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findSkin : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findSkin)

static bool js_cocos2dx_spine4_SkeletonData_getY(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getY)

static bool js_cocos2dx_spine4_SkeletonData_getBones(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::BoneData *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getBones)

static bool js_cocos2dx_spine4_SkeletonData_getTransformConstraints(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getTransformConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::TransformConstraintData *>& result = cobj->getTransformConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getTransformConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getTransformConstraints)

static bool js_cocos2dx_spine4_SkeletonData_findSlot(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findSlot : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findSlot : Error processing arguments");
        spine4::SlotData* result = cobj->findSlot(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::SlotData>((spine4::SlotData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findSlot : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findSlot)

static bool js_cocos2dx_spine4_SkeletonData_setAudioPath(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_setAudioPath : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_setAudioPath : Error processing arguments");
        cobj->setAudioPath(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_setAudioPath)

static bool js_cocos2dx_spine4_SkeletonData_findPathConstraint(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_findPathConstraint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findPathConstraint : Error processing arguments");
        spine4::PathConstraintData* result = cobj->findPathConstraint(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::PathConstraintData>((spine4::PathConstraintData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_findPathConstraint : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_findPathConstraint)

static bool js_cocos2dx_spine4_SkeletonData_getName(se::State& s)
{
    spine4::SkeletonData* cobj = (spine4::SkeletonData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonData_getName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonData_getName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonData_getName)




bool js_register_cocos2dx_spine4_SkeletonData(se::Object* obj)
{
    auto cls = se::Class::create("SkeletonData", obj, nullptr, nullptr);

    cls->defineFunction("getReferenceScale", _SE(js_cocos2dx_spine4_SkeletonData_getReferenceScale));
    cls->defineFunction("findEvent", _SE(js_cocos2dx_spine4_SkeletonData_findEvent));
    cls->defineFunction("findAnimation", _SE(js_cocos2dx_spine4_SkeletonData_findAnimation));
    cls->defineFunction("getX", _SE(js_cocos2dx_spine4_SkeletonData_getX));
    cls->defineFunction("findTransformConstraint", _SE(js_cocos2dx_spine4_SkeletonData_findTransformConstraint));
    cls->defineFunction("setFps", _SE(js_cocos2dx_spine4_SkeletonData_setFps));
    cls->defineFunction("findIkConstraint", _SE(js_cocos2dx_spine4_SkeletonData_findIkConstraint));
    cls->defineFunction("getFps", _SE(js_cocos2dx_spine4_SkeletonData_getFps));
    cls->defineFunction("getSkins", _SE(js_cocos2dx_spine4_SkeletonData_getSkins));
    cls->defineFunction("findPhysicsConstraint", _SE(js_cocos2dx_spine4_SkeletonData_findPhysicsConstraint));
    cls->defineFunction("setWidth", _SE(js_cocos2dx_spine4_SkeletonData_setWidth));
    cls->defineFunction("setVersion", _SE(js_cocos2dx_spine4_SkeletonData_setVersion));
    cls->defineFunction("setHash", _SE(js_cocos2dx_spine4_SkeletonData_setHash));
    cls->defineFunction("setX", _SE(js_cocos2dx_spine4_SkeletonData_setX));
    cls->defineFunction("getDefaultSkin", _SE(js_cocos2dx_spine4_SkeletonData_getDefaultSkin));
    cls->defineFunction("getHeight", _SE(js_cocos2dx_spine4_SkeletonData_getHeight));
    cls->defineFunction("setDefaultSkin", _SE(js_cocos2dx_spine4_SkeletonData_setDefaultSkin));
    cls->defineFunction("getHash", _SE(js_cocos2dx_spine4_SkeletonData_getHash));
    cls->defineFunction("getAnimations", _SE(js_cocos2dx_spine4_SkeletonData_getAnimations));
    cls->defineFunction("setImagesPath", _SE(js_cocos2dx_spine4_SkeletonData_setImagesPath));
    cls->defineFunction("getIkConstraints", _SE(js_cocos2dx_spine4_SkeletonData_getIkConstraints));
    cls->defineFunction("getImagesPath", _SE(js_cocos2dx_spine4_SkeletonData_getImagesPath));
    cls->defineFunction("getEvents", _SE(js_cocos2dx_spine4_SkeletonData_getEvents));
    cls->defineFunction("findBone", _SE(js_cocos2dx_spine4_SkeletonData_findBone));
    cls->defineFunction("setName", _SE(js_cocos2dx_spine4_SkeletonData_setName));
    cls->defineFunction("getPathConstraints", _SE(js_cocos2dx_spine4_SkeletonData_getPathConstraints));
    cls->defineFunction("getAudioPath", _SE(js_cocos2dx_spine4_SkeletonData_getAudioPath));
    cls->defineFunction("getVersion", _SE(js_cocos2dx_spine4_SkeletonData_getVersion));
    cls->defineFunction("getPhysicsConstraints", _SE(js_cocos2dx_spine4_SkeletonData_getPhysicsConstraints));
    cls->defineFunction("setY", _SE(js_cocos2dx_spine4_SkeletonData_setY));
    cls->defineFunction("setHeight", _SE(js_cocos2dx_spine4_SkeletonData_setHeight));
    cls->defineFunction("getWidth", _SE(js_cocos2dx_spine4_SkeletonData_getWidth));
    cls->defineFunction("setReferenceScale", _SE(js_cocos2dx_spine4_SkeletonData_setReferenceScale));
    cls->defineFunction("getSlots", _SE(js_cocos2dx_spine4_SkeletonData_getSlots));
    cls->defineFunction("findSkin", _SE(js_cocos2dx_spine4_SkeletonData_findSkin));
    cls->defineFunction("getY", _SE(js_cocos2dx_spine4_SkeletonData_getY));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_SkeletonData_getBones));
    cls->defineFunction("getTransformConstraints", _SE(js_cocos2dx_spine4_SkeletonData_getTransformConstraints));
    cls->defineFunction("findSlot", _SE(js_cocos2dx_spine4_SkeletonData_findSlot));
    cls->defineFunction("setAudioPath", _SE(js_cocos2dx_spine4_SkeletonData_setAudioPath));
    cls->defineFunction("findPathConstraint", _SE(js_cocos2dx_spine4_SkeletonData_findPathConstraint));
    cls->defineFunction("getName", _SE(js_cocos2dx_spine4_SkeletonData_getName));
    cls->install();
    JSBClassType::registerClass<spine4::SkeletonData>(cls);

    __jsb_spine4_SkeletonData_proto = cls->getProto();
    __jsb_spine4_SkeletonData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_Skin_proto = nullptr;
se::Class* __jsb_spine4_Skin_class = nullptr;

static bool js_cocos2dx_spine4_Skin_findNamesForSlot(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_findNamesForSlot : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        size_t arg0 = 0;
        spine4::Vector<spine4::String> arg1;
        ok &= seval_to_size(args[0], &arg0);
        ok &= seval_to_Vector(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_findNamesForSlot : Error processing arguments");
        cobj->findNamesForSlot(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_findNamesForSlot)

static bool js_cocos2dx_spine4_Skin_getConstraints(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_getConstraints : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::ConstraintData *>& result = cobj->getConstraints();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_getConstraints : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_getConstraints)

static bool js_cocos2dx_spine4_Skin_removeAttachment(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_removeAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        size_t arg0 = 0;
        spine4::String arg1;
        ok &= seval_to_size(args[0], &arg0);
        arg1 = args[1].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_removeAttachment : Error processing arguments");
        cobj->removeAttachment(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_removeAttachment)

static bool js_cocos2dx_spine4_Skin_getBones(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::BoneData *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_getBones)

static bool js_cocos2dx_spine4_Skin_getName(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_getName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_getName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_getName)

static bool js_cocos2dx_spine4_Skin_getAttachment(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_getAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        size_t arg0 = 0;
        spine4::String arg1;
        ok &= seval_to_size(args[0], &arg0);
        arg1 = args[1].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_getAttachment : Error processing arguments");
        spine4::Attachment* result = cobj->getAttachment(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_getAttachment : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_getAttachment)

static bool js_cocos2dx_spine4_Skin_addSkin(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_addSkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Skin* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_addSkin : Error processing arguments");
        cobj->addSkin(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_addSkin)

static bool js_cocos2dx_spine4_Skin_setAttachment(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_setAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        size_t arg0 = 0;
        spine4::String arg1;
        spine4::Attachment* arg2 = nullptr;
        ok &= seval_to_size(args[0], &arg0);
        arg1 = args[1].toStringForce().c_str();
        ok &= seval_to_native_ptr(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_setAttachment : Error processing arguments");
        cobj->setAttachment(arg0, arg1, arg2);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_setAttachment)

static bool js_cocos2dx_spine4_Skin_getColor(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_getColor)

static bool js_cocos2dx_spine4_Skin_copySkin(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_copySkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Skin* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_copySkin : Error processing arguments");
        cobj->copySkin(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_copySkin)

static bool js_cocos2dx_spine4_Skin_findAttachmentsForSlot(se::State& s)
{
    spine4::Skin* cobj = (spine4::Skin*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_Skin_findAttachmentsForSlot : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        size_t arg0 = 0;
        spine4::Vector<spine4::Attachment *> arg1;
        ok &= seval_to_size(args[0], &arg0);
        ok &= seval_to_Vector(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_Skin_findAttachmentsForSlot : Error processing arguments");
        cobj->findAttachmentsForSlot(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_Skin_findAttachmentsForSlot)




bool js_register_cocos2dx_spine4_Skin(se::Object* obj)
{
    auto cls = se::Class::create("Skin", obj, nullptr, nullptr);

    cls->defineFunction("findNamesForSlot", _SE(js_cocos2dx_spine4_Skin_findNamesForSlot));
    cls->defineFunction("getConstraints", _SE(js_cocos2dx_spine4_Skin_getConstraints));
    cls->defineFunction("removeAttachment", _SE(js_cocos2dx_spine4_Skin_removeAttachment));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_Skin_getBones));
    cls->defineFunction("getName", _SE(js_cocos2dx_spine4_Skin_getName));
    cls->defineFunction("getAttachment", _SE(js_cocos2dx_spine4_Skin_getAttachment));
    cls->defineFunction("addSkin", _SE(js_cocos2dx_spine4_Skin_addSkin));
    cls->defineFunction("setAttachment", _SE(js_cocos2dx_spine4_Skin_setAttachment));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_Skin_getColor));
    cls->defineFunction("copySkin", _SE(js_cocos2dx_spine4_Skin_copySkin));
    cls->defineFunction("findAttachmentsForSlot", _SE(js_cocos2dx_spine4_Skin_findAttachmentsForSlot));
    cls->install();
    JSBClassType::registerClass<spine4::Skin>(cls);

    __jsb_spine4_Skin_proto = cls->getProto();
    __jsb_spine4_Skin_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SlotData_proto = nullptr;
se::Class* __jsb_spine4_SlotData_class = nullptr;

static bool js_cocos2dx_spine4_SlotData_getIndex(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_getIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_getIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_getIndex)

static bool js_cocos2dx_spine4_SlotData_getDarkColor(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_getDarkColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getDarkColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_getDarkColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_getDarkColor)

static bool js_cocos2dx_spine4_SlotData_getAttachmentName(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_getAttachmentName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getAttachmentName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_getAttachmentName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_getAttachmentName)

static bool js_cocos2dx_spine4_SlotData_getColor(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_getColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Color& result = cobj->getColor();
        ok &= native_ptr_to_rooted_seval<spine4::Color>((spine4::Color*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_getColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_getColor)

static bool js_cocos2dx_spine4_SlotData_getName(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_getName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::String& result = cobj->getName();
        s.rval().setString(result.buffer());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_getName : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_getName)

static bool js_cocos2dx_spine4_SlotData_setBlendMode(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_setBlendMode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::BlendMode arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_setBlendMode : Error processing arguments");
        cobj->setBlendMode(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_setBlendMode)

static bool js_cocos2dx_spine4_SlotData_getBlendMode(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_getBlendMode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = (unsigned int)cobj->getBlendMode();
        ok &= uint32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_getBlendMode : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_getBlendMode)

static bool js_cocos2dx_spine4_SlotData_hasDarkColor(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_hasDarkColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->hasDarkColor();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_hasDarkColor : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_hasDarkColor)

static bool js_cocos2dx_spine4_SlotData_setHasDarkColor(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_setHasDarkColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_setHasDarkColor : Error processing arguments");
        cobj->setHasDarkColor(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_setHasDarkColor)

static bool js_cocos2dx_spine4_SlotData_isVisible(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_isVisible : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isVisible();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_isVisible : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_isVisible)

static bool js_cocos2dx_spine4_SlotData_setAttachmentName(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_setAttachmentName : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::String arg0;
        arg0 = args[0].toStringForce().c_str();
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_setAttachmentName : Error processing arguments");
        cobj->setAttachmentName(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_setAttachmentName)

static bool js_cocos2dx_spine4_SlotData_setVisible(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_setVisible : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_setVisible : Error processing arguments");
        cobj->setVisible(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_setVisible)

static bool js_cocos2dx_spine4_SlotData_getBoneData(se::State& s)
{
    spine4::SlotData* cobj = (spine4::SlotData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SlotData_getBoneData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::BoneData& result = cobj->getBoneData();
        ok &= native_ptr_to_rooted_seval<spine4::BoneData>((spine4::BoneData*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SlotData_getBoneData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SlotData_getBoneData)




bool js_register_cocos2dx_spine4_SlotData(se::Object* obj)
{
    auto cls = se::Class::create("SlotData", obj, nullptr, nullptr);

    cls->defineFunction("getIndex", _SE(js_cocos2dx_spine4_SlotData_getIndex));
    cls->defineFunction("getDarkColor", _SE(js_cocos2dx_spine4_SlotData_getDarkColor));
    cls->defineFunction("getAttachmentName", _SE(js_cocos2dx_spine4_SlotData_getAttachmentName));
    cls->defineFunction("getColor", _SE(js_cocos2dx_spine4_SlotData_getColor));
    cls->defineFunction("getName", _SE(js_cocos2dx_spine4_SlotData_getName));
    cls->defineFunction("setBlendMode", _SE(js_cocos2dx_spine4_SlotData_setBlendMode));
    cls->defineFunction("getBlendMode", _SE(js_cocos2dx_spine4_SlotData_getBlendMode));
    cls->defineFunction("hasDarkColor", _SE(js_cocos2dx_spine4_SlotData_hasDarkColor));
    cls->defineFunction("setHasDarkColor", _SE(js_cocos2dx_spine4_SlotData_setHasDarkColor));
    cls->defineFunction("isVisible", _SE(js_cocos2dx_spine4_SlotData_isVisible));
    cls->defineFunction("setAttachmentName", _SE(js_cocos2dx_spine4_SlotData_setAttachmentName));
    cls->defineFunction("setVisible", _SE(js_cocos2dx_spine4_SlotData_setVisible));
    cls->defineFunction("getBoneData", _SE(js_cocos2dx_spine4_SlotData_getBoneData));
    cls->install();
    JSBClassType::registerClass<spine4::SlotData>(cls);

    __jsb_spine4_SlotData_proto = cls->getProto();
    __jsb_spine4_SlotData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_TransformConstraint_proto = nullptr;
se::Class* __jsb_spine4_TransformConstraint_class = nullptr;

static bool js_cocos2dx_spine4_TransformConstraint_setMixRotate(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setMixRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_setMixRotate : Error processing arguments");
        cobj->setMixRotate(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setMixRotate)

static bool js_cocos2dx_spine4_TransformConstraint_getTarget(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Bone* result = cobj->getTarget();
        ok &= native_ptr_to_rooted_seval<spine4::Bone>((spine4::Bone*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getTarget : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getTarget)

static bool js_cocos2dx_spine4_TransformConstraint_setToSetupPose(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setToSetupPose)

static bool js_cocos2dx_spine4_TransformConstraint_getOrder(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getOrder : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getOrder();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getOrder : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getOrder)

static bool js_cocos2dx_spine4_TransformConstraint_setMixShearY(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setMixShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_setMixShearY : Error processing arguments");
        cobj->setMixShearY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setMixShearY)

static bool js_cocos2dx_spine4_TransformConstraint_setActive(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setActive : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_setActive : Error processing arguments");
        cobj->setActive(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setActive)

static bool js_cocos2dx_spine4_TransformConstraint_getData(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::TransformConstraintData& result = cobj->getData();
        ok &= native_ptr_to_rooted_seval<spine4::TransformConstraintData>((spine4::TransformConstraintData*)&result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getData)

static bool js_cocos2dx_spine4_TransformConstraint_setTarget(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Bone* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_setTarget : Error processing arguments");
        cobj->setTarget(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setTarget)

static bool js_cocos2dx_spine4_TransformConstraint_getMixY(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getMixY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getMixY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getMixY)

static bool js_cocos2dx_spine4_TransformConstraint_update(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_update : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Physics arg0;
        ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_update : Error processing arguments");
        cobj->update(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_update)

static bool js_cocos2dx_spine4_TransformConstraint_getMixX(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getMixX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getMixX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getMixX)

static bool js_cocos2dx_spine4_TransformConstraint_getMixRotate(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getMixRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixRotate();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getMixRotate : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getMixRotate)

static bool js_cocos2dx_spine4_TransformConstraint_isActive(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_isActive : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isActive();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_isActive : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_isActive)

static bool js_cocos2dx_spine4_TransformConstraint_setMixY(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setMixY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_setMixY : Error processing arguments");
        cobj->setMixY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setMixY)

static bool js_cocos2dx_spine4_TransformConstraint_getBones(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::Bone *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getBones)

static bool js_cocos2dx_spine4_TransformConstraint_getMixShearY(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getMixShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixShearY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getMixShearY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getMixShearY)

static bool js_cocos2dx_spine4_TransformConstraint_getMixScaleX(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getMixScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getMixScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getMixScaleX)

static bool js_cocos2dx_spine4_TransformConstraint_getMixScaleY(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_getMixScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_getMixScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_getMixScaleY)

static bool js_cocos2dx_spine4_TransformConstraint_setMixScaleX(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setMixScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_setMixScaleX : Error processing arguments");
        cobj->setMixScaleX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setMixScaleX)

static bool js_cocos2dx_spine4_TransformConstraint_setMixScaleY(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setMixScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_setMixScaleY : Error processing arguments");
        cobj->setMixScaleY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setMixScaleY)

static bool js_cocos2dx_spine4_TransformConstraint_setMixX(se::State& s)
{
    spine4::TransformConstraint* cobj = (spine4::TransformConstraint*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraint_setMixX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraint_setMixX : Error processing arguments");
        cobj->setMixX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraint_setMixX)




bool js_register_cocos2dx_spine4_TransformConstraint(se::Object* obj)
{
    auto cls = se::Class::create("TransformConstraint", obj, nullptr, nullptr);

    cls->defineFunction("setMixRotate", _SE(js_cocos2dx_spine4_TransformConstraint_setMixRotate));
    cls->defineFunction("getTarget", _SE(js_cocos2dx_spine4_TransformConstraint_getTarget));
    cls->defineFunction("setToSetupPose", _SE(js_cocos2dx_spine4_TransformConstraint_setToSetupPose));
    cls->defineFunction("getOrder", _SE(js_cocos2dx_spine4_TransformConstraint_getOrder));
    cls->defineFunction("setMixShearY", _SE(js_cocos2dx_spine4_TransformConstraint_setMixShearY));
    cls->defineFunction("setActive", _SE(js_cocos2dx_spine4_TransformConstraint_setActive));
    cls->defineFunction("getData", _SE(js_cocos2dx_spine4_TransformConstraint_getData));
    cls->defineFunction("setTarget", _SE(js_cocos2dx_spine4_TransformConstraint_setTarget));
    cls->defineFunction("getMixY", _SE(js_cocos2dx_spine4_TransformConstraint_getMixY));
    cls->defineFunction("update", _SE(js_cocos2dx_spine4_TransformConstraint_update));
    cls->defineFunction("getMixX", _SE(js_cocos2dx_spine4_TransformConstraint_getMixX));
    cls->defineFunction("getMixRotate", _SE(js_cocos2dx_spine4_TransformConstraint_getMixRotate));
    cls->defineFunction("isActive", _SE(js_cocos2dx_spine4_TransformConstraint_isActive));
    cls->defineFunction("setMixY", _SE(js_cocos2dx_spine4_TransformConstraint_setMixY));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_TransformConstraint_getBones));
    cls->defineFunction("getMixShearY", _SE(js_cocos2dx_spine4_TransformConstraint_getMixShearY));
    cls->defineFunction("getMixScaleX", _SE(js_cocos2dx_spine4_TransformConstraint_getMixScaleX));
    cls->defineFunction("getMixScaleY", _SE(js_cocos2dx_spine4_TransformConstraint_getMixScaleY));
    cls->defineFunction("setMixScaleX", _SE(js_cocos2dx_spine4_TransformConstraint_setMixScaleX));
    cls->defineFunction("setMixScaleY", _SE(js_cocos2dx_spine4_TransformConstraint_setMixScaleY));
    cls->defineFunction("setMixX", _SE(js_cocos2dx_spine4_TransformConstraint_setMixX));
    cls->install();
    JSBClassType::registerClass<spine4::TransformConstraint>(cls);

    __jsb_spine4_TransformConstraint_proto = cls->getProto();
    __jsb_spine4_TransformConstraint_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_TransformConstraintData_proto = nullptr;
se::Class* __jsb_spine4_TransformConstraintData_class = nullptr;

static bool js_cocos2dx_spine4_TransformConstraintData_setOffsetY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetY : Error processing arguments");
        cobj->setOffsetY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setOffsetY)

static bool js_cocos2dx_spine4_TransformConstraintData_setOffsetX(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetX : Error processing arguments");
        cobj->setOffsetX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setOffsetX)

static bool js_cocos2dx_spine4_TransformConstraintData_getOffsetRotation(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getOffsetRotation();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetRotation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getOffsetRotation)

static bool js_cocos2dx_spine4_TransformConstraintData_isRelative(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_isRelative : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isRelative();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_isRelative : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_isRelative)

static bool js_cocos2dx_spine4_TransformConstraintData_setMixRotate(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setMixRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setMixRotate : Error processing arguments");
        cobj->setMixRotate(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setMixRotate)

static bool js_cocos2dx_spine4_TransformConstraintData_getTarget(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::BoneData* result = cobj->getTarget();
        ok &= native_ptr_to_rooted_seval<spine4::BoneData>((spine4::BoneData*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getTarget : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getTarget)

static bool js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleX(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getOffsetScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleX)

static bool js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getOffsetScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleY)

static bool js_cocos2dx_spine4_TransformConstraintData_setOffsetShearY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetShearY : Error processing arguments");
        cobj->setOffsetShearY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setOffsetShearY)

static bool js_cocos2dx_spine4_TransformConstraintData_getRTTI(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getRTTI : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const spine4::RTTI& result = cobj->getRTTI();
        ok &= native_ptr_to_seval<spine4::RTTI&>((spine4::RTTI&)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getRTTI : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getRTTI)

static bool js_cocos2dx_spine4_TransformConstraintData_setMixShearY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setMixShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setMixShearY : Error processing arguments");
        cobj->setMixShearY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setMixShearY)

static bool js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleX(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleX : Error processing arguments");
        cobj->setOffsetScaleX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleX)

static bool js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleY : Error processing arguments");
        cobj->setOffsetScaleY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleY)

static bool js_cocos2dx_spine4_TransformConstraintData_setTarget(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setTarget : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::BoneData* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setTarget : Error processing arguments");
        cobj->setTarget(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setTarget)

static bool js_cocos2dx_spine4_TransformConstraintData_getMixY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getMixY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getMixY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getMixY)

static bool js_cocos2dx_spine4_TransformConstraintData_getMixX(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getMixX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getMixX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getMixX)

static bool js_cocos2dx_spine4_TransformConstraintData_setOffsetRotation(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetRotation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setOffsetRotation : Error processing arguments");
        cobj->setOffsetRotation(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setOffsetRotation)

static bool js_cocos2dx_spine4_TransformConstraintData_getOffsetY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getOffsetY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getOffsetY)

static bool js_cocos2dx_spine4_TransformConstraintData_getOffsetX(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getOffsetX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getOffsetX)

static bool js_cocos2dx_spine4_TransformConstraintData_getMixRotate(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getMixRotate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixRotate();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getMixRotate : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getMixRotate)

static bool js_cocos2dx_spine4_TransformConstraintData_isLocal(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_isLocal : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isLocal();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_isLocal : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_isLocal)

static bool js_cocos2dx_spine4_TransformConstraintData_setLocal(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setLocal : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setLocal : Error processing arguments");
        cobj->setLocal(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setLocal)

static bool js_cocos2dx_spine4_TransformConstraintData_setMixY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setMixY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setMixY : Error processing arguments");
        cobj->setMixY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setMixY)

static bool js_cocos2dx_spine4_TransformConstraintData_getBones(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getBones : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Vector<spine4::BoneData *>& result = cobj->getBones();
        ok &= Vector_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getBones : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getBones)

static bool js_cocos2dx_spine4_TransformConstraintData_getMixShearY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getMixShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixShearY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getMixShearY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getMixShearY)

static bool js_cocos2dx_spine4_TransformConstraintData_getMixScaleX(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getMixScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixScaleX();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getMixScaleX : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getMixScaleX)

static bool js_cocos2dx_spine4_TransformConstraintData_getMixScaleY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getMixScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getMixScaleY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getMixScaleY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getMixScaleY)

static bool js_cocos2dx_spine4_TransformConstraintData_setMixScaleX(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setMixScaleX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setMixScaleX : Error processing arguments");
        cobj->setMixScaleX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setMixScaleX)

static bool js_cocos2dx_spine4_TransformConstraintData_setMixScaleY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setMixScaleY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setMixScaleY : Error processing arguments");
        cobj->setMixScaleY(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setMixScaleY)

static bool js_cocos2dx_spine4_TransformConstraintData_getOffsetShearY(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetShearY : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getOffsetShearY();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_getOffsetShearY : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_getOffsetShearY)

static bool js_cocos2dx_spine4_TransformConstraintData_setRelative(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setRelative : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setRelative : Error processing arguments");
        cobj->setRelative(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setRelative)

static bool js_cocos2dx_spine4_TransformConstraintData_setMixX(se::State& s)
{
    spine4::TransformConstraintData* cobj = (spine4::TransformConstraintData*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintData_setMixX : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintData_setMixX : Error processing arguments");
        cobj->setMixX(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintData_setMixX)


extern se::Object* __jsb_spine4_ConstraintData_proto;


bool js_register_cocos2dx_spine4_TransformConstraintData(se::Object* obj)
{
    auto cls = se::Class::create("TransformConstraintData", obj, __jsb_spine4_ConstraintData_proto, nullptr);

    cls->defineFunction("setOffsetY", _SE(js_cocos2dx_spine4_TransformConstraintData_setOffsetY));
    cls->defineFunction("setOffsetX", _SE(js_cocos2dx_spine4_TransformConstraintData_setOffsetX));
    cls->defineFunction("getOffsetRotation", _SE(js_cocos2dx_spine4_TransformConstraintData_getOffsetRotation));
    cls->defineFunction("isRelative", _SE(js_cocos2dx_spine4_TransformConstraintData_isRelative));
    cls->defineFunction("setMixRotate", _SE(js_cocos2dx_spine4_TransformConstraintData_setMixRotate));
    cls->defineFunction("getTarget", _SE(js_cocos2dx_spine4_TransformConstraintData_getTarget));
    cls->defineFunction("getOffsetScaleX", _SE(js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleX));
    cls->defineFunction("getOffsetScaleY", _SE(js_cocos2dx_spine4_TransformConstraintData_getOffsetScaleY));
    cls->defineFunction("setOffsetShearY", _SE(js_cocos2dx_spine4_TransformConstraintData_setOffsetShearY));
    cls->defineFunction("getRTTI", _SE(js_cocos2dx_spine4_TransformConstraintData_getRTTI));
    cls->defineFunction("setMixShearY", _SE(js_cocos2dx_spine4_TransformConstraintData_setMixShearY));
    cls->defineFunction("setOffsetScaleX", _SE(js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleX));
    cls->defineFunction("setOffsetScaleY", _SE(js_cocos2dx_spine4_TransformConstraintData_setOffsetScaleY));
    cls->defineFunction("setTarget", _SE(js_cocos2dx_spine4_TransformConstraintData_setTarget));
    cls->defineFunction("getMixY", _SE(js_cocos2dx_spine4_TransformConstraintData_getMixY));
    cls->defineFunction("getMixX", _SE(js_cocos2dx_spine4_TransformConstraintData_getMixX));
    cls->defineFunction("setOffsetRotation", _SE(js_cocos2dx_spine4_TransformConstraintData_setOffsetRotation));
    cls->defineFunction("getOffsetY", _SE(js_cocos2dx_spine4_TransformConstraintData_getOffsetY));
    cls->defineFunction("getOffsetX", _SE(js_cocos2dx_spine4_TransformConstraintData_getOffsetX));
    cls->defineFunction("getMixRotate", _SE(js_cocos2dx_spine4_TransformConstraintData_getMixRotate));
    cls->defineFunction("isLocal", _SE(js_cocos2dx_spine4_TransformConstraintData_isLocal));
    cls->defineFunction("setLocal", _SE(js_cocos2dx_spine4_TransformConstraintData_setLocal));
    cls->defineFunction("setMixY", _SE(js_cocos2dx_spine4_TransformConstraintData_setMixY));
    cls->defineFunction("getBones", _SE(js_cocos2dx_spine4_TransformConstraintData_getBones));
    cls->defineFunction("getMixShearY", _SE(js_cocos2dx_spine4_TransformConstraintData_getMixShearY));
    cls->defineFunction("getMixScaleX", _SE(js_cocos2dx_spine4_TransformConstraintData_getMixScaleX));
    cls->defineFunction("getMixScaleY", _SE(js_cocos2dx_spine4_TransformConstraintData_getMixScaleY));
    cls->defineFunction("setMixScaleX", _SE(js_cocos2dx_spine4_TransformConstraintData_setMixScaleX));
    cls->defineFunction("setMixScaleY", _SE(js_cocos2dx_spine4_TransformConstraintData_setMixScaleY));
    cls->defineFunction("getOffsetShearY", _SE(js_cocos2dx_spine4_TransformConstraintData_getOffsetShearY));
    cls->defineFunction("setRelative", _SE(js_cocos2dx_spine4_TransformConstraintData_setRelative));
    cls->defineFunction("setMixX", _SE(js_cocos2dx_spine4_TransformConstraintData_setMixX));
    cls->install();
    JSBClassType::registerClass<spine4::TransformConstraintData>(cls);

    __jsb_spine4_TransformConstraintData_proto = cls->getProto();
    __jsb_spine4_TransformConstraintData_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_TransformConstraintTimeline_proto = nullptr;
se::Class* __jsb_spine4_TransformConstraintTimeline_class = nullptr;

static bool js_cocos2dx_spine4_TransformConstraintTimeline_setTransformConstraintIndex(se::State& s)
{
    spine4::TransformConstraintTimeline* cobj = (spine4::TransformConstraintTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintTimeline_setTransformConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintTimeline_setTransformConstraintIndex : Error processing arguments");
        cobj->setTransformConstraintIndex(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintTimeline_setTransformConstraintIndex)

static bool js_cocos2dx_spine4_TransformConstraintTimeline_getTransformConstraintIndex(se::State& s)
{
    spine4::TransformConstraintTimeline* cobj = (spine4::TransformConstraintTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintTimeline_getTransformConstraintIndex : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getTransformConstraintIndex();
        ok &= int32_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintTimeline_getTransformConstraintIndex : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintTimeline_getTransformConstraintIndex)

static bool js_cocos2dx_spine4_TransformConstraintTimeline_setFrame(se::State& s)
{
    spine4::TransformConstraintTimeline* cobj = (spine4::TransformConstraintTimeline*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_TransformConstraintTimeline_setFrame : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 8) {
        size_t arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        float arg3 = 0;
        float arg4 = 0;
        float arg5 = 0;
        float arg6 = 0;
        float arg7 = 0;
        ok &= seval_to_size(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        ok &= seval_to_float(args[4], &arg4);
        ok &= seval_to_float(args[5], &arg5);
        ok &= seval_to_float(args[6], &arg6);
        ok &= seval_to_float(args[7], &arg7);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_TransformConstraintTimeline_setFrame : Error processing arguments");
        cobj->setFrame(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 8);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_TransformConstraintTimeline_setFrame)


extern se::Object* __jsb_spine4_CurveTimeline_proto;


bool js_register_cocos2dx_spine4_TransformConstraintTimeline(se::Object* obj)
{
    auto cls = se::Class::create("TransformConstraintTimeline", obj, __jsb_spine4_CurveTimeline_proto, nullptr);

    cls->defineFunction("setTransformConstraintIndex", _SE(js_cocos2dx_spine4_TransformConstraintTimeline_setTransformConstraintIndex));
    cls->defineFunction("getTransformConstraintIndex", _SE(js_cocos2dx_spine4_TransformConstraintTimeline_getTransformConstraintIndex));
    cls->defineFunction("setFrame", _SE(js_cocos2dx_spine4_TransformConstraintTimeline_setFrame));
    cls->install();
    JSBClassType::registerClass<spine4::TransformConstraintTimeline>(cls);

    __jsb_spine4_TransformConstraintTimeline_proto = cls->getProto();
    __jsb_spine4_TransformConstraintTimeline_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_VertexEffect_proto = nullptr;
se::Class* __jsb_spine4_VertexEffect_class = nullptr;




bool js_register_cocos2dx_spine4_VertexEffect(se::Object* obj)
{
    auto cls = se::Class::create("VertexEffect", obj, nullptr, nullptr);

    cls->install();
    JSBClassType::registerClass<spine4::VertexEffect>(cls);

    __jsb_spine4_VertexEffect_proto = cls->getProto();
    __jsb_spine4_VertexEffect_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_JitterVertexEffect_proto = nullptr;
se::Class* __jsb_spine4_JitterVertexEffect_class = nullptr;


extern se::Object* __jsb_spine4_VertexEffect_proto;


bool js_register_cocos2dx_spine4_JitterVertexEffect(se::Object* obj)
{
    auto cls = se::Class::create("JitterVertexEffect", obj, __jsb_spine4_VertexEffect_proto, nullptr);

    cls->install();
    JSBClassType::registerClass<spine4::JitterVertexEffect>(cls);

    __jsb_spine4_JitterVertexEffect_proto = cls->getProto();
    __jsb_spine4_JitterVertexEffect_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SwirlVertexEffect_proto = nullptr;
se::Class* __jsb_spine4_SwirlVertexEffect_class = nullptr;


extern se::Object* __jsb_spine4_VertexEffect_proto;


bool js_register_cocos2dx_spine4_SwirlVertexEffect(se::Object* obj)
{
    auto cls = se::Class::create("SwirlVertexEffect", obj, __jsb_spine4_VertexEffect_proto, nullptr);

    cls->install();
    JSBClassType::registerClass<spine4::SwirlVertexEffect>(cls);

    __jsb_spine4_SwirlVertexEffect_proto = cls->getProto();
    __jsb_spine4_SwirlVertexEffect_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_VertexEffectDelegate_proto = nullptr;
se::Class* __jsb_spine4_VertexEffectDelegate_class = nullptr;

static bool js_cocos2dx_spine4_VertexEffectDelegate_getEffectType(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexEffectDelegate_getEffectType : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::string& result = cobj->getEffectType();
        ok &= std_string_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_getEffectType : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexEffectDelegate_getEffectType)

static bool js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPowOut(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPowOut : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        float arg0 = 0;
        int arg1 = 0;
        ok &= seval_to_float(args[0], &arg0);
        do { int32_t tmp = 0; ok &= seval_to_int32(args[1], &tmp); arg1 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPowOut : Error processing arguments");
        spine4::SwirlVertexEffect* result = cobj->initSwirlWithPowOut(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::SwirlVertexEffect>((spine4::SwirlVertexEffect*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPowOut : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPowOut)

static bool js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPow(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPow : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        float arg0 = 0;
        int arg1 = 0;
        ok &= seval_to_float(args[0], &arg0);
        do { int32_t tmp = 0; ok &= seval_to_int32(args[1], &tmp); arg1 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPow : Error processing arguments");
        spine4::SwirlVertexEffect* result = cobj->initSwirlWithPow(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::SwirlVertexEffect>((spine4::SwirlVertexEffect*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPow : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPow)

static bool js_cocos2dx_spine4_VertexEffectDelegate_initJitter(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexEffectDelegate_initJitter : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        float arg0 = 0;
        float arg1 = 0;
        ok &= seval_to_float(args[0], &arg0);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_initJitter : Error processing arguments");
        spine4::JitterVertexEffect* result = cobj->initJitter(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::JitterVertexEffect>((spine4::JitterVertexEffect*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_initJitter : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexEffectDelegate_initJitter)

static bool js_cocos2dx_spine4_VertexEffectDelegate_getSwirlVertexEffect(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexEffectDelegate_getSwirlVertexEffect : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::SwirlVertexEffect* result = cobj->getSwirlVertexEffect();
        ok &= native_ptr_to_rooted_seval<spine4::SwirlVertexEffect>((spine4::SwirlVertexEffect*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_getSwirlVertexEffect : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexEffectDelegate_getSwirlVertexEffect)

static bool js_cocos2dx_spine4_VertexEffectDelegate_getVertexEffect(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexEffectDelegate_getVertexEffect : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::VertexEffect* result = cobj->getVertexEffect();
        ok &= native_ptr_to_rooted_seval<spine4::VertexEffect>((spine4::VertexEffect*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_getVertexEffect : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexEffectDelegate_getVertexEffect)

static bool js_cocos2dx_spine4_VertexEffectDelegate_getJitterVertexEffect(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexEffectDelegate_getJitterVertexEffect : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::JitterVertexEffect* result = cobj->getJitterVertexEffect();
        ok &= native_ptr_to_rooted_seval<spine4::JitterVertexEffect>((spine4::JitterVertexEffect*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_VertexEffectDelegate_getJitterVertexEffect : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexEffectDelegate_getJitterVertexEffect)

static bool js_cocos2dx_spine4_VertexEffectDelegate_clear(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_VertexEffectDelegate_clear : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->clear();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_VertexEffectDelegate_clear)

SE_DECLARE_FINALIZE_FUNC(js_spine4_VertexEffectDelegate_finalize)

static bool js_cocos2dx_spine4_VertexEffectDelegate_constructor(se::State& s)
{
    spine4::VertexEffectDelegate* cobj = new (std::nothrow) spine4::VertexEffectDelegate();
    s.thisObject()->setPrivateData(cobj);
    return true;
}
SE_BIND_CTOR(js_cocos2dx_spine4_VertexEffectDelegate_constructor, __jsb_spine4_VertexEffectDelegate_class, js_spine4_VertexEffectDelegate_finalize)




static bool js_spine4_VertexEffectDelegate_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spine4::VertexEffectDelegate)", s.nativeThisObject());
    spine4::VertexEffectDelegate* cobj = (spine4::VertexEffectDelegate*)s.nativeThisObject();
    cobj->release();
    return true;
}
SE_BIND_FINALIZE_FUNC(js_spine4_VertexEffectDelegate_finalize)

bool js_register_cocos2dx_spine4_VertexEffectDelegate(se::Object* obj)
{
    auto cls = se::Class::create("VertexEffectDelegate", obj, nullptr, _SE(js_cocos2dx_spine4_VertexEffectDelegate_constructor));

    cls->defineFunction("getEffectType", _SE(js_cocos2dx_spine4_VertexEffectDelegate_getEffectType));
    cls->defineFunction("initSwirlWithPowOut", _SE(js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPowOut));
    cls->defineFunction("initSwirlWithPow", _SE(js_cocos2dx_spine4_VertexEffectDelegate_initSwirlWithPow));
    cls->defineFunction("initJitter", _SE(js_cocos2dx_spine4_VertexEffectDelegate_initJitter));
    cls->defineFunction("getSwirlVertexEffect", _SE(js_cocos2dx_spine4_VertexEffectDelegate_getSwirlVertexEffect));
    cls->defineFunction("getVertexEffect", _SE(js_cocos2dx_spine4_VertexEffectDelegate_getVertexEffect));
    cls->defineFunction("getJitterVertexEffect", _SE(js_cocos2dx_spine4_VertexEffectDelegate_getJitterVertexEffect));
    cls->defineFunction("clear", _SE(js_cocos2dx_spine4_VertexEffectDelegate_clear));
    cls->defineFinalizeFunction(_SE(js_spine4_VertexEffectDelegate_finalize));
    cls->install();
    JSBClassType::registerClass<spine4::VertexEffectDelegate>(cls);

    __jsb_spine4_VertexEffectDelegate_proto = cls->getProto();
    __jsb_spine4_VertexEffectDelegate_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SkeletonRenderer_proto = nullptr;
se::Class* __jsb_spine4_SkeletonRenderer_class = nullptr;

static bool js_cocos2dx_spine4_SkeletonRenderer_setUseTint(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setUseTint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setUseTint : Error processing arguments");
        cobj->setUseTint(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setUseTint)

static bool js_cocos2dx_spine4_SkeletonRenderer_setTimeScale(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setTimeScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setTimeScale : Error processing arguments");
        cobj->setTimeScale(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setTimeScale)

static bool js_cocos2dx_spine4_SkeletonRenderer_render(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_render : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_render : Error processing arguments");
        cobj->render(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_render)

static bool js_cocos2dx_spine4_SkeletonRenderer_initWithUUID(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithUUID : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithUUID : Error processing arguments");
        cobj->initWithUUID(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_initWithUUID)

static bool js_cocos2dx_spine4_SkeletonRenderer_setAttachUtil(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setAttachUtil : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::RealTimeAttachUtil* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setAttachUtil : Error processing arguments");
        cobj->setAttachUtil(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setAttachUtil)

static bool js_cocos2dx_spine4_SkeletonRenderer_setOpacityModifyRGB(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setOpacityModifyRGB : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setOpacityModifyRGB : Error processing arguments");
        cobj->setOpacityModifyRGB(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setOpacityModifyRGB)

static bool js_cocos2dx_spine4_SkeletonRenderer_paused(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_paused : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_paused : Error processing arguments");
        cobj->paused(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_paused)

static bool js_cocos2dx_spine4_SkeletonRenderer_setAttachment(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp; ok &= seval_to_std_string(args[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            bool result = cobj->setAttachment(arg0, arg1);
            ok &= boolean_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setAttachment : Error processing arguments");
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            bool result = cobj->setAttachment(arg0, arg1);
            ok &= boolean_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setAttachment : Error processing arguments");
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setAttachment)

static bool js_cocos2dx_spine4_SkeletonRenderer_setBonesToSetupPose(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setBonesToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setBonesToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setBonesToSetupPose)

static bool js_cocos2dx_spine4_SkeletonRenderer_onEnable(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_onEnable : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->onEnable();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_onEnable)

static bool js_cocos2dx_spine4_SkeletonRenderer_setEffect(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setEffect : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        cocos2d::renderer::EffectVariant* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setEffect : Error processing arguments");
        cobj->setEffect(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setEffect)

static bool js_cocos2dx_spine4_SkeletonRenderer_stopSchedule(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_stopSchedule : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->stopSchedule();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_stopSchedule)

static bool js_cocos2dx_spine4_SkeletonRenderer_isOpacityModifyRGB(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_isOpacityModifyRGB : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isOpacityModifyRGB();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_isOpacityModifyRGB : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_isOpacityModifyRGB)

static bool js_cocos2dx_spine4_SkeletonRenderer_setDebugSlotsEnabled(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setDebugSlotsEnabled : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setDebugSlotsEnabled : Error processing arguments");
        cobj->setDebugSlotsEnabled(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setDebugSlotsEnabled)

static bool js_cocos2dx_spine4_SkeletonRenderer_initWithJsonFile(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithJsonFile : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            cobj->initWithJsonFile(arg0, arg1);
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            cobj->initWithJsonFile(arg0, arg1, arg2);
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            cobj->initWithJsonFile(arg0, arg1);
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            cobj->initWithJsonFile(arg0, arg1, arg2);
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_initWithJsonFile)

static bool js_cocos2dx_spine4_SkeletonRenderer_setToSetupPose(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setToSetupPose)

static bool js_cocos2dx_spine4_SkeletonRenderer_setSlotsToSetupPose(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setSlotsToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setSlotsToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setSlotsToSetupPose)

static bool js_cocos2dx_spine4_SkeletonRenderer_initWithBinaryFile(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithBinaryFile : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            cobj->initWithBinaryFile(arg0, arg1);
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            cobj->initWithBinaryFile(arg0, arg1, arg2);
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            cobj->initWithBinaryFile(arg0, arg1);
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            cobj->initWithBinaryFile(arg0, arg1, arg2);
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_initWithBinaryFile)

static bool js_cocos2dx_spine4_SkeletonRenderer_initWithSkeleton(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithSkeleton : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::Skeleton* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithSkeleton : Error processing arguments");
        cobj->initWithSkeleton(arg0);
        return true;
    }
    if (argc == 2) {
        spine4::Skeleton* arg0 = nullptr;
        bool arg1;
        ok &= seval_to_native_ptr(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithSkeleton : Error processing arguments");
        cobj->initWithSkeleton(arg0, arg1);
        return true;
    }
    if (argc == 3) {
        spine4::Skeleton* arg0 = nullptr;
        bool arg1;
        bool arg2;
        ok &= seval_to_native_ptr(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        ok &= seval_to_boolean(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithSkeleton : Error processing arguments");
        cobj->initWithSkeleton(arg0, arg1, arg2);
        return true;
    }
    if (argc == 4) {
        spine4::Skeleton* arg0 = nullptr;
        bool arg1;
        bool arg2;
        bool arg3;
        ok &= seval_to_native_ptr(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        ok &= seval_to_boolean(args[2], &arg2);
        ok &= seval_to_boolean(args[3], &arg3);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_initWithSkeleton : Error processing arguments");
        cobj->initWithSkeleton(arg0, arg1, arg2, arg3);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_initWithSkeleton)

static bool js_cocos2dx_spine4_SkeletonRenderer_getBoundingBox(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_getBoundingBox : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cocos2d::Rect result = cobj->getBoundingBox();
        ok &= Rect_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_getBoundingBox : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_getBoundingBox)

static bool js_cocos2dx_spine4_SkeletonRenderer_getDebugData(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_getDebugData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        se_object_ptr result = cobj->getDebugData();
        s.rval().setObject(result);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_getDebugData : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_getDebugData)

static bool js_cocos2dx_spine4_SkeletonRenderer_findBone(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_findBone : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_findBone : Error processing arguments");
        spine4::Bone* result = cobj->findBone(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Bone>((spine4::Bone*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_findBone : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_findBone)

static bool js_cocos2dx_spine4_SkeletonRenderer_update(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_update : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_update : Error processing arguments");
        cobj->update(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_update)

static bool js_cocos2dx_spine4_SkeletonRenderer_getAttachment(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_getAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        std::string arg0;
        std::string arg1;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_std_string(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_getAttachment : Error processing arguments");
        spine4::Attachment* result = cobj->getAttachment(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_getAttachment : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_getAttachment)

static bool js_cocos2dx_spine4_SkeletonRenderer_setDebugMeshEnabled(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setDebugMeshEnabled : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setDebugMeshEnabled : Error processing arguments");
        cobj->setDebugMeshEnabled(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setDebugMeshEnabled)

static bool js_cocos2dx_spine4_SkeletonRenderer_beginSchedule(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_beginSchedule : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->beginSchedule();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_beginSchedule)

static bool js_cocos2dx_spine4_SkeletonRenderer_initialize(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_initialize : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->initialize();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_initialize)

static bool js_cocos2dx_spine4_SkeletonRenderer_setDebugBonesEnabled(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setDebugBonesEnabled : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setDebugBonesEnabled : Error processing arguments");
        cobj->setDebugBonesEnabled(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setDebugBonesEnabled)

static bool js_cocos2dx_spine4_SkeletonRenderer_getTimeScale(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_getTimeScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTimeScale();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_getTimeScale : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_getTimeScale)

static bool js_cocos2dx_spine4_SkeletonRenderer_setSlotsRange(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setSlotsRange : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        int arg0 = 0;
        int arg1 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        do { int32_t tmp = 0; ok &= seval_to_int32(args[1], &tmp); arg1 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setSlotsRange : Error processing arguments");
        cobj->setSlotsRange(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setSlotsRange)

static bool js_cocos2dx_spine4_SkeletonRenderer_onDisable(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_onDisable : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->onDisable();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_onDisable)

static bool js_cocos2dx_spine4_SkeletonRenderer_setColor(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        cocos2d::Color4B arg0;
        ok &= seval_to_Color4B(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setColor : Error processing arguments");
        cobj->setColor(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setColor)

static bool js_cocos2dx_spine4_SkeletonRenderer_bindNodeProxy(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_bindNodeProxy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        cocos2d::renderer::NodeProxy* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_bindNodeProxy : Error processing arguments");
        cobj->bindNodeProxy(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_bindNodeProxy)

static bool js_cocos2dx_spine4_SkeletonRenderer_setBatchEnabled(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setBatchEnabled : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setBatchEnabled : Error processing arguments");
        cobj->setBatchEnabled(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setBatchEnabled)

static bool js_cocos2dx_spine4_SkeletonRenderer_setSkin(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setSkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            const char* arg0 = nullptr;
            std::string arg0_tmp; ok &= seval_to_std_string(args[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cobj->setSkin(arg0);
            return true;
        }
    } while(false);

    do {
        if (argc == 1) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            cobj->setSkin(arg0);
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setSkin)

static bool js_cocos2dx_spine4_SkeletonRenderer_findSlot(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_findSlot : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_findSlot : Error processing arguments");
        spine4::Slot* result = cobj->findSlot(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Slot>((spine4::Slot*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_findSlot : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_findSlot)

static bool js_cocos2dx_spine4_SkeletonRenderer_updateWorldTransform(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_updateWorldTransform : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->updateWorldTransform();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_updateWorldTransform)

static bool js_cocos2dx_spine4_SkeletonRenderer_getSkeleton(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_getSkeleton : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Skeleton* result = cobj->getSkeleton();
        ok &= native_ptr_to_rooted_seval<spine4::Skeleton>((spine4::Skeleton*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_getSkeleton : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_getSkeleton)

static bool js_cocos2dx_spine4_SkeletonRenderer_setVertexEffectDelegate(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setVertexEffectDelegate : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::VertexEffectDelegate* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setVertexEffectDelegate : Error processing arguments");
        cobj->setVertexEffectDelegate(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setVertexEffectDelegate)

SE_DECLARE_FINALIZE_FUNC(js_spine4_SkeletonRenderer_finalize)

static bool js_cocos2dx_spine4_SkeletonRenderer_constructor(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            spine4::Skeleton* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 2) {
            spine4::Skeleton* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            bool arg1;
            ok &= seval_to_boolean(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0, arg1);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 3) {
            spine4::Skeleton* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            bool arg1;
            ok &= seval_to_boolean(args[1], &arg1);
            if (!ok) { ok = true; break; }
            bool arg2;
            ok &= seval_to_boolean(args[2], &arg2);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0, arg1, arg2);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 4) {
            spine4::Skeleton* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            bool arg1;
            ok &= seval_to_boolean(args[1], &arg1);
            if (!ok) { ok = true; break; }
            bool arg2;
            ok &= seval_to_boolean(args[2], &arg2);
            if (!ok) { ok = true; break; }
            bool arg3;
            ok &= seval_to_boolean(args[3], &arg3);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0, arg1, arg2, arg3);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 0) {
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer();
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 1) {
            spine4::SkeletonData* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 2) {
            spine4::SkeletonData* arg0 = nullptr;
            ok &= seval_to_native_ptr(args[0], &arg0);
            if (!ok) { ok = true; break; }
            bool arg1;
            ok &= seval_to_boolean(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0, arg1);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0, arg1);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0, arg1, arg2);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0, arg1);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            spine4::SkeletonRenderer* cobj = new (std::nothrow) spine4::SkeletonRenderer(arg0, arg1, arg2);
            s.thisObject()->setPrivateData(cobj);
            return true;
        }
    } while(false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_CTOR(js_cocos2dx_spine4_SkeletonRenderer_constructor, __jsb_spine4_SkeletonRenderer_class, js_spine4_SkeletonRenderer_finalize)




static bool js_spine4_SkeletonRenderer_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spine4::SkeletonRenderer)", s.nativeThisObject());
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    cobj->release();
    return true;
}
SE_BIND_FINALIZE_FUNC(js_spine4_SkeletonRenderer_finalize)

bool js_register_cocos2dx_spine4_SkeletonRenderer(se::Object* obj)
{
    auto cls = se::Class::create("Skeleton", obj, nullptr, _SE(js_cocos2dx_spine4_SkeletonRenderer_constructor));

    cls->defineFunction("setUseTint", _SE(js_cocos2dx_spine4_SkeletonRenderer_setUseTint));
    cls->defineFunction("setTimeScale", _SE(js_cocos2dx_spine4_SkeletonRenderer_setTimeScale));
    cls->defineFunction("render", _SE(js_cocos2dx_spine4_SkeletonRenderer_render));
    cls->defineFunction("initWithUUID", _SE(js_cocos2dx_spine4_SkeletonRenderer_initWithUUID));
    cls->defineFunction("setAttachUtil", _SE(js_cocos2dx_spine4_SkeletonRenderer_setAttachUtil));
    cls->defineFunction("setOpacityModifyRGB", _SE(js_cocos2dx_spine4_SkeletonRenderer_setOpacityModifyRGB));
    cls->defineFunction("paused", _SE(js_cocos2dx_spine4_SkeletonRenderer_paused));
    cls->defineFunction("setAttachment", _SE(js_cocos2dx_spine4_SkeletonRenderer_setAttachment));
    cls->defineFunction("setBonesToSetupPose", _SE(js_cocos2dx_spine4_SkeletonRenderer_setBonesToSetupPose));
    cls->defineFunction("onEnable", _SE(js_cocos2dx_spine4_SkeletonRenderer_onEnable));
    cls->defineFunction("setEffect", _SE(js_cocos2dx_spine4_SkeletonRenderer_setEffect));
    cls->defineFunction("stopSchedule", _SE(js_cocos2dx_spine4_SkeletonRenderer_stopSchedule));
    cls->defineFunction("isOpacityModifyRGB", _SE(js_cocos2dx_spine4_SkeletonRenderer_isOpacityModifyRGB));
    cls->defineFunction("setDebugSlotsEnabled", _SE(js_cocos2dx_spine4_SkeletonRenderer_setDebugSlotsEnabled));
    cls->defineFunction("initWithJsonFile", _SE(js_cocos2dx_spine4_SkeletonRenderer_initWithJsonFile));
    cls->defineFunction("setToSetupPose", _SE(js_cocos2dx_spine4_SkeletonRenderer_setToSetupPose));
    cls->defineFunction("setSlotsToSetupPose", _SE(js_cocos2dx_spine4_SkeletonRenderer_setSlotsToSetupPose));
    cls->defineFunction("initWithBinaryFile", _SE(js_cocos2dx_spine4_SkeletonRenderer_initWithBinaryFile));
    cls->defineFunction("initWithSkeleton", _SE(js_cocos2dx_spine4_SkeletonRenderer_initWithSkeleton));
    cls->defineFunction("getBoundingBox", _SE(js_cocos2dx_spine4_SkeletonRenderer_getBoundingBox));
    cls->defineFunction("getDebugData", _SE(js_cocos2dx_spine4_SkeletonRenderer_getDebugData));
    cls->defineFunction("findBone", _SE(js_cocos2dx_spine4_SkeletonRenderer_findBone));
    cls->defineFunction("update", _SE(js_cocos2dx_spine4_SkeletonRenderer_update));
    cls->defineFunction("getAttachment", _SE(js_cocos2dx_spine4_SkeletonRenderer_getAttachment));
    cls->defineFunction("setDebugMeshEnabled", _SE(js_cocos2dx_spine4_SkeletonRenderer_setDebugMeshEnabled));
    cls->defineFunction("beginSchedule", _SE(js_cocos2dx_spine4_SkeletonRenderer_beginSchedule));
    cls->defineFunction("initialize", _SE(js_cocos2dx_spine4_SkeletonRenderer_initialize));
    cls->defineFunction("setDebugBonesEnabled", _SE(js_cocos2dx_spine4_SkeletonRenderer_setDebugBonesEnabled));
    cls->defineFunction("getTimeScale", _SE(js_cocos2dx_spine4_SkeletonRenderer_getTimeScale));
    cls->defineFunction("setSlotsRange", _SE(js_cocos2dx_spine4_SkeletonRenderer_setSlotsRange));
    cls->defineFunction("onDisable", _SE(js_cocos2dx_spine4_SkeletonRenderer_onDisable));
    cls->defineFunction("setColor", _SE(js_cocos2dx_spine4_SkeletonRenderer_setColor));
    cls->defineFunction("bindNodeProxy", _SE(js_cocos2dx_spine4_SkeletonRenderer_bindNodeProxy));
    cls->defineFunction("setBatchEnabled", _SE(js_cocos2dx_spine4_SkeletonRenderer_setBatchEnabled));
    cls->defineFunction("setSkin", _SE(js_cocos2dx_spine4_SkeletonRenderer_setSkin));
    cls->defineFunction("findSlot", _SE(js_cocos2dx_spine4_SkeletonRenderer_findSlot));
    cls->defineFunction("updateWorldTransform", _SE(js_cocos2dx_spine4_SkeletonRenderer_updateWorldTransform));
    cls->defineFunction("getSkeleton", _SE(js_cocos2dx_spine4_SkeletonRenderer_getSkeleton));
    cls->defineFunction("setVertexEffectDelegate", _SE(js_cocos2dx_spine4_SkeletonRenderer_setVertexEffectDelegate));
    cls->defineFinalizeFunction(_SE(js_spine4_SkeletonRenderer_finalize));
    cls->install();
    JSBClassType::registerClass<spine4::SkeletonRenderer>(cls);

    __jsb_spine4_SkeletonRenderer_proto = cls->getProto();
    __jsb_spine4_SkeletonRenderer_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SkeletonAnimation_proto = nullptr;
se::Class* __jsb_spine4_SkeletonAnimation_class = nullptr;

static bool js_cocos2dx_spine4_SkeletonAnimation_setAnimation(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        int arg0 = 0;
        std::string arg1;
        bool arg2;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_std_string(args[1], &arg1);
        ok &= seval_to_boolean(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setAnimation : Error processing arguments");
        spine4::TrackEntry* result = cobj->setAnimation(arg0, arg1, arg2);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setAnimation)

static bool js_cocos2dx_spine4_SkeletonAnimation_findAnimation(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_findAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_findAnimation : Error processing arguments");
        spine4::Animation* result = cobj->findAnimation(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Animation>((spine4::Animation*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_findAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_findAnimation)

static bool js_cocos2dx_spine4_SkeletonAnimation_setTrackEventListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackEventListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::TrackEntry* arg0 = nullptr;
        std::function<void (spine4::TrackEntry *, spine4::Event *)> arg1;
        ok &= seval_to_native_ptr(args[0], &arg0);
        do {
            if (args[1].isObject() && args[1].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[1]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0, spine4::Event* larg1) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(2);
                    spine4::TrackEntry* safeEntry = larg0 ? larg0 : arg0;
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)safeEntry, &args[0]);
                    ok &= native_ptr_to_rooted_seval<spine4::Event>((spine4::Event*)larg1, &args[1]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg1 = lambda;
            }
            else
            {
                arg1 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackEventListener : Error processing arguments");
        cobj->setTrackEventListener(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setTrackEventListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_setMix(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setMix : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        std::string arg0;
        std::string arg1;
        float arg2 = 0;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_std_string(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setMix : Error processing arguments");
        cobj->setMix(arg0, arg1, arg2);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setMix)

static bool js_cocos2dx_spine4_SkeletonAnimation_setTrackStartListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackStartListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::TrackEntry* arg0 = nullptr;
        std::function<void (spine4::TrackEntry *)> arg1;
        ok &= seval_to_native_ptr(args[0], &arg0);
        do {
            if (args[1].isObject() && args[1].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[1]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    spine4::TrackEntry* safeEntry = larg0 ? larg0 : cobj->getCurrent();
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)safeEntry, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg1 = lambda;
            }
            else
            {
                arg1 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackStartListener : Error processing arguments");
        cobj->setTrackStartListener(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setTrackStartListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_addEmptyAnimation(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_addEmptyAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        int arg0 = 0;
        float arg1 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_addEmptyAnimation : Error processing arguments");
        spine4::TrackEntry* result = cobj->addEmptyAnimation(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_addEmptyAnimation : Error processing arguments");
        return true;
    }
    if (argc == 3) {
        int arg0 = 0;
        float arg1 = 0;
        float arg2 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_float(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_addEmptyAnimation : Error processing arguments");
        spine4::TrackEntry* result = cobj->addEmptyAnimation(arg0, arg1, arg2);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_addEmptyAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_addEmptyAnimation)

static bool js_cocos2dx_spine4_SkeletonAnimation_setDisposeListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setDisposeListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (spine4::TrackEntry *)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setDisposeListener : Error processing arguments");
        cobj->setDisposeListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setDisposeListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_setTrackInterruptListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackInterruptListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::TrackEntry* arg0 = nullptr;
        std::function<void (spine4::TrackEntry *)> arg1;
        ok &= seval_to_native_ptr(args[0], &arg0);
        do {
            if (args[1].isObject() && args[1].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[1]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg1 = lambda;
            }
            else
            {
                arg1 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackInterruptListener : Error processing arguments");
        cobj->setTrackInterruptListener(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setTrackInterruptListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_setTrackCompleteListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackCompleteListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::TrackEntry* arg0 = nullptr;
        std::function<void (spine4::TrackEntry *)> arg1;
        ok &= seval_to_native_ptr(args[0], &arg0);
        do {
            if (args[1].isObject() && args[1].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[1]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    spine4::TrackEntry* safeEntry = larg0 ? larg0 : arg0;
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)safeEntry, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg1 = lambda;
            }
            else
            {
                arg1 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackCompleteListener : Error processing arguments");
        cobj->setTrackCompleteListener(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setTrackCompleteListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_setAnimationStateData(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setAnimationStateData : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::AnimationStateData* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setAnimationStateData : Error processing arguments");
        cobj->setAnimationStateData(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setAnimationStateData)

static bool js_cocos2dx_spine4_SkeletonAnimation_setEndListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setEndListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (spine4::TrackEntry *)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setEndListener : Error processing arguments");
        cobj->setEndListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setEndListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_getState(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_getState : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::AnimationState* result = cobj->getState();
        ok &= native_ptr_to_rooted_seval<spine4::AnimationState>((spine4::AnimationState*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_getState : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_getState)

static bool js_cocos2dx_spine4_SkeletonAnimation_setCompleteListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setCompleteListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (spine4::TrackEntry *)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    spine4::TrackEntry* safeEntry = larg0 ? larg0 : cobj->getCurrent();
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)safeEntry, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setCompleteListener : Error processing arguments");
        cobj->setCompleteListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setCompleteListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_setTrackDisposeListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackDisposeListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::TrackEntry* arg0 = nullptr;
        std::function<void (spine4::TrackEntry *)> arg1;
        ok &= seval_to_native_ptr(args[0], &arg0);
        do {
            if (args[1].isObject() && args[1].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[1]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg1 = lambda;
            }
            else
            {
                arg1 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackDisposeListener : Error processing arguments");
        cobj->setTrackDisposeListener(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setTrackDisposeListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_getCurrent(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_getCurrent : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::TrackEntry* result = cobj->getCurrent();
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_getCurrent : Error processing arguments");
        return true;
    }
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_getCurrent : Error processing arguments");
        spine4::TrackEntry* result = cobj->getCurrent(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_getCurrent : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_getCurrent)

static bool js_cocos2dx_spine4_SkeletonAnimation_setEventListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setEventListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (spine4::TrackEntry *, spine4::Event *)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0, spine4::Event* larg1) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(2);
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)larg0, &args[0]);
                    ok &= native_ptr_to_rooted_seval<spine4::Event>((spine4::Event*)larg1, &args[1]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setEventListener : Error processing arguments");
        cobj->setEventListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setEventListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimation(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        int arg0 = 0;
        float arg1 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimation : Error processing arguments");
        spine4::TrackEntry* result = cobj->setEmptyAnimation(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimation)

static bool js_cocos2dx_spine4_SkeletonAnimation_clearTrack(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_clearTrack : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cobj->clearTrack();
        return true;
    }
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_clearTrack : Error processing arguments");
        cobj->clearTrack(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_clearTrack)

static bool js_cocos2dx_spine4_SkeletonAnimation_setInterruptListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setInterruptListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (spine4::TrackEntry *)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setInterruptListener : Error processing arguments");
        cobj->setInterruptListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setInterruptListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_addAnimation(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_addAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        int arg0 = 0;
        std::string arg1;
        bool arg2;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_std_string(args[1], &arg1);
        ok &= seval_to_boolean(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_addAnimation : Error processing arguments");
        spine4::TrackEntry* result = cobj->addAnimation(arg0, arg1, arg2);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_addAnimation : Error processing arguments");
        return true;
    }
    if (argc == 4) {
        int arg0 = 0;
        std::string arg1;
        bool arg2;
        float arg3 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_std_string(args[1], &arg1);
        ok &= seval_to_boolean(args[2], &arg2);
        ok &= seval_to_float(args[3], &arg3);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_addAnimation : Error processing arguments");
        spine4::TrackEntry* result = cobj->addAnimation(arg0, arg1, arg2, arg3);
        ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_addAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_addAnimation)

static bool js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimations(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimations : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimations : Error processing arguments");
        cobj->setEmptyAnimations(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimations)

static bool js_cocos2dx_spine4_SkeletonAnimation_clearTracks(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_clearTracks : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->clearTracks();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_clearTracks)

static bool js_cocos2dx_spine4_SkeletonAnimation_setTrackEndListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackEndListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::TrackEntry* arg0 = nullptr;
        std::function<void (spine4::TrackEntry *)> arg1;
        ok &= seval_to_native_ptr(args[0], &arg0);
        do {
            if (args[1].isObject() && args[1].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[1]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg1 = lambda;
            }
            else
            {
                arg1 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setTrackEndListener : Error processing arguments");
        cobj->setTrackEndListener(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setTrackEndListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_setStartListener(se::State& s)
{
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonAnimation_setStartListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (spine4::TrackEntry *)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](spine4::TrackEntry* larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= native_ptr_to_rooted_seval<spine4::TrackEntry>((spine4::TrackEntry*)larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setStartListener : Error processing arguments");
        cobj->setStartListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setStartListener)

static bool js_cocos2dx_spine4_SkeletonAnimation_createWithBinaryFile(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::SkeletonAnimation* result = spine4::SkeletonAnimation::createWithBinaryFile(arg0, arg1);
            ok &= native_ptr_to_seval<spine4::SkeletonAnimation>((spine4::SkeletonAnimation*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_createWithBinaryFile : Error processing arguments");
            return true;
        }
    } while (false);
    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            spine4::SkeletonAnimation* result = spine4::SkeletonAnimation::createWithBinaryFile(arg0, arg1, arg2);
            ok &= native_ptr_to_seval<spine4::SkeletonAnimation>((spine4::SkeletonAnimation*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_createWithBinaryFile : Error processing arguments");
            return true;
        }
    } while (false);
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::SkeletonAnimation* result = spine4::SkeletonAnimation::createWithBinaryFile(arg0, arg1);
            ok &= native_ptr_to_seval<spine4::SkeletonAnimation>((spine4::SkeletonAnimation*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_createWithBinaryFile : Error processing arguments");
            return true;
        }
    } while (false);
    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            spine4::SkeletonAnimation* result = spine4::SkeletonAnimation::createWithBinaryFile(arg0, arg1, arg2);
            ok &= native_ptr_to_seval<spine4::SkeletonAnimation>((spine4::SkeletonAnimation*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_createWithBinaryFile : Error processing arguments");
            return true;
        }
    } while (false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_createWithBinaryFile)

static bool js_cocos2dx_spine4_SkeletonAnimation_create(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = spine4::SkeletonAnimation::create();
        result->retain();
        auto obj = se::Object::createObjectWithClass(__jsb_spine4_SkeletonAnimation_class);
        obj->setPrivateData(result);
        s.rval().setObject(obj);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_create)

static bool js_cocos2dx_spine4_SkeletonAnimation_createWithJsonFile(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::SkeletonAnimation* result = spine4::SkeletonAnimation::createWithJsonFile(arg0, arg1);
            ok &= native_ptr_to_seval<spine4::SkeletonAnimation>((spine4::SkeletonAnimation*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_createWithJsonFile : Error processing arguments");
            return true;
        }
    } while (false);
    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            spine4::SkeletonAnimation* result = spine4::SkeletonAnimation::createWithJsonFile(arg0, arg1, arg2);
            ok &= native_ptr_to_seval<spine4::SkeletonAnimation>((spine4::SkeletonAnimation*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_createWithJsonFile : Error processing arguments");
            return true;
        }
    } while (false);
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            spine4::SkeletonAnimation* result = spine4::SkeletonAnimation::createWithJsonFile(arg0, arg1);
            ok &= native_ptr_to_seval<spine4::SkeletonAnimation>((spine4::SkeletonAnimation*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_createWithJsonFile : Error processing arguments");
            return true;
        }
    } while (false);
    do {
        if (argc == 3) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            spine4::Atlas* arg1 = nullptr;
            ok &= seval_to_native_ptr(args[1], &arg1);
            if (!ok) { ok = true; break; }
            float arg2 = 0;
            ok &= seval_to_float(args[2], &arg2);
            if (!ok) { ok = true; break; }
            spine4::SkeletonAnimation* result = spine4::SkeletonAnimation::createWithJsonFile(arg0, arg1, arg2);
            ok &= native_ptr_to_seval<spine4::SkeletonAnimation>((spine4::SkeletonAnimation*)result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_createWithJsonFile : Error processing arguments");
            return true;
        }
    } while (false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_createWithJsonFile)

static bool js_cocos2dx_spine4_SkeletonAnimation_setGlobalTimeScale(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonAnimation_setGlobalTimeScale : Error processing arguments");
        spine4::SkeletonAnimation::setGlobalTimeScale(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonAnimation_setGlobalTimeScale)

SE_DECLARE_FINALIZE_FUNC(js_spine4_SkeletonAnimation_finalize)

static bool js_cocos2dx_spine4_SkeletonAnimation_constructor(se::State& s)
{
    spine4::SkeletonAnimation* cobj = new (std::nothrow) spine4::SkeletonAnimation();
    s.thisObject()->setPrivateData(cobj);
    return true;
}
SE_BIND_CTOR(js_cocos2dx_spine4_SkeletonAnimation_constructor, __jsb_spine4_SkeletonAnimation_class, js_spine4_SkeletonAnimation_finalize)

static bool js_cocos2dx_spine4_SkeletonAnimation_ctor(se::State& s)
{
    spine4::SkeletonAnimation* cobj = new (std::nothrow) spine4::SkeletonAnimation();
    s.thisObject()->setPrivateData(cobj);
    return true;
}
SE_BIND_SUB_CLS_CTOR(js_cocos2dx_spine4_SkeletonAnimation_ctor, __jsb_spine4_SkeletonAnimation_class, js_spine4_SkeletonAnimation_finalize)


    

extern se::Object* __jsb_spine4_SkeletonRenderer_proto;

static bool js_spine4_SkeletonAnimation_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spine4::SkeletonAnimation)", s.nativeThisObject());
    spine4::SkeletonAnimation* cobj = (spine4::SkeletonAnimation*)s.nativeThisObject();
    cobj->release();
    return true;
}
SE_BIND_FINALIZE_FUNC(js_spine4_SkeletonAnimation_finalize)

bool js_register_cocos2dx_spine4_SkeletonAnimation(se::Object* obj)
{
    auto cls = se::Class::create("SkeletonAnimation", obj, __jsb_spine4_SkeletonRenderer_proto, _SE(js_cocos2dx_spine4_SkeletonAnimation_constructor));

    cls->defineFunction("setAnimation", _SE(js_cocos2dx_spine4_SkeletonAnimation_setAnimation));
    cls->defineFunction("findAnimation", _SE(js_cocos2dx_spine4_SkeletonAnimation_findAnimation));
    cls->defineFunction("setTrackEventListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setTrackEventListener));
    cls->defineFunction("setMix", _SE(js_cocos2dx_spine4_SkeletonAnimation_setMix));
    cls->defineFunction("setTrackStartListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setTrackStartListener));
    cls->defineFunction("addEmptyAnimation", _SE(js_cocos2dx_spine4_SkeletonAnimation_addEmptyAnimation));
    cls->defineFunction("setDisposeListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setDisposeListener));
    cls->defineFunction("setTrackInterruptListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setTrackInterruptListener));
    cls->defineFunction("setTrackCompleteListenerNative", _SE(js_cocos2dx_spine4_SkeletonAnimation_setTrackCompleteListener));
    cls->defineFunction("setTrackCompleteListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setTrackCompleteListener));
    cls->defineFunction("setAnimationStateData", _SE(js_cocos2dx_spine4_SkeletonAnimation_setAnimationStateData));
    cls->defineFunction("setEndListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setEndListener));
    cls->defineFunction("getState", _SE(js_cocos2dx_spine4_SkeletonAnimation_getState));
    cls->defineFunction("setCompleteListenerNative", _SE(js_cocos2dx_spine4_SkeletonAnimation_setCompleteListener));
    cls->defineFunction("setCompleteListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setCompleteListener));
    cls->defineFunction("setTrackDisposeListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setTrackDisposeListener));
    cls->defineFunction("getCurrent", _SE(js_cocos2dx_spine4_SkeletonAnimation_getCurrent));
    cls->defineFunction("setEventListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setEventListener));
    cls->defineFunction("setEmptyAnimation", _SE(js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimation));
    cls->defineFunction("clearTrack", _SE(js_cocos2dx_spine4_SkeletonAnimation_clearTrack));
    cls->defineFunction("setInterruptListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setInterruptListener));
    cls->defineFunction("addAnimation", _SE(js_cocos2dx_spine4_SkeletonAnimation_addAnimation));
    cls->defineFunction("setEmptyAnimations", _SE(js_cocos2dx_spine4_SkeletonAnimation_setEmptyAnimations));
    cls->defineFunction("clearTracks", _SE(js_cocos2dx_spine4_SkeletonAnimation_clearTracks));
    cls->defineFunction("setTrackEndListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setTrackEndListener));
    cls->defineFunction("setStartListener", _SE(js_cocos2dx_spine4_SkeletonAnimation_setStartListener));
    cls->defineFunction("ctor", _SE(js_cocos2dx_spine4_SkeletonAnimation_ctor));
    cls->defineStaticFunction("createWithBinaryFile", _SE(js_cocos2dx_spine4_SkeletonAnimation_createWithBinaryFile));
    cls->defineStaticFunction("create", _SE(js_cocos2dx_spine4_SkeletonAnimation_create));
    cls->defineStaticFunction("createWithJsonFile", _SE(js_cocos2dx_spine4_SkeletonAnimation_createWithJsonFile));
    cls->defineStaticFunction("setGlobalTimeScale", _SE(js_cocos2dx_spine4_SkeletonAnimation_setGlobalTimeScale));
    cls->defineFinalizeFunction(_SE(js_spine4_SkeletonAnimation_finalize));
    cls->install();
    JSBClassType::registerClass<spine4::SkeletonAnimation>(cls);

    __jsb_spine4_SkeletonAnimation_proto = cls->getProto();
    __jsb_spine4_SkeletonAnimation_class = cls;

    jsb_set_extend_property("spine4", "SkeletonAnimation");
    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SkeletonDataMgr_proto = nullptr;
se::Class* __jsb_spine4_SkeletonDataMgr_class = nullptr;

static bool js_cocos2dx_spine4_SkeletonDataMgr_setDestroyCallback(se::State& s)
{
    spine4::SkeletonDataMgr* cobj = (spine4::SkeletonDataMgr*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonDataMgr_setDestroyCallback : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (int)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](int larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= int32_to_seval(larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonDataMgr_setDestroyCallback : Error processing arguments");
        cobj->setDestroyCallback(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonDataMgr_setDestroyCallback)

static bool js_cocos2dx_spine4_SkeletonDataMgr_getInstance(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::SkeletonDataMgr* result = spine4::SkeletonDataMgr::getInstance();
        ok &= native_ptr_to_seval<spine4::SkeletonDataMgr>((spine4::SkeletonDataMgr*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonDataMgr_getInstance : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonDataMgr_getInstance)

SE_DECLARE_FINALIZE_FUNC(js_spine4_SkeletonDataMgr_finalize)

static bool js_cocos2dx_spine4_SkeletonDataMgr_constructor(se::State& s)
{
    spine4::SkeletonDataMgr* cobj = new (std::nothrow) spine4::SkeletonDataMgr();
    s.thisObject()->setPrivateData(cobj);
    se::NonRefNativePtrCreatedByCtorMap::emplace(cobj);
    return true;
}
SE_BIND_CTOR(js_cocos2dx_spine4_SkeletonDataMgr_constructor, __jsb_spine4_SkeletonDataMgr_class, js_spine4_SkeletonDataMgr_finalize)




static bool js_spine4_SkeletonDataMgr_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spine4::SkeletonDataMgr)", s.nativeThisObject());
    auto iter = se::NonRefNativePtrCreatedByCtorMap::find(s.nativeThisObject());
    if (iter != se::NonRefNativePtrCreatedByCtorMap::end())
    {
        se::NonRefNativePtrCreatedByCtorMap::erase(iter);
        spine4::SkeletonDataMgr* cobj = (spine4::SkeletonDataMgr*)s.nativeThisObject();
        delete cobj;
    }
    return true;
}
SE_BIND_FINALIZE_FUNC(js_spine4_SkeletonDataMgr_finalize)

bool js_register_cocos2dx_spine4_SkeletonDataMgr(se::Object* obj)
{
    auto cls = se::Class::create("SkeletonDataMgr", obj, nullptr, _SE(js_cocos2dx_spine4_SkeletonDataMgr_constructor));

    cls->defineFunction("setDestroyCallback", _SE(js_cocos2dx_spine4_SkeletonDataMgr_setDestroyCallback));
    cls->defineStaticFunction("getInstance", _SE(js_cocos2dx_spine4_SkeletonDataMgr_getInstance));
    cls->defineFinalizeFunction(_SE(js_spine4_SkeletonDataMgr_finalize));
    cls->install();
    JSBClassType::registerClass<spine4::SkeletonDataMgr>(cls);

    __jsb_spine4_SkeletonDataMgr_proto = cls->getProto();
    __jsb_spine4_SkeletonDataMgr_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SkeletonCacheMgr_proto = nullptr;
se::Class* __jsb_spine4_SkeletonCacheMgr_class = nullptr;

static bool js_cocos2dx_spine4_SkeletonCacheMgr_removeSkeletonCache(se::State& s)
{
    spine4::SkeletonCacheMgr* cobj = (spine4::SkeletonCacheMgr*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheMgr_removeSkeletonCache : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheMgr_removeSkeletonCache : Error processing arguments");
        cobj->removeSkeletonCache(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheMgr_removeSkeletonCache)

static bool js_cocos2dx_spine4_SkeletonCacheMgr_buildSkeletonCache(se::State& s)
{
    spine4::SkeletonCacheMgr* cobj = (spine4::SkeletonCacheMgr*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheMgr_buildSkeletonCache : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheMgr_buildSkeletonCache : Error processing arguments");
        spine4::SkeletonCache* result = cobj->buildSkeletonCache(arg0);
        ok &= native_ptr_to_seval<spine4::SkeletonCache>((spine4::SkeletonCache*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheMgr_buildSkeletonCache : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheMgr_buildSkeletonCache)

static bool js_cocos2dx_spine4_SkeletonCacheMgr_destroyInstance(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        spine4::SkeletonCacheMgr::destroyInstance();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheMgr_destroyInstance)

static bool js_cocos2dx_spine4_SkeletonCacheMgr_getInstance(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::SkeletonCacheMgr* result = spine4::SkeletonCacheMgr::getInstance();
        ok &= native_ptr_to_seval<spine4::SkeletonCacheMgr>((spine4::SkeletonCacheMgr*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheMgr_getInstance : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheMgr_getInstance)



static bool js_spine4_SkeletonCacheMgr_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spine4::SkeletonCacheMgr)", s.nativeThisObject());
    auto iter = se::NonRefNativePtrCreatedByCtorMap::find(s.nativeThisObject());
    if (iter != se::NonRefNativePtrCreatedByCtorMap::end())
    {
        se::NonRefNativePtrCreatedByCtorMap::erase(iter);
        spine4::SkeletonCacheMgr* cobj = (spine4::SkeletonCacheMgr*)s.nativeThisObject();
        delete cobj;
    }
    return true;
}
SE_BIND_FINALIZE_FUNC(js_spine4_SkeletonCacheMgr_finalize)

bool js_register_cocos2dx_spine4_SkeletonCacheMgr(se::Object* obj)
{
    auto cls = se::Class::create("SkeletonCacheMgr", obj, nullptr, nullptr);

    cls->defineFunction("removeSkeletonCache", _SE(js_cocos2dx_spine4_SkeletonCacheMgr_removeSkeletonCache));
    cls->defineFunction("buildSkeletonCache", _SE(js_cocos2dx_spine4_SkeletonCacheMgr_buildSkeletonCache));
    cls->defineStaticFunction("destroyInstance", _SE(js_cocos2dx_spine4_SkeletonCacheMgr_destroyInstance));
    cls->defineStaticFunction("getInstance", _SE(js_cocos2dx_spine4_SkeletonCacheMgr_getInstance));
    cls->defineFinalizeFunction(_SE(js_spine4_SkeletonCacheMgr_finalize));
    cls->install();
    JSBClassType::registerClass<spine4::SkeletonCacheMgr>(cls);

    __jsb_spine4_SkeletonCacheMgr_proto = cls->getProto();
    __jsb_spine4_SkeletonCacheMgr_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_SkeletonCacheAnimation_proto = nullptr;
se::Class* __jsb_spine4_SkeletonCacheAnimation_class = nullptr;

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setUseTint(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setUseTint : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setUseTint : Error processing arguments");
        cobj->setUseTint(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setUseTint)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setTimeScale(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setTimeScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setTimeScale : Error processing arguments");
        cobj->setTimeScale(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setTimeScale)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_findAnimation(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findAnimation : Error processing arguments");
        spine4::Animation* result = cobj->findAnimation(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Animation>((spine4::Animation*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findAnimation : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_findAnimation)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachUtil(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachUtil : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spine4::CacheModeAttachUtil* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachUtil : Error processing arguments");
        cobj->setAttachUtil(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachUtil)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_paused(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_paused : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_paused : Error processing arguments");
        cobj->paused(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_paused)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_destroy(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_destroy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_destroy)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachment(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp; ok &= seval_to_std_string(args[1], &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            bool result = cobj->setAttachment(arg0, arg1);
            ok &= boolean_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachment : Error processing arguments");
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::string arg1;
            ok &= seval_to_std_string(args[1], &arg1);
            if (!ok) { ok = true; break; }
            bool result = cobj->setAttachment(arg0, arg1);
            ok &= boolean_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachment : Error processing arguments");
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachment)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setAnimation(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        std::string arg0;
        bool arg1;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setAnimation : Error processing arguments");
        cobj->setAnimation(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setAnimation)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setBonesToSetupPose(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setBonesToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setBonesToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setBonesToSetupPose)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_onEnable(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_onEnable : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->onEnable();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_onEnable)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setStartListener(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setStartListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (std::string)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](std::string larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= std_string_to_seval(larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setStartListener : Error processing arguments");
        cobj->setStartListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setStartListener)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setEffect(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setEffect : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        cocos2d::renderer::EffectVariant* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setEffect : Error processing arguments");
        cobj->setEffect(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setEffect)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_isOpacityModifyRGB(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_isOpacityModifyRGB : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isOpacityModifyRGB();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_isOpacityModifyRGB : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_isOpacityModifyRGB)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setToSetupPose(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setToSetupPose)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setOpacityModifyRGB(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setOpacityModifyRGB : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setOpacityModifyRGB : Error processing arguments");
        cobj->setOpacityModifyRGB(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setOpacityModifyRGB)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setSlotsToSetupPose(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setSlotsToSetupPose : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->setSlotsToSetupPose();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setSlotsToSetupPose)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setEndListener(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setEndListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (std::string)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](std::string larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= std_string_to_seval(larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setEndListener : Error processing arguments");
        cobj->setEndListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setEndListener)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_beginSchedule(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_beginSchedule : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->beginSchedule();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_beginSchedule)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_updateAllAnimationCache(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_updateAllAnimationCache : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->updateAllAnimationCache();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_updateAllAnimationCache)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_addAnimation(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_addAnimation : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        std::string arg0;
        bool arg1;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_addAnimation : Error processing arguments");
        cobj->addAnimation(arg0, arg1);
        return true;
    }
    if (argc == 3) {
        std::string arg0;
        bool arg1;
        float arg2 = 0;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_addAnimation : Error processing arguments");
        cobj->addAnimation(arg0, arg1, arg2);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_addAnimation)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_update(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_update : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        float arg0 = 0;
        ok &= seval_to_float(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_update : Error processing arguments");
        cobj->update(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_update)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_getAttachment(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_getAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        std::string arg0;
        std::string arg1;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_std_string(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_getAttachment : Error processing arguments");
        spine4::Attachment* result = cobj->getAttachment(arg0, arg1);
        ok &= native_ptr_to_rooted_seval<spine4::Attachment>((spine4::Attachment*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_getAttachment : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_getAttachment)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setCompleteListener(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setCompleteListener : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::function<void (std::string)> arg0;
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto lambda = [=](std::string larg0) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(1);
                    ok &= std_string_to_seval(larg0, &args[0]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0 = lambda;
            }
            else
            {
                arg0 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setCompleteListener : Error processing arguments");
        cobj->setCompleteListener(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setCompleteListener)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_updateAnimationCache(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_updateAnimationCache : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_updateAnimationCache : Error processing arguments");
        cobj->updateAnimationCache(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_updateAnimationCache)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_getTimeScale(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_getTimeScale : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getTimeScale();
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_getTimeScale : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_getTimeScale)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_findBone(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findBone : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findBone : Error processing arguments");
        spine4::Bone* result = cobj->findBone(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Bone>((spine4::Bone*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findBone : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_findBone)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_onDisable(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_onDisable : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->onDisable();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_onDisable)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setColor(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setColor : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        cocos2d::Color4B arg0;
        ok &= seval_to_Color4B(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setColor : Error processing arguments");
        cobj->setColor(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setColor)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_bindNodeProxy(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_bindNodeProxy : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        cocos2d::renderer::NodeProxy* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_bindNodeProxy : Error processing arguments");
        cobj->bindNodeProxy(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_bindNodeProxy)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setBatchEnabled(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setBatchEnabled : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setBatchEnabled : Error processing arguments");
        cobj->setBatchEnabled(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setBatchEnabled)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_setSkin(se::State& s)
{
    CC_UNUSED bool ok = true;
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2( cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_setSkin : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            const char* arg0 = nullptr;
            std::string arg0_tmp; ok &= seval_to_std_string(args[0], &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            cobj->setSkin(arg0);
            return true;
        }
    } while(false);

    do {
        if (argc == 1) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            cobj->setSkin(arg0);
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_setSkin)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_findSlot(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findSlot : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findSlot : Error processing arguments");
        spine4::Slot* result = cobj->findSlot(arg0);
        ok &= native_ptr_to_rooted_seval<spine4::Slot>((spine4::Slot*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_findSlot : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_findSlot)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_getSkeleton(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_getSkeleton : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        spine4::Skeleton* result = cobj->getSkeleton();
        ok &= native_ptr_to_rooted_seval<spine4::Skeleton>((spine4::Skeleton*)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_getSkeleton : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_getSkeleton)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_stopSchedule(se::State& s)
{
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_stopSchedule : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->stopSchedule();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonCacheAnimation_stopSchedule)

SE_DECLARE_FINALIZE_FUNC(js_spine4_SkeletonCacheAnimation_finalize)

static bool js_cocos2dx_spine4_SkeletonCacheAnimation_constructor(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    std::string arg0;
    bool arg1;
    ok &= seval_to_std_string(args[0], &arg0);
    ok &= seval_to_boolean(args[1], &arg1);
    SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonCacheAnimation_constructor : Error processing arguments");
    spine4::SkeletonCacheAnimation* cobj = new (std::nothrow) spine4::SkeletonCacheAnimation(arg0, arg1);
    s.thisObject()->setPrivateData(cobj);
    return true;
}
SE_BIND_CTOR(js_cocos2dx_spine4_SkeletonCacheAnimation_constructor, __jsb_spine4_SkeletonCacheAnimation_class, js_spine4_SkeletonCacheAnimation_finalize)




static bool js_spine4_SkeletonCacheAnimation_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spine4::SkeletonCacheAnimation)", s.nativeThisObject());
    spine4::SkeletonCacheAnimation* cobj = (spine4::SkeletonCacheAnimation*)s.nativeThisObject();
    cobj->release();
    return true;
}
SE_BIND_FINALIZE_FUNC(js_spine4_SkeletonCacheAnimation_finalize)

bool js_register_cocos2dx_spine4_SkeletonCacheAnimation(se::Object* obj)
{
    auto cls = se::Class::create("SkeletonCacheAnimation", obj, nullptr, _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_constructor));

    cls->defineFunction("setUseTint", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setUseTint));
    cls->defineFunction("setTimeScale", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setTimeScale));
    cls->defineFunction("findAnimation", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_findAnimation));
    cls->defineFunction("setAttachUtil", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachUtil));
    cls->defineFunction("paused", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_paused));
    cls->defineFunction("destroy", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_destroy));
    cls->defineFunction("setAttachment", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setAttachment));
    cls->defineFunction("setAnimation", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setAnimation));
    cls->defineFunction("setBonesToSetupPose", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setBonesToSetupPose));
    cls->defineFunction("onEnable", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_onEnable));
    cls->defineFunction("setStartListener", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setStartListener));
    cls->defineFunction("setEffect", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setEffect));
    cls->defineFunction("isOpacityModifyRGB", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_isOpacityModifyRGB));
    cls->defineFunction("setToSetupPose", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setToSetupPose));
    cls->defineFunction("setOpacityModifyRGB", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setOpacityModifyRGB));
    cls->defineFunction("setSlotsToSetupPose", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setSlotsToSetupPose));
    cls->defineFunction("setEndListener", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setEndListener));
    cls->defineFunction("beginSchedule", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_beginSchedule));
    cls->defineFunction("updateAllAnimationCache", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_updateAllAnimationCache));
    cls->defineFunction("addAnimation", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_addAnimation));
    cls->defineFunction("update", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_update));
    cls->defineFunction("getAttachment", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_getAttachment));
    cls->defineFunction("setCompleteListener", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setCompleteListener));
    cls->defineFunction("updateAnimationCache", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_updateAnimationCache));
    cls->defineFunction("getTimeScale", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_getTimeScale));
    cls->defineFunction("findBone", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_findBone));
    cls->defineFunction("onDisable", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_onDisable));
    cls->defineFunction("setColor", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setColor));
    cls->defineFunction("bindNodeProxy", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_bindNodeProxy));
    cls->defineFunction("setBatchEnabled", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setBatchEnabled));
    cls->defineFunction("setSkin", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_setSkin));
    cls->defineFunction("findSlot", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_findSlot));
    cls->defineFunction("getSkeleton", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_getSkeleton));
    cls->defineFunction("stopSchedule", _SE(js_cocos2dx_spine4_SkeletonCacheAnimation_stopSchedule));
    cls->defineFinalizeFunction(_SE(js_spine4_SkeletonCacheAnimation_finalize));
    cls->install();
    JSBClassType::registerClass<spine4::SkeletonCacheAnimation>(cls);

    __jsb_spine4_SkeletonCacheAnimation_proto = cls->getProto();
    __jsb_spine4_SkeletonCacheAnimation_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_AttachUtilBase_proto = nullptr;
se::Class* __jsb_spine4_AttachUtilBase_class = nullptr;

static bool js_cocos2dx_spine4_AttachUtilBase_associateAttachedNode(se::State& s)
{
    spine4::AttachUtilBase* cobj = (spine4::AttachUtilBase*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_AttachUtilBase_associateAttachedNode : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        spine4::Skeleton* arg0 = nullptr;
        cocos2d::renderer::NodeProxy* arg1 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        ok &= seval_to_native_ptr(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_AttachUtilBase_associateAttachedNode : Error processing arguments");
        cobj->associateAttachedNode(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_AttachUtilBase_associateAttachedNode)




bool js_register_cocos2dx_spine4_AttachUtilBase(se::Object* obj)
{
    auto cls = se::Class::create("AttachUtilBase", obj, nullptr, nullptr);

    cls->defineFunction("associateAttachedNode", _SE(js_cocos2dx_spine4_AttachUtilBase_associateAttachedNode));
    cls->install();
    JSBClassType::registerClass<spine4::AttachUtilBase>(cls);

    __jsb_spine4_AttachUtilBase_proto = cls->getProto();
    __jsb_spine4_AttachUtilBase_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_RealTimeAttachUtil_proto = nullptr;
se::Class* __jsb_spine4_RealTimeAttachUtil_class = nullptr;

SE_DECLARE_FINALIZE_FUNC(js_spine4_RealTimeAttachUtil_finalize)

static bool js_cocos2dx_spine4_RealTimeAttachUtil_constructor(se::State& s)
{
    spine4::RealTimeAttachUtil* cobj = new (std::nothrow) spine4::RealTimeAttachUtil();
    s.thisObject()->setPrivateData(cobj);
    return true;
}
SE_BIND_CTOR(js_cocos2dx_spine4_RealTimeAttachUtil_constructor, __jsb_spine4_RealTimeAttachUtil_class, js_spine4_RealTimeAttachUtil_finalize)



extern se::Object* __jsb_spine4_AttachUtilBase_proto;

static bool js_spine4_RealTimeAttachUtil_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spine4::RealTimeAttachUtil)", s.nativeThisObject());
    spine4::RealTimeAttachUtil* cobj = (spine4::RealTimeAttachUtil*)s.nativeThisObject();
    cobj->release();
    return true;
}
SE_BIND_FINALIZE_FUNC(js_spine4_RealTimeAttachUtil_finalize)

bool js_register_cocos2dx_spine4_RealTimeAttachUtil(se::Object* obj)
{
    auto cls = se::Class::create("RealTimeAttachUtil", obj, __jsb_spine4_AttachUtilBase_proto, _SE(js_cocos2dx_spine4_RealTimeAttachUtil_constructor));

    cls->defineFinalizeFunction(_SE(js_spine4_RealTimeAttachUtil_finalize));
    cls->install();
    JSBClassType::registerClass<spine4::RealTimeAttachUtil>(cls);

    __jsb_spine4_RealTimeAttachUtil_proto = cls->getProto();
    __jsb_spine4_RealTimeAttachUtil_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine4_CacheModeAttachUtil_proto = nullptr;
se::Class* __jsb_spine4_CacheModeAttachUtil_class = nullptr;

SE_DECLARE_FINALIZE_FUNC(js_spine4_CacheModeAttachUtil_finalize)

static bool js_cocos2dx_spine4_CacheModeAttachUtil_constructor(se::State& s)
{
    spine4::CacheModeAttachUtil* cobj = new (std::nothrow) spine4::CacheModeAttachUtil();
    s.thisObject()->setPrivateData(cobj);
    return true;
}
SE_BIND_CTOR(js_cocos2dx_spine4_CacheModeAttachUtil_constructor, __jsb_spine4_CacheModeAttachUtil_class, js_spine4_CacheModeAttachUtil_finalize)



extern se::Object* __jsb_spine4_AttachUtilBase_proto;

static bool js_spine4_CacheModeAttachUtil_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spine4::CacheModeAttachUtil)", s.nativeThisObject());
    spine4::CacheModeAttachUtil* cobj = (spine4::CacheModeAttachUtil*)s.nativeThisObject();
    cobj->release();
    return true;
}
SE_BIND_FINALIZE_FUNC(js_spine4_CacheModeAttachUtil_finalize)

bool js_register_cocos2dx_spine4_CacheModeAttachUtil(se::Object* obj)
{
    auto cls = se::Class::create("CacheModeAttachUtil", obj, __jsb_spine4_AttachUtilBase_proto, _SE(js_cocos2dx_spine4_CacheModeAttachUtil_constructor));

    cls->defineFinalizeFunction(_SE(js_spine4_CacheModeAttachUtil_finalize));
    cls->install();
    JSBClassType::registerClass<spine4::CacheModeAttachUtil>(cls);

    __jsb_spine4_CacheModeAttachUtil_proto = cls->getProto();
    __jsb_spine4_CacheModeAttachUtil_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

bool register_all_cocos2dx_spine4(se::Object* obj)
{
    // Get the ns
    se::Value nsVal;
    if (!obj->getProperty("spine4", &nsVal))
    {
        se::HandleObject jsobj(se::Object::createPlainObject());
        nsVal.setObject(jsobj);
        obj->setProperty("spine4", nsVal);
    }
    se::Object* ns = nsVal.toObject();

    js_register_cocos2dx_spine4_Slot(ns);
    js_register_cocos2dx_spine4_AttachUtilBase(ns);
    js_register_cocos2dx_spine4_RealTimeAttachUtil(ns);
    js_register_cocos2dx_spine4_ConstraintData(ns);
    js_register_cocos2dx_spine4_Polygon(ns);
    js_register_cocos2dx_spine4_SkeletonCacheAnimation(ns);
    js_register_cocos2dx_spine4_Attachment(ns);
    js_register_cocos2dx_spine4_VertexAttachment(ns);
    js_register_cocos2dx_spine4_SkeletonDataMgr(ns);
    js_register_cocos2dx_spine4_VertexEffect(ns);
    js_register_cocos2dx_spine4_JitterVertexEffect(ns);
    js_register_cocos2dx_spine4_SkeletonCacheMgr(ns);
    js_register_cocos2dx_spine4_Timeline(ns);
    js_register_cocos2dx_spine4_CurveTimeline(ns);
    js_register_cocos2dx_spine4_IkConstraintTimeline(ns);
    js_register_cocos2dx_spine4_SkeletonRenderer(ns);
    js_register_cocos2dx_spine4_Animation(ns);
    js_register_cocos2dx_spine4_MeshAttachment(ns);
    js_register_cocos2dx_spine4_ShearTimeline(ns);
    js_register_cocos2dx_spine4_AttachmentTimeline(ns);
    js_register_cocos2dx_spine4_PathConstraintMixTimeline(ns);
    js_register_cocos2dx_spine4_PathConstraintSpacingTimeline(ns);
    js_register_cocos2dx_spine4_TranslateTimeline(ns);
    js_register_cocos2dx_spine4_SkeletonAnimation(ns);
    js_register_cocos2dx_spine4_IkConstraintData(ns);
    js_register_cocos2dx_spine4_SwirlVertexEffect(ns);
    js_register_cocos2dx_spine4_AnimationStateData(ns);
    js_register_cocos2dx_spine4_PointAttachment(ns);
    js_register_cocos2dx_spine4_AnimationState(ns);
    js_register_cocos2dx_spine4_TrackEntry(ns);
    js_register_cocos2dx_spine4_BoneData(ns);
    js_register_cocos2dx_spine4_ScaleTimeline(ns);
    js_register_cocos2dx_spine4_SkeletonData(ns);
    js_register_cocos2dx_spine4_PathAttachment(ns);
    js_register_cocos2dx_spine4_TransformConstraint(ns);
    js_register_cocos2dx_spine4_BoundingBoxAttachment(ns);
    js_register_cocos2dx_spine4_ClippingAttachment(ns);
    js_register_cocos2dx_spine4_DeformTimeline(ns);
    js_register_cocos2dx_spine4_SkeletonBounds(ns);
    js_register_cocos2dx_spine4_TransformConstraintData(ns);
    js_register_cocos2dx_spine4_PathConstraint(ns);
    js_register_cocos2dx_spine4_TransformConstraintTimeline(ns);
    js_register_cocos2dx_spine4_Bone(ns);
    js_register_cocos2dx_spine4_PathConstraintPositionTimeline(ns);
    js_register_cocos2dx_spine4_EventTimeline(ns);
    js_register_cocos2dx_spine4_Skeleton(ns);
    js_register_cocos2dx_spine4_CacheModeAttachUtil(ns);
    js_register_cocos2dx_spine4_Color(ns);
    js_register_cocos2dx_spine4_DrawOrderTimeline(ns);
    js_register_cocos2dx_spine4_RegionAttachment(ns);
    js_register_cocos2dx_spine4_IkConstraint(ns);
    js_register_cocos2dx_spine4_RotateTimeline(ns);
    js_register_cocos2dx_spine4_SlotData(ns);
    js_register_cocos2dx_spine4_Skin(ns);
    js_register_cocos2dx_spine4_VertexEffectDelegate(ns);
    js_register_cocos2dx_spine4_EventData(ns);
    js_register_cocos2dx_spine4_Event(ns);
    js_register_cocos2dx_spine4_PathConstraintData(ns);
    return true;
}

#endif //#if USE_SPINE4 > 0
