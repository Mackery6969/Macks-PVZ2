#ifndef INCLUDED_Peashooter
#define INCLUDED_Peashooter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Plant
#include <Plant.h>
#endif
HX_DECLARE_CLASS0(Peashooter)
HX_DECLARE_CLASS0(Plant)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Peashooter_obj : public  ::Plant_obj
{
	public:
		typedef  ::Plant_obj super;
		typedef Peashooter_obj OBJ_;
		Peashooter_obj();

	public:
		enum { _hx_ClassId = 0x0939a068 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Peashooter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Peashooter"); }
		static ::hx::ObjectPtr< Peashooter_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< Peashooter_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Peashooter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Peashooter",e0,70,14,73); }

		void fire();

};


#endif /* INCLUDED_Peashooter */ 
