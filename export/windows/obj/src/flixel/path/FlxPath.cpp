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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
#endif
#ifndef INCLUDED_flixel_path_CenterMode
#include <flixel/path/CenterMode.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPath
#include <flixel/path/FlxPath.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_128203ded77fa8c1_75_new,"flixel.path.FlxPath","new",0xc203a592,"flixel.path.FlxPath.new","flixel/path/FlxPath.hx",75,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_237_reset,"flixel.path.FlxPath","reset",0x53fd4f81,"flixel.path.FlxPath.reset","flixel/path/FlxPath.hx",237,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_258_setProperties,"flixel.path.FlxPath","setProperties",0x8fa441e7,"flixel.path.FlxPath.setProperties","flixel/path/FlxPath.hx",258,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_277_start,"flixel.path.FlxPath","start",0xf1407a14,"flixel.path.FlxPath.start","flixel/path/FlxPath.hx",277,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_304_restart,"flixel.path.FlxPath","restart",0x536d1e01,"flixel.path.FlxPath.restart","flixel/path/FlxPath.hx",304,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_334_setNode,"flixel.path.FlxPath","setNode",0xf755a0f6,"flixel.path.FlxPath.setNode","flixel/path/FlxPath.hx",334,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_346_computeCenter,"flixel.path.FlxPath","computeCenter",0xfd6e5c5e,"flixel.path.FlxPath.computeCenter","flixel/path/FlxPath.hx",346,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_375_update,"flixel.path.FlxPath","update",0xa8357c17,"flixel.path.FlxPath.update","flixel/path/FlxPath.hx",375,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_453_calculateVelocity,"flixel.path.FlxPath","calculateVelocity",0x3166f255,"flixel.path.FlxPath.calculateVelocity","flixel/path/FlxPath.hx",453,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_487_advancePath,"flixel.path.FlxPath","advancePath",0x4125da79,"flixel.path.FlxPath.advancePath","flixel/path/FlxPath.hx",487,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_612_cancel,"flixel.path.FlxPath","cancel",0xd963e388,"flixel.path.FlxPath.cancel","flixel/path/FlxPath.hx",612,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_626_onEnd,"flixel.path.FlxPath","onEnd",0x9f999dae,"flixel.path.FlxPath.onEnd","flixel/path/FlxPath.hx",626,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_638_destroy,"flixel.path.FlxPath","destroy",0x0d4d832c,"flixel.path.FlxPath.destroy","flixel/path/FlxPath.hx",638,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_654_add,"flixel.path.FlxPath","add",0xc1f9c753,"flixel.path.FlxPath.add","flixel/path/FlxPath.hx",654,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_669_addAt,"flixel.path.FlxPath","addAt",0x8978bb26,"flixel.path.FlxPath.addAt","flixel/path/FlxPath.hx",669,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_687_addPoint,"flixel.path.FlxPath","addPoint",0x0590effd,"flixel.path.FlxPath.addPoint","flixel/path/FlxPath.hx",687,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_711_addPointAt,"flixel.path.FlxPath","addPointAt",0x3faae250,"flixel.path.FlxPath.addPointAt","flixel/path/FlxPath.hx",711,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_733_remove,"flixel.path.FlxPath","remove",0x25b89252,"flixel.path.FlxPath.remove","flixel/path/FlxPath.hx",733,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_749_removeAt,"flixel.path.FlxPath","removeAt",0x72bf83e5,"flixel.path.FlxPath.removeAt","flixel/path/FlxPath.hx",749,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_767_head,"flixel.path.FlxPath","head",0xfd35dfae,"flixel.path.FlxPath.head","flixel/path/FlxPath.hx",767,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_781_tail,"flixel.path.FlxPath","tail",0x05216d1e,"flixel.path.FlxPath.tail","flixel/path/FlxPath.hx",781,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_895_get_nodes,"flixel.path.FlxPath","get_nodes",0x0d56db3a,"flixel.path.FlxPath.get_nodes","flixel/path/FlxPath.hx",895,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_899_set_nodes,"flixel.path.FlxPath","set_nodes",0xf0a7c746,"flixel.path.FlxPath.set_nodes","flixel/path/FlxPath.hx",899,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_908_set_immovable,"flixel.path.FlxPath","set_immovable",0xbaf6e49f,"flixel.path.FlxPath.set_immovable","flixel/path/FlxPath.hx",908,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_929_set_autoCenter,"flixel.path.FlxPath","set_autoCenter",0xf4055b6f,"flixel.path.FlxPath.set_autoCenter","flixel/path/FlxPath.hx",929,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_938_get_autoCenter,"flixel.path.FlxPath","get_autoCenter",0xd3e572fb,"flixel.path.FlxPath.get_autoCenter","flixel/path/FlxPath.hx",938,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_82_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",82,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_89_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",89,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_96_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",96,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_103_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",103,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_110_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",110,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_115_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",115,0xbf2b467e)
namespace flixel{
namespace path{

void FlxPath_obj::__construct(::Array< ::Dynamic> nodes){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_75_new)
HXLINE( 215)		this->_firstUpdate = false;
HXLINE( 213)		this->_wasObjectImmovable = null();
HXLINE( 211)		this->_inc = 1;
HXLINE( 201)		this->axes = 17;
HXLINE( 196)		this->finished = false;
HXLINE( 194)		this->nodeIndex = 0;
HXLINE( 174)		this->active = false;
HXLINE( 169)		this->angleOffset = ((Float)0);
HXLINE( 160)		this->autoRotate = false;
HXLINE( 155)		this->centerMode = ::flixel::path::CenterMode_obj::CENTER_dyn();
HXLINE( 144)		this->angle = ((Float)0);
HXLINE( 139)		this->immovable = false;
HXLINE( 134)		this->speed = ((Float)0);
HXLINE( 225)		if (::hx::IsNotNull( nodes )) {
HXLINE( 226)			this->_nodes = nodes->copy();
            		}
            		else {
HXLINE( 228)			this->_nodes = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}

Dynamic FlxPath_obj::__CreateEmpty() { return new FlxPath_obj; }

void *FlxPath_obj::_hx_vtable = 0;

Dynamic FlxPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPath_obj > _hx_result = new FlxPath_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d90b1b6;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_path_FlxPath__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::path::FlxPath_obj::destroy,
};

void *FlxPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_path_FlxPath__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::path::FlxPath FlxPath_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_237_reset)
HXLINE( 242)		this->centerMode = ::flixel::path::CenterMode_obj::CENTER_dyn();
HXLINE( 243)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,reset,return )

 ::flixel::path::FlxPath FlxPath_obj::setProperties(::hx::Null< Float >  __o_speed,::hx::Null< int >  __o_mode,::hx::Null< bool >  __o_autoRotate){
            		Float speed = __o_speed.Default(((Float)100.0));
            		int mode = __o_mode.Default(0);
            		bool autoRotate = __o_autoRotate.Default(false);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_258_setProperties)
