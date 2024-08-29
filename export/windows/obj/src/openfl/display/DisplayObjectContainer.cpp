#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d11618aadd936e00_113_new,"openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",113,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_155_addChild,"openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",155,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_190_addChildAt,"openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",190,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_307_areInaccessibleObjectsUnderPoint,"openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",307,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_323_contains,"openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",323,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_346_getChildAt,"openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",346,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_374_getChildByName,"openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",374,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_392_getChildIndex,"openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",392,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_421_getObjectsUnderPoint,"openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",421,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_448_removeChild,"openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",448,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_503_removeChildAt,"openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",503,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_524_removeChildren,"openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",524,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_553_resolve,"openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",553,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_605_setChildIndex,"openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",605,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_623_stopAllMovieClips,"openfl.display.DisplayObjectContainer","stopAllMovieClips",0x46e0f9ce,"openfl.display.DisplayObjectContainer.stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",623,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_638_swapChildren,"openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",638,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_660_swapChildrenAt,"openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",660,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_669___cleanup,"openfl.display.DisplayObjectContainer","__cleanup",0x2346b9e0,"openfl.display.DisplayObjectContainer.__cleanup","openfl/display/DisplayObjectContainer.hx",669,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_681___cleanupRemovedChildren,"openfl.display.DisplayObjectContainer","__cleanupRemovedChildren",0x4395feff,"openfl.display.DisplayObjectContainer.__cleanupRemovedChildren","openfl/display/DisplayObjectContainer.hx",681,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_695___dispatchChildren,"openfl.display.DisplayObjectContainer","__dispatchChildren",0x7a91a8dd,"openfl.display.DisplayObjectContainer.__dispatchChildren","openfl/display/DisplayObjectContainer.hx",695,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_713___enterFrame,"openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",713,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_720___getBounds,"openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",720,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_740___getFilterBounds,"openfl.display.DisplayObjectContainer","__getFilterBounds",0xbea2d3bf,"openfl.display.DisplayObjectContainer.__getFilterBounds","openfl/display/DisplayObjectContainer.hx",740,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_766___getRenderBounds,"openfl.display.DisplayObjectContainer","__getRenderBounds",0x21a0a9dd,"openfl.display.DisplayObjectContainer.__getRenderBounds","openfl/display/DisplayObjectContainer.hx",766,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_795___hitTest,"openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",795,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_884___hitTestMask,"openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",884,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_899___readGraphicsData,"openfl.display.DisplayObjectContainer","__readGraphicsData",0x782e37cf,"openfl.display.DisplayObjectContainer.__readGraphicsData","openfl/display/DisplayObjectContainer.hx",899,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_912___setStageReference,"openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",912,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_926___setWorldTransformInvalid,"openfl.display.DisplayObjectContainer","__setWorldTransformInvalid",0xa8fd351f,"openfl.display.DisplayObjectContainer.__setWorldTransformInvalid","openfl/display/DisplayObjectContainer.hx",926,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_942___stopAllMovieClips,"openfl.display.DisplayObjectContainer","__stopAllMovieClips",0xb7ce11ae,"openfl.display.DisplayObjectContainer.__stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",942,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_949___tabTest,"openfl.display.DisplayObjectContainer","__tabTest",0xbd744b03,"openfl.display.DisplayObjectContainer.__tabTest","openfl/display/DisplayObjectContainer.hx",949,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_970___update,"openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",970,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_986_get_numChildren,"openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",986,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_991_get_tabChildren,"openfl.display.DisplayObjectContainer","get_tabChildren",0x62bd2e27,"openfl.display.DisplayObjectContainer.get_tabChildren","openfl/display/DisplayObjectContainer.hx",991,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_995_set_tabChildren,"openfl.display.DisplayObjectContainer","set_tabChildren",0x5e88ab33,"openfl.display.DisplayObjectContainer.set_tabChildren","openfl/display/DisplayObjectContainer.hx",995,0x5f4d3d72)
namespace openfl{
namespace display{

void DisplayObjectContainer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_113_new)
HXLINE( 114)		super::__construct();
HXLINE( 116)		this->mouseChildren = true;
HXLINE( 117)		this->_hx___tabChildren = true;
HXLINE( 119)		this->_hx___children = ::Array_obj< ::Dynamic>::__new();
HXLINE( 120)		int length = null();
HXDLIN( 120)		bool fixed = null();
HXDLIN( 120)		::Array< ::Dynamic> array = null();
HXDLIN( 120)		this->_hx___removedChildren =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return new DisplayObjectContainer_obj; }

