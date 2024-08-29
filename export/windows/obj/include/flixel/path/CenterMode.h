#ifndef INCLUDED_flixel_path_CenterMode
#define INCLUDED_flixel_path_CenterMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,path,CenterMode)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace path{


class CenterMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef CenterMode_obj OBJ_;

	public:
		CenterMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.path.CenterMode",0f,7e,a8,6f); }
		::String __ToString() const { return HX_("CenterMode.",36,c1,5a,c2) + _hx_tag; }

		static ::flixel::path::CenterMode CENTER;
		static inline ::flixel::path::CenterMode CENTER_dyn() { return CENTER; }
		static ::flixel::path::CenterMode CUSTOM( ::flixel::math::FlxBasePoint offset);
		static ::Dynamic CUSTOM_dyn();
		static ::flixel::path::CenterMode ORIGIN;
		static inline ::flixel::path::CenterMode ORIGIN_dyn() { return ORIGIN; }
		static ::flixel::path::CenterMode TOP_LEFT;
		static inline ::flixel::path::CenterMode TOP_LEFT_dyn() { return TOP_LEFT; }
};

} // end namespace flixel
} // end namespace path

#endif /* INCLUDED_flixel_path_CenterMode */ 
