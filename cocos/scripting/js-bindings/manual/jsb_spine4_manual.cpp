/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

//
//  jsb_spine_manual.cpp
//  cocos2d_js_bindings
//
//  Created by James Chen on 6/14/17.
//
//

#include "base/ccConfig.h"
#include "jsb_spine4_manual.hpp"

#if USE_SPINE4 > 0

#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"
#include "cocos/scripting/js-bindings/manual/jsb_conversions.hpp"
#include "cocos/scripting/js-bindings/manual/jsb_global.h"
#include "cocos/scripting/js-bindings/manual/jsb_helper.hpp"
#include "cocos/scripting/js-bindings/auto/jsb_cocos2dx_spine4_auto.hpp"

#include "middleware-adapter.h"
#include "spine4-creator-support/SkeletonDataMgr.h"
#include "spine4-creator-support/SkeletonRenderer.h"
#include "spine4-creator-support/spine-cocos2dx.h"

#include "cocos2d.h"
#include "cocos/editor-support/spine4/spine.h"
#include "cocos/editor-support/spine4-creator-support/spine-cocos2dx.h"

using namespace cocos2d;

static spine4::Cocos2dTextureLoader textureLoader;
static cocos2d::Map<std::string, middleware::Texture2D*>* _preloadedAtlasTextures = nullptr;
static middleware::Texture2D* _getPreloadedAtlasTexture(const char* path)
{
    assert(_preloadedAtlasTextures);
    auto it = _preloadedAtlasTextures->find(path);
    return it != _preloadedAtlasTextures->end() ? it->second : nullptr;
}

static bool js_register_spine4_initSkeletonData (se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc != 5) {
        SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", argc, 5);
        return false;
    }
    bool ok = false;
    
    std::string uuid;
    ok = seval_to_std_string(args[0], &uuid);
    SE_PRECONDITION2(ok, false, "js_register_spine4_initSkeletonData: Invalid uuid content!");
    
    auto mgr = spine4::SkeletonDataMgr::getInstance();
    bool hasSkeletonData = mgr->hasSkeletonData(uuid);
    if (hasSkeletonData) {
        spine4::SkeletonData* skeletonData = mgr->retainByUUID(uuid);
        native_ptr_to_rooted_seval<spine4::SkeletonData>(skeletonData, &s.rval());
        return true;
    }
    
    std::string skeletonDataFile;
    ok = seval_to_std_string(args[1], &skeletonDataFile);
    SE_PRECONDITION2(ok, false, "js_register_spine4_initSkeletonData: Invalid json path!");
    
    std::string atlasText;
    ok = seval_to_std_string(args[2], &atlasText);
    SE_PRECONDITION2(ok, false, "js_register_spine4_initSkeletonData: Invalid atlas content!");
    
    cocos2d::Map<std::string, middleware::Texture2D*> textures;
    ok = seval_to_Map_string_key(args[3], &textures);
    SE_PRECONDITION2(ok, false, "js_register_spine4_initSkeletonData: Invalid textures!");
    
    float scale = 1.0f;
    ok = seval_to_float(args[4], &scale);
    SE_PRECONDITION2(ok, false, "js_register_spine4_initSkeletonData: Invalid scale!");
    
    // create atlas from preloaded texture
    
    _preloadedAtlasTextures = &textures;
    spine4::spAtlasPage_setCustomTextureLoader(_getPreloadedAtlasTexture);

    spine4::Atlas* atlas = new (__FILE__, __LINE__) spine4::Atlas(atlasText.c_str(), (int)atlasText.size(), "", &textureLoader);
    
    _preloadedAtlasTextures = nullptr;
    spine4::spAtlasPage_setCustomTextureLoader(nullptr);
    
    spine4::AttachmentLoader* attachmentLoader = new (__FILE__, __LINE__) spine4::Cocos2dAtlasAttachmentLoader(atlas);
    spine4::SkeletonData* skeletonData = nullptr;

    std::size_t length = skeletonDataFile.length();
    auto binPos = skeletonDataFile.find(".skel", length - 5);
    if (binPos == std::string::npos) binPos = skeletonDataFile.find(".bin", length - 4);

    if (binPos != std::string::npos) {
        auto fileUtils = cocos2d::FileUtils::getInstance();
        if (fileUtils->isFileExist(skeletonDataFile))
        {
            cocos2d::Data cocos2dData;
            const auto fullpath = fileUtils->fullPathForFilename(skeletonDataFile);
            fileUtils->getContents(fullpath, &cocos2dData);
            
            spine4::SkeletonBinary binary(attachmentLoader);
            binary.setScale(scale);
            skeletonData = binary.readSkeletonData(cocos2dData.getBytes(), (int)cocos2dData.getSize());
            CCASSERT(skeletonData, !binary.getError().isEmpty() ? binary.getError().buffer() : "Error reading binary skeleton data.");
        }
    } else {
        spine4::SkeletonJson json(attachmentLoader);
        json.setScale(scale);
        skeletonData = json.readSkeletonData(skeletonDataFile.c_str());
        CCASSERT(skeletonData, !json.getError().isEmpty() ? json.getError().buffer() : "Error reading json skeleton data.");
    }
    
    if (skeletonData) {
        std::vector<int> texturesIndex;
        for (auto it = textures.begin(); it != textures.end(); it++)
        {
            texturesIndex.push_back(it->second->getRealTextureIndex());
        }
        mgr->setSkeletonData(uuid, skeletonData, atlas, attachmentLoader, texturesIndex);
        native_ptr_to_rooted_seval<spine4::SkeletonData>(skeletonData, &s.rval());
    } else {
        if (atlas) {
            delete atlas;
            atlas = nullptr;
        }
        if (attachmentLoader) {
            delete attachmentLoader;
            attachmentLoader = nullptr;
        }
    }
    return true;
}
SE_BIND_FUNC(js_register_spine4_initSkeletonData)

