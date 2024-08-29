#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d161672f440721c_22_new,"flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",22,0x9ba4fb18)
static const int _hx_array_data_7ea9c627_1[] = {
	(int)48,(int)96,
};
static const int _hx_array_data_7ea9c627_2[] = {
	(int)189,(int)109,
};
static const int _hx_array_data_7ea9c627_3[] = {
	(int)187,(int)107,
};
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_75_get_soundTray,"flixel.system.frontEnds.SoundFrontEnd","get_soundTray",0xd8a7cdb5,"flixel.system.frontEnds.SoundFrontEnd.get_soundTray","flixel/system/frontEnds/SoundFrontEnd.hx",75,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_108_playMusic,"flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",108,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_145_load,"flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",145,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_169_load,"flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",169,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_185_loadHelper,"flixel.system.frontEnds.SoundFrontEnd","loadHelper",0x945a9f1b,"flixel.system.frontEnds.SoundFrontEnd.loadHelper","flixel/system/frontEnds/SoundFrontEnd.hx",185,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_206_cache,"flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",206,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_220_cacheAll,"flixel.system.frontEnds.SoundFrontEnd","cacheAll",0x49c00726,"flixel.system.frontEnds.SoundFrontEnd.cacheAll","flixel/system/frontEnds/SoundFrontEnd.hx",220,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_239_play,"flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",239,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_265_stream,"flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",265,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_272_pause,"flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",272,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_291_resume,"flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",291,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_312_destroy,"flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",312,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_332_toggleMuted,"flixel.system.frontEnds.SoundFrontEnd","toggleMuted",0xe215de70,"flixel.system.frontEnds.SoundFrontEnd.toggleMuted","flixel/system/frontEnds/SoundFrontEnd.hx",332,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_347_changeVolume,"flixel.system.frontEnds.SoundFrontEnd","changeVolume",0x51b19e11,"flixel.system.frontEnds.SoundFrontEnd.changeVolume","flixel/system/frontEnds/SoundFrontEnd.hx",347,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_360_showSoundTray,"flixel.system.frontEnds.SoundFrontEnd","showSoundTray",0x0761fd21,"flixel.system.frontEnds.SoundFrontEnd.showSoundTray","flixel/system/frontEnds/SoundFrontEnd.hx",360,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_379_update,"flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",379,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_398_onFocusLost,"flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",398,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_415_onFocus,"flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",415,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_435_loadSavedPrefs,"flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",435,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_452_set_volume,"flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",452,0x9ba4fb18)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void SoundFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2d161672f440721c_22_new)
HXLINE(  97)		this->volume = ((Float)1);
HXLINE(  92)		this->list =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  87)		this->defaultSoundGroup =  ::flixel::sound::FlxSoundGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  82)		this->defaultMusicGroup =  ::flixel::sound::FlxSoundGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  64)		this->soundTrayEnabled = true;
HXLINE(  57)		this->muteKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_1,2);
HXLINE(  51)		this->volumeDownKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_2,2);
HXLINE(  45)		this->volumeUpKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_3,2);
HXLINE(  32)		this->muted = false;
HXLINE( 370)		this->loadSavedPrefs();
            	}

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return new SoundFrontEnd_obj; }

void *SoundFrontEnd_obj::_hx_vtable = 0;

Dynamic SoundFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundFrontEnd_obj > _hx_result = new SoundFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SoundFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3aad4c0f;
}

 ::flixel::_hx_system::ui::FlxSoundTray SoundFrontEnd_obj::get_soundTray(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_75_get_soundTray)
HXDLIN(  75)		return ::flixel::FlxG_obj::game->soundTray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,get_soundTray,return )

void SoundFrontEnd_obj::playMusic( ::Dynamic embeddedMusic,::hx::Null< Float >  __o_volume,::hx::Null< bool >  __o_looped, ::flixel::sound::FlxSoundGroup group){
            		Float volume = __o_volume.Default(((Float)1.0));
            		bool looped = __o_looped.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_2d161672f440721c_108_playMusic)
