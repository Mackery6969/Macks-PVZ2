#ifndef INCLUDED_flixel_util_FlxTimer
#define INCLUDED_flixel_util_FlxTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,FlxTimerManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxTimer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTimer_obj OBJ_;
		FlxTimer_obj();

	public:
		enum { _hx_ClassId = 0x0ed56b31 };

		void __construct( ::flixel::util::FlxTimerManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxTimer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.FlxTimer"); }
		static ::hx::ObjectPtr< FlxTimer_obj > __new( ::flixel::util::FlxTimerManager manager);
		static ::hx::ObjectPtr< FlxTimer_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::util::FlxTimerManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTimer_obj();

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
		::String __ToString() const { return HX_("FlxTimer",13,ca,0f,cd); }

		static  ::flixel::util::FlxTimer wait(Float time, ::Dynamic onComplete);
		static ::Dynamic wait_dyn();

		static  ::flixel::util::FlxTimer loop(Float time, ::Dynamic onComplete,int loops);
		static ::Dynamic loop_dyn();

		static  ::flixel::util::FlxTimerManager globalManager;
		 ::flixel::util::FlxTimerManager manager;
		Float time;
		int loops;
		bool active;
		bool finished;
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		Float _timeCounter;
		int _loopsCounter;
		bool _inManager;
		void destroy();
		::Dynamic destroy_dyn();

		 ::flixel::util::FlxTimer start(::hx::Null< Float >  time, ::Dynamic onComplete,::hx::Null< int >  loops);
		::Dynamic start_dyn();

		 ::flixel::util::FlxTimer reset(::hx::Null< Float >  newTime);
		::Dynamic reset_dyn();

		void cancel();
		::Dynamic cancel_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void onLoopFinished();
		::Dynamic onLoopFinished_dyn();

		Float get_timeLeft();
		::Dynamic get_timeLeft_dyn();

		Float get_elapsedTime();
		::Dynamic get_elapsedTime_dyn();

		int get_loopsLeft();
		::Dynamic get_loopsLeft_dyn();

		int get_elapsedLoops();
		::Dynamic get_elapsedLoops_dyn();

		Float get_progress();
		::Dynamic get_progress_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxTimer */ 