void *DisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic DisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectContainer_obj > _hx_result = new DisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
	}
}

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_155_addChild)
HXDLIN( 155)		return this->addChildAt(child,this->get_numChildren());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_190_addChildAt)
HXLINE( 191)		if (::hx::IsNull( child )) {
HXLINE( 193)			 ::openfl::errors::TypeError error =  ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Error #2007: Parameter child must be non-null.",30,5a,a7,aa));
HXLINE( 194)			error->errorID = 2007;
HXLINE( 195)			HX_STACK_DO_THROW(error);
            		}
            		else {
HXLINE( 197)			if (::hx::IsInstanceEq( child,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 199)				 ::openfl::errors::ArgumentError error =  ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Error #2024: An object cannot be added as a child of itself.",00,78,82,92));
HXLINE( 200)				error->errorID = 2024;
HXLINE( 201)				HX_STACK_DO_THROW(error);
            			}
            			else {
HXLINE( 204)				if (::hx::IsInstanceEq( child->stage,child )) {
HXLINE( 206)					 ::openfl::errors::ArgumentError error =  ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Error #3783: A Stage object cannot be added as the child of another object.",fa,51,93,42));
HXLINE( 207)					error->errorID = 3783;
HXLINE( 208)					HX_STACK_DO_THROW(error);
            				}
            			}
            		}
HXLINE( 212)		bool _hx_tmp;
HXDLIN( 212)		if ((index <= this->_hx___children->length)) {
HXLINE( 212)			_hx_tmp = (index < 0);
            		}
            		else {
HXLINE( 212)			_hx_tmp = true;
            		}
HXDLIN( 212)		if (_hx_tmp) {
HXLINE( 214)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid index position ",80,59,50,86) + index)));
            		}
HXLINE( 217)		if (::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 219)			if (::hx::IsInstanceNotEq( this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >(),child )) {
HXLINE( 221)				this->_hx___children->remove(child);
HXLINE( 222)				this->_hx___children->insert(index,child);
HXLINE( 224)				if (!(this->_hx___renderDirty)) {
HXLINE( 224)					this->_hx___renderDirty = true;
HXDLIN( 224)					this->_hx___setParentRenderDirty();
            				}
            			}
            		}
            		else {
HXLINE( 229)			if (::hx::IsNotNull( child->parent )) {
HXLINE( 231)				child->parent->removeChild(child);
            			}
HXLINE( 234)			this->_hx___children->insert(index,child);
HXLINE( 235)			child->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 237)			bool addedToStage;
HXDLIN( 237)			if (::hx::IsNotNull( this->stage )) {
HXLINE( 237)				addedToStage = ::hx::IsNull( child->stage );
            			}
            			else {
HXLINE( 237)				addedToStage = false;
            			}
HXLINE( 239)			if (addedToStage) {
HXLINE( 241)				child->_hx___setStageReference(this->stage);
            			}
HXLINE( 244)			child->_hx___setTransformDirty();
HXLINE( 245)			if (!(child->_hx___renderDirty)) {
HXLINE( 245)				child->_hx___renderDirty = true;
HXDLIN( 245)				child->_hx___setParentRenderDirty();
            			}
HXLINE( 246)			if (!(this->_hx___renderDirty)) {
HXLINE( 246)				this->_hx___renderDirty = true;
HXDLIN( 246)				this->_hx___setParentRenderDirty();
            			}
HXLINE( 252)			 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("added",c0,d4,43,1c),null(),null());
HXLINE( 254)			event->bubbles = true;
HXLINE( 256)			event->target = child;
HXLINE( 258)			child->_hx___dispatchWithCapture(event);
HXLINE( 264)			if (addedToStage) {
HXLINE( 270)				event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("addedToStage",63,22,55,0c),false,false);
HXLINE( 273)				child->_hx___dispatchWithCapture(event);
HXLINE( 274)				child->_hx___dispatchChildren(event);
            			}
            		}
HXLINE( 282)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_307_areInaccessibleObjectsUnderPoint)
HXDLIN( 307)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_323_contains)
HXLINE( 324)		while(true){
HXLINE( 324)			bool _hx_tmp;
HXDLIN( 324)			if (::hx::IsInstanceNotEq( child,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 324)				_hx_tmp = ::hx::IsNotNull( child );
            			}
            			else {
HXLINE( 324)				_hx_tmp = false;
            			}
HXDLIN( 324)			if (!(_hx_tmp)) {
HXLINE( 324)				goto _hx_goto_4;
            			}
HXLINE( 326)			child = child->parent;
            		}
            		_hx_goto_4:;
HXLINE( 329)		return ::hx::IsInstanceEq( child,::hx::ObjectPtr<OBJ_>(this) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_346_getChildAt)
HXLINE( 347)		bool _hx_tmp;
HXDLIN( 347)		if ((index >= 0)) {
HXLINE( 347)			_hx_tmp = (index < this->_hx___children->length);
            		}
            		else {
HXLINE( 347)			_hx_tmp = false;
            		}
