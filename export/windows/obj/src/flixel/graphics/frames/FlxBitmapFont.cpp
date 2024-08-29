#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#include <_UnicodeString/UnicodeString_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxBitmapFont
#include <flixel/graphics/frames/FlxBitmapFont.h>
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
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFont
#include <flixel/graphics/frames/bmfont/BMFont.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_873f477e55df57ae_21_new,"flixel.graphics.frames.FlxBitmapFont","new",0x6c52b9eb,"flixel.graphics.frames.FlxBitmapFont.new","flixel/graphics/frames/FlxBitmapFont.hx",21,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_97_destroy,"flixel.graphics.frames.FlxBitmapFont","destroy",0xcd603805,"flixel.graphics.frames.FlxBitmapFont.destroy","flixel/graphics/frames/FlxBitmapFont.hx",97,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_441_addCharFrame,"flixel.graphics.frames.FlxBitmapFont","addCharFrame",0x12fb302b,"flixel.graphics.frames.FlxBitmapFont.addCharFrame","flixel/graphics/frames/FlxBitmapFont.hx",441,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_458_setCharFrame,"flixel.graphics.frames.FlxBitmapFont","setCharFrame",0x37f6ce8a,"flixel.graphics.frames.FlxBitmapFont.setCharFrame","flixel/graphics/frames/FlxBitmapFont.hx",458,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_478_updateSourceHeight,"flixel.graphics.frames.FlxBitmapFont","updateSourceHeight",0x2eb589a0,"flixel.graphics.frames.FlxBitmapFont.updateSourceHeight","flixel/graphics/frames/FlxBitmapFont.hx",478,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_487_charExists,"flixel.graphics.frames.FlxBitmapFont","charExists",0x5c03e327,"flixel.graphics.frames.FlxBitmapFont.charExists","flixel/graphics/frames/FlxBitmapFont.hx",487,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_492_getCharFrame,"flixel.graphics.frames.FlxBitmapFont","getCharFrame",0x22fdab16,"flixel.graphics.frames.FlxBitmapFont.getCharFrame","flixel/graphics/frames/FlxBitmapFont.hx",492,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_497_getCharAdvance,"flixel.graphics.frames.FlxBitmapFont","getCharAdvance",0xc4a787ab,"flixel.graphics.frames.FlxBitmapFont.getCharAdvance","flixel/graphics/frames/FlxBitmapFont.hx",497,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_502_getKerning,"flixel.graphics.frames.FlxBitmapFont","getKerning",0x279d6eab,"flixel.graphics.frames.FlxBitmapFont.getKerning","flixel/graphics/frames/FlxBitmapFont.hx",502,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_509_addKerningPair,"flixel.graphics.frames.FlxBitmapFont","addKerningPair",0x86d55cba,"flixel.graphics.frames.FlxBitmapFont.addKerningPair","flixel/graphics/frames/FlxBitmapFont.hx",509,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_518_getCharWidth,"flixel.graphics.frames.FlxBitmapFont","getCharWidth",0xe6dce8ef,"flixel.graphics.frames.FlxBitmapFont.getCharWidth","flixel/graphics/frames/FlxBitmapFont.hx",518,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_538_addBorder,"flixel.graphics.frames.FlxBitmapFont","addBorder",0x37f9a5b8,"flixel.graphics.frames.FlxBitmapFont.addBorder","flixel/graphics/frames/FlxBitmapFont.hx",538,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_111_getDefaultFont,"flixel.graphics.frames.FlxBitmapFont","getDefaultFont",0xc395e68f,"flixel.graphics.frames.FlxBitmapFont.getDefaultFont","flixel/graphics/frames/FlxBitmapFont.hx",111,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_166_fromAngelCode,"flixel.graphics.frames.FlxBitmapFont","fromAngelCode",0x6c02320f,"flixel.graphics.frames.FlxBitmapFont.fromAngelCode","flixel/graphics/frames/FlxBitmapFont.hx",166,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_200_fromXNA,"flixel.graphics.frames.FlxBitmapFont","fromXNA",0x00e02e6c,"flixel.graphics.frames.FlxBitmapFont.fromXNA","flixel/graphics/frames/FlxBitmapFont.hx",200,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_326_transformPoint,"flixel.graphics.frames.FlxBitmapFont","transformPoint",0x638a0b99,"flixel.graphics.frames.FlxBitmapFont.transformPoint","flixel/graphics/frames/FlxBitmapFont.hx",326,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_361_fromMonospace,"flixel.graphics.frames.FlxBitmapFont","fromMonospace",0xd0af7444,"flixel.graphics.frames.FlxBitmapFont.fromMonospace","flixel/graphics/frames/FlxBitmapFont.hx",361,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_522_findFont,"flixel.graphics.frames.FlxBitmapFont","findFont",0xac44093d,"flixel.graphics.frames.FlxBitmapFont.findFont","flixel/graphics/frames/FlxBitmapFont.hx",522,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_23_boot,"flixel.graphics.frames.FlxBitmapFont","boot",0x5428f447,"flixel.graphics.frames.FlxBitmapFont.boot","flixel/graphics/frames/FlxBitmapFont.hx",23,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_24_boot,"flixel.graphics.frames.FlxBitmapFont","boot",0x5428f447,"flixel.graphics.frames.FlxBitmapFont.boot","flixel/graphics/frames/FlxBitmapFont.hx",24,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_25_boot,"flixel.graphics.frames.FlxBitmapFont","boot",0x5428f447,"flixel.graphics.frames.FlxBitmapFont.boot","flixel/graphics/frames/FlxBitmapFont.hx",25,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_27_boot,"flixel.graphics.frames.FlxBitmapFont","boot",0x5428f447,"flixel.graphics.frames.FlxBitmapFont.boot","flixel/graphics/frames/FlxBitmapFont.hx",27,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_29_boot,"flixel.graphics.frames.FlxBitmapFont","boot",0x5428f447,"flixel.graphics.frames.FlxBitmapFont.boot","flixel/graphics/frames/FlxBitmapFont.hx",29,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_34_boot,"flixel.graphics.frames.FlxBitmapFont","boot",0x5428f447,"flixel.graphics.frames.FlxBitmapFont.boot","flixel/graphics/frames/FlxBitmapFont.hx",34,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_36_boot,"flixel.graphics.frames.FlxBitmapFont","boot",0x5428f447,"flixel.graphics.frames.FlxBitmapFont.boot","flixel/graphics/frames/FlxBitmapFont.hx",36,0xde348206)
HX_LOCAL_STACK_FRAME(_hx_pos_873f477e55df57ae_37_boot,"flixel.graphics.frames.FlxBitmapFont","boot",0x5428f447,"flixel.graphics.frames.FlxBitmapFont.boot","flixel/graphics/frames/FlxBitmapFont.hx",37,0xde348206)
namespace flixel{
namespace graphics{
namespace frames{

void FlxBitmapFont_obj::__construct( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_21_new)
HXLINE(  63)		this->spaceWidth = 0;
HXLINE(  58)		this->minOffsetX = 0;
HXLINE(  52)		this->numLetters = 0;
HXLINE(  48)		this->italic = false;
HXLINE(  46)		this->bold = false;
HXLINE(  44)		this->lineHeight = 0;
HXLINE(  42)		this->size = 0;
HXLINE(  87)		super::__construct(frame->parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::FONT_dyn(),border);
HXLINE(  88)		this->frame = frame;
HXLINE(  89)		this->parent->persist = true;
HXLINE(  90)		this->parent->set_destroyOnNoUse(false);
HXLINE(  91)		this->charMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  92)		this->charAdvance =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  93)		this->kerning =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic FlxBitmapFont_obj::__CreateEmpty() { return new FlxBitmapFont_obj; }

void *FlxBitmapFont_obj::_hx_vtable = 0;

Dynamic FlxBitmapFont_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBitmapFont_obj > _hx_result = new FlxBitmapFont_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxBitmapFont_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x29e94a3f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x29e94a3f;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

void FlxBitmapFont_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_97_destroy)
HXLINE(  98)		this->super::destroy();
HXLINE(  99)		this->frame = null();
HXLINE( 100)		this->fontName = null();
HXLINE( 101)		this->charMap = null();
HXLINE( 102)		this->charAdvance = null();
            	}


