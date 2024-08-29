#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayKeyValueIterator
#include <haxe/iterators/ArrayKeyValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_37_new,"flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxGroup.hx",37,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_129_destroy,"flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxGroup.hx",129,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_157_update,"flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxGroup.hx",157,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_170_draw,"flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxGroup.hx",170,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_197_add,"flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxGroup.hx",197,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_249_insert,"flixel.group.FlxTypedGroup","insert",0x64e069c1,"flixel.group.FlxTypedGroup.insert","flixel/group/FlxGroup.hx",249,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_307_recycle,"flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxGroup.hx",307,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_359_remove,"flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxGroup.hx",359,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_390_replace,"flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxGroup.hx",390,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_416_sort,"flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxGroup.hx",416,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_426_getFirst,"flixel.group.FlxTypedGroup","getFirst",0x4b746042,"flixel.group.FlxTypedGroup.getFirst","flixel/group/FlxGroup.hx",426,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_430_getFirstHelper,"flixel.group.FlxTypedGroup","getFirstHelper",0x5867ef50,"flixel.group.FlxTypedGroup.getFirstHelper","flixel/group/FlxGroup.hx",430,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_449_getLast,"flixel.group.FlxTypedGroup","getLast",0x75ee4a84,"flixel.group.FlxTypedGroup.getLast","flixel/group/FlxGroup.hx",449,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_470_getFirstIndex,"flixel.group.FlxTypedGroup","getFirstIndex",0xa77f7b70,"flixel.group.FlxTypedGroup.getFirstIndex","flixel/group/FlxGroup.hx",470,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_489_getLastIndex,"flixel.group.FlxTypedGroup","getLastIndex",0xcc6321ee,"flixel.group.FlxTypedGroup.getLastIndex","flixel/group/FlxGroup.hx",489,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_510_any,"flixel.group.FlxTypedGroup","any",0x9768ef64,"flixel.group.FlxTypedGroup.any","flixel/group/FlxGroup.hx",510,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_525_every,"flixel.group.FlxTypedGroup","every",0x49e3ce13,"flixel.group.FlxTypedGroup.every","flixel/group/FlxGroup.hx",525,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_544_getFirstAvailable,"flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxGroup.hx",544,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_568_getFirstNull,"flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxGroup.hx",568,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_579_getFirstExisting,"flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxGroup.hx",579,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_590_getFirstAlive,"flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxGroup.hx",590,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_601_getFirstDead,"flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxGroup.hx",601,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_610_countLiving,"flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxGroup.hx",610,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_633_countDead,"flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxGroup.hx",633,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_659_getRandom,"flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxGroup.hx",659,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_673_clear,"flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxGroup.hx",673,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_691_killMembers,"flixel.group.FlxTypedGroup","killMembers",0xa0bff153,"flixel.group.FlxTypedGroup.killMembers","flixel/group/FlxGroup.hx",691,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_703_kill,"flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxGroup.hx",703,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_715_reviveMembers,"flixel.group.FlxTypedGroup","reviveMembers",0x4857b97c,"flixel.group.FlxTypedGroup.reviveMembers","flixel/group/FlxGroup.hx",715,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_726_revive,"flixel.group.FlxTypedGroup","revive",0xd17a20dd,"flixel.group.FlxTypedGroup.revive","flixel/group/FlxGroup.hx",726,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_737_iterator,"flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxGroup.hx",737,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_745_keyValueIterator,"flixel.group.FlxTypedGroup","keyValueIterator",0x8dc66de8,"flixel.group.FlxTypedGroup.keyValueIterator","flixel/group/FlxGroup.hx",745,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_756_forEach,"flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxGroup.hx",756,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_780_forEachAlive,"flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxGroup.hx",780,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_804_forEachDead,"flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxGroup.hx",804,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_828_forEachExists,"flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxGroup.hx",828,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_853_forEachOfType,"flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxGroup.hx",853,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_872_set_maxSize,"flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxGroup.hx",872,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_900_onMemberAdd,"flixel.group.FlxTypedGroup","onMemberAdd",0xb8f14b40,"flixel.group.FlxTypedGroup.onMemberAdd","flixel/group/FlxGroup.hx",900,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_906_onMemberRemove,"flixel.group.FlxTypedGroup","onMemberRemove",0xd6bc8085,"flixel.group.FlxTypedGroup.onMemberRemove","flixel/group/FlxGroup.hx",906,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_912_get_memberAdded,"flixel.group.FlxTypedGroup","get_memberAdded",0xd5201c15,"flixel.group.FlxTypedGroup.get_memberAdded","flixel/group/FlxGroup.hx",912,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_921_get_memberRemoved,"flixel.group.FlxTypedGroup","get_memberRemoved",0xd0fca635,"flixel.group.FlxTypedGroup.get_memberRemoved","flixel/group/FlxGroup.hx",921,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_41_resolveGroup,"flixel.group.FlxTypedGroup","resolveGroup",0x84c4b53b,"flixel.group.FlxTypedGroup.resolveGroup","flixel/group/FlxGroup.hx",41,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_60_resolveSelectionGroup,"flixel.group.FlxTypedGroup","resolveSelectionGroup",0xf45975d7,"flixel.group.FlxTypedGroup.resolveSelectionGroup","flixel/group/FlxGroup.hx",60,0x1e89d58e)
namespace flixel{
namespace group{

void FlxTypedGroup_obj::__construct(::hx::Null< int >  __o_MaxSize){
            		int MaxSize = __o_MaxSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_37_new)
HXLINE( 104)		this->_marker = 0;
HXLINE(  77)		this->length = 0;
HXLINE( 111)		super::__construct();
HXLINE( 113)		this->members = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 114)		this->set_maxSize(::Std_obj::_hx_int(::Math_obj::abs(( (Float)(MaxSize) ))));
HXLINE( 115)		this->flixelType = 2;
            	}

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return new FlxTypedGroup_obj; }

