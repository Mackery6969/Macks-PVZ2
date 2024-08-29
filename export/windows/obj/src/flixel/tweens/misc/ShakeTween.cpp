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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ShakeTween
#include <flixel/tweens/misc/ShakeTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5f32b179d409136f_9_new,"flixel.tweens.misc.ShakeTween","new",0x2ad72da5,"flixel.tweens.misc.ShakeTween.new","flixel/tweens/misc/ShakeTween.hx",9,0x301fdaea)
HX_LOCAL_STACK_FRAME(_hx_pos_5f32b179d409136f_41_tween,"flixel.tweens.misc.ShakeTween","tween",0x7179a2f0,"flixel.tweens.misc.ShakeTween.tween","flixel/tweens/misc/ShakeTween.hx",41,0x301fdaea)
HX_LOCAL_STACK_FRAME(_hx_pos_5f32b179d409136f_52_destroy,"flixel.tweens.misc.ShakeTween","destroy",0x4b2210bf,"flixel.tweens.misc.ShakeTween.destroy","flixel/tweens/misc/ShakeTween.hx",52,0x301fdaea)
HX_LOCAL_STACK_FRAME(_hx_pos_5f32b179d409136f_63_update,"flixel.tweens.misc.ShakeTween","update",0x36d601e4,"flixel.tweens.misc.ShakeTween.update","flixel/tweens/misc/ShakeTween.hx",63,0x301fdaea)
HX_LOCAL_STACK_FRAME(_hx_pos_5f32b179d409136f_73_isTweenOf,"flixel.tweens.misc.ShakeTween","isTweenOf",0xcaef3c9d,"flixel.tweens.misc.ShakeTween.isTweenOf","flixel/tweens/misc/ShakeTween.hx",73,0x301fdaea)
namespace flixel{
namespace tweens{
namespace misc{

void ShakeTween_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_5f32b179d409136f_9_new)
HXDLIN(   9)		super::__construct(Options,manager);
            	}

Dynamic ShakeTween_obj::__CreateEmpty() { return new ShakeTween_obj; }

void *ShakeTween_obj::_hx_vtable = 0;

Dynamic ShakeTween_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShakeTween_obj > _hx_result = new ShakeTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShakeTween_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x104846c5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
	} else {
		return inClassId==(int)0x266d979d;
	}
}

 ::flixel::tweens::misc::ShakeTween ShakeTween_obj::tween( ::flixel::FlxSprite Sprite,::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration,::hx::Null< int >  __o_Axes){
            		Float Intensity = __o_Intensity.Default(((Float)0.05));
            		Float Duration = __o_Duration.Default(1);
            		int Axes = __o_Axes.Default(17);
            	HX_STACKFRAME(&_hx_pos_5f32b179d409136f_41_tween)
HXLINE(  42)		this->intensity = Intensity;
HXLINE(  43)		this->sprite = Sprite;
HXLINE(  44)		this->duration = Duration;
HXLINE(  45)		this->axes = Axes;
HXLINE(  46)		Float x = Sprite->offset->x;
HXDLIN(  46)		Float y = Sprite->offset->y;
HXDLIN(  46)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN(  46)		point->_inPool = false;
HXDLIN(  46)		 ::flixel::math::FlxBasePoint this1 = point;
HXDLIN(  46)		this->initialOffset = this1;
HXLINE(  47)		this->start();
HXLINE(  48)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ShakeTween_obj,tween,return )

