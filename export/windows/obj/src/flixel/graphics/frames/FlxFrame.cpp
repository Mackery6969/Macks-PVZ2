#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5df8bdd839d6a258_151_new,"flixel.graphics.frames.FlxFrame","new",0x06ad24e4,"flixel.graphics.frames.FlxFrame.new","flixel/graphics/frames/FlxFrame.hx",151,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_171_cacheFrameMatrix,"flixel.graphics.frames.FlxFrame","cacheFrameMatrix",0xffbbac28,"flixel.graphics.frames.FlxFrame.cacheFrameMatrix","flixel/graphics/frames/FlxFrame.hx",171,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_201_prepareBlitMatrix,"flixel.graphics.frames.FlxFrame","prepareBlitMatrix",0xbf3c9041,"flixel.graphics.frames.FlxFrame.prepareBlitMatrix","flixel/graphics/frames/FlxFrame.hx",201,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_233_rotateAndFlip,"flixel.graphics.frames.FlxFrame","rotateAndFlip",0x835ac58d,"flixel.graphics.frames.FlxFrame.rotateAndFlip","flixel/graphics/frames/FlxFrame.hx",233,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_282_prepareTransformedBlitMatrix,"flixel.graphics.frames.FlxFrame","prepareTransformedBlitMatrix",0xc5ea2af6,"flixel.graphics.frames.FlxFrame.prepareTransformedBlitMatrix","flixel/graphics/frames/FlxFrame.hx",282,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_297_prepareMatrix,"flixel.graphics.frames.FlxFrame","prepareMatrix",0xbf883cac,"flixel.graphics.frames.FlxFrame.prepareMatrix","flixel/graphics/frames/FlxFrame.hx",297,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_321_fillBlitMatrix,"flixel.graphics.frames.FlxFrame","fillBlitMatrix",0xa3605eb5,"flixel.graphics.frames.FlxFrame.fillBlitMatrix","flixel/graphics/frames/FlxFrame.hx",321,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_344_paint,"flixel.graphics.frames.FlxFrame","paint",0x0c093522,"flixel.graphics.frames.FlxFrame.paint","flixel/graphics/frames/FlxFrame.hx",344,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_387_paintRotatedAndFlipped,"flixel.graphics.frames.FlxFrame","paintRotatedAndFlipped",0x8f0fb1b2,"flixel.graphics.frames.FlxFrame.paintRotatedAndFlipped","flixel/graphics/frames/FlxFrame.hx",387,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_422_checkInputBitmap,"flixel.graphics.frames.FlxFrame","checkInputBitmap",0x11e1b8ad,"flixel.graphics.frames.FlxFrame.checkInputBitmap","flixel/graphics/frames/FlxFrame.hx",422,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_456_getDrawFrameRect,"flixel.graphics.frames.FlxFrame","getDrawFrameRect",0x7930f1d3,"flixel.graphics.frames.FlxFrame.getDrawFrameRect","flixel/graphics/frames/FlxFrame.hx",456,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_477_subFrameTo,"flixel.graphics.frames.FlxFrame","subFrameTo",0x37199964,"flixel.graphics.frames.FlxFrame.subFrameTo","flixel/graphics/frames/FlxFrame.hx",477,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_565_setBorderTo,"flixel.graphics.frames.FlxFrame","setBorderTo",0x0ba0ebcd,"flixel.graphics.frames.FlxFrame.setBorderTo","flixel/graphics/frames/FlxFrame.hx",565,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_582_clipTo,"flixel.graphics.frames.FlxFrame","clipTo",0x9ecb6267,"flixel.graphics.frames.FlxFrame.clipTo","flixel/graphics/frames/FlxFrame.hx",582,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_667_copyTo,"flixel.graphics.frames.FlxFrame","copyTo",0x5da6728c,"flixel.graphics.frames.FlxFrame.copyTo","flixel/graphics/frames/FlxFrame.hx",667,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_691_destroy,"flixel.graphics.frames.FlxFrame","destroy",0x74fe137e,"flixel.graphics.frames.FlxFrame.destroy","flixel/graphics/frames/FlxFrame.hx",691,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_704_toString,"flixel.graphics.frames.FlxFrame","toString",0x50e09da8,"flixel.graphics.frames.FlxFrame.toString","flixel/graphics/frames/FlxFrame.hx",704,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_708_set_frame,"flixel.graphics.frames.FlxFrame","set_frame",0x789f5014,"flixel.graphics.frames.FlxFrame.set_frame","flixel/graphics/frames/FlxFrame.hx",708,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_49_sortFrames,"flixel.graphics.frames.FlxFrame","sortFrames",0x7ba729a0,"flixel.graphics.frames.FlxFrame.sortFrames","flixel/graphics/frames/FlxFrame.hx",49,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_64_sort,"flixel.graphics.frames.FlxFrame","sort",0xd428c65a,"flixel.graphics.frames.FlxFrame.sort","flixel/graphics/frames/FlxFrame.hx",64,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_75_sortHelper,"flixel.graphics.frames.FlxFrame","sortHelper",0xd36ff768,"flixel.graphics.frames.FlxFrame.sortHelper","flixel/graphics/frames/FlxFrame.hx",75,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_68_sortHelper,"flixel.graphics.frames.FlxFrame","sortHelper",0xd36ff768,"flixel.graphics.frames.FlxFrame.sortHelper","flixel/graphics/frames/FlxFrame.hx",68,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_79_checkValidName,"flixel.graphics.frames.FlxFrame","checkValidName",0x297fe17b,"flixel.graphics.frames.FlxFrame.checkValidName","flixel/graphics/frames/FlxFrame.hx",79,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_96_sortByName,"flixel.graphics.frames.FlxFrame","sortByName",0xdd6fa5bc,"flixel.graphics.frames.FlxFrame.sortByName","flixel/graphics/frames/FlxFrame.hx",96,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_25_boot,"flixel.graphics.frames.FlxFrame","boot",0xc8ec232e,"flixel.graphics.frames.FlxFrame.boot","flixel/graphics/frames/FlxFrame.hx",25,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_30_boot,"flixel.graphics.frames.FlxFrame","boot",0xc8ec232e,"flixel.graphics.frames.FlxFrame.boot","flixel/graphics/frames/FlxFrame.hx",30,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_35_boot,"flixel.graphics.frames.FlxFrame","boot",0xc8ec232e,"flixel.graphics.frames.FlxFrame.boot","flixel/graphics/frames/FlxFrame.hx",35,0x6c7f608b)
namespace flixel{
namespace graphics{
namespace frames{

void FlxFrame_obj::__construct( ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration){
            		int angle = __o_angle.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		Float duration = __o_duration.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_151_new)
HXLINE( 152)		this->parent = parent;
HXLINE( 153)		this->angle = angle;
HXLINE( 154)		this->flipX = flipX;
HXLINE( 155)		this->flipY = flipY;
HXLINE( 156)		this->duration = duration;
HXLINE( 158)		this->type = 0;
HXLINE( 160)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 160)		point->_inPool = false;
HXDLIN( 160)		this->sourceSize = point;
HXLINE( 161)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 161)		point1->_inPool = false;
HXDLIN( 161)		this->offset = point1;
HXLINE( 163)		::Array< Float > this1 = ::Array_obj< Float >::__new(6);
HXDLIN( 163)		this->blitMatrix = this1;
HXLINE( 164)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 165)			::Array< Float > this1 = ::Array_obj< Float >::__new(6);
HXDLIN( 165)			this->tileMatrix = this1;
            		}
            	}

Dynamic FlxFrame_obj::__CreateEmpty() { return new FlxFrame_obj; }

void *FlxFrame_obj::_hx_vtable = 0;

Dynamic FlxFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFrame_obj > _hx_result = new FlxFrame_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3adf0488;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_frames_FlxFrame__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::frames::FlxFrame_obj::destroy,
};

void *FlxFrame_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_frames_FlxFrame__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxFrame_obj::cacheFrameMatrix(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_171_cacheFrameMatrix)
HXLINE( 172)		{
HXLINE( 172)			 ::flixel::math::FlxMatrix mat = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 172)			mat->identity();
HXDLIN( 172)			mat->translate(-(this->frame->x),-(this->frame->y));
HXDLIN( 172)			if ((this->angle == 90)) {
HXLINE( 172)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 172)				mat->translate(this->frame->height,( (Float)(0) ));
            			}
            			else {
HXLINE( 172)				if ((this->angle == -90)) {
HXLINE( 172)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 172)					mat->translate(( (Float)(0) ),this->frame->width);
            				}
            			}
HXDLIN( 172)			mat->translate(this->offset->x,this->offset->y);
            		}
