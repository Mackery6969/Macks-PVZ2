#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_FlickerTween
#include <flixel/tweens/misc/FlickerTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a80a574c099675d9_34_new,"flixel.tweens.misc.FlickerTween","new",0xcd6c92b3,"flixel.tweens.misc.FlickerTween.new","flixel/tweens/misc/FlickerTween.hx",34,0xd71fef5c)
HX_LOCAL_STACK_FRAME(_hx_pos_a80a574c099675d9_76_destroy,"flixel.tweens.misc.FlickerTween","destroy",0xe46a14cd,"flixel.tweens.misc.FlickerTween.destroy","flixel/tweens/misc/FlickerTween.hx",76,0xd71fef5c)
HX_LOCAL_STACK_FRAME(_hx_pos_a80a574c099675d9_89_tween,"flixel.tweens.misc.FlickerTween","tween",0xeffce77e,"flixel.tweens.misc.FlickerTween.tween","flixel/tweens/misc/FlickerTween.hx",89,0xd71fef5c)
HX_LOCAL_STACK_FRAME(_hx_pos_a80a574c099675d9_105_update,"flixel.tweens.misc.FlickerTween","update",0x6b2eb996,"flixel.tweens.misc.FlickerTween.update","flixel/tweens/misc/FlickerTween.hx",105,0xd71fef5c)
HX_LOCAL_STACK_FRAME(_hx_pos_a80a574c099675d9_118_onEnd,"flixel.tweens.misc.FlickerTween","onEnd",0x08f0d50f,"flixel.tweens.misc.FlickerTween.onEnd","flixel/tweens/misc/FlickerTween.hx",118,0xd71fef5c)
HX_LOCAL_STACK_FRAME(_hx_pos_a80a574c099675d9_126_isTweenOf,"flixel.tweens.misc.FlickerTween","isTweenOf",0x494ae02b,"flixel.tweens.misc.FlickerTween.isTweenOf","flixel/tweens/misc/FlickerTween.hx",126,0xd71fef5c)
HX_LOCAL_STACK_FRAME(_hx_pos_a80a574c099675d9_135_defaultTweenFunction,"flixel.tweens.misc.FlickerTween","defaultTweenFunction",0x6cbab76f,"flixel.tweens.misc.FlickerTween.defaultTweenFunction","flixel/tweens/misc/FlickerTween.hx",135,0xd71fef5c)
namespace flixel{
namespace tweens{
namespace misc{

void FlickerTween_obj::__construct( ::Dynamic options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_a80a574c099675d9_34_new)
HXLINE(  52)		this->ratio = ((Float)0.5);
HXLINE(  46)		this->period = ((Float)0.08);
HXLINE(  43)		this->endVisibility = true;
HXLINE(  56)		this->tweenFunction = ::flixel::tweens::misc::FlickerTween_obj::defaultTweenFunction_dyn();
HXLINE(  57)		if (::hx::IsNotNull( options )) {
HXLINE(  59)			if (::hx::IsNotNull( options->__Field(HX_("endVisibility",8d,35,d3,e5),::hx::paccDynamic) )) {
HXLINE(  60)				this->endVisibility = ( (bool)(options->__Field(HX_("endVisibility",8d,35,d3,e5),::hx::paccDynamic)) );
            			}
HXLINE(  62)			if (::hx::IsNotNull( options->__Field(HX_("ratio",0b,35,24,e4),::hx::paccDynamic) )) {
HXLINE(  63)				this->ratio = ( (Float)(options->__Field(HX_("ratio",0b,35,24,e4),::hx::paccDynamic)) );
            			}
HXLINE(  65)			if (::hx::IsNotNull( options->__Field(HX_("tweenFunction",a3,f4,15,72),::hx::paccDynamic) )) {
HXLINE(  66)				this->tweenFunction = options->__Field(HX_("tweenFunction",a3,f4,15,72),::hx::paccDynamic);
            			}
            		}
HXLINE(  69)		super::__construct(options,manager);
            	}

Dynamic FlickerTween_obj::__CreateEmpty() { return new FlickerTween_obj; }

void *FlickerTween_obj::_hx_vtable = 0;

Dynamic FlickerTween_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlickerTween_obj > _hx_result = new FlickerTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlickerTween_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x063e39c7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x063e39c7;
	} else {
		return inClassId==(int)0x104846c5;
	}
}