void *FlxTypedGroup_obj::_hx_vtable = 0;

Dynamic FlxTypedGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedGroup_obj > _hx_result = new FlxTypedGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTypedGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxTypedGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_129_destroy)
HXLINE( 130)		this->super::destroy();
HXLINE( 132)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberAdded);
HXLINE( 133)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberRemoved);
HXLINE( 135)		if (::hx::IsNotNull( this->members )) {
HXLINE( 140)			int count = this->length;
HXLINE( 141)			while(true){
HXLINE( 141)				count = (count - 1);
HXDLIN( 141)				if (!(((count + 1) > 0))) {
HXLINE( 141)					goto _hx_goto_1;
            				}
HXLINE( 143)				 ::Dynamic basic = this->members->shift();
HXLINE( 144)				if (::hx::IsNotNull( basic )) {
HXLINE( 145)					( ( ::flixel::FlxBasic)(basic) )->destroy();
            				}
            			}
            			_hx_goto_1:;
HXLINE( 148)			this->members = null();
            		}
            	}


void FlxTypedGroup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_157_update)
HXDLIN( 157)		int _g = 0;
HXDLIN( 157)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 157)		while((_g < _g1->get_length())){
HXDLIN( 157)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 157)			_g = (_g + 1);
HXLINE( 159)			bool _hx_tmp;
HXDLIN( 159)			bool _hx_tmp1;
HXDLIN( 159)			if (::hx::IsNotNull( basic )) {
HXLINE( 159)				_hx_tmp1 = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 159)				_hx_tmp1 = false;
            			}
HXDLIN( 159)			if (_hx_tmp1) {
HXLINE( 159)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->active;
            			}
            			else {
HXLINE( 159)				_hx_tmp = false;
            			}
HXDLIN( 159)			if (_hx_tmp) {
HXLINE( 161)				( ( ::flixel::FlxBasic)(basic) )->update(elapsed);
            			}
            		}
            	}


void FlxTypedGroup_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_170_draw)
HXLINE( 171)		::Array< ::Dynamic> oldDefaultCameras = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE( 172)		if (::hx::IsNotNull( this->_cameras )) {
HXLINE( 174)			::flixel::FlxCamera_obj::_defaultCameras = this->_cameras;
            		}
HXLINE( 177)		{
HXLINE( 177)			int _g = 0;
HXDLIN( 177)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 177)			while((_g < _g1->get_length())){
HXLINE( 177)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 177)				_g = (_g + 1);
HXLINE( 179)				bool _hx_tmp;
HXDLIN( 179)				bool _hx_tmp1;
HXDLIN( 179)				if (::hx::IsNotNull( basic )) {
HXLINE( 179)					_hx_tmp1 = ( ( ::flixel::FlxBasic)(basic) )->exists;
            				}
            				else {
HXLINE( 179)					_hx_tmp1 = false;
            				}
HXDLIN( 179)				if (_hx_tmp1) {
HXLINE( 179)					_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->visible;
            				}
            				else {
HXLINE( 179)					_hx_tmp = false;
            				}
HXDLIN( 179)				if (_hx_tmp) {
HXLINE( 180)					( ( ::flixel::FlxBasic)(basic) )->draw();
            				}
            			}
            		}
HXLINE( 183)		::flixel::FlxCamera_obj::_defaultCameras = oldDefaultCameras;
            	}


 ::Dynamic FlxTypedGroup_obj::add( ::Dynamic basic){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_197_add)
HXLINE( 198)		if (::hx::IsNull( basic )) {
HXLINE( 200)			::flixel::FlxG_obj::log->advanced(HX_("Cannot add a `null` object to a FlxGroup.",f2,f4,c0,70),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 201)			return null();
            		}
HXLINE( 205)		if ((this->members->indexOf(basic,null()) >= 0)) {
HXLINE( 206)			return basic;
            		}
HXLINE( 209)		int index = this->getFirstNull();
HXLINE( 210)		if ((index != -1)) {
HXLINE( 212)			this->members->set(index,basic);
HXLINE( 214)			if ((index >= this->length)) {
HXLINE( 216)				this->length = (index + 1);
            			}
HXLINE( 219)			this->onMemberAdd(basic);
HXLINE( 221)			return basic;
            		}
HXLINE( 225)		bool _hx_tmp;
HXDLIN( 225)		if ((this->maxSize > 0)) {
HXLINE( 225)			_hx_tmp = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 225)			_hx_tmp = false;
            		}
HXDLIN( 225)		if (_hx_tmp) {
HXLINE( 226)			return basic;
            		}
HXLINE( 229)		this->members->push(basic);
HXLINE( 230)		this->length++;
HXLINE( 231)		this->onMemberAdd(basic);
HXLINE( 233)		return basic;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

 ::Dynamic FlxTypedGroup_obj::insert(int position, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_249_insert)
HXLINE( 250)		if (::hx::IsNull( object )) {
HXLINE( 252)			::flixel::FlxG_obj::log->advanced(HX_("Cannot insert a `null` object into a FlxGroup.",a5,36,f4,8f),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 253)			return null();
            		}
HXLINE( 257)		if ((this->members->indexOf(object,null()) >= 0)) {
HXLINE( 258)			return object;
            		}
HXLINE( 261)		bool _hx_tmp;
HXDLIN( 261)		if ((position < this->length)) {
HXLINE( 261)			_hx_tmp = ::hx::IsNull( this->members->__get(position) );
            		}
            		else {
HXLINE( 261)			_hx_tmp = false;
            		}
HXDLIN( 261)		if (_hx_tmp) {
HXLINE( 263)			this->members->set(position,object);
HXLINE( 264)			this->onMemberAdd(object);
HXLINE( 266)			return object;
            		}
HXLINE( 270)		bool _hx_tmp1;
HXDLIN( 270)		if ((this->maxSize > 0)) {
HXLINE( 270)			_hx_tmp1 = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 270)			_hx_tmp1 = false;
            		}
HXDLIN( 270)		if (_hx_tmp1) {
HXLINE( 271)			return object;
            		}
HXLINE( 274)		this->members->insert(position,object);
HXLINE( 275)		this->length++;
HXLINE( 276)		this->onMemberAdd(object);
HXLINE( 278)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,insert,return )

 ::Dynamic FlxTypedGroup_obj::recycle(::hx::Class objectClass, ::Dynamic objectFactory,::hx::Null< bool >  __o_force,::hx::Null< bool >  __o_revive){
            		bool force = __o_force.Default(false);
            		bool revive = __o_revive.Default(true);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_307_recycle)
HXDLIN( 307)		 ::flixel::group::FlxTypedGroup _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 320)		if ((this->maxSize > 0)) {
HXLINE( 323)			if ((this->length < this->maxSize)) {
HXLINE( 324)				 ::Dynamic _hx_tmp;
HXDLIN( 324)				if (::hx::IsNotNull( objectFactory )) {
HXLINE( 324)					_hx_tmp = _gthis->add(objectFactory());
            				}
            				else {
HXLINE( 324)					if (::hx::IsNotNull( objectClass )) {
HXLINE( 324)						_hx_tmp = _gthis->add(::Type_obj::createInstance(objectClass,::cpp::VirtualArray_obj::__new(0)));
            					}
            					else {
HXLINE( 324)						_hx_tmp = null();
            					}
            				}
HXDLIN( 324)				return _hx_tmp;
            			}
HXLINE( 327)			 ::Dynamic basic = this->members->__get(this->_marker++);
HXLINE( 329)			if ((this->_marker >= this->maxSize)) {
HXLINE( 330)				this->_marker = 0;
            			}
HXLINE( 332)			if (revive) {
HXLINE( 333)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
HXLINE( 335)			return basic;
            		}
HXLINE( 339)		 ::Dynamic basic = this->getFirstAvailable(objectClass,force);
HXLINE( 341)		if (::hx::IsNotNull( basic )) {
HXLINE( 343)			if (revive) {
HXLINE( 344)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
HXLINE( 345)			return basic;
            		}
HXLINE( 348)		 ::Dynamic _hx_tmp;
HXDLIN( 348)		if (::hx::IsNotNull( objectFactory )) {
HXLINE( 348)			_hx_tmp = _gthis->add(objectFactory());
            		}
            		else {
HXLINE( 348)			if (::hx::IsNotNull( objectClass )) {
HXLINE( 348)				_hx_tmp = _gthis->add(::Type_obj::createInstance(objectClass,::cpp::VirtualArray_obj::__new(0)));
            			}
            			else {
HXLINE( 348)				_hx_tmp = null();
            			}
            		}
HXDLIN( 348)		return _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

 ::Dynamic FlxTypedGroup_obj::remove( ::Dynamic basic,::hx::Null< bool >  __o_splice){
            		bool splice = __o_splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_359_remove)
HXLINE( 360)		if (::hx::IsNull( this->members )) {
HXLINE( 361)			return null();
            		}
HXLINE( 363)		int index = this->members->indexOf(basic,null());
HXLINE( 365)		if ((index < 0)) {
HXLINE( 366)			return null();
            		}
HXLINE( 368)		if (splice) {
HXLINE( 370)			this->members->splice(index,1);
HXLINE( 371)			this->length--;
            		}
            		else {
HXLINE( 374)			this->members->set(index,null());
            		}
HXLINE( 376)		this->onMemberRemove(basic);
HXLINE( 378)		return basic;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

 ::Dynamic FlxTypedGroup_obj::replace( ::Dynamic oldObject, ::Dynamic newObject){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_390_replace)
HXLINE( 391)		int index = this->members->indexOf(oldObject,null());
HXLINE( 393)		if ((index < 0)) {
HXLINE( 394)			return null();
            		}
HXLINE( 396)		this->members->set(index,newObject);
HXLINE( 398)		this->onMemberRemove(oldObject);
HXLINE( 399)		this->onMemberAdd(newObject);
HXLINE( 401)		return newObject;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

void FlxTypedGroup_obj::sort( ::Dynamic func,::hx::Null< int >  __o_order){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,a1, ::Dynamic,_g) HXARGC(2)
            		int _hx_run( ::Dynamic a2, ::Dynamic a3){
            			HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_416_sort)
HXDLIN( 416)			return ( (int)(_g(a1,a2,a3)) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int order = __o_order.Default(-1);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_416_sort)
HXDLIN( 416)		 ::Dynamic _g = func;
HXDLIN( 416)		int a1 = order;
HXDLIN( 416)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN( 416)		this->members->sort(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

 ::Dynamic FlxTypedGroup_obj::getFirst( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_426_getFirst)
HXDLIN( 426)		 ::Dynamic result = null();
HXDLIN( 426)		{
HXDLIN( 426)			int _g = 0;
HXDLIN( 426)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 426)			while((_g < _g1->get_length())){
HXDLIN( 426)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 426)				_g = (_g + 1);
HXDLIN( 426)				bool _hx_tmp;
HXDLIN( 426)				if (::hx::IsNotNull( basic )) {
HXDLIN( 426)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXDLIN( 426)					_hx_tmp = false;
            				}
HXDLIN( 426)				if (_hx_tmp) {
HXDLIN( 426)					result = basic;
HXDLIN( 426)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXDLIN( 426)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirst,return )

 ::Dynamic FlxTypedGroup_obj::getFirstHelper( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_430_getFirstHelper)
HXLINE( 431)		 ::Dynamic result = null();
HXLINE( 432)		{
HXLINE( 432)			int _g = 0;
HXDLIN( 432)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 432)			while((_g < _g1->get_length())){
HXLINE( 432)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 432)				_g = (_g + 1);
HXLINE( 434)				bool _hx_tmp;
HXDLIN( 434)				if (::hx::IsNotNull( basic )) {
HXLINE( 434)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 434)					_hx_tmp = false;
            				}
HXDLIN( 434)				if (_hx_tmp) {
HXLINE( 436)					result = basic;
HXLINE( 437)					goto _hx_goto_16;
            				}
            			}
            			_hx_goto_16:;
            		}
