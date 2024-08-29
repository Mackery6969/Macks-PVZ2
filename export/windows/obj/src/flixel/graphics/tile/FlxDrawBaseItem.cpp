#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0484b113da1bcafb_12_new,"flixel.graphics.tile.FlxDrawBaseItem","new",0x1069797d,"flixel.graphics.tile.FlxDrawBaseItem.new","flixel/graphics/tile/FlxDrawBaseItem.hx",12,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_44_reset,"flixel.graphics.tile.FlxDrawBaseItem","reset",0x6670342c,"flixel.graphics.tile.FlxDrawBaseItem.reset","flixel/graphics/tile/FlxDrawBaseItem.hx",44,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_52_dispose,"flixel.graphics.tile.FlxDrawBaseItem","dispose",0x64897c3c,"flixel.graphics.tile.FlxDrawBaseItem.dispose","flixel/graphics/tile/FlxDrawBaseItem.hx",52,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_61_render,"flixel.graphics.tile.FlxDrawBaseItem","render",0x386e9259,"flixel.graphics.tile.FlxDrawBaseItem.render","flixel/graphics/tile/FlxDrawBaseItem.hx",61,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_64_addQuad,"flixel.graphics.tile.FlxDrawBaseItem","addQuad",0x30847725,"flixel.graphics.tile.FlxDrawBaseItem.addQuad","flixel/graphics/tile/FlxDrawBaseItem.hx",64,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_68_get_numVertices,"flixel.graphics.tile.FlxDrawBaseItem","get_numVertices",0x6c4b2893,"flixel.graphics.tile.FlxDrawBaseItem.get_numVertices","flixel/graphics/tile/FlxDrawBaseItem.hx",68,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_73_get_numTriangles,"flixel.graphics.tile.FlxDrawBaseItem","get_numTriangles",0x6bc74ed1,"flixel.graphics.tile.FlxDrawBaseItem.get_numTriangles","flixel/graphics/tile/FlxDrawBaseItem.hx",73,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_21_blendToInt,"flixel.graphics.tile.FlxDrawBaseItem","blendToInt",0xc101e4a6,"flixel.graphics.tile.FlxDrawBaseItem.blendToInt","flixel/graphics/tile/FlxDrawBaseItem.hx",21,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_17_boot,"flixel.graphics.tile.FlxDrawBaseItem","boot",0x43f9d475,"flixel.graphics.tile.FlxDrawBaseItem.boot","flixel/graphics/tile/FlxDrawBaseItem.hx",17,0xe6349cf4)
namespace flixel{
namespace graphics{
namespace tile{

void FlxDrawBaseItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_12_new)
HXLINE(  32)		this->blending = 0;
HXLINE(  31)		this->hasColorOffsets = false;
HXLINE(  30)		this->colored = false;
HXLINE(  29)		this->antialiasing = false;
            	}

Dynamic FlxDrawBaseItem_obj::__CreateEmpty() { return new FlxDrawBaseItem_obj; }

void *FlxDrawBaseItem_obj::_hx_vtable = 0;

Dynamic FlxDrawBaseItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDrawBaseItem_obj > _hx_result = new FlxDrawBaseItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDrawBaseItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01f7e225;
}

void FlxDrawBaseItem_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_44_reset)
HXLINE(  45)		this->graphics = null();
HXLINE(  46)		this->antialiasing = false;
HXLINE(  47)		this->nextTyped = null();
HXLINE(  48)		this->next = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,reset,(void))

void FlxDrawBaseItem_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_52_dispose)
HXLINE(  53)		this->graphics = null();
HXLINE(  54)		this->next = null();
HXLINE(  55)		this->type = null();
HXLINE(  56)		this->nextTyped = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,dispose,(void))

void FlxDrawBaseItem_obj::render( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_61_render)
HXDLIN(  61)		::flixel::graphics::tile::FlxDrawBaseItem_obj::drawCalls++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxDrawBaseItem_obj,render,(void))

void FlxDrawBaseItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_64_addQuad)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxDrawBaseItem_obj,addQuad,(void))

int FlxDrawBaseItem_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_68_get_numVertices)
HXDLIN(  68)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,get_numVertices,return )

int FlxDrawBaseItem_obj::get_numTriangles(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_73_get_numTriangles)
HXDLIN(  73)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,get_numTriangles,return )

int FlxDrawBaseItem_obj::drawCalls;

int FlxDrawBaseItem_obj::blendToInt( ::Dynamic blend){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_21_blendToInt)
HXDLIN(  21)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDrawBaseItem_obj,blendToInt,return )


