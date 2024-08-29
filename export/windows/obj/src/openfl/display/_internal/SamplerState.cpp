#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2927c9d004f07aab_26_new,"openfl.display._internal.SamplerState","new",0xf1434457,"openfl.display._internal.SamplerState.new","openfl/display/_internal/SamplerState.hx",26,0x69da3ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_2927c9d004f07aab_37_clone,"openfl.display._internal.SamplerState","clone",0xeb10b314,"openfl.display._internal.SamplerState.clone","openfl/display/_internal/SamplerState.hx",37,0x69da3ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_2927c9d004f07aab_44_copyFrom,"openfl.display._internal.SamplerState","copyFrom",0xe1b6d868,"openfl.display._internal.SamplerState.copyFrom","openfl/display/_internal/SamplerState.hx",44,0x69da3ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_2927c9d004f07aab_56_equals,"openfl.display._internal.SamplerState","equals",0x75310ea8,"openfl.display._internal.SamplerState.equals","openfl/display/_internal/SamplerState.hx",56,0x69da3ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_2927c9d004f07aab_13_boot,"openfl.display._internal.SamplerState","boot",0x21b1885b,"openfl.display._internal.SamplerState.boot","openfl/display/_internal/SamplerState.hx",13,0x69da3ed6)
namespace openfl{
namespace display{
namespace _internal{

void SamplerState_obj::__construct( ::Dynamic __o_wrap, ::Dynamic __o_filter, ::Dynamic __o_mipfilter,::hx::Null< Float >  __o_lodBias,::hx::Null< bool >  __o_ignoreSampler,::hx::Null< bool >  __o_centroid,::hx::Null< bool >  __o_textureAlpha){
            		 ::Dynamic wrap = __o_wrap;
            		if (::hx::IsNull(__o_wrap)) wrap = 0;
            		 ::Dynamic filter = __o_filter;
            		if (::hx::IsNull(__o_filter)) filter = 5;
            		 ::Dynamic mipfilter = __o_mipfilter;
            		if (::hx::IsNull(__o_mipfilter)) mipfilter = 2;
            		Float lodBias = __o_lodBias.Default(((Float)0.0));
            		bool ignoreSampler = __o_ignoreSampler.Default(false);
            		bool centroid = __o_centroid.Default(false);
            		bool textureAlpha = __o_textureAlpha.Default(false);
            	HX_STACKFRAME(&_hx_pos_2927c9d004f07aab_26_new)
HXLINE(  27)		this->wrap = wrap;
HXLINE(  28)		this->filter = filter;
HXLINE(  29)		this->mipfilter = mipfilter;
HXLINE(  30)		this->lodBias = lodBias;
HXLINE(  31)		this->ignoreSampler = ignoreSampler;
HXLINE(  32)		this->centroid = centroid;
HXLINE(  33)		this->textureAlpha = textureAlpha;
            	}

Dynamic SamplerState_obj::__CreateEmpty() { return new SamplerState_obj; }

void *SamplerState_obj::_hx_vtable = 0;

Dynamic SamplerState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SamplerState_obj > _hx_result = new SamplerState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool SamplerState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cca8633;
}

 ::openfl::display::_internal::SamplerState SamplerState_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_2927c9d004f07aab_37_clone)
HXLINE(  38)		 ::openfl::display::_internal::SamplerState copy =  ::openfl::display::_internal::SamplerState_obj::__alloc( HX_CTX ,this->wrap,this->filter,this->mipfilter,this->lodBias,this->ignoreSampler,this->centroid,this->textureAlpha);
HXLINE(  39)		copy->mipmapGenerated = this->mipmapGenerated;
HXLINE(  40)		return copy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SamplerState_obj,clone,return )

void SamplerState_obj::copyFrom( ::openfl::display::_internal::SamplerState other){
            	HX_STACKFRAME(&_hx_pos_2927c9d004f07aab_44_copyFrom)
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if (::hx::IsNotNull( other )) {
HXLINE(  45)			_hx_tmp = other->ignoreSampler;
            		}
            		else {
HXLINE(  45)			_hx_tmp = true;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  45)			return;
            		}
HXLINE(  47)		this->wrap = other->wrap;
HXLINE(  48)		this->filter = other->filter;
HXLINE(  49)		this->mipfilter = other->mipfilter;
HXLINE(  50)		this->lodBias = other->lodBias;
HXLINE(  51)		this->centroid = other->centroid;
HXLINE(  52)		this->textureAlpha = other->textureAlpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,copyFrom,(void))

