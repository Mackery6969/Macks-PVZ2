#include <hxcpp.h>

#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1270_fromOpenFL,"flixel.text._FlxText.FlxTextAlign_Impl_","fromOpenFL",0xc584ea03,"flixel.text._FlxText.FlxTextAlign_Impl_.fromOpenFL","flixel/text/FlxText.hx",1270,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1282_toOpenFL,"flixel.text._FlxText.FlxTextAlign_Impl_","toOpenFL",0xa34e3094,"flixel.text._FlxText.FlxTextAlign_Impl_.toOpenFL","flixel/text/FlxText.hx",1282,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1256_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1256,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1263_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1263,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1265_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1265,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1266_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1266,0xdf165a6e)
namespace flixel{
namespace text{
namespace _FlxText{

void FlxTextAlign_Impl__obj::__construct() { }

Dynamic FlxTextAlign_Impl__obj::__CreateEmpty() { return new FlxTextAlign_Impl__obj; }

void *FlxTextAlign_Impl__obj::_hx_vtable = 0;

Dynamic FlxTextAlign_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTextAlign_Impl__obj > _hx_result = new FlxTextAlign_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTextAlign_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20f90a13;
}

::String FlxTextAlign_Impl__obj::LEFT;

::String FlxTextAlign_Impl__obj::CENTER;

::String FlxTextAlign_Impl__obj::RIGHT;

::String FlxTextAlign_Impl__obj::JUSTIFY;

::String FlxTextAlign_Impl__obj::fromOpenFL( ::Dynamic align){
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1270_fromOpenFL)
HXDLIN(1270)		 ::Dynamic _hx_switch_0 = align;
            		if (  (_hx_switch_0==0) ){
HXLINE(1273)			return HX_("center",d5,25,db,05);
HXDLIN(1273)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(1275)			return HX_("justify",50,df,b5,83);
HXDLIN(1275)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(1272)			return HX_("left",07,08,b0,47);
HXDLIN(1272)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(1274)			return HX_("right",dc,0b,64,e9);
HXDLIN(1274)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(1276)			return HX_("left",07,08,b0,47);
            		}
            		_hx_goto_0:;
HXLINE(1270)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,fromOpenFL,return )

 ::Dynamic FlxTextAlign_Impl__obj::toOpenFL(::String align){
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1282_toOpenFL)
HXDLIN(1282)		::String _hx_switch_0 = align;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(1285)			return 0;
HXDLIN(1285)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("justify",50,df,b5,83)) ){
HXLINE(1287)			return 2;
HXDLIN(1287)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(1284)			return 3;
HXDLIN(1284)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(1286)			return 4;
HXDLIN(1286)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(1288)			return 3;
            		}
            		_hx_goto_2:;
HXLINE(1282)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,toOpenFL,return )


FlxTextAlign_Impl__obj::FlxTextAlign_Impl__obj()
{
}

bool FlxTextAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toOpenFL") ) { outValue = toOpenFL_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromOpenFL") ) { outValue = fromOpenFL_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxTextAlign_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxTextAlign_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxTextAlign_Impl__obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsString,(void *) &FlxTextAlign_Impl__obj::CENTER,HX_("CENTER",d5,d1,5d,b8)},
	{::hx::fsString,(void *) &FlxTextAlign_Impl__obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsString,(void *) &FlxTextAlign_Impl__obj::JUSTIFY,HX_("JUSTIFY",30,b3,89,03)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxTextAlign_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTextAlign_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#endif

::hx::Class FlxTextAlign_Impl__obj::__mClass;

static ::String FlxTextAlign_Impl__obj_sStaticFields[] = {
	HX_("LEFT",07,d0,70,32),
	HX_("CENTER",d5,d1,5d,b8),
	HX_("RIGHT",bc,43,52,67),
	HX_("JUSTIFY",30,b3,89,03),
	HX_("fromOpenFL",9a,4c,d8,64),
	HX_("toOpenFL",6b,ef,d2,48),
	::String(null())
};

void FlxTextAlign_Impl__obj::__register()
{
	FlxTextAlign_Impl__obj _hx_dummy;
	FlxTextAlign_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text._FlxText.FlxTextAlign_Impl_",65,e8,c9,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTextAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTextAlign_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTextAlign_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxTextAlign_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTextAlign_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTextAlign_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTextAlign_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTextAlign_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1256_boot)
HXDLIN(1256)		LEFT = HX_("left",07,08,b0,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1263_boot)
HXDLIN(1263)		CENTER = HX_("center",d5,25,db,05);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1265_boot)
HXDLIN(1265)		RIGHT = HX_("right",dc,0b,64,e9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1266_boot)
HXDLIN(1266)		JUSTIFY = HX_("justify",50,df,b5,83);
            	}
}

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText
