#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontKerning
#include <flixel/graphics/frames/bmfont/BMFontKerning.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil
#include <flixel/graphics/frames/bmfont/BMFontUtil.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_AttribAccess_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_BMFontXml_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/BMFontXml_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15168aeef7c4c51a_21_new,"flixel.graphics.frames.bmfont.BMFontKerning","new",0x3f14a8c7,"flixel.graphics.frames.bmfont.BMFontKerning.new","flixel/graphics/frames/bmfont/BMFontKerning.hx",21,0x2251be89)
HX_LOCAL_STACK_FRAME(_hx_pos_15168aeef7c4c51a_29_fromXml,"flixel.graphics.frames.bmfont.BMFontKerning","fromXml",0xd258d674,"flixel.graphics.frames.bmfont.BMFontKerning.fromXml","flixel/graphics/frames/bmfont/BMFontKerning.hx",29,0x2251be89)
HX_LOCAL_STACK_FRAME(_hx_pos_15168aeef7c4c51a_38_listFromXml,"flixel.graphics.frames.bmfont.BMFontKerning","listFromXml",0x9d7fc936,"flixel.graphics.frames.bmfont.BMFontKerning.listFromXml","flixel/graphics/frames/bmfont/BMFontKerning.hx",38,0x2251be89)
HX_LOCAL_STACK_FRAME(_hx_pos_15168aeef7c4c51a_51_fromText,"flixel.graphics.frames.bmfont.BMFontKerning","fromText",0x38b7ed70,"flixel.graphics.frames.bmfont.BMFontKerning.fromText","flixel/graphics/frames/bmfont/BMFontKerning.hx",51,0x2251be89)
HX_LOCAL_STACK_FRAME(_hx_pos_15168aeef7c4c51a_44_fromText,"flixel.graphics.frames.bmfont.BMFontKerning","fromText",0x38b7ed70,"flixel.graphics.frames.bmfont.BMFontKerning.fromText","flixel/graphics/frames/bmfont/BMFontKerning.hx",44,0x2251be89)
static const int _hx_array_data_87b93955_7[] = {
	(int)-1,
};
static const int _hx_array_data_87b93955_8[] = {
	(int)-1,
};
static const int _hx_array_data_87b93955_9[] = {
	(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_15168aeef7c4c51a_64_listFromBytes,"flixel.graphics.frames.bmfont.BMFontKerning","listFromBytes",0x3111398a,"flixel.graphics.frames.bmfont.BMFontKerning.listFromBytes","flixel/graphics/frames/bmfont/BMFontKerning.hx",64,0x2251be89)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFontKerning_obj::__construct(::hx::Null< int >  __o_first,::hx::Null< int >  __o_second,::hx::Null< int >  __o_amount){
            		int first = __o_first.Default(-1);
            		int second = __o_second.Default(-1);
            		int amount = __o_amount.Default(0);
            	HX_STACKFRAME(&_hx_pos_15168aeef7c4c51a_21_new)
HXLINE(  22)		this->first = first;
HXLINE(  23)		this->second = second;
HXLINE(  24)		this->amount = amount;
            	}

Dynamic BMFontKerning_obj::__CreateEmpty() { return new BMFontKerning_obj; }

void *BMFontKerning_obj::_hx_vtable = 0;

Dynamic BMFontKerning_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontKerning_obj > _hx_result = new BMFontKerning_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BMFontKerning_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a51bfeb;
}

 ::flixel::graphics::frames::bmfont::BMFontKerning BMFontKerning_obj::fromXml( ::Xml kerningNode){
            	HX_GC_STACKFRAME(&_hx_pos_15168aeef7c4c51a_29_fromXml)
HXLINE(  31)		int _g = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::_hx_int(kerningNode,HX_("first",30,78,9d,00));
HXLINE(  32)		int _g1 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::_hx_int(kerningNode,HX_("second",74,cf,47,64));
HXLINE(  30)		return  ::flixel::graphics::frames::bmfont::BMFontKerning_obj::__alloc( HX_CTX ,_g,_g1,::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::_hx_int(kerningNode,HX_("amount",d8,11,03,d5)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontKerning_obj,fromXml,return )

::Array< ::Dynamic> BMFontKerning_obj::listFromXml( ::Xml kerningsNode){
            	HX_STACKFRAME(&_hx_pos_15168aeef7c4c51a_38_listFromXml)
HXLINE(  39)		::Array< ::Dynamic> kernings = ::flixel::graphics::frames::bmfont::_BMFontXml::BMFontXml_Impl__obj::nodes(kerningsNode,HX_("kerning",cc,ba,37,b0));
HXLINE(  40)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  40)		{
HXLINE(  40)			int _g1 = 0;
HXDLIN(  40)			while((_g1 < kernings->length)){
HXLINE(  40)				 ::Xml pair = kernings->__get(_g1).StaticCast<  ::Xml >();
HXDLIN(  40)				_g1 = (_g1 + 1);
HXDLIN(  40)				_g->push(::flixel::graphics::frames::bmfont::BMFontKerning_obj::fromXml(pair));
            			}
            		}
HXDLIN(  40)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontKerning_obj,listFromXml,return )

 ::flixel::graphics::frames::bmfont::BMFontKerning BMFontKerning_obj::fromText(::String kerningText){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< int >,second,::Array< int >,amount,::Array< int >,first) HXARGC(2)
            		void _hx_run(::String key,::String value){
            			HX_STACKFRAME(&_hx_pos_15168aeef7c4c51a_51_fromText)
HXLINE(  51)			::String _hx_switch_0 = key;
            			if (  (_hx_switch_0==HX_("amount",d8,11,03,d5)) ){
HXLINE(  55)				amount[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  55)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("first",30,78,9d,00)) ){
HXLINE(  53)				first[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  53)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("second",74,cf,47,64)) ){
HXLINE(  54)				second[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  54)				goto _hx_goto_4;
            			}
            			_hx_goto_4:;
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_15168aeef7c4c51a_44_fromText)
HXLINE(  45)		::Array< int > first = ::Array_obj< int >::fromData( _hx_array_data_87b93955_7,1);
HXLINE(  46)		::Array< int > second = ::Array_obj< int >::fromData( _hx_array_data_87b93955_8,1);
HXLINE(  47)		::Array< int > amount = ::Array_obj< int >::fromData( _hx_array_data_87b93955_9,1);
HXLINE(  48)		::flixel::graphics::frames::bmfont::BMFontUtil_obj::forEachAttribute(kerningText, ::Dynamic(new _hx_Closure_0(second,amount,first)));
HXLINE(  60)		return  ::flixel::graphics::frames::bmfont::BMFontKerning_obj::__alloc( HX_CTX ,first->__get(0),second->__get(0),amount->__get(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontKerning_obj,fromText,return )

::Array< ::Dynamic> BMFontKerning_obj::listFromBytes( ::haxe::io::BytesInput bytes){
            	HX_GC_STACKFRAME(&_hx_pos_15168aeef7c4c51a_64_listFromBytes)
HXLINE(  65)		int blockSize = bytes->readInt32();
HXLINE(  66)		::Array< ::Dynamic> kernings = ::Array_obj< ::Dynamic>::__new();
HXLINE(  67)		while((blockSize > 0)){
HXLINE(  71)			int _g = bytes->readInt32();
HXLINE(  72)			int _g1 = bytes->readInt32();
HXLINE(  69)			 ::flixel::graphics::frames::bmfont::BMFontKerning kerning =  ::flixel::graphics::frames::bmfont::BMFontKerning_obj::__alloc( HX_CTX ,_g,_g1,bytes->readInt16());
HXLINE(  75)			kernings->push(kerning);
HXLINE(  76)			blockSize = (blockSize - 10);
            		}
HXLINE(  78)		return kernings;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontKerning_obj,listFromBytes,return )


BMFontKerning_obj::BMFontKerning_obj()
{
}

::hx::Val BMFontKerning_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return ::hx::Val( first ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"second") ) { return ::hx::Val( second ); }
		if (HX_FIELD_EQ(inName,"amount") ) { return ::hx::Val( amount ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFontKerning_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromText") ) { outValue = fromText_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listFromXml") ) { outValue = listFromXml_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFromBytes") ) { outValue = listFromBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFontKerning_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"second") ) { second=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amount") ) { amount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFontKerning_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("first",30,78,9d,00));
	outFields->push(HX_("second",74,cf,47,64));
	outFields->push(HX_("amount",d8,11,03,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFontKerning_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BMFontKerning_obj,first),HX_("first",30,78,9d,00)},
	{::hx::fsInt,(int)offsetof(BMFontKerning_obj,second),HX_("second",74,cf,47,64)},
	{::hx::fsInt,(int)offsetof(BMFontKerning_obj,amount),HX_("amount",d8,11,03,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFontKerning_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFontKerning_obj_sMemberFields[] = {
	HX_("first",30,78,9d,00),
	HX_("second",74,cf,47,64),
	HX_("amount",d8,11,03,d5),
	::String(null()) };

::hx::Class BMFontKerning_obj::__mClass;

static ::String BMFontKerning_obj_sStaticFields[] = {
	HX_("fromXml",8d,3e,06,58),
	HX_("listFromXml",cf,b1,05,0f),
	HX_("fromText",37,9b,c5,aa),
	HX_("listFromBytes",63,3a,55,7e),
	::String(null())
};

void BMFontKerning_obj::__register()
{
	BMFontKerning_obj _hx_dummy;
	BMFontKerning_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFontKerning",55,39,b9,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontKerning_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontKerning_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFontKerning_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFontKerning_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontKerning_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontKerning_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
