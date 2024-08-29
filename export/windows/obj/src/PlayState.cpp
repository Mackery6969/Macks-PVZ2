#include <hxcpp.h>

#ifndef INCLUDED_Peashooter
#include <Peashooter.h>
#endif
#ifndef INCLUDED_Plant
#include <Plant.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_10_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",10,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_24_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",24,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_62_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",62,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_118_placePlant,"PlayState","placePlant",0x25363d95,"PlayState.placePlant","PlayState.hx",118,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_130_createPacketSprite,"PlayState","createPacketSprite",0x5048093a,"PlayState.createPacketSprite","PlayState.hx",130,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_17_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",17,0xb30d7781)

void PlayState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_10_new)
HXLINE(  21)		this->selectedPacket = null();
HXLINE(  15)		this->cellSize = 80;
HXLINE(  14)		this->gridHeight = 3;
HXLINE(  13)		this->gridWidth = 5;
HXLINE(  10)		super::__construct();
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x0a05f89d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
			} else {
				return inClassId==(int)0x563293a6;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_24_create)
HXLINE(  25)		this->super::create();
HXLINE(  28)		this->seedPackets = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("sprite",05,dc,95,c3),this->createPacketSprite((::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + HX_("images",b8,50,92,fe)) + HX_("/",2f,00,00,00)) + HX_("packets/Peashooter",c4,e3,69,05)) + HX_(".png",3b,2d,bd,1e)))))
            			->setFixed(1,HX_("plantClass",cd,c5,ae,e5),::hx::ClassOf< ::Peashooter >())
            			->setFixed(2,HX_("cooldown",ab,4b,a2,f9),( (Float)(5) ))));
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			int _g1 = this->seedPackets->length;
HXDLIN(  32)			while((_g < _g1)){
HXLINE(  32)				_g = (_g + 1);
HXDLIN(  32)				int i = (_g - 1);
HXLINE(  34)				 ::Dynamic packet = this->seedPackets->__get(i);
HXLINE(  35)				 ::flixel::FlxSprite packet1 = ( ( ::flixel::FlxSprite)(packet->__Field(HX_("sprite",05,dc,95,c3),::hx::paccDynamic)) );
HXDLIN(  35)				packet1->setPosition(10,((( (Float)(i) ) * (( ( ::flixel::FlxObject)(packet->__Field(HX_("sprite",05,dc,95,c3),::hx::paccDynamic)) )->get_height() + 10)) + 10));
HXLINE(  36)				this->add( ::Dynamic(packet->__Field(HX_("sprite",05,dc,95,c3),::hx::paccDynamic)));
            			}
            		}
HXLINE(  40)		this->grid = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  42)		{
HXLINE(  42)			int _g2 = 0;
HXDLIN(  42)			int _g3 = this->gridHeight;
HXDLIN(  42)			while((_g2 < _g3)){
HXLINE(  42)				_g2 = (_g2 + 1);
HXDLIN(  42)				int i = (_g2 - 1);
HXLINE(  44)				this->grid[i] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  45)				{
HXLINE(  45)					int _g = 0;
HXDLIN(  45)					int _g1 = this->gridWidth;
HXDLIN(  45)					while((_g < _g1)){
HXLINE(  45)						_g = (_g + 1);
HXDLIN(  45)						int j = (_g - 1);
HXLINE(  48)						int color;
HXDLIN(  48)						if ((::hx::Mod((i + j),2) == 0)) {
HXLINE(  48)							color = -16744448;
            						}
            						else {
HXLINE(  48)							color = -8355712;
            						}
HXLINE(  49)						 ::flixel::FlxSprite cell =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(j * this->cellSize),(i * this->cellSize),null());
HXLINE(  50)						cell->makeGraphic(this->cellSize,this->cellSize,color,null(),null());
HXLINE(  51)						this->grid->__get(i).StaticCast< ::Array< ::Dynamic> >()[j] = cell;
HXLINE(  52)						this->add(cell);
            					}
            				}
            			}
            		}
