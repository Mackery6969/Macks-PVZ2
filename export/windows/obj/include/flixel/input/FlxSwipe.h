#ifndef INCLUDED_flixel_input_FlxSwipe
#define INCLUDED_flixel_input_FlxSwipe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxSwipe)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES FlxSwipe_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSwipe_obj OBJ_;
		FlxSwipe_obj();

	public:
		enum { _hx_ClassId = 0x37477ab6 };

		void __construct(int ID, ::flixel::math::FlxBasePoint StartPosition, ::flixel::math::FlxBasePoint EndPosition,int StartTimeInTicks);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxSwipe")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.FlxSwipe"); }
		static ::hx::ObjectPtr< FlxSwipe_obj > __new(int ID, ::flixel::math::FlxBasePoint StartPosition, ::flixel::math::FlxBasePoint EndPosition,int StartTimeInTicks);
		static ::hx::ObjectPtr< FlxSwipe_obj > __alloc(::hx::Ctx *_hx_ctx,int ID, ::flixel::math::FlxBasePoint StartPosition, ::flixel::math::FlxBasePoint EndPosition,int StartTimeInTicks);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSwipe_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxSwipe",c8,32,e7,42); }

		int ID;
		 ::flixel::math::FlxBasePoint startPosition;
		 ::flixel::math::FlxBasePoint endPosition;
		int _startTimeInTicks;
		int _endTimeInTicks;
		void destroy();
		::Dynamic destroy_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		Float get_distance();
		::Dynamic get_distance_dyn();

		Float get_angle();
		::Dynamic get_angle_dyn();

		Float get_degrees();
		::Dynamic get_degrees_dyn();

		Float get_radians();
		::Dynamic get_radians_dyn();

		Float get_duration();
		::Dynamic get_duration_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxSwipe */ 
