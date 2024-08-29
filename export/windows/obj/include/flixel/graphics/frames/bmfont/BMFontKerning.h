#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontKerning
#define INCLUDED_flixel_graphics_frames_bmfont_BMFontKerning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_15168aeef7c4c51a_21_new)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontKerning)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFontKerning_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFontKerning_obj OBJ_;
		BMFontKerning_obj();

	public:
		enum { _hx_ClassId = 0x7a51bfeb };

		void __construct(::hx::Null< int >  __o_first,::hx::Null< int >  __o_second,::hx::Null< int >  __o_amount);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.frames.bmfont.BMFontKerning")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.frames.bmfont.BMFontKerning"); }

		inline static ::hx::ObjectPtr< BMFontKerning_obj > __new(::hx::Null< int >  __o_first,::hx::Null< int >  __o_second,::hx::Null< int >  __o_amount) {
			::hx::ObjectPtr< BMFontKerning_obj > __this = new BMFontKerning_obj();
			__this->__construct(__o_first,__o_second,__o_amount);
			return __this;
		}

		inline static ::hx::ObjectPtr< BMFontKerning_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_first,::hx::Null< int >  __o_second,::hx::Null< int >  __o_amount) {
			BMFontKerning_obj *__this = (BMFontKerning_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFontKerning_obj), false, "flixel.graphics.frames.bmfont.BMFontKerning"));
			*(void **)__this = BMFontKerning_obj::_hx_vtable;
{
            		int first = __o_first.Default(-1);
            		int second = __o_second.Default(-1);
            		int amount = __o_amount.Default(0);
            	HX_STACKFRAME(&_hx_pos_15168aeef7c4c51a_21_new)
HXLINE(  22)		( ( ::flixel::graphics::frames::bmfont::BMFontKerning)(__this) )->first = first;
HXLINE(  23)		( ( ::flixel::graphics::frames::bmfont::BMFontKerning)(__this) )->second = second;
HXLINE(  24)		( ( ::flixel::graphics::frames::bmfont::BMFontKerning)(__this) )->amount = amount;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFontKerning_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFontKerning",b2,58,6f,6b); }

		static  ::flixel::graphics::frames::bmfont::BMFontKerning fromXml( ::Xml kerningNode);
		static ::Dynamic fromXml_dyn();

		static ::Array< ::Dynamic> listFromXml( ::Xml kerningsNode);
		static ::Dynamic listFromXml_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontKerning fromText(::String kerningText);
		static ::Dynamic fromText_dyn();

		static ::Array< ::Dynamic> listFromBytes( ::haxe::io::BytesInput bytes);
		static ::Dynamic listFromBytes_dyn();

		int first;
		int second;
		int amount;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFontKerning */ 
