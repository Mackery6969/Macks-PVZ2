#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36781f4cf25b4c07_27_new,"flixel.graphics.frames.FlxImageFrame","new",0xda56055f,"flixel.graphics.frames.FlxImageFrame.new","flixel/graphics/frames/FlxImageFrame.hx",27,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_219_equals,"flixel.graphics.frames.FlxImageFrame","equals",0x9ad6a2a0,"flixel.graphics.frames.FlxImageFrame.equals","flixel/graphics/frames/FlxImageFrame.hx",219,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_244_addBorder,"flixel.graphics.frames.FlxImageFrame","addBorder",0x2bc1002c,"flixel.graphics.frames.FlxImageFrame.addBorder","flixel/graphics/frames/FlxImageFrame.hx",244,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_258_get_frame,"flixel.graphics.frames.FlxImageFrame","get_frame",0x59af52c3,"flixel.graphics.frames.FlxImageFrame.get_frame","flixel/graphics/frames/FlxImageFrame.hx",258,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_39_fromEmptyFrame,"flixel.graphics.frames.FlxImageFrame","fromEmptyFrame",0x20331dcb,"flixel.graphics.frames.FlxImageFrame.fromEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",39,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_61_fromFrame,"flixel.graphics.frames.FlxImageFrame","fromFrame",0xca8ee0a2,"flixel.graphics.frames.FlxImageFrame.fromFrame","flixel/graphics/frames/FlxImageFrame.hx",61,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_82_fromImage,"flixel.graphics.frames.FlxImageFrame","fromImage",0x817487d0,"flixel.graphics.frames.FlxImageFrame.fromImage","flixel/graphics/frames/FlxImageFrame.hx",82,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_93_fromGraphic,"flixel.graphics.frames.FlxImageFrame","fromGraphic",0xe0158a5d,"flixel.graphics.frames.FlxImageFrame.fromGraphic","flixel/graphics/frames/FlxImageFrame.hx",93,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_141_fromRectangle,"flixel.graphics.frames.FlxImageFrame","fromRectangle",0x493e1b24,"flixel.graphics.frames.FlxImageFrame.fromRectangle","flixel/graphics/frames/FlxImageFrame.hx",141,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_157_fromBitmapAddSpacesAndBorders,"flixel.graphics.frames.FlxImageFrame","fromBitmapAddSpacesAndBorders",0x2600d1c4,"flixel.graphics.frames.FlxImageFrame.fromBitmapAddSpacesAndBorders","flixel/graphics/frames/FlxImageFrame.hx",157,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_183_fromFrameAddSpacesAndBorders,"flixel.graphics.frames.FlxImageFrame","fromFrameAddSpacesAndBorders",0x6359dbfc,"flixel.graphics.frames.FlxImageFrame.fromFrameAddSpacesAndBorders","flixel/graphics/frames/FlxImageFrame.hx",183,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_198_findFrame,"flixel.graphics.frames.FlxImageFrame","findFrame",0x04fd2773,"flixel.graphics.frames.FlxImageFrame.findFrame","flixel/graphics/frames/FlxImageFrame.hx",198,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_230_findEmptyFrame,"flixel.graphics.frames.FlxImageFrame","findEmptyFrame",0xe2dd815a,"flixel.graphics.frames.FlxImageFrame.findEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",230,0x94146112)
namespace flixel{
namespace graphics{
namespace frames{

void FlxImageFrame_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_27_new)
HXDLIN(  27)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn(),border);
            	}

Dynamic FlxImageFrame_obj::__CreateEmpty() { return new FlxImageFrame_obj; }

void *FlxImageFrame_obj::_hx_vtable = 0;

Dynamic FlxImageFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxImageFrame_obj > _hx_result = new FlxImageFrame_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxImageFrame_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x071ccbb3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x071ccbb3;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

