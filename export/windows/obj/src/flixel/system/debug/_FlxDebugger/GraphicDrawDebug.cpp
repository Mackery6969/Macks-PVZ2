#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicDrawDebug
#include <flixel/system/debug/_FlxDebugger/GraphicDrawDebug.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4fba2b1117fbcfaf_33_new,"flixel.system.debug._FlxDebugger.GraphicDrawDebug","new",0x07c1b10b,"flixel.system.debug._FlxDebugger.GraphicDrawDebug.new","flixel/system/debug/FlxDebugger.hx",33,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _FlxDebugger{

void GraphicDrawDebug_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_4fba2b1117fbcfaf_33_new)
HXDLIN(  33)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicDrawDebug_obj::__CreateEmpty() { return new GraphicDrawDebug_obj; }

void *GraphicDrawDebug_obj::_hx_vtable = 0;

Dynamic GraphicDrawDebug_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicDrawDebug_obj > _hx_result = new GraphicDrawDebug_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicDrawDebug_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x7a8b7c07;
	}
}


::hx::ObjectPtr< GraphicDrawDebug_obj > GraphicDrawDebug_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicDrawDebug_obj > __this = new GraphicDrawDebug_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicDrawDebug_obj > GraphicDrawDebug_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicDrawDebug_obj *__this = (GraphicDrawDebug_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicDrawDebug_obj), true, "flixel.system.debug._FlxDebugger.GraphicDrawDebug"));
	*(void **)__this = GraphicDrawDebug_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicDrawDebug_obj::GraphicDrawDebug_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicDrawDebug_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicDrawDebug_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicDrawDebug_obj::__mClass;

void GraphicDrawDebug_obj::__register()
{
	GraphicDrawDebug_obj _hx_dummy;
	GraphicDrawDebug_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._FlxDebugger.GraphicDrawDebug",99,cf,23,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicDrawDebug_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicDrawDebug_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicDrawDebug_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _FlxDebugger