HXLINE( 259)		this->speed = ::Math_obj::abs(speed);
HXLINE( 260)		this->_mode = mode;
HXLINE( 261)		this->autoRotate = autoRotate;
HXLINE( 262)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,setProperties,return )

 ::flixel::path::FlxPath FlxPath_obj::start(::Array< ::Dynamic> nodes,::hx::Null< Float >  __o_speed,::hx::Null< int >  __o_mode,::hx::Null< bool >  __o_autoRotate,::hx::Null< bool >  __o_nodesAsReference){
            		Float speed = __o_speed.Default(((Float)100.0));
            		int mode = __o_mode.Default(0);
            		bool autoRotate = __o_autoRotate.Default(false);
            		bool nodesAsReference = __o_nodesAsReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_277_start)
HXLINE( 278)		if (::hx::IsNotNull( nodes )) {
HXLINE( 280)			if (nodesAsReference) {
HXLINE( 282)				this->_nodes = nodes;
            			}
            			else {
HXLINE( 286)				this->_nodes = nodes->copy();
            			}
            		}
HXLINE( 289)		this->setProperties(speed,mode,autoRotate);
HXLINE( 290)		if ((this->_nodes->length > 0)) {
HXLINE( 292)			this->restart();
            		}
HXLINE( 294)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxPath_obj,start,return )

 ::flixel::path::FlxPath FlxPath_obj::restart(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_304_restart)
HXLINE( 305)		this->finished = false;
HXLINE( 306)		this->_firstUpdate = true;
HXLINE( 307)		this->active = (this->_nodes->length > 0);
HXLINE( 308)		if (!(this->active)) {
HXLINE( 310)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 314)		bool _hx_tmp;
HXDLIN( 314)		if ((this->_mode != 1)) {
HXLINE( 314)			_hx_tmp = (this->_mode == 256);
            		}
            		else {
HXLINE( 314)			_hx_tmp = true;
            		}
HXDLIN( 314)		if (_hx_tmp) {
HXLINE( 316)			this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 317)			this->_inc = -1;
            		}
            		else {
HXLINE( 321)			this->nodeIndex = 0;
HXLINE( 322)			this->_inc = 1;
            		}
HXLINE( 325)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,restart,return )

 ::flixel::path::FlxPath FlxPath_obj::setNode(int nodeIndex){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_334_setNode)
HXLINE( 335)		if ((nodeIndex < 0)) {
HXLINE( 336)			nodeIndex = 0;
            		}
            		else {
HXLINE( 337)			if ((nodeIndex > (this->_nodes->length - 1))) {
HXLINE( 338)				nodeIndex = (this->_nodes->length - 1);
            			}
            		}
HXLINE( 340)		this->nodeIndex = nodeIndex;
HXLINE( 341)		this->advancePath(null());
HXLINE( 342)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,setNode,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::computeCenter( ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_346_computeCenter)
HXLINE( 347)		point->set_x(this->object->x);
HXLINE( 348)		point->set_y(this->object->y);
HXLINE( 349)		 ::flixel::path::CenterMode _g = this->centerMode;
HXDLIN( 349)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 363)				return point;
            			}
            			break;
            			case (int)1: {
HXLINE( 361)				Float x = (this->object->get_width() * ((Float)0.5));
HXDLIN( 361)				Float y = (this->object->get_height() * ((Float)0.5));
HXDLIN( 361)				point->set_x((point->x + x));
HXDLIN( 361)				point->set_y((point->y + y));
HXDLIN( 361)				return point;
            			}
            			break;
            			case (int)2: {
HXLINE( 352)				if (::Std_obj::isOfType(this->object,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 354)					Float y = ::hx::TCast<  ::flixel::FlxSprite >::cast(this->object)->origin->y;
HXDLIN( 354)					point->set_x((point->x + ::hx::TCast<  ::flixel::FlxSprite >::cast(this->object)->origin->x));
HXDLIN( 354)					point->set_y((point->y + y));
HXDLIN( 354)					return point;
            				}
            				else {
HXLINE( 358)					return point;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 364)				 ::flixel::math::FlxBasePoint offset = _g->_hx_getObject(0).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 365)				{
HXLINE( 365)					Float y = offset->y;
HXDLIN( 365)					point->set_x((point->x + offset->x));
HXDLIN( 365)					point->set_y((point->y + y));
            				}
