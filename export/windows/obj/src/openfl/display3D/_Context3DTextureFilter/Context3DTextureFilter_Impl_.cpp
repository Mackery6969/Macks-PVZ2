#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DTextureFilter_Context3DTextureFilter_Impl_
#include <openfl/display3D/_Context3DTextureFilter/Context3DTextureFilter_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_48_fromString,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","fromString",0x784e3d61,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.fromString","openfl/display3D/Context3DTextureFilter.hx",48,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_62_toString,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","toString",0x747fd2b2,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.toString","openfl/display3D/Context3DTextureFilter.hx",62,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_18_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",18,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_23_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",23,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_28_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",28,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_33_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",33,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_38_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",38,0x69987bf0)
HX_LOCAL_STACK_FRAME(_hx_pos_c8e90ea1d29bbe01_44_boot,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","boot",0xe5b58b38,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.boot","openfl/display3D/Context3DTextureFilter.hx",44,0x69987bf0)
namespace openfl{
namespace display3D{
namespace _Context3DTextureFilter{

void Context3DTextureFilter_Impl__obj::__construct() { }

Dynamic Context3DTextureFilter_Impl__obj::__CreateEmpty() { return new Context3DTextureFilter_Impl__obj; }

void *Context3DTextureFilter_Impl__obj::_hx_vtable = 0;

Dynamic Context3DTextureFilter_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DTextureFilter_Impl__obj > _hx_result = new Context3DTextureFilter_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DTextureFilter_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7eabc1c6;
}

 ::Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC16X;

 ::Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC2X;

 ::Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC4X;

 ::Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC8X;

 ::Dynamic Context3DTextureFilter_Impl__obj::LINEAR;

 ::Dynamic Context3DTextureFilter_Impl__obj::NEAREST;

 ::Dynamic Context3DTextureFilter_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_48_fromString)
HXDLIN(  48)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("anisotropic16x",62,56,64,8c)) ){
HXLINE(  50)			return 0;
HXDLIN(  50)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic2x",77,56,26,f5)) ){
HXLINE(  51)			return 1;
HXDLIN(  51)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic4x",35,58,26,f5)) ){
HXLINE(  52)			return 2;
HXDLIN(  52)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic8x",b1,5b,26,f5)) ){
HXLINE(  53)			return 3;
HXDLIN(  53)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("linear",e5,51,a0,ec)) ){
HXLINE(  54)			return 4;
HXDLIN(  54)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("nearest",5e,18,ca,65)) ){
HXLINE(  55)			return 5;
HXDLIN(  55)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  56)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  48)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTextureFilter_Impl__obj,fromString,return )

::String Context3DTextureFilter_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_62_toString)
HXDLIN(  62)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  64)			return HX_("anisotropic16x",62,56,64,8c);
HXDLIN(  64)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  65)			return HX_("anisotropic2x",77,56,26,f5);
HXDLIN(  65)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  66)			return HX_("anisotropic4x",35,58,26,f5);
HXDLIN(  66)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  67)			return HX_("anisotropic8x",b1,5b,26,f5);
HXDLIN(  67)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(  68)			return HX_("linear",e5,51,a0,ec);
HXDLIN(  68)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==5) ){
HXLINE(  69)			return HX_("nearest",5e,18,ca,65);
HXDLIN(  69)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  70)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  62)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTextureFilter_Impl__obj,toString,return )


Context3DTextureFilter_Impl__obj::Context3DTextureFilter_Impl__obj()
{
}

bool Context3DTextureFilter_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DTextureFilter_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DTextureFilter_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,HX_("ANISOTROPIC16X",62,f6,10,1d)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,HX_("ANISOTROPIC2X",37,1a,65,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,HX_("ANISOTROPIC4X",f5,1b,65,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,HX_("ANISOTROPIC8X",71,1f,65,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DTextureFilter_Impl__obj::LINEAR,HX_("LINEAR",e5,fd,22,9f)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DTextureFilter_Impl__obj::NEAREST,HX_("NEAREST",3e,ec,9d,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DTextureFilter_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::NEAREST,"NEAREST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DTextureFilter_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::NEAREST,"NEAREST");
};

#endif

::hx::Class Context3DTextureFilter_Impl__obj::__mClass;

static ::String Context3DTextureFilter_Impl__obj_sStaticFields[] = {
	HX_("ANISOTROPIC16X",62,f6,10,1d),
	HX_("ANISOTROPIC2X",37,1a,65,db),
	HX_("ANISOTROPIC4X",f5,1b,65,db),
	HX_("ANISOTROPIC8X",71,1f,65,db),
	HX_("LINEAR",e5,fd,22,9f),
	HX_("NEAREST",3e,ec,9d,e5),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DTextureFilter_Impl__obj::__register()
{
	Context3DTextureFilter_Impl__obj _hx_dummy;
	Context3DTextureFilter_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_",28,b7,43,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTextureFilter_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DTextureFilter_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DTextureFilter_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DTextureFilter_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DTextureFilter_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DTextureFilter_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DTextureFilter_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DTextureFilter_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_18_boot)
HXDLIN(  18)		ANISOTROPIC16X = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_23_boot)
HXDLIN(  23)		ANISOTROPIC2X = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_28_boot)
HXDLIN(  28)		ANISOTROPIC4X = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_33_boot)
HXDLIN(  33)		ANISOTROPIC8X = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_38_boot)
HXDLIN(  38)		LINEAR = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c8e90ea1d29bbe01_44_boot)
HXDLIN(  44)		NEAREST = 5;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTextureFilter
