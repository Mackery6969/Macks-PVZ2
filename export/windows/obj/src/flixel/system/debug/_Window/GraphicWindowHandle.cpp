#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__Window_GraphicWindowHandle
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1086c40af90ca1d8_19_new,"flixel.system.debug._Window.GraphicWindowHandle","new",0x4f36000b,"flixel.system.debug._Window.GraphicWindowHandle.new","flixel/system/debug/Window.hx",19,0xb8dfd4e5)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Window{

void GraphicWindowHandle_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_1086c40af90ca1d8_19_new)
HXDLIN(  19)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicWindowHandle_obj::__CreateEmpty() { return new GraphicWindowHandle_obj; }

void *GraphicWindowHandle_obj::_hx_vtable = 0;

Dynamic GraphicWindowHandle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicWindowHandle_obj > _hx_result = new GraphicWindowHandle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicWindowHandle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x2bb8e279;
	}
}


::hx::ObjectPtr< GraphicWindowHandle_obj > GraphicWindowHandle_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicWindowHandle_obj > __this = new GraphicWindowHandle_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicWindowHandle_obj > GraphicWindowHandle_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicWindowHandle_obj *__this = (GraphicWindowHandle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicWindowHandle_obj), true, "flixel.system.debug._Window.GraphicWindowHandle"));
	*(void **)__this = GraphicWindowHandle_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicWindowHandle_obj::GraphicWindowHandle_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicWindowHandle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicWindowHandle_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicWindowHandle_obj::__mClass;

void GraphicWindowHandle_obj::__register()
{
	GraphicWindowHandle_obj _hx_dummy;
	GraphicWindowHandle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._Window.GraphicWindowHandle",99,9e,84,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicWindowHandle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicWindowHandle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicWindowHandle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Window
