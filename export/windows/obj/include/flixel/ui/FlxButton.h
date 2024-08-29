#ifndef INCLUDED_flixel_ui_FlxButton
#define INCLUDED_flixel_ui_FlxButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxButton_obj : public  ::flixel::ui::FlxTypedButton_flixel_text_FlxText_obj
{
	public:
		typedef  ::flixel::ui::FlxTypedButton_flixel_text_FlxText_obj super;
		typedef FlxButton_obj OBJ_;
		FlxButton_obj();

	public:
		enum { _hx_ClassId = 0x0155df10 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.ui.FlxButton"); }
		static ::hx::ObjectPtr< FlxButton_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick);
		static ::hx::ObjectPtr< FlxButton_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxButton",e4,5b,cf,5b); }

		static void __boot();
		static int NORMAL;
		static int HIGHLIGHT;
		static int PRESSED;
		static int DISABLED;
		void resetHelpers();

		void initLabel(::String Text);
		::Dynamic initLabel_dyn();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String Text);
		::Dynamic set_text_dyn();

};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxButton */ 
