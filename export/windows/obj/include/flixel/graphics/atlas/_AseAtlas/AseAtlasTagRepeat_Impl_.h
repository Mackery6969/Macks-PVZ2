#ifndef INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasTagRepeat_Impl_
#define INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasTagRepeat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,graphics,atlas,_AseAtlas,AseAtlasTagRepeat_Impl_)

namespace flixel{
namespace graphics{
namespace atlas{
namespace _AseAtlas{


class HXCPP_CLASS_ATTRIBUTES AseAtlasTagRepeat_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AseAtlasTagRepeat_Impl__obj OBJ_;
		AseAtlasTagRepeat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4a7e20c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.atlas._AseAtlas.AseAtlasTagRepeat_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.atlas._AseAtlas.AseAtlasTagRepeat_Impl_"); }

		inline static ::hx::ObjectPtr< AseAtlasTagRepeat_Impl__obj > __new() {
			::hx::ObjectPtr< AseAtlasTagRepeat_Impl__obj > __this = new AseAtlasTagRepeat_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AseAtlasTagRepeat_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AseAtlasTagRepeat_Impl__obj *__this = (AseAtlasTagRepeat_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AseAtlasTagRepeat_Impl__obj), false, "flixel.graphics.atlas._AseAtlas.AseAtlasTagRepeat_Impl_"));
			*(void **)__this = AseAtlasTagRepeat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AseAtlasTagRepeat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AseAtlasTagRepeat_Impl_",5d,b5,4c,c1); }

		static bool get_loops(::String this1);
		static ::Dynamic get_loops_dyn();

		static  ::Dynamic toInt(::String this1);
		static ::Dynamic toInt_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AseAtlas

#endif /* INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasTagRepeat_Impl_ */ 
