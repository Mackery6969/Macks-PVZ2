#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__NativeWindowDisplayState_NativeWindowDisplayState_Impl_
#include <openfl/display/_NativeWindowDisplayState/NativeWindowDisplayState_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b8f58c96846a4007_36_fromInt,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_","fromInt",0xb9f85c90,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_.fromInt","openfl/display/NativeWindowDisplayState.hx",36,0xd847969c)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f58c96846a4007_41_fromString,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_","fromString",0x72ce93d0,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_.fromString","openfl/display/NativeWindowDisplayState.hx",41,0xd847969c)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f58c96846a4007_52_toInt,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_","toInt",0x4a5b1c5f,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_.toInt","openfl/display/NativeWindowDisplayState.hx",52,0xd847969c)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f58c96846a4007_57_toString,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_","toString",0x94405f61,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_.toString","openfl/display/NativeWindowDisplayState.hx",57,0xd847969c)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f58c96846a4007_22_boot,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_","boot",0xda085467,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_.boot","openfl/display/NativeWindowDisplayState.hx",22,0xd847969c)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f58c96846a4007_27_boot,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_","boot",0xda085467,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_.boot","openfl/display/NativeWindowDisplayState.hx",27,0xd847969c)
HX_LOCAL_STACK_FRAME(_hx_pos_b8f58c96846a4007_32_boot,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_","boot",0xda085467,"openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_.boot","openfl/display/NativeWindowDisplayState.hx",32,0xd847969c)
namespace openfl{
namespace display{
namespace _NativeWindowDisplayState{

void NativeWindowDisplayState_Impl__obj::__construct() { }

Dynamic NativeWindowDisplayState_Impl__obj::__CreateEmpty() { return new NativeWindowDisplayState_Impl__obj; }

void *NativeWindowDisplayState_Impl__obj::_hx_vtable = 0;

Dynamic NativeWindowDisplayState_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeWindowDisplayState_Impl__obj > _hx_result = new NativeWindowDisplayState_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeWindowDisplayState_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x296d271d;
}

 ::Dynamic NativeWindowDisplayState_Impl__obj::NORMAL;

 ::Dynamic NativeWindowDisplayState_Impl__obj::MAXIMIZED;

 ::Dynamic NativeWindowDisplayState_Impl__obj::MINIMIZED;

 ::Dynamic NativeWindowDisplayState_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b8f58c96846a4007_36_fromInt)
HXDLIN(  36)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowDisplayState_Impl__obj,fromInt,return )

 ::Dynamic NativeWindowDisplayState_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_b8f58c96846a4007_41_fromString)
HXDLIN(  41)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("maximized",18,0e,e1,fe)) ){
HXLINE(  43)			return 1;
HXDLIN(  43)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("minimized",86,fb,9d,28)) ){
HXLINE(  44)			return 2;
HXDLIN(  44)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE(  45)			return 0;
HXDLIN(  45)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  46)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  41)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowDisplayState_Impl__obj,fromString,return )

 ::Dynamic NativeWindowDisplayState_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b8f58c96846a4007_52_toInt)
HXDLIN(  52)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowDisplayState_Impl__obj,toInt,return )

::String NativeWindowDisplayState_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b8f58c96846a4007_57_toString)
HXDLIN(  57)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  61)			return HX_("normal",27,72,69,30);
HXDLIN(  61)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  59)			return HX_("maximized",18,0e,e1,fe);
HXDLIN(  59)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  60)			return HX_("minimized",86,fb,9d,28);
HXDLIN(  60)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  62)			return null();
            		}
            		_hx_goto_4:;
HXLINE(  57)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowDisplayState_Impl__obj,toString,return )


NativeWindowDisplayState_Impl__obj::NativeWindowDisplayState_Impl__obj()
{
}

bool NativeWindowDisplayState_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NativeWindowDisplayState_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo NativeWindowDisplayState_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowDisplayState_Impl__obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowDisplayState_Impl__obj::MAXIMIZED,HX_("MAXIMIZED",f8,7d,39,fa)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowDisplayState_Impl__obj::MINIMIZED,HX_("MINIMIZED",66,6b,f6,23)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void NativeWindowDisplayState_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindowDisplayState_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(NativeWindowDisplayState_Impl__obj::MAXIMIZED,"MAXIMIZED");
	HX_MARK_MEMBER_NAME(NativeWindowDisplayState_Impl__obj::MINIMIZED,"MINIMIZED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeWindowDisplayState_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindowDisplayState_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(NativeWindowDisplayState_Impl__obj::MAXIMIZED,"MAXIMIZED");
	HX_VISIT_MEMBER_NAME(NativeWindowDisplayState_Impl__obj::MINIMIZED,"MINIMIZED");
};

#endif

::hx::Class NativeWindowDisplayState_Impl__obj::__mClass;

static ::String NativeWindowDisplayState_Impl__obj_sStaticFields[] = {
	HX_("NORMAL",27,1e,ec,e2),
	HX_("MAXIMIZED",f8,7d,39,fa),
	HX_("MINIMIZED",66,6b,f6,23),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void NativeWindowDisplayState_Impl__obj::__register()
{
	NativeWindowDisplayState_Impl__obj _hx_dummy;
	NativeWindowDisplayState_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._NativeWindowDisplayState.NativeWindowDisplayState_Impl_",59,7c,23,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeWindowDisplayState_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NativeWindowDisplayState_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeWindowDisplayState_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindowDisplayState_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeWindowDisplayState_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindowDisplayState_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindowDisplayState_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeWindowDisplayState_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b8f58c96846a4007_22_boot)
HXDLIN(  22)		NORMAL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b8f58c96846a4007_27_boot)
HXDLIN(  27)		MAXIMIZED = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b8f58c96846a4007_32_boot)
HXDLIN(  32)		MINIMIZED = 2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _NativeWindowDisplayState