bool SamplerState_obj::equals( ::openfl::display::_internal::SamplerState other){
            	HX_STACKFRAME(&_hx_pos_2927c9d004f07aab_56_equals)
HXLINE(  57)		if (::hx::IsNull( other )) {
HXLINE(  59)			return false;
            		}
HXLINE(  62)		bool _hx_tmp;
HXDLIN(  62)		bool _hx_tmp1;
HXDLIN(  62)		bool _hx_tmp2;
HXDLIN(  62)		if (::hx::IsEq( this->wrap,other->wrap )) {
HXLINE(  62)			_hx_tmp2 = ::hx::IsEq( this->filter,other->filter );
            		}
            		else {
HXLINE(  62)			_hx_tmp2 = false;
            		}
HXDLIN(  62)		if (_hx_tmp2) {
HXLINE(  62)			_hx_tmp1 = ::hx::IsEq( this->mipfilter,other->mipfilter );
            		}
            		else {
HXLINE(  62)			_hx_tmp1 = false;
            		}
HXDLIN(  62)		if (_hx_tmp1) {
HXLINE(  62)			_hx_tmp = (this->lodBias == other->lodBias);
            		}
            		else {
HXLINE(  62)			_hx_tmp = false;
            		}
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  62)			return (this->textureAlpha == other->textureAlpha);
            		}
            		else {
HXLINE(  62)			return false;
            		}
HXDLIN(  62)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,equals,return )


SamplerState_obj::SamplerState_obj()
{
}

void SamplerState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerState);
	HX_MARK_MEMBER_NAME(centroid,"centroid");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(ignoreSampler,"ignoreSampler");
	HX_MARK_MEMBER_NAME(lodBias,"lodBias");
	HX_MARK_MEMBER_NAME(mipfilter,"mipfilter");
	HX_MARK_MEMBER_NAME(mipmapGenerated,"mipmapGenerated");
	HX_MARK_MEMBER_NAME(textureAlpha,"textureAlpha");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_END_CLASS();
}

void SamplerState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(centroid,"centroid");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(ignoreSampler,"ignoreSampler");
	HX_VISIT_MEMBER_NAME(lodBias,"lodBias");
	HX_VISIT_MEMBER_NAME(mipfilter,"mipfilter");
	HX_VISIT_MEMBER_NAME(mipmapGenerated,"mipmapGenerated");
	HX_VISIT_MEMBER_NAME(textureAlpha,"textureAlpha");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
}

::hx::Val SamplerState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return ::hx::Val( wrap ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { return ::hx::Val( lodBias ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centroid") ) { return ::hx::Val( centroid ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { return ::hx::Val( mipfilter ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureAlpha") ) { return ::hx::Val( textureAlpha ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreSampler") ) { return ::hx::Val( ignoreSampler ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mipmapGenerated") ) { return ::hx::Val( mipmapGenerated ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SamplerState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { lodBias=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centroid") ) { centroid=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { mipfilter=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureAlpha") ) { textureAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreSampler") ) { ignoreSampler=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mipmapGenerated") ) { mipmapGenerated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("centroid",40,e0,e5,97));
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("ignoreSampler",16,5a,57,a1));
	outFields->push(HX_("lodBias",9a,3f,ad,ac));
	outFields->push(HX_("mipfilter",4c,98,13,fd));
	outFields->push(HX_("mipmapGenerated",e7,b0,11,f6));
	outFields->push(HX_("textureAlpha",83,54,36,1a));
	outFields->push(HX_("wrap",ca,39,ff,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SamplerState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(SamplerState_obj,centroid),HX_("centroid",40,e0,e5,97)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SamplerState_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsBool,(int)offsetof(SamplerState_obj,ignoreSampler),HX_("ignoreSampler",16,5a,57,a1)},
	{::hx::fsFloat,(int)offsetof(SamplerState_obj,lodBias),HX_("lodBias",9a,3f,ad,ac)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SamplerState_obj,mipfilter),HX_("mipfilter",4c,98,13,fd)},
	{::hx::fsBool,(int)offsetof(SamplerState_obj,mipmapGenerated),HX_("mipmapGenerated",e7,b0,11,f6)},
	{::hx::fsBool,(int)offsetof(SamplerState_obj,textureAlpha),HX_("textureAlpha",83,54,36,1a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SamplerState_obj,wrap),HX_("wrap",ca,39,ff,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SamplerState_obj_sStaticStorageInfo = 0;
#endif

static ::String SamplerState_obj_sMemberFields[] = {
	HX_("centroid",40,e0,e5,97),
	HX_("filter",b8,1f,35,85),
	HX_("ignoreSampler",16,5a,57,a1),
	HX_("lodBias",9a,3f,ad,ac),
	HX_("mipfilter",4c,98,13,fd),
	HX_("mipmapGenerated",e7,b0,11,f6),
	HX_("textureAlpha",83,54,36,1a),
	HX_("wrap",ca,39,ff,4e),
	HX_("clone",5d,13,63,48),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("equals",3f,ee,f2,bf),
	::String(null()) };

::hx::Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	SamplerState_obj _hx_dummy;
	SamplerState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.SamplerState",e5,cc,6e,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SamplerState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SamplerState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SamplerState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SamplerState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SamplerState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2927c9d004f07aab_13_boot)
HXDLIN(  13)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
