#include <hxcpp.h>

#ifndef INCLUDED_Peashooter
#include <Peashooter.h>
#endif
#ifndef INCLUDED_Plant
#include <Plant.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_04abc59c6f15bf01_9_new,"Peashooter","new",0x868a01d2,"Peashooter.new","Plants.hx",9,0xe03ebbf6)
HX_LOCAL_STACK_FRAME(_hx_pos_04abc59c6f15bf01_18_fire,"Peashooter","fire",0x2cf0e604,"Peashooter.fire","Plants.hx",18,0xe03ebbf6)

void Peashooter_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_04abc59c6f15bf01_9_new)
HXDLIN(   9)		super::__construct(x,y,HX_("Peashooter",e0,70,14,73),100,((Float)1.5),20,100,::flixel::FlxG_obj::bitmap->add((::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + HX_("images",b8,50,92,fe)) + HX_("/",2f,00,00,00)) + HX_("Peashooter",e0,70,14,73)) + HX_(".png",3b,2d,bd,1e))),null(),null()));
            	}

Dynamic Peashooter_obj::__CreateEmpty() { return new Peashooter_obj; }

void *Peashooter_obj::_hx_vtable = 0;

Dynamic Peashooter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Peashooter_obj > _hx_result = new Peashooter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Peashooter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4bffd7a7) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x0939a068) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0939a068;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x4bffd7a7;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Peashooter_obj::fire(){
            	HX_STACKFRAME(&_hx_pos_04abc59c6f15bf01_18_fire)
HXDLIN(  18)		this->super::fire();
            	}



::hx::ObjectPtr< Peashooter_obj > Peashooter_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< Peashooter_obj > __this = new Peashooter_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< Peashooter_obj > Peashooter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	Peashooter_obj *__this = (Peashooter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Peashooter_obj), true, "Peashooter"));
	*(void **)__this = Peashooter_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Peashooter_obj::Peashooter_obj()
{
}

::hx::Val Peashooter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return ::hx::Val( fire_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Peashooter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Peashooter_obj_sStaticStorageInfo = 0;
#endif

static ::String Peashooter_obj_sMemberFields[] = {
	HX_("fire",b6,d3,bb,43),
	::String(null()) };

::hx::Class Peashooter_obj::__mClass;

void Peashooter_obj::__register()
{
	Peashooter_obj _hx_dummy;
	Peashooter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Peashooter",e0,70,14,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Peashooter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Peashooter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Peashooter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Peashooter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

