#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6947f0146d371c6d_143_new,"flixel.ui.FlxTypedButton","new",0xc7e33f04,"flixel.ui.FlxTypedButton.new","flixel/ui/FlxButton.hx",143,0xc64cf442)
static const int _hx_array_data_f696ad12_1[] = {
	(int)-1,
};
static const ::String _hx_array_data_f696ad12_2[] = {
	HX_("normal",27,72,69,30),HX_("highlight",34,56,00,ed),HX_("pressed",a2,d2,e6,39),HX_("disabled",7c,41,04,7c),
};
static const Float _hx_array_data_f696ad12_3[] = {
	0.8,1.0,0.5,0.3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_271_graphicLoaded,"flixel.ui.FlxTypedButton","graphicLoaded",0xa7022871,"flixel.ui.FlxTypedButton.graphicLoaded","flixel/ui/FlxButton.hx",271,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_282_loadDefaultGraphic,"flixel.ui.FlxTypedButton","loadDefaultGraphic",0xe0dec289,"flixel.ui.FlxTypedButton.loadDefaultGraphic","flixel/ui/FlxButton.hx",282,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_286_setupAnimation,"flixel.ui.FlxTypedButton","setupAnimation",0xeb5c74a3,"flixel.ui.FlxTypedButton.setupAnimation","flixel/ui/FlxButton.hx",286,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_296_destroy,"flixel.ui.FlxTypedButton","destroy",0xe11bbd9e,"flixel.ui.FlxTypedButton.destroy","flixel/ui/FlxButton.hx",296,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_322_update,"flixel.ui.FlxTypedButton","update",0xc4b5d5e5,"flixel.ui.FlxTypedButton.update","flixel/ui/FlxButton.hx",322,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_345_updateStatusAnimation,"flixel.ui.FlxTypedButton","updateStatusAnimation",0x00250d0d,"flixel.ui.FlxTypedButton.updateStatusAnimation","flixel/ui/FlxButton.hx",345,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_352_draw,"flixel.ui.FlxTypedButton","draw",0x18618ce0,"flixel.ui.FlxTypedButton.draw","flixel/ui/FlxButton.hx",352,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_386_stampOnAtlas,"flixel.ui.FlxTypedButton","stampOnAtlas",0xa90d96c5,"flixel.ui.FlxTypedButton.stampOnAtlas","flixel/ui/FlxButton.hx",386,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_415_updateButton,"flixel.ui.FlxTypedButton","updateButton",0x576ba5b7,"flixel.ui.FlxTypedButton.updateButton","flixel/ui/FlxButton.hx",415,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_436_checkMouseOverlap,"flixel.ui.FlxTypedButton","checkMouseOverlap",0xee0aca6e,"flixel.ui.FlxTypedButton.checkMouseOverlap","flixel/ui/FlxButton.hx",436,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_455_checkTouchOverlap,"flixel.ui.FlxTypedButton","checkTouchOverlap",0x36c79014,"flixel.ui.FlxTypedButton.checkTouchOverlap","flixel/ui/FlxButton.hx",455,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_473_checkInput,"flixel.ui.FlxTypedButton","checkInput",0xf7b933fe,"flixel.ui.FlxTypedButton.checkInput","flixel/ui/FlxButton.hx",473,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_494_updateStatus,"flixel.ui.FlxTypedButton","updateStatus",0x83872af7,"flixel.ui.FlxTypedButton.updateStatus","flixel/ui/FlxButton.hx",494,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_515_updateLabelPosition,"flixel.ui.FlxTypedButton","updateLabelPosition",0x7d4d6d98,"flixel.ui.FlxTypedButton.updateLabelPosition","flixel/ui/FlxButton.hx",515,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_524_updateLabelAlpha,"flixel.ui.FlxTypedButton","updateLabelAlpha",0x2352ff0f,"flixel.ui.FlxTypedButton.updateLabelAlpha","flixel/ui/FlxButton.hx",524,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_537_onUpEventListener,"flixel.ui.FlxTypedButton","onUpEventListener",0x0f960298,"flixel.ui.FlxTypedButton.onUpEventListener","flixel/ui/FlxButton.hx",537,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_548_onUpHandler,"flixel.ui.FlxTypedButton","onUpHandler",0xf0255834,"flixel.ui.FlxTypedButton.onUpHandler","flixel/ui/FlxButton.hx",548,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_560_onDownHandler,"flixel.ui.FlxTypedButton","onDownHandler",0x6003504d,"flixel.ui.FlxTypedButton.onDownHandler","flixel/ui/FlxButton.hx",560,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_571_onOverHandler,"flixel.ui.FlxTypedButton","onOverHandler",0x3b6b999b,"flixel.ui.FlxTypedButton.onOverHandler","flixel/ui/FlxButton.hx",571,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_590_onOutHandler,"flixel.ui.FlxTypedButton","onOutHandler",0x1cacc3b7,"flixel.ui.FlxTypedButton.onOutHandler","flixel/ui/FlxButton.hx",590,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_598_set_label,"flixel.ui.FlxTypedButton","set_label",0xd03f57fb,"flixel.ui.FlxTypedButton.set_label","flixel/ui/FlxButton.hx",598,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_615_set_status,"flixel.ui.FlxTypedButton","set_status",0x23ac634b,"flixel.ui.FlxTypedButton.set_status","flixel/ui/FlxButton.hx",615,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_622_set_alpha,"flixel.ui.FlxTypedButton","set_alpha",0x8226f165,"flixel.ui.FlxTypedButton.set_alpha","flixel/ui/FlxButton.hx",622,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_629_set_x,"flixel.ui.FlxTypedButton","set_x",0xd772faff,"flixel.ui.FlxTypedButton.set_x","flixel/ui/FlxButton.hx",629,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_636_set_y,"flixel.ui.FlxTypedButton","set_y",0xd772fb00,"flixel.ui.FlxTypedButton.set_y","flixel/ui/FlxButton.hx",636,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_644_get_justReleased,"flixel.ui.FlxTypedButton","get_justReleased",0x06e7426e,"flixel.ui.FlxTypedButton.get_justReleased","flixel/ui/FlxButton.hx",644,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_649_get_released,"flixel.ui.FlxTypedButton","get_released",0xa9c8d9a2,"flixel.ui.FlxTypedButton.get_released","flixel/ui/FlxButton.hx",649,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_654_get_pressed,"flixel.ui.FlxTypedButton","get_pressed",0x0c35e55d,"flixel.ui.FlxTypedButton.get_pressed","flixel/ui/FlxButton.hx",654,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_6947f0146d371c6d_659_get_justPressed,"flixel.ui.FlxTypedButton","get_justPressed",0x7ad59a11,"flixel.ui.FlxTypedButton.get_justPressed","flixel/ui/FlxButton.hx",659,0xc64cf442)