HXDLIN( 365)				if (offset->_weak) {
HXLINE( 365)					offset->put();
            				}
HXDLIN( 365)				return point;
            			}
            			break;
            		}
HXLINE( 349)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,computeCenter,return )

void FlxPath_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_375_update)
HXLINE( 376)		if (::hx::IsNull( this->object )) {
HXLINE( 377)			return;
            		}
HXLINE( 379)		if (this->_firstUpdate) {
HXLINE( 381)			if (this->immovable) {
HXLINE( 383)				this->_wasObjectImmovable = this->object->immovable;
HXLINE( 384)				this->object->set_immovable(true);
            			}
HXLINE( 386)			this->_firstUpdate = false;
            		}
HXLINE( 390)		::flixel::path::FlxPath_obj::_point = this->computeCenter(::flixel::path::FlxPath_obj::_point);
HXLINE( 392)		 ::flixel::math::FlxBasePoint node = this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 393)		Float deltaX = (node->x - ::flixel::path::FlxPath_obj::_point->x);
HXLINE( 394)		Float deltaY = (node->y - ::flixel::path::FlxPath_obj::_point->y);
HXLINE( 396)		bool horizontalOnly = (this->axes == 1);
HXLINE( 397)		bool verticalOnly = (this->axes == 16);
HXLINE( 399)		if (horizontalOnly) {
HXLINE( 401)			Float _hx_tmp;
HXDLIN( 401)			if ((deltaX > 0)) {
HXLINE( 401)				_hx_tmp = deltaX;
            			}
            			else {
HXLINE( 401)				_hx_tmp = -(deltaX);
            			}
HXDLIN( 401)			if ((_hx_tmp < (this->speed * elapsed))) {
HXLINE( 403)				node = this->advancePath(null());
            			}
            		}
            		else {
HXLINE( 406)			if (verticalOnly) {
HXLINE( 408)				Float _hx_tmp;
HXDLIN( 408)				if ((deltaY > 0)) {
HXLINE( 408)					_hx_tmp = deltaY;
            				}
            				else {
HXLINE( 408)					_hx_tmp = -(deltaY);
            				}
HXDLIN( 408)				if ((_hx_tmp < (this->speed * elapsed))) {
HXLINE( 410)					node = this->advancePath(null());
            				}
            			}
            			else {
HXLINE( 415)				if ((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->speed * elapsed))) {
HXLINE( 417)					node = this->advancePath(null());
            				}
            			}
            		}
HXLINE( 422)		bool _hx_tmp;
HXDLIN( 422)		if (::hx::IsNotNull( this->object )) {
HXLINE( 422)			_hx_tmp = (this->speed != 0);
            		}
            		else {
HXLINE( 422)			_hx_tmp = false;
            		}