bool FlxImageFrame_obj::equals( ::flixel::math::FlxRect rect, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_219_equals)
HXDLIN( 219)		 ::flixel::math::FlxRect rect1 = this->get_frame()->frame;
HXDLIN( 219)		bool result;
HXDLIN( 219)		bool result1;
HXDLIN( 219)		bool result2;
HXDLIN( 219)		if ((::Math_obj::abs((rect->x - rect1->x)) <= ((Float)0.0000001))) {
HXDLIN( 219)			result2 = (::Math_obj::abs((rect->y - rect1->y)) <= ((Float)0.0000001));
            		}
            		else {
HXDLIN( 219)			result2 = false;
            		}
HXDLIN( 219)		if (result2) {
HXDLIN( 219)			result1 = (::Math_obj::abs((rect->width - rect1->width)) <= ((Float)0.0000001));
            		}
            		else {
HXDLIN( 219)			result1 = false;
            		}
HXDLIN( 219)		if (result1) {
HXDLIN( 219)			result = (::Math_obj::abs((rect->height - rect1->height)) <= ((Float)0.0000001));
            		}
            		else {
HXDLIN( 219)			result = false;
            		}
HXDLIN( 219)		if (rect1->_weak) {
HXDLIN( 219)			if (!(rect1->_inPool)) {
HXDLIN( 219)				rect1->_inPool = true;
HXDLIN( 219)				rect1->_weak = false;
HXDLIN( 219)				::flixel::math::FlxRect_obj::_pool->putUnsafe(rect1);
            			}
            		}
HXDLIN( 219)		if (result) {
HXDLIN( 219)			 ::flixel::math::FlxBasePoint point = this->border;
HXDLIN( 219)			bool result;
HXDLIN( 219)			if ((::Math_obj::abs((border->x - point->x)) <= ((Float)0.0000001))) {
HXDLIN( 219)				result = (::Math_obj::abs((border->y - point->y)) <= ((Float)0.0000001));
            			}
            			else {
HXDLIN( 219)				result = false;
            			}
HXDLIN( 219)			if (point->_weak) {
HXDLIN( 219)				point->put();
            			}
HXDLIN( 219)			return result;
            		}
            		else {
HXDLIN( 219)			return false;
            		}
HXDLIN( 219)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,equals,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxImageFrame_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_36781f4cf25b4c07_244_addBorder)
HXLINE( 245)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 245)		point->_inPool = false;
HXDLIN( 245)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 245)		point1->_weak = true;
HXDLIN( 245)		 ::flixel::math::FlxBasePoint this1 = point1;
HXDLIN( 245)		 ::flixel::math::FlxBasePoint point2 = this->border;
HXDLIN( 245)		{
HXLINE( 245)			Float y = point2->y;
HXDLIN( 245)			this1->set_x((this1->x + point2->x));
HXDLIN( 245)			this1->set_y((this1->y + y));
            		}
HXDLIN( 245)		if (point2->_weak) {
HXLINE( 245)			point2->put();
            		}
HXDLIN( 245)		 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 245)		{
HXLINE( 245)			Float y1 = border->y;
HXDLIN( 245)			this2->set_x((this2->x + border->x));
HXDLIN( 245)			this2->set_y((this2->y + y1));
            		}
HXDLIN( 245)		if (border->_weak) {
HXLINE( 245)			border->put();
            		}
HXDLIN( 245)		 ::flixel::math::FlxBasePoint resultBorder = this2;
HXLINE( 247)		 ::flixel::graphics::FlxGraphic imageFrame = this->parent;
HXDLIN( 247)		 ::flixel::graphics::frames::FlxImageFrame imageFrame1 = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(imageFrame,this->get_frame()->frame,resultBorder);
HXLINE( 248)		if (::hx::IsNotNull( imageFrame1 )) {
HXLINE( 249)			return imageFrame1;
            		}
HXLINE( 251)		imageFrame1 =  ::flixel::graphics::frames::FlxImageFrame_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 252)		imageFrame1->pushFrame(this->get_frame()->setBorderTo(border,null()),null());
HXLINE( 253)		return imageFrame1;
            	}


 ::flixel::graphics::frames::FlxFrame FlxImageFrame_obj::get_frame(){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_258_get_frame)
