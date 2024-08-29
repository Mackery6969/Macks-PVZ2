#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#define INCLUDED_flixel_input_gamepad_FlxGamepadManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadModel)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,GameInputEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,ui,GameInput)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)

namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES FlxGamepadManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGamepadManager_obj OBJ_;
		FlxGamepadManager_obj();

	public:
		enum { _hx_ClassId = 0x77bb146b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.FlxGamepadManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.FlxGamepadManager"); }
		static ::hx::ObjectPtr< FlxGamepadManager_obj > __new();
		static ::hx::ObjectPtr< FlxGamepadManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGamepadManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxGamepadManager",be,db,07,36); }

		static void __boot();
		static  ::openfl::ui::GameInput _gameInput;
		 ::flixel::input::gamepad::FlxGamepad firstActive;
		 ::flixel::input::gamepad::FlxGamepad lastActive;
		 ::Dynamic globalDeadZone;
		 ::flixel::util::_FlxSignal::FlxSignal1 deviceConnected;
		 ::flixel::util::_FlxSignal::FlxSignal1 deviceDisconnected;
		::Array< ::Dynamic> _gamepads;
		::Array< ::Dynamic> _activeGamepads;
		 ::flixel::input::gamepad::FlxGamepad getByID(int GamepadID);
		::Dynamic getByID_dyn();

		void removeByID(int GamepadID);
		::Dynamic removeByID_dyn();

		 ::flixel::input::gamepad::FlxGamepad createByID(int GamepadID, ::flixel::input::gamepad::FlxGamepadModel Model);
		::Dynamic createByID_dyn();

		::Array< int > getActiveGamepadIDs(::Array< int > IDsArray);
		::Dynamic getActiveGamepadIDs_dyn();

		::Array< ::Dynamic> getActiveGamepads(::Array< ::Dynamic> GamepadArray);
		::Dynamic getActiveGamepads_dyn();

		int getFirstActiveGamepadID();
		::Dynamic getFirstActiveGamepadID_dyn();

		 ::flixel::input::gamepad::FlxGamepad getFirstActiveGamepad();
		::Dynamic getFirstActiveGamepad_dyn();

		bool anyButton(::hx::Null< int >  state);
		::Dynamic anyButton_dyn();

		bool anyInput();
		::Dynamic anyInput_dyn();

		bool anyPressed(int buttonID);
		::Dynamic anyPressed_dyn();

		bool anyJustPressed(int buttonID);
		::Dynamic anyJustPressed_dyn();

		bool anyJustReleased(int buttonID);
		::Dynamic anyJustReleased_dyn();

		bool anyHasState(int buttonID,int state);
		::Dynamic anyHasState_dyn();

		Float anyMovedXAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID);
		::Dynamic anyMovedXAxis_dyn();

		Float anyMovedYAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID);
		::Dynamic anyMovedYAxis_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void reset();
		::Dynamic reset_dyn();

		void onDeviceAdded( ::openfl::events::GameInputEvent Event);
		::Dynamic onDeviceAdded_dyn();

		void onDeviceRemoved( ::openfl::events::GameInputEvent Event);
		::Dynamic onDeviceRemoved_dyn();

		int findGamepadIndex( ::openfl::ui::GameInputDevice Device);
		::Dynamic findGamepadIndex_dyn();

		void addGamepad( ::openfl::ui::GameInputDevice Device);
		::Dynamic addGamepad_dyn();

		 ::flixel::input::gamepad::FlxGamepadModel getModelFromDeviceName(::String name);
		::Dynamic getModelFromDeviceName_dyn();

		void removeGamepad( ::openfl::ui::GameInputDevice Device);
		::Dynamic removeGamepad_dyn();

		void update();
		::Dynamic update_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		int get_numActiveGamepads();
		::Dynamic get_numActiveGamepads_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadManager */ 