HXLINE( 109)		if (::hx::IsNull( group )) {
HXLINE( 110)			group = this->defaultMusicGroup;
            		}
HXLINE( 112)		if (::hx::IsNull( this->music )) {
HXLINE( 114)			this->music =  ::flixel::sound::FlxSound_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 116)			if (this->music->active) {
HXLINE( 118)				 ::flixel::sound::FlxSound _this = this->music;
HXDLIN( 118)				_this->cleanup(_this->autoDestroy,true);
            			}
            		}
HXLINE( 121)		this->music->loadEmbedded(embeddedMusic,looped,null(),null());
HXLINE( 122)		this->music->set_volume(volume);
HXLINE( 123)		this->music->persist = true;
HXLINE( 124)		group->add(this->music);
HXLINE( 125)		this->music->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,playMusic,(void))

 ::flixel::sound::FlxSound SoundFrontEnd_obj::load( ::Dynamic embeddedSound,::hx::Null< Float >  __o_volume,::hx::Null< bool >  __o_looped, ::flixel::sound::FlxSoundGroup group,::hx::Null< bool >  __o_autoDestroy,::hx::Null< bool >  __o_autoPlay,::String url, ::Dynamic onComplete, ::Dynamic onLoad){
            		Float volume = __o_volume.Default(((Float)1.0));
            		bool looped = __o_looped.Default(false);
            		bool autoDestroy = __o_autoDestroy.Default(false);
            		bool autoPlay = __o_autoPlay.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_145_load)
HXLINE( 146)		bool _hx_tmp;
HXDLIN( 146)		if (::hx::IsNull( embeddedSound )) {
HXLINE( 146)			_hx_tmp = ::hx::IsNull( url );
            		}
            		else {
HXLINE( 146)			_hx_tmp = false;
            		}
HXDLIN( 146)		if (_hx_tmp) {
HXLINE( 148)			::flixel::FlxG_obj::log->advanced(HX_("FlxG.sound.load() requires either\nan embedded sound or a URL to work.",3d,91,d4,18),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 149)			return null();
            		}
HXLINE( 152)		 ::flixel::sound::FlxSound sound = this->list->recycle(::hx::ClassOf< ::flixel::sound::FlxSound >(),null(),null(),null()).StaticCast<  ::flixel::sound::FlxSound >();
HXLINE( 154)		if (::hx::IsNotNull( embeddedSound )) {
HXLINE( 156)			sound->loadEmbedded(embeddedSound,looped,autoDestroy,onComplete);
HXLINE( 157)			this->loadHelper(sound,volume,group,autoPlay);
HXLINE( 159)			bool _hx_tmp;
HXDLIN( 159)			if (::hx::IsNotNull( onLoad )) {
HXLINE( 159)				_hx_tmp = ::hx::IsNotNull( sound->_sound );
            			}
            			else {
HXLINE( 159)				_hx_tmp = false;
            			}
HXDLIN( 159)			if (_hx_tmp) {
HXLINE( 160)				onLoad();
            			}
            		}
            		else {
HXLINE( 164)			 ::Dynamic loadCallback = onLoad;
HXLINE( 165)			if (autoPlay) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::sound::FlxSound,sound, ::Dynamic,onLoad) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_2d161672f440721c_169_load)
HXLINE( 170)					sound->play(null(),null(),null());
HXLINE( 172)					if (::hx::IsNotNull( onLoad )) {
HXLINE( 173)						onLoad();
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 168)				loadCallback =  ::Dynamic(new _hx_Closure_0(sound,onLoad));
            			}
HXLINE( 177)			sound->loadStream(url,looped,autoDestroy,onComplete,loadCallback);
HXLINE( 178)			this->loadHelper(sound,volume,group,null());
            		}
HXLINE( 181)		return sound;
            	}