HXLINE(  57)		this->sunText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,(::flixel::FlxG_obj::height - 30),100,(HX_("Sun: ",12,c7,eb,17) + ::PlayState_obj::sun),null(),null());
HXLINE(  58)		this->add(this->sunText);
            	}


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_62_update)
HXLINE(  63)		this->super::update(elapsed);
HXLINE(  66)		this->sunText->set_text((HX_("Sun: ",12,c7,eb,17) + ::PlayState_obj::sun));
HXLINE(  69)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			::Array< ::Dynamic> _g1 = this->seedPackets;
HXDLIN(  71)			while((_g < _g1->length)){
HXLINE(  71)				 ::Dynamic packet = _g1->__get(_g);
HXDLIN(  71)				_g = (_g + 1);
HXLINE(  73)				bool _hx_tmp;
HXDLIN(  73)				if (::hx::IsLessEq( packet->__Field(HX_("cooldown",ab,4b,a2,f9),::hx::paccDynamic),0 )) {
HXLINE(  73)					 ::flixel::FlxSprite packet1 = ( ( ::flixel::FlxSprite)(packet->__Field(HX_("sprite",05,dc,95,c3),::hx::paccDynamic)) );
HXDLIN(  73)					_hx_tmp = packet1->overlapsPoint(::flixel::FlxG_obj::mouse->getScreenPosition(null(),null()),null(),null());
            				}
            				else {
HXLINE(  73)					_hx_tmp = false;
            				}
HXDLIN(  73)				if (_hx_tmp) {
HXLINE(  75)					int _hx_tmp = ::PlayState_obj::sun;
HXDLIN(  75)					if ((_hx_tmp >= ( ( ::Plant)(::Type_obj::createInstance(packet->__Field(HX_("plantClass",cd,c5,ae,e5),::hx::paccDynamic),::cpp::VirtualArray_obj::__new(2)->init(0,0)->init(1,0))) )->cost)) {
HXLINE(  77)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  77)						::String _hx_tmp1 = (HX_("Selected plant: ",2c,7f,9b,c0) + ::Std_obj::string( ::Dynamic(packet->__Field(HX_("plantClass",cd,c5,ae,e5),::hx::paccDynamic))));
HXDLIN(  77)						_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),77,HX_("PlayState",5d,83,c2,46),HX_("update",09,86,05,87)));
HXLINE(  78)						this->selectedPacket = packet;
HXLINE(  79)						goto _hx_goto_5;
            					}
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE(  86)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  86)		if (_this->keyManager->checkStatusUnsafe(187,_this->status)) {
HXLINE(  87)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN(  87)			::PlayState_obj::sun = (::PlayState_obj::sun + 50);
            		}
