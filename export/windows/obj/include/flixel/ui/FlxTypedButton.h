#ifndef INCLUDED_flixel_ui_FlxTypedButton
#define INCLUDED_flixel_ui_FlxTypedButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxAtlas)
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS3(flixel,ui,_FlxButton,FlxButtonEvent)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxTypedButton_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxTypedButton_obj OBJ_;
		FlxTypedButton_obj();

	public:
		enum { _hx_ClassId = 0x6b3699ba };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxTypedButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.ui.FlxTypedButton"); }
		static ::hx::ObjectPtr< FlxTypedButton_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick);
		static ::hx::ObjectPtr< FlxTypedButton_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTypedButton",ca,2a,df,cd); }

		 ::Dynamic label;
		::Array< ::Dynamic> labelOffsets;
		::Array< Float > labelAlphas;
		::Array< ::String > statusAnimations;
		bool allowSwiping;
		::Array< int > mouseButtons;
		Float maxInputMovement;
		int status;
		 ::flixel::ui::_FlxButton::FlxButtonEvent onUp;
		 ::flixel::ui::_FlxButton::FlxButtonEvent onDown;
		 ::flixel::ui::_FlxButton::FlxButtonEvent onOver;
		 ::flixel::ui::_FlxButton::FlxButtonEvent onOut;
		 ::flixel::FlxSprite _spriteLabel;
		 ::flixel::input::FlxInput input;
		::Dynamic currentInput;
		int lastStatus;
		void graphicLoaded();

		void loadDefaultGraphic();
		::Dynamic loadDefaultGraphic_dyn();

		void setupAnimation(::String animationName,int frameIndex);
		::Dynamic setupAnimation_dyn();

		void destroy();

		void update(Float elapsed);

		void updateStatusAnimation();
		::Dynamic updateStatusAnimation_dyn();

		void draw();

		bool stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas);
		::Dynamic stampOnAtlas_dyn();

		void updateButton();
		::Dynamic updateButton_dyn();

		bool checkMouseOverlap();
		::Dynamic checkMouseOverlap_dyn();

		bool checkTouchOverlap();
		::Dynamic checkTouchOverlap_dyn();

		bool checkInput( ::flixel::input::FlxPointer pointer,::Dynamic input, ::flixel::math::FlxBasePoint justPressedPosition, ::flixel::FlxCamera camera);
		::Dynamic checkInput_dyn();

		void updateStatus(::Dynamic input);
		::Dynamic updateStatus_dyn();

		void updateLabelPosition();
		::Dynamic updateLabelPosition_dyn();

		void updateLabelAlpha();
		::Dynamic updateLabelAlpha_dyn();

		void onUpEventListener( ::openfl::events::MouseEvent _);
		::Dynamic onUpEventListener_dyn();

		void onUpHandler();
		::Dynamic onUpHandler_dyn();

		void onDownHandler();
		::Dynamic onDownHandler_dyn();

		void onOverHandler();
		::Dynamic onOverHandler_dyn();

		void onOutHandler();
		::Dynamic onOutHandler_dyn();

		 ::Dynamic set_label( ::Dynamic Value);
		::Dynamic set_label_dyn();

		int set_status(int value);
		::Dynamic set_status_dyn();

		Float set_alpha(Float Value);

		Float set_x(Float Value);

		Float set_y(Float Value);

		bool get_justReleased();
		::Dynamic get_justReleased_dyn();

		bool get_released();
		::Dynamic get_released_dyn();

		bool get_pressed();
		::Dynamic get_pressed_dyn();

		bool get_justPressed();
		::Dynamic get_justPressed_dyn();

};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxTypedButton */ 