namespace flixel{
namespace ui{

void FlxTypedButton_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_6947f0146d371c6d_143_new)
HXLINE( 233)		this->lastStatus = -1;
HXLINE( 185)		this->maxInputMovement = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 177)		this->mouseButtons = ::Array_obj< int >::fromData( _hx_array_data_f696ad12_1,1);
HXLINE( 171)		this->allowSwiping = true;
HXLINE( 165)		this->statusAnimations = ::Array_obj< ::String >::fromData( _hx_array_data_f696ad12_2,4);
HXLINE( 159)		this->labelAlphas = ::Array_obj< Float >::fromData( _hx_array_data_f696ad12_3,4);
HXLINE( 153)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 153)		point->_inPool = false;
HXDLIN( 153)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 153)		point1->_inPool = false;
HXDLIN( 153)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(0,1);
HXDLIN( 153)		point2->_inPool = false;
HXDLIN( 153)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 153)		point3->_inPool = false;
HXDLIN( 153)		this->labelOffsets = ::Array_obj< ::Dynamic>::__new(4)->init(0,point)->init(1,point1)->init(2,point2)->init(3,point3);
HXLINE( 244)		super::__construct(X,Y,null());
HXLINE( 246)		this->loadDefaultGraphic();
HXLINE( 248)		this->onUp =  ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__alloc( HX_CTX ,OnClick,null());
HXLINE( 249)		this->onDown =  ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 250)		this->onOver =  ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 251)		this->onOut =  ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 253)		this->set_status(0);
HXLINE( 256)		{
HXLINE( 256)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN( 256)			this1->set_x(( (Float)(0) ));
HXDLIN( 256)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 259)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->onUpEventListener_dyn(),null(),null(),null());
HXLINE( 267)		this->input =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,0);
            	}

Dynamic FlxTypedButton_obj::__CreateEmpty() { return new FlxTypedButton_obj; }

void *FlxTypedButton_obj::_hx_vtable = 0;

Dynamic FlxTypedButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedButton_obj > _hx_result = new FlxTypedButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxTypedButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6b3699ba) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x6b3699ba;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::input::IFlxInput_obj _hx_flixel_ui_FlxTypedButton__hx_flixel_input_IFlxInput= {
	( bool (::hx::Object::*)())&::flixel::ui::FlxTypedButton_obj::get_justReleased,
	( bool (::hx::Object::*)())&::flixel::ui::FlxTypedButton_obj::get_released,
	( bool (::hx::Object::*)())&::flixel::ui::FlxTypedButton_obj::get_pressed,
	( bool (::hx::Object::*)())&::flixel::ui::FlxTypedButton_obj::get_justPressed,
};

void *FlxTypedButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x52baf533: return &_hx_flixel_ui_FlxTypedButton__hx_flixel_input_IFlxInput;
	}
	return super::_hx_getInterface(inHash);
}

void FlxTypedButton_obj::graphicLoaded(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_271_graphicLoaded)
HXLINE( 272)		this->super::graphicLoaded();
HXLINE( 274)		this->setupAnimation(HX_("normal",27,72,69,30),0);
HXLINE( 275)		this->setupAnimation(HX_("highlight",34,56,00,ed),1);
HXLINE( 276)		this->setupAnimation(HX_("pressed",a2,d2,e6,39),2);
HXLINE( 277)		this->setupAnimation(HX_("disabled",7c,41,04,7c),3);
            	}