void FlxBitmapFont_obj::addCharFrame(int charCode, ::flixel::math::FlxRect frame, ::flixel::math::FlxBasePoint offset,int xAdvance){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_441_addCharFrame)
HXLINE( 442)		::String charName = ::String::fromCharCode(charCode);
HXLINE( 443)		bool _hx_tmp;
HXDLIN( 443)		bool _hx_tmp1;
HXDLIN( 443)		if ((frame->width != 0)) {
HXLINE( 443)			_hx_tmp1 = (frame->height == 0);
            		}
            		else {
HXLINE( 443)			_hx_tmp1 = true;
            		}
HXDLIN( 443)		if (!(_hx_tmp1)) {
HXLINE( 443)			_hx_tmp = ::hx::IsNotNull( ( ( ::flixel::graphics::frames::FlxFrame)(this->framesByName->get(charName)) ) );
            		}
            		else {
HXLINE( 443)			_hx_tmp = true;
            		}
HXDLIN( 443)		if (_hx_tmp) {
HXLINE( 444)			return;
            		}
HXLINE( 446)		this->setCharFrame(charCode,frame,xAdvance,offset);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapFont_obj,addCharFrame,(void))

void FlxBitmapFont_obj::setCharFrame(int charCode, ::flixel::math::FlxRect frame,int xAdvance, ::flixel::math::FlxBasePoint offset){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_458_setCharFrame)
HXLINE( 459)		::String charName = ::String::fromCharCode(charCode);
HXLINE( 460)		bool _hx_tmp;
HXDLIN( 460)		if ((frame->width != 0)) {
HXLINE( 460)			_hx_tmp = (frame->height == 0);
            		}
            		else {
HXLINE( 460)			_hx_tmp = true;
            		}
HXDLIN( 460)		if (_hx_tmp) {
HXLINE( 461)			 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 461)			::String data = ((((HX_("Invalid frame size: ",23,28,05,25) + ::Std_obj::string(frame)) + HX_(" for char \"",af,b8,c0,92)) + charName) + HX_("\" in font \"",ee,f8,27,6d));
HXDLIN( 461)			_this->advanced(((data + this->fontName) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            		}
HXLINE( 463)		 ::flixel::graphics::frames::FlxFrame charFrame = this->frame->subFrameTo(frame,null());
HXLINE( 465)		Float w;
HXDLIN( 465)		bool w1;
HXDLIN( 465)		if (::hx::IsNotNull( offset )) {
HXLINE( 465)			w1 = (offset->x > 0);
            		}
            		else {
HXLINE( 465)			w1 = false;
            		}
HXDLIN( 465)		if (w1) {
HXLINE( 465)			w = offset->x;
            		}
            		else {
HXLINE( 465)			w = ( (Float)(0) );
            		}
HXDLIN( 465)		Float w2 = (charFrame->sourceSize->x + w);
HXLINE( 466)		Float h;
HXDLIN( 466)		bool h1;
HXDLIN( 466)		if (::hx::IsNotNull( offset )) {
HXLINE( 466)			h1 = (offset->y > 0);
            		}
            		else {
HXLINE( 466)			h1 = false;
            		}
HXDLIN( 466)		if (h1) {
HXLINE( 466)			h = offset->y;
            		}
            		else {
HXLINE( 466)			h = ( (Float)(0) );
            		}
HXDLIN( 466)		Float h2 = (charFrame->sourceSize->y + h);
HXLINE( 467)		{
HXLINE( 467)			 ::flixel::math::FlxBasePoint this1 = charFrame->sourceSize;
HXDLIN( 467)			this1->set_x(w2);
HXDLIN( 467)			this1->set_y(h2);
            		}
HXLINE( 468)		if (::hx::IsNotNull( offset )) {
HXLINE( 469)			 ::flixel::math::FlxBasePoint this1 = charFrame->offset;
HXDLIN( 469)			{
HXLINE( 469)				Float y = offset->y;
HXDLIN( 469)				this1->set_x((this1->x + offset->x));
HXDLIN( 469)				this1->set_y((this1->y + y));
            			}
HXDLIN( 469)			if (offset->_weak) {
HXLINE( 469)				offset->put();
            			}
            		}
HXLINE( 470)		charFrame->name = charName;
HXLINE( 471)		this->pushFrame(charFrame,true);
HXLINE( 472)		this->charMap->set(charCode,charFrame);
HXLINE( 473)		this->charAdvance->set(charCode,xAdvance);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapFont_obj,setCharFrame,(void))

void FlxBitmapFont_obj::updateSourceHeight(){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_478_updateSourceHeight)
HXDLIN( 478)		int _g = 0;
HXDLIN( 478)		::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 478)		while((_g < _g1->length)){
HXDLIN( 478)			 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 478)			_g = (_g + 1);
HXLINE( 480)			frame->sourceSize->set_y(( (Float)(this->lineHeight) ));
HXLINE( 481)			frame->cacheFrameMatrix();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapFont_obj,updateSourceHeight,(void))

bool FlxBitmapFont_obj::charExists(int charCode){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_487_charExists)
HXDLIN( 487)		return this->charMap->exists(charCode);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapFont_obj,charExists,return )

 ::flixel::graphics::frames::FlxFrame FlxBitmapFont_obj::getCharFrame(int charCode){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_492_getCharFrame)
HXDLIN( 492)		return ( ( ::flixel::graphics::frames::FlxFrame)(this->charMap->get(charCode)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapFont_obj,getCharFrame,return )

int FlxBitmapFont_obj::getCharAdvance(int charCode){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_497_getCharAdvance)
HXDLIN( 497)		if (this->charAdvance->exists(charCode)) {
HXDLIN( 497)			return this->charAdvance->get_int(charCode);
            		}
            		else {
HXDLIN( 497)			return 0;
            		}
HXDLIN( 497)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapFont_obj,getCharAdvance,return )

int FlxBitmapFont_obj::getKerning(int prevCode,int nextCode){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_502_getKerning)
HXDLIN( 502)		bool _hx_tmp;
HXDLIN( 502)		if (this->kerning->exists(prevCode)) {
HXDLIN( 502)			_hx_tmp = ( ( ::haxe::ds::IntMap)(this->kerning->get(prevCode)) )->exists(nextCode);
            		}
            		else {
HXDLIN( 502)			_hx_tmp = false;
            		}