HXDLIN( 422)		if (_hx_tmp) {
HXLINE( 425)			::flixel::path::FlxPath_obj::_point = this->computeCenter(::flixel::path::FlxPath_obj::_point);
HXLINE( 427)			 ::flixel::math::FlxBasePoint _this = ::flixel::path::FlxPath_obj::_point;
HXDLIN( 427)			bool result;
HXDLIN( 427)			if ((::Math_obj::abs((_this->x - node->x)) <= ((Float)0.0000001))) {
HXLINE( 427)				result = (::Math_obj::abs((_this->y - node->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 427)				result = false;
            			}
HXDLIN( 427)			if (node->_weak) {
HXLINE( 427)				node->put();
            			}
HXDLIN( 427)			if (!(result)) {
HXLINE( 429)				this->calculateVelocity(node,horizontalOnly,verticalOnly);
            			}
            			else {
HXLINE( 433)				 ::flixel::math::FlxBasePoint this1 = this->object->velocity;
HXDLIN( 433)				this1->set_x(( (Float)(0) ));
HXDLIN( 433)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 437)			if (this->autoRotate) {
HXLINE( 439)				this->object->angularVelocity = ( (Float)(0) );
HXLINE( 440)				this->object->angularAcceleration = ( (Float)(0) );
HXLINE( 441)				this->object->set_angle((this->angle + this->angleOffset));
            			}
HXLINE( 444)			if (this->finished) {
HXLINE( 446)				this->cancel();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,update,(void))

void FlxPath_obj::calculateVelocity( ::flixel::math::FlxBasePoint node,bool horizontalOnly,bool verticalOnly){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_453_calculateVelocity)
HXDLIN( 453)		bool _hx_tmp;
HXDLIN( 453)		if (!(horizontalOnly)) {
HXDLIN( 453)			_hx_tmp = (::flixel::path::FlxPath_obj::_point->y == node->y);
            		}
            		else {
HXDLIN( 453)			_hx_tmp = true;
            		}
HXDLIN( 453)		if (_hx_tmp) {
HXLINE( 455)			{
HXLINE( 455)				Float x;
HXDLIN( 455)				if ((::flixel::path::FlxPath_obj::_point->x < node->x)) {
HXLINE( 455)					x = this->speed;
            				}
            				else {
HXLINE( 455)					x = -(this->speed);
            				}
HXDLIN( 455)				this->object->velocity->set_x(x);
            			}
HXLINE( 456)			Float _hx_tmp;
HXDLIN( 456)			if ((this->object->velocity->x < 0)) {
HXLINE( 456)				_hx_tmp = ( (Float)(180) );
            			}
            			else {
HXLINE( 456)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN( 456)			this->angle = _hx_tmp;
HXLINE( 458)			if (!(horizontalOnly)) {
HXLINE( 460)				this->object->velocity->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 463)			bool _hx_tmp;
HXDLIN( 463)			if (!(verticalOnly)) {
HXLINE( 463)				_hx_tmp = (::flixel::path::FlxPath_obj::_point->x == node->x);
            			}
            			else {
HXLINE( 463)				_hx_tmp = true;
            			}
HXDLIN( 463)			if (_hx_tmp) {
HXLINE( 465)				{
HXLINE( 465)					Float y;
HXDLIN( 465)					if ((::flixel::path::FlxPath_obj::_point->y < node->y)) {
HXLINE( 465)						y = this->speed;
            					}
            					else {
HXLINE( 465)						y = -(this->speed);
            					}
HXDLIN( 465)					this->object->velocity->set_y(y);
            				}
HXLINE( 466)				Float _hx_tmp;
HXDLIN( 466)				if ((this->object->velocity->y < 0)) {
HXLINE( 466)					_hx_tmp = ( (Float)(-90) );
            				}
            				else {
HXLINE( 466)					_hx_tmp = ( (Float)(90) );
            				}
HXDLIN( 466)				this->angle = _hx_tmp;
HXLINE( 468)				if (!(verticalOnly)) {
HXLINE( 470)					this->object->velocity->set_x(( (Float)(0) ));
            				}
            			}
            			else {
HXLINE( 475)				 ::flixel::math::FlxBasePoint this1 = this->object->velocity;
HXDLIN( 475)				{
HXLINE( 475)					Float y = node->y;
HXDLIN( 475)					this1->set_x(node->x);
HXDLIN( 475)					this1->set_y(y);
            				}
HXDLIN( 475)				if (node->_weak) {
HXLINE( 475)					node->put();
            				}
HXDLIN( 475)				 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 475)				 ::flixel::math::FlxBasePoint point = ::flixel::path::FlxPath_obj::_point;
HXDLIN( 475)				{
HXLINE( 475)					Float y1 = point->y;
HXDLIN( 475)					this2->set_x((this2->x - point->x));
HXDLIN( 475)					this2->set_y((this2->y - y1));
            				}
HXDLIN( 475)				if (point->_weak) {
HXLINE( 475)					point->put();
            				}
HXDLIN( 475)				 ::flixel::math::FlxBasePoint velocity = this2;
HXLINE( 476)				{
HXLINE( 476)					Float l = this->speed;
HXDLIN( 476)					bool _hx_tmp;
HXDLIN( 476)					if ((::Math_obj::abs(velocity->x) < ((Float)0.0000001))) {
HXLINE( 476)						_hx_tmp = (::Math_obj::abs(velocity->y) < ((Float)0.0000001));
            					}
            					else {
HXLINE( 476)						_hx_tmp = false;
            					}
HXDLIN( 476)					if (!(_hx_tmp)) {
HXLINE( 476)						Float a = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(velocity);
HXDLIN( 476)						velocity->set_x((l * ::Math_obj::cos(a)));
HXDLIN( 476)						velocity->set_y((l * ::Math_obj::sin(a)));
            					}
            				}
HXLINE( 477)				Float _hx_tmp1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(velocity);
HXDLIN( 477)				this->angle = (_hx_tmp1 * (( (Float)(180) ) / ::Math_obj::PI));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,calculateVelocity,(void))

 ::flixel::math::FlxBasePoint FlxPath_obj::advancePath(::hx::Null< bool >  __o_snap){
            		bool snap = __o_snap.Default(true);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_487_advancePath)
HXLINE( 488)		if (snap) {
HXLINE( 490)			 ::flixel::math::FlxBasePoint oldNode = this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 491)			if (::hx::IsNotNull( oldNode )) {
HXLINE( 493)				int this1 = this->axes;
HXDLIN( 493)				bool _hx_tmp;
HXDLIN( 493)				if ((this1 != 1)) {
HXLINE( 493)					_hx_tmp = (this1 == 17);
            				}
            				else {
HXLINE( 493)					_hx_tmp = true;
            				}
HXDLIN( 493)				if (_hx_tmp) {
HXLINE( 495)					this->object->set_x(oldNode->x);
HXLINE( 496)					{
HXLINE( 496)						 ::flixel::path::CenterMode _g = this->centerMode;
HXDLIN( 496)						switch((int)(_g->_hx_getIndex())){
            							case (int)0: {
            							}
            							break;
            							case (int)1: {
HXLINE( 504)								 ::flixel::FlxObject fh = this->object;
HXDLIN( 504)								Float fh1 = fh->x;
HXDLIN( 504)								fh->set_x((fh1 - (this->object->get_width() * ((Float)0.5))));
            							}
            							break;
            							case (int)2: {
HXLINE( 499)								if (::Std_obj::isOfType(this->object,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 500)									 ::flixel::FlxObject fh = this->object;
HXDLIN( 500)									fh->set_x((fh->x - ( ( ::flixel::FlxSprite)(this->object) )->origin->x));
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 501)								 ::flixel::math::FlxBasePoint offset = _g->_hx_getObject(0).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN( 501)								{
HXLINE( 502)									 ::flixel::FlxObject fh = this->object;
HXDLIN( 502)									fh->set_x((fh->x - offset->x));
            								}
            							}
            							break;
            						}
            					}
            				}
HXLINE( 508)				int this2 = this->axes;
HXDLIN( 508)				bool _hx_tmp1;
HXDLIN( 508)				if ((this2 != 16)) {
HXLINE( 508)					_hx_tmp1 = (this2 == 17);
            				}
            				else {
HXLINE( 508)					_hx_tmp1 = true;
            				}
HXDLIN( 508)				if (_hx_tmp1) {
HXLINE( 510)					this->object->set_y(oldNode->y);
HXLINE( 511)					{
HXLINE( 511)						 ::flixel::path::CenterMode _g = this->centerMode;
HXDLIN( 511)						switch((int)(_g->_hx_getIndex())){
            							case (int)0: {
            							}
            							break;
            							case (int)1: {
HXLINE( 519)								 ::flixel::FlxObject fh = this->object;
HXDLIN( 519)								Float fh1 = fh->y;
HXDLIN( 519)								fh->set_y((fh1 - (this->object->get_height() * ((Float)0.5))));
            							}
            							break;
            							case (int)2: {
HXLINE( 514)								if (::Std_obj::isOfType(this->object,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 515)									 ::flixel::FlxObject fh = this->object;
HXDLIN( 515)									fh->set_y((fh->y - ( ( ::flixel::FlxSprite)(this->object) )->origin->y));
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 516)								 ::flixel::math::FlxBasePoint offset = _g->_hx_getObject(0).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN( 516)								{
HXLINE( 517)									 ::flixel::FlxObject fh = this->object;
HXDLIN( 517)									fh->set_y((fh->y - offset->y));
            								}
            							}
            							break;
            						}
            					}
            				}
            			}
            		}
HXLINE( 526)		bool callComplete = false;
HXLINE( 527)		 ::flixel::path::FlxPath _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 527)		_hx_tmp->nodeIndex = (_hx_tmp->nodeIndex + this->_inc);
HXLINE( 529)		if ((this->_mode == 1)) {
HXLINE( 531)			if ((this->nodeIndex < 0)) {
HXLINE( 533)				this->nodeIndex = 0;
HXLINE( 534)				callComplete = true;
HXLINE( 535)				this->onEnd();
            			}
            		}
            		else {
HXLINE( 538)			if ((this->_mode == 16)) {
HXLINE( 540)				if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 542)					callComplete = true;
HXLINE( 543)					this->nodeIndex = 0;
            				}
            			}
            			else {
HXLINE( 546)				if ((this->_mode == 256)) {
HXLINE( 548)					if ((this->nodeIndex < 0)) {
HXLINE( 550)						this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 551)						callComplete = true;
HXLINE( 552)						if ((this->nodeIndex < 0)) {
HXLINE( 554)							this->nodeIndex = 0;
            						}
            					}
            				}
            				else {
HXLINE( 558)					if ((this->_mode == 4096)) {
HXLINE( 560)						if ((this->_inc > 0)) {
HXLINE( 562)							if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 564)								this->nodeIndex = (this->_nodes->length - 2);
HXLINE( 565)								callComplete = true;
HXLINE( 566)								if ((this->nodeIndex < 0)) {
HXLINE( 568)									this->nodeIndex = 0;
            								}
HXLINE( 570)								this->_inc = -(this->_inc);
            							}
            						}
            						else {
HXLINE( 573)							if ((this->nodeIndex < 0)) {
HXLINE( 575)								this->nodeIndex = 1;
HXLINE( 576)								callComplete = true;
HXLINE( 577)								if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 579)									this->nodeIndex = (this->_nodes->length - 1);
            								}
HXLINE( 581)								if ((this->nodeIndex < 0)) {
HXLINE( 583)									this->nodeIndex = 0;
            								}
HXLINE( 585)								this->_inc = -(this->_inc);
            							}
            						}
            					}
            					else {
HXLINE( 590)						if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 592)							this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 593)							callComplete = true;
HXLINE( 594)							this->onEnd();
            						}
            					}
            				}
            			}
            		}