HX_DEFINE_DYNAMIC_FUNC9(SoundFrontEnd_obj,load,return )

 ::flixel::sound::FlxSound SoundFrontEnd_obj::loadHelper( ::flixel::sound::FlxSound sound,Float volume, ::flixel::sound::FlxSoundGroup group,::hx::Null< bool >  __o_autoPlay){
            		bool autoPlay = __o_autoPlay.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_185_loadHelper)
HXLINE( 186)		if (::hx::IsNull( group )) {
HXLINE( 187)			group = this->defaultSoundGroup;
            		}
HXLINE( 189)		sound->set_volume(volume);
HXLINE( 190)		group->add(sound);
HXLINE( 192)		if (autoPlay) {
HXLINE( 193)			sound->play(null(),null(),null());
            		}
HXLINE( 195)		return sound;
            	}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,loadHelper,return )

 ::openfl::media::Sound SoundFrontEnd_obj::cache(::String embeddedSound){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_206_cache)
HXLINE( 208)		bool _hx_tmp;
HXDLIN( 208)		if (!(::openfl::utils::Assets_obj::exists(embeddedSound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 208)			_hx_tmp = ::openfl::utils::Assets_obj::exists(embeddedSound,HX_("MUSIC",85,08,49,8e));
            		}
            		else {
HXLINE( 208)			_hx_tmp = true;
            		}
HXDLIN( 208)		if (_hx_tmp) {
HXLINE( 209)			return ::openfl::utils::Assets_obj::getSound(embeddedSound,true);
            		}
HXLINE( 210)		::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + embeddedSound) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 211)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

void SoundFrontEnd_obj::cacheAll(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_220_cacheAll)
HXDLIN( 220)		int _g = 0;
HXDLIN( 220)		::Array< ::String > _g1 = ::openfl::utils::Assets_obj::list(HX_("SOUND",af,c4,ba,fe));
HXDLIN( 220)		while((_g < _g1->length)){
HXDLIN( 220)			::String id = _g1->__get(_g);
HXDLIN( 220)			_g = (_g + 1);
HXLINE( 222)			bool _hx_tmp;
HXDLIN( 222)			if (!(::openfl::utils::Assets_obj::exists(id,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 222)				_hx_tmp = ::openfl::utils::Assets_obj::exists(id,HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 222)				_hx_tmp = true;
            			}
HXDLIN( 222)			if (_hx_tmp) {
HXLINE( 222)				::openfl::utils::Assets_obj::getSound(id,true);
            			}
            			else {
HXLINE( 222)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + id) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,cacheAll,(void))

 ::flixel::sound::FlxSound SoundFrontEnd_obj::play( ::Dynamic embeddedSound,::hx::Null< Float >  __o_volume,::hx::Null< bool >  __o_looped, ::flixel::sound::FlxSoundGroup group,::hx::Null< bool >  __o_autoDestroy, ::Dynamic onComplete){
            		Float volume = __o_volume.Default(((Float)1.0));
            		bool looped = __o_looped.Default(false);
            		bool autoDestroy = __o_autoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_239_play)
HXLINE( 240)		if (::Std_obj::isOfType(embeddedSound,::hx::ClassOf< ::String >())) {
HXLINE( 242)			 ::openfl::media::Sound embeddedSound1;
HXDLIN( 242)			bool embeddedSound2;
HXDLIN( 242)			if (!(::openfl::utils::Assets_obj::exists(( (::String)(embeddedSound) ),HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 242)				embeddedSound2 = ::openfl::utils::Assets_obj::exists(( (::String)(embeddedSound) ),HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 242)				embeddedSound2 = true;
            			}
HXDLIN( 242)			if (embeddedSound2) {
HXLINE( 242)				embeddedSound1 = ::openfl::utils::Assets_obj::getSound(( (::String)(embeddedSound) ),true);
            			}
            			else {
HXLINE( 242)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + embeddedSound) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN( 242)				embeddedSound1 = null();
            			}
HXDLIN( 242)			embeddedSound = embeddedSound1;
            		}
HXLINE( 244)		 ::flixel::sound::FlxSound sound = this->list->recycle(::hx::ClassOf< ::flixel::sound::FlxSound >(),null(),null(),null()).StaticCast<  ::flixel::sound::FlxSound >()->loadEmbedded(embeddedSound,looped,autoDestroy,onComplete);
HXLINE( 245)		return this->loadHelper(sound,volume,group,true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,play,return )

 ::flixel::sound::FlxSound SoundFrontEnd_obj::stream(::String url,::hx::Null< Float >  __o_volume,::hx::Null< bool >  __o_looped, ::flixel::sound::FlxSoundGroup group,::hx::Null< bool >  __o_autoDestroy, ::Dynamic onComplete, ::Dynamic onLoad){
            		Float volume = __o_volume.Default(((Float)1.0));
            		bool looped = __o_looped.Default(false);
            		bool autoDestroy = __o_autoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_265_stream)
HXDLIN( 265)		return this->load(null(),volume,looped,group,autoDestroy,true,url,onComplete,onLoad);
            	}