void FlickerTween_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a80a574c099675d9_76_destroy)
HXLINE(  77)		this->super::destroy();
HXLINE(  78)		this->basic = null();
            	}


 ::flixel::tweens::misc::FlickerTween FlickerTween_obj::tween( ::flixel::FlxBasic basic,Float duration,Float period){
            	HX_STACKFRAME(&_hx_pos_a80a574c099675d9_89_tween)
HXLINE(  90)		this->basic = basic;
HXLINE(  91)		this->duration = duration;
HXLINE(  92)		this->period = period;
HXLINE(  94)		if ((period <= ((Float)0.0))) {
HXLINE(  96)			this->period = (((Float)1.0) / ( (Float)(::flixel::FlxG_obj::updateFramerate) ));
HXLINE(  97)			::flixel::FlxG_obj::log->advanced(HX_("Cannot flicker with a period of 0.0 or less, using 1.0 / FlxG.updateFramerate, instead",4b,dc,b8,c3),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
HXLINE( 100)		this->start();
HXLINE( 101)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlickerTween_obj,tween,return )

void FlickerTween_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a80a574c099675d9_105_update)
HXLINE( 106)		this->super::update(elapsed);
HXLINE( 108)		bool _hx_tmp;
HXDLIN( 108)		if (::hx::IsNotNull( this->tweenFunction )) {
HXLINE( 108)			_hx_tmp = (this->_secondsSinceStart >= this->_delayToUse);
            		}
            		else {
HXLINE( 108)			_hx_tmp = false;
            		}
HXDLIN( 108)		if (_hx_tmp) {
HXLINE( 110)			bool visible = ( (bool)(this->tweenFunction(::hx::ObjectPtr<OBJ_>(this))) );
HXLINE( 112)			if ((this->basic->visible != visible)) {
HXLINE( 113)				this->basic->set_visible(visible);
            			}
            		}
            	}


void FlickerTween_obj::onEnd(){
            	HX_STACKFRAME(&_hx_pos_a80a574c099675d9_118_onEnd)
HXLINE( 119)		this->super::onEnd();
HXLINE( 121)		this->basic->set_visible(this->endVisibility);
            	}


bool FlickerTween_obj::isTweenOf( ::Dynamic object,::String field){
            	HX_STACKFRAME(&_hx_pos_a80a574c099675d9_126_isTweenOf)
HXDLIN( 126)		if (::hx::IsInstanceEq( this->basic,object )) {
HXDLIN( 126)			bool _hx_tmp;
HXDLIN( 126)			if (::hx::IsNotNull( field )) {
HXDLIN( 126)				_hx_tmp = (field == HX_("visible",72,78,24,a3));
            			}
            			else {
HXDLIN( 126)				_hx_tmp = true;
            			}
HXDLIN( 126)			if (!(_hx_tmp)) {
HXDLIN( 126)				return (field == HX_("flicker",f8,da,ec,76));
            			}
            			else {
HXDLIN( 126)				return true;
            			}
            		}
            		else {
HXDLIN( 126)			return false;
            		}
HXDLIN( 126)		return false;
            	}


bool FlickerTween_obj::defaultTweenFunction( ::flixel::tweens::misc::FlickerTween tween){
            	HX_STACKFRAME(&_hx_pos_a80a574c099675d9_135_defaultTweenFunction)
HXDLIN( 135)		return (::hx::Mod((::Math_obj::max((tween->_secondsSinceStart - tween->_delayToUse),( (Float)(0) )) / tween->period),1) > tween->ratio);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlickerTween_obj,defaultTweenFunction,return )


::hx::ObjectPtr< FlickerTween_obj > FlickerTween_obj::__new( ::Dynamic options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< FlickerTween_obj > __this = new FlickerTween_obj();
	__this->__construct(options,manager);
	return __this;
}