HXDLIN( 502)		if (_hx_tmp) {
HXLINE( 503)			return ( ( ::haxe::ds::IntMap)(this->kerning->get(prevCode)) )->get_int(nextCode);
            		}
            		else {
HXLINE( 505)			return 0;
            		}
HXLINE( 502)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapFont_obj,getKerning,return )

void FlxBitmapFont_obj::addKerningPair(int prevCode,int nextCode,int amount){
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_509_addKerningPair)
HXLINE( 510)		if (!(this->kerning->exists(prevCode))) {
HXLINE( 511)			::Dynamic this1 = this->kerning;
HXDLIN( 511)			( ( ::haxe::ds::IntMap)(this1) )->set(prevCode, ::haxe::ds::IntMap_obj::__alloc( HX_CTX ));
            		}
HXLINE( 513)		( ( ::haxe::ds::IntMap)(this->kerning->get(prevCode)) )->set(nextCode,amount);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapFont_obj,addKerningPair,(void))

Float FlxBitmapFont_obj::getCharWidth(int charCode){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_518_getCharWidth)
HXDLIN( 518)		if (this->charMap->exists(charCode)) {
HXDLIN( 518)			return ( ( ::flixel::graphics::frames::FlxFrame)(this->charMap->get(charCode)) )->sourceSize->x;
            		}
            		else {
HXDLIN( 518)			return ( (Float)(0) );
            		}
HXDLIN( 518)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapFont_obj,getCharWidth,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxBitmapFont_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_538_addBorder)
HXLINE( 539)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 539)		point->_inPool = false;
HXDLIN( 539)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 539)		point1->_weak = true;
HXDLIN( 539)		 ::flixel::math::FlxBasePoint this1 = point1;
HXDLIN( 539)		 ::flixel::math::FlxBasePoint point2 = this->border;
HXDLIN( 539)		{
HXLINE( 539)			Float y = point2->y;
HXDLIN( 539)			this1->set_x((this1->x + point2->x));
HXDLIN( 539)			this1->set_y((this1->y + y));
            		}
HXDLIN( 539)		if (point2->_weak) {
HXLINE( 539)			point2->put();
            		}
HXDLIN( 539)		 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 539)		{
HXLINE( 539)			Float y1 = border->y;
HXDLIN( 539)			this2->set_x((this2->x + border->x));
HXDLIN( 539)			this2->set_y((this2->y + y1));
            		}
HXDLIN( 539)		if (border->_weak) {
HXLINE( 539)			border->put();
            		}
HXDLIN( 539)		 ::flixel::math::FlxBasePoint resultBorder = this2;
HXLINE( 541)		 ::flixel::graphics::frames::FlxBitmapFont font = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(this->frame,resultBorder);
HXLINE( 542)		if (::hx::IsNotNull( font )) {
HXLINE( 544)			return font;
            		}
HXLINE( 547)		font =  ::flixel::graphics::frames::FlxBitmapFont_obj::__alloc( HX_CTX ,this->frame,border);
HXLINE( 548)		font->spaceWidth = this->spaceWidth;
HXLINE( 549)		font->fontName = this->fontName;
HXLINE( 550)		font->numLetters = this->numLetters;
HXLINE( 551)		font->minOffsetX = this->minOffsetX;
HXLINE( 552)		font->size = this->size;
HXLINE( 553)		font->lineHeight = this->lineHeight;
HXLINE( 554)		font->italic = this->italic;
HXLINE( 555)		font->bold = this->bold;
HXLINE( 557)		 ::flixel::graphics::frames::FlxFrame charWithBorder;
HXLINE( 558)		int code;
HXLINE( 559)		{
HXLINE( 559)			int _g = 0;
HXDLIN( 559)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 559)			while((_g < _g1->length)){
HXLINE( 559)				 ::flixel::graphics::frames::FlxFrame _hx_char = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 559)				_g = (_g + 1);
HXLINE( 561)				charWithBorder = _hx_char->setBorderTo(border,null());
HXLINE( 562)				font->pushFrame(charWithBorder,null());
HXLINE( 563)				code = ( (int)(::_UnicodeString::UnicodeString_Impl__obj::charCodeAt(_hx_char->name,0)) );
HXLINE( 564)				font->charMap->set(code,charWithBorder);
HXLINE( 565)				{
HXLINE( 565)					::Dynamic this1 = font->charAdvance;
HXDLIN( 565)					( ( ::haxe::ds::IntMap)(this1) )->set(code,this->charAdvance->get_int(code));
            				}
            			}
            		}
HXLINE( 568)		font->updateSourceHeight();
HXLINE( 569)		return font;
            	}


int FlxBitmapFont_obj::SPACE_CODE;

int FlxBitmapFont_obj::TAB_CODE;

int FlxBitmapFont_obj::NEW_LINE_CODE;

::String FlxBitmapFont_obj::DEFAULT_FONT_KEY;

::String FlxBitmapFont_obj::DEFAULT_FONT_DATA;

::String FlxBitmapFont_obj::DEFAULT_CHARS;

 ::openfl::geom::Point FlxBitmapFont_obj::point;

 ::openfl::geom::Rectangle FlxBitmapFont_obj::flashRect;

 ::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::getDefaultFont(){
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_111_getDefaultFont)
HXLINE( 112)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(HX_("DEFAULT_FONT_KEY",6d,52,ec,bd))) );
HXLINE( 113)		if (::hx::IsNotNull( graphic )) {
HXLINE( 115)			 ::flixel::graphics::frames::FlxBitmapFont font = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(graphic->get_imageFrame()->get_frame(),null());
HXLINE( 116)			if (::hx::IsNotNull( font )) {
HXLINE( 117)				return font;
            			}
            		}