HXDLIN( 347)		if (_hx_tmp) {
HXLINE( 349)			return this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >();
            		}
HXLINE( 352)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_374_getChildByName)
HXLINE( 375)		{
HXLINE( 375)			int _g = 0;
HXDLIN( 375)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 375)			while((_g < _g1->length)){
HXLINE( 375)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 375)				_g = (_g + 1);
HXLINE( 377)				if ((child->get_name() == name)) {
HXLINE( 377)					return child;
            				}
            			}
            		}
HXLINE( 380)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_392_getChildIndex)
HXLINE( 393)		{
HXLINE( 393)			int _g = 0;
HXDLIN( 393)			int _g1 = this->_hx___children->length;
HXDLIN( 393)			while((_g < _g1)){
HXLINE( 393)				_g = (_g + 1);
HXDLIN( 393)				int i = (_g - 1);
HXLINE( 395)				if (::hx::IsInstanceEq( this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >(),child )) {
HXLINE( 395)					return i;
            				}
            			}
            		}
HXLINE( 398)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

::Array< ::Dynamic> DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_421_getObjectsUnderPoint)
HXLINE( 422)		::Array< ::Dynamic> stack = ::Array_obj< ::Dynamic>::__new();
HXLINE( 423)		this->_hx___hitTest(point->x,point->y,false,stack,false,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 424)		stack->reverse();
HXLINE( 425)		return stack;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_448_removeChild)
HXLINE( 449)		bool _hx_tmp;
HXDLIN( 449)		if (::hx::IsNotNull( child )) {
HXLINE( 449)			_hx_tmp = ::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 449)			_hx_tmp = false;
            		}
HXDLIN( 449)		if (_hx_tmp) {
HXLINE( 451)			child->_hx___setTransformDirty();
HXLINE( 452)			if (!(child->_hx___renderDirty)) {
HXLINE( 452)				child->_hx___renderDirty = true;
HXDLIN( 452)				child->_hx___setParentRenderDirty();
            			}
HXLINE( 453)			if (!(this->_hx___renderDirty)) {
HXLINE( 453)				this->_hx___renderDirty = true;
HXDLIN( 453)				this->_hx___setParentRenderDirty();
            			}
HXLINE( 455)			 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("removed",a0,1f,00,f3),true,null());
HXLINE( 456)			child->_hx___dispatchWithCapture(event);
HXLINE( 458)			if (::hx::IsNotNull( this->stage )) {
HXLINE( 460)				bool _hx_tmp;
HXDLIN( 460)				if (::hx::IsNotNull( child->stage )) {
HXLINE( 460)					_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),child );
            				}
            				else {
HXLINE( 460)					_hx_tmp = false;
            				}
HXDLIN( 460)				if (_hx_tmp) {
HXLINE( 462)					this->stage->set_focus(null());
            				}
HXLINE( 465)				 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("removedFromStage",34,21,76,ba),false,false);
HXLINE( 466)				child->_hx___dispatchWithCapture(event);
HXLINE( 467)				child->_hx___dispatchChildren(event);
HXLINE( 468)				child->_hx___setStageReference(null());
            			}
HXLINE( 471)			child->parent = null();
HXLINE( 472)			this->_hx___children->remove(child);
HXLINE( 473)			this->_hx___removedChildren->push(child);
HXLINE( 474)			child->_hx___setTransformDirty();
            		}
HXLINE( 477)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_503_removeChildAt)
HXLINE( 504)		bool _hx_tmp;
HXDLIN( 504)		if ((index >= 0)) {
HXLINE( 504)			_hx_tmp = (index < this->_hx___children->length);
            		}
            		else {
HXLINE( 504)			_hx_tmp = false;
            		}
HXDLIN( 504)		if (_hx_tmp) {
HXLINE( 506)			return this->removeChild(this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >());
            		}
HXLINE( 509)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

void DisplayObjectContainer_obj::removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_524_removeChildren)
HXLINE( 525)		if ((endIndex == (int)2147483647)) {
HXLINE( 527)			endIndex = (this->_hx___children->length - 1);
HXLINE( 529)			if ((endIndex < 0)) {
HXLINE( 531)				return;
            			}
            		}
HXLINE( 535)		if ((beginIndex > (this->_hx___children->length - 1))) {
HXLINE( 537)			return;
            		}
            		else {
HXLINE( 539)			bool _hx_tmp;
HXDLIN( 539)			bool _hx_tmp1;
HXDLIN( 539)			if ((endIndex >= beginIndex)) {
HXLINE( 539)				_hx_tmp1 = (beginIndex < 0);
            			}
            			else {
HXLINE( 539)				_hx_tmp1 = true;
            			}
HXDLIN( 539)			if (!(_hx_tmp1)) {
HXLINE( 539)				_hx_tmp = (endIndex > this->_hx___children->length);
            			}
            			else {
HXLINE( 539)				_hx_tmp = true;
            			}
HXDLIN( 539)			if (_hx_tmp) {
HXLINE( 541)				HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51)));
            			}
            		}
