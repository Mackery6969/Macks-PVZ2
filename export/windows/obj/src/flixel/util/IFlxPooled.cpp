#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

namespace flixel{
namespace util{


static ::String IFlxPooled_obj_sMemberFields[] = {
	HX_("put",cf,62,55,00),
	::String(null()) };

::hx::Class IFlxPooled_obj::__mClass;

void IFlxPooled_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.IFlxPooled",9e,d7,60,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxPooled_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x9aa322a2 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