HXLINE( 120)		::String letters = HX_("",00,00,00,00);
HXLINE( 121)		 ::openfl::display::BitmapData bd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,700,9,true,-7829368);
HXLINE( 122)		graphic = ::flixel::FlxG_obj::bitmap->add(bd,false,HX_("DEFAULT_FONT_KEY",6d,52,ec,bd));
HXLINE( 124)		int letterPos = 0;
HXLINE( 125)		int i = 0;
HXLINE( 127)		while((i < HX_(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000",b9,ed,10,8a).length)){
HXLINE( 129)			HX_(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000",b9,ed,10,8a).substr(i,1);
HXLINE( 131)			i = (i + 1);
HXDLIN( 131)			int gw = ( (int)(::Std_obj::parseInt(HX_(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000",b9,ed,10,8a).substr(i,1))) );
HXLINE( 132)			i = (i + 1);
HXDLIN( 132)			int gh = ( (int)(::Std_obj::parseInt(HX_(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000",b9,ed,10,8a).substr(i,1))) );
HXLINE( 134)			{
HXLINE( 134)				int _g = 0;
HXDLIN( 134)				int _g1 = gh;
HXDLIN( 134)				while((_g < _g1)){
HXLINE( 134)					_g = (_g + 1);
HXDLIN( 134)					int py = (_g - 1);
HXLINE( 136)					{
HXLINE( 136)						int _g1 = 0;
HXDLIN( 136)						int _g2 = gw;
HXDLIN( 136)						while((_g1 < _g2)){
HXLINE( 136)							_g1 = (_g1 + 1);
HXDLIN( 136)							int px = (_g1 - 1);
HXLINE( 138)							i = (i + 1);
HXLINE( 140)							if ((HX_(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000",b9,ed,10,8a).substr(i,1) == HX_("1",31,00,00,00))) {
HXLINE( 142)								bd->setPixel32(((1 + (letterPos * 7)) + px),(1 + py),-1);
            							}
            							else {
HXLINE( 146)								bd->setPixel32(((1 + (letterPos * 7)) + px),(1 + py),0);
            							}
            						}
            					}
            				}
            			}
HXLINE( 151)			i = (i + 1);
HXLINE( 152)			letterPos = (letterPos + 1);
            		}
HXLINE( 155)		return ::flixel::graphics::frames::FlxBitmapFont_obj::fromXNA(graphic,letters,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapFont_obj,getDefaultFont,return )

 ::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::fromAngelCode( ::Dynamic source, ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_166_fromAngelCode)
HXLINE( 167)		 ::flixel::graphics::frames::FlxFrame frame = null();
HXLINE( 169)		if (::Std_obj::isOfType(source,::hx::ClassOf< ::flixel::graphics::frames::FlxFrame >())) {
HXLINE( 171)			frame = ( ( ::flixel::graphics::frames::FlxFrame)(source) );
            		}
            		else {
HXLINE( 175)			 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 176)			frame = graphic->get_imageFrame()->get_frame();
            		}
HXLINE( 179)		 ::flixel::graphics::frames::FlxBitmapFont font = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(frame,null());
HXLINE( 180)		if (::hx::IsNotNull( font )) {
HXLINE( 181)			return font;
            		}
HXLINE( 183)		 ::flixel::graphics::frames::FlxBitmapFont font1 =  ::flixel::graphics::frames::FlxBitmapFont_obj::__alloc( HX_CTX ,frame,null());
HXLINE( 184)		 ::flixel::graphics::frames::bmfont::BMFont fontInfo = ::flixel::graphics::frames::bmfont::BMFont_obj::parse(data);
HXLINE( 185)		return fontInfo->initBitmapFont(font1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapFont_obj,fromAngelCode,return )

 ::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::fromXNA( ::Dynamic source,::String letters,::hx::Null< int >  __o_charBGColor){
            		int charBGColor = __o_charBGColor.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_200_fromXNA)
HXLINE( 201)		 ::flixel::graphics::FlxGraphic graphic = null();
HXLINE( 202)		 ::flixel::graphics::frames::FlxFrame frame = null();
HXLINE( 204)		if (::Std_obj::isOfType(source,::hx::ClassOf< ::flixel::graphics::frames::FlxFrame >())) {
HXLINE( 206)			frame = ( ( ::flixel::graphics::frames::FlxFrame)(source) );
HXLINE( 207)			graphic = frame->parent;
            		}
            		else {
HXLINE( 211)			graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 212)			frame = graphic->get_imageFrame()->get_frame();
            		}
HXLINE( 215)		 ::flixel::graphics::frames::FlxBitmapFont font = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(frame,null());
HXLINE( 216)		if (::hx::IsNotNull( font )) {
HXLINE( 217)			return font;
            		}
HXLINE( 219)		if (::hx::IsNull( letters )) {
HXLINE( 219)			letters = HX_(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~",6f,61,48,0a);
            		}
HXLINE( 220)		font =  ::flixel::graphics::frames::FlxBitmapFont_obj::__alloc( HX_CTX ,frame,null());
HXLINE( 221)		font->fontName = graphic->key;
HXLINE( 223)		 ::openfl::display::BitmapData bmd = graphic->bitmap;
HXLINE( 225)		 ::openfl::geom::Point p =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 226)		p->setTo(( (Float)(0) ),( (Float)(0) ));
HXLINE( 227)		{
HXLINE( 227)			Float x = p->x;
HXDLIN( 227)			Float y = p->y;
HXDLIN( 227)			if ((frame->angle == -90)) {
HXLINE( 227)				p->x = (frame->frame->width - y);
HXDLIN( 227)				p->y = x;
            			}
            			else {
HXLINE( 227)				if ((frame->angle == 90)) {
HXLINE( 227)					p->x = y;
HXDLIN( 227)					p->y = (frame->frame->height - x);
            				}
            			}
HXDLIN( 227)			 ::openfl::geom::Point p1 = p;
HXDLIN( 227)			p1->x = (p1->x + frame->frame->x);
HXDLIN( 227)			 ::openfl::geom::Point p2 = p;
HXDLIN( 227)			p2->y = (p2->y + frame->frame->y);
            		}
HXLINE( 228)		int globalBGColor = ::Std_obj::_hx_int(p->x);
HXDLIN( 228)		int globalBGColor1 = bmd->getPixel(globalBGColor,::Std_obj::_hx_int(p->y));
HXLINE( 230)		int frameWidth = ::Std_obj::_hx_int(frame->frame->width);
HXLINE( 231)		int frameHeight = ::Std_obj::_hx_int(frame->frame->height);
HXLINE( 232)		int letterIdx = 0;
HXLINE( 233)		int numLetters = ::_UnicodeString::UnicodeString_Impl__obj::get_length(letters);
HXLINE( 235)		int cy = 0;
HXLINE( 236)		while(true){
HXLINE( 236)			bool _hx_tmp;
HXDLIN( 236)			if ((cy < frameHeight)) {
HXLINE( 236)				_hx_tmp = (letterIdx < numLetters);
            			}
            			else {
HXLINE( 236)				_hx_tmp = false;
            			}
HXDLIN( 236)			if (!(_hx_tmp)) {
HXLINE( 236)				goto _hx_goto_19;
            			}
HXLINE( 238)			int rowHeight = 0;
HXLINE( 239)			int cx = 0;
HXLINE( 241)			while(true){
HXLINE( 241)				bool _hx_tmp;
HXDLIN( 241)				if ((cx < frameWidth)) {
HXLINE( 241)					_hx_tmp = (letterIdx < numLetters);
            				}
            				else {
HXLINE( 241)					_hx_tmp = false;
            				}
HXDLIN( 241)				if (!(_hx_tmp)) {
HXLINE( 241)					goto _hx_goto_20;
            				}
HXLINE( 243)				p->setTo(( (Float)(cx) ),( (Float)(cy) ));
HXLINE( 244)				{
HXLINE( 244)					Float x = p->x;
HXDLIN( 244)					Float y = p->y;
HXDLIN( 244)					if ((frame->angle == -90)) {
HXLINE( 244)						p->x = (frame->frame->width - y);
HXDLIN( 244)						p->y = x;
            					}
            					else {
HXLINE( 244)						if ((frame->angle == 90)) {
HXLINE( 244)							p->x = y;
HXDLIN( 244)							p->y = (frame->frame->height - x);
            						}
            					}
HXDLIN( 244)					 ::openfl::geom::Point p1 = p;
HXDLIN( 244)					p1->x = (p1->x + frame->frame->x);
HXDLIN( 244)					 ::openfl::geom::Point p2 = p;
HXDLIN( 244)					p2->y = (p2->y + frame->frame->y);
            				}
HXLINE( 246)				int _hx_tmp1 = ::Std_obj::_hx_int(p->x);
HXDLIN( 246)				if ((bmd->getPixel(_hx_tmp1,::Std_obj::_hx_int(p->y)) != globalBGColor1)) {
HXLINE( 249)					int gx = cx;
HXLINE( 250)					int gy = cy;
HXLINE( 252)					p->setTo(( (Float)(gx) ),( (Float)(gy) ));
HXLINE( 253)					{
HXLINE( 253)						Float x = p->x;
HXDLIN( 253)						Float y = p->y;
HXDLIN( 253)						if ((frame->angle == -90)) {
HXLINE( 253)							p->x = (frame->frame->width - y);
HXDLIN( 253)							p->y = x;
            						}
            						else {
HXLINE( 253)							if ((frame->angle == 90)) {
HXLINE( 253)								p->x = y;
HXDLIN( 253)								p->y = (frame->frame->height - x);
            							}
            						}
HXDLIN( 253)						 ::openfl::geom::Point p1 = p;
HXDLIN( 253)						p1->x = (p1->x + frame->frame->x);
HXDLIN( 253)						 ::openfl::geom::Point p2 = p;
HXDLIN( 253)						p2->y = (p2->y + frame->frame->y);
            					}
HXLINE( 256)					while(true){
HXLINE( 256)						bool _hx_tmp;
HXDLIN( 256)						if ((gx < frameWidth)) {
HXLINE( 256)							int _hx_tmp1 = ::Std_obj::_hx_int(p->x);
HXDLIN( 256)							_hx_tmp = (bmd->getPixel(_hx_tmp1,::Std_obj::_hx_int(p->y)) != globalBGColor1);
            						}
            						else {
HXLINE( 256)							_hx_tmp = false;
            						}
HXDLIN( 256)						if (!(_hx_tmp)) {
HXLINE( 256)							goto _hx_goto_21;
            						}
HXLINE( 258)						gx = (gx + 1);
HXLINE( 259)						p->setTo(( (Float)(gx) ),( (Float)(cy) ));
HXLINE( 260)						{
HXLINE( 260)							Float x = p->x;
HXDLIN( 260)							Float y = p->y;
HXDLIN( 260)							if ((frame->angle == -90)) {
HXLINE( 260)								p->x = (frame->frame->width - y);
HXDLIN( 260)								p->y = x;
            							}
            							else {
HXLINE( 260)								if ((frame->angle == 90)) {
HXLINE( 260)									p->x = y;
HXDLIN( 260)									p->y = (frame->frame->height - x);
            								}
            							}
HXDLIN( 260)							 ::openfl::geom::Point p1 = p;
HXDLIN( 260)							p1->x = (p1->x + frame->frame->x);
HXDLIN( 260)							 ::openfl::geom::Point p2 = p;
HXDLIN( 260)							p2->y = (p2->y + frame->frame->y);
            						}
            					}
            					_hx_goto_21:;
HXLINE( 263)					p->setTo(( (Float)((gx - 1)) ),( (Float)(gy) ));
HXLINE( 264)					{
HXLINE( 264)						Float x1 = p->x;
HXDLIN( 264)						Float y1 = p->y;
HXDLIN( 264)						if ((frame->angle == -90)) {
HXLINE( 264)							p->x = (frame->frame->width - y1);
HXDLIN( 264)							p->y = x1;
            						}
            						else {
HXLINE( 264)							if ((frame->angle == 90)) {
HXLINE( 264)								p->x = y1;
HXDLIN( 264)								p->y = (frame->frame->height - x1);
            							}
            						}
HXDLIN( 264)						 ::openfl::geom::Point p3 = p;
HXDLIN( 264)						p3->x = (p3->x + frame->frame->x);
HXDLIN( 264)						 ::openfl::geom::Point p4 = p;
HXDLIN( 264)						p4->y = (p4->y + frame->frame->y);
            					}
HXLINE( 266)					while(true){
HXLINE( 266)						bool _hx_tmp;
HXDLIN( 266)						if ((gy < frameHeight)) {
HXLINE( 266)							int _hx_tmp1 = ::Std_obj::_hx_int(p->x);
HXDLIN( 266)							_hx_tmp = (bmd->getPixel(_hx_tmp1,::Std_obj::_hx_int(p->y)) != globalBGColor1);
            						}
            						else {
HXLINE( 266)							_hx_tmp = false;
            						}
HXDLIN( 266)						if (!(_hx_tmp)) {
HXLINE( 266)							goto _hx_goto_22;
            						}
HXLINE( 268)						gy = (gy + 1);
HXLINE( 269)						p->setTo(( (Float)(cx) ),( (Float)(gy) ));
HXLINE( 270)						{
HXLINE( 270)							Float x = p->x;
HXDLIN( 270)							Float y = p->y;
HXDLIN( 270)							if ((frame->angle == -90)) {
HXLINE( 270)								p->x = (frame->frame->width - y);
HXDLIN( 270)								p->y = x;
            							}
            							else {
HXLINE( 270)								if ((frame->angle == 90)) {
HXLINE( 270)									p->x = y;
HXDLIN( 270)									p->y = (frame->frame->height - x);
            								}
            							}
HXDLIN( 270)							 ::openfl::geom::Point p1 = p;
HXDLIN( 270)							p1->x = (p1->x + frame->frame->x);
HXDLIN( 270)							 ::openfl::geom::Point p2 = p;
HXDLIN( 270)							p2->y = (p2->y + frame->frame->y);
            						}
            					}
            					_hx_goto_22:;
HXLINE( 273)					int gw = (gx - cx);
HXLINE( 274)					int gh = (gy - cy);
HXLINE( 276)					 ::Dynamic charCode = ::_UnicodeString::UnicodeString_Impl__obj::charCodeAt(letters,letterIdx);
HXLINE( 277)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 277)					_this->x = ( (Float)(cx) );
HXDLIN( 277)					_this->y = ( (Float)(cy) );
HXDLIN( 277)					_this->width = ( (Float)(gw) );
HXDLIN( 277)					_this->height = ( (Float)(gh) );
HXDLIN( 277)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 277)					rect->_inPool = false;
HXDLIN( 277)					 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 278)					int xAdvance = gw;
HXLINE( 280)					font->addCharFrame(( (int)(charCode) ),rect1,null(),xAdvance);
HXLINE( 282)					if (::hx::IsEq( charCode,32 )) {
HXLINE( 284)						font->spaceWidth = xAdvance;
            					}
HXLINE( 288)					if ((gh > rowHeight)) {
HXLINE( 289)						rowHeight = gh;
            					}
HXLINE( 290)					if ((gh > font->size)) {
HXLINE( 291)						font->size = gh;
            					}
HXLINE( 294)					cx = (cx + gw);
HXLINE( 295)					letterIdx = (letterIdx + 1);
            				}
HXLINE( 298)				cx = (cx + 1);
            			}
            			_hx_goto_20:;
HXLINE( 302)			cy = (cy + (rowHeight + 1));
            		}
            		_hx_goto_19:;
HXLINE( 305)		font->lineHeight = font->size;
HXLINE( 306)		font->updateSourceHeight();
HXLINE( 309)		 ::openfl::geom::Point _hx_tmp = ::flixel::graphics::frames::FlxBitmapFont_obj::point;
HXDLIN( 309)		int _hx_tmp1 = ::Std_obj::_hx_int(frame->frame->x);
HXDLIN( 309)		_hx_tmp->setTo(( (Float)(_hx_tmp1) ),( (Float)(::Std_obj::_hx_int(frame->frame->y)) ));
HXLINE( 311)		 ::openfl::geom::Rectangle frameRect = ::flixel::graphics::frames::FlxBitmapFont_obj::flashRect;
HXLINE( 312)		{
HXLINE( 312)			 ::flixel::math::FlxRect _this = frame->frame;
HXDLIN( 312)			 ::openfl::geom::Rectangle FlashRect = frameRect;
HXDLIN( 312)			if (::hx::IsNull( FlashRect )) {
HXLINE( 312)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 312)			FlashRect->x = _this->x;
HXDLIN( 312)			FlashRect->y = _this->y;
HXDLIN( 312)			FlashRect->width = _this->width;
HXDLIN( 312)			FlashRect->height = _this->height;
            		}
HXLINE( 314)		int bgColor32 = ::Std_obj::_hx_int(frame->frame->x);
HXDLIN( 314)		int bgColor321 = bmd->getPixel32(bgColor32,::Std_obj::_hx_int(frame->frame->y));
HXLINE( 315)		bmd->threshold(bmd,frameRect,::flixel::graphics::frames::FlxBitmapFont_obj::point,HX_("==",60,35,00,00),bgColor321,0,-1,true);
HXLINE( 317)		if ((charBGColor != 0)) {
HXLINE( 319)			bmd->threshold(bmd,frameRect,::flixel::graphics::frames::FlxBitmapFont_obj::point,HX_("==",60,35,00,00),charBGColor,0,-1,true);
            		}
HXLINE( 322)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapFont_obj,fromXNA,return )

 ::openfl::geom::Point FlxBitmapFont_obj::transformPoint( ::openfl::geom::Point point, ::flixel::graphics::frames::FlxFrame frame){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_326_transformPoint)
HXLINE( 327)		Float x = point->x;
HXLINE( 328)		Float y = point->y;
HXLINE( 330)		if ((frame->angle == -90)) {
HXLINE( 332)			point->x = (frame->frame->width - y);
HXLINE( 333)			point->y = x;
            		}
            		else {
HXLINE( 335)			if ((frame->angle == 90)) {
HXLINE( 337)				point->x = y;
HXLINE( 338)				point->y = (frame->frame->height - x);
            			}
            		}
HXLINE( 341)		 ::openfl::geom::Point point1 = point;
HXDLIN( 341)		point1->x = (point1->x + frame->frame->x);
HXLINE( 342)		 ::openfl::geom::Point point2 = point;
HXDLIN( 342)		point2->y = (point2->y + frame->frame->y);
HXLINE( 343)		return point;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapFont_obj,transformPoint,return )

 ::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::fromMonospace( ::Dynamic source,::String letters, ::flixel::math::FlxBasePoint charSize, ::flixel::math::FlxRect region, ::flixel::math::FlxBasePoint spacing){
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_361_fromMonospace)
HXLINE( 362)		 ::flixel::graphics::FlxGraphic graphic = null();
HXLINE( 363)		 ::flixel::graphics::frames::FlxFrame frame = null();
HXLINE( 365)		if (::Std_obj::isOfType(source,::hx::ClassOf< ::flixel::graphics::frames::FlxFrame >())) {
HXLINE( 367)			frame = ( ( ::flixel::graphics::frames::FlxFrame)(source) );
HXLINE( 368)			graphic = frame->parent;
            		}
            		else {
HXLINE( 372)			graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 373)			frame = graphic->get_imageFrame()->get_frame();
            		}
HXLINE( 376)		 ::flixel::graphics::frames::FlxBitmapFont font = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(frame,null());
HXLINE( 377)		if (::hx::IsNotNull( font )) {
HXLINE( 378)			return font;
            		}
HXLINE( 380)		if (::hx::IsNull( letters )) {
HXLINE( 380)			letters = HX_(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~",6f,61,48,0a);
            		}
HXLINE( 381)		if (::hx::IsNull( region )) {
HXLINE( 381)			Float Width = frame->sourceSize->x;
HXDLIN( 381)			Float Height = frame->sourceSize->y;
HXDLIN( 381)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 381)			_this->x = ( (Float)(0) );
HXDLIN( 381)			_this->y = ( (Float)(0) );
HXDLIN( 381)			_this->width = Width;
HXDLIN( 381)			_this->height = Height;
HXDLIN( 381)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 381)			rect->_inPool = false;
HXDLIN( 381)			 ::flixel::math::FlxRect rect1 = rect;
HXDLIN( 381)			rect1->_weak = true;
HXDLIN( 381)			region = rect1;
            		}
HXLINE( 382)		if (::hx::IsNull( spacing )) {
HXLINE( 382)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(0,0);
HXDLIN( 382)			point->_inPool = false;
HXDLIN( 382)			spacing = point;
            		}
HXLINE( 384)		int bitmapWidth = ::Std_obj::_hx_int(region->width);
HXLINE( 385)		int bitmapHeight = ::Std_obj::_hx_int(region->height);
HXLINE( 387)		int startX = ::Std_obj::_hx_int(region->x);
HXLINE( 388)		int startY = ::Std_obj::_hx_int(region->y);
HXLINE( 390)		if (region->_weak) {
HXLINE( 390)			if (!(region->_inPool)) {
HXLINE( 390)				region->_inPool = true;
HXDLIN( 390)				region->_weak = false;
HXDLIN( 390)				::flixel::math::FlxRect_obj::_pool->putUnsafe(region);
            			}
            		}
HXLINE( 392)		int xSpacing = ::Std_obj::_hx_int(spacing->x);
HXLINE( 393)		int ySpacing = ::Std_obj::_hx_int(spacing->y);
HXLINE( 395)		int charWidth = ::Std_obj::_hx_int(charSize->x);
HXLINE( 396)		int charHeight = ::Std_obj::_hx_int(charSize->y);
HXLINE( 398)		int spacedWidth = (charWidth + xSpacing);
HXLINE( 399)		int spacedHeight = (charHeight + ySpacing);
HXLINE( 401)		int numRows;
HXDLIN( 401)		if ((charHeight == 0)) {
HXLINE( 401)			numRows = 1;
            		}
            		else {
HXLINE( 401)			numRows = ::Std_obj::_hx_int((( (Float)((bitmapHeight + ySpacing)) ) / ( (Float)(spacedHeight) )));
            		}
HXLINE( 402)		int numCols;
HXDLIN( 402)		if ((charWidth == 0)) {
HXLINE( 402)			numCols = 1;
            		}
            		else {
HXLINE( 402)			numCols = ::Std_obj::_hx_int((( (Float)((bitmapWidth + xSpacing)) ) / ( (Float)(spacedWidth) )));
            		}
HXLINE( 404)		font =  ::flixel::graphics::frames::FlxBitmapFont_obj::__alloc( HX_CTX ,frame,null());
HXLINE( 405)		font->fontName = graphic->key;
HXLINE( 406)		font->lineHeight = (font->size = charHeight);
HXLINE( 408)		int xAdvance = charWidth;
HXLINE( 409)		font->spaceWidth = xAdvance;
HXLINE( 410)		int letterIndex = 0;
HXLINE( 411)		int numLetters = ::_UnicodeString::UnicodeString_Impl__obj::get_length(letters);
HXLINE( 413)		{
HXLINE( 413)			int _g = 0;
HXDLIN( 413)			int _g1 = numRows;
HXDLIN( 413)			while((_g < _g1)){
HXLINE( 413)				_g = (_g + 1);
HXDLIN( 413)				int j = (_g - 1);
HXLINE( 415)				{
HXLINE( 415)					int _g1 = 0;
HXDLIN( 415)					int _g2 = numCols;
HXDLIN( 415)					while((_g1 < _g2)){
HXLINE( 415)						_g1 = (_g1 + 1);
HXDLIN( 415)						int i = (_g1 - 1);
HXLINE( 417)						 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 417)						_this->x = ( (Float)((startX + (i * spacedWidth))) );
HXDLIN( 417)						_this->y = ( (Float)((startY + (j * spacedHeight))) );
HXDLIN( 417)						_this->width = ( (Float)(charWidth) );
HXDLIN( 417)						_this->height = ( (Float)(charHeight) );
HXDLIN( 417)						 ::flixel::math::FlxRect rect = _this;
HXDLIN( 417)						rect->_inPool = false;
HXDLIN( 417)						 ::flixel::math::FlxRect charRect = rect;
HXLINE( 418)						font->addCharFrame(( (int)(::_UnicodeString::UnicodeString_Impl__obj::charCodeAt(letters,letterIndex)) ),charRect,null(),xAdvance);
HXLINE( 419)						letterIndex = (letterIndex + 1);
HXLINE( 421)						if ((letterIndex >= numLetters)) {
HXLINE( 423)							return font;
            						}
            					}
            				}
            			}
            		}
HXLINE( 428)		font->updateSourceHeight();
HXLINE( 429)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapFont_obj,fromMonospace,return )

 ::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::findFont( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_522_findFont)
HXLINE( 523)		if (::hx::IsNull( border )) {
HXLINE( 524)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 524)			point->_inPool = false;
HXDLIN( 524)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 524)			point1->_weak = true;
HXDLIN( 524)			border = point1;
            		}