HXLINE( 173)		this->blitMatrix->__unsafe_set(0,::flixel::graphics::frames::FlxFrame_obj::_matrix->a);
HXLINE( 174)		this->blitMatrix->__unsafe_set(1,::flixel::graphics::frames::FlxFrame_obj::_matrix->b);
HXLINE( 175)		this->blitMatrix->__unsafe_set(2,::flixel::graphics::frames::FlxFrame_obj::_matrix->c);
HXLINE( 176)		this->blitMatrix->__unsafe_set(3,::flixel::graphics::frames::FlxFrame_obj::_matrix->d);
HXLINE( 177)		this->blitMatrix->__unsafe_set(4,::flixel::graphics::frames::FlxFrame_obj::_matrix->tx);
HXLINE( 178)		this->blitMatrix->__unsafe_set(5,::flixel::graphics::frames::FlxFrame_obj::_matrix->ty);
HXLINE( 180)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 182)			{
HXLINE( 182)				 ::flixel::math::FlxMatrix mat = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 182)				mat->identity();
HXDLIN( 182)				if ((this->angle == 90)) {
HXLINE( 182)					mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 182)					mat->translate(this->frame->height,( (Float)(0) ));
            				}
            				else {
HXLINE( 182)					if ((this->angle == -90)) {
HXLINE( 182)						mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 182)						mat->translate(( (Float)(0) ),this->frame->width);
            					}
            				}
HXDLIN( 182)				mat->translate(this->offset->x,this->offset->y);
            			}
HXLINE( 183)			this->tileMatrix->__unsafe_set(0,::flixel::graphics::frames::FlxFrame_obj::_matrix->a);
HXLINE( 184)			this->tileMatrix->__unsafe_set(1,::flixel::graphics::frames::FlxFrame_obj::_matrix->b);
HXLINE( 185)			this->tileMatrix->__unsafe_set(2,::flixel::graphics::frames::FlxFrame_obj::_matrix->c);
HXLINE( 186)			this->tileMatrix->__unsafe_set(3,::flixel::graphics::frames::FlxFrame_obj::_matrix->d);
HXLINE( 187)			this->tileMatrix->__unsafe_set(4,::flixel::graphics::frames::FlxFrame_obj::_matrix->tx);
HXLINE( 188)			this->tileMatrix->__unsafe_set(5,::flixel::graphics::frames::FlxFrame_obj::_matrix->ty);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,cacheFrameMatrix,(void))

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareBlitMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< bool >  __o_blit){
            		bool blit = __o_blit.Default(true);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_201_prepareBlitMatrix)
HXLINE( 202)		mat->identity();
HXLINE( 204)		if (blit) {
HXLINE( 205)			mat->translate(-(this->frame->x),-(this->frame->y));
            		}
HXLINE( 207)		if ((this->angle == 90)) {
HXLINE( 209)			mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXLINE( 210)			mat->translate(this->frame->height,( (Float)(0) ));
            		}
            		else {
HXLINE( 212)			if ((this->angle == -90)) {
HXLINE( 214)				mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXLINE( 215)				mat->translate(( (Float)(0) ),this->frame->width);
            			}
            		}
HXLINE( 218)		mat->translate(this->offset->x,this->offset->y);
HXLINE( 219)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,prepareBlitMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::rotateAndFlip( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_233_rotateAndFlip)
HXLINE( 234)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXLINE( 235)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXLINE( 238)		if ((rotation != 0)) {
HXLINE( 240)			int t = w;
HXLINE( 241)			w = h;
HXLINE( 242)			h = t;
HXLINE( 244)			if ((rotation == 90)) {
HXLINE( 246)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXLINE( 247)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 249)				bool _hx_tmp;
HXDLIN( 249)				if ((rotation != -90)) {
HXLINE( 249)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 249)					_hx_tmp = true;
            				}
HXDLIN( 249)				if (_hx_tmp) {
HXLINE( 251)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXLINE( 252)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXLINE( 257)		if (flipX) {
HXLINE( 259)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXLINE( 260)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXLINE( 263)		if (flipY) {
HXLINE( 265)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXLINE( 266)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXLINE( 269)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,rotateAndFlip,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareTransformedBlitMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_282_prepareTransformedBlitMatrix)
HXLINE( 283)		mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXDLIN( 283)		mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXDLIN( 283)		mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXDLIN( 283)		mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXDLIN( 283)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXDLIN( 283)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
HXLINE( 284)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 284)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 284)		if ((rotation != 0)) {
HXLINE( 284)			int t = w;
HXDLIN( 284)			w = h;
HXDLIN( 284)			h = t;
HXDLIN( 284)			if ((rotation == 90)) {
HXLINE( 284)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 284)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 284)				bool _hx_tmp;
HXDLIN( 284)				if ((rotation != -90)) {
HXLINE( 284)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 284)					_hx_tmp = true;
            				}
HXDLIN( 284)				if (_hx_tmp) {
HXLINE( 284)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 284)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXDLIN( 284)		if (flipX) {
HXLINE( 284)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXDLIN( 284)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXDLIN( 284)		if (flipY) {
HXLINE( 284)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXDLIN( 284)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXDLIN( 284)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareTransformedBlitMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_297_prepareMatrix)
HXLINE( 298)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 300)			mat->identity();
HXLINE( 301)			return mat;
            		}
HXLINE( 304)		mat->a = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,0)) );
HXLINE( 305)		mat->b = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,1)) );
HXLINE( 306)		mat->c = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,2)) );
HXLINE( 307)		mat->d = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,3)) );
HXLINE( 308)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,4)) );
HXLINE( 309)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,5)) );
HXLINE( 311)		bool doFlipX = (flipX != this->flipX);
HXLINE( 312)		bool doFlipY = (flipY != this->flipY);
HXLINE( 314)		bool _hx_tmp;
HXDLIN( 314)		bool _hx_tmp1;
HXDLIN( 314)		if ((rotation == 0)) {
HXLINE( 314)			_hx_tmp1 = !(doFlipX);
            		}
            		else {
HXLINE( 314)			_hx_tmp1 = false;
            		}
HXDLIN( 314)		if (_hx_tmp1) {
HXLINE( 314)			_hx_tmp = !(doFlipY);
            		}
            		else {
HXLINE( 314)			_hx_tmp = false;
            		}
HXDLIN( 314)		if (_hx_tmp) {
HXLINE( 315)			return mat;
            		}
HXLINE( 317)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 317)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 317)		if ((rotation != 0)) {
HXLINE( 317)			int t = w;
HXDLIN( 317)			w = h;
HXDLIN( 317)			h = t;
HXDLIN( 317)			if ((rotation == 90)) {
HXLINE( 317)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 317)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 317)				bool _hx_tmp;
HXDLIN( 317)				if ((rotation != -90)) {
HXLINE( 317)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 317)					_hx_tmp = true;
            				}
HXDLIN( 317)				if (_hx_tmp) {
HXLINE( 317)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 317)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXDLIN( 317)		if (doFlipX) {
HXLINE( 317)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXDLIN( 317)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXDLIN( 317)		if (doFlipY) {
HXLINE( 317)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXDLIN( 317)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXDLIN( 317)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::fillBlitMatrix( ::flixel::math::FlxMatrix mat){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_321_fillBlitMatrix)
HXLINE( 322)		mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXLINE( 323)		mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXLINE( 324)		mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXLINE( 325)		mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXLINE( 326)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXLINE( 327)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
HXLINE( 328)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,fillBlitMatrix,return )

 ::openfl::display::BitmapData FlxFrame_obj::paint( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_344_paint)
HXLINE( 345)		 ::openfl::display::BitmapData bmd1 = bmd;
HXDLIN( 345)		bool flipXY = (0 != 0);
HXDLIN( 345)		Float w;
HXDLIN( 345)		if (flipXY) {
HXLINE( 345)			w = this->sourceSize->y;
            		}
            		else {
HXLINE( 345)			w = this->sourceSize->x;
            		}
HXDLIN( 345)		int w1 = ::Std_obj::_hx_int(w);
HXDLIN( 345)		Float h;
HXDLIN( 345)		if (flipXY) {
HXLINE( 345)			h = this->sourceSize->x;
            		}
            		else {
HXLINE( 345)			h = this->sourceSize->y;
            		}
HXDLIN( 345)		int h1 = ::Std_obj::_hx_int(h);
HXDLIN( 345)		bool bmd2;
HXDLIN( 345)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 345)			bmd2 = disposeIfNotEqual;
            		}
            		else {
HXLINE( 345)			bmd2 = false;
            		}
HXDLIN( 345)		if (bmd2) {
HXLINE( 345)			bmd1 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd1,( (Float)(w1) ),( (Float)(h1) ));
            		}
HXDLIN( 345)		bool bmd3;
HXDLIN( 345)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 345)			bmd3 = !(mergeAlpha);
            		}
            		else {
HXLINE( 345)			bmd3 = false;
            		}
HXDLIN( 345)		if (bmd3) {
HXLINE( 345)			if (::hx::IsNotNull( point )) {
HXLINE( 345)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(point->x,point->y,( (Float)(w1) ),( (Float)(h1) ));
            			}
            			else {
HXLINE( 345)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(w1) ),( (Float)(h1) ));
            			}
HXDLIN( 345)			bmd1->fillRect(::flixel::graphics::frames::FlxFrame_obj::_rect,0);
            		}
            		else {
HXLINE( 345)			if (::hx::IsNull( bmd1 )) {
HXLINE( 345)				bmd1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w1,h1,true,0);
            			}
            		}
HXDLIN( 345)		bmd = bmd1;
HXLINE( 347)		if ((this->type == 2)) {
HXLINE( 348)			return bmd;
            		}