HXLINE( 598)		bool _hx_tmp1;
HXDLIN( 598)		if (callComplete) {
HXLINE( 598)			_hx_tmp1 = ::hx::IsNotNull( this->onComplete );
            		}
            		else {
HXLINE( 598)			_hx_tmp1 = false;
            		}
HXDLIN( 598)		if (_hx_tmp1) {
HXLINE( 600)			this->onComplete(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 603)		return this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxBasePoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,advancePath,return )

 ::flixel::path::FlxPath FlxPath_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_612_cancel)
HXLINE( 613)		this->onEnd();
HXLINE( 615)		if (::hx::IsNotNull( this->object )) {
HXLINE( 617)			 ::flixel::math::FlxBasePoint this1 = this->object->velocity;
HXDLIN( 617)			this1->set_x(( (Float)(0) ));
HXDLIN( 617)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 619)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,cancel,return )

void FlxPath_obj::onEnd(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_626_onEnd)
HXLINE( 627)		this->finished = true;
HXLINE( 628)		this->active = false;
HXLINE( 629)		if (::hx::IsNotNull( this->_wasObjectImmovable )) {
HXLINE( 630)			this->object->set_immovable(( (bool)(this->_wasObjectImmovable) ));
            		}
HXLINE( 631)		this->_wasObjectImmovable = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,onEnd,(void))