HXLINE( 544)		int numRemovals = (endIndex - beginIndex);
HXLINE( 545)		while((numRemovals >= 0)){
HXLINE( 547)			this->removeChildAt(beginIndex);
HXLINE( 548)			numRemovals = (numRemovals - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve(::String fieldName){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_553_resolve)
HXLINE( 554)		if (::hx::IsNull( this->_hx___children )) {
HXLINE( 554)			return null();
            		}
HXLINE( 556)		{
HXLINE( 556)			int _g = 0;
HXDLIN( 556)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 556)			while((_g < _g1->length)){
HXLINE( 556)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 556)				_g = (_g + 1);
HXLINE( 558)				if ((child->get_name() == fieldName)) {
HXLINE( 560)					return child;
            				}
            			}
            		}
HXLINE( 564)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_605_setChildIndex)
HXDLIN( 605)		bool _hx_tmp;
HXDLIN( 605)		bool _hx_tmp1;
HXDLIN( 605)		if ((index >= 0)) {
HXDLIN( 605)			_hx_tmp1 = (index <= this->_hx___children->length);
            		}
            		else {
HXDLIN( 605)			_hx_tmp1 = false;
            		}
HXDLIN( 605)		if (_hx_tmp1) {
HXDLIN( 605)			_hx_tmp = ::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 605)			_hx_tmp = false;
            		}
HXDLIN( 605)		if (_hx_tmp) {
HXLINE( 607)			this->_hx___children->remove(child);
HXLINE( 608)			this->_hx___children->insert(index,child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

void DisplayObjectContainer_obj::stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_623_stopAllMovieClips)
HXDLIN( 623)		this->_hx___stopAllMovieClips();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,stopAllMovieClips,(void))

void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1, ::openfl::display::DisplayObject child2){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_638_swapChildren)
HXDLIN( 638)		bool _hx_tmp;
HXDLIN( 638)		if (::hx::IsInstanceEq( child1->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN( 638)			_hx_tmp = ::hx::IsInstanceEq( child2->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 638)			_hx_tmp = false;
            		}
HXDLIN( 638)		if (_hx_tmp) {
HXLINE( 640)			int index1 = this->_hx___children->indexOf(child1,null());
HXLINE( 641)			int index2 = this->_hx___children->indexOf(child2,null());
HXLINE( 643)			this->_hx___children[index1] = child2;
HXLINE( 644)			this->_hx___children[index2] = child1;
HXLINE( 646)			if (!(this->_hx___renderDirty)) {
HXLINE( 646)				this->_hx___renderDirty = true;
HXDLIN( 646)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

void DisplayObjectContainer_obj::swapChildrenAt(int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_660_swapChildrenAt)
HXLINE( 661)		 ::openfl::display::DisplayObject swap = this->_hx___children->__get(index1).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 662)		this->_hx___children[index1] = this->_hx___children->__get(index2).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 663)		this->_hx___children[index2] = swap;
HXLINE( 664)		swap = null();
HXLINE( 665)		if (!(this->_hx___renderDirty)) {
HXLINE( 665)			this->_hx___renderDirty = true;
HXDLIN( 665)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

void DisplayObjectContainer_obj::_hx___cleanup(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_669___cleanup)
HXLINE( 670)		this->super::_hx___cleanup();
HXLINE( 672)		{
HXLINE( 672)			int _g = 0;
HXDLIN( 672)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 672)			while((_g < _g1->length)){
HXLINE( 672)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 672)				_g = (_g + 1);
HXLINE( 674)				child->_hx___cleanup();
            			}
            		}
HXLINE( 677)		{
HXLINE( 677)			{
HXLINE( 677)				 ::Dynamic orphan = this->_hx___removedChildren->iterator();
HXDLIN( 677)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 677)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 677)					if (::hx::IsNull( orphan1->stage )) {
HXLINE( 677)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN( 677)			this->_hx___removedChildren->set_length(0);
            		}
            	}


void DisplayObjectContainer_obj::_hx___cleanupRemovedChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_681___cleanupRemovedChildren)
HXLINE( 682)		{
HXLINE( 682)			 ::Dynamic orphan = this->_hx___removedChildren->iterator();
HXDLIN( 682)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 682)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 684)				if (::hx::IsNull( orphan1->stage )) {
HXLINE( 686)					orphan1->_hx___cleanup();
            				}
            			}
            		}
HXLINE( 690)		this->_hx___removedChildren->set_length(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,_hx___cleanupRemovedChildren,(void))