HXLINE( 350)		if ((this->angle == 0)) {
HXLINE( 352)			{
HXLINE( 352)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 352)				 ::openfl::geom::Point p = ::flixel::graphics::frames::FlxFrame_obj::_point;
HXDLIN( 352)				if (::hx::IsNull( p )) {
HXLINE( 352)					p =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 352)				p->x = this1->x;
HXDLIN( 352)				p->y = this1->y;
            			}
HXLINE( 353)			if (::hx::IsNotNull( point )) {
HXLINE( 354)				::flixel::graphics::frames::FlxFrame_obj::_point->offset(point->x,point->y);
            			}
HXLINE( 356)			 ::openfl::display::BitmapData _hx_tmp = this->parent->bitmap;
HXDLIN( 356)			 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 356)			 ::openfl::geom::Rectangle FlashRect = ::flixel::graphics::frames::FlxFrame_obj::_rect;
HXDLIN( 356)			if (::hx::IsNull( FlashRect )) {
HXLINE( 356)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 356)			FlashRect->x = _this->x;
HXDLIN( 356)			FlashRect->y = _this->y;
HXDLIN( 356)			FlashRect->width = _this->width;
HXDLIN( 356)			FlashRect->height = _this->height;
HXDLIN( 356)			bmd->copyPixels(_hx_tmp,FlashRect,::flixel::graphics::frames::FlxFrame_obj::_point,null(),null(),mergeAlpha);
            		}
            		else {
HXLINE( 360)			{
HXLINE( 360)				 ::flixel::math::FlxMatrix mat = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 360)				mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXDLIN( 360)				mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXDLIN( 360)				mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXDLIN( 360)				mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXDLIN( 360)				mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXDLIN( 360)				mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
            			}
HXLINE( 361)			if (::hx::IsNotNull( point )) {
HXLINE( 362)				::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(point->x,point->y);
            			}
HXLINE( 364)			 ::openfl::display::BitmapData _hx_tmp = this->parent->bitmap;
HXDLIN( 364)			 ::flixel::math::FlxMatrix _hx_tmp1 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 364)			 ::flixel::math::FlxMatrix mat1 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 364)			 ::openfl::geom::Rectangle rect = ::flixel::graphics::frames::FlxFrame_obj::_rect;
HXDLIN( 364)			Float x = this->frame->x;
HXDLIN( 364)			Float y = this->frame->y;
HXDLIN( 364)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 364)			point1->_inPool = false;
HXDLIN( 364)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 364)			point2->_weak = true;
HXDLIN( 364)			 ::flixel::math::FlxBasePoint p1 = point2;
HXDLIN( 364)			 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 364)			Float x1 = (_this->x + _this->width);
HXDLIN( 364)			 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 364)			Float y1 = (_this1->y + _this1->height);
HXDLIN( 364)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 364)			point3->_inPool = false;
HXDLIN( 364)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 364)			point4->_weak = true;
HXDLIN( 364)			 ::flixel::math::FlxBasePoint p2 = point4;
HXDLIN( 364)			{
HXLINE( 364)				Float x11 = (((p1->x * mat1->a) + (p1->y * mat1->c)) + mat1->tx);
HXDLIN( 364)				Float y11 = (((p1->x * mat1->b) + (p1->y * mat1->d)) + mat1->ty);
HXDLIN( 364)				{
HXLINE( 364)					p1->set_x(x11);
HXDLIN( 364)					p1->set_y(y11);
            				}
            			}
HXDLIN( 364)			{
HXLINE( 364)				Float x12 = (((p2->x * mat1->a) + (p2->y * mat1->c)) + mat1->tx);
HXDLIN( 364)				Float y12 = (((p2->x * mat1->b) + (p2->y * mat1->d)) + mat1->ty);
HXDLIN( 364)				{
HXLINE( 364)					p2->set_x(x12);
HXDLIN( 364)					p2->set_y(y12);
            				}
            			}
HXDLIN( 364)			 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 364)			_this2->x = ( (Float)(0) );
HXDLIN( 364)			_this2->y = ( (Float)(0) );
HXDLIN( 364)			_this2->width = ( (Float)(0) );
HXDLIN( 364)			_this2->height = ( (Float)(0) );
HXDLIN( 364)			 ::flixel::math::FlxRect rect1 = _this2;
HXDLIN( 364)			rect1->_inPool = false;
HXDLIN( 364)			 ::flixel::math::FlxRect _this3 = rect1;
HXDLIN( 364)			Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 364)			Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 364)			Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 364)			Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 364)			if (p1->_weak) {
HXLINE( 364)				p1->put();
            			}
HXDLIN( 364)			if (p2->_weak) {
HXLINE( 364)				p2->put();
            			}
HXDLIN( 364)			_this3->x = minX;
HXDLIN( 364)			_this3->y = minY;
HXDLIN( 364)			_this3->width = (maxX - minX);
HXDLIN( 364)			_this3->height = (maxY - minY);
HXDLIN( 364)			 ::flixel::math::FlxRect flxRect = _this3;
HXDLIN( 364)			{
HXLINE( 364)				 ::openfl::geom::Rectangle FlashRect = rect;
HXDLIN( 364)				if (::hx::IsNull( FlashRect )) {
HXLINE( 364)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 364)				FlashRect->x = flxRect->x;
HXDLIN( 364)				FlashRect->y = flxRect->y;
HXDLIN( 364)				FlashRect->width = flxRect->width;
HXDLIN( 364)				FlashRect->height = flxRect->height;
            			}
HXDLIN( 364)			if (!(flxRect->_inPool)) {
HXLINE( 364)				flxRect->_inPool = true;
HXDLIN( 364)				flxRect->_weak = false;
HXDLIN( 364)				::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            			}
HXDLIN( 364)			bmd->draw(_hx_tmp,_hx_tmp1,null(),null(),rect,null());
            		}
HXLINE( 367)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,paint,return )

 ::openfl::display::BitmapData FlxFrame_obj::paintRotatedAndFlipped( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_387_paintRotatedAndFlipped)
HXLINE( 388)		bool _hx_tmp;
HXDLIN( 388)		if ((this->type == 2)) {
HXLINE( 388)			_hx_tmp = (rotation == 0);
            		}
            		else {
HXLINE( 388)			_hx_tmp = false;
            		}
HXDLIN( 388)		if (_hx_tmp) {
HXLINE( 389)			return this->paint(bmd,point,mergeAlpha,disposeIfNotEqual);
            		}
HXLINE( 391)		 ::openfl::display::BitmapData bmd1 = bmd;
HXDLIN( 391)		bool flipXY = (rotation != 0);
HXDLIN( 391)		Float w;
HXDLIN( 391)		if (flipXY) {
HXLINE( 391)			w = this->sourceSize->y;
            		}
            		else {
HXLINE( 391)			w = this->sourceSize->x;
            		}
HXDLIN( 391)		int w1 = ::Std_obj::_hx_int(w);
HXDLIN( 391)		Float h;
HXDLIN( 391)		if (flipXY) {
HXLINE( 391)			h = this->sourceSize->x;
            		}
            		else {
HXLINE( 391)			h = this->sourceSize->y;
            		}
HXDLIN( 391)		int h1 = ::Std_obj::_hx_int(h);
HXDLIN( 391)		bool bmd2;
HXDLIN( 391)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 391)			bmd2 = disposeIfNotEqual;
            		}
            		else {
HXLINE( 391)			bmd2 = false;
            		}
HXDLIN( 391)		if (bmd2) {
HXLINE( 391)			bmd1 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd1,( (Float)(w1) ),( (Float)(h1) ));
            		}
HXDLIN( 391)		bool bmd3;
HXDLIN( 391)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 391)			bmd3 = !(mergeAlpha);
            		}
            		else {
HXLINE( 391)			bmd3 = false;
            		}
HXDLIN( 391)		if (bmd3) {
HXLINE( 391)			if (::hx::IsNotNull( point )) {
HXLINE( 391)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(point->x,point->y,( (Float)(w1) ),( (Float)(h1) ));
            			}
            			else {
HXLINE( 391)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(w1) ),( (Float)(h1) ));
            			}
HXDLIN( 391)			bmd1->fillRect(::flixel::graphics::frames::FlxFrame_obj::_rect,0);
            		}
            		else {
HXLINE( 391)			if (::hx::IsNull( bmd1 )) {
HXLINE( 391)				bmd1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w1,h1,true,0);
            			}
            		}
HXDLIN( 391)		bmd = bmd1;
HXLINE( 393)		if ((this->type == 2)) {
HXLINE( 394)			return bmd;
            		}
HXLINE( 396)		bool doFlipX = (flipX != this->flipX);
HXLINE( 397)		bool doFlipY = (flipY != this->flipY);
HXLINE( 399)		this->prepareTransformedBlitMatrix(::flixel::graphics::frames::FlxFrame_obj::_matrix,rotation,doFlipX,doFlipY);
HXLINE( 401)		if (::hx::IsNotNull( point )) {
HXLINE( 402)			::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(point->x,point->y);
            		}