HXLINE( 526)		 ::flixel::graphics::FlxGraphic _this = frame->parent;
HXDLIN( 526)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::FONT_dyn();
HXDLIN( 526)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(_this->frameCollections->get(type)) );
HXDLIN( 526)		if (::hx::IsNull( collections )) {
HXLINE( 526)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 526)			_this->frameCollections->set(type,collections);
            		}
HXDLIN( 526)		::Array< ::Dynamic> bitmapFonts = collections;
HXLINE( 527)		{
HXLINE( 527)			int _g = 0;
HXDLIN( 527)			while((_g < bitmapFonts->length)){
HXLINE( 527)				 ::flixel::graphics::frames::FlxBitmapFont font = bitmapFonts->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxBitmapFont >();
HXDLIN( 527)				_g = (_g + 1);
HXLINE( 529)				bool _hx_tmp;
HXDLIN( 529)				if (::hx::IsInstanceEq( font->frame,frame )) {
HXLINE( 529)					 ::flixel::math::FlxBasePoint _this = font->border;
HXDLIN( 529)					bool result;
HXDLIN( 529)					if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 529)						result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            					}
            					else {
HXLINE( 529)						result = false;
            					}
HXDLIN( 529)					if (border->_weak) {
HXLINE( 529)						border->put();
            					}
HXDLIN( 529)					_hx_tmp = result;
            				}
            				else {
HXLINE( 529)					_hx_tmp = false;
            				}
