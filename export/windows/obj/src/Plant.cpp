#include <hxcpp.h>

#ifndef INCLUDED_Plant
#include <Plant.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_922936bac89672c6_3_new,"Plant","new",0xb2d390bd,"Plant.new","Plant.hx",3,0xd6539553)
HX_LOCAL_STACK_FRAME(_hx_pos_922936bac89672c6_25_takeDamage,"Plant","takeDamage",0x7a096159,"Plant.takeDamage","Plant.hx",25,0xd6539553)
HX_LOCAL_STACK_FRAME(_hx_pos_922936bac89672c6_36_fire,"Plant","fire",0xc10464b9,"Plant.fire","Plant.hx",36,0xd6539553)
HX_LOCAL_STACK_FRAME(_hx_pos_922936bac89672c6_41_playAnimation,"Plant","playAnimation",0xedf6f90d,"Plant.playAnimation","Plant.hx",41,0xd6539553)

void Plant_obj::__construct(Float x,Float y,::String name,int hp,Float firingSpeed,int damage,int cost, ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_922936bac89672c6_3_new)
HXLINE(   9)		this->cooldown = ((Float)0);
HXLINE(  14)		super::__construct(x,y,null());
HXLINE(  15)		this->name = name;
HXLINE(  16)		this->hp = hp;
HXLINE(  17)		this->firingSpeed = firingSpeed;
HXLINE(  18)		this->damage = damage;
HXLINE(  19)		this->cost = cost;
HXLINE(  21)		this->loadGraphic(graphic,null(),null(),null(),null(),null());
            	}

Dynamic Plant_obj::__CreateEmpty() { return new Plant_obj; }

void *Plant_obj::_hx_vtable = 0;

Dynamic Plant_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Plant_obj > _hx_result = new Plant_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool Plant_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4bffd7a7) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x4bffd7a7;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Plant_obj::takeDamage(int amount){
            	HX_STACKFRAME(&_hx_pos_922936bac89672c6_25_takeDamage)
HXLINE(  26)		 ::Plant _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  26)		_hx_tmp->hp = (_hx_tmp->hp - amount);
HXLINE(  27)		if ((this->hp <= 0)) {
HXLINE(  29)			this->kill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plant_obj,takeDamage,(void))

void Plant_obj::fire(){
            	HX_STACKFRAME(&_hx_pos_922936bac89672c6_36_fire)
HXDLIN(  36)		::haxe::Log_obj::trace((this->name + HX_(" is firing!",38,90,88,59)),::hx::SourceInfo(HX_("source/Plant.hx",47,b8,72,c2),36,HX_("Plant",4b,6e,bb,57),HX_("fire",b6,d3,bb,43)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Plant_obj,fire,(void))

void Plant_obj::playAnimation(::String animationName){
            	HX_STACKFRAME(&_hx_pos_922936bac89672c6_41_playAnimation)
HXDLIN(  41)		this->animation->play(animationName,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plant_obj,playAnimation,(void))


::hx::ObjectPtr< Plant_obj > Plant_obj::__new(Float x,Float y,::String name,int hp,Float firingSpeed,int damage,int cost, ::flixel::graphics::FlxGraphic graphic) {
	::hx::ObjectPtr< Plant_obj > __this = new Plant_obj();
	__this->__construct(x,y,name,hp,firingSpeed,damage,cost,graphic);
	return __this;
}

::hx::ObjectPtr< Plant_obj > Plant_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String name,int hp,Float firingSpeed,int damage,int cost, ::flixel::graphics::FlxGraphic graphic) {
	Plant_obj *__this = (Plant_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Plant_obj), true, "Plant"));
	*(void **)__this = Plant_obj::_hx_vtable;
	__this->__construct(x,y,name,hp,firingSpeed,damage,cost,graphic);
	return __this;
}

Plant_obj::Plant_obj()
{
}

void Plant_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Plant);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(hp,"hp");
	HX_MARK_MEMBER_NAME(firingSpeed,"firingSpeed");
	HX_MARK_MEMBER_NAME(damage,"damage");
	HX_MARK_MEMBER_NAME(cooldown,"cooldown");
	HX_MARK_MEMBER_NAME(cost,"cost");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Plant_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(hp,"hp");
	HX_VISIT_MEMBER_NAME(firingSpeed,"firingSpeed");
	HX_VISIT_MEMBER_NAME(damage,"damage");
	HX_VISIT_MEMBER_NAME(cooldown,"cooldown");
	HX_VISIT_MEMBER_NAME(cost,"cost");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Plant_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"hp") ) { return ::hx::Val( hp ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"cost") ) { return ::hx::Val( cost ); }
		if (HX_FIELD_EQ(inName,"fire") ) { return ::hx::Val( fire_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"damage") ) { return ::hx::Val( damage ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cooldown") ) { return ::hx::Val( cooldown ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"takeDamage") ) { return ::hx::Val( takeDamage_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firingSpeed") ) { return ::hx::Val( firingSpeed ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return ::hx::Val( playAnimation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Plant_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"hp") ) { hp=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cost") ) { cost=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"damage") ) { damage=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cooldown") ) { cooldown=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firingSpeed") ) { firingSpeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Plant_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("hp",08,5b,00,00));
	outFields->push(HX_("firingSpeed",14,b0,ed,bd));
	outFields->push(HX_("damage",6f,90,e4,1d));
	outFields->push(HX_("cooldown",ab,4b,a2,f9));
	outFields->push(HX_("cost",4d,be,c4,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Plant_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Plant_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Plant_obj,hp),HX_("hp",08,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(Plant_obj,firingSpeed),HX_("firingSpeed",14,b0,ed,bd)},
	{::hx::fsInt,(int)offsetof(Plant_obj,damage),HX_("damage",6f,90,e4,1d)},
	{::hx::fsFloat,(int)offsetof(Plant_obj,cooldown),HX_("cooldown",ab,4b,a2,f9)},
	{::hx::fsInt,(int)offsetof(Plant_obj,cost),HX_("cost",4d,be,c4,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Plant_obj_sStaticStorageInfo = 0;
#endif

static ::String Plant_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("hp",08,5b,00,00),
	HX_("firingSpeed",14,b0,ed,bd),
	HX_("damage",6f,90,e4,1d),
	HX_("cooldown",ab,4b,a2,f9),
	HX_("cost",4d,be,c4,41),
	HX_("takeDamage",16,ac,bd,b1),
	HX_("fire",b6,d3,bb,43),
	HX_("playAnimation",70,42,7a,e5),
	::String(null()) };

::hx::Class Plant_obj::__mClass;

void Plant_obj::__register()
{
	Plant_obj _hx_dummy;
	Plant_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Plant",4b,6e,bb,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Plant_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Plant_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Plant_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Plant_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