HXLINE( 404)		 ::openfl::display::BitmapData _hx_tmp1 = this->parent->bitmap;
HXDLIN( 404)		 ::flixel::math::FlxMatrix _hx_tmp2 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 404)		 ::flixel::math::FlxMatrix mat = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 404)		 ::openfl::geom::Rectangle rect = ::flixel::graphics::frames::FlxFrame_obj::_rect;
HXDLIN( 404)		Float x = this->frame->x;
HXDLIN( 404)		Float y = this->frame->y;
HXDLIN( 404)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 404)		point1->_inPool = false;
HXDLIN( 404)		 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 404)		point2->_weak = true;
HXDLIN( 404)		 ::flixel::math::FlxBasePoint p1 = point2;
HXDLIN( 404)		 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 404)		Float x1 = (_this->x + _this->width);
HXDLIN( 404)		 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 404)		Float y1 = (_this1->y + _this1->height);
HXDLIN( 404)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 404)		point3->_inPool = false;
HXDLIN( 404)		 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 404)		point4->_weak = true;
HXDLIN( 404)		 ::flixel::math::FlxBasePoint p2 = point4;
HXDLIN( 404)		{
HXLINE( 404)			Float x11 = (((p1->x * mat->a) + (p1->y * mat->c)) + mat->tx);
HXDLIN( 404)			Float y11 = (((p1->x * mat->b) + (p1->y * mat->d)) + mat->ty);
HXDLIN( 404)			{
HXLINE( 404)				p1->set_x(x11);
HXDLIN( 404)				p1->set_y(y11);
            			}
            		}
HXDLIN( 404)		{
HXLINE( 404)			Float x12 = (((p2->x * mat->a) + (p2->y * mat->c)) + mat->tx);
HXDLIN( 404)			Float y12 = (((p2->x * mat->b) + (p2->y * mat->d)) + mat->ty);
HXDLIN( 404)			{
HXLINE( 404)				p2->set_x(x12);
HXDLIN( 404)				p2->set_y(y12);
            			}
            		}
HXDLIN( 404)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 404)		_this2->x = ( (Float)(0) );
HXDLIN( 404)		_this2->y = ( (Float)(0) );
HXDLIN( 404)		_this2->width = ( (Float)(0) );
HXDLIN( 404)		_this2->height = ( (Float)(0) );
HXDLIN( 404)		 ::flixel::math::FlxRect rect1 = _this2;
HXDLIN( 404)		rect1->_inPool = false;
HXDLIN( 404)		 ::flixel::math::FlxRect _this3 = rect1;
HXDLIN( 404)		Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 404)		Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 404)		Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 404)		Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 404)		if (p1->_weak) {
HXLINE( 404)			p1->put();
            		}
HXDLIN( 404)		if (p2->_weak) {
HXLINE( 404)			p2->put();
            		}
HXDLIN( 404)		_this3->x = minX;
HXDLIN( 404)		_this3->y = minY;
HXDLIN( 404)		_this3->width = (maxX - minX);
HXDLIN( 404)		_this3->height = (maxY - minY);
HXDLIN( 404)		 ::flixel::math::FlxRect flxRect = _this3;
HXDLIN( 404)		{
HXLINE( 404)			 ::openfl::geom::Rectangle FlashRect = rect;
HXDLIN( 404)			if (::hx::IsNull( FlashRect )) {
HXLINE( 404)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 404)			FlashRect->x = flxRect->x;
HXDLIN( 404)			FlashRect->y = flxRect->y;
HXDLIN( 404)			FlashRect->width = flxRect->width;
HXDLIN( 404)			FlashRect->height = flxRect->height;
            		}
HXDLIN( 404)		if (!(flxRect->_inPool)) {
HXLINE( 404)			flxRect->_inPool = true;
HXDLIN( 404)			flxRect->_weak = false;
HXDLIN( 404)			::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            		}
HXDLIN( 404)		bmd->draw(_hx_tmp1,_hx_tmp2,null(),null(),rect,null());
HXLINE( 405)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxFrame_obj,paintRotatedAndFlipped,return )

 ::openfl::display::BitmapData FlxFrame_obj::checkInputBitmap( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		int rotation = __o_rotation.Default(0);
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_422_checkInputBitmap)
HXLINE( 423)		bool flipXY = (rotation != 0);
HXLINE( 424)		Float w;
HXDLIN( 424)		if (flipXY) {
HXLINE( 424)			w = this->sourceSize->y;
            		}
            		else {
HXLINE( 424)			w = this->sourceSize->x;
            		}
HXDLIN( 424)		int w1 = ::Std_obj::_hx_int(w);
HXLINE( 425)		Float h;
HXDLIN( 425)		if (flipXY) {
HXLINE( 425)			h = this->sourceSize->x;
            		}
            		else {
HXLINE( 425)			h = this->sourceSize->y;
            		}
HXDLIN( 425)		int h1 = ::Std_obj::_hx_int(h);
HXLINE( 427)		bool _hx_tmp;
HXDLIN( 427)		if (::hx::IsNotNull( bmd )) {
HXLINE( 427)			_hx_tmp = disposeIfNotEqual;
            		}
            		else {
HXLINE( 427)			_hx_tmp = false;
            		}
HXDLIN( 427)		if (_hx_tmp) {
HXLINE( 428)			bmd = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd,( (Float)(w1) ),( (Float)(h1) ));
            		}
HXLINE( 430)		bool _hx_tmp1;
HXDLIN( 430)		if (::hx::IsNotNull( bmd )) {
HXLINE( 430)			_hx_tmp1 = !(mergeAlpha);
            		}
            		else {
HXLINE( 430)			_hx_tmp1 = false;
            		}
HXDLIN( 430)		if (_hx_tmp1) {
HXLINE( 432)			if (::hx::IsNotNull( point )) {
HXLINE( 433)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(point->x,point->y,( (Float)(w1) ),( (Float)(h1) ));
            			}
            			else {
HXLINE( 435)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(w1) ),( (Float)(h1) ));
            			}
HXLINE( 437)			bmd->fillRect(::flixel::graphics::frames::FlxFrame_obj::_rect,0);
            		}
            		else {
HXLINE( 439)			if (::hx::IsNull( bmd )) {
HXLINE( 441)				bmd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w1,h1,true,0);
            			}
            		}
HXLINE( 444)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxFrame_obj,checkInputBitmap,return )

 ::openfl::geom::Rectangle FlxFrame_obj::getDrawFrameRect( ::flixel::math::FlxMatrix mat, ::openfl::geom::Rectangle rect){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_456_getDrawFrameRect)
HXLINE( 457)		Float x = this->frame->x;
HXDLIN( 457)		Float y = this->frame->y;
HXDLIN( 457)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 457)		point->_inPool = false;
HXDLIN( 457)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 457)		point1->_weak = true;
HXDLIN( 457)		 ::flixel::math::FlxBasePoint p1 = point1;
HXLINE( 458)		 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 458)		Float x1 = (_this->x + _this->width);
HXDLIN( 458)		 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 458)		Float y1 = (_this1->y + _this1->height);
HXDLIN( 458)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 458)		point2->_inPool = false;
HXDLIN( 458)		 ::flixel::math::FlxBasePoint point3 = point2;
HXDLIN( 458)		point3->_weak = true;
HXDLIN( 458)		 ::flixel::math::FlxBasePoint p2 = point3;
HXLINE( 460)		{
HXLINE( 460)			Float x11 = (((p1->x * mat->a) + (p1->y * mat->c)) + mat->tx);
HXDLIN( 460)			Float y11 = (((p1->x * mat->b) + (p1->y * mat->d)) + mat->ty);
HXDLIN( 460)			{
HXLINE( 460)				p1->set_x(x11);
HXDLIN( 460)				p1->set_y(y11);
            			}
            		}
HXLINE( 461)		{
HXLINE( 461)			Float x12 = (((p2->x * mat->a) + (p2->y * mat->c)) + mat->tx);
HXDLIN( 461)			Float y12 = (((p2->x * mat->b) + (p2->y * mat->d)) + mat->ty);
HXDLIN( 461)			{
HXLINE( 461)				p2->set_x(x12);
HXDLIN( 461)				p2->set_y(y12);
            			}
            		}
HXLINE( 463)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 463)		_this2->x = ( (Float)(0) );
HXDLIN( 463)		_this2->y = ( (Float)(0) );
HXDLIN( 463)		_this2->width = ( (Float)(0) );
HXDLIN( 463)		_this2->height = ( (Float)(0) );
HXDLIN( 463)		 ::flixel::math::FlxRect rect1 = _this2;
HXDLIN( 463)		rect1->_inPool = false;
HXDLIN( 463)		 ::flixel::math::FlxRect _this3 = rect1;
HXDLIN( 463)		Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 463)		Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 463)		Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 463)		Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 463)		if (p1->_weak) {
HXLINE( 463)			p1->put();
            		}
HXDLIN( 463)		if (p2->_weak) {
HXLINE( 463)			p2->put();
            		}
