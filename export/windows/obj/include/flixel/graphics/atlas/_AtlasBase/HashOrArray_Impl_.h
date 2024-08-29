#ifndef INCLUDED_flixel_graphics_atlas__AtlasBase_HashOrArray_Impl_
#define INCLUDED_flixel_graphics_atlas__AtlasBase_HashOrArray_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,graphics,atlas,_AtlasBase,HashOrArray_Impl_)

namespace flixel{
namespace graphics{
namespace atlas{
namespace _AtlasBase{


class HXCPP_CLASS_ATTRIBUTES HashOrArray_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HashOrArray_Impl__obj OBJ_;
		HashOrArray_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4916f6eb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_"); }

		inline static ::hx::ObjectPtr< HashOrArray_Impl__obj > __new() {
			::hx::ObjectPtr< HashOrArray_Impl__obj > __this = new HashOrArray_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HashOrArray_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HashOrArray_Impl__obj *__this = (HashOrArray_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HashOrArray_Impl__obj), false, "flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_"));
			*(void **)__this = HashOrArray_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HashOrArray_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HashOrArray_Impl_",c8,cd,59,08); }

		static bool isArray( ::Dynamic this1);
		static ::Dynamic isArray_dyn();

		static bool isHash( ::Dynamic this1);
		static ::Dynamic isHash_dyn();

		static ::cpp::VirtualArray toArray( ::Dynamic this1);
		static ::Dynamic toArray_dyn();

		static  ::Dynamic toHash( ::Dynamic this1);
		static ::Dynamic toHash_dyn();

		static  ::Dynamic iterator( ::Dynamic this1);
		static ::Dynamic iterator_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AtlasBase

#endif /* INCLUDED_flixel_graphics_atlas__AtlasBase_HashOrArray_Impl_ */ 