void DisplayObjectContainer_obj::_hx___dispatchChildren( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_695___dispatchChildren)
HXDLIN( 695)		if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 697)			int _g = 0;
HXDLIN( 697)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 697)			while((_g < _g1->length)){
HXLINE( 697)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 697)				_g = (_g + 1);
HXLINE( 699)				event->target = child;
HXLINE( 701)				if (!(child->_hx___dispatchWithCapture(event))) {
HXLINE( 703)					goto _hx_goto_27;
            				}
HXLINE( 706)				child->_hx___dispatchChildren(event);
            			}
            			_hx_goto_27:;
            		}
            	}


void DisplayObjectContainer_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_713___enterFrame)
HXDLIN( 713)		int _g = 0;
HXDLIN( 713)		::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 713)		while((_g < _g1->length)){
HXDLIN( 713)			 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 713)			_g = (_g + 1);
HXLINE( 715)			child->_hx___enterFrame(deltaTime);
            		}
            	}


void DisplayObjectContainer_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_720___getBounds)
HXLINE( 721)		this->super::_hx___getBounds(rect,matrix);
HXLINE( 723)		if ((this->_hx___children->length == 0)) {
HXLINE( 723)			return;
            		}
HXLINE( 725)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 727)		{
HXLINE( 727)			int _g = 0;
HXDLIN( 727)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 727)			while((_g < _g1->length)){
HXLINE( 727)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 727)				_g = (_g + 1);
HXLINE( 729)				bool _hx_tmp;
HXDLIN( 729)				if ((child->_hx___scaleX != 0)) {
HXLINE( 729)					_hx_tmp = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 729)					_hx_tmp = true;
            				}
HXDLIN( 729)				if (_hx_tmp) {
HXLINE( 729)					continue;
            				}
HXLINE( 731)				{
HXLINE( 731)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 731)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 731)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 731)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 731)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 731)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 731)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 733)				child->_hx___getBounds(rect,childWorldTransform);
            			}
            		}
HXLINE( 736)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void DisplayObjectContainer_obj::_hx___getFilterBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_740___getFilterBounds)
HXLINE( 741)		this->super::_hx___getFilterBounds(rect,matrix);
HXLINE( 742)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 742)			return;
            		}
HXLINE( 744)		if ((this->_hx___children->length == 0)) {
HXLINE( 744)			return;
            		}
HXLINE( 746)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 748)		{
HXLINE( 748)			int _g = 0;
HXDLIN( 748)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 748)			while((_g < _g1->length)){
HXLINE( 748)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 748)				_g = (_g + 1);
HXLINE( 750)				bool _hx_tmp;
HXDLIN( 750)				bool _hx_tmp1;
HXDLIN( 750)				if ((child->_hx___scaleX != 0)) {
HXLINE( 750)					_hx_tmp1 = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 750)					_hx_tmp1 = true;
            				}
HXDLIN( 750)				if (!(_hx_tmp1)) {
HXLINE( 750)					_hx_tmp = child->_hx___isMask;
            				}
            				else {
HXLINE( 750)					_hx_tmp = true;
            				}
HXDLIN( 750)				if (_hx_tmp) {
HXLINE( 750)					continue;
            				}
HXLINE( 752)				{
HXLINE( 752)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 752)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 752)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 752)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 752)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 752)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 752)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 754)				 ::openfl::geom::Rectangle childRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 756)				child->_hx___getFilterBounds(childRect,childWorldTransform);
HXLINE( 757)				rect->_hx___expand(childRect->x,childRect->y,childRect->width,childRect->height);
HXLINE( 759)				::openfl::geom::Rectangle_obj::_hx___pool->release(childRect);
            			}
            		}
HXLINE( 762)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void DisplayObjectContainer_obj::_hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_766___getRenderBounds)
HXLINE( 767)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 769)			this->super::_hx___getRenderBounds(rect,matrix);
HXLINE( 770)			return;
            		}
            		else {
HXLINE( 774)			this->super::_hx___getBounds(rect,matrix);
            		}
HXLINE( 777)		if ((this->_hx___children->length == 0)) {
HXLINE( 777)			return;
            		}
HXLINE( 779)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 781)		{
HXLINE( 781)			int _g = 0;
HXDLIN( 781)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 781)			while((_g < _g1->length)){
HXLINE( 781)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 781)				_g = (_g + 1);
HXLINE( 783)				bool _hx_tmp;
HXDLIN( 783)				bool _hx_tmp1;
HXDLIN( 783)				if ((child->_hx___scaleX != 0)) {
HXLINE( 783)					_hx_tmp1 = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 783)					_hx_tmp1 = true;
            				}
HXDLIN( 783)				if (!(_hx_tmp1)) {
HXLINE( 783)					_hx_tmp = child->_hx___isMask;
            				}
            				else {
HXLINE( 783)					_hx_tmp = true;
            				}