HXDLIN( 463)		_this3->x = minX;
HXDLIN( 463)		_this3->y = minY;
HXDLIN( 463)		_this3->width = (maxX - minX);
HXDLIN( 463)		_this3->height = (maxY - minY);
HXDLIN( 463)		 ::flixel::math::FlxRect flxRect = _this3;
HXLINE( 464)		{
HXLINE( 464)			 ::openfl::geom::Rectangle FlashRect = rect;
HXDLIN( 464)			if (::hx::IsNull( FlashRect )) {
HXLINE( 464)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 464)			FlashRect->x = flxRect->x;
HXDLIN( 464)			FlashRect->y = flxRect->y;
HXDLIN( 464)			FlashRect->width = flxRect->width;
HXDLIN( 464)			FlashRect->height = flxRect->height;
            		}
HXLINE( 465)		if (!(flxRect->_inPool)) {
HXLINE( 465)			flxRect->_inPool = true;
HXDLIN( 465)			flxRect->_weak = false;
HXDLIN( 465)			::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            		}
HXLINE( 466)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,getDrawFrameRect,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::subFrameTo( ::flixel::math::FlxRect rect, ::flixel::graphics::frames::FlxFrame frameToFill){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_477_subFrameTo)
HXLINE( 478)		if (::hx::IsNull( frameToFill )) {
HXLINE( 480)			frameToFill =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 484)			frameToFill->parent = this->parent;
HXLINE( 485)			frameToFill->angle = this->angle;
HXLINE( 486)			frameToFill->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(frameToFill->frame)) ));
            		}
HXLINE( 489)		{
HXLINE( 489)			 ::flixel::math::FlxBasePoint this1 = frameToFill->sourceSize;
HXDLIN( 489)			Float y = rect->height;
HXDLIN( 489)			this1->set_x(rect->width);
HXDLIN( 489)			this1->set_y(y);
            		}
HXLINE( 492)		if ((this->type == 2)) {
HXLINE( 494)			frameToFill->type = 2;
HXLINE( 495)			{
HXLINE( 495)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 495)				this1->set_x(( (Float)(0) ));
HXDLIN( 495)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 496)			return frameToFill;
            		}
HXLINE( 499)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 499)		_this->x = ( (Float)(0) );
HXDLIN( 499)		_this->y = ( (Float)(0) );
HXDLIN( 499)		_this->width = ( (Float)(0) );
HXDLIN( 499)		_this->height = ( (Float)(0) );
HXDLIN( 499)		 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 499)		rect1->_inPool = false;
HXDLIN( 499)		 ::flixel::math::FlxRect _this1 = rect1;
HXDLIN( 499)		_this1->width = this->frame->width;
HXDLIN( 499)		_this1->height = this->frame->height;
HXDLIN( 499)		 ::flixel::math::FlxRect clippedRect = _this1;
HXLINE( 500)		if ((this->angle != 0)) {
HXLINE( 502)			clippedRect->width = this->frame->height;
HXLINE( 503)			clippedRect->height = this->frame->width;
            		}
HXLINE( 506)		Float ox = ::Math_obj::max(this->offset->x,( (Float)(0) ));
HXLINE( 507)		Float oy = ::Math_obj::max(this->offset->y,( (Float)(0) ));
HXLINE( 509)		{
HXLINE( 509)			 ::flixel::math::FlxRect rect2 = rect;
HXDLIN( 509)			rect2->x = (rect2->x + -(ox));
HXDLIN( 509)			 ::flixel::math::FlxRect rect3 = rect;
HXDLIN( 509)			rect3->y = (rect3->y + -(oy));
            		}
HXLINE( 510)		 ::flixel::math::FlxRect frameRect = clippedRect->intersection(rect,null());
HXLINE( 511)		clippedRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedRect)) );
HXLINE( 512)		{
HXLINE( 512)			 ::flixel::math::FlxRect rect4 = rect;
HXDLIN( 512)			rect4->x = (rect4->x + ox);
HXDLIN( 512)			 ::flixel::math::FlxRect rect5 = rect;
HXDLIN( 512)			rect5->y = (rect5->y + oy);
            		}
HXLINE( 514)		bool _hx_tmp;
HXDLIN( 514)		if ((frameRect->width != 0)) {
HXLINE( 514)			_hx_tmp = (frameRect->height == 0);
            		}
            		else {
HXLINE( 514)			_hx_tmp = true;
            		}
HXDLIN( 514)		if (_hx_tmp) {
HXLINE( 516)			frameToFill->type = 2;
HXLINE( 517)			{
HXLINE( 517)				frameRect->x = ( (Float)(0) );
HXDLIN( 517)				frameRect->y = ( (Float)(0) );
HXDLIN( 517)				frameRect->width = ( (Float)(0) );
HXDLIN( 517)				frameRect->height = ( (Float)(0) );
            			}
HXLINE( 518)			frameToFill->set_frame(frameRect);
HXLINE( 519)			{
HXLINE( 519)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 519)				this1->set_x(( (Float)(0) ));
HXDLIN( 519)				this1->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 523)			frameToFill->type = 0;
HXLINE( 524)			{
HXLINE( 524)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 524)				Float y = frameRect->y;
HXDLIN( 524)				this1->set_x(frameRect->x);
HXDLIN( 524)				this1->set_y(y);
HXDLIN( 524)				 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 524)				Float y1 = rect->y;
HXDLIN( 524)				this2->set_x((this2->x - rect->x));
HXDLIN( 524)				this2->set_y((this2->y - y1));
HXDLIN( 524)				 ::flixel::math::FlxBasePoint this3 = this2;
HXDLIN( 524)				 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 524)				{
HXLINE( 524)					Float y2 = point->y;
HXDLIN( 524)					this3->set_x((this3->x + point->x));
HXDLIN( 524)					this3->set_y((this3->y + y2));
            				}
HXDLIN( 524)				if (point->_weak) {
HXLINE( 524)					point->put();
            				}
            			}
HXLINE( 526)			Float x = frameRect->x;
HXDLIN( 526)			Float y3 = frameRect->y;
HXDLIN( 526)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y3);
HXDLIN( 526)			point1->_inPool = false;
HXDLIN( 526)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 526)			point2->_weak = true;
HXDLIN( 526)			 ::flixel::math::FlxBasePoint p1 = point2;
HXLINE( 527)			Float x1 = (frameRect->x + frameRect->width);
HXDLIN( 527)			Float y4 = (frameRect->y + frameRect->height);
HXDLIN( 527)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y4);
HXDLIN( 527)			point3->_inPool = false;
HXDLIN( 527)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 527)			point4->_weak = true;
HXDLIN( 527)			 ::flixel::math::FlxBasePoint p2 = point4;
HXLINE( 529)			::flixel::graphics::frames::FlxFrame_obj::_matrix->identity();
HXLINE( 531)			if ((this->angle == -90)) {
HXLINE( 533)				{
HXLINE( 533)					 ::flixel::math::FlxMatrix _this = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 533)					_this->setTo(-(_this->b),_this->a,-(_this->d),_this->c,-(_this->ty),_this->tx);
            				}
HXLINE( 534)				::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(this->frame->width,( (Float)(0) ));
            			}
            			else {
HXLINE( 536)				if ((this->angle == 90)) {
HXLINE( 538)					{
HXLINE( 538)						 ::flixel::math::FlxMatrix _this = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 538)						_this->setTo(_this->b,-(_this->a),_this->d,-(_this->c),_this->ty,-(_this->tx));
            					}
HXLINE( 539)					::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(( (Float)(0) ),this->frame->height);
            				}
            			}
HXLINE( 542)			if ((this->angle != 0)) {
HXLINE( 544)				{
HXLINE( 544)					 ::openfl::geom::Matrix matrix = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 544)					Float x1 = (((p1->x * matrix->a) + (p1->y * matrix->c)) + matrix->tx);
HXDLIN( 544)					Float y1 = (((p1->x * matrix->b) + (p1->y * matrix->d)) + matrix->ty);
HXDLIN( 544)					{
HXLINE( 544)						p1->set_x(x1);
HXDLIN( 544)						p1->set_y(y1);
            					}
            				}
HXLINE( 545)				{
HXLINE( 545)					 ::openfl::geom::Matrix matrix1 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 545)					Float x11 = (((p2->x * matrix1->a) + (p2->y * matrix1->c)) + matrix1->tx);
HXDLIN( 545)					Float y11 = (((p2->x * matrix1->b) + (p2->y * matrix1->d)) + matrix1->ty);
HXDLIN( 545)					{
HXLINE( 545)						p2->set_x(x11);
HXDLIN( 545)						p2->set_y(y11);
            					}
            				}
            			}
HXLINE( 548)			{
HXLINE( 548)				Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 548)				Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 548)				Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 548)				Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 548)				if (p1->_weak) {
HXLINE( 548)					p1->put();
            				}
HXDLIN( 548)				if (p2->_weak) {
HXLINE( 548)					p2->put();
            				}
HXDLIN( 548)				{
HXLINE( 548)					frameRect->x = minX;
HXDLIN( 548)					frameRect->y = minY;
HXDLIN( 548)					frameRect->width = (maxX - minX);
HXDLIN( 548)					frameRect->height = (maxY - minY);
            				}
            			}
HXLINE( 549)			{
HXLINE( 549)				 ::flixel::math::FlxRect frameRect1 = frameRect;
HXDLIN( 549)				frameRect1->x = (frameRect1->x + this->frame->x);
HXDLIN( 549)				 ::flixel::math::FlxRect frameRect2 = frameRect;
HXDLIN( 549)				frameRect2->y = (frameRect2->y + this->frame->y);
            			}
HXLINE( 550)			frameToFill->set_frame(frameRect);
HXLINE( 551)			frameToFill->cacheFrameMatrix();
            		}
HXLINE( 554)		return frameToFill;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,subFrameTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::setBorderTo( ::flixel::math::FlxBasePoint border, ::flixel::graphics::frames::FlxFrame frameToFill){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_565_setBorderTo)
HXLINE( 566)		Float X = border->x;
HXDLIN( 566)		Float Y = border->y;
HXDLIN( 566)		Float Width = (this->sourceSize->x - (( (Float)(2) ) * border->x));
HXDLIN( 566)		Float Height = (this->sourceSize->y - (( (Float)(2) ) * border->y));
HXDLIN( 566)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 566)		_this->x = X;
HXDLIN( 566)		_this->y = Y;
HXDLIN( 566)		_this->width = Width;
HXDLIN( 566)		_this->height = Height;
HXDLIN( 566)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 566)		rect->_inPool = false;
HXDLIN( 566)		 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 567)		frameToFill = this->subFrameTo(rect1,frameToFill);
HXLINE( 568)		frameToFill->name = this->name;
HXLINE( 569)		::flixel::util::FlxDestroyUtil_obj::put(rect1);
HXLINE( 570)		return frameToFill;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,setBorderTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::clipTo( ::flixel::math::FlxRect clip, ::flixel::graphics::frames::FlxFrame clippedFrame){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_582_clipTo)
HXLINE( 583)		if (::hx::IsNull( clippedFrame )) {
HXLINE( 585)			clippedFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 589)			clippedFrame->parent = this->parent;
HXLINE( 590)			clippedFrame->angle = this->angle;
HXLINE( 591)			clippedFrame->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedFrame->frame)) ));
            		}
HXLINE( 594)		{
HXLINE( 594)			 ::flixel::math::FlxBasePoint this1 = clippedFrame->sourceSize;
HXDLIN( 594)			 ::flixel::math::FlxBasePoint p = this->sourceSize;
HXDLIN( 594)			{
HXLINE( 594)				Float y = p->y;
HXDLIN( 594)				this1->set_x(p->x);
HXDLIN( 594)				this1->set_y(y);
            			}
HXDLIN( 594)			if (p->_weak) {
HXLINE( 594)				p->put();
            			}
            		}
HXLINE( 595)		clippedFrame->name = this->name;
HXLINE( 598)		if ((this->type == 2)) {
HXLINE( 600)			clippedFrame->type = 2;
HXLINE( 601)			{
HXLINE( 601)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 601)				this1->set_x(( (Float)(0) ));
HXDLIN( 601)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 602)			return clippedFrame;
            		}
HXLINE( 605)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 605)		_this->x = ( (Float)(0) );
HXDLIN( 605)		_this->y = ( (Float)(0) );
HXDLIN( 605)		_this->width = ( (Float)(0) );
HXDLIN( 605)		_this->height = ( (Float)(0) );
HXDLIN( 605)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 605)		rect->_inPool = false;
HXDLIN( 605)		 ::flixel::math::FlxRect _this1 = rect;
HXDLIN( 605)		_this1->width = this->frame->width;
HXDLIN( 605)		_this1->height = this->frame->height;
HXDLIN( 605)		 ::flixel::math::FlxRect clippedRect = _this1;
HXLINE( 606)		if ((this->angle != 0)) {
HXLINE( 608)			clippedRect->width = this->frame->height;
HXLINE( 609)			clippedRect->height = this->frame->width;
            		}
HXLINE( 612)		{
HXLINE( 612)			 ::flixel::math::FlxRect clip1 = clip;
HXDLIN( 612)			clip1->x = (clip1->x + -(this->offset->x));
HXDLIN( 612)			 ::flixel::math::FlxRect clip2 = clip;
HXDLIN( 612)			clip2->y = (clip2->y + -(this->offset->y));
            		}
HXLINE( 613)		 ::flixel::math::FlxRect frameRect = clippedRect->intersection(clip,null());
HXLINE( 614)		if (!(clippedRect->_inPool)) {
HXLINE( 614)			clippedRect->_inPool = true;
HXDLIN( 614)			clippedRect->_weak = false;
HXDLIN( 614)			::flixel::math::FlxRect_obj::_pool->putUnsafe(clippedRect);
            		}
HXLINE( 616)		bool _hx_tmp;
HXDLIN( 616)		if ((frameRect->width != 0)) {
HXLINE( 616)			_hx_tmp = (frameRect->height == 0);
            		}
            		else {
HXLINE( 616)			_hx_tmp = true;
            		}
HXDLIN( 616)		if (_hx_tmp) {
HXLINE( 618)			clippedFrame->type = 2;
HXLINE( 619)			{
HXLINE( 619)				frameRect->x = ( (Float)(0) );
HXDLIN( 619)				frameRect->y = ( (Float)(0) );
HXDLIN( 619)				frameRect->width = ( (Float)(0) );
HXDLIN( 619)				frameRect->height = ( (Float)(0) );
            			}
HXLINE( 620)			clippedFrame->set_frame(frameRect);
HXLINE( 621)			{
HXLINE( 621)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 621)				this1->set_x(( (Float)(0) ));
HXDLIN( 621)				this1->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 625)			clippedFrame->type = 0;
HXLINE( 626)			{
HXLINE( 626)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 626)				Float y = frameRect->y;
HXDLIN( 626)				this1->set_x(frameRect->x);
HXDLIN( 626)				this1->set_y(y);
HXDLIN( 626)				 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 626)				 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 626)				{
HXLINE( 626)					Float y1 = point->y;
HXDLIN( 626)					this2->set_x((this2->x + point->x));
HXDLIN( 626)					this2->set_y((this2->y + y1));
            				}
HXDLIN( 626)				if (point->_weak) {
HXLINE( 626)					point->put();
            				}
            			}
HXLINE( 628)			Float x = frameRect->x;
HXDLIN( 628)			Float y2 = frameRect->y;
HXDLIN( 628)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y2);
HXDLIN( 628)			point1->_inPool = false;
HXDLIN( 628)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 628)			point2->_weak = true;
HXDLIN( 628)			 ::flixel::math::FlxBasePoint p1 = point2;
HXLINE( 629)			Float x1 = (frameRect->x + frameRect->width);
HXDLIN( 629)			Float y3 = (frameRect->y + frameRect->height);
HXDLIN( 629)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y3);
HXDLIN( 629)			point3->_inPool = false;
HXDLIN( 629)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 629)			point4->_weak = true;
HXDLIN( 629)			 ::flixel::math::FlxBasePoint p2 = point4;
HXLINE( 631)			::flixel::graphics::frames::FlxFrame_obj::_matrix->identity();
HXLINE( 633)			if ((this->angle == -90)) {
HXLINE( 635)				{
HXLINE( 635)					 ::flixel::math::FlxMatrix _this = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 635)					_this->setTo(-(_this->b),_this->a,-(_this->d),_this->c,-(_this->ty),_this->tx);
            				}
HXLINE( 636)				::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(this->frame->width,( (Float)(0) ));
            			}
            			else {
HXLINE( 638)				if ((this->angle == 90)) {
HXLINE( 640)					{
HXLINE( 640)						 ::flixel::math::FlxMatrix _this = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 640)						_this->setTo(_this->b,-(_this->a),_this->d,-(_this->c),_this->ty,-(_this->tx));
            					}
HXLINE( 641)					::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(( (Float)(0) ),this->frame->height);
            				}
            			}
HXLINE( 644)			if ((this->angle != 0)) {
HXLINE( 646)				{
HXLINE( 646)					 ::openfl::geom::Matrix matrix = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 646)					Float x1 = (((p1->x * matrix->a) + (p1->y * matrix->c)) + matrix->tx);
HXDLIN( 646)					Float y1 = (((p1->x * matrix->b) + (p1->y * matrix->d)) + matrix->ty);
HXDLIN( 646)					{
HXLINE( 646)						p1->set_x(x1);
HXDLIN( 646)						p1->set_y(y1);
            					}
            				}
HXLINE( 647)				{
HXLINE( 647)					 ::openfl::geom::Matrix matrix1 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 647)					Float x11 = (((p2->x * matrix1->a) + (p2->y * matrix1->c)) + matrix1->tx);
HXDLIN( 647)					Float y11 = (((p2->x * matrix1->b) + (p2->y * matrix1->d)) + matrix1->ty);
HXDLIN( 647)					{
HXLINE( 647)						p2->set_x(x11);
HXDLIN( 647)						p2->set_y(y11);
            					}
            				}
            			}
HXLINE( 650)			{
HXLINE( 650)				Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 650)				Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 650)				Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 650)				Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 650)				if (p1->_weak) {
HXLINE( 650)					p1->put();
            				}
HXDLIN( 650)				if (p2->_weak) {
HXLINE( 650)					p2->put();
            				}
HXDLIN( 650)				{
HXLINE( 650)					frameRect->x = minX;
HXDLIN( 650)					frameRect->y = minY;
HXDLIN( 650)					frameRect->width = (maxX - minX);
HXDLIN( 650)					frameRect->height = (maxY - minY);
            				}
            			}
HXLINE( 651)			{
HXLINE( 651)				 ::flixel::math::FlxRect frameRect1 = frameRect;
HXDLIN( 651)				frameRect1->x = (frameRect1->x + this->frame->x);
HXDLIN( 651)				 ::flixel::math::FlxRect frameRect2 = frameRect;
HXDLIN( 651)				frameRect2->y = (frameRect2->y + this->frame->y);
            			}
HXLINE( 652)			clippedFrame->set_frame(frameRect);
HXLINE( 653)			clippedFrame->cacheFrameMatrix();
            		}
HXLINE( 656)		{
HXLINE( 656)			 ::flixel::math::FlxRect clip3 = clip;
HXDLIN( 656)			clip3->x = (clip3->x + this->offset->x);
HXDLIN( 656)			 ::flixel::math::FlxRect clip4 = clip;
HXDLIN( 656)			clip4->y = (clip4->y + this->offset->y);
            		}
HXLINE( 657)		return clippedFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,clipTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::copyTo( ::flixel::graphics::frames::FlxFrame clone){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_667_copyTo)
HXLINE( 668)		if (::hx::IsNull( clone )) {
HXLINE( 670)			clone =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 674)			clone->parent = this->parent;
HXLINE( 675)			clone->angle = this->angle;
HXLINE( 676)			clone->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clone->frame)) ));
            		}
HXLINE( 679)		{
HXLINE( 679)			 ::flixel::math::FlxBasePoint this1 = clone->offset;
HXDLIN( 679)			 ::flixel::math::FlxBasePoint p = this->offset;
HXDLIN( 679)			{
HXLINE( 679)				Float y = p->y;
HXDLIN( 679)				this1->set_x(p->x);
HXDLIN( 679)				this1->set_y(y);
            			}
HXDLIN( 679)			if (p->_weak) {
HXLINE( 679)				p->put();
            			}
            		}
HXLINE( 680)		clone->flipX = this->flipX;
HXLINE( 681)		clone->flipY = this->flipY;
HXLINE( 682)		{
HXLINE( 682)			 ::flixel::math::FlxBasePoint this2 = clone->sourceSize;
HXDLIN( 682)			 ::flixel::math::FlxBasePoint p1 = this->sourceSize;
HXDLIN( 682)			{
HXLINE( 682)				Float y1 = p1->y;
HXDLIN( 682)				this2->set_x(p1->x);
HXDLIN( 682)				this2->set_y(y1);
            			}
HXDLIN( 682)			if (p1->_weak) {
HXLINE( 682)				p1->put();
            			}
            		}
HXLINE( 683)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 683)		_this->x = ( (Float)(0) );
HXDLIN( 683)		_this->y = ( (Float)(0) );
HXDLIN( 683)		_this->width = ( (Float)(0) );
HXDLIN( 683)		_this->height = ( (Float)(0) );
HXDLIN( 683)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 683)		rect->_inPool = false;
HXDLIN( 683)		 ::flixel::math::FlxRect _this1 = rect;
HXDLIN( 683)		 ::flixel::math::FlxRect Rect = this->frame;
HXDLIN( 683)		_this1->x = Rect->x;
HXDLIN( 683)		_this1->y = Rect->y;
HXDLIN( 683)		_this1->width = Rect->width;
HXDLIN( 683)		_this1->height = Rect->height;
HXDLIN( 683)		if (Rect->_weak) {
HXLINE( 683)			if (!(Rect->_inPool)) {
HXLINE( 683)				Rect->_inPool = true;
HXDLIN( 683)				Rect->_weak = false;
HXDLIN( 683)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 683)		clone->set_frame(_this1);
HXLINE( 684)		clone->type = this->type;
HXLINE( 685)		clone->name = this->name;
HXLINE( 686)		clone->cacheFrameMatrix();
HXLINE( 687)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,copyTo,return )

void FlxFrame_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_691_destroy)
HXLINE( 692)		this->name = null();
HXLINE( 693)		this->parent = null();
HXLINE( 694)		this->sourceSize = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->sourceSize)) );
HXLINE( 695)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 696)		this->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->frame)) ));
HXLINE( 697)		this->uv = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->uv)) );
HXLINE( 698)		this->blitMatrix = null();
HXLINE( 699)		this->tileMatrix = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

::String FlxFrame_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_704_toString)
HXDLIN( 704)		 ::Dynamic value = this->name;
HXDLIN( 704)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 704)		_this->label = HX_("name",4b,72,ff,48);
HXDLIN( 704)		_this->value = value;
HXDLIN( 704)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(1)->init(0,_this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,toString,return )

 ::flixel::math::FlxRect FlxFrame_obj::set_frame( ::flixel::math::FlxRect value){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_708_set_frame)
HXLINE( 709)		if (::hx::IsNotNull( value )) {
HXLINE( 711)			if (::hx::IsNull( this->uv )) {
HXLINE( 712)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 712)				_this->x = ( (Float)(0) );
HXDLIN( 712)				_this->y = ( (Float)(0) );
HXDLIN( 712)				_this->width = ( (Float)(0) );
HXDLIN( 712)				_this->height = ( (Float)(0) );
HXDLIN( 712)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 712)				rect->_inPool = false;
HXDLIN( 712)				this->uv = rect;
            			}
HXLINE( 714)			{
HXLINE( 714)				 ::flixel::math::FlxRect _this = this->uv;
HXDLIN( 714)				Float Width = ((value->x + value->width) / ( (Float)(this->parent->width) ));
HXDLIN( 714)				Float Height = ((value->y + value->height) / ( (Float)(this->parent->height) ));
HXDLIN( 714)				_this->x = (value->x / ( (Float)(this->parent->width) ));
HXDLIN( 714)				_this->y = (value->y / ( (Float)(this->parent->height) ));
HXDLIN( 714)				_this->width = Width;
HXDLIN( 714)				_this->height = Height;
            			}
            		}
HXLINE( 717)		return (this->frame = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,set_frame,return )

 ::openfl::geom::Point FlxFrame_obj::_point;

 ::openfl::geom::Rectangle FlxFrame_obj::_rect;

 ::flixel::math::FlxMatrix FlxFrame_obj::_matrix;

void FlxFrame_obj::sortFrames(::Array< ::Dynamic> frames,::String prefix,::String suffix,::hx::Null< bool >  __o_warn){
            		bool warn = __o_warn.Default(true);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_49_sortFrames)
HXDLIN(  49)		int _hx_tmp;
HXDLIN(  49)		if (::hx::IsNull( suffix )) {
HXDLIN(  49)			_hx_tmp = 0;
            		}
            		else {
HXDLIN(  49)			_hx_tmp = suffix.length;
            		}
HXDLIN(  49)		::flixel::graphics::frames::FlxFrame_obj::sortHelper(frames,prefix.length,_hx_tmp,warn);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortFrames,(void))

void FlxFrame_obj::sort(::Array< ::Dynamic> frames,int prefixLength,int suffixLength,::hx::Null< bool >  __o_warn){
            		bool warn = __o_warn.Default(true);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_64_sort)
HXDLIN(  64)		::flixel::graphics::frames::FlxFrame_obj::sortHelper(frames,prefixLength,suffixLength,warn);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sort,(void))

void FlxFrame_obj::sortHelper(::Array< ::Dynamic> frames,int prefixLength,int suffixLength,::hx::Null< bool >  __o_warn){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,suffixLength1,int,prefixLength1) HXARGC(2)
            		int _hx_run( ::flixel::graphics::frames::FlxFrame frame1, ::flixel::graphics::frames::FlxFrame frame2){
            			HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_75_sortHelper)
