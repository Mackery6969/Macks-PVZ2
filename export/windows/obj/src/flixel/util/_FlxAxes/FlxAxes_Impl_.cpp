#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxAxes_FlxAxes_Impl_
#include <flixel/util/_FlxAxes/FlxAxes_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_27_get_self,"flixel.util._FlxAxes.FlxAxes_Impl_","get_self",0x29161c68,"flixel.util._FlxAxes.FlxAxes_Impl_.get_self","flixel/util/FlxAxes.hx",27,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_32_get_x,"flixel.util._FlxAxes.FlxAxes_Impl_","get_x",0x8b178e1c,"flixel.util._FlxAxes.FlxAxes_Impl_.get_x","flixel/util/FlxAxes.hx",32,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_37_get_y,"flixel.util._FlxAxes.FlxAxes_Impl_","get_y",0x8b178e1d,"flixel.util._FlxAxes.FlxAxes_Impl_.get_y","flixel/util/FlxAxes.hx",37,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_42_toString,"flixel.util._FlxAxes.FlxAxes_Impl_","toString",0x9579a5ff,"flixel.util._FlxAxes.FlxAxes_Impl_.toString","flixel/util/FlxAxes.hx",42,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_53_fromBools,"flixel.util._FlxAxes.FlxAxes_Impl_","fromBools",0x77f0de8c,"flixel.util._FlxAxes.FlxAxes_Impl_.fromBools","flixel/util/FlxAxes.hx",53,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_58_fromString,"flixel.util._FlxAxes.FlxAxes_Impl_","fromString",0x29dd3dee,"flixel.util._FlxAxes.FlxAxes_Impl_.fromString","flixel/util/FlxAxes.hx",58,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_5_boot,"flixel.util._FlxAxes.FlxAxes_Impl_","boot",0x66f67405,"flixel.util._FlxAxes.FlxAxes_Impl_.boot","flixel/util/FlxAxes.hx",5,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_6_boot,"flixel.util._FlxAxes.FlxAxes_Impl_","boot",0x66f67405,"flixel.util._FlxAxes.FlxAxes_Impl_.boot","flixel/util/FlxAxes.hx",6,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_7_boot,"flixel.util._FlxAxes.FlxAxes_Impl_","boot",0x66f67405,"flixel.util._FlxAxes.FlxAxes_Impl_.boot","flixel/util/FlxAxes.hx",7,0x4960e3c1)
HX_LOCAL_STACK_FRAME(_hx_pos_31f82221e149375a_8_boot,"flixel.util._FlxAxes.FlxAxes_Impl_","boot",0x66f67405,"flixel.util._FlxAxes.FlxAxes_Impl_.boot","flixel/util/FlxAxes.hx",8,0x4960e3c1)
namespace flixel{
namespace util{
namespace _FlxAxes{

void FlxAxes_Impl__obj::__construct() { }

Dynamic FlxAxes_Impl__obj::__CreateEmpty() { return new FlxAxes_Impl__obj; }

void *FlxAxes_Impl__obj::_hx_vtable = 0;

Dynamic FlxAxes_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAxes_Impl__obj > _hx_result = new FlxAxes_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAxes_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17413779;
}

int FlxAxes_Impl__obj::X;

int FlxAxes_Impl__obj::Y;

int FlxAxes_Impl__obj::XY;

int FlxAxes_Impl__obj::NONE;

int FlxAxes_Impl__obj::get_self(int this1){
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_27_get_self)
HXDLIN(  27)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAxes_Impl__obj,get_self,return )

bool FlxAxes_Impl__obj::get_x(int this1){
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_32_get_x)
HXDLIN(  32)		if ((this1 != 1)) {
HXDLIN(  32)			return (this1 == 17);
            		}
            		else {
HXDLIN(  32)			return true;
            		}
HXDLIN(  32)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAxes_Impl__obj,get_x,return )

bool FlxAxes_Impl__obj::get_y(int this1){
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_37_get_y)
HXDLIN(  37)		if ((this1 != 16)) {
HXDLIN(  37)			return (this1 == 17);
            		}
            		else {
HXDLIN(  37)			return true;
            		}
HXDLIN(  37)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAxes_Impl__obj,get_y,return )