HXDLIN( 258)		return this->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxImageFrame_obj,get_frame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromEmptyFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect){
            	HX_GC_STACKFRAME(&_hx_pos_36781f4cf25b4c07_39_fromEmptyFrame)
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (::hx::IsNotNull( graphic )) {
HXLINE(  40)			_hx_tmp = ::hx::IsNull( frameRect );
            		}
            		else {
HXLINE(  40)			_hx_tmp = true;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			return null();
            		}
HXLINE(  44)		 ::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findEmptyFrame(graphic,frameRect);
HXLINE(  45)		if (::hx::IsNotNull( imageFrame )) {
HXLINE(  46)			return imageFrame;
            		}
HXLINE(  49)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  50)		imageFrame->addEmptyFrame(frameRect);
HXLINE(  51)		return imageFrame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromEmptyFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrame( ::flixel::graphics::frames::FlxFrame source){
            	HX_GC_STACKFRAME(&_hx_pos_36781f4cf25b4c07_61_fromFrame)
HXLINE(  62)		 ::flixel::graphics::FlxGraphic graphic = source->parent;
HXLINE(  63)		 ::flixel::math::FlxRect rect = source->frame;
HXLINE(  65)		 ::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(graphic,rect,null());
HXLINE(  66)		if (::hx::IsNotNull( imageFrame )) {
HXLINE(  67)			return imageFrame;
            		}
HXLINE(  69)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  70)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(  70)		_this->x = ( (Float)(0) );
HXDLIN(  70)		_this->y = ( (Float)(0) );
HXDLIN(  70)		_this->width = ( (Float)(0) );
HXDLIN(  70)		_this->height = ( (Float)(0) );
HXDLIN(  70)		 ::flixel::math::FlxRect rect1 = _this;
HXDLIN(  70)		rect1->_inPool = false;
HXDLIN(  70)		 ::flixel::math::FlxRect Rect = rect1;
HXDLIN(  70)		Rect->x = rect->x;
HXDLIN(  70)		Rect->y = rect->y;
HXDLIN(  70)		Rect->width = rect->width;
HXDLIN(  70)		Rect->height = rect->height;
HXDLIN(  70)		if (Rect->_weak) {
HXLINE(  70)			if (!(Rect->_inPool)) {
HXLINE(  70)				Rect->_inPool = true;
HXDLIN(  70)				Rect->_weak = false;
HXDLIN(  70)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN(  70)		imageFrame->addSpriteSheetFrame(Rect);
HXLINE(  71)		return imageFrame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromImage( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_82_fromImage)
HXDLIN(  82)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(source,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromImage,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect region){
            	HX_GC_STACKFRAME(&_hx_pos_36781f4cf25b4c07_93_fromGraphic)
HXLINE(  95)		bool _hx_tmp;
HXDLIN(  95)		if (::hx::IsNotNull( graphic )) {
HXLINE(  95)			_hx_tmp = ::hx::IsNull( graphic->shader );
            		}
            		else {
HXLINE(  95)			_hx_tmp = true;
            		}
HXDLIN(  95)		if (_hx_tmp) {
HXLINE(  96)			return null();
            		}
HXLINE(  99)		Float Width = ( (Float)(graphic->width) );
HXDLIN(  99)		Float Height = ( (Float)(graphic->height) );
HXDLIN(  99)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(  99)		_this->x = ( (Float)(0) );
HXDLIN(  99)		_this->y = ( (Float)(0) );
HXDLIN(  99)		_this->width = Width;
HXDLIN(  99)		_this->height = Height;
HXDLIN(  99)		 ::flixel::math::FlxRect rect = _this;
HXDLIN(  99)		rect->_inPool = false;
HXDLIN(  99)		 ::flixel::math::FlxRect checkRegion = rect;
HXLINE( 100)		if (::hx::IsNotNull( region )) {
HXLINE( 101)			checkRegion->x = region->x;
HXDLIN( 101)			checkRegion->y = region->y;
HXDLIN( 101)			checkRegion->width = region->width;
HXDLIN( 101)			checkRegion->height = region->height;
HXDLIN( 101)			if (checkRegion->_weak) {
HXLINE( 101)				if (!(checkRegion->_inPool)) {
HXLINE( 101)					checkRegion->_inPool = true;
HXDLIN( 101)					checkRegion->_weak = false;
HXDLIN( 101)					::flixel::math::FlxRect_obj::_pool->putUnsafe(checkRegion);
            				}
            			}
            		}
HXLINE( 103)		 ::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(graphic,checkRegion,null());
HXLINE( 104)		if (!(checkRegion->_inPool)) {
HXLINE( 104)			checkRegion->_inPool = true;
HXDLIN( 104)			checkRegion->_weak = false;
HXDLIN( 104)			::flixel::math::FlxRect_obj::_pool->putUnsafe(checkRegion);
            		}
HXLINE( 105)		if (::hx::IsNotNull( imageFrame )) {
HXLINE( 107)			if (::hx::IsNotNull( region )) {
HXLINE( 108)				if (region->_weak) {
HXLINE( 108)					if (!(region->_inPool)) {
HXLINE( 108)						region->_inPool = true;
HXDLIN( 108)						region->_weak = false;
HXDLIN( 108)						::flixel::math::FlxRect_obj::_pool->putUnsafe(region);
            					}
            				}
            			}
HXLINE( 110)			return imageFrame;
            		}
HXLINE( 114)		 ::flixel::graphics::frames::FlxImageFrame imageFrame1 =  ::flixel::graphics::frames::FlxImageFrame_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 116)		if (::hx::IsNull( region )) {
HXLINE( 118)			Float Width = ( (Float)(graphic->width) );
HXDLIN( 118)			Float Height = ( (Float)(graphic->height) );
HXDLIN( 118)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 118)			_this->x = ( (Float)(0) );
HXDLIN( 118)			_this->y = ( (Float)(0) );
HXDLIN( 118)			_this->width = Width;
HXDLIN( 118)			_this->height = Height;
HXDLIN( 118)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 118)			rect->_inPool = false;
HXDLIN( 118)			 ::flixel::math::FlxRect rect1 = rect;
HXDLIN( 118)			rect1->_weak = true;
HXDLIN( 118)			region = rect1;
            		}
            		else {
HXLINE( 122)			if ((region->width == 0)) {
HXLINE( 123)				region->width = (( (Float)(graphic->width) ) - region->x);
            			}
HXLINE( 125)			if ((region->height == 0)) {
HXLINE( 126)				region->height = (( (Float)(graphic->height) ) - region->y);
            			}
            		}