HX_DEFINE_DYNAMIC_FUNC7(SoundFrontEnd_obj,stream,return )

void SoundFrontEnd_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_272_pause)
HXLINE( 273)		bool _hx_tmp;
HXDLIN( 273)		bool _hx_tmp1;
HXDLIN( 273)		if (::hx::IsNotNull( this->music )) {
HXLINE( 273)			_hx_tmp1 = this->music->exists;
            		}
            		else {
HXLINE( 273)			_hx_tmp1 = false;
            		}
HXDLIN( 273)		if (_hx_tmp1) {
HXLINE( 273)			_hx_tmp = this->music->active;
            		}
            		else {
HXLINE( 273)			_hx_tmp = false;
            		}
HXDLIN( 273)		if (_hx_tmp) {
HXLINE( 275)			this->music->pause();
            		}
HXLINE( 278)		{
HXLINE( 278)			int _g = 0;
HXDLIN( 278)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 278)			while((_g < _g1->length)){
HXLINE( 278)				 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN( 278)				_g = (_g + 1);
HXLINE( 280)				bool _hx_tmp;
HXDLIN( 280)				bool _hx_tmp1;
HXDLIN( 280)				if (::hx::IsNotNull( sound )) {
HXLINE( 280)					_hx_tmp1 = sound->exists;
            				}
            				else {
HXLINE( 280)					_hx_tmp1 = false;
            				}
HXDLIN( 280)				if (_hx_tmp1) {
HXLINE( 280)					_hx_tmp = sound->active;
            				}
            				else {
HXLINE( 280)					_hx_tmp = false;
            				}
HXDLIN( 280)				if (_hx_tmp) {
HXLINE( 282)					sound->pause();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

void SoundFrontEnd_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_291_resume)
HXLINE( 292)		bool _hx_tmp;
HXDLIN( 292)		if (::hx::IsNotNull( this->music )) {
HXLINE( 292)			_hx_tmp = this->music->exists;
            		}
            		else {
HXLINE( 292)			_hx_tmp = false;
            		}
HXDLIN( 292)		if (_hx_tmp) {
HXLINE( 294)			this->music->resume();
            		}
HXLINE( 297)		{
HXLINE( 297)			int _g = 0;
HXDLIN( 297)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 297)			while((_g < _g1->length)){
HXLINE( 297)				 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN( 297)				_g = (_g + 1);
HXLINE( 299)				bool _hx_tmp;
HXDLIN( 299)				if (::hx::IsNotNull( sound )) {
HXLINE( 299)					_hx_tmp = sound->exists;
            				}
            				else {
HXLINE( 299)					_hx_tmp = false;
            				}
HXDLIN( 299)				if (_hx_tmp) {
HXLINE( 301)					sound->resume();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

void SoundFrontEnd_obj::destroy(::hx::Null< bool >  __o_forceDestroy){
            		bool forceDestroy = __o_forceDestroy.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_312_destroy)
HXLINE( 313)		bool _hx_tmp;
HXDLIN( 313)		if (::hx::IsNotNull( this->music )) {
HXLINE( 313)			if (!(forceDestroy)) {
HXLINE( 313)				_hx_tmp = !(this->music->persist);
            			}
            			else {
HXLINE( 313)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 313)			_hx_tmp = false;
            		}
HXDLIN( 313)		if (_hx_tmp) {
HXLINE( 315)			this->music->destroy();
HXLINE( 316)			this->music = null();
            		}
HXLINE( 319)		{
HXLINE( 319)			int _g = 0;
HXDLIN( 319)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 319)			while((_g < _g1->length)){
HXLINE( 319)				 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN( 319)				_g = (_g + 1);
HXLINE( 321)				bool _hx_tmp;
HXDLIN( 321)				if (::hx::IsNotNull( sound )) {
HXLINE( 321)					if (!(forceDestroy)) {
HXLINE( 321)						_hx_tmp = !(sound->persist);
            					}
            					else {
HXLINE( 321)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 321)					_hx_tmp = false;
            				}
HXDLIN( 321)				if (_hx_tmp) {
HXLINE( 323)					sound->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

void SoundFrontEnd_obj::toggleMuted(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_332_toggleMuted)
HXLINE( 333)		this->muted = !(this->muted);
HXLINE( 335)		if (::hx::IsNotNull( this->volumeHandler )) {
HXLINE( 337)			Float _hx_tmp;
HXDLIN( 337)			if (this->muted) {
HXLINE( 337)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 337)				_hx_tmp = this->volume;
            			}
HXDLIN( 337)			this->volumeHandler(_hx_tmp);
            		}
HXLINE( 340)		this->showSoundTray(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,toggleMuted,(void))

void SoundFrontEnd_obj::changeVolume(Float Amount){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_347_changeVolume)
HXLINE( 348)		this->muted = false;
HXLINE( 349)		this->set_volume((this->volume + Amount));
HXLINE( 350)		this->showSoundTray((Amount > 0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,changeVolume,(void))

void SoundFrontEnd_obj::showSoundTray(::hx::Null< bool >  __o_up){
            		bool up = __o_up.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_360_showSoundTray)
HXDLIN( 360)		bool _hx_tmp;
HXDLIN( 360)		if (::hx::IsNotNull( ::flixel::FlxG_obj::game->soundTray )) {
HXDLIN( 360)			_hx_tmp = this->soundTrayEnabled;
            		}
            		else {
HXDLIN( 360)			_hx_tmp = false;
            		}
HXDLIN( 360)		if (_hx_tmp) {
HXLINE( 362)			::flixel::FlxG_obj::game->soundTray->show(up);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,showSoundTray,(void))

void SoundFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_379_update)
HXLINE( 380)		bool _hx_tmp;
HXDLIN( 380)		if (::hx::IsNotNull( this->music )) {
HXLINE( 380)			_hx_tmp = this->music->active;
            		}
            		else {
HXLINE( 380)			_hx_tmp = false;
            		}
HXDLIN( 380)		if (_hx_tmp) {
HXLINE( 381)			this->music->update(elapsed);
            		}
HXLINE( 383)		bool _hx_tmp1;
HXDLIN( 383)		if (::hx::IsNotNull( this->list )) {
HXLINE( 383)			_hx_tmp1 = this->list->active;
            		}
            		else {
HXLINE( 383)			_hx_tmp1 = false;
            		}
HXDLIN( 383)		if (_hx_tmp1) {
HXLINE( 384)			this->list->update(elapsed);
            		}
HXLINE( 387)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->muteKeys,-1)) {
HXLINE( 388)			this->toggleMuted();
            		}
            		else {
HXLINE( 389)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeUpKeys,-1)) {
HXLINE( 390)				this->changeVolume(((Float)0.1));
            			}
            			else {
HXLINE( 391)				if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeDownKeys,-1)) {
HXLINE( 392)					this->changeVolume(((Float)-0.1));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,update,(void))