void FlxTypedButton_obj::loadDefaultGraphic(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_282_loadDefaultGraphic)
HXDLIN( 282)		this->loadGraphic(HX_("flixel/images/ui/button.png",44,ee,2f,34),true,80,20,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,loadDefaultGraphic,(void))

void FlxTypedButton_obj::setupAnimation(::String animationName,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_286_setupAnimation)
HXLINE( 288)		frameIndex = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(frameIndex) ),( (Float)((this->animation->_sprite->get_numFrames() - 1)) )));
HXLINE( 289)		this->animation->add(animationName,::Array_obj< int >::__new(1)->init(0,frameIndex),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedButton_obj,setupAnimation,(void))

void FlxTypedButton_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_296_destroy)
HXLINE( 297)		this->set_label(::flixel::util::FlxDestroyUtil_obj::destroy(this->label));
HXLINE( 298)		this->_spriteLabel = null();
HXLINE( 300)		this->onUp = ( ( ::flixel::ui::_FlxButton::FlxButtonEvent)(::flixel::util::FlxDestroyUtil_obj::destroy(this->onUp)) );
HXLINE( 301)		this->onDown = ( ( ::flixel::ui::_FlxButton::FlxButtonEvent)(::flixel::util::FlxDestroyUtil_obj::destroy(this->onDown)) );
HXLINE( 302)		this->onOver = ( ( ::flixel::ui::_FlxButton::FlxButtonEvent)(::flixel::util::FlxDestroyUtil_obj::destroy(this->onOver)) );
HXLINE( 303)		this->onOut = ( ( ::flixel::ui::_FlxButton::FlxButtonEvent)(::flixel::util::FlxDestroyUtil_obj::destroy(this->onOut)) );
HXLINE( 305)		this->labelOffsets = ::flixel::util::FlxDestroyUtil_obj::putArray(this->labelOffsets);
HXLINE( 307)		this->labelAlphas = null();
HXLINE( 308)		this->currentInput = null();
HXLINE( 309)		this->input = null();
HXLINE( 312)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->onUpEventListener_dyn(),null());
HXLINE( 315)		this->super::destroy();
            	}


void FlxTypedButton_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_322_update)
HXLINE( 323)		this->super::update(elapsed);
HXLINE( 325)		if (this->visible) {
HXLINE( 329)			this->updateButton();
HXLINE( 333)			if ((this->lastStatus != this->status)) {
HXLINE( 335)				this->updateStatusAnimation();
HXLINE( 336)				this->lastStatus = this->status;
            			}
            		}
HXLINE( 340)		this->input->update();
            	}


void FlxTypedButton_obj::updateStatusAnimation(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_345_updateStatusAnimation)
HXDLIN( 345)		this->animation->play(this->statusAnimations->__get(this->status),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateStatusAnimation,(void))

void FlxTypedButton_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_352_draw)
HXLINE( 353)		this->super::draw();
HXLINE( 355)		bool _hx_tmp;
HXDLIN( 355)		if (::hx::IsNotNull( this->_spriteLabel )) {
HXLINE( 355)			_hx_tmp = this->_spriteLabel->visible;
            		}
            		else {
HXLINE( 355)			_hx_tmp = false;
            		}
HXDLIN( 355)		if (_hx_tmp) {
HXLINE( 357)			this->_spriteLabel->set_cameras(this->_cameras);
HXLINE( 358)			this->_spriteLabel->draw();
            		}
            	}


bool FlxTypedButton_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_386_stampOnAtlas)
HXLINE( 387)		 ::flixel::graphics::atlas::FlxNode buttonNode = atlas->addNode(this->graphic->bitmap,this->graphic->key);
HXLINE( 388)		bool result = ::hx::IsNotNull( buttonNode );
HXLINE( 390)		if (::hx::IsNotNull( buttonNode )) {
HXLINE( 392)			 ::flixel::graphics::frames::FlxTileFrames buttonFrames = ( ( ::flixel::graphics::frames::FlxTileFrames)(this->frames) );
HXLINE( 393)			Float x = buttonFrames->tileSize->x;
HXDLIN( 393)			Float y = buttonFrames->tileSize->y;
HXDLIN( 393)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 393)			point->_inPool = false;
HXDLIN( 393)			 ::flixel::math::FlxBasePoint tileSize = point;
HXLINE( 394)			 ::flixel::graphics::frames::FlxTileFrames tileFrames = buttonNode->getTileFrames(tileSize,null(),null());
HXLINE( 395)			this->set_frames(tileFrames);
            		}
HXLINE( 398)		bool _hx_tmp;
HXDLIN( 398)		if (result) {
HXLINE( 398)			_hx_tmp = ::hx::IsNotNull( this->label );
            		}
            		else {
HXLINE( 398)			_hx_tmp = false;
            		}
