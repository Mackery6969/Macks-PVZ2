#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas__AtlasBase_HashOrArray_Impl_
#include <flixel/graphics/atlas/_AtlasBase/HashOrArray_Impl_.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_DynamicAccessIterator
#include <haxe/iterators/DynamicAccessIterator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e7a0ae140684c0ba_71_isArray,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_","isArray",0x02ce8f4c,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_.isArray","flixel/graphics/atlas/AtlasBase.hx",71,0x520eac77)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a0ae140684c0ba_76_isHash,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_","isHash",0x2024057b,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_.isHash","flixel/graphics/atlas/AtlasBase.hx",76,0x520eac77)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a0ae140684c0ba_82_toArray,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_","toArray",0x32cd381b,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_.toArray","flixel/graphics/atlas/AtlasBase.hx",82,0x520eac77)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a0ae140684c0ba_88_toHash,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_","toHash",0x3876ab8c,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_.toHash","flixel/graphics/atlas/AtlasBase.hx",88,0x520eac77)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a0ae140684c0ba_93_iterator,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_","iterator",0xf52f0951,"flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_.iterator","flixel/graphics/atlas/AtlasBase.hx",93,0x520eac77)
namespace flixel{
namespace graphics{
namespace atlas{
namespace _AtlasBase{

void HashOrArray_Impl__obj::__construct() { }

Dynamic HashOrArray_Impl__obj::__CreateEmpty() { return new HashOrArray_Impl__obj; }

void *HashOrArray_Impl__obj::_hx_vtable = 0;

Dynamic HashOrArray_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HashOrArray_Impl__obj > _hx_result = new HashOrArray_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HashOrArray_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4916f6eb;
}

bool HashOrArray_Impl__obj::isArray( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e7a0ae140684c0ba_71_isArray)
HXDLIN(  71)		return ::Std_obj::isOfType(this1,::hx::ArrayBase::__mClass);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HashOrArray_Impl__obj,isArray,return )

bool HashOrArray_Impl__obj::isHash( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e7a0ae140684c0ba_76_isHash)
HXDLIN(  76)		return !(::Std_obj::isOfType(this1,::hx::ArrayBase::__mClass));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HashOrArray_Impl__obj,isHash,return )

::cpp::VirtualArray HashOrArray_Impl__obj::toArray( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e7a0ae140684c0ba_82_toArray)
HXDLIN(  82)		return ( (::cpp::VirtualArray)(this1) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HashOrArray_Impl__obj,toArray,return )

 ::Dynamic HashOrArray_Impl__obj::toHash( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e7a0ae140684c0ba_88_toHash)
HXDLIN(  88)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HashOrArray_Impl__obj,toHash,return )

 ::Dynamic HashOrArray_Impl__obj::iterator( ::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_e7a0ae140684c0ba_93_iterator)
HXDLIN(  93)		if (::Std_obj::isOfType(this1,::hx::ArrayBase::__mClass)) {
HXLINE(  94)			return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,( (::cpp::VirtualArray)(this1) ));
            		}
            		else {
HXLINE(  96)			return  ::haxe::iterators::DynamicAccessIterator_obj::__alloc( HX_CTX ,this1);
            		}
HXLINE(  93)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HashOrArray_Impl__obj,iterator,return )


HashOrArray_Impl__obj::HashOrArray_Impl__obj()
{
}

bool HashOrArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isHash") ) { outValue = isHash_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHash") ) { outValue = toHash_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isArray") ) { outValue = isArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toArray") ) { outValue = toArray_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HashOrArray_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HashOrArray_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HashOrArray_Impl__obj::__mClass;

static ::String HashOrArray_Impl__obj_sStaticFields[] = {
	HX_("isArray",4f,11,15,c2),
	HX_("isHash",d8,f4,6e,62),
	HX_("toArray",1e,ba,13,f2),
	HX_("toHash",e9,9a,c1,7a),
	HX_("iterator",ee,49,9a,93),
	::String(null())
};

void HashOrArray_Impl__obj::__register()
{
	HashOrArray_Impl__obj _hx_dummy;
	HashOrArray_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.atlas._AtlasBase.HashOrArray_Impl_",6b,19,81,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HashOrArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HashOrArray_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HashOrArray_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HashOrArray_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HashOrArray_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AtlasBase