void SoundFrontEnd_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_398_onFocusLost)
HXLINE( 399)		if (::hx::IsNotNull( this->music )) {
HXLINE( 401)			this->music->onFocusLost();
            		}
HXLINE( 404)		{
HXLINE( 404)			int _g = 0;
HXDLIN( 404)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 404)			while((_g < _g1->length)){
HXLINE( 404)				 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN( 404)				_g = (_g + 1);
HXLINE( 406)				if (::hx::IsNotNull( sound )) {
HXLINE( 408)					sound->onFocusLost();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

void SoundFrontEnd_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_415_onFocus)
HXLINE( 416)		if (::hx::IsNotNull( this->music )) {
HXLINE( 418)			this->music->onFocus();
            		}
HXLINE( 421)		{
HXLINE( 421)			int _g = 0;
HXDLIN( 421)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 421)			while((_g < _g1->length)){
HXLINE( 421)				 ::flixel::sound::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::sound::FlxSound >();
HXDLIN( 421)				_g = (_g + 1);
HXLINE( 423)				if (::hx::IsNotNull( sound )) {
HXLINE( 425)					sound->onFocus();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

void SoundFrontEnd_obj::loadSavedPrefs(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_435_loadSavedPrefs)
HXLINE( 436)		 ::flixel::util::FlxSaveStatus _g = ::flixel::FlxG_obj::save->status;
HXDLIN( 436)		bool _hx_tmp;
HXDLIN( 436)		if ((_g->_hx_getIndex() == 1)) {
HXLINE( 436)			::String _g1 = _g->_hx_getString(0);
HXDLIN( 436)			::String _g2 = _g->_hx_getString(1);
HXDLIN( 436)			_hx_tmp = true;
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (!(_hx_tmp)) {
HXLINE( 437)			return;
            		}
HXLINE( 439)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic) )) {
HXLINE( 441)			this->set_volume(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic)) ));
            		}
