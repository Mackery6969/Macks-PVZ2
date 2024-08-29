#ifndef INCLUDED_ClientPrefs
#define INCLUDED_ClientPrefs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ClientPrefs)



class HXCPP_CLASS_ATTRIBUTES ClientPrefs_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClientPrefs_obj OBJ_;
		ClientPrefs_obj();

	public:
		enum { _hx_ClassId = 0x3ddb9b05 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ClientPrefs")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"ClientPrefs"); }

		inline static ::hx::ObjectPtr< ClientPrefs_obj > __new() {
			::hx::ObjectPtr< ClientPrefs_obj > __this = new ClientPrefs_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ClientPrefs_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ClientPrefs_obj *__this = (ClientPrefs_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClientPrefs_obj), false, "ClientPrefs"));
			*(void **)__this = ClientPrefs_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClientPrefs_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClientPrefs",c5,55,e0,8a); }

		static void __boot();
		static ::String defaultFont;
};


#endif /* INCLUDED_ClientPrefs */ 