HXLINE( 440)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirstHelper,return )

 ::Dynamic FlxTypedGroup_obj::getLast( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_449_getLast)
HXLINE( 450)		 ::Dynamic result = null();
HXLINE( 451)		int i = this->members->get_length();
HXLINE( 452)		while(true){
HXLINE( 452)			i = (i - 1);
HXDLIN( 452)			if (!(((i + 1) > 0))) {
HXLINE( 452)				goto _hx_goto_18;
            			}
HXLINE( 454)			 ::Dynamic basic = this->members->__get(i);
HXLINE( 455)			bool _hx_tmp;
HXDLIN( 455)			if (::hx::IsNotNull( basic )) {
HXLINE( 455)				_hx_tmp = ( (bool)(func(basic)) );
            			}
            			else {
HXLINE( 455)				_hx_tmp = false;
            			}
HXDLIN( 455)			if (_hx_tmp) {
HXLINE( 457)				result = basic;
HXLINE( 458)				goto _hx_goto_18;
            			}
            		}
            		_hx_goto_18:;
HXLINE( 461)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getLast,return )

int FlxTypedGroup_obj::getFirstIndex( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_470_getFirstIndex)
HXLINE( 471)		int result = -1;
HXLINE( 472)		{
HXLINE( 472)			int _g_current = 0;
HXDLIN( 472)			::cpp::VirtualArray _g_array = this->members;
HXDLIN( 472)			while((_g_current < _g_array->get_length())){
HXLINE( 472)				 ::Dynamic _g1_value = _g_array->__get(_g_current);
HXDLIN( 472)				_g_current = (_g_current + 1);
HXDLIN( 472)				int _g1_key = (_g_current - 1);
HXDLIN( 472)				int i = _g1_key;
HXDLIN( 472)				 ::Dynamic basic = _g1_value;
HXLINE( 474)				bool _hx_tmp;
HXDLIN( 474)				if (::hx::IsNotNull( basic )) {
HXLINE( 474)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 474)					_hx_tmp = false;
            				}
HXDLIN( 474)				if (_hx_tmp) {
HXLINE( 476)					result = i;
HXLINE( 477)					goto _hx_goto_20;
            				}
            			}
            			_hx_goto_20:;
            		}
HXLINE( 480)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirstIndex,return )

int FlxTypedGroup_obj::getLastIndex( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_489_getLastIndex)
HXLINE( 490)		int result = -1;
HXLINE( 491)		int i = this->members->get_length();
HXLINE( 492)		while(true){
HXLINE( 492)			i = (i - 1);
HXDLIN( 492)			if (!(((i + 1) > 0))) {
HXLINE( 492)				goto _hx_goto_22;
            			}
HXLINE( 494)			 ::Dynamic basic = this->members->__get(i);
HXLINE( 495)			bool _hx_tmp;
HXDLIN( 495)			if (::hx::IsNotNull( basic )) {
HXLINE( 495)				_hx_tmp = ( (bool)(func(basic)) );
            			}
            			else {
HXLINE( 495)				_hx_tmp = false;
            			}
HXDLIN( 495)			if (_hx_tmp) {
HXLINE( 497)				result = i;
HXLINE( 498)				goto _hx_goto_22;
            			}
            		}
            		_hx_goto_22:;
HXLINE( 501)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getLastIndex,return )

bool FlxTypedGroup_obj::any( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_510_any)
HXLINE( 511)		{
HXLINE( 511)			int _g = 0;
HXDLIN( 511)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 511)			while((_g < _g1->get_length())){
HXLINE( 511)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 511)				_g = (_g + 1);
HXLINE( 513)				bool _hx_tmp;
HXDLIN( 513)				if (::hx::IsNotNull( basic )) {
HXLINE( 513)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 513)					_hx_tmp = false;
            				}
HXDLIN( 513)				if (_hx_tmp) {
HXLINE( 514)					return true;
            				}
            			}
            		}
HXLINE( 516)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,any,return )

bool FlxTypedGroup_obj::every( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_525_every)
HXLINE( 526)		{
HXLINE( 526)			int _g = 0;
HXDLIN( 526)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 526)			while((_g < _g1->get_length())){
HXLINE( 526)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 526)				_g = (_g + 1);
HXLINE( 528)				bool _hx_tmp;
HXDLIN( 528)				if (::hx::IsNotNull( basic )) {
HXLINE( 528)					_hx_tmp = !(( (bool)(func(basic)) ));
            				}
            				else {
HXLINE( 528)					_hx_tmp = false;
            				}
HXDLIN( 528)				if (_hx_tmp) {
HXLINE( 529)					return false;
            				}
            			}
            		}