HXLINE( 444)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic) )) {
HXLINE( 446)			this->muted = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic)) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume(Float Volume){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_452_set_volume)
HXLINE( 453)		Float lowerBound;
HXDLIN( 453)		if ((Volume < 0)) {
HXLINE( 453)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 453)			lowerBound = Volume;
            		}
HXDLIN( 453)		if ((lowerBound > 1)) {
HXLINE( 453)			Volume = ( (Float)(1) );
            		}
            		else {
HXLINE( 453)			Volume = lowerBound;
            		}
HXLINE( 455)		if (::hx::IsNotNull( this->volumeHandler )) {
HXLINE( 457)			Float param;
HXDLIN( 457)			if (this->muted) {
HXLINE( 457)				param = ( (Float)(0) );
            			}
            			else {
HXLINE( 457)				param = Volume;
            			}
HXLINE( 458)			this->volumeHandler(param);
            		}
HXLINE( 460)		return (this->volume = Volume);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


::hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new() {
	::hx::ObjectPtr< SoundFrontEnd_obj > __this = new SoundFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SoundFrontEnd_obj *__this = (SoundFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundFrontEnd_obj), true, "flixel.system.frontEnds.SoundFrontEnd"));
	*(void **)__this = SoundFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_MARK_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_VISIT_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