::hx::ObjectPtr< FlxDrawBaseItem_obj > FlxDrawBaseItem_obj::__new() {
	::hx::ObjectPtr< FlxDrawBaseItem_obj > __this = new FlxDrawBaseItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxDrawBaseItem_obj > FlxDrawBaseItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxDrawBaseItem_obj *__this = (FlxDrawBaseItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDrawBaseItem_obj), true, "flixel.graphics.tile.FlxDrawBaseItem"));
	*(void **)__this = FlxDrawBaseItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDrawBaseItem_obj::FlxDrawBaseItem_obj()
{
}

void FlxDrawBaseItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawBaseItem);
	HX_MARK_MEMBER_NAME(nextTyped,"nextTyped");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(colored,"colored");
	HX_MARK_MEMBER_NAME(hasColorOffsets,"hasColorOffsets");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void FlxDrawBaseItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nextTyped,"nextTyped");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(colored,"colored");
	HX_VISIT_MEMBER_NAME(hasColorOffsets,"hasColorOffsets");
	HX_VISIT_MEMBER_NAME(blending,"blending");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(type,"type");
}

::hx::Val FlxDrawBaseItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { return ::hx::Val( colored ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return ::hx::Val( addQuad_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return ::hx::Val( graphics ); }
		if (HX_FIELD_EQ(inName,"blending") ) { return ::hx::Val( blending ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextTyped") ) { return ::hx::Val( nextTyped ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numVertices() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numTriangles() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasColorOffsets") ) { return ::hx::Val( hasColorOffsets ); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return ::hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return ::hx::Val( get_numTriangles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxDrawBaseItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"drawCalls") ) { outValue = ( drawCalls ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blendToInt") ) { outValue = blendToInt_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxDrawBaseItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::flixel::graphics::tile::FlxDrawItemType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { colored=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blending") ) { blending=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextTyped") ) { nextTyped=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasColorOffsets") ) { hasColorOffsets=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxDrawBaseItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"drawCalls") ) { drawCalls=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxDrawBaseItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("nextTyped",77,8a,10,c2));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("graphics",cb,f8,67,12));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("colored",82,28,66,ef));
	outFields->push(HX_("hasColorOffsets",d7,2c,2c,68));
	outFields->push(HX_("blending",31,6d,e6,6a));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("numVertices",5f,10,2c,56));
	outFields->push(HX_("numTriangles",85,39,b1,26));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxDrawBaseItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxDrawBaseItem_obj,nextTyped),HX_("nextTyped",77,8a,10,c2)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxDrawBaseItem */ ,(int)offsetof(FlxDrawBaseItem_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxDrawBaseItem_obj,graphics),HX_("graphics",cb,f8,67,12)},
	{::hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,colored),HX_("colored",82,28,66,ef)},
	{::hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,hasColorOffsets),HX_("hasColorOffsets",d7,2c,2c,68)},
	{::hx::fsInt,(int)offsetof(FlxDrawBaseItem_obj,blending),HX_("blending",31,6d,e6,6a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxDrawBaseItem_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxDrawItemType */ ,(int)offsetof(FlxDrawBaseItem_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxDrawBaseItem_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxDrawBaseItem_obj::drawCalls,HX_("drawCalls",71,a7,26,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDrawBaseItem_obj_sMemberFields[] = {
	HX_("nextTyped",77,8a,10,c2),
	HX_("next",f3,84,02,49),
	HX_("graphics",cb,f8,67,12),
	HX_("antialiasing",f4,16,b3,48),
	HX_("colored",82,28,66,ef),
	HX_("hasColorOffsets",d7,2c,2c,68),
	HX_("blending",31,6d,e6,6a),
	HX_("blend",51,e8,f4,b4),
	HX_("type",ba,f2,08,4d),
	HX_("reset",cf,49,c8,e6),
	HX_("dispose",9f,80,4c,bb),
	HX_("render",56,6b,29,05),
	HX_("addQuad",88,7b,47,87),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("get_numTriangles",0e,26,50,2b),
	::String(null()) };

static void FlxDrawBaseItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawBaseItem_obj::drawCalls,"drawCalls");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawBaseItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawBaseItem_obj::drawCalls,"drawCalls");
};

#endif

::hx::Class FlxDrawBaseItem_obj::__mClass;

static ::String FlxDrawBaseItem_obj_sStaticFields[] = {
	HX_("drawCalls",71,a7,26,09),
	HX_("blendToInt",23,80,69,ac),
	::String(null())
};

void FlxDrawBaseItem_obj::__register()
{
	FlxDrawBaseItem_obj _hx_dummy;
	FlxDrawBaseItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.tile.FlxDrawBaseItem",0b,f7,7d,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDrawBaseItem_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxDrawBaseItem_obj::__SetStatic;
	__mClass->mMarkFunc = FlxDrawBaseItem_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxDrawBaseItem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxDrawBaseItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxDrawBaseItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDrawBaseItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDrawBaseItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDrawBaseItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDrawBaseItem_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_17_boot)
HXDLIN(  17)		drawCalls = 0;
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