HXLINE( 129)		imageFrame1->addSpriteSheetFrame(region);
HXLINE( 130)		return imageFrame1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromGraphic,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromRectangle( ::Dynamic source, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_141_fromRectangle)
HXLINE( 142)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 143)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,region);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromRectangle,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromBitmapAddSpacesAndBorders( ::Dynamic source, ::flixel::math::FlxBasePoint border, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_157_fromBitmapAddSpacesAndBorders)
HXLINE( 158)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 159)		if (::hx::IsNull( graphic )) {
HXLINE( 160)			return null();
            		}
HXLINE( 162)		::String key = ::flixel::FlxG_obj::bitmap->getKeyWithSpacesAndBorders(graphic->key,null(),null(),border,region);
HXLINE( 163)		 ::flixel::graphics::FlxGraphic result = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 164)		if (::hx::IsNull( result )) {
HXLINE( 166)			 ::openfl::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(graphic->bitmap,null(),null(),border,region);
HXLINE( 167)			result = ::flixel::FlxG_obj::bitmap->add(bitmap,false,key);
            		}
HXLINE( 170)		 ::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,null());
HXLINE( 171)		return Dynamic( imageFrame->addBorder(border)).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxImageFrame_obj,fromBitmapAddSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_183_fromFrameAddSpacesAndBorders)
HXLINE( 184)		 ::openfl::display::BitmapData bitmap = frame->paint(null(),null(),null(),null());
HXLINE( 185)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromBitmapAddSpacesAndBorders(bitmap,border,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromFrameAddSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect, ::flixel::math::FlxBasePoint frameBorder){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_198_findFrame)
HXLINE( 199)		if (::hx::IsNull( frameBorder )) {
HXLINE( 200)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 200)			point->_inPool = false;
HXDLIN( 200)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 200)			point1->_weak = true;
HXDLIN( 200)			frameBorder = point1;
            		}