HXDLIN( 783)				if (_hx_tmp) {
HXLINE( 783)					continue;
            				}
HXLINE( 785)				{
HXLINE( 785)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 785)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 785)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 785)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 785)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 785)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 785)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 787)				child->_hx___getRenderBounds(rect,childWorldTransform);
            			}
            		}
HXLINE( 790)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


bool DisplayObjectContainer_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_795___hitTest)
HXLINE( 796)		bool _hx_tmp;
HXDLIN( 796)		bool _hx_tmp1;
HXDLIN( 796)		if (hitObject->get_visible()) {
HXLINE( 796)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE( 796)			_hx_tmp1 = true;
            		}
HXDLIN( 796)		if (!(_hx_tmp1)) {
HXLINE( 796)			bool _hx_tmp1;
HXDLIN( 796)			if (interactiveOnly) {
HXLINE( 796)				_hx_tmp1 = !(this->mouseEnabled);
            			}
            			else {
HXLINE( 796)				_hx_tmp1 = false;
            			}
HXDLIN( 796)			if (_hx_tmp1) {
HXLINE( 796)				_hx_tmp = !(this->mouseChildren);
            			}
            			else {
HXLINE( 796)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 796)			_hx_tmp = true;
            		}
HXDLIN( 796)		if (_hx_tmp) {
HXLINE( 796)			return false;
            		}
HXLINE( 797)		bool _hx_tmp2;
HXDLIN( 797)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 797)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 797)			_hx_tmp2 = false;
            		}
HXDLIN( 797)		if (_hx_tmp2) {
HXLINE( 797)			return false;
            		}
HXLINE( 799)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 801)			 ::openfl::geom::Point point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 802)			point->setTo(x,y);
HXLINE( 803)			{
HXLINE( 803)				 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN( 803)				Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 803)				if ((norm == 0)) {
HXLINE( 803)					point->x = -(_this->tx);
HXDLIN( 803)					point->y = -(_this->ty);
            				}
            				else {
HXLINE( 803)					Float px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - point->y)) + (_this->d * (point->x - _this->tx))));
HXDLIN( 803)					point->y = ((((Float)1.0) / norm) * ((_this->a * (point->y - _this->ty)) + (_this->b * (_this->tx - point->x))));
HXDLIN( 803)					point->x = px;
            				}
            			}
HXLINE( 805)			if (!(this->_hx___scrollRect->containsPoint(point))) {
HXLINE( 807)				::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 808)				return false;
            			}
HXLINE( 811)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 814)		int i = this->_hx___children->length;
HXLINE( 815)		if (interactiveOnly) {
HXLINE( 817)			bool _hx_tmp;
HXDLIN( 817)			if (::hx::IsNotNull( stack )) {
HXLINE( 817)				_hx_tmp = !(this->mouseChildren);
            			}
            			else {
HXLINE( 817)				_hx_tmp = true;
            			}
HXDLIN( 817)			if (_hx_tmp) {
HXLINE( 819)				while(true){
HXLINE( 819)					i = (i - 1);
HXDLIN( 819)					if (!((i >= 0))) {
HXLINE( 819)						goto _hx_goto_37;
            					}
HXLINE( 821)					if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,null(),true,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 823)						if (::hx::IsNotNull( stack )) {
HXLINE( 825)							stack->push(hitObject);
            						}
HXLINE( 828)						return true;
            					}
            				}
            				_hx_goto_37:;
            			}
            			else {
HXLINE( 832)				if (::hx::IsNotNull( stack )) {
HXLINE( 834)					int length = stack->length;
HXLINE( 836)					bool interactive = false;
HXLINE( 837)					bool hitTest = false;
HXLINE( 839)					while(true){
HXLINE( 839)						i = (i - 1);
HXDLIN( 839)						if (!((i >= 0))) {
HXLINE( 839)							goto _hx_goto_38;
            						}
HXLINE( 841)						interactive = this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___getInteractive(null());
HXLINE( 843)						bool _hx_tmp;
HXDLIN( 843)						if (!(interactive)) {
HXLINE( 843)							if (this->mouseEnabled) {
HXLINE( 843)								_hx_tmp = !(hitTest);
            							}
            							else {
HXLINE( 843)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 843)							_hx_tmp = true;
            						}
HXDLIN( 843)						if (_hx_tmp) {
HXLINE( 845)							if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,stack,true,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 847)								hitTest = true;
HXLINE( 849)								bool _hx_tmp;
HXDLIN( 849)								if (interactive) {
HXLINE( 849)									_hx_tmp = (stack->length > length);
            								}
            								else {
HXLINE( 849)									_hx_tmp = false;
            								}
HXDLIN( 849)								if (_hx_tmp) {
HXLINE( 851)									goto _hx_goto_38;
            								}
            							}
            						}
            					}
            					_hx_goto_38:;
