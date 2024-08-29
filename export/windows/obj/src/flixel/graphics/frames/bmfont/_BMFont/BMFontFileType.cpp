#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFont_BMFontFileType
#include <flixel/graphics/frames/bmfont/_BMFont/BMFontFileType.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{
namespace _BMFont{

::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFontFileType_obj::BINARY( ::haxe::io::Bytes bytes)
{
	return ::hx::CreateEnum< BMFontFileType_obj >(HX_("BINARY",01,68,8e,9f),2,1)->_hx_init(0,bytes);
}

::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFontFileType_obj::TEXT(::String text)
{
	return ::hx::CreateEnum< BMFontFileType_obj >(HX_("TEXT",ad,94,ba,37),0,1)->_hx_init(0,text);
}

::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFontFileType_obj::XML( ::Xml xml)
{
	return ::hx::CreateEnum< BMFontFileType_obj >(HX_("XML",b7,09,43,00),1,1)->_hx_init(0,xml);
}

bool BMFontFileType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BINARY",01,68,8e,9f)) { outValue = BMFontFileType_obj::BINARY_dyn(); return true; }
	if (inName==HX_("TEXT",ad,94,ba,37)) { outValue = BMFontFileType_obj::TEXT_dyn(); return true; }
	if (inName==HX_("XML",b7,09,43,00)) { outValue = BMFontFileType_obj::XML_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BMFontFileType_obj)

int BMFontFileType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BINARY",01,68,8e,9f)) return 2;
	if (inName==HX_("TEXT",ad,94,ba,37)) return 0;
	if (inName==HX_("XML",b7,09,43,00)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontFileType_obj,BINARY,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontFileType_obj,TEXT,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontFileType_obj,XML,return)

int BMFontFileType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BINARY",01,68,8e,9f)) return 1;
	if (inName==HX_("TEXT",ad,94,ba,37)) return 1;
	if (inName==HX_("XML",b7,09,43,00)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val BMFontFileType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BINARY",01,68,8e,9f)) return BINARY_dyn();
	if (inName==HX_("TEXT",ad,94,ba,37)) return TEXT_dyn();
	if (inName==HX_("XML",b7,09,43,00)) return XML_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String BMFontFileType_obj_sStaticFields[] = {
	HX_("TEXT",ad,94,ba,37),
	HX_("XML",b7,09,43,00),
	HX_("BINARY",01,68,8e,9f),
	::String(null())
};

::hx::Class BMFontFileType_obj::__mClass;

Dynamic __Create_BMFontFileType_obj() { return new BMFontFileType_obj; }

void BMFontFileType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.graphics.frames.bmfont._BMFont.BMFontFileType",a2,13,dd,40), ::hx::TCanCast< BMFontFileType_obj >,BMFontFileType_obj_sStaticFields,0,
	&__Create_BMFontFileType_obj, &__Create,
	&super::__SGetClass(), &CreateBMFontFileType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BMFontFileType_obj::__GetStatic;
}

void BMFontFileType_obj::__boot()
{
}


} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
} // end namespace _BMFont