HXDLIN( 529)				if (_hx_tmp) {
HXLINE( 531)					return font;
            				}
            			}
            		}
HXLINE( 534)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapFont_obj,findFont,return )


::hx::ObjectPtr< FlxBitmapFont_obj > FlxBitmapFont_obj::__new( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxBitmapFont_obj > __this = new FlxBitmapFont_obj();
	__this->__construct(frame,border);
	return __this;
}

::hx::ObjectPtr< FlxBitmapFont_obj > FlxBitmapFont_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border) {
	FlxBitmapFont_obj *__this = (FlxBitmapFont_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBitmapFont_obj), true, "flixel.graphics.frames.FlxBitmapFont"));
	*(void **)__this = FlxBitmapFont_obj::_hx_vtable;
	__this->__construct(frame,border);
	return __this;
}

FlxBitmapFont_obj::FlxBitmapFont_obj()
{
}

void FlxBitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBitmapFont);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(lineHeight,"lineHeight");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(numLetters,"numLetters");
	HX_MARK_MEMBER_NAME(minOffsetX,"minOffsetX");
	HX_MARK_MEMBER_NAME(spaceWidth,"spaceWidth");
	HX_MARK_MEMBER_NAME(charMap,"charMap");
	HX_MARK_MEMBER_NAME(charAdvance,"charAdvance");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_MEMBER_NAME(frame,"frame");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(lineHeight,"lineHeight");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(numLetters,"numLetters");
	HX_VISIT_MEMBER_NAME(minOffsetX,"minOffsetX");
	HX_VISIT_MEMBER_NAME(spaceWidth,"spaceWidth");
	HX_VISIT_MEMBER_NAME(charMap,"charMap");
	HX_VISIT_MEMBER_NAME(charAdvance,"charAdvance");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxBitmapFont_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return ::hx::Val( italic ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charMap") ) { return ::hx::Val( charMap ); }
		if (HX_FIELD_EQ(inName,"kerning") ) { return ::hx::Val( kerning ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return ::hx::Val( fontName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineHeight") ) { return ::hx::Val( lineHeight ); }
		if (HX_FIELD_EQ(inName,"numLetters") ) { return ::hx::Val( numLetters ); }
		if (HX_FIELD_EQ(inName,"minOffsetX") ) { return ::hx::Val( minOffsetX ); }
		if (HX_FIELD_EQ(inName,"spaceWidth") ) { return ::hx::Val( spaceWidth ); }
		if (HX_FIELD_EQ(inName,"charExists") ) { return ::hx::Val( charExists_dyn() ); }
		if (HX_FIELD_EQ(inName,"getKerning") ) { return ::hx::Val( getKerning_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"charAdvance") ) { return ::hx::Val( charAdvance ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addCharFrame") ) { return ::hx::Val( addCharFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCharFrame") ) { return ::hx::Val( setCharFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCharFrame") ) { return ::hx::Val( getCharFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCharWidth") ) { return ::hx::Val( getCharWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCharAdvance") ) { return ::hx::Val( getCharAdvance_dyn() ); }
		if (HX_FIELD_EQ(inName,"addKerningPair") ) { return ::hx::Val( addKerningPair_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateSourceHeight") ) { return ::hx::Val( updateSourceHeight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxBitmapFont_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = ( point ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromXNA") ) { outValue = fromXNA_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flashRect") ) { outValue = ( flashRect ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromAngelCode") ) { outValue = fromAngelCode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromMonospace") ) { outValue = fromMonospace_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDefaultFont") ) { outValue = getDefaultFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { outValue = transformPoint_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxBitmapFont_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charMap") ) { charMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineHeight") ) { lineHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { numLetters=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minOffsetX") ) { minOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spaceWidth") ) { spaceWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"charAdvance") ) { charAdvance=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBitmapFont_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast<  ::openfl::geom::Point >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flashRect") ) { flashRect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
	}
	return false;
}

void FlxBitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("lineHeight",fb,02,f4,d6));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("fontName",ba,8f,7d,cb));
	outFields->push(HX_("numLetters",27,db,ae,34));
	outFields->push(HX_("minOffsetX",f3,55,1c,9d));
	outFields->push(HX_("spaceWidth",60,8b,97,2b));
	outFields->push(HX_("charMap",66,cd,5d,cf));
	outFields->push(HX_("charAdvance",4c,f8,90,16));
	outFields->push(HX_("kerning",cc,ba,37,b0));
	outFields->push(HX_("frame",2d,78,83,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBitmapFont_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxBitmapFont_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsInt,(int)offsetof(FlxBitmapFont_obj,lineHeight),HX_("lineHeight",fb,02,f4,d6)},
	{::hx::fsBool,(int)offsetof(FlxBitmapFont_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsBool,(int)offsetof(FlxBitmapFont_obj,italic),HX_("italic",f0,2e,64,06)},
	{::hx::fsString,(int)offsetof(FlxBitmapFont_obj,fontName),HX_("fontName",ba,8f,7d,cb)},
	{::hx::fsInt,(int)offsetof(FlxBitmapFont_obj,numLetters),HX_("numLetters",27,db,ae,34)},
	{::hx::fsInt,(int)offsetof(FlxBitmapFont_obj,minOffsetX),HX_("minOffsetX",f3,55,1c,9d)},
	{::hx::fsInt,(int)offsetof(FlxBitmapFont_obj,spaceWidth),HX_("spaceWidth",60,8b,97,2b)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxBitmapFont_obj,charMap),HX_("charMap",66,cd,5d,cf)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxBitmapFont_obj,charAdvance),HX_("charAdvance",4c,f8,90,16)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxBitmapFont_obj,kerning),HX_("kerning",cc,ba,37,b0)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxBitmapFont_obj,frame),HX_("frame",2d,78,83,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxBitmapFont_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxBitmapFont_obj::SPACE_CODE,HX_("SPACE_CODE",a6,36,b9,21)},
	{::hx::fsInt,(void *) &FlxBitmapFont_obj::TAB_CODE,HX_("TAB_CODE",b7,fe,a4,96)},
	{::hx::fsInt,(void *) &FlxBitmapFont_obj::NEW_LINE_CODE,HX_("NEW_LINE_CODE",99,18,46,31)},
	{::hx::fsString,(void *) &FlxBitmapFont_obj::DEFAULT_FONT_KEY,HX_("DEFAULT_FONT_KEY",6d,52,ec,bd)},
	{::hx::fsString,(void *) &FlxBitmapFont_obj::DEFAULT_FONT_DATA,HX_("DEFAULT_FONT_DATA",7c,41,38,6c)},
	{::hx::fsString,(void *) &FlxBitmapFont_obj::DEFAULT_CHARS,HX_("DEFAULT_CHARS",5f,77,29,b9)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(void *) &FlxBitmapFont_obj::point,HX_("point",50,b4,8f,c6)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlxBitmapFont_obj::flashRect,HX_("flashRect",f4,46,51,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxBitmapFont_obj_sMemberFields[] = {
	HX_("size",c1,a0,53,4c),
	HX_("lineHeight",fb,02,f4,d6),
	HX_("bold",85,81,1b,41),
	HX_("italic",f0,2e,64,06),
	HX_("fontName",ba,8f,7d,cb),
	HX_("numLetters",27,db,ae,34),
	HX_("minOffsetX",f3,55,1c,9d),
	HX_("spaceWidth",60,8b,97,2b),
	HX_("charMap",66,cd,5d,cf),
	HX_("charAdvance",4c,f8,90,16),
	HX_("kerning",cc,ba,37,b0),
	HX_("frame",2d,78,83,06),
	HX_("destroy",fa,2c,86,24),
	HX_("addCharFrame",16,23,30,bf),
	HX_("setCharFrame",75,c1,2b,e4),
	HX_("updateSourceHeight",cb,fe,5f,70),
	HX_("charExists",52,b5,ff,33),
	HX_("getCharFrame",01,9e,32,cf),
	HX_("getCharAdvance",56,4b,2f,9e),
	HX_("getKerning",d6,40,99,ff),
	HX_("addKerningPair",65,20,5d,60),
	HX_("getCharWidth",da,db,11,93),
	HX_("addBorder",ed,81,3e,1c),
	::String(null()) };

static void FlxBitmapFont_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::SPACE_CODE,"SPACE_CODE");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::TAB_CODE,"TAB_CODE");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::NEW_LINE_CODE,"NEW_LINE_CODE");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::DEFAULT_FONT_KEY,"DEFAULT_FONT_KEY");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::DEFAULT_FONT_DATA,"DEFAULT_FONT_DATA");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::DEFAULT_CHARS,"DEFAULT_CHARS");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::flashRect,"flashRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBitmapFont_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::SPACE_CODE,"SPACE_CODE");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::TAB_CODE,"TAB_CODE");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::NEW_LINE_CODE,"NEW_LINE_CODE");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::DEFAULT_FONT_KEY,"DEFAULT_FONT_KEY");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::DEFAULT_FONT_DATA,"DEFAULT_FONT_DATA");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::DEFAULT_CHARS,"DEFAULT_CHARS");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::flashRect,"flashRect");
};

