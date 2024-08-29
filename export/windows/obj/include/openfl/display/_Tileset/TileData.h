#ifndef INCLUDED_openfl_display__Tileset_TileData
#define INCLUDED_openfl_display__Tileset_TileData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_Tileset,TileData)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{
namespace _Tileset{


class HXCPP_CLASS_ATTRIBUTES TileData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TileData_obj OBJ_;
		TileData_obj();

	public:
		enum { _hx_ClassId = 0x6f40e63b };

		void __construct( ::openfl::geom::Rectangle rect);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display._Tileset.TileData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display._Tileset.TileData"); }
		static ::hx::ObjectPtr< TileData_obj > __new( ::openfl::geom::Rectangle rect);
		static ::hx::ObjectPtr< TileData_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::geom::Rectangle rect);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TileData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TileData",98,38,1b,56); }

		static void __boot();
		static  ::Dynamic __meta__;
		int height;
		int width;
		int x;
		int y;
		 ::openfl::display::BitmapData _hx___bitmapData;
		Float _hx___uvHeight;
		Float _hx___uvWidth;
		Float _hx___uvX;
		Float _hx___uvY;
		void _hx___update( ::openfl::display::BitmapData bitmapData);
		::Dynamic _hx___update_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _Tileset

#endif /* INCLUDED_openfl_display__Tileset_TileData */ 