HXDLIN( 398)		if (_hx_tmp) {
HXLINE( 400)			 ::flixel::graphics::atlas::FlxNode labelNode = atlas->addNode(( ( ::flixel::FlxSprite)(this->label) )->graphic->bitmap,( ( ::flixel::FlxSprite)(this->label) )->graphic->key);
HXLINE( 401)			if (result) {
HXLINE( 401)				result = ::hx::IsNotNull( labelNode );
            			}
            			else {
HXLINE( 401)				result = false;
            			}
HXLINE( 403)			if (::hx::IsNotNull( labelNode )) {
HXLINE( 404)				 ::Dynamic _hx_tmp = this->label;
HXDLIN( 404)				( ( ::flixel::FlxSprite)(_hx_tmp) )->set_frames(labelNode->getImageFrame());
            			}
            		}
HXLINE( 407)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,stampOnAtlas,return )

void FlxTypedButton_obj::updateButton(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_415_updateButton)
HXLINE( 417)		if ((this->status == 3)) {
HXLINE( 418)			return;
            		}
HXLINE( 420)		bool overlapFound = this->checkMouseOverlap();
HXLINE( 421)		if (!(overlapFound)) {
HXLINE( 422)			overlapFound = this->checkTouchOverlap();
            		}
HXLINE( 424)		bool _hx_tmp;
HXDLIN( 424)		bool _hx_tmp1;
HXDLIN( 424)		if (::hx::IsNotNull( this->currentInput )) {
HXLINE( 424)			_hx_tmp1 = ::flixel::input::IFlxInput_obj::get_justReleased(this->currentInput);
            		}
            		else {
HXLINE( 424)			_hx_tmp1 = false;
            		}
HXDLIN( 424)		if (_hx_tmp1) {
HXLINE( 424)			_hx_tmp = overlapFound;
            		}
            		else {
HXLINE( 424)			_hx_tmp = false;
            		}
HXDLIN( 424)		if (_hx_tmp) {
HXLINE( 426)			this->onUpHandler();
            		}
HXLINE( 429)		bool _hx_tmp2;
HXDLIN( 429)		if ((this->status != 0)) {
HXLINE( 429)			if (overlapFound) {
HXLINE( 429)				if (::hx::IsNotNull( this->currentInput )) {
HXLINE( 429)					_hx_tmp2 = ::flixel::input::IFlxInput_obj::get_justReleased(this->currentInput);
            				}
            				else {
HXLINE( 429)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 429)				_hx_tmp2 = true;
            			}
            		}
            		else {
HXLINE( 429)			_hx_tmp2 = false;
            		}
HXDLIN( 429)		if (_hx_tmp2) {
HXLINE( 431)			this->onOutHandler();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateButton,(void))

bool FlxTypedButton_obj::checkMouseOverlap(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_436_checkMouseOverlap)
HXLINE( 437)		bool overlap = false;
HXLINE( 439)		{
HXLINE( 439)			int _g = 0;
HXDLIN( 439)			::Array< ::Dynamic> _g1 = this->getCameras();
HXDLIN( 439)			while((_g < _g1->length)){
HXLINE( 439)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 439)				_g = (_g + 1);
HXLINE( 441)				{
HXLINE( 441)					int _g2 = 0;
HXDLIN( 441)					::Array< int > _g3 = this->mouseButtons;
HXDLIN( 441)					while((_g2 < _g3->length)){
HXLINE( 441)						int buttonID = _g3->__get(_g2);
HXDLIN( 441)						_g2 = (_g2 + 1);
HXLINE( 443)						 ::flixel::input::mouse::FlxMouseButton button = ::flixel::input::mouse::FlxMouseButton_obj::getByID(buttonID);
HXLINE( 444)						bool _hx_tmp;
HXDLIN( 444)						if (::hx::IsNotNull( button )) {
HXLINE( 444)							_hx_tmp = this->checkInput(::flixel::FlxG_obj::mouse,button,button->justPressedPosition,camera);
            						}
            						else {
HXLINE( 444)							_hx_tmp = false;
            						}
HXDLIN( 444)						if (_hx_tmp) {
HXLINE( 446)							overlap = true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 451)		return overlap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,checkMouseOverlap,return )

bool FlxTypedButton_obj::checkTouchOverlap(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_455_checkTouchOverlap)
HXLINE( 456)		bool overlap = false;
HXLINE( 469)		return overlap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,checkTouchOverlap,return )

bool FlxTypedButton_obj::checkInput( ::flixel::input::FlxPointer pointer,::Dynamic input, ::flixel::math::FlxBasePoint justPressedPosition, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_473_checkInput)
HXLINE( 474)		bool _hx_tmp;
HXDLIN( 474)		bool _hx_tmp1;
HXDLIN( 474)		if ((this->maxInputMovement != ::Math_obj::POSITIVE_INFINITY)) {
HXLINE( 475)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 475)			point->_inPool = false;
HXDLIN( 475)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 475)			point1->_weak = true;
HXDLIN( 475)			Float _hx_tmp = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::distanceTo(justPressedPosition,pointer->getScreenPosition(null(),point1));
HXLINE( 474)			_hx_tmp1 = (_hx_tmp > this->maxInputMovement);
            		}
            		else {
HXLINE( 474)			_hx_tmp1 = false;
            		}