void ShakeTween_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5f32b179d409136f_52_destroy)
HXLINE(  53)		this->super::destroy();
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		if (::hx::IsNotNull( this->sprite )) {
HXLINE(  55)			 ::flixel::math::FlxBasePoint _this = this->sprite->offset;
HXDLIN(  55)			 ::flixel::math::FlxBasePoint point = this->initialOffset;
HXDLIN(  55)			bool result;
HXDLIN(  55)			if ((::Math_obj::abs((_this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE(  55)				result = (::Math_obj::abs((_this->y - point->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE(  55)				result = false;
            			}
HXDLIN(  55)			if (point->_weak) {
HXLINE(  55)				point->put();
            			}
HXDLIN(  55)			_hx_tmp = !(result);
            		}
            		else {
HXLINE(  55)			_hx_tmp = false;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  56)			 ::flixel::math::FlxBasePoint this1 = this->sprite->offset;
HXDLIN(  56)			Float y = this->initialOffset->y;
HXDLIN(  56)			this1->set_x(this->initialOffset->x);
HXDLIN(  56)			this1->set_y(y);
            		}
HXLINE(  58)		this->sprite = null();
HXLINE(  59)		this->initialOffset = null();
            	}


void ShakeTween_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5f32b179d409136f_63_update)
HXLINE(  64)		this->super::update(elapsed);
HXLINE(  65)		int this1 = this->axes;
HXDLIN(  65)		bool _hx_tmp;
HXDLIN(  65)		if ((this1 != 1)) {
HXLINE(  65)			_hx_tmp = (this1 == 17);
            		}
            		else {
HXLINE(  65)			_hx_tmp = true;
            		}
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  66)			 ::flixel::math::FlxBasePoint this1 = this->sprite->offset;
HXDLIN(  66)			Float x = this->initialOffset->x;
HXDLIN(  66)			 ::flixel::math::FlxRandom x1 = ::flixel::FlxG_obj::random;
HXDLIN(  66)			Float x2 = -(this->intensity);
HXDLIN(  66)			Float x3 = (x2 * this->sprite->get_width());
HXDLIN(  66)			Float x4 = this->intensity;
HXDLIN(  66)			this1->set_x((x + x1->_hx_float(x3,(x4 * this->sprite->get_width()),null())));
            		}
HXLINE(  67)		int this2 = this->axes;
HXDLIN(  67)		bool _hx_tmp1;
HXDLIN(  67)		if ((this2 != 16)) {
HXLINE(  67)			_hx_tmp1 = (this2 == 17);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = true;
            		}
HXDLIN(  67)		if (_hx_tmp1) {
HXLINE(  68)			 ::flixel::math::FlxBasePoint this1 = this->sprite->offset;
HXDLIN(  68)			Float y = this->initialOffset->y;
HXDLIN(  68)			 ::flixel::math::FlxRandom y1 = ::flixel::FlxG_obj::random;
HXDLIN(  68)			Float y2 = -(this->intensity);
HXDLIN(  68)			Float y3 = (y2 * this->sprite->get_height());
HXDLIN(  68)			Float y4 = this->intensity;
HXDLIN(  68)			this1->set_y((y + y1->_hx_float(y3,(y4 * this->sprite->get_height()),null())));
            		}
            	}


bool ShakeTween_obj::isTweenOf( ::Dynamic Object,::String Field){
            	HX_STACKFRAME(&_hx_pos_5f32b179d409136f_73_isTweenOf)
HXDLIN(  73)		if (::hx::IsInstanceEq( this->sprite,Object )) {
HXDLIN(  73)			if (::hx::IsNotNull( Field )) {
HXDLIN(  73)				return (Field == HX_("shake",c6,de,1c,7c));
            			}
            			else {
HXDLIN(  73)				return true;
            			}
            		}
            		else {
HXDLIN(  73)			return false;
            		}
HXDLIN(  73)		return false;
            	}



::hx::ObjectPtr< ShakeTween_obj > ShakeTween_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< ShakeTween_obj > __this = new ShakeTween_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< ShakeTween_obj > ShakeTween_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	ShakeTween_obj *__this = (ShakeTween_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShakeTween_obj), true, "flixel.tweens.misc.ShakeTween"));
	*(void **)__this = ShakeTween_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

ShakeTween_obj::ShakeTween_obj()
{
}

void ShakeTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShakeTween);
	HX_MARK_MEMBER_NAME(intensity,"intensity");
	HX_MARK_MEMBER_NAME(axes,"axes");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(initialOffset,"initialOffset");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShakeTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(intensity,"intensity");
	HX_VISIT_MEMBER_NAME(axes,"axes");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(initialOffset,"initialOffset");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ShakeTween_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axes") ) { return ::hx::Val( axes ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return ::hx::Val( tween_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return ::hx::Val( sprite ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { return ::hx::Val( intensity ); }
		if (HX_FIELD_EQ(inName,"isTweenOf") ) { return ::hx::Val( isTweenOf_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initialOffset") ) { return ::hx::Val( initialOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShakeTween_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axes") ) { axes=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { intensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initialOffset") ) { initialOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShakeTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("intensity",b3,c6,dd,f4));
	outFields->push(HX_("axes",25,19,79,40));
	outFields->push(HX_("sprite",05,dc,95,c3));
	outFields->push(HX_("initialOffset",37,57,30,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShakeTween_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ShakeTween_obj,intensity),HX_("intensity",b3,c6,dd,f4)},
	{::hx::fsInt,(int)offsetof(ShakeTween_obj,axes),HX_("axes",25,19,79,40)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ShakeTween_obj,sprite),HX_("sprite",05,dc,95,c3)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(ShakeTween_obj,initialOffset),HX_("initialOffset",37,57,30,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShakeTween_obj_sStaticStorageInfo = 0;
#endif

static ::String ShakeTween_obj_sMemberFields[] = {
	HX_("intensity",b3,c6,dd,f4),
	HX_("axes",25,19,79,40),
	HX_("sprite",05,dc,95,c3),
	HX_("initialOffset",37,57,30,2a),
	HX_("tween",6b,aa,70,19),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("isTweenOf",98,1d,bf,da),
	::String(null()) };

::hx::Class ShakeTween_obj::__mClass;

void ShakeTween_obj::__register()
{
	ShakeTween_obj _hx_dummy;
	ShakeTween_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.misc.ShakeTween",33,77,a4,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShakeTween_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShakeTween_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShakeTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShakeTween_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
