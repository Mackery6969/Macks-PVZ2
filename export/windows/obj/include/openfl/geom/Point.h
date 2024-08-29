#ifndef INCLUDED_openfl_geom_Point
#define INCLUDED_openfl_geom_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Point_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();

	public:
		enum { _hx_ClassId = 0x4e2e0440 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.geom.Point")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.geom.Point"); }
		static ::hx::ObjectPtr< Point_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static ::hx::ObjectPtr< Point_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Point",30,24,bd,59); }

		static void __boot();
		static  ::lime::utils::ObjectPool _hx___pool;
		static  ::lime::math::Vector2 _hx___limeVector2;
		static Float distance( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2);
		static ::Dynamic distance_dyn();

		static  ::openfl::geom::Point interpolate( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2,Float f);
		static ::Dynamic interpolate_dyn();

		static  ::openfl::geom::Point polar(Float len,Float angle);
		static ::Dynamic polar_dyn();

		Float x;
		Float y;
		 ::openfl::geom::Point add( ::openfl::geom::Point v);
		::Dynamic add_dyn();

		 ::openfl::geom::Point clone();
		::Dynamic clone_dyn();

		void copyFrom( ::openfl::geom::Point sourcePoint);
		::Dynamic copyFrom_dyn();

		bool equals( ::openfl::geom::Point toCompare);
		::Dynamic equals_dyn();

		void normalize(Float thickness);
		::Dynamic normalize_dyn();

		void offset(Float dx,Float dy);
		::Dynamic offset_dyn();

		void setTo(Float xa,Float ya);
		::Dynamic setTo_dyn();

		 ::openfl::geom::Point subtract( ::openfl::geom::Point v);
		::Dynamic subtract_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::lime::math::Vector2 _hx___toLimeVector2();
		::Dynamic _hx___toLimeVector2_dyn();

		Float get_length();
		::Dynamic get_length_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Point */ 
