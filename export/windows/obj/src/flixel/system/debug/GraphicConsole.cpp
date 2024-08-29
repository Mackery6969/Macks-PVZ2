#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3608a2beee3554fd_48_new,"flixel.system.debug.GraphicConsole","new",0x7eeec0a9,"flixel.system.debug.GraphicConsole.new","flixel/system/debug/FlxDebugger.hx",48,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicConsole_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_3608a2beee3554fd_48_new)
HXDLIN(  48)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicConsole_obj::__CreateEmpty() { return new GraphicConsole_obj; }

void *GraphicConsole_obj::_hx_vtable = 0;

Dynamic GraphicConsole_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicConsole_obj > _hx_result = new GraphicConsole_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicConsole_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0102d8cf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0102d8cf;
	} else {
		return inClassId==(int)0x073e5103;
	}
}


::hx::ObjectPtr< GraphicConsole_obj > GraphicConsole_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicConsole_obj > __this = new GraphicConsole_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicConsole_obj > GraphicConsole_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicConsole_obj *__this = (GraphicConsole_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicConsole_obj), true, "flixel.system.debug.GraphicConsole"));
	*(void **)__this = GraphicConsole_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicConsole_obj::GraphicConsole_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicConsole_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicConsole_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicConsole_obj::__mClass;

void GraphicConsole_obj::__register()
{
	GraphicConsole_obj _hx_dummy;
	GraphicConsole_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicConsole",37,38,2d,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicConsole_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicConsole_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicConsole_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