#endif

::hx::Class FlxBitmapFont_obj::__mClass;

static ::String FlxBitmapFont_obj_sStaticFields[] = {
	HX_("SPACE_CODE",a6,36,b9,21),
	HX_("TAB_CODE",b7,fe,a4,96),
	HX_("NEW_LINE_CODE",99,18,46,31),
	HX_("DEFAULT_FONT_KEY",6d,52,ec,bd),
	HX_("DEFAULT_FONT_DATA",7c,41,38,6c),
	HX_("DEFAULT_CHARS",5f,77,29,b9),
	HX_("point",50,b4,8f,c6),
	HX_("flashRect",f4,46,51,02),
	HX_("getDefaultFont",3a,aa,1d,9d),
	HX_("fromAngelCode",c4,cc,21,6e),
	HX_("fromXNA",61,23,06,58),
	HX_("transformPoint",44,cf,11,3d),
	HX_("fromMonospace",f9,0e,cf,d2),
	HX_("findFont",a8,6a,54,96),
	::String(null())
};

void FlxBitmapFont_obj::__register()
{
	FlxBitmapFont_obj _hx_dummy;
	FlxBitmapFont_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxBitmapFont",79,e8,86,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBitmapFont_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBitmapFont_obj::__SetStatic;
	__mClass->mMarkFunc = FlxBitmapFont_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBitmapFont_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBitmapFont_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBitmapFont_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBitmapFont_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBitmapFont_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBitmapFont_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBitmapFont_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_23_boot)
HXDLIN(  23)		SPACE_CODE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_24_boot)
HXDLIN(  24)		TAB_CODE = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_25_boot)
HXDLIN(  25)		NEW_LINE_CODE = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_27_boot)
HXDLIN(  27)		DEFAULT_FONT_KEY = HX_("DEFAULT_FONT_KEY",6d,52,ec,bd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_29_boot)
HXDLIN(  29)		DEFAULT_FONT_DATA = HX_(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000",b9,ed,10,8a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_873f477e55df57ae_34_boot)
HXDLIN(  34)		DEFAULT_CHARS = HX_(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~",6f,61,48,0a);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_36_boot)
HXDLIN(  36)		point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_873f477e55df57ae_37_boot)
HXDLIN(  37)		flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