void FlxPath_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_638_destroy)
HXLINE( 639)		::flixel::util::FlxDestroyUtil_obj::putArray(this->_nodes);
HXLINE( 640)		this->_nodes = null();
HXLINE( 641)		this->object = null();
HXLINE( 642)		this->onComplete = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

 ::flixel::path::FlxPath FlxPath_obj::add(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_654_add)
HXLINE( 655)		::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 655)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 655)		point->_inPool = false;
HXDLIN( 655)		_hx_tmp->push(point);
HXLINE( 656)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,return )

 ::flixel::path::FlxPath FlxPath_obj::addAt(Float x,Float y,int index){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_669_addAt)
HXLINE( 670)		if ((index < 0)) {
HXLINE( 671)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 672)		::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 672)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 672)		point->_inPool = false;
HXDLIN( 672)		_hx_tmp->insert(index,point);
HXLINE( 673)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,return )

 ::flixel::path::FlxPath FlxPath_obj::addPoint( ::flixel::math::FlxBasePoint node,::hx::Null< bool >  __o_asReference){
            		bool asReference = __o_asReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_687_addPoint)
HXLINE( 688)		if (asReference) {
HXLINE( 690)			this->_nodes->push(node);
            		}
            		else {
HXLINE( 694)			::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 694)			Float x = node->x;
HXDLIN( 694)			Float y = node->y;
HXDLIN( 694)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 694)			point->_inPool = false;
HXDLIN( 694)			_hx_tmp->push(point);
            		}
HXLINE( 696)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,return )

 ::flixel::path::FlxPath FlxPath_obj::addPointAt( ::flixel::math::FlxBasePoint node,int index,::hx::Null< bool >  __o_asReference){
            		bool asReference = __o_asReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_711_addPointAt)
HXLINE( 712)		if ((index < 0)) {
HXLINE( 713)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 714)		if (asReference) {
HXLINE( 716)			this->_nodes->insert(index,node);
            		}
            		else {
HXLINE( 720)			::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 720)			Float x = node->x;
HXDLIN( 720)			Float y = node->y;
HXDLIN( 720)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 720)			point->_inPool = false;
HXDLIN( 720)			_hx_tmp->insert(index,point);
            		}
HXLINE( 722)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::remove( ::flixel::math::FlxBasePoint node){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_733_remove)
HXLINE( 734)		int index = this->_nodes->indexOf(node,null());
HXLINE( 735)		if ((index >= 0)) {
HXLINE( 737)			return this->_nodes->splice(index,1)->__get(0).StaticCast<  ::flixel::math::FlxBasePoint >();
            		}
HXLINE( 739)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::removeAt(int index){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_749_removeAt)
HXLINE( 750)		if ((this->_nodes->length <= 0)) {
HXLINE( 752)			return null();
            		}
HXLINE( 754)		if ((index >= (this->_nodes->length - 1))) {
HXLINE( 756)			this->_nodes->pop().StaticCast<  ::flixel::math::FlxBasePoint >();
            		}
HXLINE( 758)		return this->_nodes->splice(index,1)->__get(0).StaticCast<  ::flixel::math::FlxBasePoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::head(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_767_head)
HXLINE( 768)		if ((this->_nodes->length > 0)) {
HXLINE( 770)			return this->_nodes->__get(0).StaticCast<  ::flixel::math::FlxBasePoint >();
            		}
HXLINE( 772)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::tail(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_781_tail)
HXLINE( 782)		if ((this->_nodes->length > 0)) {
HXLINE( 784)			return this->_nodes->__get((this->_nodes->length - 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
            		}
HXLINE( 786)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

::Array< ::Dynamic> FlxPath_obj::get_nodes(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_895_get_nodes)
HXDLIN( 895)		return this->_nodes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,get_nodes,return )

::Array< ::Dynamic> FlxPath_obj::set_nodes(::Array< ::Dynamic> nodes){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_899_set_nodes)
HXLINE( 900)		if (::hx::IsNotNull( nodes )) {
HXLINE( 902)			this->_nodes = nodes;
            		}
HXLINE( 904)		return this->_nodes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,set_nodes,return )

bool FlxPath_obj::set_immovable(bool value){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_908_set_immovable)
HXLINE( 909)		bool _hx_tmp;
HXDLIN( 909)		bool _hx_tmp1;
HXDLIN( 909)		if (!(this->_firstUpdate)) {
HXLINE( 909)			_hx_tmp1 = this->finished;
            		}
            		else {
HXLINE( 909)			_hx_tmp1 = true;
            		}
HXDLIN( 909)		if (!(_hx_tmp1)) {
HXLINE( 909)			_hx_tmp = (value == this->immovable);
            		}
            		else {
HXLINE( 909)			_hx_tmp = true;
            		}
HXDLIN( 909)		if (_hx_tmp) {
HXLINE( 910)			return (this->immovable = value);
            		}
HXLINE( 912)		if (value) {
HXLINE( 914)			this->_wasObjectImmovable = this->object->immovable;
HXLINE( 915)			this->object->set_immovable(true);
            		}
            		else {
HXLINE( 917)			if (::hx::IsNotNull( this->_wasObjectImmovable )) {
HXLINE( 919)				this->object->set_immovable(( (bool)(this->_wasObjectImmovable) ));
HXLINE( 920)				this->_wasObjectImmovable = null();
            			}
            		}
HXLINE( 923)		return (this->immovable = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,set_immovable,return )