HXLINE( 857)					if (hitTest) {
HXLINE( 859)						stack->insert(length,hitObject);
HXLINE( 860)						return true;
            					}
            				}
            			}
            		}
            		else {
HXLINE( 866)			bool hitTest = false;
HXLINE( 868)			while(true){
HXLINE( 868)				i = (i - 1);
HXDLIN( 868)				if (!((i >= 0))) {
HXLINE( 868)					goto _hx_goto_39;
            				}
HXLINE( 870)				if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,stack,false,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 872)					hitTest = true;
HXLINE( 873)					if (::hx::IsNull( stack )) {
HXLINE( 873)						goto _hx_goto_39;
            					}
            				}
            			}
            			_hx_goto_39:;
HXLINE( 877)			return hitTest;
            		}
HXLINE( 880)		return false;
            	}


bool DisplayObjectContainer_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_884___hitTestMask)
HXLINE( 885)		int i = this->_hx___children->length;
HXLINE( 887)		while(true){
HXLINE( 887)			i = (i - 1);
HXDLIN( 887)			if (!((i >= 0))) {
HXLINE( 887)				goto _hx_goto_41;
            			}
HXLINE( 889)			if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTestMask(x,y)) {
HXLINE( 891)				return true;
            			}
            		}
            		_hx_goto_41:;
HXLINE( 895)		return false;
            	}


void DisplayObjectContainer_obj::_hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_899___readGraphicsData)
HXLINE( 900)		this->super::_hx___readGraphicsData(graphicsData,recurse);
HXLINE( 902)		if (recurse) {
HXLINE( 904)			int _g = 0;
HXDLIN( 904)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 904)			while((_g < _g1->length)){
HXLINE( 904)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 904)				_g = (_g + 1);
HXLINE( 906)				child->_hx___readGraphicsData(graphicsData,recurse);
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___setStageReference( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_912___setStageReference)
HXLINE( 913)		this->super::_hx___setStageReference(stage);
HXLINE( 915)		if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 917)			int _g = 0;
HXDLIN( 917)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 917)			while((_g < _g1->length)){
HXLINE( 917)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 917)				_g = (_g + 1);
HXLINE( 919)				child->_hx___setStageReference(stage);
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___setWorldTransformInvalid(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_926___setWorldTransformInvalid)
HXDLIN( 926)		if (!(this->_hx___worldTransformInvalid)) {
HXLINE( 928)			this->_hx___worldTransformInvalid = true;
HXLINE( 930)			if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 932)				int _g = 0;
HXDLIN( 932)				::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 932)				while((_g < _g1->length)){
HXLINE( 932)					 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 932)					_g = (_g + 1);
HXLINE( 934)					child->_hx___setWorldTransformInvalid();
            				}
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_942___stopAllMovieClips)
HXDLIN( 942)		int _g = 0;
HXDLIN( 942)		::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 942)		while((_g < _g1->length)){
HXDLIN( 942)			 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 942)			_g = (_g + 1);
HXLINE( 944)			child->_hx___stopAllMovieClips();
            		}
            	}


void DisplayObjectContainer_obj::_hx___tabTest(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_949___tabTest)
HXLINE( 950)		this->super::_hx___tabTest(stack);
HXLINE( 952)		if (!(this->get_tabChildren())) {
HXLINE( 952)			return;
            		}
HXLINE( 954)		bool interactive = false;
HXLINE( 955)		 ::openfl::display::InteractiveObject interactiveObject = null();
HXLINE( 957)		{
HXLINE( 957)			int _g = 0;
HXDLIN( 957)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 957)			while((_g < _g1->length)){
HXLINE( 957)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 957)				_g = (_g + 1);
HXLINE( 959)				interactive = child->_hx___getInteractive(null());
HXLINE( 961)				if (interactive) {
HXLINE( 963)					interactiveObject = ( ( ::openfl::display::InteractiveObject)(child) );
HXLINE( 964)					interactiveObject->_hx___tabTest(stack);
            				}
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___update(bool transformOnly,bool updateChildren){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_970___update)
HXLINE( 971)		this->super::_hx___update(transformOnly,updateChildren);
HXLINE( 973)		if (updateChildren) {
HXLINE( 975)			int _g = 0;
HXDLIN( 975)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 975)			while((_g < _g1->length)){
HXLINE( 975)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 975)				_g = (_g + 1);
HXLINE( 977)				child->_hx___update(transformOnly,true);
            			}
            		}
            	}


int DisplayObjectContainer_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_986_get_numChildren)
HXDLIN( 986)		return this->_hx___children->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_991_get_tabChildren)
HXDLIN( 991)		return this->_hx___tabChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

