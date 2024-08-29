#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_NodeAccess_Impl_
#define INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_NodeAccess_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(flixel,graphics,frames,bmfont,_BMFontXml,NodeAccess_Impl_)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{
namespace _BMFontXml{


class HXCPP_CLASS_ATTRIBUTES NodeAccess_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NodeAccess_Impl__obj OBJ_;
		NodeAccess_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7fb4ffa3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_"); }

		inline static ::hx::ObjectPtr< NodeAccess_Impl__obj > __new() {
			::hx::ObjectPtr< NodeAccess_Impl__obj > __this = new NodeAccess_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NodeAccess_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			NodeAccess_Impl__obj *__this = (NodeAccess_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NodeAccess_Impl__obj), false, "flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_"));
			*(void **)__this = NodeAccess_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NodeAccess_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NodeAccess_Impl_",86,d2,6c,a4); }

		static  ::Xml getHelper( ::Xml this1,::String name, ::Dynamic invalid);
		static ::Dynamic getHelper_dyn();

		static  ::Xml getSafe( ::Xml this1,::String name);
		static ::Dynamic getSafe_dyn();

		static  ::Xml get( ::Xml this1,::String name);
		static ::Dynamic get_dyn();

		static  ::Xml getWarn( ::Xml this1,::String name);
		static ::Dynamic getWarn_dyn();

		static  ::Xml getError( ::Xml this1,::String name);
		static ::Dynamic getError_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
} // end namespace _BMFontXml

#endif /* INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_NodeAccess_Impl_ */ 
