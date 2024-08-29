#ifndef INCLUDED_flixel_group_FlxTypedContainer
#define INCLUDED_flixel_group_FlxTypedContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedContainer)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES FlxTypedContainer_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef FlxTypedContainer_obj OBJ_;
		FlxTypedContainer_obj();

	public:
		enum { _hx_ClassId = 0x563293a6 };

		void __construct(::hx::Null< int >  __o_maxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.group.FlxTypedContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.group.FlxTypedContainer"); }
		static ::hx::ObjectPtr< FlxTypedContainer_obj > __new(::hx::Null< int >  __o_maxSize);
		static ::hx::ObjectPtr< FlxTypedContainer_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_maxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedContainer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedContainer",69,c3,a7,9f); }

		void onMemberAdd( ::Dynamic member);

		void onMemberRemove( ::Dynamic member);

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxTypedContainer */ 