HXDLIN( 474)		if (_hx_tmp1) {
HXLINE( 474)			_hx_tmp = ::hx::IsInstanceEq( input,this->currentInput );
            		}
            		else {
HXLINE( 474)			_hx_tmp = false;
            		}
HXDLIN( 474)		if (_hx_tmp) {
HXLINE( 478)			this->currentInput = null();
            		}
            		else {
HXLINE( 480)			if (this->overlapsPoint(pointer->getWorldPosition(camera,this->_point),true,camera)) {
HXLINE( 482)				this->updateStatus(input);
HXLINE( 483)				return true;
            			}
            		}
HXLINE( 486)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedButton_obj,checkInput,return )

void FlxTypedButton_obj::updateStatus(::Dynamic input){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_494_updateStatus)
HXDLIN( 494)		if (::flixel::input::IFlxInput_obj::get_justPressed(input)) {
HXLINE( 496)			this->currentInput = input;
HXLINE( 497)			this->onDownHandler();
            		}
            		else {
HXLINE( 499)			if ((this->status == 0)) {
HXLINE( 502)				bool _hx_tmp;
HXDLIN( 502)				if (this->allowSwiping) {
HXLINE( 502)					_hx_tmp = ::flixel::input::IFlxInput_obj::get_pressed(input);
            				}
            				else {
HXLINE( 502)					_hx_tmp = false;
            				}
HXDLIN( 502)				if (_hx_tmp) {
HXLINE( 504)					this->onDownHandler();
            				}
            				else {
HXLINE( 508)					this->onOverHandler();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,updateStatus,(void))

void FlxTypedButton_obj::updateLabelPosition(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_515_updateLabelPosition)
HXDLIN( 515)		if (::hx::IsNotNull( this->_spriteLabel )) {
HXLINE( 517)			Float _hx_tmp;
HXDLIN( 517)			if (this->pixelPerfectPosition) {
HXLINE( 517)				_hx_tmp = ( (Float)(::Math_obj::floor(this->x)) );
            			}
            			else {
HXLINE( 517)				_hx_tmp = this->x;
            			}
HXDLIN( 517)			this->_spriteLabel->set_x((_hx_tmp + this->labelOffsets->__get(this->status).StaticCast<  ::flixel::math::FlxBasePoint >()->x));
HXLINE( 518)			Float _hx_tmp1;
HXDLIN( 518)			if (this->pixelPerfectPosition) {
HXLINE( 518)				_hx_tmp1 = ( (Float)(::Math_obj::floor(this->y)) );
            			}
            			else {
HXLINE( 518)				_hx_tmp1 = this->y;
            			}
HXDLIN( 518)			this->_spriteLabel->set_y((_hx_tmp1 + this->labelOffsets->__get(this->status).StaticCast<  ::flixel::math::FlxBasePoint >()->y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateLabelPosition,(void))

void FlxTypedButton_obj::updateLabelAlpha(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_524_updateLabelAlpha)
HXDLIN( 524)		bool _hx_tmp;
HXDLIN( 524)		if (::hx::IsNotNull( this->_spriteLabel )) {
HXDLIN( 524)			_hx_tmp = (this->labelAlphas->length > this->status);
            		}
            		else {
HXDLIN( 524)			_hx_tmp = false;
            		}
HXDLIN( 524)		if (_hx_tmp) {
HXLINE( 526)			this->_spriteLabel->set_alpha((this->alpha * this->labelAlphas->__get(this->status)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateLabelAlpha,(void))

void FlxTypedButton_obj::onUpEventListener( ::openfl::events::MouseEvent _){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_537_onUpEventListener)
HXDLIN( 537)		bool _hx_tmp;
HXDLIN( 537)		bool _hx_tmp1;
HXDLIN( 537)		bool _hx_tmp2;
HXDLIN( 537)		if (this->visible) {
HXDLIN( 537)			_hx_tmp2 = this->exists;
            		}
            		else {
HXDLIN( 537)			_hx_tmp2 = false;
            		}
HXDLIN( 537)		if (_hx_tmp2) {
HXDLIN( 537)			_hx_tmp1 = this->active;
            		}
            		else {
HXDLIN( 537)			_hx_tmp1 = false;
            		}
HXDLIN( 537)		if (_hx_tmp1) {
HXDLIN( 537)			_hx_tmp = (this->status == 2);
            		}
            		else {
HXDLIN( 537)			_hx_tmp = false;
            		}
HXDLIN( 537)		if (_hx_tmp) {
HXLINE( 539)			this->onUpHandler();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,onUpEventListener,(void))

void FlxTypedButton_obj::onUpHandler(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_548_onUpHandler)
HXLINE( 549)		this->set_status(1);
HXLINE( 550)		this->input->release();
HXLINE( 551)		this->currentInput = null();
HXLINE( 553)		{
HXLINE( 553)			 ::flixel::ui::_FlxButton::FlxButtonEvent _this = this->onUp;
HXDLIN( 553)			if (::hx::IsNotNull( _this->callback )) {
HXLINE( 553)				_this->callback();
            			}
HXDLIN( 553)			if (::hx::IsNotNull( _this->sound )) {
HXLINE( 553)				_this->sound->play(true,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onUpHandler,(void))

void FlxTypedButton_obj::onDownHandler(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_560_onDownHandler)
HXLINE( 561)		this->set_status(2);
HXLINE( 562)		this->input->press();
HXLINE( 564)		{
HXLINE( 564)			 ::flixel::ui::_FlxButton::FlxButtonEvent _this = this->onDown;
HXDLIN( 564)			if (::hx::IsNotNull( _this->callback )) {
HXLINE( 564)				_this->callback();
            			}
HXDLIN( 564)			if (::hx::IsNotNull( _this->sound )) {
HXLINE( 564)				_this->sound->play(true,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onDownHandler,(void))

void FlxTypedButton_obj::onOverHandler(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_571_onOverHandler)
HXLINE( 575)		if (!(::flixel::FlxG_obj::mouse->enabled)) {
HXLINE( 577)			this->set_status(0);
HXLINE( 578)			return;
            		}
HXLINE( 581)		this->set_status(1);
HXLINE( 583)		{
HXLINE( 583)			 ::flixel::ui::_FlxButton::FlxButtonEvent _this = this->onOver;
HXDLIN( 583)			if (::hx::IsNotNull( _this->callback )) {
HXLINE( 583)				_this->callback();
            			}
HXDLIN( 583)			if (::hx::IsNotNull( _this->sound )) {
HXLINE( 583)				_this->sound->play(true,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOverHandler,(void))

void FlxTypedButton_obj::onOutHandler(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_590_onOutHandler)
HXLINE( 591)		this->set_status(0);
HXLINE( 592)		this->input->release();
HXLINE( 594)		{
HXLINE( 594)			 ::flixel::ui::_FlxButton::FlxButtonEvent _this = this->onOut;
HXDLIN( 594)			if (::hx::IsNotNull( _this->callback )) {
HXLINE( 594)				_this->callback();
            			}
HXDLIN( 594)			if (::hx::IsNotNull( _this->sound )) {
HXLINE( 594)				_this->sound->play(true,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOutHandler,(void))

 ::Dynamic FlxTypedButton_obj::set_label( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_598_set_label)
HXLINE( 599)		if (::hx::IsNotNull( Value )) {
HXLINE( 602)			( ( ::flixel::FlxObject)(Value) )->scrollFactor->put();
HXLINE( 603)			( ( ::flixel::FlxObject)(Value) )->scrollFactor = this->scrollFactor;
            		}
HXLINE( 606)		this->label = Value;
HXLINE( 607)		this->_spriteLabel = ( ( ::flixel::FlxSprite)(this->label) );
HXLINE( 609)		this->updateLabelPosition();
HXLINE( 611)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_label,return )

int FlxTypedButton_obj::set_status(int value){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_615_set_status)
HXLINE( 616)		this->status = value;
HXLINE( 617)		this->updateLabelAlpha();
HXLINE( 618)		return this->status;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_status,return )

Float FlxTypedButton_obj::set_alpha(Float Value){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_622_set_alpha)
HXLINE( 623)		this->super::set_alpha(Value);
HXLINE( 624)		this->updateLabelAlpha();
HXLINE( 625)		return this->alpha;
            	}


Float FlxTypedButton_obj::set_x(Float Value){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_629_set_x)
HXLINE( 630)		this->super::set_x(Value);
HXLINE( 631)		this->updateLabelPosition();
HXLINE( 632)		return this->x;
            	}


Float FlxTypedButton_obj::set_y(Float Value){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_636_set_y)
HXLINE( 637)		this->super::set_y(Value);
HXLINE( 638)		this->updateLabelPosition();
HXLINE( 639)		return this->y;
            	}


bool FlxTypedButton_obj::get_justReleased(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_644_get_justReleased)
HXDLIN( 644)		return (this->input->current == -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_justReleased,return )

bool FlxTypedButton_obj::get_released(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_649_get_released)
HXDLIN( 649)		 ::flixel::input::FlxInput _this = this->input;
HXDLIN( 649)		if ((_this->current != 0)) {
HXDLIN( 649)			return (_this->current == -1);
            		}
            		else {
HXDLIN( 649)			return true;
            		}
HXDLIN( 649)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_released,return )

bool FlxTypedButton_obj::get_pressed(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_654_get_pressed)
HXDLIN( 654)		 ::flixel::input::FlxInput _this = this->input;
HXDLIN( 654)		if ((_this->current != 1)) {
HXDLIN( 654)			return (_this->current == 2);
            		}
            		else {
HXDLIN( 654)			return true;
            		}
HXDLIN( 654)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_pressed,return )

bool FlxTypedButton_obj::get_justPressed(){
            	HX_STACKFRAME(&_hx_pos_6947f0146d371c6d_659_get_justPressed)
HXDLIN( 659)		return (this->input->current == 2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_justPressed,return )


::hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick) {
	::hx::ObjectPtr< FlxTypedButton_obj > __this = new FlxTypedButton_obj();
	__this->__construct(__o_X,__o_Y,OnClick);
	return __this;
}

::hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick) {
	FlxTypedButton_obj *__this = (FlxTypedButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedButton_obj), true, "flixel.ui.FlxTypedButton"));
	*(void **)__this = FlxTypedButton_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,OnClick);
	return __this;
}

FlxTypedButton_obj::FlxTypedButton_obj()
{
}

void FlxTypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_MARK_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_MARK_MEMBER_NAME(statusAnimations,"statusAnimations");
	HX_MARK_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_MARK_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_MARK_MEMBER_NAME(maxInputMovement,"maxInputMovement");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(_spriteLabel,"_spriteLabel");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(currentInput,"currentInput");
	HX_MARK_MEMBER_NAME(lastStatus,"lastStatus");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_VISIT_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_VISIT_MEMBER_NAME(statusAnimations,"statusAnimations");
	HX_VISIT_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_VISIT_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_VISIT_MEMBER_NAME(maxInputMovement,"maxInputMovement");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(_spriteLabel,"_spriteLabel");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(currentInput,"currentInput");
	HX_VISIT_MEMBER_NAME(lastStatus,"lastStatus");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return ::hx::Val( onUp ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return ::hx::Val( label ); }
		if (HX_FIELD_EQ(inName,"onOut") ) { return ::hx::Val( onOut ); }
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		if (HX_FIELD_EQ(inName,"onDown") ) { return ::hx::Val( onDown ); }
		if (HX_FIELD_EQ(inName,"onOver") ) { return ::hx::Val( onOver ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pressed() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_released() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_label") ) { return ::hx::Val( set_label_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastStatus") ) { return ::hx::Val( lastStatus ); }
		if (HX_FIELD_EQ(inName,"checkInput") ) { return ::hx::Val( checkInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_status") ) { return ::hx::Val( set_status_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { return ::hx::Val( labelAlphas ); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justPressed() ); }
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return ::hx::Val( onUpHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return ::hx::Val( get_pressed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { return ::hx::Val( labelOffsets ); }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { return ::hx::Val( allowSwiping ); }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { return ::hx::Val( mouseButtons ); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justReleased() ); }
		if (HX_FIELD_EQ(inName,"_spriteLabel") ) { return ::hx::Val( _spriteLabel ); }
		if (HX_FIELD_EQ(inName,"currentInput") ) { return ::hx::Val( currentInput ); }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return ::hx::Val( stampOnAtlas_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return ::hx::Val( updateButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateStatus") ) { return ::hx::Val( updateStatus_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return ::hx::Val( onOutHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return ::hx::Val( get_released_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return ::hx::Val( graphicLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return ::hx::Val( onDownHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return ::hx::Val( onOverHandler_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setupAnimation") ) { return ::hx::Val( setupAnimation_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return ::hx::Val( get_justPressed_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusAnimations") ) { return ::hx::Val( statusAnimations ); }
		if (HX_FIELD_EQ(inName,"maxInputMovement") ) { return ::hx::Val( maxInputMovement ); }
		if (HX_FIELD_EQ(inName,"updateLabelAlpha") ) { return ::hx::Val( updateLabelAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return ::hx::Val( get_justReleased_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkMouseOverlap") ) { return ::hx::Val( checkMouseOverlap_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkTouchOverlap") ) { return ::hx::Val( checkTouchOverlap_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpEventListener") ) { return ::hx::Val( onUpEventListener_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadDefaultGraphic") ) { return ::hx::Val( loadDefaultGraphic_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateLabelPosition") ) { return ::hx::Val( updateLabelPosition_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateStatusAnimation") ) { return ::hx::Val( updateStatusAnimation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTypedButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast<  ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_label(inValue.Cast<  ::Dynamic >()) );label=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast<  ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_status(inValue.Cast< int >()) );status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast<  ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast<  ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastStatus") ) { lastStatus=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { labelAlphas=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { labelOffsets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { allowSwiping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { mouseButtons=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spriteLabel") ) { _spriteLabel=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentInput") ) { currentInput=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusAnimations") ) { statusAnimations=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxInputMovement") ) { maxInputMovement=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("label",f4,0d,af,6f));
	outFields->push(HX_("labelOffsets",ec,89,c7,2c));
	outFields->push(HX_("labelAlphas",69,3c,3c,8d));
	outFields->push(HX_("statusAnimations",c1,d2,c0,c5));
	outFields->push(HX_("allowSwiping",ae,3a,40,43));
	outFields->push(HX_("mouseButtons",9c,a2,1a,ac));
	outFields->push(HX_("maxInputMovement",15,8e,e1,5a));
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("onUp",5a,71,b2,49));
	outFields->push(HX_("onDown",21,01,f8,e4));
	outFields->push(HX_("onOver",13,9a,42,ec));
	outFields->push(HX_("onOut",af,34,6c,32));
	outFields->push(HX_("justReleased",09,1b,5b,66));
	outFields->push(HX_("released",bd,88,e7,76));
	outFields->push(HX_("pressed",a2,d2,e6,39));
	outFields->push(HX_("justPressed",d6,0d,a7,f2));
	outFields->push(HX_("_spriteLabel",b0,9d,5b,0c));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("currentInput",11,a9,29,05));
	outFields->push(HX_("lastStatus",28,ca,d6,d0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedButton_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTypedButton_obj,label),HX_("label",f4,0d,af,6f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTypedButton_obj,labelOffsets),HX_("labelOffsets",ec,89,c7,2c)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxTypedButton_obj,labelAlphas),HX_("labelAlphas",69,3c,3c,8d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FlxTypedButton_obj,statusAnimations),HX_("statusAnimations",c1,d2,c0,c5)},
	{::hx::fsBool,(int)offsetof(FlxTypedButton_obj,allowSwiping),HX_("allowSwiping",ae,3a,40,43)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTypedButton_obj,mouseButtons),HX_("mouseButtons",9c,a2,1a,ac)},
	{::hx::fsFloat,(int)offsetof(FlxTypedButton_obj,maxInputMovement),HX_("maxInputMovement",15,8e,e1,5a)},
	{::hx::fsInt,(int)offsetof(FlxTypedButton_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /*  ::flixel::ui::_FlxButton::FlxButtonEvent */ ,(int)offsetof(FlxTypedButton_obj,onUp),HX_("onUp",5a,71,b2,49)},
	{::hx::fsObject /*  ::flixel::ui::_FlxButton::FlxButtonEvent */ ,(int)offsetof(FlxTypedButton_obj,onDown),HX_("onDown",21,01,f8,e4)},
	{::hx::fsObject /*  ::flixel::ui::_FlxButton::FlxButtonEvent */ ,(int)offsetof(FlxTypedButton_obj,onOver),HX_("onOver",13,9a,42,ec)},
	{::hx::fsObject /*  ::flixel::ui::_FlxButton::FlxButtonEvent */ ,(int)offsetof(FlxTypedButton_obj,onOut),HX_("onOut",af,34,6c,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxTypedButton_obj,_spriteLabel),HX_("_spriteLabel",b0,9d,5b,0c)},
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxTypedButton_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FlxTypedButton_obj,currentInput),HX_("currentInput",11,a9,29,05)},
	{::hx::fsInt,(int)offsetof(FlxTypedButton_obj,lastStatus),HX_("lastStatus",28,ca,d6,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedButton_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedButton_obj_sMemberFields[] = {
	HX_("label",f4,0d,af,6f),
	HX_("labelOffsets",ec,89,c7,2c),
	HX_("labelAlphas",69,3c,3c,8d),
	HX_("statusAnimations",c1,d2,c0,c5),
	HX_("allowSwiping",ae,3a,40,43),
	HX_("mouseButtons",9c,a2,1a,ac),
	HX_("maxInputMovement",15,8e,e1,5a),
	HX_("status",32,e7,fb,05),
	HX_("onUp",5a,71,b2,49),
	HX_("onDown",21,01,f8,e4),
	HX_("onOver",13,9a,42,ec),
	HX_("onOut",af,34,6c,32),
	HX_("_spriteLabel",b0,9d,5b,0c),
	HX_("input",0a,c4,1d,be),
	HX_("currentInput",11,a9,29,05),
	HX_("lastStatus",28,ca,d6,d0),
	HX_("graphicLoaded",cd,84,20,16),
	HX_("loadDefaultGraphic",ad,18,08,83),
	HX_("setupAnimation",c7,e8,ce,b6),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateStatusAnimation",69,25,c1,4d),
	HX_("draw",04,2c,70,42),
	HX_("stampOnAtlas",e9,f9,45,2b),
	HX_("updateButton",db,08,a4,d9),
	HX_("checkMouseOverlap",ca,84,64,1a),
	HX_("checkTouchOverlap",70,4a,21,63),
	HX_("checkInput",22,c6,0d,ce),
	HX_("updateStatus",1b,8e,bf,05),
	HX_("updateLabelPosition",f4,76,4f,bf),
	HX_("updateLabelAlpha",33,c4,65,87),
	HX_("onUpEventListener",f4,bc,ef,3b),
	HX_("onUpHandler",90,a5,d0,a3),
	HX_("onDownHandler",a9,ac,21,cf),
	HX_("onOverHandler",f7,f5,89,aa),
	HX_("onOutHandler",db,26,e5,9e),
	HX_("set_label",57,56,a9,96),
	HX_("set_status",6f,f5,00,fa),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_justReleased",92,07,fa,6a),
	HX_("get_released",c6,3c,01,2c),
	HX_("get_pressed",b9,32,e1,bf),
	HX_("get_justPressed",6d,c5,88,b3),
	::String(null()) };

::hx::Class FlxTypedButton_obj::__mClass;

void FlxTypedButton_obj::__register()
{
	FlxTypedButton_obj _hx_dummy;
	FlxTypedButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.ui.FlxTypedButton",12,ad,96,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace ui
