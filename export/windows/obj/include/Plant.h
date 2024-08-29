#ifndef INCLUDED_Plant
#define INCLUDED_Plant

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Plant)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Plant_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Plant_obj OBJ_;
		Plant_obj();

	public:
		enum { _hx_ClassId = 0x4bffd7a7 };

		void __construct(Float x,Float y,::String name,int hp,Float firingSpeed,int damage,int cost, ::flixel::graphics::FlxGraphic graphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Plant")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Plant"); }
		static ::hx::ObjectPtr< Plant_obj > __new(Float x,Float y,::String name,int hp,Float firingSpeed,int damage,int cost, ::flixel::graphics::FlxGraphic graphic);
		static ::hx::ObjectPtr< Plant_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String name,int hp,Float firingSpeed,int damage,int cost, ::flixel::graphics::FlxGraphic graphic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Plant_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Plant",4b,6e,bb,57); }

		::String name;
		int hp;
		Float firingSpeed;
		int damage;
		Float cooldown;
		int cost;
		void takeDamage(int amount);
		::Dynamic takeDamage_dyn();

		virtual void fire();
		::Dynamic fire_dyn();

		void playAnimation(::String animationName);
		::Dynamic playAnimation_dyn();

};


#endif /* INCLUDED_Plant */ 
