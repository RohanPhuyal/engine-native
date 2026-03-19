/**
 * @module cocos2dx_spine4
 */
var spine4 = spine4 || {};

/**
 * @class Animation
 */
spine4.Animation = {

/**
 * @method getTimelines
 * @return {spine4::Vector<spine4::Timeline >}
 */
getTimelines : function (
)
{
    return new Array();
},

/**
 * @method hasTimeline
 * @param {spine4::Vector<long long>} arg0
 * @return {bool}
 */
hasTimeline : function (
array 
)
{
    return false;
},

/**
 * @method getName
 * @return {spine4::String}
 */
getName : function (
)
{
    return spine4::String;
},

/**
 * @method getDuration
 * @return {float}
 */
getDuration : function (
)
{
    return 0;
},

/**
 * @method setDuration
 * @param {float} arg0
 */
setDuration : function (
float 
)
{
},

/**
 * @method search
* @param {spine4::Vector<float>|spine4::Vector<float>} array
* @param {float|float} float
* @param {int} int
* @return {int|int}
*/
search : function(
array,
float,
int 
)
{
    return 0;
},

};

/**
 * @class Color
 */
spine4.Color = {

/**
 * @method clamp
 * @return {spine4::Color}
 */
clamp : function (
)
{
    return spine4::Color;
},

};

/**
 * @class Slot
 */
