#ifndef INCLUDED_openfl_display__internal_SamplerState
#define INCLUDED_openfl_display__internal_SamplerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2927c9d004f07aab_26_new)
HX_DECLARE_CLASS3(openfl,display,_internal,SamplerState)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES SamplerState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SamplerState_obj OBJ_;
		SamplerState_obj();

	public:
		enum { _hx_ClassId = 0x2cca8633 };

		void __construct( ::Dynamic __o_wrap, ::Dynamic __o_filter, ::Dynamic __o_mipfilter,::hx::Null< Float >  __o_lodBias,::hx::Null< bool >  __o_ignoreSampler,::hx::Null< bool >  __o_centroid,::hx::Null< bool >  __o_textureAlpha);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display._internal.SamplerState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display._internal.SamplerState"); }

		inline static ::hx::ObjectPtr< SamplerState_obj > __new( ::Dynamic __o_wrap, ::Dynamic __o_filter, ::Dynamic __o_mipfilter,::hx::Null< Float >  __o_lodBias,::hx::Null< bool >  __o_ignoreSampler,::hx::Null< bool >  __o_centroid,::hx::Null< bool >  __o_textureAlpha) {
			::hx::ObjectPtr< SamplerState_obj > __this = new SamplerState_obj();
			__this->__construct(__o_wrap,__o_filter,__o_mipfilter,__o_lodBias,__o_ignoreSampler,__o_centroid,__o_textureAlpha);
			return __this;
		}

		inline static ::hx::ObjectPtr< SamplerState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_wrap, ::Dynamic __o_filter, ::Dynamic __o_mipfilter,::hx::Null< Float >  __o_lodBias,::hx::Null< bool >  __o_ignoreSampler,::hx::Null< bool >  __o_centroid,::hx::Null< bool >  __o_textureAlpha) {
			SamplerState_obj *__this = (SamplerState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SamplerState_obj), true, "openfl.display._internal.SamplerState"));
			*(void **)__this = SamplerState_obj::_hx_vtable;
{
            		 ::Dynamic wrap = __o_wrap;
            		if (::hx::IsNull(__o_wrap)) wrap = 0;
            		 ::Dynamic filter = __o_filter;
            		if (::hx::IsNull(__o_filter)) filter = 5;
            		 ::Dynamic mipfilter = __o_mipfilter;
            		if (::hx::IsNull(__o_mipfilter)) mipfilter = 2;
            		Float lodBias = __o_lodBias.Default(((Float)0.0));
            		bool ignoreSampler = __o_ignoreSampler.Default(false);
            		bool centroid = __o_centroid.Default(false);
            		bool textureAlpha = __o_textureAlpha.Default(false);
            	HX_STACKFRAME(&_hx_pos_2927c9d004f07aab_26_new)
HXLINE(  27)		( ( ::openfl::display::_internal::SamplerState)(__this) )->wrap = wrap;
HXLINE(  28)		( ( ::openfl::display::_internal::SamplerState)(__this) )->filter = filter;
HXLINE(  29)		( ( ::openfl::display::_internal::SamplerState)(__this) )->mipfilter = mipfilter;
HXLINE(  30)		( ( ::openfl::display::_internal::SamplerState)(__this) )->lodBias = lodBias;
HXLINE(  31)		( ( ::openfl::display::_internal::SamplerState)(__this) )->ignoreSampler = ignoreSampler;
HXLINE(  32)		( ( ::openfl::display::_internal::SamplerState)(__this) )->centroid = centroid;
HXLINE(  33)		( ( ::openfl::display::_internal::SamplerState)(__this) )->textureAlpha = textureAlpha;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SamplerState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SamplerState",09,30,d2,83); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool centroid;
		 ::Dynamic filter;
		bool ignoreSampler;
		Float lodBias;
		 ::Dynamic mipfilter;
		bool mipmapGenerated;
		bool textureAlpha;
		 ::Dynamic wrap;
		 ::openfl::display::_internal::SamplerState clone();
		::Dynamic clone_dyn();

		void copyFrom( ::openfl::display::_internal::SamplerState other);
		::Dynamic copyFrom_dyn();

		bool equals( ::openfl::display::_internal::SamplerState other);
		::Dynamic equals_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_SamplerState */ 
