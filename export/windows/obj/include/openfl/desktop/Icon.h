#ifndef INCLUDED_openfl_desktop_Icon
#define INCLUDED_openfl_desktop_Icon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,desktop,Icon)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace desktop{


class HXCPP_CLASS_ATTRIBUTES Icon_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Icon_obj OBJ_;
		Icon_obj();

	public:
		enum { _hx_ClassId = 0x2de3da5d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.desktop.Icon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.desktop.Icon"); }
		static ::hx::ObjectPtr< Icon_obj > __new();
		static ::hx::ObjectPtr< Icon_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Icon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Icon",99,13,8c,30); }

		::Array< ::Dynamic> bitmaps;
};

} // end namespace openfl
} // end namespace desktop

#endif /* INCLUDED_openfl_desktop_Icon */ 