spine4.Slot = {

/**
 * @method getBone
 * @return {spine4::Bone}
 */
getBone : function (
)
{
    return spine4::Bone;
},

/**
 * @method getDarkColor
 * @return {spine4::Color}
 */
getDarkColor : function (
)
{
    return spine4::Color;
},

/**
 * @method setSequenceIndex
 * @param {int} arg0
 */
setSequenceIndex : function (
int 
)
{
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method getSequenceIndex
 * @return {int}
 */
getSequenceIndex : function (
)
{
    return 0;
},

/**
 * @method getAttachment
 * @return {spine4::Attachment}
 */
getAttachment : function (
)
{
    return spine4::Attachment;
},

/**
 * @method setAttachment
 * @param {spine4::Attachment} arg0
 */
setAttachment : function (
attachment 
)
{
},

/**
 * @method hasDarkColor
 * @return {bool}
 */
hasDarkColor : function (
)
{
    return false;
},

/**
 * @method getDeform
 * @return {spine4::Vector<float>}
 */
getDeform : function (
)
{
    return new Array();
},

/**
 * @method setAttachmentState
 * @param {int} arg0
 */
setAttachmentState : function (
int 
)
{
},

/**
 * @method getSkeleton
 * @return {spine4::Skeleton}
 */
getSkeleton : function (
)
{
    return spine4::Skeleton;
},

/**
 * @method getData
 * @return {spine4::SlotData}
 */
getData : function (
)
{
    return spine4::SlotData;
},

/**
 * @method getAttachmentState
 * @return {int}
 */
getAttachmentState : function (
)
{
    return 0;
},

};

/**
 * @class TrackEntry
 */
spine4.TrackEntry = {

/**
 * @method getNext
 * @return {spine4::TrackEntry}
 */
getNext : function (
)
{
    return spine4::TrackEntry;
},

/**
 * @method getTrackComplete
 * @return {float}
 */
getTrackComplete : function (
)
{
    return 0;
},

/**
 * @method setTimeScale
 * @param {float} arg0
 */
setTimeScale : function (
float 
)
{
},

/**
 * @method getMixDuration
 * @return {float}
 */
getMixDuration : function (
)
{
    return 0;
},

/**
 * @method setAnimationEnd
 * @param {float} arg0
 */
setAnimationEnd : function (
float 
)
{
},

/**
 * @method setEventThreshold
 * @param {float} arg0
 */
setEventThreshold : function (
float 
)
{
},

/**
 * @method getShortestRotation
 * @return {bool}
 */
getShortestRotation : function (
)
{
    return false;
},

/**
 * @method setTrackEnd
 * @param {float} arg0
 */
setTrackEnd : function (
float 
)
{
},

/**
 * @method setAlphaAttachmentThreshold
 * @param {float} arg0
 */
setAlphaAttachmentThreshold : function (
float 
)
{
},

/**
 * @method getMixBlend
 * @return {spine4::MixBlend}
 */
getMixBlend : function (
)
{
    return spine4::MixBlend;
},

/**
 * @method getTrackEnd
 * @return {float}
 */
getTrackEnd : function (
)
{
    return 0;
},

/**
 * @method setDelay
 * @param {float} arg0
 */
setDelay : function (
float 
)
{
},

/**
 * @method getAnimationEnd
 * @return {float}
 */
getAnimationEnd : function (
)
{
    return 0;
},

/**
 * @method setMixTime
 * @param {float} arg0
 */
setMixTime : function (
float 
)
{
},

/**
 * @method wasApplied
 * @return {bool}
 */
wasApplied : function (
)
{
    return false;
},

/**
 * @method isComplete
 * @return {bool}
 */
isComplete : function (
)
{
    return false;
},

/**
 * @method setMixDrawOrderThreshold
 * @param {float} arg0
 */
setMixDrawOrderThreshold : function (
float 
)
{
},

/**
 * @method setShortestRotation
 * @param {bool} arg0
 */
setShortestRotation : function (
bool 
)
{
},

/**
 * @method getReverse
 * @return {bool}
 */
getReverse : function (
)
{
    return false;
},

/**
 * @method getMixDrawOrderThreshold
 * @return {float}
 */
getMixDrawOrderThreshold : function (
)
{
    return 0;
},

/**
 * @method setAlpha
 * @param {float} arg0
 */
setAlpha : function (
float 
)
{
},

/**
 * @method getMixTime
 * @return {float}
 */
getMixTime : function (
)
{
    return 0;
},

/**
 * @method getMixingTo
 * @return {spine4::TrackEntry}
 */
getMixingTo : function (
)
{
    return spine4::TrackEntry;
},

/**
 * @method setTrackTime
 * @param {float} arg0
 */
setTrackTime : function (
float 
)
{
},

/**
 * @method setMixDuration
* @param {float|float} float
* @param {float} float
*/
setMixDuration : function(
float,
float 
)
{
},

/**
 * @method resetRotationDirections
 */
resetRotationDirections : function (
)
{
},

/**
 * @method setMixAttachmentThreshold
 * @param {float} arg0
 */
setMixAttachmentThreshold : function (
float 
)
{
},

/**
 * @method getMixAttachmentThreshold
 * @return {float}
 */
getMixAttachmentThreshold : function (
)
{
    return 0;
},

/**
 * @method setReverse
 * @param {bool} arg0
 */
setReverse : function (
bool 
)
{
},

/**
 * @method setHoldPrevious
 * @param {bool} arg0
 */
setHoldPrevious : function (
bool 
)
{
},

/**
 * @method getLoop
 * @return {bool}
 */
getLoop : function (
)
{
    return false;
},

/**
 * @method getTrackTime
 * @return {float}
 */
getTrackTime : function (
)
{
    return 0;
},

/**
 * @method getAnimationStart
 * @return {float}
 */
getAnimationStart : function (
)
{
    return 0;
},

/**
 * @method getAnimationLast
 * @return {float}
 */
getAnimationLast : function (
)
{
    return 0;
},

/**
 * @method setAnimationStart
 * @param {float} arg0
 */
setAnimationStart : function (
float 
)
{
},

/**
 * @method setLoop
 * @param {bool} arg0
 */
setLoop : function (
bool 
)
{
},

/**
 * @method getTrackIndex
 * @return {int}
 */
getTrackIndex : function (
)
{
    return 0;
},

/**
 * @method getTimeScale
 * @return {float}
 */
getTimeScale : function (
)
{
    return 0;
},

/**
 * @method getPrevious
 * @return {spine4::TrackEntry}
 */
getPrevious : function (
)
{
    return spine4::TrackEntry;
},

/**
 * @method getDelay
 * @return {float}
 */
getDelay : function (
)
{
    return 0;
},

/**
 * @method getAnimation
 * @return {spine4::Animation}
 */
getAnimation : function (
)
{
    return spine4::Animation;
},

/**
 * @method getHoldPrevious
 * @return {bool}
 */
getHoldPrevious : function (
)
{
    return false;
},

/**
 * @method getMixingFrom
 * @return {spine4::TrackEntry}
 */
getMixingFrom : function (
)
{
    return spine4::TrackEntry;
},

/**
 * @method isNextReady
 * @return {bool}
 */
isNextReady : function (
)
{
    return false;
},

/**
 * @method getAnimationTime
 * @return {float}
 */
getAnimationTime : function (
)
{
    return 0;
},

/**
 * @method getEventThreshold
 * @return {float}
 */
getEventThreshold : function (
)
{
    return 0;
},

/**
 * @method setAnimationLast
 * @param {float} arg0
 */
setAnimationLast : function (
float 
)
{
},

/**
 * @method getAlpha
 * @return {float}
 */
getAlpha : function (
)
{
    return 0;
},

/**
 * @method getAlphaAttachmentThreshold
 * @return {float}
 */
getAlphaAttachmentThreshold : function (
)
{
    return 0;
},

/**
 * @method setMixBlend
 * @param {spine4::MixBlend} arg0
 */
setMixBlend : function (
mixblend 
)
{
},

};

/**
 * @class AnimationState
 */
spine4.AnimationState = {

/**
 * @method getData
 * @return {spine4::AnimationStateData}
 */
getData : function (
)
{
    return spine4::AnimationStateData;
},

/**
 * @method addAnimation
* @param {unsigned int|unsigned int} int
* @param {spine4::Animation|spine4::String} animation
* @param {bool|bool} bool
* @param {float|float} float
* @return {spine4::TrackEntry|spine4::TrackEntry}
*/
addAnimation : function(
int,
str,
bool,
float 
)
{
    return spine4::TrackEntry;
},

/**
 * @method setManualTrackEntryDisposal
 * @param {bool} arg0
 */
setManualTrackEntryDisposal : function (
bool 
)
{
},

/**
 * @method setEmptyAnimations
 * @param {float} arg0
 */
setEmptyAnimations : function (
float 
)
{
},

/**
 * @method getCurrent
 * @param {unsigned int} arg0
 * @return {spine4::TrackEntry}
 */
getCurrent : function (
int 
)
{
    return spine4::TrackEntry;
},

/**
 * @method enableQueue
 */
enableQueue : function (
)
{
},

/**
 * @method clearTracks
 */
clearTracks : function (
)
{
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method disposeTrackEntry
 * @param {spine4::TrackEntry} arg0
 */
disposeTrackEntry : function (
trackentry 
)
{
},

/**
 * @method disableQueue
 */
disableQueue : function (
)
{
},

/**
 * @method setEmptyAnimation
 * @param {unsigned int} arg0
 * @param {float} arg1
 * @return {spine4::TrackEntry}
 */
setEmptyAnimation : function (
int, 
float 
)
{
    return spine4::TrackEntry;
},

/**
 * @method setTimeScale
 * @param {float} arg0
 */
setTimeScale : function (
float 
)
{
},

/**
 * @method getManualTrackEntryDisposal
 * @return {bool}
 */
getManualTrackEntryDisposal : function (
)
{
    return false;
},

/**
 * @method getTracks
 * @return {spine4::Vector<spine4::TrackEntry >}
 */
getTracks : function (
)
{
    return new Array();
},

/**
 * @method clearTrack
 * @param {unsigned int} arg0
 */
clearTrack : function (
int 
)
{
},

/**
 * @method setAnimation
* @param {unsigned int|unsigned int} int
* @param {spine4::Animation|spine4::String} animation
* @param {bool|bool} bool
* @return {spine4::TrackEntry|spine4::TrackEntry}
*/
setAnimation : function(
int,
str,
bool 
)
{
    return spine4::TrackEntry;
},

/**
 * @method addEmptyAnimation
 * @param {unsigned int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @return {spine4::TrackEntry}
 */
addEmptyAnimation : function (
int, 
float, 
float 
)
{
    return spine4::TrackEntry;
},

/**
 * @method getTimeScale
 * @return {float}
 */
getTimeScale : function (
)
{
    return 0;
},

};

/**
 * @class AnimationStateData
 */
spine4.AnimationStateData = {

/**
 * @method getMix
 * @param {spine4::Animation} arg0
 * @param {spine4::Animation} arg1
 * @return {float}
 */
getMix : function (
animation, 
animation 
)
{
    return 0;
},

/**
 * @method getDefaultMix
 * @return {float}
 */
getDefaultMix : function (
)
{
    return 0;
},

/**
 * @method getSkeletonData
 * @return {spine4::SkeletonData}
 */
getSkeletonData : function (
)
{
    return spine4::SkeletonData;
},

/**
 * @method clear
 */
clear : function (
)
{
},

/**
 * @method setDefaultMix
 * @param {float} arg0
 */
setDefaultMix : function (
float 
)
{
},

/**
 * @method setMix
* @param {spine4::Animation|spine4::String} animation
* @param {spine4::Animation|spine4::String} animation
* @param {float|float} float
*/
setMix : function(
str,
str,
float 
)
{
},

};

/**
 * @class Attachment
 */
spine4.Attachment = {

/**
 * @method getRefCount
 * @return {int}
 */
getRefCount : function (
)
{
    return 0;
},

/**
 * @method reference
 */
reference : function (
)
{
},

/**
 * @method getName
 * @return {spine4::String}
 */
getName : function (
)
{
    return spine4::String;
},

/**
 * @method dereference
 */
dereference : function (
)
{
},

/**
 * @method copy
 * @return {spine4::Attachment}
 */
copy : function (
)
{
    return spine4::Attachment;
},

};

/**
 * @class Timeline
 */
spine4.Timeline = {

/**
 * @method getPropertyIds
 * @return {spine4::Vector<long long>}
 */
getPropertyIds : function (
)
{
    return new Array();
},

/**
 * @method getFrameCount
 * @return {unsigned int}
 */
getFrameCount : function (
)
{
    return 0;
},

/**
 * @method getFrames
 * @return {spine4::Vector<float>}
 */
getFrames : function (
)
{
    return new Array();
},

/**
 * @method getDuration
 * @return {float}
 */
getDuration : function (
)
{
    return 0;
},

/**
 * @method getFrameEntries
 * @return {unsigned int}
 */
getFrameEntries : function (
)
{
    return 0;
},

};

/**
 * @class AttachmentTimeline
 */
spine4.AttachmentTimeline = {

/**
 * @method getAttachmentNames
 * @return {spine4::Vector<spine4::String>}
 */
getAttachmentNames : function (
)
{
    return new Array();
},

/**
 * @method setSlotIndex
 * @param {int} arg0
 */
setSlotIndex : function (
int 
)
{
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {spine4::String} arg2
 */
setFrame : function (
int, 
float, 
str 
)
{
},

/**
 * @method getSlotIndex
 * @return {int}
 */
getSlotIndex : function (
)
{
    return 0;
},

};

/**
 * @class Bone
 */
spine4.Bone = {

/**
 * @method setD
 * @param {float} arg0
 */
setD : function (
float 
)
{
},

/**
 * @method setInherit
 * @param {spine4::Inherit} arg0
 */
setInherit : function (
inherit 
)
{
},

/**
 * @method setAppliedRotation
 * @param {float} arg0
 */
setAppliedRotation : function (
float 
)
{
},

/**
 * @method setAScaleY
 * @param {float} arg0
 */
setAScaleY : function (
float 
)
{
},

/**
 * @method setAScaleX
 * @param {float} arg0
 */
setAScaleX : function (
float 
)
{
},

/**
 * @method getB
 * @return {float}
 */
getB : function (
)
{
    return 0;
},

/**
 * @method getC
 * @return {float}
 */
getC : function (
)
{
    return 0;
},

/**
 * @method getD
 * @return {float}
 */
getD : function (
)
{
    return 0;
},

/**
 * @method getWorldScaleY
 * @return {float}
 */
getWorldScaleY : function (
)
{
    return 0;
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getChildren
 * @return {spine4::Vector<spine4::Bone >}
 */
getChildren : function (
)
{
    return new Array();
},

/**
 * @method setWorldX
 * @param {float} arg0
 */
setWorldX : function (
float 
)
{
},

/**
 * @method getRotation
 * @return {float}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method getAShearX
 * @return {float}
 */
getAShearX : function (
)
{
    return 0;
},

/**
 * @method getAShearY
 * @return {float}
 */
getAShearY : function (
)
{
    return 0;
},

/**
 * @method parentToWorld
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 */
parentToWorld : function (
float, 
float, 
float, 
float 
)
{
},

/**
 * @method updateAppliedTransform
 */
updateAppliedTransform : function (
)
{
},

/**
 * @method getWorldRotationY
 * @return {float}
 */
getWorldRotationY : function (
)
{
    return 0;
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method getInherit
 * @return {spine4::Inherit}
 */
getInherit : function (
)
{
    return spine4::Inherit;
},

/**
 * @method getWorldToLocalRotationX
 * @return {float}
 */
getWorldToLocalRotationX : function (
)
{
    return 0;
},

/**
 * @method getWorldToLocalRotationY
 * @return {float}
 */
getWorldToLocalRotationY : function (
)
{
    return 0;
},

/**
 * @method getAScaleX
 * @return {float}
 */
getAScaleX : function (
)
{
    return 0;
},

/**
 * @method getA
 * @return {float}
 */
getA : function (
)
{
    return 0;
},

/**
 * @method setRotation
 * @param {float} arg0
 */
setRotation : function (
float 
)
{
},

/**
 * @method getAX
 * @return {float}
 */
getAX : function (
)
{
    return 0;
},

/**
 * @method getData
 * @return {spine4::BoneData}
 */
getData : function (
)
{
    return spine4::BoneData;
},

/**
 * @method setShearX
 * @param {float} arg0
 */
setShearX : function (
float 
)
{
},

/**
 * @method setShearY
 * @param {float} arg0
 */
setShearY : function (
float 
)
{
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method setA
 * @param {float} arg0
 */
setA : function (
float 
)
{
},

/**
 * @method setB
 * @param {float} arg0
 */
setB : function (
float 
)
{
},

/**
 * @method getAScaleY
 * @return {float}
 */
getAScaleY : function (
)
{
    return 0;
},

/**
 * @method getWorldScaleX
 * @return {float}
 */
getWorldScaleX : function (
)
{
    return 0;
},

/**
 * @method worldToParent
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 */
worldToParent : function (
float, 
float, 
float, 
float 
)
{
},

/**
 * @method getWorldRotationX
 * @return {float}
 */
getWorldRotationX : function (
)
{
    return 0;
},

/**
 * @method getShearX
 * @return {float}
 */
getShearX : function (
)
{
    return 0;
},

/**
 * @method update
 * @param {spine4::Physics} arg0
 */
update : function (
physics 
)
{
},

/**
 * @method getShearY
 * @return {float}
 */
getShearY : function (
)
{
    return 0;
},

/**
 * @method setAShearX
 * @param {float} arg0
 */
setAShearX : function (
float 
)
{
},

/**
 * @method setAShearY
 * @param {float} arg0
 */
setAShearY : function (
float 
)
{
},

/**
 * @method setActive
 * @param {bool} arg0
 */
setActive : function (
bool 
)
{
},

/**
 * @method setC
 * @param {float} arg0
 */
setC : function (
float 
)
{
},

/**
 * @method setWorldY
 * @param {float} arg0
 */
setWorldY : function (
float 
)
{
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method setAX
 * @param {float} arg0
 */
setAX : function (
float 
)
{
},

/**
 * @method setAY
 * @param {float} arg0
 */
setAY : function (
float 
)
{
},

/**
 * @method isActive
 * @return {bool}
 */
isActive : function (
)
{
    return false;
},

/**
 * @method getAY
 * @return {float}
 */
getAY : function (
)
{
    return 0;
},

/**
 * @method rotateWorld
 * @param {float} arg0
 */
rotateWorld : function (
float 
)
{
},

/**
 * @method getParent
 * @return {spine4::Bone}
 */
getParent : function (
)
{
    return spine4::Bone;
},

/**
 * @method getAppliedRotation
 * @return {float}
 */
getAppliedRotation : function (
)
{
    return 0;
},

/**
 * @method updateWorldTransform
* @param {float} float
* @param {float} float
* @param {float} float
* @param {float} float
* @param {float} float
* @param {float} float
* @param {float} float
*/
updateWorldTransform : function(
float,
float,
float,
float,
float,
float,
float 
)
{
},

/**
 * @method getWorldY
 * @return {float}
 */
getWorldY : function (
)
{
    return 0;
},

/**
 * @method getWorldX
 * @return {float}
 */
getWorldX : function (
)
{
    return 0;
},

/**
 * @method getSkeleton
 * @return {spine4::Skeleton}
 */
getSkeleton : function (
)
{
    return spine4::Skeleton;
},

/**
 * @method isYDown
 * @return {bool}
 */
isYDown : function (
)
{
    return false;
},

/**
 * @method setYDown
 * @param {bool} arg0
 */
setYDown : function (
bool 
)
{
},

};

/**
 * @class BoneData
 */
spine4.BoneData = {

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method setInherit
 * @param {spine4::Inherit} arg0
 */
setInherit : function (
inherit 
)
{
},

/**
 * @method getRotation
 * @return {float}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method isSkinRequired
 * @return {bool}
 */
isSkinRequired : function (
)
{
    return false;
},

/**
 * @method getIndex
 * @return {int}
 */
getIndex : function (
)
{
    return 0;
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method getLength
 * @return {float}
 */
getLength : function (
)
{
    return 0;
},

/**
 * @method getName
 * @return {spine4::String}
 */
getName : function (
)
{
    return spine4::String;
},

/**
 * @method setLength
 * @param {float} arg0
 */
setLength : function (
float 
)
{
},

/**
 * @method setRotation
 * @param {float} arg0
 */
setRotation : function (
float 
)
{
},

/**
 * @method setIcon
 * @param {spine4::String} arg0
 */
setIcon : function (
str 
)
{
},

/**
 * @method setShearX
 * @param {float} arg0
 */
setShearX : function (
float 
)
{
},

/**
 * @method setShearY
 * @param {float} arg0
 */
setShearY : function (
float 
)
{
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method getInherit
 * @return {spine4::Inherit}
 */
getInherit : function (
)
{
    return spine4::Inherit;
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method getShearX
 * @return {float}
 */
getShearX : function (
)
{
    return 0;
},

/**
 * @method getShearY
 * @return {float}
 */
getShearY : function (
)
{
    return 0;
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method setSkinRequired
 * @param {bool} arg0
 */
setSkinRequired : function (
bool 
)
{
},

/**
 * @method getParent
 * @return {spine4::BoneData}
 */
getParent : function (
)
{
    return spine4::BoneData;
},

/**
 * @method getIcon
 * @return {spine4::String}
 */
getIcon : function (
)
{
    return spine4::String;
},

/**
 * @method isVisible
 * @return {bool}
 */
isVisible : function (
)
{
    return false;
},

/**
 * @method setVisible
 * @param {bool} arg0
 */
setVisible : function (
bool 
)
{
},

};

/**
 * @class VertexAttachment
 */
spine4.VertexAttachment = {

/**
 * @method getVertices
 * @return {spine4::Vector<float>}
 */
getVertices : function (
)
{
    return new Array();
},

/**
 * @method getTimelineAttachment
 * @return {spine4::Attachment}
 */
getTimelineAttachment : function (
)
{
    return spine4::Attachment;
},

/**
 * @method getId
 * @return {int}
 */
getId : function (
)
{
    return 0;
},

/**
 * @method setTimelineAttachment
 * @param {spine4::Attachment} arg0
 */
setTimelineAttachment : function (
attachment 
)
{
},

/**
 * @method copyTo
 * @param {spine4::VertexAttachment} arg0
 */
copyTo : function (
vertexattachment 
)
{
},

/**
 * @method getWorldVerticesLength
 * @return {unsigned int}
 */
getWorldVerticesLength : function (
)
{
    return 0;
},

/**
 * @method setWorldVerticesLength
 * @param {unsigned int} arg0
 */
setWorldVerticesLength : function (
int 
)
{
},

};

/**
 * @class BoundingBoxAttachment
 */
spine4.BoundingBoxAttachment = {

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method copy
 * @return {spine4::Attachment}
 */
copy : function (
)
{
    return spine4::Attachment;
},

};

/**
 * @class ClippingAttachment
 */
spine4.ClippingAttachment = {

/**
 * @method setEndSlot
 * @param {spine4::SlotData} arg0
 */
setEndSlot : function (
slotdata 
)
{
},

/**
 * @method copy
 * @return {spine4::Attachment}
 */
copy : function (
)
{
    return spine4::Attachment;
},

/**
 * @method getEndSlot
 * @return {spine4::SlotData}
 */
getEndSlot : function (
)
{
    return spine4::SlotData;
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

};

/**
 * @class CurveTimeline
 */
spine4.CurveTimeline = {

/**
 * @method setBezier
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {float} arg4
 * @param {float} arg5
 * @param {float} arg6
 * @param {float} arg7
 * @param {float} arg8
 * @param {float} arg9
 * @param {float} arg10
 */
setBezier : function (
int, 
int, 
float, 
float, 
float, 
float, 
float, 
float, 
float, 
float, 
float 
)
{
},

/**
 * @method setLinear
 * @param {unsigned int} arg0
 */
setLinear : function (
int 
)
{
},

/**
 * @method setStepped
 * @param {unsigned int} arg0
 */
setStepped : function (
int 
)
{
},

/**
 * @method getCurves
 * @return {spine4::Vector<float>}
 */
getCurves : function (
)
{
    return new Array();
},

/**
 * @method getBezierValue
 * @param {float} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 * @return {float}
 */
getBezierValue : function (
float, 
int, 
int, 
int 
)
{
    return 0;
},

};

/**
 * @class ConstraintData
 */
spine4.ConstraintData = {

/**
 * @method setSkinRequired
 * @param {bool} arg0
 */
setSkinRequired : function (
bool 
)
{
},

/**
 * @method getName
 * @return {spine4::String}
 */
getName : function (
)
{
    return spine4::String;
},

/**
 * @method setOrder
 * @param {unsigned int} arg0
 */
setOrder : function (
int 
)
{
},

/**
 * @method getOrder
 * @return {unsigned int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method getRTTI
 * @return {spine4::RTTI}
 */
getRTTI : function (
)
{
    return spine4::RTTI;
},

/**
 * @method isSkinRequired
 * @return {bool}
 */
isSkinRequired : function (
)
{
    return false;
},

};

/**
 * @class DeformTimeline
 */
spine4.DeformTimeline = {

/**
 * @method setBezier
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {float} arg4
 * @param {float} arg5
 * @param {float} arg6
 * @param {float} arg7
 * @param {float} arg8
 * @param {float} arg9
 * @param {float} arg10
 */
setBezier : function (
int, 
int, 
float, 
float, 
float, 
float, 
float, 
float, 
float, 
float, 
float 
)
{
},

/**
 * @method setSlotIndex
 * @param {int} arg0
 */
setSlotIndex : function (
int 
)
{
},

/**
 * @method getSlotIndex
 * @return {int}
 */
getSlotIndex : function (
)
{
    return 0;
},

/**
 * @method getAttachment
 * @return {spine4::VertexAttachment}
 */
getAttachment : function (
)
{
    return spine4::VertexAttachment;
},

/**
 * @method setAttachment
 * @param {spine4::VertexAttachment} arg0
 */
setAttachment : function (
vertexattachment 
)
{
},

/**
 * @method getCurvePercent
 * @param {float} arg0
 * @param {int} arg1
 * @return {float}
 */
getCurvePercent : function (
float, 
int 
)
{
    return 0;
},

};

/**
 * @class DrawOrderTimeline
 */
spine4.DrawOrderTimeline = {

};

/**
 * @class Event
 */
spine4.Event = {

/**
 * @method getFloatValue
 * @return {float}
 */
getFloatValue : function (
)
{
    return 0;
},

/**
 * @method getIntValue
 * @return {int}
 */
getIntValue : function (
)
{
    return 0;
},

/**
 * @method getStringValue
 * @return {spine4::String}
 */
getStringValue : function (
)
{
    return spine4::String;
},

/**
 * @method getTime
 * @return {float}
 */
getTime : function (
)
{
    return 0;
},

/**
 * @method getBalance
 * @return {float}
 */
getBalance : function (
)
{
    return 0;
},

/**
 * @method setFloatValue
 * @param {float} arg0
 */
setFloatValue : function (
float 
)
{
},

/**
 * @method setIntValue
 * @param {int} arg0
 */
setIntValue : function (
int 
)
{
},

/**
 * @method getVolume
 * @return {float}
 */
getVolume : function (
)
{
    return 0;
},

/**
 * @method setBalance
 * @param {float} arg0
 */
setBalance : function (
float 
)
{
},

/**
 * @method getData
 * @return {spine4::EventData}
 */
getData : function (
)
{
    return spine4::EventData;
},

/**
 * @method setStringValue
 * @param {spine4::String} arg0
 */
setStringValue : function (
str 
)
{
},

/**
 * @method setVolume
 * @param {float} arg0
 */
setVolume : function (
float 
)
{
},

};

/**
 * @class EventData
 */
spine4.EventData = {

/**
 * @method getAudioPath
 * @return {spine4::String}
 */
getAudioPath : function (
)
{
    return spine4::String;
},

/**
 * @method getIntValue
 * @return {int}
 */
getIntValue : function (
)
{
    return 0;
},

/**
 * @method getStringValue
 * @return {spine4::String}
 */
getStringValue : function (
)
{
    return spine4::String;
},

/**
 * @method getFloatValue
 * @return {float}
 */
getFloatValue : function (
)
{
    return 0;
},

/**
 * @method getName
 * @return {spine4::String}
 */
getName : function (
)
{
    return spine4::String;
},

/**
 * @method setFloatValue
 * @param {float} arg0
 */
setFloatValue : function (
float 
)
{
},

/**
 * @method setIntValue
 * @param {int} arg0
 */
setIntValue : function (
int 
)
{
},

/**
 * @method getVolume
 * @return {float}
 */
getVolume : function (
)
{
    return 0;
},

/**
 * @method setBalance
 * @param {float} arg0
 */
setBalance : function (
float 
)
{
},

/**
 * @method setVolume
 * @param {float} arg0
 */
setVolume : function (
float 
)
{
},

/**
 * @method setStringValue
 * @param {spine4::String} arg0
 */
setStringValue : function (
str 
)
{
},

/**
 * @method getBalance
 * @return {float}
 */
getBalance : function (
)
{
    return 0;
},

/**
 * @method setAudioPath
 * @param {spine4::String} arg0
 */
setAudioPath : function (
str 
)
{
},

};

/**
 * @class EventTimeline
 */
spine4.EventTimeline = {

/**
 * @method getEvents
 * @return {spine4::Vector<spine4::Event >}
 */
getEvents : function (
)
{
    return new Array();
},

/**
 * @method setFrame
 * @param {unsigned int} arg0
 * @param {spine4::Event} arg1
 */
setFrame : function (
int, 
event 
)
{
},

};

/**
 * @class IkConstraint
 */
spine4.IkConstraint = {

/**
 * @method getMix
 * @return {float}
 */
getMix : function (
)
{
    return 0;
},

/**
 * @method setActive
 * @param {bool} arg0
 */
setActive : function (
bool 
)
{
},

/**
 * @method getCompress
 * @return {bool}
 */
getCompress : function (
)
{
    return false;
},

/**
 * @method setStretch
 * @param {bool} arg0
 */
setStretch : function (
bool 
)
{
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::Bone >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method setTarget
 * @param {spine4::Bone} arg0
 */
setTarget : function (
bone 
)
{
},

/**
 * @method setBendDirection
 * @param {int} arg0
 */
setBendDirection : function (
int 
)
{
},

/**
 * @method update
 * @param {spine4::Physics} arg0
 */
update : function (
physics 
)
{
},

/**
 * @method getTarget
 * @return {spine4::Bone}
 */
getTarget : function (
)
{
    return spine4::Bone;
},

/**
 * @method setCompress
 * @param {bool} arg0
 */
setCompress : function (
bool 
)
{
},

/**
 * @method getBendDirection
 * @return {int}
 */
getBendDirection : function (
)
{
    return 0;
},

/**
 * @method getOrder
 * @return {int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method getSoftness
 * @return {float}
 */
getSoftness : function (
)
{
    return 0;
},

/**
 * @method getStretch
 * @return {bool}
 */
getStretch : function (
)
{
    return false;
},

/**
 * @method setMix
 * @param {float} arg0
 */
setMix : function (
float 
)
{
},

/**
 * @method getData
 * @return {spine4::IkConstraintData}
 */
getData : function (
)
{
    return spine4::IkConstraintData;
},

/**
 * @method setSoftness
 * @param {float} arg0
 */
setSoftness : function (
float 
)
{
},

/**
 * @method isActive
 * @return {bool}
 */
isActive : function (
)
{
    return false;
},

};

/**
 * @class IkConstraintData
 */
spine4.IkConstraintData = {

/**
 * @method getMix
 * @return {float}
 */
getMix : function (
)
{
    return 0;
},

/**
 * @method setUniform
 * @param {bool} arg0
 */
setUniform : function (
bool 
)
{
},

/**
 * @method setStretch
 * @param {bool} arg0
 */
setStretch : function (
bool 
)
{
},

/**
 * @method getUniform
 * @return {bool}
 */
getUniform : function (
)
{
    return false;
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::BoneData >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method setTarget
 * @param {spine4::BoneData} arg0
 */
setTarget : function (
bonedata 
)
{
},

/**
 * @method getTarget
 * @return {spine4::BoneData}
 */
getTarget : function (
)
{
    return spine4::BoneData;
},

/**
 * @method setCompress
 * @param {bool} arg0
 */
setCompress : function (
bool 
)
{
},

/**
 * @method getBendDirection
 * @return {int}
 */
getBendDirection : function (
)
{
    return 0;
},

/**
 * @method setBendDirection
 * @param {int} arg0
 */
setBendDirection : function (
int 
)
{
},

/**
 * @method getSoftness
 * @return {float}
 */
getSoftness : function (
)
{
    return 0;
},

/**
 * @method getStretch
 * @return {bool}
 */
getStretch : function (
)
{
    return false;
},

/**
 * @method getRTTI
 * @return {spine4::RTTI}
 */
getRTTI : function (
)
{
    return spine4::RTTI;
},

/**
 * @method setMix
 * @param {float} arg0
 */
setMix : function (
float 
)
{
},

/**
 * @method getCompress
 * @return {bool}
 */
getCompress : function (
)
{
    return false;
},

/**
 * @method setSoftness
 * @param {float} arg0
 */
setSoftness : function (
float 
)
{
},

};

/**
 * @class IkConstraintTimeline
 */
spine4.IkConstraintTimeline = {

/**
 * @method setIkConstraintIndex
 * @param {int} arg0
 */
setIkConstraintIndex : function (
int 
)
{
},

/**
 * @method getIkConstraintIndex
 * @return {int}
 */
getIkConstraintIndex : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {int} arg4
 * @param {bool} arg5
 * @param {bool} arg6
 */
setFrame : function (
int, 
float, 
float, 
float, 
int, 
bool, 
bool 
)
{
},

};

/**
 * @class MeshAttachment
 */
spine4.MeshAttachment = {

/**
 * @method getSequence
 * @return {spine4::Sequence}
 */
getSequence : function (
)
{
    return spine4::Sequence;
},

/**
 * @method computeWorldVertices
 * @param {spine4::Slot} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @param {float} arg3
 * @param {unsigned int} arg4
 * @param {unsigned int} arg5
 */
computeWorldVertices : function (
slot, 
int, 
int, 
float, 
int, 
int 
)
{
},

/**
 * @method getWidth
 * @return {float}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method setParentMesh
 * @param {spine4::MeshAttachment} arg0
 */
setParentMesh : function (
meshattachment 
)
{
},

/**
 * @method setWidth
 * @param {float} arg0
 */
setWidth : function (
float 
)
{
},

/**
 * @method getUVs
 * @return {spine4::Vector<float>}
 */
getUVs : function (
)
{
    return new Array();
},

/**
 * @method getHeight
 * @return {float}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method getPath
 * @return {spine4::String}
 */
getPath : function (
)
{
    return spine4::String;
},

/**
 * @method getEdges
 * @return {spine4::Vector<unsigned short>}
 */
getEdges : function (
)
{
    return new Array();
},

/**
 * @method updateRegion
 */
updateRegion : function (
)
{
},

/**
 * @method setHullLength
 * @param {int} arg0
 */
setHullLength : function (
int 
)
{
},

/**
 * @method setRegion
 * @param {spine4::TextureRegion} arg0
 */
setRegion : function (
textureregion 
)
{
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method setSequence
 * @param {spine4::Sequence} arg0
 */
setSequence : function (
sequence 
)
{
},

/**
 * @method copy
 * @return {spine4::Attachment}
 */
copy : function (
)
{
    return spine4::Attachment;
},

/**
 * @method setPath
 * @param {spine4::String} arg0
 */
setPath : function (
str 
)
{
},

/**
 * @method setHeight
 * @param {float} arg0
 */
setHeight : function (
float 
)
{
},

/**
 * @method newLinkedMesh
 * @return {spine4::MeshAttachment}
 */
newLinkedMesh : function (
)
{
    return spine4::MeshAttachment;
},

/**
 * @method getRegionUVs
 * @return {spine4::Vector<float>}
 */
getRegionUVs : function (
)
{
    return new Array();
},

/**
 * @method getRegion
 * @return {spine4::TextureRegion}
 */
getRegion : function (
)
{
    return spine4::TextureRegion;
},

/**
 * @method getHullLength
 * @return {int}
 */
getHullLength : function (
)
{
    return 0;
},

/**
 * @method getTriangles
 * @return {spine4::Vector<unsigned short>}
 */
getTriangles : function (
)
{
    return new Array();
},

/**
 * @method getParentMesh
 * @return {spine4::MeshAttachment}
 */
getParentMesh : function (
)
{
    return spine4::MeshAttachment;
},

};

/**
 * @class PathAttachment
 */
spine4.PathAttachment = {

/**
 * @method isConstantSpeed
 * @return {bool}
 */
isConstantSpeed : function (
)
{
    return false;
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method isClosed
 * @return {bool}
 */
isClosed : function (
)
{
    return false;
},

/**
 * @method setConstantSpeed
 * @param {bool} arg0
 */
setConstantSpeed : function (
bool 
)
{
},

/**
 * @method setClosed
 * @param {bool} arg0
 */
setClosed : function (
bool 
)
{
},

/**
 * @method getLengths
 * @return {spine4::Vector<float>}
 */
getLengths : function (
)
{
    return new Array();
},

/**
 * @method copy
 * @return {spine4::Attachment}
 */
copy : function (
)
{
    return spine4::Attachment;
},

};

/**
 * @class PathConstraint
 */
spine4.PathConstraint = {

/**
 * @method setSpacing
 * @param {float} arg0
 */
setSpacing : function (
float 
)
{
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method setMixY
 * @param {float} arg0
 */
setMixY : function (
float 
)
{
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::Bone >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method setTarget
 * @param {spine4::Slot} arg0
 */
setTarget : function (
slot 
)
{
},

/**
 * @method setMixRotate
 * @param {float} arg0
 */
setMixRotate : function (
float 
)
{
},

/**
 * @method getMixY
 * @return {float}
 */
getMixY : function (
)
{
    return 0;
},

/**
 * @method update
 * @param {spine4::Physics} arg0
 */
update : function (
physics 
)
{
},

/**
 * @method getTarget
 * @return {spine4::Slot}
 */
getTarget : function (
)
{
    return spine4::Slot;
},

/**
 * @method getSpacing
 * @return {float}
 */
getSpacing : function (
)
{
    return 0;
},

/**
 * @method getMixX
 * @return {float}
 */
getMixX : function (
)
{
    return 0;
},

/**
 * @method setMixX
 * @param {float} arg0
 */
setMixX : function (
float 
)
{
},

/**
 * @method getOrder
 * @return {int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method isActive
 * @return {bool}
 */
isActive : function (
)
{
    return false;
},

/**
 * @method setActive
 * @param {bool} arg0
 */
setActive : function (
bool 
)
{
},

/**
 * @method getMixRotate
 * @return {float}
 */
getMixRotate : function (
)
{
    return 0;
},

/**
 * @method setPosition
 * @param {float} arg0
 */
setPosition : function (
float 
)
{
},

/**
 * @method getData
 * @return {spine4::PathConstraintData}
 */
getData : function (
)
{
    return spine4::PathConstraintData;
},

/**
 * @method getPosition
 * @return {float}
 */
getPosition : function (
)
{
    return 0;
},

};

/**
 * @class PathConstraintData
 */
spine4.PathConstraintData = {

/**
 * @method getOffsetRotation
 * @return {float}
 */
getOffsetRotation : function (
)
{
    return 0;
},

/**
 * @method getPositionMode
 * @return {spine4::PositionMode}
 */
getPositionMode : function (
)
{
    return spine4::PositionMode;
},

/**
 * @method setMixRotate
 * @param {float} arg0
 */
setMixRotate : function (
float 
)
{
},

/**
 * @method getTarget
 * @return {spine4::SlotData}
 */
getTarget : function (
)
{
    return spine4::SlotData;
},

/**
 * @method getSpacingMode
 * @return {spine4::SpacingMode}
 */
getSpacingMode : function (
)
{
    return spine4::SpacingMode;
},

/**
 * @method setSpacing
 * @param {float} arg0
 */
setSpacing : function (
float 
)
{
},

/**
 * @method getRTTI
 * @return {spine4::RTTI}
 */
getRTTI : function (
)
{
    return spine4::RTTI;
},

/**
 * @method setRotateMode
 * @param {spine4::RotateMode} arg0
 */
setRotateMode : function (
rotatemode 
)
{
},

/**
 * @method setTarget
 * @param {spine4::SlotData} arg0
 */
setTarget : function (
slotdata 
)
{
},

/**
 * @method getMixY
 * @return {float}
 */
getMixY : function (
)
{
    return 0;
},

/**
 * @method getSpacing
 * @return {float}
 */
getSpacing : function (
)
{
    return 0;
},

/**
 * @method setOffsetRotation
 * @param {float} arg0
 */
setOffsetRotation : function (
float 
)
{
},

/**
 * @method getMixX
 * @return {float}
 */
getMixX : function (
)
{
    return 0;
},

/**
 * @method getRotateMode
 * @return {spine4::RotateMode}
 */
getRotateMode : function (
)
{
    return spine4::RotateMode;
},

/**
 * @method getMixRotate
 * @return {float}
 */
getMixRotate : function (
)
{
    return 0;
},

/**
 * @method setPosition
 * @param {float} arg0
 */
setPosition : function (
float 
)
{
},

/**
 * @method getPosition
 * @return {float}
 */
getPosition : function (
)
{
    return 0;
},

/**
 * @method setSpacingMode
 * @param {spine4::SpacingMode} arg0
 */
setSpacingMode : function (
spacingmode 
)
{
},

/**
 * @method setMixY
 * @param {float} arg0
 */
setMixY : function (
float 
)
{
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::BoneData >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method setMixX
 * @param {float} arg0
 */
setMixX : function (
float 
)
{
},

/**
 * @method setPositionMode
 * @param {spine4::PositionMode} arg0
 */
setPositionMode : function (
positionmode 
)
{
},

};

/**
 * @class PathConstraintMixTimeline
 */
spine4.PathConstraintMixTimeline = {

/**
 * @method getPathConstraintIndex
 * @return {int}
 */
getPathConstraintIndex : function (
)
{
    return 0;
},

/**
 * @method setPathConstraintIndex
 * @param {int} arg0
 */
setPathConstraintIndex : function (
int 
)
{
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {float} arg4
 */
setFrame : function (
int, 
float, 
float, 
float, 
float 
)
{
},

};

/**
 * @class PathConstraintPositionTimeline
 */
spine4.PathConstraintPositionTimeline = {

/**
 * @method getPathConstraintIndex
 * @return {int}
 */
getPathConstraintIndex : function (
)
{
    return 0;
},

/**
 * @method setPathConstraintIndex
 * @param {int} arg0
 */
setPathConstraintIndex : function (
int 
)
{
},

};

/**
 * @class PathConstraintSpacingTimeline
 */
spine4.PathConstraintSpacingTimeline = {

/**
 * @method getPathConstraintIndex
 * @return {int}
 */
getPathConstraintIndex : function (
)
{
    return 0;
},

/**
 * @method setPathConstraintIndex
 * @param {int} arg0
 */
setPathConstraintIndex : function (
int 
)
{
},

};

/**
 * @class PointAttachment
 */
spine4.PointAttachment = {

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getRotation
 * @return {float}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method setRotation
 * @param {float} arg0
 */
setRotation : function (
float 
)
{
},

/**
 * @method copy
 * @return {spine4::Attachment}
 */
copy : function (
)
{
    return spine4::Attachment;
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

};

/**
 * @class RegionAttachment
 */
spine4.RegionAttachment = {

/**
 * @method getSequence
 * @return {spine4::Sequence}
 */
getSequence : function (
)
{
    return spine4::Sequence;
},

/**
 * @method getWidth
 * @return {float}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getRotation
 * @return {float}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method setWidth
 * @param {float} arg0
 */
setWidth : function (
float 
)
{
},

/**
 * @method getUVs
 * @return {spine4::Vector<float>}
 */
getUVs : function (
)
{
    return new Array();
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method getHeight
 * @return {float}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method getPath
 * @return {spine4::String}
 */
getPath : function (
)
{
    return spine4::String;
},

/**
 * @method setRotation
 * @param {float} arg0
 */
setRotation : function (
float 
)
{
},

/**
 * @method setPath
 * @param {spine4::String} arg0
 */
setPath : function (
str 
)
{
},

/**
 * @method updateRegion
 */
updateRegion : function (
)
{
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method setRegion
 * @param {spine4::TextureRegion} arg0
 */
setRegion : function (
textureregion 
)
{
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method getOffset
 * @return {spine4::Vector<float>}
 */
getOffset : function (
)
{
    return new Array();
},

/**
 * @method copy
 * @return {spine4::Attachment}
 */
copy : function (
)
{
    return spine4::Attachment;
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method setHeight
 * @param {float} arg0
 */
setHeight : function (
float 
)
{
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method setSequence
 * @param {spine4::Sequence} arg0
 */
setSequence : function (
sequence 
)
{
},

/**
 * @method getRegion
 * @return {spine4::TextureRegion}
 */
getRegion : function (
)
{
    return spine4::TextureRegion;
},

};

/**
 * @class RotateTimeline
 */
spine4.RotateTimeline = {

/**
 * @method setBoneIndex
 * @param {int} arg0
 */
setBoneIndex : function (
int 
)
{
},

/**
 * @method getBoneIndex
 * @return {int}
 */
getBoneIndex : function (
)
{
    return 0;
},

};

/**
 * @class TranslateTimeline
 */
spine4.TranslateTimeline = {

/**
 * @method setBoneIndex
 * @param {int} arg0
 */
setBoneIndex : function (
int 
)
{
},

/**
 * @method getBoneIndex
 * @return {int}
 */
getBoneIndex : function (
)
{
    return 0;
},

};

/**
 * @class ScaleTimeline
 */
spine4.ScaleTimeline = {

/**
 * @method setBoneIndex
 * @param {int} arg0
 */
setBoneIndex : function (
int 
)
{
},

/**
 * @method getBoneIndex
 * @return {int}
 */
getBoneIndex : function (
)
{
    return 0;
},

};

/**
 * @class ShearTimeline
 */
spine4.ShearTimeline = {

/**
 * @method setBoneIndex
 * @param {int} arg0
 */
setBoneIndex : function (
int 
)
{
},

/**
 * @method getBoneIndex
 * @return {int}
 */
getBoneIndex : function (
)
{
    return 0;
},

};

/**
 * @class Skeleton
 */
spine4.Skeleton = {

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method getSkin
 * @return {spine4::Skin}
 */
getSkin : function (
)
{
    return spine4::Skin;
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method findTransformConstraint
 * @param {spine4::String} arg0
 * @return {spine4::TransformConstraint}
 */
findTransformConstraint : function (
str 
)
{
    return spine4::TransformConstraint;
},

/**
 * @method setAttachment
 * @param {spine4::String} arg0
 * @param {spine4::String} arg1
 */
setAttachment : function (
str, 
str 
)
{
},

/**
 * @method findIkConstraint
 * @param {spine4::String} arg0
 * @return {spine4::IkConstraint}
 */
findIkConstraint : function (
str 
)
{
    return spine4::IkConstraint;
},

/**
 * @method findPhysicsConstraint
 * @param {spine4::String} arg0
 * @return {spine4::PhysicsConstraint}
 */
findPhysicsConstraint : function (
str 
)
{
    return spine4::PhysicsConstraint;
},

/**
 * @method setBonesToSetupPose
 */
setBonesToSetupPose : function (
)
{
},

/**
 * @method physicsTranslate
 * @param {float} arg0
 * @param {float} arg1
 */
physicsTranslate : function (
float, 
float 
)
{
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setSlotsToSetupPose
 */
setSlotsToSetupPose : function (
)
{
},

/**
 * @method getDrawOrder
 * @return {spine4::Vector<spine4::Slot >}
 */
getDrawOrder : function (
)
{
    return new Array();
},

/**
 * @method getTime
 * @return {float}
 */
getTime : function (
)
{
    return 0;
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method getIkConstraints
 * @return {spine4::Vector<spine4::IkConstraint >}
 */
getIkConstraints : function (
)
{
    return new Array();
},

/**
 * @method getData
 * @return {spine4::SkeletonData}
 */
getData : function (
)
{
    return spine4::SkeletonData;
},

/**
 * @method getUpdateCacheList
 * @return {spine4::Vector<spine4::Updatable >}
 */
getUpdateCacheList : function (
)
{
    return new Array();
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method getPathConstraints
 * @return {spine4::Vector<spine4::PathConstraint >}
 */
getPathConstraints : function (
)
{
    return new Array();
},

/**
 * @method getSlots
 * @return {spine4::Vector<spine4::Slot >}
 */
getSlots : function (
)
{
    return new Array();
},

/**
 * @method printUpdateCache
 */
printUpdateCache : function (
)
{
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method getAttachment
* @param {int|spine4::String} int
* @param {spine4::String|spine4::String} str
* @return {spine4::Attachment|spine4::Attachment}
*/
getAttachment : function(
str,
str 
)
{
    return spine4::Attachment;
},

/**
 * @method physicsRotate
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
physicsRotate : function (
float, 
float, 
float 
)
{
},

/**
 * @method setTime
 * @param {float} arg0
 */
setTime : function (
float 
)
{
},

/**
 * @method setPosition
 * @param {float} arg0
 * @param {float} arg1
 */
setPosition : function (
float, 
float 
)
{
},

/**
 * @method getPhysicsConstraints
 * @return {spine4::Vector<spine4::PhysicsConstraint >}
 */
getPhysicsConstraints : function (
)
{
    return new Array();
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method findBone
 * @param {spine4::String} arg0
 * @return {spine4::Bone}
 */
findBone : function (
str 
)
{
    return spine4::Bone;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::Bone >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method getRootBone
 * @return {spine4::Bone}
 */
getRootBone : function (
)
{
    return spine4::Bone;
},

/**
 * @method updateCache
 */
updateCache : function (
)
{
},

/**
 * @method getTransformConstraints
 * @return {spine4::Vector<spine4::TransformConstraint >}
 */
getTransformConstraints : function (
)
{
    return new Array();
},

/**
 * @method setSkin
* @param {spine4::Skin|spine4::String} skin
*/
setSkin : function(
str 
)
{
},

/**
 * @method findSlot
 * @param {spine4::String} arg0
 * @return {spine4::Slot}
 */
findSlot : function (
str 
)
{
    return spine4::Slot;
},

/**
 * @method updateWorldTransform
* @param {spine4::Physics|spine4::Physics} physics
* @param {spine4::Bone} bone
*/
updateWorldTransform : function(
physics,
bone 
)
{
},

/**
 * @method findPathConstraint
 * @param {spine4::String} arg0
 * @return {spine4::PathConstraint}
 */
findPathConstraint : function (
str 
)
{
    return spine4::PathConstraint;
},

};

/**
 * @class SkeletonBounds
 */
spine4.SkeletonBounds = {

/**
 * @method getBoundingBoxes
 * @return {spine4::Vector<spine4::BoundingBoxAttachment >}
 */
getBoundingBoxes : function (
)
{
    return new Array();
},

/**
 * @method getHeight
 * @return {float}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method aabbintersectsSegment
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @return {bool}
 */
aabbintersectsSegment : function (
float, 
float, 
float, 
float 
)
{
    return false;
},

/**
 * @method getWidth
 * @return {float}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method aabbcontainsPoint
 * @param {float} arg0
 * @param {float} arg1
 * @return {bool}
 */
aabbcontainsPoint : function (
float, 
float 
)
{
    return false;
},

/**
 * @method intersectsSegment
* @param {spine4::Polygon|float} polygon
* @param {float|float} float
* @param {float|float} float
* @param {float|float} float
* @param {float} float
* @return {bool|spine4::BoundingBoxAttachment}
*/
intersectsSegment : function(
polygon,
float,
float,
float,
float 
)
{
    return false;
},

/**
 * @method getBoundingBox
 * @param {spine4::Polygon} arg0
 * @return {spine4::BoundingBoxAttachment}
 */
getBoundingBox : function (
polygon 
)
{
    return spine4::BoundingBoxAttachment;
},

/**
 * @method containsPoint
* @param {float|spine4::Polygon} float
* @param {float|float} float
* @param {float} float
* @return {spine4::BoundingBoxAttachment|bool}
*/
containsPoint : function(
polygon,
float,
float 
)
{
    return false;
},

/**
 * @method getPolygon
 * @param {spine4::BoundingBoxAttachment} arg0
 * @return {spine4::Polygon}
 */
getPolygon : function (
boundingboxattachment 
)
{
    return spine4::Polygon;
},

/**
 * @method getPolygons
 * @return {spine4::Vector<spine4::Polygon >}
 */
getPolygons : function (
)
{
    return new Array();
},

};

/**
 * @class Polygon
 */
spine4.Polygon = {

};

/**
 * @class SkeletonData
 */
spine4.SkeletonData = {

/**
 * @method getReferenceScale
 * @return {float}
 */
getReferenceScale : function (
)
{
    return 0;
},

/**
 * @method findEvent
 * @param {spine4::String} arg0
 * @return {spine4::EventData}
 */
findEvent : function (
str 
)
{
    return spine4::EventData;
},

/**
 * @method findAnimation
 * @param {spine4::String} arg0
 * @return {spine4::Animation}
 */
findAnimation : function (
str 
)
{
    return spine4::Animation;
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method findTransformConstraint
 * @param {spine4::String} arg0
 * @return {spine4::TransformConstraintData}
 */
findTransformConstraint : function (
str 
)
{
    return spine4::TransformConstraintData;
},

/**
 * @method setFps
 * @param {float} arg0
 */
setFps : function (
float 
)
{
},

/**
 * @method findIkConstraint
 * @param {spine4::String} arg0
 * @return {spine4::IkConstraintData}
 */
findIkConstraint : function (
str 
)
{
    return spine4::IkConstraintData;
},

/**
 * @method getFps
 * @return {float}
 */
getFps : function (
)
{
    return 0;
},

/**
 * @method getSkins
 * @return {spine4::Vector<spine4::Skin >}
 */
getSkins : function (
)
{
    return new Array();
},

/**
 * @method findPhysicsConstraint
 * @param {spine4::String} arg0
 * @return {spine4::PhysicsConstraintData}
 */
findPhysicsConstraint : function (
str 
)
{
    return spine4::PhysicsConstraintData;
},

/**
 * @method setWidth
 * @param {float} arg0
 */
setWidth : function (
float 
)
{
},

/**
 * @method setVersion
 * @param {spine4::String} arg0
 */
setVersion : function (
str 
)
{
},

/**
 * @method setHash
 * @param {spine4::String} arg0
 */
setHash : function (
str 
)
{
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method getDefaultSkin
 * @return {spine4::Skin}
 */
getDefaultSkin : function (
)
{
    return spine4::Skin;
},

/**
 * @method getHeight
 * @return {float}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method setDefaultSkin
 * @param {spine4::Skin} arg0
 */
setDefaultSkin : function (
skin 
)
{
},

/**
 * @method getHash
 * @return {spine4::String}
 */
getHash : function (
)
{
    return spine4::String;
},

/**
 * @method getAnimations
 * @return {spine4::Vector<spine4::Animation >}
 */
getAnimations : function (
)
{
    return new Array();
},

/**
 * @method setImagesPath
 * @param {spine4::String} arg0
 */
setImagesPath : function (
str 
)
{
},

/**
 * @method getIkConstraints
 * @return {spine4::Vector<spine4::IkConstraintData >}
 */
getIkConstraints : function (
)
{
    return new Array();
},

/**
 * @method getImagesPath
 * @return {spine4::String}
 */
getImagesPath : function (
)
{
    return spine4::String;
},

/**
 * @method getEvents
 * @return {spine4::Vector<spine4::EventData >}
 */
getEvents : function (
)
{
    return new Array();
},

/**
 * @method findBone
 * @param {spine4::String} arg0
 * @return {spine4::BoneData}
 */
findBone : function (
str 
)
{
    return spine4::BoneData;
},

/**
 * @method setName
 * @param {spine4::String} arg0
 */
setName : function (
str 
)
{
},

/**
 * @method getPathConstraints
 * @return {spine4::Vector<spine4::PathConstraintData >}
 */
getPathConstraints : function (
)
{
    return new Array();
},

/**
 * @method getAudioPath
 * @return {spine4::String}
 */
getAudioPath : function (
)
{
    return spine4::String;
},

/**
 * @method getVersion
 * @return {spine4::String}
 */
getVersion : function (
)
{
    return spine4::String;
},

/**
 * @method getPhysicsConstraints
 * @return {spine4::Vector<spine4::PhysicsConstraintData >}
 */
getPhysicsConstraints : function (
)
{
    return new Array();
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method setHeight
 * @param {float} arg0
 */
setHeight : function (
float 
)
{
},

/**
 * @method getWidth
 * @return {float}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method setReferenceScale
 * @param {float} arg0
 */
setReferenceScale : function (
float 
)
{
},

/**
 * @method getSlots
 * @return {spine4::Vector<spine4::SlotData >}
 */
getSlots : function (
)
{
    return new Array();
},

/**
 * @method findSkin
 * @param {spine4::String} arg0
 * @return {spine4::Skin}
 */
findSkin : function (
str 
)
{
    return spine4::Skin;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::BoneData >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method getTransformConstraints
 * @return {spine4::Vector<spine4::TransformConstraintData >}
 */
getTransformConstraints : function (
)
{
    return new Array();
},

/**
 * @method findSlot
 * @param {spine4::String} arg0
 * @return {spine4::SlotData}
 */
findSlot : function (
str 
)
{
    return spine4::SlotData;
},

/**
 * @method setAudioPath
 * @param {spine4::String} arg0
 */
setAudioPath : function (
str 
)
{
},

/**
 * @method findPathConstraint
 * @param {spine4::String} arg0
 * @return {spine4::PathConstraintData}
 */
findPathConstraint : function (
str 
)
{
    return spine4::PathConstraintData;
},

/**
 * @method getName
 * @return {spine4::String}
 */
getName : function (
)
{
    return spine4::String;
},

};

/**
 * @class Skin
 */
spine4.Skin = {

/**
 * @method findNamesForSlot
 * @param {unsigned int} arg0
 * @param {spine4::Vector<spine4::String>} arg1
 */
findNamesForSlot : function (
int, 
array 
)
{
},

/**
 * @method getConstraints
 * @return {spine4::Vector<spine4::ConstraintData >}
 */
getConstraints : function (
)
{
    return new Array();
},

/**
 * @method removeAttachment
 * @param {unsigned int} arg0
 * @param {spine4::String} arg1
 */
removeAttachment : function (
int, 
str 
)
{
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::BoneData >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method getName
 * @return {spine4::String}
 */
getName : function (
)
{
    return spine4::String;
},

/**
 * @method getAttachment
 * @param {unsigned int} arg0
 * @param {spine4::String} arg1
 * @return {spine4::Attachment}
 */
getAttachment : function (
int, 
str 
)
{
    return spine4::Attachment;
},

/**
 * @method addSkin
 * @param {spine4::Skin} arg0
 */
addSkin : function (
skin 
)
{
},

/**
 * @method setAttachment
 * @param {unsigned int} arg0
 * @param {spine4::String} arg1
 * @param {spine4::Attachment} arg2
 */
setAttachment : function (
int, 
str, 
attachment 
)
{
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method copySkin
 * @param {spine4::Skin} arg0
 */
copySkin : function (
skin 
)
{
},

/**
 * @method findAttachmentsForSlot
 * @param {unsigned int} arg0
 * @param {spine4::Vector<spine4::Attachment >} arg1
 */
findAttachmentsForSlot : function (
int, 
array 
)
{
},

};

/**
 * @class SlotData
 */
spine4.SlotData = {

/**
 * @method getIndex
 * @return {int}
 */
getIndex : function (
)
{
    return 0;
},

/**
 * @method getDarkColor
 * @return {spine4::Color}
 */
getDarkColor : function (
)
{
    return spine4::Color;
},

/**
 * @method getAttachmentName
 * @return {spine4::String}
 */
getAttachmentName : function (
)
{
    return spine4::String;
},

/**
 * @method getColor
 * @return {spine4::Color}
 */
getColor : function (
)
{
    return spine4::Color;
},

/**
 * @method getName
 * @return {spine4::String}
 */
getName : function (
)
{
    return spine4::String;
},

/**
 * @method setBlendMode
 * @param {spine4::BlendMode} arg0
 */
setBlendMode : function (
blendmode 
)
{
},

/**
 * @method getBlendMode
 * @return {spine4::BlendMode}
 */
getBlendMode : function (
)
{
    return spine4::BlendMode;
},

/**
 * @method hasDarkColor
 * @return {bool}
 */
hasDarkColor : function (
)
{
    return false;
},

/**
 * @method setHasDarkColor
 * @param {bool} arg0
 */
setHasDarkColor : function (
bool 
)
{
},

/**
 * @method isVisible
 * @return {bool}
 */
isVisible : function (
)
{
    return false;
},

/**
 * @method setAttachmentName
 * @param {spine4::String} arg0
 */
setAttachmentName : function (
str 
)
{
},

/**
 * @method setVisible
 * @param {bool} arg0
 */
setVisible : function (
bool 
)
{
},

/**
 * @method getBoneData
 * @return {spine4::BoneData}
 */
getBoneData : function (
)
{
    return spine4::BoneData;
},

};

/**
 * @class TransformConstraint
 */
spine4.TransformConstraint = {

/**
 * @method setMixRotate
 * @param {float} arg0
 */
setMixRotate : function (
float 
)
{
},

/**
 * @method getTarget
 * @return {spine4::Bone}
 */
getTarget : function (
)
{
    return spine4::Bone;
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method getOrder
 * @return {int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method setMixShearY
 * @param {float} arg0
 */
setMixShearY : function (
float 
)
{
},

/**
 * @method setActive
 * @param {bool} arg0
 */
setActive : function (
bool 
)
{
},

/**
 * @method getData
 * @return {spine4::TransformConstraintData}
 */
getData : function (
)
{
    return spine4::TransformConstraintData;
},

/**
 * @method setTarget
 * @param {spine4::Bone} arg0
 */
setTarget : function (
bone 
)
{
},

/**
 * @method getMixY
 * @return {float}
 */
getMixY : function (
)
{
    return 0;
},

/**
 * @method update
 * @param {spine4::Physics} arg0
 */
update : function (
physics 
)
{
},

/**
 * @method getMixX
 * @return {float}
 */
getMixX : function (
)
{
    return 0;
},

/**
 * @method getMixRotate
 * @return {float}
 */
getMixRotate : function (
)
{
    return 0;
},

/**
 * @method isActive
 * @return {bool}
 */
isActive : function (
)
{
    return false;
},

/**
 * @method setMixY
 * @param {float} arg0
 */
setMixY : function (
float 
)
{
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::Bone >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method getMixShearY
 * @return {float}
 */
getMixShearY : function (
)
{
    return 0;
},

/**
 * @method getMixScaleX
 * @return {float}
 */
getMixScaleX : function (
)
{
    return 0;
},

/**
 * @method getMixScaleY
 * @return {float}
 */
getMixScaleY : function (
)
{
    return 0;
},

/**
 * @method setMixScaleX
 * @param {float} arg0
 */
setMixScaleX : function (
float 
)
{
},

/**
 * @method setMixScaleY
 * @param {float} arg0
 */
setMixScaleY : function (
float 
)
{
},

/**
 * @method setMixX
 * @param {float} arg0
 */
setMixX : function (
float 
)
{
},

};

/**
 * @class TransformConstraintData
 */
spine4.TransformConstraintData = {

/**
 * @method setOffsetY
 * @param {float} arg0
 */
setOffsetY : function (
float 
)
{
},

/**
 * @method setOffsetX
 * @param {float} arg0
 */
setOffsetX : function (
float 
)
{
},

/**
 * @method getOffsetRotation
 * @return {float}
 */
getOffsetRotation : function (
)
{
    return 0;
},

/**
 * @method isRelative
 * @return {bool}
 */
isRelative : function (
)
{
    return false;
},

/**
 * @method setMixRotate
 * @param {float} arg0
 */
setMixRotate : function (
float 
)
{
},

/**
 * @method getTarget
 * @return {spine4::BoneData}
 */
getTarget : function (
)
{
    return spine4::BoneData;
},

/**
 * @method getOffsetScaleX
 * @return {float}
 */
getOffsetScaleX : function (
)
{
    return 0;
},

/**
 * @method getOffsetScaleY
 * @return {float}
 */
getOffsetScaleY : function (
)
{
    return 0;
},

/**
 * @method setOffsetShearY
 * @param {float} arg0
 */
setOffsetShearY : function (
float 
)
{
},

/**
 * @method getRTTI
 * @return {spine4::RTTI}
 */
getRTTI : function (
)
{
    return spine4::RTTI;
},

/**
 * @method setMixShearY
 * @param {float} arg0
 */
setMixShearY : function (
float 
)
{
},

/**
 * @method setOffsetScaleX
 * @param {float} arg0
 */
setOffsetScaleX : function (
float 
)
{
},

/**
 * @method setOffsetScaleY
 * @param {float} arg0
 */
setOffsetScaleY : function (
float 
)
{
},

/**
 * @method setTarget
 * @param {spine4::BoneData} arg0
 */
setTarget : function (
bonedata 
)
{
},

/**
 * @method getMixY
 * @return {float}
 */
getMixY : function (
)
{
    return 0;
},

/**
 * @method getMixX
 * @return {float}
 */
getMixX : function (
)
{
    return 0;
},

/**
 * @method setOffsetRotation
 * @param {float} arg0
 */
setOffsetRotation : function (
float 
)
{
},

/**
 * @method getOffsetY
 * @return {float}
 */
getOffsetY : function (
)
{
    return 0;
},

/**
 * @method getOffsetX
 * @return {float}
 */
getOffsetX : function (
)
{
    return 0;
},

/**
 * @method getMixRotate
 * @return {float}
 */
getMixRotate : function (
)
{
    return 0;
},

/**
 * @method isLocal
 * @return {bool}
 */
isLocal : function (
)
{
    return false;
},

/**
 * @method setLocal
 * @param {bool} arg0
 */
setLocal : function (
bool 
)
{
},

/**
 * @method setMixY
 * @param {float} arg0
 */
setMixY : function (
float 
)
{
},

/**
 * @method getBones
 * @return {spine4::Vector<spine4::BoneData >}
 */
getBones : function (
)
{
    return new Array();
},

/**
 * @method getMixShearY
 * @return {float}
 */
getMixShearY : function (
)
{
    return 0;
},

/**
 * @method getMixScaleX
 * @return {float}
 */
getMixScaleX : function (
)
{
    return 0;
},

/**
 * @method getMixScaleY
 * @return {float}
 */
getMixScaleY : function (
)
{
    return 0;
},

/**
 * @method setMixScaleX
 * @param {float} arg0
 */
setMixScaleX : function (
float 
)
{
},

/**
 * @method setMixScaleY
 * @param {float} arg0
 */
setMixScaleY : function (
float 
)
{
},

/**
 * @method getOffsetShearY
 * @return {float}
 */
getOffsetShearY : function (
)
{
    return 0;
},

/**
 * @method setRelative
 * @param {bool} arg0
 */
setRelative : function (
bool 
)
{
},

/**
 * @method setMixX
 * @param {float} arg0
 */
setMixX : function (
float 
)
{
},

};

/**
 * @class TransformConstraintTimeline
 */
spine4.TransformConstraintTimeline = {

/**
 * @method setTransformConstraintIndex
 * @param {int} arg0
 */
setTransformConstraintIndex : function (
int 
)
{
},

/**
 * @method getTransformConstraintIndex
 * @return {int}
 */
getTransformConstraintIndex : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {unsigned int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {float} arg4
 * @param {float} arg5
 * @param {float} arg6
 * @param {float} arg7
 */
setFrame : function (
int, 
float, 
float, 
float, 
float, 
float, 
float, 
float 
)
{
},

};

/**
 * @class VertexEffect
 */
spine4.VertexEffect = {

};

/**
 * @class JitterVertexEffect
 */
spine4.JitterVertexEffect = {

};

/**
 * @class SwirlVertexEffect
 */
spine4.SwirlVertexEffect = {

};

/**
 * @class VertexEffectDelegate
 */
spine4.VertexEffectDelegate = {

/**
 * @method getEffectType
 * @return {String}
 */
getEffectType : function (
)
{
    return ;
},

/**
 * @method initSwirlWithPowOut
 * @param {float} arg0
 * @param {int} arg1
 * @return {spine4::SwirlVertexEffect}
 */
initSwirlWithPowOut : function (
float, 
int 
)
{
    return spine4::SwirlVertexEffect;
},

/**
 * @method initSwirlWithPow
 * @param {float} arg0
 * @param {int} arg1
 * @return {spine4::SwirlVertexEffect}
 */
initSwirlWithPow : function (
float, 
int 
)
{
    return spine4::SwirlVertexEffect;
},

/**
 * @method initJitter
 * @param {float} arg0
 * @param {float} arg1
 * @return {spine4::JitterVertexEffect}
 */
initJitter : function (
float, 
float 
)
{
    return spine4::JitterVertexEffect;
},

/**
 * @method getSwirlVertexEffect
 * @return {spine4::SwirlVertexEffect}
 */
getSwirlVertexEffect : function (
)
{
    return spine4::SwirlVertexEffect;
},

/**
 * @method getVertexEffect
 * @return {spine4::VertexEffect}
 */
getVertexEffect : function (
)
{
    return spine4::VertexEffect;
},

/**
 * @method getJitterVertexEffect
 * @return {spine4::JitterVertexEffect}
 */
getJitterVertexEffect : function (
)
{
    return spine4::JitterVertexEffect;
},

/**
 * @method clear
 */
clear : function (
)
{
},

/**
 * @method VertexEffectDelegate
 * @constructor
 */
VertexEffectDelegate : function (
)
{
},

};

/**
 * @class SkeletonRenderer
 */
spine4.Skeleton = {

/**
 * @method setUseTint
 * @param {bool} arg0
 */
setUseTint : function (
bool 
)
{
},

/**
 * @method setTimeScale
 * @param {float} arg0
 */
setTimeScale : function (
float 
)
{
},

/**
 * @method render
 * @param {float} arg0
 */
render : function (
float 
)
{
},

/**
 * @method initWithUUID
 * @param {String} arg0
 */
initWithUUID : function (
str 
)
{
},

/**
 * @method setAttachUtil
 * @param {spine4::RealTimeAttachUtil} arg0
 */
setAttachUtil : function (
realtimeattachutil 
)
{
},

/**
 * @method setOpacityModifyRGB
 * @param {bool} arg0
 */
setOpacityModifyRGB : function (
bool 
)
{
},

/**
 * @method paused
 * @param {bool} arg0
 */
paused : function (
bool 
)
{
},

/**
 * @method destroy
 */
destroy : function (
)
{
},

/**
 * @method setAttachment
* @param {String|String} str
* @param {char|String} char
* @return {bool|bool}
*/
setAttachment : function(
str,
str 
)
{
    return false;
},

/**
 * @method setBonesToSetupPose
 */
setBonesToSetupPose : function (
)
{
},

/**
 * @method onEnable
 */
onEnable : function (
)
{
},

/**
 * @method setEffect
 * @param {cc.renderer::EffectVariant} arg0
 */
setEffect : function (
effectvariant 
)
{
},

/**
 * @method stopSchedule
 */
stopSchedule : function (
)
{
},

/**
 * @method isOpacityModifyRGB
 * @return {bool}
 */
isOpacityModifyRGB : function (
)
{
    return false;
},

/**
 * @method setDebugSlotsEnabled
 * @param {bool} arg0
 */
setDebugSlotsEnabled : function (
bool 
)
{
},

/**
 * @method initWithJsonFile
* @param {String|String} str
* @param {String|spine4::Atlas} str
* @param {float|float} float
*/
initWithJsonFile : function(
str,
atlas,
float 
)
{
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method setSlotsToSetupPose
 */
setSlotsToSetupPose : function (
)
{
},

/**
 * @method initWithBinaryFile
* @param {String|String} str
* @param {String|spine4::Atlas} str
* @param {float|float} float
*/
initWithBinaryFile : function(
str,
atlas,
float 
)
{
},

/**
 * @method initWithSkeleton
 * @param {spine4::Skeleton} arg0
 * @param {bool} arg1
 * @param {bool} arg2
 * @param {bool} arg3
 */
initWithSkeleton : function (
skeleton, 
bool, 
bool, 
bool 
)
{
},

/**
 * @method getBoundingBox
 * @return {rect_object}
 */
getBoundingBox : function (
)
{
    return cc.Rect;
},

/**
 * @method getDebugData
 * @return {se::Object}
 */
getDebugData : function (
)
{
    return se::Object;
},

/**
 * @method findBone
 * @param {String} arg0
 * @return {spine4::Bone}
 */
findBone : function (
str 
)
{
    return spine4::Bone;
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method getAttachment
 * @param {String} arg0
 * @param {String} arg1
 * @return {spine4::Attachment}
 */
getAttachment : function (
str, 
str 
)
{
    return spine4::Attachment;
},

/**
 * @method setDebugMeshEnabled
 * @param {bool} arg0
 */
setDebugMeshEnabled : function (
bool 
)
{
},

/**
 * @method beginSchedule
 */
beginSchedule : function (
)
{
},

/**
 * @method initialize
 */
initialize : function (
)
{
},

/**
 * @method setDebugBonesEnabled
 * @param {bool} arg0
 */
setDebugBonesEnabled : function (
bool 
)
{
},

/**
 * @method getTimeScale
 * @return {float}
 */
getTimeScale : function (
)
{
    return 0;
},

/**
 * @method setSlotsRange
 * @param {int} arg0
 * @param {int} arg1
 */
setSlotsRange : function (
int, 
int 
)
{
},

/**
 * @method onDisable
 */
onDisable : function (
)
{
},

/**
 * @method setColor
 * @param {color4b_object} arg0
 */
setColor : function (
color4b 
)
{
},

/**
 * @method bindNodeProxy
 * @param {cc.renderer::NodeProxy} arg0
 */
bindNodeProxy : function (
nodeproxy 
)
{
},

/**
 * @method setBatchEnabled
 * @param {bool} arg0
 */
setBatchEnabled : function (
bool 
)
{
},

/**
 * @method setSkin
* @param {char|String} char
*/
setSkin : function(
str 
)
{
},

/**
 * @method findSlot
 * @param {String} arg0
 * @return {spine4::Slot}
 */
findSlot : function (
str 
)
{
    return spine4::Slot;
},

/**
 * @method updateWorldTransform
 */
updateWorldTransform : function (
)
{
},

/**
 * @method getSkeleton
 * @return {spine4::Skeleton}
 */
getSkeleton : function (
)
{
    return spine4::Skeleton;
},

/**
 * @method setVertexEffectDelegate
 * @param {spine4::VertexEffectDelegate} arg0
 */
setVertexEffectDelegate : function (
vertexeffectdelegate 
)
{
},

/**
 * @method SkeletonRenderer
 * @constructor
* @param {spine4::Skeleton|spine4::SkeletonData|String|String} skeleton
* @param {bool|bool|spine4::Atlas|String} bool
* @param {bool|float|float} bool
* @param {bool} bool
*/
SkeletonRenderer : function(
skeleton,
bool,
bool,
bool 
)
{
},

};

/**
 * @class SkeletonAnimation
 */
spine4.SkeletonAnimation = {

/**
 * @method setAnimation
 * @param {int} arg0
 * @param {String} arg1
 * @param {bool} arg2
 * @return {spine4::TrackEntry}
 */
setAnimation : function (
int, 
str, 
bool 
)
{
    return spine4::TrackEntry;
},

/**
 * @method findAnimation
 * @param {String} arg0
 * @return {spine4::Animation}
 */
findAnimation : function (
str 
)
{
    return spine4::Animation;
},

/**
 * @method setTrackEventListener
 * @param {spine4::TrackEntry} arg0
 * @param {function} arg1
 */
setTrackEventListener : function (
trackentry, 
func 
)
{
},

/**
 * @method setMix
 * @param {String} arg0
 * @param {String} arg1
 * @param {float} arg2
 */
setMix : function (
str, 
str, 
float 
)
{
},

/**
 * @method setTrackStartListener
 * @param {spine4::TrackEntry} arg0
 * @param {function} arg1
 */
setTrackStartListener : function (
trackentry, 
func 
)
{
},

/**
 * @method addEmptyAnimation
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @return {spine4::TrackEntry}
 */
addEmptyAnimation : function (
int, 
float, 
float 
)
{
    return spine4::TrackEntry;
},

/**
 * @method setDisposeListener
 * @param {function} arg0
 */
setDisposeListener : function (
func 
)
{
},

/**
 * @method setTrackInterruptListener
 * @param {spine4::TrackEntry} arg0
 * @param {function} arg1
 */
setTrackInterruptListener : function (
trackentry, 
func 
)
{
},

/**
 * @method setTrackCompleteListener
 * @param {spine4::TrackEntry} arg0
 * @param {function} arg1
 */
setTrackCompleteListener : function (
trackentry, 
func 
)
{
},

/**
 * @method setAnimationStateData
 * @param {spine4::AnimationStateData} arg0
 */
setAnimationStateData : function (
animationstatedata 
)
{
},

/**
 * @method setEndListener
 * @param {function} arg0
 */
setEndListener : function (
func 
)
{
},

/**
 * @method getState
 * @return {spine4::AnimationState}
 */
getState : function (
)
{
    return spine4::AnimationState;
},

/**
 * @method setCompleteListener
 * @param {function} arg0
 */
setCompleteListener : function (
func 
)
{
},

/**
 * @method setTrackDisposeListener
 * @param {spine4::TrackEntry} arg0
 * @param {function} arg1
 */
setTrackDisposeListener : function (
trackentry, 
func 
)
{
},

/**
 * @method getCurrent
 * @return {spine4::TrackEntry}
 */
getCurrent : function (
)
{
    return spine4::TrackEntry;
},

/**
 * @method setEventListener
 * @param {function} arg0
 */
setEventListener : function (
func 
)
{
},

/**
 * @method setEmptyAnimation
 * @param {int} arg0
 * @param {float} arg1
 * @return {spine4::TrackEntry}
 */
setEmptyAnimation : function (
int, 
float 
)
{
    return spine4::TrackEntry;
},

/**
 * @method clearTrack
 */
clearTrack : function (
)
{
},

/**
 * @method setInterruptListener
 * @param {function} arg0
 */
setInterruptListener : function (
func 
)
{
},

/**
 * @method addAnimation
 * @param {int} arg0
 * @param {String} arg1
 * @param {bool} arg2
 * @param {float} arg3
 * @return {spine4::TrackEntry}
 */
addAnimation : function (
int, 
str, 
bool, 
float 
)
{
    return spine4::TrackEntry;
},

/**
 * @method setEmptyAnimations
 * @param {float} arg0
 */
setEmptyAnimations : function (
float 
)
{
},

/**
 * @method clearTracks
 */
clearTracks : function (
)
{
},

/**
 * @method setTrackEndListener
 * @param {spine4::TrackEntry} arg0
 * @param {function} arg1
 */
setTrackEndListener : function (
trackentry, 
func 
)
{
},

/**
 * @method setStartListener
 * @param {function} arg0
 */
setStartListener : function (
func 
)
{
},

/**
 * @method createWithBinaryFile
* @param {String|String} str
* @param {String|spine4::Atlas} str
* @param {float|float} float
* @return {spine4::SkeletonAnimation|spine4::SkeletonAnimation}
*/
createWithBinaryFile : function(
str,
atlas,
float 
)
{
    return spine4::SkeletonAnimation;
},

/**
 * @method create
 * @return {spine4::SkeletonAnimation}
 */
create : function (
)
{
    return spine4::SkeletonAnimation;
},

/**
 * @method createWithJsonFile
* @param {String|String} str
* @param {String|spine4::Atlas} str
* @param {float|float} float
* @return {spine4::SkeletonAnimation|spine4::SkeletonAnimation}
*/
createWithJsonFile : function(
str,
atlas,
float 
)
{
    return spine4::SkeletonAnimation;
},

/**
 * @method setGlobalTimeScale
 * @param {float} arg0
 */
setGlobalTimeScale : function (
float 
)
{
},

/**
 * @method SkeletonAnimation
 * @constructor
 */
SkeletonAnimation : function (
)
{
},

};

/**
 * @class SkeletonDataMgr
 */
spine4.SkeletonDataMgr = {

/**
 * @method setDestroyCallback
 * @param {function} arg0
 */
setDestroyCallback : function (
func 
)
{
},

/**
 * @method getInstance
 * @return {spine4::SkeletonDataMgr}
 */
getInstance : function (
)
{
    return spine4::SkeletonDataMgr;
},

/**
 * @method SkeletonDataMgr
 * @constructor
 */
SkeletonDataMgr : function (
)
{
},

};

/**
 * @class SkeletonCacheMgr
 */
spine4.SkeletonCacheMgr = {

/**
 * @method removeSkeletonCache
 * @param {String} arg0
 */
removeSkeletonCache : function (
str 
)
{
},

/**
 * @method buildSkeletonCache
 * @param {String} arg0
 * @return {spine4::SkeletonCache}
 */
buildSkeletonCache : function (
str 
)
{
    return spine4::SkeletonCache;
},

/**
 * @method destroyInstance
 */
destroyInstance : function (
)
{
},

/**
 * @method getInstance
 * @return {spine4::SkeletonCacheMgr}
 */
getInstance : function (
)
{
    return spine4::SkeletonCacheMgr;
},

};

/**
 * @class SkeletonCacheAnimation
 */
spine4.SkeletonCacheAnimation = {

/**
 * @method setUseTint
 * @param {bool} arg0
 */
setUseTint : function (
bool 
)
{
},

/**
 * @method setTimeScale
 * @param {float} arg0
 */
setTimeScale : function (
float 
)
{
},

/**
 * @method findAnimation
 * @param {String} arg0
 * @return {spine4::Animation}
 */
findAnimation : function (
str 
)
{
    return spine4::Animation;
},

/**
 * @method setAttachUtil
 * @param {spine4::CacheModeAttachUtil} arg0
 */
setAttachUtil : function (
cachemodeattachutil 
)
{
},

/**
 * @method paused
 * @param {bool} arg0
 */
paused : function (
bool 
)
{
},

/**
 * @method setAttachment
* @param {String|String} str
* @param {char|String} char
* @return {bool|bool}
*/
setAttachment : function(
str,
str 
)
{
    return false;
},

/**
 * @method setAnimation
 * @param {String} arg0
 * @param {bool} arg1
 */
setAnimation : function (
str, 
bool 
)
{
},

/**
 * @method setBonesToSetupPose
 */
setBonesToSetupPose : function (
)
{
},

/**
 * @method onEnable
 */
onEnable : function (
)
{
},

/**
 * @method setStartListener
 * @param {function} arg0
 */
setStartListener : function (
func 
)
{
},

/**
 * @method setEffect
 * @param {cc.renderer::EffectVariant} arg0
 */
setEffect : function (
effectvariant 
)
{
},

/**
 * @method isOpacityModifyRGB
 * @return {bool}
 */
isOpacityModifyRGB : function (
)
{
    return false;
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method setOpacityModifyRGB
 * @param {bool} arg0
 */
setOpacityModifyRGB : function (
bool 
)
{
},

/**
 * @method setSlotsToSetupPose
 */
setSlotsToSetupPose : function (
)
{
},

/**
 * @method setEndListener
 * @param {function} arg0
 */
setEndListener : function (
func 
)
{
},

/**
 * @method beginSchedule
 */
beginSchedule : function (
)
{
},

/**
 * @method updateAllAnimationCache
 */
updateAllAnimationCache : function (
)
{
},

/**
 * @method addAnimation
 * @param {String} arg0
 * @param {bool} arg1
 * @param {float} arg2
 */
addAnimation : function (
str, 
bool, 
float 
)
{
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method getAttachment
 * @param {String} arg0
 * @param {String} arg1
 * @return {spine4::Attachment}
 */
getAttachment : function (
str, 
str 
)
{
    return spine4::Attachment;
},

/**
 * @method setCompleteListener
 * @param {function} arg0
 */
setCompleteListener : function (
func 
)
{
},

/**
 * @method updateAnimationCache
 * @param {String} arg0
 */
updateAnimationCache : function (
str 
)
{
},

/**
 * @method getTimeScale
 * @return {float}
 */
getTimeScale : function (
)
{
    return 0;
},

/**
 * @method findBone
 * @param {String} arg0
 * @return {spine4::Bone}
 */
findBone : function (
str 
)
{
    return spine4::Bone;
},

/**
 * @method onDisable
 */
onDisable : function (
)
{
},

/**
 * @method setColor
 * @param {color4b_object} arg0
 */
setColor : function (
color4b 
)
{
},

/**
 * @method bindNodeProxy
 * @param {cc.renderer::NodeProxy} arg0
 */
bindNodeProxy : function (
nodeproxy 
)
{
},

/**
 * @method setBatchEnabled
 * @param {bool} arg0
 */
setBatchEnabled : function (
bool 
)
{
},

/**
 * @method setSkin
* @param {char|String} char
*/
setSkin : function(
str 
)
{
},

/**
 * @method findSlot
 * @param {String} arg0
 * @return {spine4::Slot}
 */
findSlot : function (
str 
)
{
    return spine4::Slot;
},

/**
 * @method getSkeleton
 * @return {spine4::Skeleton}
 */
getSkeleton : function (
)
{
    return spine4::Skeleton;
},

/**
 * @method stopSchedule
 */
stopSchedule : function (
)
{
},

/**
 * @method SkeletonCacheAnimation
 * @constructor
 * @param {String} arg0
 * @param {bool} arg1
 */
SkeletonCacheAnimation : function (
str, 
bool 
)
{
},

};

/**
 * @class AttachUtilBase
 */
spine4.AttachUtilBase = {

/**
 * @method associateAttachedNode
 * @param {spine4::Skeleton} arg0
 * @param {cc.renderer::NodeProxy} arg1
 */
associateAttachedNode : function (
skeleton, 
nodeproxy 
)
{
},

};

/**
 * @class RealTimeAttachUtil
 */
spine4.RealTimeAttachUtil = {

/**
 * @method RealTimeAttachUtil
 * @constructor
 */
RealTimeAttachUtil : function (
)
{
},

};

/**
 * @class CacheModeAttachUtil
 */
spine4.CacheModeAttachUtil = {

/**
 * @method CacheModeAttachUtil
 * @constructor
 */
CacheModeAttachUtil : function (
)
{
},

};
