#ifndef INCLUDED_flixel_system_debug__Window_GraphicWindowHandle
#define INCLUDED_flixel_system_debug__Window_GraphicWindowHandle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,_Window,GraphicWindowHandle)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Window{


class HXCPP_CLASS_ATTRIBUTES GraphicWindowHandle_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicWindowHandle_obj OBJ_;
		GraphicWindowHandle_obj();

	public:
		enum { _hx_ClassId = 0x2bb8e279 };

		void __construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug._Window.GraphicWindowHandle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug._Window.GraphicWindowHandle"); }
		static ::hx::ObjectPtr< GraphicWindowHandle_obj > __new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static ::hx::ObjectPtr< GraphicWindowHandle_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicWindowHandle_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicWindowHandle",60,9a,d6,fa); }

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Window

#endif /* INCLUDED_flixel_system_debug__Window_GraphicWindowHandle */ 
