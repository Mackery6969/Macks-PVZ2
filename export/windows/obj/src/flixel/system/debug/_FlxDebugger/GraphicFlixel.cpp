#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel
#include <flixel/system/debug/_FlxDebugger/GraphicFlixel.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb1ed78290af1887_30_new,"flixel.system.debug._FlxDebugger.GraphicFlixel","new",0x8777e624,"flixel.system.debug._FlxDebugger.GraphicFlixel.new","flixel/system/debug/FlxDebugger.hx",30,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _FlxDebugger{

void GraphicFlixel_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_eb1ed78290af1887_30_new)
HXDLIN(  30)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicFlixel_obj::__CreateEmpty() { return new GraphicFlixel_obj; }

void *GraphicFlixel_obj::_hx_vtable = 0;

Dynamic GraphicFlixel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicFlixel_obj > _hx_result = new GraphicFlixel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicFlixel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x3638ee48;
	}
}


::hx::ObjectPtr< GraphicFlixel_obj > GraphicFlixel_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicFlixel_obj > __this = new GraphicFlixel_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicFlixel_obj > GraphicFlixel_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicFlixel_obj *__this = (GraphicFlixel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicFlixel_obj), true, "flixel.system.debug._FlxDebugger.GraphicFlixel"));
	*(void **)__this = GraphicFlixel_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicFlixel_obj::GraphicFlixel_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicFlixel_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicFlixel_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicFlixel_obj::__mClass;

void GraphicFlixel_obj::__register()
{
	GraphicFlixel_obj _hx_dummy;
	GraphicFlixel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._FlxDebugger.GraphicFlixel",32,44,c1,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicFlixel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicFlixel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicFlixel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _FlxDebugger