::hx::Val SoundFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return ::hx::Val( music ); }
		if (HX_FIELD_EQ(inName,"muted") ) { return ::hx::Val( muted ); }
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"stream") ) { return ::hx::Val( stream_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return ::hx::Val( muteKeys ); }
		if (HX_FIELD_EQ(inName,"cacheAll") ) { return ::hx::Val( cacheAll_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_soundTray() ); }
		if (HX_FIELD_EQ(inName,"playMusic") ) { return ::hx::Val( playMusic_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadHelper") ) { return ::hx::Val( loadHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toggleMuted") ) { return ::hx::Val( toggleMuted_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return ::hx::Val( volumeUpKeys ); }
		if (HX_FIELD_EQ(inName,"changeVolume") ) { return ::hx::Val( changeVolume_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return ::hx::Val( volumeHandler ); }
		if (HX_FIELD_EQ(inName,"get_soundTray") ) { return ::hx::Val( get_soundTray_dyn() ); }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return ::hx::Val( showSoundTray_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return ::hx::Val( volumeDownKeys ); }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return ::hx::Val( loadSavedPrefs_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return ::hx::Val( soundTrayEnabled ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { return ::hx::Val( defaultMusicGroup ); }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { return ::hx::Val( defaultSoundGroup ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SoundFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast<  ::flixel::sound::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) );volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { defaultMusicGroup=inValue.Cast<  ::flixel::sound::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { defaultSoundGroup=inValue.Cast<  ::flixel::sound::FlxSoundGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("music",a5,d0,5a,10));
	outFields->push(HX_("muted",6b,8f,5b,10));
	outFields->push(HX_("volumeUpKeys",69,bb,f5,23));
	outFields->push(HX_("volumeDownKeys",70,2f,58,0b));
	outFields->push(HX_("muteKeys",6d,5d,88,16));
	outFields->push(HX_("soundTrayEnabled",9c,10,68,e0));
	outFields->push(HX_("soundTray",65,62,d1,57));
	outFields->push(HX_("defaultMusicGroup",7b,94,d9,a0));
	outFields->push(HX_("defaultSoundGroup",11,80,9b,d9));
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("volume",da,29,53,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SoundFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::sound::FlxSound */ ,(int)offsetof(SoundFrontEnd_obj,music),HX_("music",a5,d0,5a,10)},
	{::hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_("muted",6b,8f,5b,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_("volumeHandler",10,fd,6f,5d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_("volumeUpKeys",69,bb,f5,23)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_("volumeDownKeys",70,2f,58,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_("muteKeys",6d,5d,88,16)},
	{::hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_("soundTrayEnabled",9c,10,68,e0)},
	{::hx::fsObject /*  ::flixel::sound::FlxSoundGroup */ ,(int)offsetof(SoundFrontEnd_obj,defaultMusicGroup),HX_("defaultMusicGroup",7b,94,d9,a0)},
	{::hx::fsObject /*  ::flixel::sound::FlxSoundGroup */ ,(int)offsetof(SoundFrontEnd_obj,defaultSoundGroup),HX_("defaultSoundGroup",11,80,9b,d9)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(SoundFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_("volume",da,29,53,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SoundFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundFrontEnd_obj_sMemberFields[] = {
	HX_("music",a5,d0,5a,10),
	HX_("muted",6b,8f,5b,10),
	HX_("volumeHandler",10,fd,6f,5d),
	HX_("volumeUpKeys",69,bb,f5,23),
	HX_("volumeDownKeys",70,2f,58,0b),
	HX_("muteKeys",6d,5d,88,16),
	HX_("soundTrayEnabled",9c,10,68,e0),
	HX_("get_soundTray",3c,36,35,19),
	HX_("defaultMusicGroup",7b,94,d9,a0),
	HX_("defaultSoundGroup",11,80,9b,d9),
	HX_("list",5e,1c,b3,47),
	HX_("volume",da,29,53,5f),
	HX_("playMusic",11,fe,3e,31),
	HX_("load",26,9a,b7,47),
	HX_("loadHelper",34,ac,79,b9),
	HX_("cache",42,9a,14,41),
	HX_("cacheAll",ff,6b,19,9a),
	HX_("play",f4,2d,5a,4a),
	HX_("stream",80,14,2d,11),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("destroy",fa,2c,86,24),
	HX_("toggleMuted",37,47,22,38),
	HX_("changeVolume",6a,e3,80,46),
	HX_("showSoundTray",a8,65,ef,47),
	HX_("update",09,86,05,87),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onFocus",39,fe,c6,9a),
	HX_("loadSavedPrefs",ef,ed,3b,02),
	HX_("set_volume",17,38,58,53),
	::String(null()) };

::hx::Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	SoundFrontEnd_obj _hx_dummy;
	SoundFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.SoundFrontEnd",27,c6,a9,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
