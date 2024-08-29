#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_NodeAccess_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e4e37ceca896143f_87_getHelper,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_","getHelper",0xbf3ef64f,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_.getHelper","flixel/graphics/frames/bmfont/BMFontXml.hx",87,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_e4e37ceca896143f_100_getSafe,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_","getSafe",0x74f44bee,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_.getSafe","flixel/graphics/frames/bmfont/BMFontXml.hx",100,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_e4e37ceca896143f_105_get,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_","get",0x4a480e01,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_.get","flixel/graphics/frames/bmfont/BMFontXml.hx",105,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_e4e37ceca896143f_110_getWarn,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_","getWarn",0x779930e7,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_.getWarn","flixel/graphics/frames/bmfont/BMFontXml.hx",110,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_e4e37ceca896143f_115_getError,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_","getError",0xdc77ca07,"flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_.getError","flixel/graphics/frames/bmfont/BMFontXml.hx",115,0x6e0c2cde)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{
namespace _BMFontXml{

void NodeAccess_Impl__obj::__construct() { }

Dynamic NodeAccess_Impl__obj::__CreateEmpty() { return new NodeAccess_Impl__obj; }

void *NodeAccess_Impl__obj::_hx_vtable = 0;

Dynamic NodeAccess_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NodeAccess_Impl__obj > _hx_result = new NodeAccess_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NodeAccess_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fb4ffa3;
}

 ::Xml NodeAccess_Impl__obj::getHelper( ::Xml this1,::String name, ::Dynamic invalid){
            	HX_STACKFRAME(&_hx_pos_e4e37ceca896143f_87_getHelper)
HXLINE(  88)		 ::Xml xml = ( ( ::Xml)(this1->elementsNamed(name)->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  89)		if (::hx::IsNull( xml )) {
HXLINE(  91)			::String xname;
HXDLIN(  91)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE(  91)				xname = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXLINE(  91)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE(  91)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN(  91)				xname = this1->nodeName;
            			}
HXLINE(  93)			invalid((((HX_("",00,00,00,00) + xname) + HX_(" is missing element ",b4,ea,58,cb)) + name));
            		}
HXLINE(  95)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NodeAccess_Impl__obj,getHelper,return )

 ::Xml NodeAccess_Impl__obj::getSafe( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_e4e37ceca896143f_100_getSafe)
HXDLIN( 100)		 ::Dynamic invalid = null();
HXDLIN( 100)		 ::Xml xml = ( ( ::Xml)(this1->elementsNamed(name)->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 100)		if (::hx::IsNull( xml )) {
HXDLIN( 100)			::String xname;
HXDLIN( 100)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 100)				xname = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXDLIN( 100)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 100)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN( 100)				xname = this1->nodeName;
            			}
HXDLIN( 100)			invalid((((HX_("",00,00,00,00) + xname) + HX_(" is missing element ",b4,ea,58,cb)) + name));
            		}
HXDLIN( 100)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NodeAccess_Impl__obj,getSafe,return )

 ::Xml NodeAccess_Impl__obj::get( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_e4e37ceca896143f_105_get)
HXDLIN( 105)		 ::Xml xml = ( ( ::Xml)(this1->elementsNamed(name)->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 105)		if (::hx::IsNull( xml )) {
HXDLIN( 105)			::String xname;
HXDLIN( 105)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 105)				xname = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXDLIN( 105)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 105)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN( 105)				xname = this1->nodeName;
            			}
HXDLIN( 105)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("",00,00,00,00) + xname) + HX_(" is missing element ",b4,ea,58,cb)) + name)));
            		}
HXDLIN( 105)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NodeAccess_Impl__obj,get,return )

 ::Xml NodeAccess_Impl__obj::getWarn( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_e4e37ceca896143f_110_getWarn)
HXDLIN( 110)		 ::Dynamic invalid = ::flixel::FlxG_obj::log->warn_dyn();
HXDLIN( 110)		 ::Xml xml = ( ( ::Xml)(this1->elementsNamed(name)->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 110)		if (::hx::IsNull( xml )) {
HXDLIN( 110)			::String xname;
HXDLIN( 110)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 110)				xname = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXDLIN( 110)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 110)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN( 110)				xname = this1->nodeName;
            			}
HXDLIN( 110)			invalid((((HX_("",00,00,00,00) + xname) + HX_(" is missing element ",b4,ea,58,cb)) + name));
            		}
HXDLIN( 110)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NodeAccess_Impl__obj,getWarn,return )

 ::Xml NodeAccess_Impl__obj::getError( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_e4e37ceca896143f_115_getError)
HXDLIN( 115)		 ::Dynamic invalid = ::flixel::FlxG_obj::log->error_dyn();
HXDLIN( 115)		 ::Xml xml = ( ( ::Xml)(this1->elementsNamed(name)->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 115)		if (::hx::IsNull( xml )) {
HXDLIN( 115)			::String xname;
HXDLIN( 115)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 115)				xname = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXDLIN( 115)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 115)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN( 115)				xname = this1->nodeName;
            			}
HXDLIN( 115)			invalid((((HX_("",00,00,00,00) + xname) + HX_(" is missing element ",b4,ea,58,cb)) + name));
            		}
HXDLIN( 115)		return xml;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NodeAccess_Impl__obj,getError,return )


NodeAccess_Impl__obj::NodeAccess_Impl__obj()
{
}

bool NodeAccess_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getSafe") ) { outValue = getSafe_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWarn") ) { outValue = getWarn_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHelper") ) { outValue = getHelper_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NodeAccess_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NodeAccess_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class NodeAccess_Impl__obj::__mClass;

static ::String NodeAccess_Impl__obj_sStaticFields[] = {
	HX_("getHelper",a4,06,a5,80),
	HX_("getSafe",03,2d,d0,1e),
	HX_("get",96,80,4e,00),
	HX_("getWarn",fc,11,75,21),
	HX_("getError",52,db,00,d3),
	::String(null())
};

void NodeAccess_Impl__obj::__register()
{
	NodeAccess_Impl__obj _hx_dummy;
	NodeAccess_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont._BMFontXml.NodeAccess_Impl_",59,1c,aa,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NodeAccess_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NodeAccess_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NodeAccess_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NodeAccess_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NodeAccess_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
} // end namespace _BMFontXml