HXLINE(  91)		if (::hx::IsNotNull( this->selectedPacket )) {
HXLINE(  93)			 ::flixel::FlxSprite _hx_tmp = ( ( ::flixel::FlxSprite)(this->selectedPacket->__Field(HX_("sprite",05,dc,95,c3),::hx::paccDynamic)) );
HXDLIN(  93)			int _hx_tmp1 = ::flixel::FlxG_obj::mouse->x;
HXDLIN(  93)			Float _hx_tmp2 = (( (Float)(_hx_tmp1) ) - (( ( ::flixel::FlxObject)(this->selectedPacket->__Field(HX_("sprite",05,dc,95,c3),::hx::paccDynamic)) )->get_width() / ( (Float)(2) )));
HXDLIN(  93)			int _hx_tmp3 = ::flixel::FlxG_obj::mouse->y;
HXDLIN(  93)			_hx_tmp->setPosition(_hx_tmp2,(( (Float)(_hx_tmp3) ) - (( ( ::flixel::FlxObject)(this->selectedPacket->__Field(HX_("sprite",05,dc,95,c3),::hx::paccDynamic)) )->get_height() / ( (Float)(2) ))));
HXLINE(  96)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == -1)) {
HXLINE(  98)				int mouseX = ::flixel::FlxG_obj::mouse->x;
HXLINE(  99)				int mouseY = ::flixel::FlxG_obj::mouse->y;
HXLINE( 101)				int col = ::Std_obj::_hx_int((( (Float)(mouseX) ) / ( (Float)(this->cellSize) )));
HXLINE( 102)				int row = ::Std_obj::_hx_int((( (Float)(mouseY) ) / ( (Float)(this->cellSize) )));
HXLINE( 104)				bool _hx_tmp;
HXDLIN( 104)				bool _hx_tmp1;
HXDLIN( 104)				bool _hx_tmp2;
HXDLIN( 104)				bool _hx_tmp3;
HXDLIN( 104)				if ((row >= 0)) {
HXLINE( 104)					_hx_tmp3 = (row < this->gridHeight);
            				}
            				else {
HXLINE( 104)					_hx_tmp3 = false;
            				}
HXDLIN( 104)				if (_hx_tmp3) {
HXLINE( 104)					_hx_tmp2 = (col >= 0);
            				}
            				else {
HXLINE( 104)					_hx_tmp2 = false;
            				}
HXDLIN( 104)				if (_hx_tmp2) {
HXLINE( 104)					_hx_tmp1 = (col < this->gridWidth);
            				}
            				else {
HXLINE( 104)					_hx_tmp1 = false;
            				}
HXDLIN( 104)				if (_hx_tmp1) {
HXLINE( 104)					_hx_tmp = ::hx::IsNull( this->grid->__get(row).StaticCast< ::Array< ::Dynamic> >()->__get(col).StaticCast<  ::flixel::FlxSprite >() );
            				}
            				else {
HXLINE( 104)					_hx_tmp = false;
            				}
HXDLIN( 104)				if (_hx_tmp) {
HXLINE( 107)					this->placePlant(row,col,this->selectedPacket->__Field(HX_("plantClass",cd,c5,ae,e5),::hx::paccDynamic));
HXLINE( 108)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN( 108)					int _hx_tmp1 = ::PlayState_obj::sun;
HXDLIN( 108)					::PlayState_obj::sun = (_hx_tmp1 - ( ( ::Plant)(::Type_obj::createInstance(this->selectedPacket->__Field(HX_("plantClass",cd,c5,ae,e5),::hx::paccDynamic),::cpp::VirtualArray_obj::__new(2)->init(0,0)->init(1,0))) )->cost);
HXLINE( 110)					this->selectedPacket->__SetField(HX_("cooldown",ab,4b,a2,f9),5,::hx::paccDynamic);
HXLINE( 111)					this->selectedPacket = null();
            				}
            			}
            		}
            	}


void PlayState_obj::placePlant(int row,int col,::hx::Class plantClass){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_118_placePlant)
HXLINE( 119)		Float x = ( (Float)((col * this->cellSize)) );
HXLINE( 120)		Float y = ( (Float)((row * this->cellSize)) );
HXLINE( 122)		 ::Plant plant = ( ( ::Plant)(::Type_obj::createInstance(plantClass,::cpp::VirtualArray_obj::__new(2)->init(0,x)->init(1,y))) );
HXLINE( 123)		this->add(plant);
HXLINE( 126)		this->grid->__get(row).StaticCast< ::Array< ::Dynamic> >()[col] = plant;
            	}


HX_DEFINE_DYNAMIC_FUNC3(PlayState_obj,placePlant,(void))

 ::flixel::FlxSprite PlayState_obj::createPacketSprite(::String imagePath){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_130_createPacketSprite)
HXLINE( 131)		 ::flixel::FlxSprite sprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 132)		sprite->loadGraphic(imagePath,null(),null(),null(),null(),null());
HXLINE( 133)		return sprite;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,createPacketSprite,return )