::hx::ObjectPtr< FlickerTween_obj > FlickerTween_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::flixel::tweens::FlxTweenManager manager) {
	FlickerTween_obj *__this = (FlickerTween_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlickerTween_obj), true, "flixel.tweens.misc.FlickerTween"));
	*(void **)__this = FlickerTween_obj::_hx_vtable;
	__this->__construct(options,manager);
	return __this;
}

FlickerTween_obj::FlickerTween_obj()
{
}

void FlickerTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlickerTween);
	HX_MARK_MEMBER_NAME(basic,"basic");
	HX_MARK_MEMBER_NAME(tweenFunction,"tweenFunction");
	HX_MARK_MEMBER_NAME(endVisibility,"endVisibility");
	HX_MARK_MEMBER_NAME(period,"period");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlickerTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(basic,"basic");
	HX_VISIT_MEMBER_NAME(tweenFunction,"tweenFunction");
	HX_VISIT_MEMBER_NAME(endVisibility,"endVisibility");
	HX_VISIT_MEMBER_NAME(period,"period");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlickerTween_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"basic") ) { return ::hx::Val( basic ); }
		if (HX_FIELD_EQ(inName,"ratio") ) { return ::hx::Val( ratio ); }
		if (HX_FIELD_EQ(inName,"tween") ) { return ::hx::Val( tween_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"period") ) { return ::hx::Val( period ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isTweenOf") ) { return ::hx::Val( isTweenOf_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tweenFunction") ) { return ::hx::Val( tweenFunction ); }
		if (HX_FIELD_EQ(inName,"endVisibility") ) { return ::hx::Val( endVisibility ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlickerTween_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"defaultTweenFunction") ) { outValue = defaultTweenFunction_dyn(); return true; }
	}
	return false;
}

::hx::Val FlickerTween_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"basic") ) { basic=inValue.Cast<  ::flixel::FlxBasic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"period") ) { period=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tweenFunction") ) { tweenFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endVisibility") ) { endVisibility=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlickerTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("basic",ae,2a,ba,ad));
	outFields->push(HX_("endVisibility",8d,35,d3,e5));
	outFields->push(HX_("period",01,61,1b,3b));
	outFields->push(HX_("ratio",0b,35,24,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlickerTween_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxBasic */ ,(int)offsetof(FlickerTween_obj,basic),HX_("basic",ae,2a,ba,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlickerTween_obj,tweenFunction),HX_("tweenFunction",a3,f4,15,72)},
	{::hx::fsBool,(int)offsetof(FlickerTween_obj,endVisibility),HX_("endVisibility",8d,35,d3,e5)},
	{::hx::fsFloat,(int)offsetof(FlickerTween_obj,period),HX_("period",01,61,1b,3b)},
	{::hx::fsFloat,(int)offsetof(FlickerTween_obj,ratio),HX_("ratio",0b,35,24,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlickerTween_obj_sStaticStorageInfo = 0;
#endif

static ::String FlickerTween_obj_sMemberFields[] = {
	HX_("basic",ae,2a,ba,ad),
	HX_("tweenFunction",a3,f4,15,72),
	HX_("endVisibility",8d,35,d3,e5),
	HX_("period",01,61,1b,3b),
	HX_("ratio",0b,35,24,e4),
	HX_("destroy",fa,2c,86,24),
	HX_("tween",6b,aa,70,19),
	HX_("update",09,86,05,87),
	HX_("onEnd",fc,97,64,32),
	HX_("isTweenOf",98,1d,bf,da),
	::String(null()) };

::hx::Class FlickerTween_obj::__mClass;

static ::String FlickerTween_obj_sStaticFields[] = {
	HX_("defaultTweenFunction",22,47,67,c3),
	::String(null())
};

void FlickerTween_obj::__register()
{
	FlickerTween_obj _hx_dummy;
	FlickerTween_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.misc.FlickerTween",41,bd,02,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlickerTween_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlickerTween_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlickerTween_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlickerTween_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlickerTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlickerTween_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
