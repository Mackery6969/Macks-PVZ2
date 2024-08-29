#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_892e156e4ad61ed9_237_new,"flixel.util._FlxSignal.FlxSignal2","new",0xab2cb8e3,"flixel.util._FlxSignal.FlxSignal2.new","flixel/util/FlxSignal.hx",237,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_892e156e4ad61ed9_293_dispatch2,"flixel.util._FlxSignal.FlxSignal2","dispatch2",0x90e3c0fb,"flixel.util._FlxSignal.FlxSignal2.dispatch2","flixel/util/FlxSignal.hx",293,0x3c758c5e)
namespace flixel{
namespace util{
namespace _FlxSignal{

void FlxSignal2_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_892e156e4ad61ed9_237_new)
HXLINE( 238)		super::__construct();
HXLINE( 239)		this->dispatch = this->dispatch2_dyn();
            	}

Dynamic FlxSignal2_obj::__CreateEmpty() { return new FlxSignal2_obj; }

void *FlxSignal2_obj::_hx_vtable = 0;

Dynamic FlxSignal2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSignal2_obj > _hx_result = new FlxSignal2_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSignal2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4515ccf2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4515ccf2;
	} else {
		return inClassId==(int)0x6170b6f5;
	}
}

void FlxSignal2_obj::dispatch2( ::Dynamic value1, ::Dynamic value2){
            	HX_STACKFRAME(&_hx_pos_892e156e4ad61ed9_293_dispatch2)
HXLINE( 294)		this->processingListeners = true;
HXLINE( 295)		{
HXLINE( 295)			int _g = 0;
HXDLIN( 295)			::Array< ::Dynamic> _g1 = this->handlers;
HXDLIN( 295)			while((_g < _g1->length)){
HXLINE( 295)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 295)				_g = (_g + 1);
HXLINE( 297)				handler->listener(value1,value2);
HXLINE( 299)				if (handler->dispatchOnce) {
HXLINE( 300)					if (this->processingListeners) {
HXLINE( 300)						this->pendingRemove->push(handler);
            					}
            					else {
HXLINE( 300)						this->handlers->remove(handler);
HXDLIN( 300)						handler->destroy();
            					}
            				}
            			}
            		}
HXLINE( 303)		this->processingListeners = false;
HXLINE( 305)		{
HXLINE( 305)			int _g2 = 0;
HXDLIN( 305)			::Array< ::Dynamic> _g3 = this->pendingRemove;
HXDLIN( 305)			while((_g2 < _g3->length)){
HXLINE( 305)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g3->__get(_g2).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 305)				_g2 = (_g2 + 1);
HXLINE( 307)				if (this->processingListeners) {
HXLINE( 307)					this->pendingRemove->push(handler);
            				}
            				else {
HXLINE( 307)					this->handlers->remove(handler);
HXDLIN( 307)					handler->destroy();
            				}
            			}
            		}
HXLINE( 309)		if ((this->pendingRemove->length > 0)) {
HXLINE( 310)			this->pendingRemove = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSignal2_obj,dispatch2,(void))


::hx::ObjectPtr< FlxSignal2_obj > FlxSignal2_obj::__new() {
	::hx::ObjectPtr< FlxSignal2_obj > __this = new FlxSignal2_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSignal2_obj > FlxSignal2_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSignal2_obj *__this = (FlxSignal2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSignal2_obj), true, "flixel.util._FlxSignal.FlxSignal2"));
	*(void **)__this = FlxSignal2_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSignal2_obj::FlxSignal2_obj()
{
}

::hx::Val FlxSignal2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch2") ) { return ::hx::Val( dispatch2_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSignal2_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxSignal2_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSignal2_obj_sMemberFields[] = {
	HX_("dispatch2",38,14,f1,78),
	::String(null()) };

::hx::Class FlxSignal2_obj::__mClass;

void FlxSignal2_obj::__register()
{
	FlxSignal2_obj _hx_dummy;
	FlxSignal2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxSignal.FlxSignal2",71,0b,c8,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSignal2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSignal2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSignal2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSignal2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