bool DisplayObjectContainer_obj::set_tabChildren(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_995_set_tabChildren)
HXLINE( 996)		if ((this->_hx___tabChildren != value)) {
HXLINE( 998)			this->_hx___tabChildren = value;
HXLINE(1000)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("tabChildrenChange",44,91,b5,de),true,false));
            		}
HXLINE(1003)		return this->_hx___tabChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )


::hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new() {
	::hx::ObjectPtr< DisplayObjectContainer_obj > __this = new DisplayObjectContainer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DisplayObjectContainer_obj *__this = (DisplayObjectContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectContainer_obj), true, "openfl.display.DisplayObjectContainer"));
	*(void **)__this = DisplayObjectContainer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(_hx___removedChildren,"__removedChildren");
	HX_MARK_MEMBER_NAME(_hx___tabChildren,"__tabChildren");
	 ::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(_hx___removedChildren,"__removedChildren");
	HX_VISIT_MEMBER_NAME(_hx___tabChildren,"__tabChildren");
	 ::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectContainer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return ::hx::Val( _hx___cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"__tabTest") ) { return ::hx::Val( _hx___tabTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numChildren() ); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabChildren() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return ::hx::Val( swapChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return ::hx::Val( mouseChildren ); }
		if (HX_FIELD_EQ(inName,"__tabChildren") ) { return ::hx::Val( _hx___tabChildren ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return ::hx::Val( setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return ::hx::Val( getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return ::hx::Val( swapChildrenAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return ::hx::Val( get_tabChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return ::hx::Val( set_tabChildren_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return ::hx::Val( _hx___removedChildren ); }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return ::hx::Val( stopAllMovieClips_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getFilterBounds") ) { return ::hx::Val( _hx___getFilterBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return ::hx::Val( _hx___getRenderBounds_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return ::hx::Val( _hx___dispatchChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return ::hx::Val( _hx___readGraphicsData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return ::hx::Val( _hx___setStageReference_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return ::hx::Val( _hx___stopAllMovieClips_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return ::hx::Val( getObjectsUnderPoint_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__cleanupRemovedChildren") ) { return ::hx::Val( _hx___cleanupRemovedChildren_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__setWorldTransformInvalid") ) { return ::hx::Val( _hx___setWorldTransformInvalid_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return ::hx::Val( areInaccessibleObjectsUnderPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DisplayObjectContainer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabChildren(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tabChildren") ) { _hx___tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { _hx___removedChildren=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mouseChildren",84,18,6b,ff));
	outFields->push(HX_("numChildren",a5,69,80,5c));
	outFields->push(HX_("tabChildren",b4,0c,86,4b));
	outFields->push(HX_("__removedChildren",df,c5,0e,d3));
	outFields->push(HX_("__tabChildren",94,4d,fe,93));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectContainer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_("mouseChildren",84,18,6b,ff)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(DisplayObjectContainer_obj,_hx___removedChildren),HX_("__removedChildren",df,c5,0e,d3)},
	{::hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,_hx___tabChildren),HX_("__tabChildren",94,4d,fe,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectContainer_obj_sMemberFields[] = {
	HX_("mouseChildren",84,18,6b,ff),
	HX_("__removedChildren",df,c5,0e,d3),
	HX_("__tabChildren",94,4d,fe,93),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("areInaccessibleObjectsUnderPoint",3d,22,9b,1e),
	HX_("contains",1f,5a,7b,2c),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("getChildByName",88,b9,73,a3),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("getObjectsUnderPoint",96,10,d5,80),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("resolve",ec,12,60,67),
	HX_("setChildIndex",18,4a,08,fe),
	HX_("stopAllMovieClips",f2,60,f8,a0),
	HX_("swapChildren",f2,4a,53,e0),
	HX_("swapChildrenAt",85,a4,f1,13),
	HX_("__cleanup",04,5d,90,2c),
	HX_("__cleanupRemovedChildren",5b,84,61,c1),
	HX_("__dispatchChildren",39,81,f4,f4),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getFilterBounds",e3,3a,ba,18),
	HX_("__getRenderBounds",01,11,b8,7b),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__readGraphicsData",2b,10,91,f2),
	HX_("__setStageReference",4f,e5,e5,f4),
	HX_("__setWorldTransformInvalid",7b,c9,b9,d4),
	HX_("__stopAllMovieClips",d2,89,e8,53),
	HX_("__tabTest",27,ee,bd,c6),
	HX_("__update",29,f1,34,2f),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("get_tabChildren",4b,c4,67,0c),
	HX_("set_tabChildren",57,41,33,08),
	::String(null()) };

::hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	DisplayObjectContainer_obj _hx_dummy;
	DisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObjectContainer",4a,52,ef,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