HXLINE( 531)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,every,return )

 ::Dynamic FlxTypedGroup_obj::getFirstAvailable(::hx::Class objectClass,::hx::Null< bool >  __o_force){
            		bool force = __o_force.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_544_getFirstAvailable)
HXLINE( 545)		{
HXLINE( 545)			int _g = 0;
HXDLIN( 545)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 545)			while((_g < _g1->get_length())){
HXLINE( 545)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 545)				_g = (_g + 1);
HXLINE( 547)				bool _hx_tmp;
HXDLIN( 547)				bool _hx_tmp1;
HXDLIN( 547)				if (::hx::IsNotNull( basic )) {
HXLINE( 547)					_hx_tmp1 = !(( ( ::flixel::FlxBasic)(basic) )->exists);
            				}
            				else {
HXLINE( 547)					_hx_tmp1 = false;
            				}
HXDLIN( 547)				if (_hx_tmp1) {
HXLINE( 547)					if (::hx::IsNotNull( objectClass )) {
HXLINE( 547)						_hx_tmp = ::Std_obj::isOfType(basic,objectClass);
            					}
            					else {
HXLINE( 547)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 547)					_hx_tmp = false;
            				}
HXDLIN( 547)				if (_hx_tmp) {
HXLINE( 549)					bool _hx_tmp;
HXDLIN( 549)					if (force) {
HXLINE( 549)						::String _hx_tmp1 = ::Type_obj::getClassName(::Type_obj::getClass(basic));
HXDLIN( 549)						_hx_tmp = (_hx_tmp1 != ::Type_obj::getClassName(objectClass));
            					}
            					else {
HXLINE( 549)						_hx_tmp = false;
            					}
HXDLIN( 549)					if (_hx_tmp) {
HXLINE( 551)						continue;
            					}
HXLINE( 553)					return basic;
            				}
            			}
            		}
HXLINE( 557)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_568_getFirstNull)
HXDLIN( 568)		return this->members->indexOf(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

 ::Dynamic FlxTypedGroup_obj::getFirstExisting(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_579_getFirstExisting)
HXDLIN( 579)		 ::Dynamic result = null();
HXDLIN( 579)		{
HXDLIN( 579)			int _g = 0;
HXDLIN( 579)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 579)			while((_g < _g1->get_length())){
HXDLIN( 579)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 579)				_g = (_g + 1);
HXDLIN( 579)				bool _hx_tmp;
HXDLIN( 579)				if (::hx::IsNotNull( basic )) {
HXDLIN( 579)					_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            				}
            				else {
HXDLIN( 579)					_hx_tmp = false;
            				}
HXDLIN( 579)				if (_hx_tmp) {
HXDLIN( 579)					result = basic;
HXDLIN( 579)					goto _hx_goto_31;
            				}
            			}
            			_hx_goto_31:;
            		}
HXDLIN( 579)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

 ::Dynamic FlxTypedGroup_obj::getFirstAlive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_590_getFirstAlive)
HXDLIN( 590)		 ::Dynamic result = null();
HXDLIN( 590)		{
HXDLIN( 590)			int _g = 0;
HXDLIN( 590)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 590)			while((_g < _g1->get_length())){
HXDLIN( 590)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 590)				_g = (_g + 1);
HXDLIN( 590)				bool _hx_tmp;
HXDLIN( 590)				if (::hx::IsNotNull( basic )) {
HXDLIN( 590)					if (( ( ::flixel::FlxBasic)(basic) )->exists) {
HXDLIN( 590)						_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            					}
            					else {
HXDLIN( 590)						_hx_tmp = false;
            					}
            				}
            				else {
HXDLIN( 590)					_hx_tmp = false;
            				}
HXDLIN( 590)				if (_hx_tmp) {
HXDLIN( 590)					result = basic;
HXDLIN( 590)					goto _hx_goto_33;
            				}
            			}
            			_hx_goto_33:;
            		}
HXDLIN( 590)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

 ::Dynamic FlxTypedGroup_obj::getFirstDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_601_getFirstDead)
HXDLIN( 601)		 ::Dynamic result = null();
HXDLIN( 601)		{
HXDLIN( 601)			int _g = 0;
HXDLIN( 601)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 601)			while((_g < _g1->get_length())){
HXDLIN( 601)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 601)				_g = (_g + 1);
HXDLIN( 601)				bool _hx_tmp;
HXDLIN( 601)				if (::hx::IsNotNull( basic )) {
HXDLIN( 601)					_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->alive);
            				}
            				else {
HXDLIN( 601)					_hx_tmp = false;
            				}
HXDLIN( 601)				if (_hx_tmp) {
HXDLIN( 601)					result = basic;
HXDLIN( 601)					goto _hx_goto_35;
            				}
            			}
            			_hx_goto_35:;
            		}
HXDLIN( 601)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_610_countLiving)
HXLINE( 611)		int count = -1;
HXLINE( 613)		{
HXLINE( 613)			int _g = 0;
HXDLIN( 613)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 613)			while((_g < _g1->get_length())){
HXLINE( 613)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 613)				_g = (_g + 1);
HXLINE( 615)				if (::hx::IsNotNull( basic )) {
HXLINE( 617)					if ((count < 0)) {
HXLINE( 618)						count = 0;
            					}
HXLINE( 619)					bool _hx_tmp;
HXDLIN( 619)					if (( ( ::flixel::FlxBasic)(basic) )->exists) {
HXLINE( 619)						_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            					}
            					else {
HXLINE( 619)						_hx_tmp = false;
            					}
HXDLIN( 619)					if (_hx_tmp) {
HXLINE( 620)						count = (count + 1);
            					}
            				}
            			}
            		}