bool FlxPath_obj::set_autoCenter(bool value){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_929_set_autoCenter)
HXLINE( 930)		 ::flixel::path::CenterMode _hx_tmp;
HXDLIN( 930)		if (value) {
HXLINE( 930)			_hx_tmp = ::flixel::path::CenterMode_obj::CENTER_dyn();
            		}
            		else {
HXLINE( 930)			_hx_tmp = ::flixel::path::CenterMode_obj::TOP_LEFT_dyn();
            		}
HXDLIN( 930)		this->centerMode = _hx_tmp;
HXLINE( 931)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,set_autoCenter,return )

bool FlxPath_obj::get_autoCenter(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_938_get_autoCenter)
HXDLIN( 938)		if ((this->centerMode->_hx_getIndex() == 1)) {
HXDLIN( 938)			return true;
            		}
            		else {
HXDLIN( 938)			return false;
            		}
HXDLIN( 938)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,get_autoCenter,return )

int FlxPath_obj::FORWARD;

int FlxPath_obj::BACKWARD;

int FlxPath_obj::LOOP_FORWARD;

int FlxPath_obj::LOOP_BACKWARD;

int FlxPath_obj::YOYO;

 ::flixel::math::FlxBasePoint FlxPath_obj::_point;


::hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new(::Array< ::Dynamic> nodes) {
	::hx::ObjectPtr< FlxPath_obj > __this = new FlxPath_obj();
	__this->__construct(nodes);
	return __this;
}

::hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> nodes) {
	FlxPath_obj *__this = (FlxPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPath_obj), true, "flixel.path.FlxPath"));
	*(void **)__this = FlxPath_obj::_hx_vtable;
	__this->__construct(nodes);
	return __this;
}

FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(_nodes,"_nodes");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(centerMode,"centerMode");
	HX_MARK_MEMBER_NAME(autoRotate,"autoRotate");
	HX_MARK_MEMBER_NAME(angleOffset,"angleOffset");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(axes,"axes");
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_inc,"_inc");
	HX_MARK_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_MARK_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nodes,"_nodes");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(centerMode,"centerMode");
	HX_VISIT_MEMBER_NAME(autoRotate,"autoRotate");
	HX_VISIT_MEMBER_NAME(angleOffset,"angleOffset");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(axes,"axes");
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_inc,"_inc");
	HX_VISIT_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_VISIT_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_VISIT_MEMBER_NAME(object,"object");
}

