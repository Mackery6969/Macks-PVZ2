#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasTagRepeat_Impl_
#include <flixel/graphics/atlas/_AseAtlas/AseAtlasTagRepeat_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2f741f9caaa7676a_121_get_loops,"flixel.graphics.atlas._AseAtlas.AseAtlasTagRepeat_Impl_","get_loops",0xf74910ca,"flixel.graphics.atlas._AseAtlas.AseAtlasTagRepeat_Impl_.get_loops","flixel/graphics/atlas/AseAtlas.hx",121,0x195d9311)
HX_LOCAL_STACK_FRAME(_hx_pos_2f741f9caaa7676a_127_toInt,"flixel.graphics.atlas._AseAtlas.AseAtlasTagRepeat_Impl_","toInt",0x449b3f18,"flixel.graphics.atlas._AseAtlas.AseAtlasTagRepeat_Impl_.toInt","flixel/graphics/atlas/AseAtlas.hx",127,0x195d9311)
namespace flixel{
namespace graphics{
namespace atlas{
namespace _AseAtlas{

void AseAtlasTagRepeat_Impl__obj::__construct() { }

Dynamic AseAtlasTagRepeat_Impl__obj::__CreateEmpty() { return new AseAtlasTagRepeat_Impl__obj; }

void *AseAtlasTagRepeat_Impl__obj::_hx_vtable = 0;

Dynamic AseAtlasTagRepeat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AseAtlasTagRepeat_Impl__obj > _hx_result = new AseAtlasTagRepeat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AseAtlasTagRepeat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a7e20c6;
}

bool AseAtlasTagRepeat_Impl__obj::get_loops(::String this1){
            	HX_STACKFRAME(&_hx_pos_2f741f9caaa7676a_121_get_loops)
HXDLIN( 121)		if (::hx::IsNotNull( this1 )) {
HXDLIN( 121)			return ::hx::IsGreater( ::Std_obj::parseInt(this1),1 );
            		}
            		else {
HXDLIN( 121)			return true;
            		}
HXDLIN( 121)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AseAtlasTagRepeat_Impl__obj,get_loops,return )

 ::Dynamic AseAtlasTagRepeat_Impl__obj::toInt(::String this1){
            	HX_STACKFRAME(&_hx_pos_2f741f9caaa7676a_127_toInt)
HXDLIN( 127)		return ::Std_obj::parseInt(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AseAtlasTagRepeat_Impl__obj,toInt,return )


AseAtlasTagRepeat_Impl__obj::AseAtlasTagRepeat_Impl__obj()
{
}

bool AseAtlasTagRepeat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_loops") ) { outValue = get_loops_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AseAtlasTagRepeat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AseAtlasTagRepeat_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AseAtlasTagRepeat_Impl__obj::__mClass;

static ::String AseAtlasTagRepeat_Impl__obj_sStaticFields[] = {
	HX_("get_loops",e6,4d,a3,bc),
	HX_("toInt",34,be,11,14),
	::String(null())
};

void AseAtlasTagRepeat_Impl__obj::__register()
{
	AseAtlasTagRepeat_Impl__obj _hx_dummy;
	AseAtlasTagRepeat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.atlas._AseAtlas.AseAtlasTagRepeat_Impl_",52,5e,a4,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AseAtlasTagRepeat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AseAtlasTagRepeat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AseAtlasTagRepeat_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AseAtlasTagRepeat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AseAtlasTagRepeat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AseAtlas