HXLINE( 624)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_633_countDead)
HXLINE( 634)		int count = -1;
HXLINE( 636)		{
HXLINE( 636)			int _g = 0;
HXDLIN( 636)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 636)			while((_g < _g1->get_length())){
HXLINE( 636)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 636)				_g = (_g + 1);
HXLINE( 638)				if (::hx::IsNotNull( basic )) {
HXLINE( 640)					if ((count < 0)) {
HXLINE( 641)						count = 0;
            					}
HXLINE( 642)					if (!(( ( ::flixel::FlxBasic)(basic) )->alive)) {
HXLINE( 643)						count = (count + 1);
            					}
            				}
            			}
            		}
HXLINE( 647)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

 ::Dynamic FlxTypedGroup_obj::getRandom(::hx::Null< int >  __o_startIndex,::hx::Null< int >  __o_length){
            		int startIndex = __o_startIndex.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_659_getRandom)
HXLINE( 660)		if ((startIndex < 0)) {
HXLINE( 661)			startIndex = 0;
            		}
HXLINE( 662)		if ((length <= 0)) {
HXLINE( 663)			length = this->length;
            		}
HXLINE( 665)		return ::flixel::FlxG_obj::random->getObject_flixel_group_FlxTypedGroup_T(this->members,null(),startIndex,length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

void FlxTypedGroup_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_673_clear)
HXLINE( 674)		this->length = 0;
HXLINE( 676)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 678)			int _g = 0;
HXDLIN( 678)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 678)			while((_g < _g1->get_length())){
HXLINE( 678)				 ::Dynamic member = _g1->__get(_g);
HXDLIN( 678)				_g = (_g + 1);
HXLINE( 679)				this->onMemberRemove(member);
            			}
            		}
HXLINE( 682)		::flixel::util::FlxArrayUtil_obj::clearArray(this->members,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

void FlxTypedGroup_obj::killMembers(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_691_killMembers)
HXDLIN( 691)		int _g = 0;
HXDLIN( 691)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 691)		while((_g < _g1->get_length())){
HXDLIN( 691)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 691)			_g = (_g + 1);
HXLINE( 693)			bool _hx_tmp;
HXDLIN( 693)			if (::hx::IsNotNull( basic )) {
HXLINE( 693)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 693)				_hx_tmp = false;
            			}
HXDLIN( 693)			if (_hx_tmp) {
HXLINE( 694)				( ( ::flixel::FlxBasic)(basic) )->kill();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,killMembers,(void))

void FlxTypedGroup_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_703_kill)
HXLINE( 704)		this->killMembers();
HXLINE( 706)		this->super::kill();
            	}


void FlxTypedGroup_obj::reviveMembers(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_715_reviveMembers)
HXDLIN( 715)		int _g = 0;
HXDLIN( 715)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 715)		while((_g < _g1->get_length())){
HXDLIN( 715)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 715)			_g = (_g + 1);
HXLINE( 717)			bool _hx_tmp;
HXDLIN( 717)			if (::hx::IsNotNull( basic )) {
HXLINE( 717)				_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->exists);
            			}
            			else {
HXLINE( 717)				_hx_tmp = false;
            			}
HXDLIN( 717)			if (_hx_tmp) {
HXLINE( 718)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,reviveMembers,(void))

void FlxTypedGroup_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_726_revive)
HXLINE( 727)		this->reviveMembers();
HXLINE( 729)		this->super::revive();
            	}


 ::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( ::Dynamic filter){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_737_iterator)
HXDLIN( 737)		return  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->members,filter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

 ::haxe::iterators::ArrayKeyValueIterator FlxTypedGroup_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_745_keyValueIterator)
HXDLIN( 745)		return  ::haxe::iterators::ArrayKeyValueIterator_obj::__alloc( HX_CTX ,this->members);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,keyValueIterator,return )

void FlxTypedGroup_obj::forEach( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_756_forEach)
HXDLIN( 756)		int _g = 0;
HXDLIN( 756)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 756)		while((_g < _g1->get_length())){
HXDLIN( 756)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 756)			_g = (_g + 1);
HXLINE( 758)			if (::hx::IsNotNull( basic )) {
HXLINE( 760)				if (recurse) {
HXLINE( 762)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 763)					if (::hx::IsNotNull( group )) {
HXLINE( 764)						group->forEach(func,recurse);
            					}
            				}
HXLINE( 767)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEach,(void))

void FlxTypedGroup_obj::forEachAlive( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_780_forEachAlive)
HXDLIN( 780)		int _g = 0;
HXDLIN( 780)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 780)		while((_g < _g1->get_length())){
HXDLIN( 780)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 780)			_g = (_g + 1);
HXLINE( 782)			bool _hx_tmp;
HXDLIN( 782)			bool _hx_tmp1;
HXDLIN( 782)			if (::hx::IsNotNull( basic )) {
HXLINE( 782)				_hx_tmp1 = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 782)				_hx_tmp1 = false;
            			}
HXDLIN( 782)			if (_hx_tmp1) {
HXLINE( 782)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            			}
            			else {
HXLINE( 782)				_hx_tmp = false;
            			}
HXDLIN( 782)			if (_hx_tmp) {
HXLINE( 784)				if (recurse) {
HXLINE( 786)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 787)					if (::hx::IsNotNull( group )) {
HXLINE( 788)						group->forEachAlive(func,recurse);
            					}
            				}
HXLINE( 791)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachAlive,(void))

void FlxTypedGroup_obj::forEachDead( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_804_forEachDead)
HXDLIN( 804)		int _g = 0;
HXDLIN( 804)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 804)		while((_g < _g1->get_length())){
HXDLIN( 804)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 804)			_g = (_g + 1);
HXLINE( 806)			bool _hx_tmp;
HXDLIN( 806)			if (::hx::IsNotNull( basic )) {
HXLINE( 806)				_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->alive);
            			}
            			else {
HXLINE( 806)				_hx_tmp = false;
            			}
HXDLIN( 806)			if (_hx_tmp) {
HXLINE( 808)				if (recurse) {
HXLINE( 810)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 811)					if (::hx::IsNotNull( group )) {
HXLINE( 812)						group->forEachDead(func,recurse);
            					}
            				}
HXLINE( 815)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachDead,(void))

void FlxTypedGroup_obj::forEachExists( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_828_forEachExists)
HXDLIN( 828)		int _g = 0;
HXDLIN( 828)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 828)		while((_g < _g1->get_length())){
HXDLIN( 828)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 828)			_g = (_g + 1);
HXLINE( 830)			bool _hx_tmp;
HXDLIN( 830)			if (::hx::IsNotNull( basic )) {
HXLINE( 830)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 830)				_hx_tmp = false;
            			}
HXDLIN( 830)			if (_hx_tmp) {
HXLINE( 832)				if (recurse) {
HXLINE( 834)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 835)					if (::hx::IsNotNull( group )) {
HXLINE( 836)						group->forEachExists(func,recurse);
            					}
            				}
HXLINE( 839)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachExists,(void))

void FlxTypedGroup_obj::forEachOfType(::hx::Class objectClass, ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_853_forEachOfType)
HXDLIN( 853)		int _g = 0;
HXDLIN( 853)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 853)		while((_g < _g1->get_length())){
HXDLIN( 853)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 853)			_g = (_g + 1);
HXLINE( 855)			if (::hx::IsNotNull( basic )) {
HXLINE( 857)				if (recurse) {
HXLINE( 859)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 860)					if (::hx::IsNotNull( group )) {
HXLINE( 861)						group->forEachOfType(objectClass,func,recurse);
            					}
            				}
HXLINE( 864)				if (::Std_obj::isOfType(basic,objectClass)) {
HXLINE( 865)					func(basic);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize(int size){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_872_set_maxSize)
HXLINE( 873)		this->maxSize = ::Std_obj::_hx_int(::Math_obj::abs(( (Float)(size) )));
HXLINE( 875)		if ((this->_marker >= this->maxSize)) {
HXLINE( 876)			this->_marker = 0;
            		}
HXLINE( 878)		bool _hx_tmp;
HXDLIN( 878)		bool _hx_tmp1;
HXDLIN( 878)		if ((this->maxSize != 0)) {
HXLINE( 878)			_hx_tmp1 = ::hx::IsNull( this->members );
            		}
            		else {
HXLINE( 878)			_hx_tmp1 = true;
            		}
HXDLIN( 878)		if (!(_hx_tmp1)) {
HXLINE( 878)			_hx_tmp = (this->maxSize >= this->length);
            		}
            		else {
HXLINE( 878)			_hx_tmp = true;
            		}
HXDLIN( 878)		if (_hx_tmp) {
HXLINE( 879)			return this->maxSize;
            		}
HXLINE( 882)		while((this->length > this->maxSize)){
HXLINE( 884)			 ::Dynamic basic = this->members->splice((this->maxSize - 1),1)->__get(0);
HXLINE( 886)			if (::hx::IsNotNull( basic )) {
HXLINE( 888)				this->onMemberRemove(basic);
HXLINE( 890)				( ( ::flixel::FlxBasic)(basic) )->destroy();
            			}
HXLINE( 892)			this->length--;
            		}
HXLINE( 895)		return this->maxSize;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

void FlxTypedGroup_obj::onMemberAdd( ::Dynamic member){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_900_onMemberAdd)
HXDLIN( 900)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 901)			this->_memberAdded->dispatch(member);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,onMemberAdd,(void))

void FlxTypedGroup_obj::onMemberRemove( ::Dynamic member){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_906_onMemberRemove)
HXDLIN( 906)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 907)			this->_memberRemoved->dispatch(member);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,onMemberRemove,(void))

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberAdded(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_912_get_memberAdded)
HXLINE( 913)		if (::hx::IsNull( this->_memberAdded )) {
HXLINE( 914)			this->_memberAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 916)		return this->_memberAdded;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberAdded,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberRemoved(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_921_get_memberRemoved)
HXLINE( 922)		if (::hx::IsNull( this->_memberRemoved )) {
HXLINE( 923)			this->_memberRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 925)		return this->_memberRemoved;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberRemoved,return )

 ::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveGroup( ::flixel::FlxBasic basic){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_41_resolveGroup)
HXLINE(  42)		if (::hx::IsNotNull( basic )) {
HXLINE(  44)			if ((basic->flixelType == 2)) {
HXLINE(  46)				return ( ( ::flixel::group::FlxTypedGroup)(basic) );
            			}
            			else {
HXLINE(  48)				if ((basic->flixelType == 4)) {
HXLINE(  50)					return ( ( ::flixel::group::FlxTypedGroup)(( ( ::flixel::group::FlxTypedSpriteGroup)(basic) )->__Field(HX_("group",3f,b3,f4,99),::hx::paccDynamic)) );
            				}
            			}
            		}
HXLINE(  53)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveGroup,return )

 ::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveSelectionGroup( ::flixel::FlxBasic basic){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_60_resolveSelectionGroup)
HXDLIN(  60)		return ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveSelectionGroup,return )


::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(::hx::Null< int >  __o_MaxSize) {
	::hx::ObjectPtr< FlxTypedGroup_obj > __this = new FlxTypedGroup_obj();
	__this->__construct(__o_MaxSize);
	return __this;
}