::String FlxAxes_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_42_toString)
HXDLIN(  42)		switch((int)(this1)){
            			case (int)0: {
HXLINE(  47)				return HX_("none",b8,12,0a,49);
            			}
            			break;
            			case (int)1: {
HXLINE(  44)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)16: {
HXLINE(  45)				return HX_("y",79,00,00,00);
            			}
            			break;
            			case (int)17: {
HXLINE(  46)				return HX_("xy",01,69,00,00);
            			}
            			break;
            		}
HXLINE(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAxes_Impl__obj,toString,return )

int FlxAxes_Impl__obj::fromBools(bool x,bool y){
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_53_fromBools)
HXDLIN(  53)		int _hx_tmp;
HXDLIN(  53)		if (x) {
HXDLIN(  53)			_hx_tmp = 1;
            		}
            		else {
HXDLIN(  53)			_hx_tmp = 0;
            		}
HXDLIN(  53)		int _hx_tmp1;
HXDLIN(  53)		if (y) {
HXDLIN(  53)			_hx_tmp1 = 16;
            		}
            		else {
HXDLIN(  53)			_hx_tmp1 = 0;
            		}
HXDLIN(  53)		return (_hx_tmp | _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAxes_Impl__obj,fromBools,return )

int FlxAxes_Impl__obj::fromString(::String axes){
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_58_fromString)
HXDLIN(  58)		::String _g = axes.toLowerCase();
HXDLIN(  58)		if (::hx::IsNull( _g )) {
HXLINE(  63)			return 0;
            		}
            		else {
HXDLIN(  58)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("",00,00,00,00)) ||  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  63)				return 0;
HXDLIN(  63)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("x",78,00,00,00)) ){
HXLINE(  60)				return 1;
HXDLIN(  60)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE(  61)				return 16;
HXDLIN(  61)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("both",81,88,1b,41)) ||  (_hx_switch_0==HX_("xy",01,69,00,00)) ||  (_hx_switch_0==HX_("yx",df,69,00,00)) ){
HXLINE(  62)				return 17;
HXDLIN(  62)				goto _hx_goto_5;
            			}
            			/* default */{
HXLINE(  64)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid axes value: ",45,2d,67,e6) + axes)));
            			}
            			_hx_goto_5:;
            		}
HXLINE(  58)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAxes_Impl__obj,fromString,return )


FlxAxes_Impl__obj::FlxAxes_Impl__obj()
{
}

bool FlxAxes_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_self") ) { outValue = get_self_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBools") ) { outValue = fromBools_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAxes_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxAxes_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxAxes_Impl__obj::X,HX_("X",58,00,00,00)},
	{::hx::fsInt,(void *) &FlxAxes_Impl__obj::Y,HX_("Y",59,00,00,00)},
	{::hx::fsInt,(void *) &FlxAxes_Impl__obj::XY,HX_("XY",01,4d,00,00)},
	{::hx::fsInt,(void *) &FlxAxes_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxAxes_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAxes_Impl__obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxAxes_Impl__obj::Y,"Y");
	HX_MARK_MEMBER_NAME(FlxAxes_Impl__obj::XY,"XY");
	HX_MARK_MEMBER_NAME(FlxAxes_Impl__obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAxes_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAxes_Impl__obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxAxes_Impl__obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(FlxAxes_Impl__obj::XY,"XY");
	HX_VISIT_MEMBER_NAME(FlxAxes_Impl__obj::NONE,"NONE");
};

#endif

::hx::Class FlxAxes_Impl__obj::__mClass;

static ::String FlxAxes_Impl__obj_sStaticFields[] = {
	HX_("X",58,00,00,00),
	HX_("Y",59,00,00,00),
	HX_("XY",01,4d,00,00),
	HX_("NONE",b8,da,ca,33),
	HX_("get_self",15,47,0b,cc),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("toString",ac,d0,6e,38),
	HX_("fromBools",3f,0b,81,6b),
	HX_("fromString",db,2d,74,54),
	::String(null())
};

void FlxAxes_Impl__obj::__register()
{
	FlxAxes_Impl__obj _hx_dummy;
	FlxAxes_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxAxes.FlxAxes_Impl_",7b,81,e5,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAxes_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxAxes_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAxes_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAxes_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAxes_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAxes_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAxes_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxAxes_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_5_boot)
HXDLIN(   5)		X = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_6_boot)
HXDLIN(   6)		Y = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_7_boot)
HXDLIN(   7)		XY = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_31f82221e149375a_8_boot)
HXDLIN(   8)		NONE = 0;
            	}
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxAxes
