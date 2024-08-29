#ifndef INCLUDED_sys_ssl__Socket_SocketOutput
#define INCLUDED_sys_ssl__Socket_SocketOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,net,Socket)
HX_DECLARE_CLASS2(sys,ssl,Socket)
HX_DECLARE_CLASS3(sys,ssl,_Socket,SocketOutput)

namespace sys{
namespace ssl{
namespace _Socket{


class HXCPP_CLASS_ATTRIBUTES SocketOutput_obj : public  ::haxe::io::Output_obj
{
	public:
		typedef  ::haxe::io::Output_obj super;
		typedef SocketOutput_obj OBJ_;
		SocketOutput_obj();

	public:
		enum { _hx_ClassId = 0x52cf5067 };

		void __construct( ::sys::ssl::Socket s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.ssl._Socket.SocketOutput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.ssl._Socket.SocketOutput"); }
		static ::hx::ObjectPtr< SocketOutput_obj > __new( ::sys::ssl::Socket s);
		static ::hx::ObjectPtr< SocketOutput_obj > __alloc(::hx::Ctx *_hx_ctx, ::sys::ssl::Socket s);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SocketOutput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SocketOutput",34,a3,ea,62); }

		 ::sys::ssl::Socket __s;
		void writeByte(int c);

		int writeBytes( ::haxe::io::Bytes buf,int pos,int len);

		void close();

};

} // end namespace sys
} // end namespace ssl
} // end namespace _Socket

#endif /* INCLUDED_sys_ssl__Socket_SocketOutput */ 