HXLINE( 202)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn();
HXDLIN( 202)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 202)		if (::hx::IsNull( collections )) {
HXLINE( 202)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 202)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 202)		::Array< ::Dynamic> imageFrames = collections;
HXLINE( 203)		{
HXLINE( 203)			int _g = 0;
HXDLIN( 203)			while((_g < imageFrames->length)){
HXLINE( 203)				 ::flixel::graphics::frames::FlxImageFrame imageFrame = imageFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
HXDLIN( 203)				_g = (_g + 1);
HXLINE( 205)				bool _hx_tmp;
HXDLIN( 205)				bool _hx_tmp1;
HXDLIN( 205)				 ::flixel::math::FlxRect rect = imageFrame->get_frame()->frame;
HXDLIN( 205)				bool result;
HXDLIN( 205)				bool result1;
HXDLIN( 205)				bool result2;
HXDLIN( 205)				if ((::Math_obj::abs((frameRect->x - rect->x)) <= ((Float)0.0000001))) {
HXLINE( 205)					result2 = (::Math_obj::abs((frameRect->y - rect->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 205)					result2 = false;
            				}
HXDLIN( 205)				if (result2) {
HXLINE( 205)					result1 = (::Math_obj::abs((frameRect->width - rect->width)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 205)					result1 = false;
            				}
HXDLIN( 205)				if (result1) {
HXLINE( 205)					result = (::Math_obj::abs((frameRect->height - rect->height)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 205)					result = false;
            				}
HXDLIN( 205)				if (rect->_weak) {
HXLINE( 205)					if (!(rect->_inPool)) {
HXLINE( 205)						rect->_inPool = true;
HXDLIN( 205)						rect->_weak = false;
HXDLIN( 205)						::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            					}
            				}
HXDLIN( 205)				if (result) {
HXLINE( 205)					 ::flixel::math::FlxBasePoint point = imageFrame->border;
HXDLIN( 205)					bool result;
HXDLIN( 205)					if ((::Math_obj::abs((frameBorder->x - point->x)) <= ((Float)0.0000001))) {
HXLINE( 205)						result = (::Math_obj::abs((frameBorder->y - point->y)) <= ((Float)0.0000001));
            					}
            					else {
HXLINE( 205)						result = false;
            					}
HXDLIN( 205)					if (point->_weak) {
HXLINE( 205)						point->put();
            					}
HXDLIN( 205)					_hx_tmp1 = result;
            				}
            				else {
HXLINE( 205)					_hx_tmp1 = false;
            				}
HXDLIN( 205)				if (_hx_tmp1) {
HXLINE( 205)					_hx_tmp = (imageFrame->get_frame()->type != 2);
            				}
            				else {
HXLINE( 205)					_hx_tmp = false;
            				}
HXDLIN( 205)				if (_hx_tmp) {
HXLINE( 206)					return imageFrame;
            				}
            			}
            		}
HXLINE( 209)		if (frameBorder->_weak) {
HXLINE( 209)			frameBorder->put();
            		}
HXLINE( 210)		if (frameRect->_weak) {
HXLINE( 210)			if (!(frameRect->_inPool)) {
HXLINE( 210)				frameRect->_inPool = true;
HXDLIN( 210)				frameRect->_weak = false;
HXDLIN( 210)				::flixel::math::FlxRect_obj::_pool->putUnsafe(frameRect);
            			}
            		}
HXLINE( 211)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxImageFrame_obj,findFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findEmptyFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_230_findEmptyFrame)
HXLINE( 231)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn();
HXDLIN( 231)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 231)		if (::hx::IsNull( collections )) {
HXLINE( 231)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 231)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 231)		::Array< ::Dynamic> imageFrames = collections;
HXLINE( 233)		{
HXLINE( 233)			int _g = 0;
HXDLIN( 233)			while((_g < imageFrames->length)){
HXLINE( 233)				 ::flixel::graphics::frames::FlxImageFrame imageFrame = imageFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
HXDLIN( 233)				_g = (_g + 1);
HXLINE( 235)				 ::flixel::graphics::frames::FlxFrame frame = imageFrame->get_frame();
HXLINE( 236)				bool _hx_tmp;
HXDLIN( 236)				bool _hx_tmp1;
HXDLIN( 236)				if ((frame->sourceSize->x == frameRect->width)) {
HXLINE( 236)					_hx_tmp1 = (frame->sourceSize->y == frameRect->height);
            				}
            				else {
HXLINE( 236)					_hx_tmp1 = false;
            				}
HXDLIN( 236)				if (_hx_tmp1) {
HXLINE( 236)					_hx_tmp = (frame->type == 2);
            				}
            				else {
HXLINE( 236)					_hx_tmp = false;
            				}
HXDLIN( 236)				if (_hx_tmp) {
HXLINE( 237)					return imageFrame;
            				}
            			}
            		}
HXLINE( 240)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,findEmptyFrame,return )