::hx::Val FlxPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axes") ) { return ::hx::Val( axes ); }
		if (HX_FIELD_EQ(inName,"_inc") ) { return ::hx::Val( _inc ); }
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head_dyn() ); }
		if (HX_FIELD_EQ(inName,"tail") ) { return ::hx::Val( tail_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_nodes() ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"_mode") ) { return ::hx::Val( _mode ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return ::hx::Val( addAt_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_nodes") ) { return ::hx::Val( _nodes ); }
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( object ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return ::hx::Val( setNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return ::hx::Val( removeAt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return ::hx::Val( immovable ); }
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { return ::hx::Val( nodeIndex ); }
		if (HX_FIELD_EQ(inName,"get_nodes") ) { return ::hx::Val( get_nodes_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_nodes") ) { return ::hx::Val( set_nodes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoCenter() ); }
		if (HX_FIELD_EQ(inName,"centerMode") ) { return ::hx::Val( centerMode ); }
		if (HX_FIELD_EQ(inName,"autoRotate") ) { return ::hx::Val( autoRotate ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return ::hx::Val( addPointAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angleOffset") ) { return ::hx::Val( angleOffset ); }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return ::hx::Val( advancePath_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { return ::hx::Val( _firstUpdate ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setProperties") ) { return ::hx::Val( setProperties_dyn() ); }
		if (HX_FIELD_EQ(inName,"computeCenter") ) { return ::hx::Val( computeCenter_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_autoCenter") ) { return ::hx::Val( set_autoCenter_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoCenter") ) { return ::hx::Val( get_autoCenter_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"calculateVelocity") ) { return ::hx::Val( calculateVelocity_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { return ::hx::Val( _wasObjectImmovable ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = ( _point ); return true; }
	}
	return false;
}

::hx::Val FlxPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axes") ) { axes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inc") ) { _inc=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_nodes(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_nodes") ) { _nodes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_immovable(inValue.Cast< bool >()) );immovable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { nodeIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoCenter(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"centerMode") ) { centerMode=inValue.Cast<  ::flixel::path::CenterMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoRotate") ) { autoRotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angleOffset") ) { angleOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { _firstUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { _wasObjectImmovable=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast<  ::flixel::math::FlxBasePoint >(); return true; }
	}
	return false;
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("nodes",31,b8,be,9f));
	outFields->push(HX_("_nodes",72,ff,a5,9b));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("immovable",0a,27,70,27));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("autoCenter",a4,36,a6,71));
	outFields->push(HX_("centerMode",d8,33,65,3a));
	outFields->push(HX_("autoRotate",2a,57,eb,36));
	outFields->push(HX_("angleOffset",c6,6f,7b,71));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("nodeIndex",b0,79,4a,62));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("axes",25,19,79,40));
	outFields->push(HX_("_mode",42,ef,71,fb));
	outFields->push(HX_("_inc",df,51,1b,3f));
	outFields->push(HX_("_wasObjectImmovable",41,d9,92,98));
	outFields->push(HX_("_firstUpdate",5a,64,b1,d1));
	outFields->push(HX_("object",bf,7e,3f,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxPath_obj,_nodes),HX_("_nodes",72,ff,a5,9b)},
	{::hx::fsFloat,(int)offsetof(FlxPath_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,immovable),HX_("immovable",0a,27,70,27)},
	{::hx::fsFloat,(int)offsetof(FlxPath_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsObject /*  ::flixel::path::CenterMode */ ,(int)offsetof(FlxPath_obj,centerMode),HX_("centerMode",d8,33,65,3a)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,autoRotate),HX_("autoRotate",2a,57,eb,36)},
	{::hx::fsFloat,(int)offsetof(FlxPath_obj,angleOffset),HX_("angleOffset",c6,6f,7b,71)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxPath_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,nodeIndex),HX_("nodeIndex",b0,79,4a,62)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,finished),HX_("finished",72,93,0e,95)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,axes),HX_("axes",25,19,79,40)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,_mode),HX_("_mode",42,ef,71,fb)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,_inc),HX_("_inc",df,51,1b,3f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxPath_obj,_wasObjectImmovable),HX_("_wasObjectImmovable",41,d9,92,98)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,_firstUpdate),HX_("_firstUpdate",5a,64,b1,d1)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxPath_obj,object),HX_("object",bf,7e,3f,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxPath_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxPath_obj::FORWARD,HX_("FORWARD",a5,b5,9e,65)},
	{::hx::fsInt,(void *) &FlxPath_obj::BACKWARD,HX_("BACKWARD",e3,6b,9e,80)},
	{::hx::fsInt,(void *) &FlxPath_obj::LOOP_FORWARD,HX_("LOOP_FORWARD",8a,81,3a,2b)},
	{::hx::fsInt,(void *) &FlxPath_obj::LOOP_BACKWARD,HX_("LOOP_BACKWARD",5e,08,55,a3)},
	{::hx::fsInt,(void *) &FlxPath_obj::YOYO,HX_("YOYO",2c,3d,10,3b)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(void *) &FlxPath_obj::_point,HX_("_point",91,fb,76,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxPath_obj_sMemberFields[] = {
	HX_("_nodes",72,ff,a5,9b),
	HX_("speed",87,97,69,81),
	HX_("immovable",0a,27,70,27),
	HX_("angle",d3,43,e2,22),
	HX_("centerMode",d8,33,65,3a),
	HX_("autoRotate",2a,57,eb,36),
	HX_("angleOffset",c6,6f,7b,71),
	HX_("active",c6,41,46,16),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("nodeIndex",b0,79,4a,62),
	HX_("finished",72,93,0e,95),
	HX_("axes",25,19,79,40),
	HX_("_mode",42,ef,71,fb),
	HX_("_inc",df,51,1b,3f),
	HX_("_wasObjectImmovable",41,d9,92,98),
	HX_("_firstUpdate",5a,64,b1,d1),
	HX_("object",bf,7e,3f,15),
	HX_("reset",cf,49,c8,e6),
	HX_("setProperties",35,3a,87,02),
	HX_("start",62,74,0b,84),
	HX_("restart",cf,c7,a5,6a),
	HX_("setNode",c4,4a,8e,0e),
	HX_("computeCenter",ac,54,51,70),
	HX_("update",09,86,05,87),
	HX_("calculateVelocity",a3,29,67,06),
	HX_("advancePath",47,83,f2,a8),
	HX_("cancel",7a,ed,33,b8),
	HX_("onEnd",fc,97,64,32),
	HX_("destroy",fa,2c,86,24),
	HX_("add",21,f2,49,00),
	HX_("addAt",74,b5,43,1c),
	HX_("addPoint",6f,da,ec,3f),
	HX_("addPointAt",42,cd,ab,b8),
	HX_("remove",44,9c,88,04),
	HX_("removeAt",57,6e,1b,ad),
	HX_("head",20,29,0b,45),
	HX_("tail",90,b6,f6,4c),
	HX_("get_nodes",88,14,68,e3),
	HX_("set_nodes",94,00,b9,c6),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("set_autoCenter",61,a7,bb,07),
	HX_("get_autoCenter",ed,be,9b,e7),
	::String(null()) };

static void FlxPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_MARK_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#endif

::hx::Class FlxPath_obj::__mClass;

static ::String FlxPath_obj_sStaticFields[] = {
	HX_("FORWARD",a5,b5,9e,65),
	HX_("BACKWARD",e3,6b,9e,80),
	HX_("LOOP_FORWARD",8a,81,3a,2b),
	HX_("LOOP_BACKWARD",5e,08,55,a3),
	HX_("YOYO",2c,3d,10,3b),
	HX_("_point",91,fb,76,c2),
	::String(null())
};

void FlxPath_obj::__register()
{
	FlxPath_obj _hx_dummy;
	FlxPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.path.FlxPath",a0,34,81,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPath_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPath_obj::__SetStatic;
	__mClass->mMarkFunc = FlxPath_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxPath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_82_boot)
HXDLIN(  82)		FORWARD = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_89_boot)
HXDLIN(  89)		BACKWARD = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_96_boot)
HXDLIN(  96)		LOOP_FORWARD = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_103_boot)
HXDLIN( 103)		LOOP_BACKWARD = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_110_boot)
HXDLIN( 110)		YOYO = 4096;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxBasePoint _hx_run(){
            			HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_115_boot)
HXDLIN( 115)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 115)			point->_inPool = false;
HXDLIN( 115)			return point;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_115_boot)
HXDLIN( 115)		_point = ( ( ::flixel::math::FlxBasePoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
} // end namespace path