HXLINE(  75)			return ::flixel::graphics::frames::FlxFrame_obj::sortByName(frame1,frame2,prefixLength1,suffixLength1);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		bool warn = __o_warn.Default(true);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_68_sortHelper)
HXLINE(  69)		if (warn) {
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			while((_g < frames->length)){
HXLINE(  71)				 ::flixel::graphics::frames::FlxFrame frame = frames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN(  71)				_g = (_g + 1);
HXLINE(  72)				{
HXLINE(  72)					::String name = frame->name;
HXDLIN(  72)					::String nameSub = name.substring(prefixLength,(name.length - suffixLength));
HXDLIN(  72)					 ::Dynamic num = ::Std_obj::parseInt(nameSub);
HXDLIN(  72)					if (::hx::IsNull( num )) {
HXLINE(  72)						::flixel::FlxG_obj::log->advanced(((((HX_("Could not parse frame number of \"",24,f6,83,85) + nameSub) + HX_("\" in frame named \"",4b,e5,55,ae)) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            					}
            					else {
HXLINE(  72)						if (::hx::IsLess( num,0 )) {
HXLINE(  72)							::flixel::FlxG_obj::log->advanced(((((HX_("Found negative frame number \"",ab,0a,fe,6c) + nameSub) + HX_("\" in frame named \"",4b,e5,55,ae)) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            						}
            					}
            				}
            			}
            		}
HXLINE(  75)		int prefixLength1 = prefixLength;
HXDLIN(  75)		int suffixLength1 = suffixLength;
HXDLIN(  75)		::haxe::ds::ArraySort_obj::sort(frames, ::Dynamic(new _hx_Closure_0(suffixLength1,prefixLength1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortHelper,(void))

void FlxFrame_obj::checkValidName(::String name,int prefixLength,int suffixLength){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_79_checkValidName)
HXLINE(  80)		::String nameSub = name.substring(prefixLength,(name.length - suffixLength));
HXLINE(  81)		 ::Dynamic num = ::Std_obj::parseInt(nameSub);
HXLINE(  82)		if (::hx::IsNull( num )) {
HXLINE(  83)			::flixel::FlxG_obj::log->advanced(((((HX_("Could not parse frame number of \"",24,f6,83,85) + nameSub) + HX_("\" in frame named \"",4b,e5,55,ae)) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            		else {
HXLINE(  84)			if (::hx::IsLess( num,0 )) {
HXLINE(  85)				::flixel::FlxG_obj::log->advanced(((((HX_("Found negative frame number \"",ab,0a,fe,6c) + nameSub) + HX_("\" in frame named \"",4b,e5,55,ae)) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxFrame_obj,checkValidName,(void))

int FlxFrame_obj::sortByName( ::flixel::graphics::frames::FlxFrame frame1, ::flixel::graphics::frames::FlxFrame frame2,int prefixLength,int suffixLength){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_96_sortByName)
HXDLIN(  96)		::String name = frame1->name;
HXDLIN(  96)		 ::Dynamic num = ::Std_obj::parseInt(name.substring(prefixLength,(name.length - suffixLength)));
HXDLIN(  96)		int _hx_tmp;
HXDLIN(  96)		if (::hx::IsNull( num )) {
HXDLIN(  96)			_hx_tmp = 0;
            		}
            		else {
HXDLIN(  96)			int n = ( (int)(num) );
HXDLIN(  96)			if ((n > 0)) {
HXDLIN(  96)				_hx_tmp = n;
            			}
            			else {
HXDLIN(  96)				_hx_tmp = -(n);
            			}
            		}
HXDLIN(  96)		::String name1 = frame2->name;
HXDLIN(  96)		 ::Dynamic num1 = ::Std_obj::parseInt(name1.substring(prefixLength,(name1.length - suffixLength)));
HXDLIN(  96)		int _hx_tmp1;
HXDLIN(  96)		if (::hx::IsNull( num1 )) {
HXDLIN(  96)			_hx_tmp1 = 0;
            		}
            		else {
HXDLIN(  96)			int n = ( (int)(num1) );
HXDLIN(  96)			if ((n > 0)) {
HXDLIN(  96)				_hx_tmp1 = n;
            			}
            			else {
HXDLIN(  96)				_hx_tmp1 = -(n);
            			}
            		}
HXDLIN(  96)		return (_hx_tmp - _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortByName,return )


::hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new( ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration) {
	::hx::ObjectPtr< FlxFrame_obj > __this = new FlxFrame_obj();
	__this->__construct(parent,__o_angle,__o_flipX,__o_flipY,__o_duration);
	return __this;
}

::hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration) {
	FlxFrame_obj *__this = (FlxFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFrame_obj), true, "flixel.graphics.frames.FlxFrame"));
	*(void **)__this = FlxFrame_obj::_hx_vtable;
	__this->__construct(parent,__o_angle,__o_flipX,__o_flipY,__o_duration);
	return __this;
}

FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_MARK_MEMBER_NAME(blitMatrix,"blitMatrix");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_VISIT_MEMBER_NAME(blitMatrix,"blitMatrix");
}

::hx::Val FlxFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return ::hx::Val( uv ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"paint") ) { return ::hx::Val( paint_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"clipTo") ) { return ::hx::Val( clipTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return ::hx::Val( sourceSize ); }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { return ::hx::Val( tileMatrix ); }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { return ::hx::Val( blitMatrix ); }
		if (HX_FIELD_EQ(inName,"subFrameTo") ) { return ::hx::Val( subFrameTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBorderTo") ) { return ::hx::Val( setBorderTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotateAndFlip") ) { return ::hx::Val( rotateAndFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"prepareMatrix") ) { return ::hx::Val( prepareMatrix_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fillBlitMatrix") ) { return ::hx::Val( fillBlitMatrix_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cacheFrameMatrix") ) { return ::hx::Val( cacheFrameMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkInputBitmap") ) { return ::hx::Val( checkInputBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDrawFrameRect") ) { return ::hx::Val( getDrawFrameRect_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareBlitMatrix") ) { return ::hx::Val( prepareBlitMatrix_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"paintRotatedAndFlipped") ) { return ::hx::Val( paintRotatedAndFlipped_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"prepareTransformedBlitMatrix") ) { return ::hx::Val( prepareTransformedBlitMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { outValue = ( _rect ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = ( _point ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { outValue = ( _matrix ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortFrames") ) { outValue = sortFrames_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sortHelper") ) { outValue = sortHelper_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sortByName") ) { outValue = sortByName_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkValidName") ) { outValue = checkValidName_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxFrame_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frame(inValue.Cast<  ::flixel::math::FlxRect >()) );frame=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { tileMatrix=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { blitMatrix=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast<  ::openfl::geom::Point >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("uv",61,66,00,00));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("sourceSize",3c,87,b7,74));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("tileMatrix",0f,0c,5f,20));
	outFields->push(HX_("blitMatrix",56,78,21,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFrame_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxFrame_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxFrame_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxFrame_obj,uv),HX_("uv",61,66,00,00)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxFrame_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsInt,(int)offsetof(FlxFrame_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxFrame_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxFrame_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxFrame_obj,sourceSize),HX_("sourceSize",3c,87,b7,74)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxFrame_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(int)offsetof(FlxFrame_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsInt,(int)offsetof(FlxFrame_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxFrame_obj,tileMatrix),HX_("tileMatrix",0f,0c,5f,20)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxFrame_obj,blitMatrix),HX_("blitMatrix",56,78,21,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxFrame_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(void *) &FlxFrame_obj::_point,HX_("_point",91,fb,76,c2)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlxFrame_obj::_rect,HX_("_rect",03,69,b8,fe)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(void *) &FlxFrame_obj::_matrix,HX_("_matrix",e0,47,3f,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxFrame_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("frame",2d,78,83,06),
	HX_("uv",61,66,00,00),
	HX_("parent",2a,05,7e,ed),
	HX_("angle",d3,43,e2,22),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("sourceSize",3c,87,b7,74),
	HX_("offset",93,97,3f,60),
	HX_("duration",54,0f,8e,14),
	HX_("type",ba,f2,08,4d),
	HX_("tileMatrix",0f,0c,5f,20),
	HX_("blitMatrix",56,78,21,d8),
	HX_("cacheFrameMatrix",2c,83,fa,88),
	HX_("prepareBlitMatrix",bd,dc,f9,4c),
	HX_("rotateAndFlip",09,24,e1,45),
	HX_("prepareTransformedBlitMatrix",fa,77,91,f4),
	HX_("prepareMatrix",28,9b,0e,82),
	HX_("fillBlitMatrix",b9,ac,6c,16),
	HX_("paint",9e,b7,4e,bd),
	HX_("paintRotatedAndFlipped",b6,a3,df,c7),
	HX_("checkInputBitmap",b1,8f,20,9b),
	HX_("getDrawFrameRect",d7,c8,6f,02),
	HX_("subFrameTo",68,95,dd,c4),
	HX_("setBorderTo",49,73,59,89),
	HX_("clipTo",6b,0c,58,0a),
	HX_("copyTo",90,1c,33,c9),
	HX_("destroy",fa,2c,86,24),
	HX_("toString",ac,d0,6e,38),
	HX_("set_frame",90,c0,7d,2d),
	::String(null()) };

static void FlxFrame_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrame_obj::_point,"_point");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::_rect,"_rect");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::_matrix,"_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxFrame_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::_point,"_point");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::_rect,"_rect");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::_matrix,"_matrix");
};

#endif

::hx::Class FlxFrame_obj::__mClass;

static ::String FlxFrame_obj_sStaticFields[] = {
	HX_("_point",91,fb,76,c2),
	HX_("_rect",03,69,b8,fe),
	HX_("_matrix",e0,47,3f,2a),
	HX_("sortFrames",a4,25,6b,09),
	HX_("sort",5e,27,58,4c),
	HX_("sortHelper",6c,f3,33,61),
	HX_("checkValidName",7f,2f,8c,9c),
	HX_("sortByName",c0,a1,33,6b),
	::String(null())
};

void FlxFrame_obj::__register()
{
	FlxFrame_obj _hx_dummy;
	FlxFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxFrame",f2,22,40,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxFrame_obj::__SetStatic;
	__mClass->mMarkFunc = FlxFrame_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxFrame_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFrame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxFrame_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxFrame_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_25_boot)
HXDLIN(  25)		_point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_30_boot)
HXDLIN(  30)		_rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_35_boot)
HXDLIN(  35)		_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
