#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontPadding
#include <flixel/graphics/frames/bmfont/BMFontPadding.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_389f2ddd7620ccce_140_new,"flixel.graphics.frames.bmfont.BMFontPadding","new",0xfd16ae4c,"flixel.graphics.frames.bmfont.BMFontPadding.new","flixel/graphics/frames/bmfont/BMFontInfo.hx",140,0x8997cf99)
HX_LOCAL_STACK_FRAME(_hx_pos_389f2ddd7620ccce_156_fromString,"flixel.graphics.frames.bmfont.BMFontPadding","fromString",0x9af8256f,"flixel.graphics.frames.bmfont.BMFontPadding.fromString","flixel/graphics/frames/bmfont/BMFontInfo.hx",156,0x8997cf99)
HX_LOCAL_STACK_FRAME(_hx_pos_389f2ddd7620ccce_169_fromBytes,"flixel.graphics.frames.bmfont.BMFontPadding","fromBytes",0xc9b1098d,"flixel.graphics.frames.bmfont.BMFontPadding.fromBytes","flixel/graphics/frames/bmfont/BMFontInfo.hx",169,0x8997cf99)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFontPadding_obj::__construct(::hx::Null< int >  __o_up,::hx::Null< int >  __o_right,::hx::Null< int >  __o_down,::hx::Null< int >  __o_left){
            		int up = __o_up.Default(0);
            		int right = __o_right.Default(0);
            		int down = __o_down.Default(0);
            		int left = __o_left.Default(0);
            	HX_STACKFRAME(&_hx_pos_389f2ddd7620ccce_140_new)
HXLINE( 145)		this->left = 0;
HXLINE( 144)		this->down = 0;
HXLINE( 143)		this->right = 0;
HXLINE( 142)		this->up = 0;
HXLINE( 149)		this->up = up;
HXLINE( 150)		this->right = right;
HXLINE( 151)		this->down = down;
HXLINE( 152)		this->left = left;
            	}

Dynamic BMFontPadding_obj::__CreateEmpty() { return new BMFontPadding_obj; }

void *BMFontPadding_obj::_hx_vtable = 0;

Dynamic BMFontPadding_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontPadding_obj > _hx_result = new BMFontPadding_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool BMFontPadding_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52029e0c;
}

 ::flixel::graphics::frames::bmfont::BMFontPadding BMFontPadding_obj::fromString(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_389f2ddd7620ccce_156_fromString)
HXLINE( 157)		::Array< ::String > values = data.split(HX_(",",2c,00,00,00));
HXLINE( 160)		 ::Dynamic _g = ::Std_obj::parseInt(values->__get(0));
HXLINE( 161)		 ::Dynamic _g1 = ::Std_obj::parseInt(values->__get(1));
HXLINE( 162)		 ::Dynamic _g2 = ::Std_obj::parseInt(values->__get(2));
HXLINE( 159)		return  ::flixel::graphics::frames::bmfont::BMFontPadding_obj::__alloc( HX_CTX ,_g,_g1,_g2,::Std_obj::parseInt(values->__get(3)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontPadding_obj,fromString,return )

 ::flixel::graphics::frames::bmfont::BMFontPadding BMFontPadding_obj::fromBytes( ::haxe::io::BytesInput bytes){
            	HX_GC_STACKFRAME(&_hx_pos_389f2ddd7620ccce_169_fromBytes)
HXLINE( 171)		int _g = bytes->readByte();
HXLINE( 172)		int _g1 = bytes->readByte();
HXLINE( 173)		int _g2 = bytes->readByte();
HXLINE( 170)		return  ::flixel::graphics::frames::bmfont::BMFontPadding_obj::__alloc( HX_CTX ,_g,_g1,_g2,bytes->readByte());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontPadding_obj,fromBytes,return )


BMFontPadding_obj::BMFontPadding_obj()
{
}

::hx::Val BMFontPadding_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return ::hx::Val( up ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return ::hx::Val( down ); }
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFontPadding_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFontPadding_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { down=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFontPadding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("up",5b,66,00,00));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("down",62,f8,6d,42));
	outFields->push(HX_("left",07,08,b0,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFontPadding_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BMFontPadding_obj,up),HX_("up",5b,66,00,00)},
	{::hx::fsInt,(int)offsetof(BMFontPadding_obj,right),HX_("right",dc,0b,64,e9)},
	{::hx::fsInt,(int)offsetof(BMFontPadding_obj,down),HX_("down",62,f8,6d,42)},
	{::hx::fsInt,(int)offsetof(BMFontPadding_obj,left),HX_("left",07,08,b0,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFontPadding_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFontPadding_obj_sMemberFields[] = {
	HX_("up",5b,66,00,00),
	HX_("right",dc,0b,64,e9),
	HX_("down",62,f8,6d,42),
	HX_("left",07,08,b0,47),
	::String(null()) };

::hx::Class BMFontPadding_obj::__mClass;

static ::String BMFontPadding_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	HX_("fromBytes",a1,f2,20,72),
	::String(null())
};

void BMFontPadding_obj::__register()
{
	BMFontPadding_obj _hx_dummy;
	BMFontPadding_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFontPadding",5a,d8,fe,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontPadding_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontPadding_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFontPadding_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFontPadding_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontPadding_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontPadding_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
