#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb31c4552e01719c_45_new,"flixel.system.debug.GraphicBitmapLog","new",0xf8da4027,"flixel.system.debug.GraphicBitmapLog.new","flixel/system/debug/FlxDebugger.hx",45,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicBitmapLog_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_bb31c4552e01719c_45_new)
HXDLIN(  45)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicBitmapLog_obj::__CreateEmpty() { return new GraphicBitmapLog_obj; }

void *GraphicBitmapLog_obj::_hx_vtable = 0;

Dynamic GraphicBitmapLog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicBitmapLog_obj > _hx_result = new GraphicBitmapLog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicBitmapLog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x4c2fd431;
	}
}


::hx::ObjectPtr< GraphicBitmapLog_obj > GraphicBitmapLog_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicBitmapLog_obj > __this = new GraphicBitmapLog_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicBitmapLog_obj > GraphicBitmapLog_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicBitmapLog_obj *__this = (GraphicBitmapLog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicBitmapLog_obj), true, "flixel.system.debug.GraphicBitmapLog"));
	*(void **)__this = GraphicBitmapLog_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicBitmapLog_obj::GraphicBitmapLog_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicBitmapLog_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicBitmapLog_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicBitmapLog_obj::__mClass;

void GraphicBitmapLog_obj::__register()
{
	GraphicBitmapLog_obj _hx_dummy;
	GraphicBitmapLog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicBitmapLog",b5,a0,47,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicBitmapLog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicBitmapLog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicBitmapLog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