int PlayState_obj::sun;


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new() {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(grid,"grid");
	HX_MARK_MEMBER_NAME(gridWidth,"gridWidth");
	HX_MARK_MEMBER_NAME(gridHeight,"gridHeight");
	HX_MARK_MEMBER_NAME(cellSize,"cellSize");
	HX_MARK_MEMBER_NAME(sunText,"sunText");
	HX_MARK_MEMBER_NAME(seedPackets,"seedPackets");
	HX_MARK_MEMBER_NAME(selectedPacket,"selectedPacket");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grid,"grid");
	HX_VISIT_MEMBER_NAME(gridWidth,"gridWidth");
	HX_VISIT_MEMBER_NAME(gridHeight,"gridHeight");
	HX_VISIT_MEMBER_NAME(cellSize,"cellSize");
	HX_VISIT_MEMBER_NAME(sunText,"sunText");
	HX_VISIT_MEMBER_NAME(seedPackets,"seedPackets");
	HX_VISIT_MEMBER_NAME(selectedPacket,"selectedPacket");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { return ::hx::Val( grid ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sunText") ) { return ::hx::Val( sunText ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cellSize") ) { return ::hx::Val( cellSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gridWidth") ) { return ::hx::Val( gridWidth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gridHeight") ) { return ::hx::Val( gridHeight ); }
		if (HX_FIELD_EQ(inName,"placePlant") ) { return ::hx::Val( placePlant_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"seedPackets") ) { return ::hx::Val( seedPackets ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedPacket") ) { return ::hx::Val( selectedPacket ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createPacketSprite") ) { return ::hx::Val( createPacketSprite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PlayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sun") ) { outValue = ( sun ); return true; }
	}
	return false;
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { grid=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sunText") ) { sunText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cellSize") ) { cellSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gridWidth") ) { gridWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gridHeight") ) { gridHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"seedPackets") ) { seedPackets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedPacket") ) { selectedPacket=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sun") ) { sun=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grid",c6,d6,6b,44));
	outFields->push(HX_("gridWidth",60,01,26,bf));
	outFields->push(HX_("gridHeight",4d,ab,6a,38));
	outFields->push(HX_("cellSize",83,67,78,1b));
	outFields->push(HX_("sunText",59,58,cc,03));
	outFields->push(HX_("seedPackets",7a,e2,43,61));
	outFields->push(HX_("selectedPacket",43,ac,f6,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PlayState_obj,grid),HX_("grid",c6,d6,6b,44)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,gridWidth),HX_("gridWidth",60,01,26,bf)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,gridHeight),HX_("gridHeight",4d,ab,6a,38)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,cellSize),HX_("cellSize",83,67,78,1b)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PlayState_obj,sunText),HX_("sunText",59,58,cc,03)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PlayState_obj,seedPackets),HX_("seedPackets",7a,e2,43,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PlayState_obj,selectedPacket),HX_("selectedPacket",43,ac,f6,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PlayState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PlayState_obj::sun,HX_("sun",8c,a9,57,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("grid",c6,d6,6b,44),
	HX_("gridWidth",60,01,26,bf),
	HX_("gridHeight",4d,ab,6a,38),
	HX_("cellSize",83,67,78,1b),
	HX_("sunText",59,58,cc,03),
	HX_("seedPackets",7a,e2,43,61),
	HX_("selectedPacket",43,ac,f6,66),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("placePlant",24,c8,1d,99),
	HX_("createPacketSprite",c9,3a,a3,7a),
	::String(null()) };

static void PlayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::sun,"sun");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::sun,"sun");
};

#endif

::hx::Class PlayState_obj::__mClass;

static ::String PlayState_obj_sStaticFields[] = {
	HX_("sun",8c,a9,57,00),
	::String(null())
};

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayState_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = PlayState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlayState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlayState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_17_boot)
HXDLIN(  17)		sun = 50;
            	}
}

