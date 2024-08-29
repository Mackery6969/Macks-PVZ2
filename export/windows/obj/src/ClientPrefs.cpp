#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_5_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",5,0x329d1619)

void ClientPrefs_obj::__construct() { }

Dynamic ClientPrefs_obj::__CreateEmpty() { return new ClientPrefs_obj; }

void *ClientPrefs_obj::_hx_vtable = 0;

Dynamic ClientPrefs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientPrefs_obj > _hx_result = new ClientPrefs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClientPrefs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ddb9b05;
}

::String ClientPrefs_obj::defaultFont;


ClientPrefs_obj::ClientPrefs_obj()
{
}

bool ClientPrefs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFont") ) { outValue = ( defaultFont ); return true; }
	}
	return false;
}

bool ClientPrefs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFont") ) { defaultFont=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ClientPrefs_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ClientPrefs_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ClientPrefs_obj::defaultFont,HX_("defaultFont",30,57,7f,15)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ClientPrefs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::defaultFont,"defaultFont");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClientPrefs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::defaultFont,"defaultFont");
};

#endif

::hx::Class ClientPrefs_obj::__mClass;

static ::String ClientPrefs_obj_sStaticFields[] = {
	HX_("defaultFont",30,57,7f,15),
	::String(null())
};

void ClientPrefs_obj::__register()
{
	ClientPrefs_obj _hx_dummy;
	ClientPrefs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ClientPrefs",c5,55,e0,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ClientPrefs_obj::__GetStatic;
	__mClass->mSetStaticField = &ClientPrefs_obj::__SetStatic;
	__mClass->mMarkFunc = ClientPrefs_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ClientPrefs_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ClientPrefs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClientPrefs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientPrefs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientPrefs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ClientPrefs_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_5_boot)
HXDLIN(   5)		defaultFont = HX_("",00,00,00,00);
            	}
}

