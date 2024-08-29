#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd150b1d3fa70035_11_new,"flixel.system.FlxBGSprite","new",0x62e2bd41,"flixel.system.FlxBGSprite.new","flixel/system/FlxBGSprite.hx",11,0xa9844f6f)
HX_LOCAL_STACK_FRAME(_hx_pos_cd150b1d3fa70035_23_draw,"flixel.system.FlxBGSprite","draw",0x1cf08403,"flixel.system.FlxBGSprite.draw","flixel/system/FlxBGSprite.hx",23,0xa9844f6f)
namespace flixel{
namespace _hx_system{

void FlxBGSprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cd150b1d3fa70035_11_new)
HXLINE(  12)		super::__construct(null(),null(),null());
HXLINE(  13)		this->makeGraphic(1,1,-1,true,::flixel::FlxG_obj::bitmap->getUniqueKey(HX_("bg_graphic_",b1,39,19,0d)));
HXLINE(  14)		{
HXLINE(  14)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  14)			this1->set_x(( (Float)(0) ));
HXDLIN(  14)			this1->set_y(( (Float)(0) ));
            		}
            	}

Dynamic FlxBGSprite_obj::__CreateEmpty() { return new FlxBGSprite_obj; }

void *FlxBGSprite_obj::_hx_vtable = 0;

Dynamic FlxBGSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBGSprite_obj > _hx_result = new FlxBGSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBGSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f941191) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x4f941191;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxBGSprite_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_cd150b1d3fa70035_23_draw)
HXDLIN(  23)		int _g = 0;
HXDLIN(  23)		::Array< ::Dynamic> _g1 = this->getCamerasLegacy();
HXDLIN(  23)		while((_g < _g1->length)){
HXDLIN(  23)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN(  23)			_g = (_g + 1);
HXLINE(  25)			bool _hx_tmp;
HXDLIN(  25)			if (camera->visible) {
HXLINE(  25)				_hx_tmp = !(camera->exists);
            			}
            			else {
HXLINE(  25)				_hx_tmp = true;
            			}
HXDLIN(  25)			if (_hx_tmp) {
HXLINE(  27)				continue;
            			}
HXLINE(  30)			this->_matrix->identity();
HXLINE(  31)			this->_matrix->scale((( (Float)(camera->width) ) - (camera->viewMarginX * ( (Float)(2) ))),(( (Float)(camera->height) ) - (camera->viewMarginY * ( (Float)(2) ))));
HXLINE(  32)			camera->drawPixels(this->frame,null(),this->_matrix,this->colorTransform,null(),null(),null());
            		}
            	}



::hx::ObjectPtr< FlxBGSprite_obj > FlxBGSprite_obj::__new() {
	::hx::ObjectPtr< FlxBGSprite_obj > __this = new FlxBGSprite_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxBGSprite_obj > FlxBGSprite_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxBGSprite_obj *__this = (FlxBGSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBGSprite_obj), true, "flixel.system.FlxBGSprite"));
	*(void **)__this = FlxBGSprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBGSprite_obj::FlxBGSprite_obj()
{
}

::hx::Val FlxBGSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxBGSprite_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxBGSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBGSprite_obj_sMemberFields[] = {
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class FlxBGSprite_obj::__mClass;

void FlxBGSprite_obj::__register()
{
	FlxBGSprite_obj _hx_dummy;
	FlxBGSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxBGSprite",cf,08,11,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBGSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBGSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBGSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBGSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