static bool js_register_spine4_disposeSkeletonData (se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc != 1) {
        SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", argc, 5);
        return false;
    }
    bool ok = false;
    
    std::string uuid;
    ok = seval_to_std_string(args[0], &uuid);
    SE_PRECONDITION2(ok, false, "js_register_spine4_disposeSkeletonData: Invalid uuid content!");
    
    auto mgr = spine4::SkeletonDataMgr::getInstance();
    bool hasSkeletonData = mgr->hasSkeletonData(uuid);
    if (!hasSkeletonData) return true;
    mgr->releaseByUUID(uuid);
    return true;
}
SE_BIND_FUNC(js_register_spine4_disposeSkeletonData)

static bool js_register_spine4_initSkeletonRenderer(se::State& s)
{
    // renderer, jsonPath, atlasText, textures, scale
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc != 2) {
        SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", argc, 5);
        return false;
    }
    bool ok = false;
    
    spine4::SkeletonRenderer* node = nullptr;
    ok = seval_to_native_ptr(args[0], &node);
    SE_PRECONDITION2(ok, false, "js_register_spine4_initSkeletonData: Converting SpineRenderer failed!");
    
    std::string uuid;
    ok = seval_to_std_string(args[1], &uuid);
    SE_PRECONDITION2(ok, false, "js_register_spine4_initSkeletonData: Invalid uuid content!");
    
    auto mgr = spine4::SkeletonDataMgr::getInstance();
    bool hasSkeletonData = mgr->hasSkeletonData(uuid);
    if (hasSkeletonData) {
        node->initWithUUID(uuid);
    }
    return true;
}
SE_BIND_FUNC(js_register_spine4_initSkeletonRenderer)