::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_MaxSize) {
	FlxTypedGroup_obj *__this = (FlxTypedGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedGroup_obj), true, "flixel.group.FlxTypedGroup"));
	*(void **)__this = FlxTypedGroup_obj::_hx_vtable;
	__this->__construct(__o_MaxSize);
	return __this;
}

FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_MARK_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_VISIT_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"any") ) { return ::hx::Val( any_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"every") ) { return ::hx::Val( every_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return ::hx::Val( members ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return ::hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return ::hx::Val( _marker ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLast") ) { return ::hx::Val( getLast_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return ::hx::Val( getFirst_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return ::hx::Val( countDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return ::hx::Val( getRandom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memberAdded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberAdded() ); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return ::hx::Val( countLiving_dyn() ); }
		if (HX_FIELD_EQ(inName,"killMembers") ) { return ::hx::Val( killMembers_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return ::hx::Val( forEachDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return ::hx::Val( set_maxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMemberAdd") ) { return ::hx::Val( onMemberAdd_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { return ::hx::Val( _memberAdded ); }
		if (HX_FIELD_EQ(inName,"getLastIndex") ) { return ::hx::Val( getLastIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return ::hx::Val( getFirstNull_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return ::hx::Val( getFirstDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return ::hx::Val( forEachAlive_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"memberRemoved") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberRemoved() ); }
		if (HX_FIELD_EQ(inName,"getFirstIndex") ) { return ::hx::Val( getFirstIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return ::hx::Val( getFirstAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"reviveMembers") ) { return ::hx::Val( reviveMembers_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return ::hx::Val( forEachExists_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return ::hx::Val( forEachOfType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { return ::hx::Val( _memberRemoved ); }
		if (HX_FIELD_EQ(inName,"getFirstHelper") ) { return ::hx::Val( getFirstHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMemberRemove") ) { return ::hx::Val( onMemberRemove_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_memberAdded") ) { return ::hx::Val( get_memberAdded_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return ::hx::Val( getFirstExisting_dyn() ); }
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return ::hx::Val( getFirstAvailable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_memberRemoved") ) { return ::hx::Val( get_memberRemoved_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTypedGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { outValue = resolveGroup_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resolveSelectionGroup") ) { outValue = resolveSelectionGroup_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxTypedGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxSize(inValue.Cast< int >()) );maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { _memberAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { _memberRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("members",d9,2c,70,1a));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("memberAdded",06,9c,46,1e));
	outFields->push(HX_("memberRemoved",66,c4,b7,90));
	outFields->push(HX_("_memberAdded",07,4a,50,84));
	outFields->push(HX_("_memberRemoved",a7,b4,09,cf));
	outFields->push(HX_("_marker",59,87,e7,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxTypedGroup_obj,members),HX_("members",d9,2c,70,1a)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_("maxSize",85,f9,83,cc)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberAdded),HX_("_memberAdded",07,4a,50,84)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberRemoved),HX_("_memberRemoved",a7,b4,09,cf)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_("_marker",59,87,e7,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedGroup_obj_sMemberFields[] = {
	HX_("members",d9,2c,70,1a),
	HX_("maxSize",85,f9,83,cc),
	HX_("length",e6,94,07,9f),
	HX_("_memberAdded",07,4a,50,84),
	HX_("_memberRemoved",a7,b4,09,cf),
	HX_("_marker",59,87,e7,28),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("recycle",13,10,8c,37),
	HX_("remove",44,9c,88,04),
	HX_("replace",34,48,28,ab),
	HX_("sort",5e,27,58,4c),
	HX_("getFirst",ba,87,74,60),
	HX_("getFirstHelper",c8,00,8f,70),
	HX_("getLast",0c,ba,2f,1a),
	HX_("getFirstIndex",f8,40,65,58),
	HX_("getLastIndex",66,65,18,1a),
	HX_("any",ec,fa,49,00),
	HX_("every",9b,cb,c4,75),
	HX_("getFirstAvailable",af,ea,b3,05),
	HX_("getFirstNull",61,b7,33,0f),
	HX_("getFirstExisting",65,a4,6c,ee),
	HX_("getFirstAlive",b3,09,e2,bb),
	HX_("getFirstDead",7e,67,8b,08),
	HX_("countLiving",58,d9,8a,30),
	HX_("countDead",13,d3,86,54),
	HX_("getRandom",39,ab,e5,33),
	HX_("clear",8d,71,5b,48),
	HX_("killMembers",db,c4,63,c2),
	HX_("kill",9e,df,09,47),
	HX_("reviveMembers",04,7f,3d,f9),
	HX_("revive",55,fa,76,0a),
	HX_("iterator",ee,49,9a,93),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("forEach",aa,29,be,c4),
	HX_("forEachAlive",c3,61,b7,99),
	HX_("forEachDead",6e,c1,e4,78),
	HX_("forEachExists",26,57,f8,68),
	HX_("forEachOfType",bb,90,76,fd),
	HX_("set_maxSize",a8,60,eb,5c),
	HX_("onMemberAdd",c8,1e,95,da),
	HX_("onMemberRemove",fd,91,e3,ee),
	HX_("get_memberAdded",9d,53,28,df),
	HX_("get_memberRemoved",bd,cf,27,97),
	::String(null()) };

::hx::Class FlxTypedGroup_obj::__mClass;

static ::String FlxTypedGroup_obj_sStaticFields[] = {
	HX_("resolveGroup",b3,f8,79,d2),
	HX_("resolveSelectionGroup",5f,03,4c,68),
	::String(null())
};

void FlxTypedGroup_obj::__register()
{
	FlxTypedGroup_obj _hx_dummy;
	FlxTypedGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedGroup",e6,b8,51,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypedGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group