::hx::ObjectPtr< FlxImageFrame_obj > FlxImageFrame_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxImageFrame_obj > __this = new FlxImageFrame_obj();
	__this->__construct(parent,border);
	return __this;
}

::hx::ObjectPtr< FlxImageFrame_obj > FlxImageFrame_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	FlxImageFrame_obj *__this = (FlxImageFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxImageFrame_obj), true, "flixel.graphics.frames.FlxImageFrame"));
	*(void **)__this = FlxImageFrame_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxImageFrame_obj::FlxImageFrame_obj()
{
}

::hx::Val FlxImageFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frame() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return ::hx::Val( get_frame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxImageFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromEmptyFrame") ) { outValue = fromEmptyFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"findEmptyFrame") ) { outValue = findEmptyFrame_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"fromFrameAddSpacesAndBorders") ) { outValue = fromFrameAddSpacesAndBorders_dyn(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"fromBitmapAddSpacesAndBorders") ) { outValue = fromBitmapAddSpacesAndBorders_dyn(); return true; }
	}
	return false;
}

void FlxImageFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frame",2d,78,83,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxImageFrame_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxImageFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxImageFrame_obj_sMemberFields[] = {
	HX_("equals",3f,ee,f2,bf),
	HX_("addBorder",ed,81,3e,1c),
	HX_("get_frame",84,d4,2c,4a),
	::String(null()) };

::hx::Class FlxImageFrame_obj::__mClass;

static ::String FlxImageFrame_obj_sStaticFields[] = {
	HX_("fromEmptyFrame",6a,a0,02,7f),
	HX_("fromFrame",63,62,0c,bb),
	HX_("fromImage",91,09,f2,71),
	HX_("fromGraphic",5e,be,47,0c),
	HX_("fromRectangle",65,11,66,8d),
	HX_("fromBitmapAddSpacesAndBorders",05,1a,dd,f3),
	HX_("fromFrameAddSpacesAndBorders",db,16,d1,bd),
	HX_("findFrame",34,a9,7a,f5),
	HX_("findEmptyFrame",f9,03,ad,41),
	::String(null())
};

void FlxImageFrame_obj::__register()
{
	FlxImageFrame_obj _hx_dummy;
	FlxImageFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxImageFrame",ed,69,ba,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxImageFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxImageFrame_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxImageFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxImageFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxImageFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxImageFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