static bool js_register_spine4_retainSkeletonData(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc != 1) {
        SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", argc, 1);
        return false;
    }
    bool ok = false;
    
    std::string uuid;
    ok = seval_to_std_string(args[0], &uuid);
    SE_PRECONDITION2(ok, false, "js_register_spine4_hasSkeletonData: Invalid uuid content!");
    
    auto mgr = spine4::SkeletonDataMgr::getInstance();
    bool hasSkeletonData = mgr->hasSkeletonData(uuid);
    if (hasSkeletonData) {
        spine4::SkeletonData* skeletonData = mgr->retainByUUID(uuid);
        native_ptr_to_rooted_seval<spine4::SkeletonData>(skeletonData, &s.rval());
    }
    return true;
}
SE_BIND_FUNC(js_register_spine4_retainSkeletonData)

static bool js_cocos2dx_spine4_SkeletonRenderer_setSkins(se::State& s)
{
    spine4::SkeletonRenderer* cobj = (spine4::SkeletonRenderer*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_cocos2dx_spine4_SkeletonRenderer_setSkins : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= seval_to_std_vector_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine4_SkeletonRenderer_setSkins : Error processing arguments");
        for (const auto& skin : arg0) {
            cocos2d::log("js_cocos2dx_spine4_SkeletonRenderer_setSkins extracted skin: %s", skin.c_str());
        }
        cobj->setSkins(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine4_SkeletonRenderer_setSkins)

bool register_all_spine4_manual(se::Object* obj)
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
    
    ns->defineFunction("initSkeletonRenderer", _SE(js_register_spine4_initSkeletonRenderer));
    ns->defineFunction("initSkeletonData", _SE(js_register_spine4_initSkeletonData));
    ns->defineFunction("retainSkeletonData", _SE(js_register_spine4_retainSkeletonData));
    ns->defineFunction("disposeSkeletonData", _SE(js_register_spine4_disposeSkeletonData));
    
    // Manual binding for setSkins
    if (__jsb_spine4_SkeletonRenderer_proto) {
        __jsb_spine4_SkeletonRenderer_proto->defineFunction("setSkins", _SE(js_cocos2dx_spine4_SkeletonRenderer_setSkins));
    }
    if (__jsb_spine4_SkeletonAnimation_proto) {
        __jsb_spine4_SkeletonAnimation_proto->defineFunction("setSkins", _SE(js_cocos2dx_spine4_SkeletonRenderer_setSkins));
    }
    
    spine4::setSpineObjectDisposeCallback([](void* spineObj){
        se::Object* seObj = nullptr;
        
        auto iter = se::NativePtrToObjectMap::find(spineObj);
        if (iter != se::NativePtrToObjectMap::end())
        {
            // Save se::Object pointer for being used in cleanup method.
            seObj = iter->second;
            // Unmap native and js object since native object was destroyed.
            // Otherwise, it may trigger 'assertion' in se::Object::setPrivateData later
            // since native obj is already released and the new native object may be assigned with
            // the same address.
            se::NativePtrToObjectMap::erase(iter);
        }
        else
        {
            return;
        }
        
        auto cleanup = [seObj](){
            
            auto se = se::ScriptEngine::getInstance();
            if (!se->isValid() || se->isInCleanup())
                return;
            
            se::AutoHandleScope hs;
            se->clearException();
            
            // The mapping of native object & se::Object was cleared in above code.
            // The private data (native object) may be a different object associated with other se::Object.
            // Therefore, don't clear the mapping again.
            seObj->clearPrivateData(false);
            seObj->unroot();
            seObj->decRef();
        };
        
        if (!se::ScriptEngine::getInstance()->isGarbageCollecting())
        {
            cleanup();
        }
        else
        {
            CleanupTask::pushTaskToAutoReleasePool(cleanup);
        }
    });
    
    se::ScriptEngine::getInstance()->addBeforeCleanupHook([](){
        spine4::SkeletonDataMgr::destroyInstance();
    });
    
    se::ScriptEngine::getInstance()->clearException();
    
    return true;
}

#endif
