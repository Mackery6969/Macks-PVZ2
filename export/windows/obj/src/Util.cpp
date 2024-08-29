#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_27_image,"Util","image",0x90b0020f,"Util.image","Util.hx",27,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_38_jpg,"Util","jpg",0x1ef1de95,"Util.jpg","Util.hx",38,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_49_jpeg,"Util","jpeg",0xf4b0e274,"Util.jpeg","Util.hx",49,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_60_gif,"Util","gif",0x1eef91b8,"Util.gif","Util.hx",60,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_72_sound,"Util","sound",0x54136f83,"Util.sound","Util.hx",72,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_84_music,"Util","music",0xe3a1b359,"Util.music","Util.hx",84,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_95_xml,"Util","xml",0x1efc7b8b,"Util.xml","Util.hx",95,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_104_IntToString,"Util","IntToString",0xc2a41a4f,"Util.IntToString","Util.hx",104,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_116_FloatToString,"Util","FloatToString",0x2d4754fc,"Util.FloatToString","Util.hx",116,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_129_convertFloatToInt,"Util","convertFloatToInt",0xbaedc37f,"Util.convertFloatToInt","Util.hx",129,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_139_convertIntToFloat,"Util","convertIntToFloat",0x91d16979,"Util.convertIntToFloat","Util.hx",139,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_150_txt,"Util","txt",0x1ef97c24,"Util.txt","Util.hx",150,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_161_json,"Util","json",0xf4b331f4,"Util.json","Util.hx",161,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_172_font,"Util","font",0xf20b4d9b,"Util.font","Util.hx",172,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_214_capitalize,"Util","capitalize",0x105eda78,"Util.capitalize","Util.hx",214,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_223_floorDecimal,"Util","floorDecimal",0x155eb7f1,"Util.floorDecimal","Util.hx",223,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_244_openURL,"Util","openURL",0x9d01b579,"Util.openURL","Util.hx",244,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_259_getURL,"Util","getURL",0xade7c345,"Util.getURL","Util.hx",259,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_262_getURL,"Util","getURL",0xade7c345,"Util.getURL","Util.hx",262,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_254_getURL,"Util","getURL",0xade7c345,"Util.getURL","Util.hx",254,0xec9f7fdc)
static const ::String _hx_array_data_38878422_21[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_278_round,"Util","round",0xc0acdb02,"Util.round","Util.hx",278,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_297_roundDown,"Util","roundDown",0x9bcaa884,"Util.roundDown","Util.hx",297,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_316_roundUp,"Util","roundUp",0xe9db69fd,"Util.roundUp","Util.hx",316,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_336_roundToInterval,"Util","roundToInterval",0xa8738382,"Util.roundToInterval","Util.hx",336,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_347_error,"Util","error",0x4670ae7c,"Util.error","Util.hx",347,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_357_readFile,"Util","readFile",0x41606ebe,"Util.readFile","Util.hx",357,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_369_readOneLine,"Util","readOneLine",0x6bb47e78,"Util.readOneLine","Util.hx",369,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_382_video,"Util","video",0x0a42f72f,"Util.video","Util.hx",382,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_393_sparrowAtlas,"Util","sparrowAtlas",0x067ef16b,"Util.sparrowAtlas","Util.hx",393,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_402_numToString,"Util","numToString",0xe03902c6,"Util.numToString","Util.hx",402,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_432_formatTime,"Util","formatTime",0x3b24bfb0,"Util.formatTime","Util.hx",432,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_453_fileExists,"Util","fileExists",0xcf273644,"Util.fileExists","Util.hx",453,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_464_writeToFile,"Util","writeToFile",0xca226d8a,"Util.writeToFile","Util.hx",464,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_473_deleteFile,"Util","deleteFile",0xc5cb7d13,"Util.deleteFile","Util.hx",473,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_483_closeGame,"Util","closeGame",0x2fadc07e,"Util.closeGame","Util.hx",483,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_494_scaleToWidth,"Util","scaleToWidth",0xafe23ced,"Util.scaleToWidth","Util.hx",494,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_502_scaleToHeight,"Util","scaleToHeight",0xec628b20,"Util.scaleToHeight","Util.hx",502,0xec9f7fdc)
HX_LOCAL_STACK_FRAME(_hx_pos_e5af7e1b599c4aa9_507_getRandomThingFromArray,"Util","getRandomThingFromArray",0x3844f2ce,"Util.getRandomThingFromArray","Util.hx",507,0xec9f7fdc)

void Util_obj::__construct() { }

Dynamic Util_obj::__CreateEmpty() { return new Util_obj; }

void *Util_obj::_hx_vtable = 0;

Dynamic Util_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Util_obj > _hx_result = new Util_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Util_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0cda7a46;
}

::String Util_obj::file;

::String Util_obj::image(::String image,::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("images",b8,50,92,fe);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_27_image)
HXDLIN(  27)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + image) + HX_(".png",3b,2d,bd,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,image,return )

::String Util_obj::jpg(::String image,::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("images",b8,50,92,fe);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_38_jpg)
HXDLIN(  38)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + image) + HX_(".jpg",73,a1,b8,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,jpg,return )

::String Util_obj::jpeg(::String image,::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("images",b8,50,92,fe);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_49_jpeg)
HXDLIN(  49)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + image) + HX_(".jpeg",d6,a1,d4,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,jpeg,return )

::String Util_obj::gif(::String gif,::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("images",b8,50,92,fe);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_60_gif)
HXDLIN(  60)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + gif) + HX_(".gif",96,54,b6,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,gif,return )

::String Util_obj::sound(::String sound,::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("sounds",c4,a8,2e,32);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_72_sound)
HXDLIN(  72)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + sound) + HX_(".ogg",e1,64,bc,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,sound,return )

::String Util_obj::music(::String music,::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("music",a5,d0,5a,10);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_84_music)
HXDLIN(  84)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + music) + HX_(".ogg",e1,64,bc,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,music,return )

::String Util_obj::xml(::String xml,::String folder){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_95_xml)
HXDLIN(  95)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + xml) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,xml,return )

::String Util_obj::IntToString(int i){
            	HX_GC_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_104_IntToString)
HXLINE( 105)		 ::StringBuf strbuf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 106)		{
HXLINE( 106)			if (::hx::IsNotNull( strbuf->charBuf )) {
HXLINE( 106)				strbuf->flush();
            			}
HXDLIN( 106)			if (::hx::IsNull( strbuf->b )) {
HXLINE( 106)				strbuf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(i));
            			}
            			else {
HXLINE( 106)				::Array< ::String > strbuf1 = strbuf->b;
HXDLIN( 106)				strbuf1->push(::Std_obj::string(i));
            			}
            		}
HXLINE( 107)		return strbuf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,IntToString,return )

::String Util_obj::FloatToString(Float i){
            	HX_GC_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_116_FloatToString)
HXLINE( 117)		 ::StringBuf strbuf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 118)		{
HXLINE( 118)			if (::hx::IsNotNull( strbuf->charBuf )) {
HXLINE( 118)				strbuf->flush();
            			}
HXDLIN( 118)			if (::hx::IsNull( strbuf->b )) {
HXLINE( 118)				strbuf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(i));
            			}
            			else {
HXLINE( 118)				::Array< ::String > strbuf1 = strbuf->b;
HXDLIN( 118)				strbuf1->push(::Std_obj::string(i));
            			}
            		}
HXLINE( 119)		return strbuf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,FloatToString,return )

int Util_obj::convertFloatToInt(Float f){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_129_convertFloatToInt)
HXDLIN( 129)		return ::Std_obj::_hx_int(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,convertFloatToInt,return )

Float Util_obj::convertIntToFloat(int i){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_139_convertIntToFloat)
HXDLIN( 139)		return ( (Float)(i) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,convertIntToFloat,return )

::String Util_obj::txt(::String text,::String folder){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_150_txt)
HXDLIN( 150)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + text) + HX_(".txt",02,3f,c0,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,txt,return )

::String Util_obj::json(::String path,::String folder){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_161_json)
HXDLIN( 161)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + path) + HX_(".json",56,f1,d6,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,json,return )

::String Util_obj::font(::String font,::String __o_type,::String __o_extention){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("",00,00,00,00);
            		::String extention = __o_extention;
            		if (::hx::IsNull(__o_extention)) extention = HX_("ttf",e6,6a,58,00);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_172_font)
HXLINE( 173)		if ((font == HX_("",00,00,00,00))) {
HXLINE( 174)			font = ::ClientPrefs_obj::defaultFont;
            		}
HXLINE( 175)		if ((type != HX_("",00,00,00,00))) {
HXLINE( 177)			if ((type == HX_("bold italic",2b,f0,0e,44))) {
HXLINE( 179)				font = ((font + HX_("-",2d,00,00,00)) + HX_("bold-italic",f8,f7,a5,60));
            			}
            			else {
HXLINE( 181)				if ((type == HX_("italic",f0,2e,64,06))) {
HXLINE( 183)					font = (font + HX_("-italic",dd,0e,aa,55));
            				}
            				else {
HXLINE( 185)					if ((type == HX_("bold",85,81,1b,41))) {
HXLINE( 187)						font = (font + HX_("-bold",32,9c,23,2a));
            					}
            				}
            			}
            		}
HXLINE( 200)		if ((type != HX_("",00,00,00,00))) {
HXLINE( 202)			return (::Util_obj::file = (((HX_("assets/fonts/duplicates/",d0,2c,18,c8) + font) + HX_(".",2e,00,00,00)) + extention));
            		}
HXLINE( 204)		return (::Util_obj::file = (((HX_("assets/fonts/",37,ff,a5,9c) + font) + HX_(".",2e,00,00,00)) + extention));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,font,return )

::String Util_obj::capitalize(::String text){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_214_capitalize)
HXDLIN( 214)		::String _hx_tmp = text.charAt(0).toUpperCase();
HXDLIN( 214)		return (_hx_tmp + text.substr(1,null()).toLowerCase());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,capitalize,return )

Float Util_obj::floorDecimal(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_223_floorDecimal)
HXLINE( 224)		if ((decimals < 1)) {
HXLINE( 225)			return ( (Float)(::Math_obj::floor(value)) );
            		}
HXLINE( 227)		Float tempMult = ( (Float)(1) );
HXLINE( 228)		{
HXLINE( 228)			int _g = 0;
HXDLIN( 228)			int _g1 = decimals;
HXDLIN( 228)			while((_g < _g1)){
HXLINE( 228)				_g = (_g + 1);
HXDLIN( 228)				int i = (_g - 1);
HXLINE( 229)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE( 231)		Float newValue = ( (Float)(::Math_obj::floor((value * tempMult))) );
HXLINE( 232)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,floorDecimal,return )

void Util_obj::openURL(::String site){
            	HX_GC_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_244_openURL)
HXDLIN( 244)		::String url = site;
HXDLIN( 244)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^.\\w+?:/*",16,3c,ef,2d),HX_("",00,00,00,00))->match(url))) {
HXDLIN( 244)			url = (HX_("https://",cf,b4,ae,3e) + url);
            		}
HXDLIN( 244)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,url),HX_("_blank",95,26,d9,b0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,openURL,(void))

::String Util_obj::getURL(::String site){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,response) HXARGC(1)
            		void _hx_run(::String data){
            			HX_GC_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_259_getURL)
HXLINE( 259)			response[0] = data;
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::String >,response) HXARGC(1)
            		void _hx_run(::String error){
            			HX_GC_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_262_getURL)
HXLINE( 263)			::haxe::Log_obj::trace((HX_("Error: ",4e,a8,5b,b7) + error),::hx::SourceInfo(HX_("source/Util.hx",68,f7,c8,24),263,HX_("Util",22,84,87,38),HX_("getURL",79,48,28,a3)));
HXLINE( 264)			response[0] = HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_254_getURL)
HXLINE( 255)		 ::sys::Http request =  ::sys::Http_obj::__alloc( HX_CTX ,site);
HXLINE( 256)		::Array< ::String > response = ::Array_obj< ::String >::fromData( _hx_array_data_38878422_21,1);
HXLINE( 257)		request->onData =  ::Dynamic(new _hx_Closure_0(response));
HXLINE( 261)		request->onError =  ::Dynamic(new _hx_Closure_1(response));
HXLINE( 266)		request->request(false);
HXLINE( 268)		return response->__get(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,getURL,return )

Float Util_obj::round(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_278_round)
HXLINE( 279)		if ((decimals < 1)) {
HXLINE( 280)			return ( (Float)(::Math_obj::round(value)) );
            		}
HXLINE( 282)		Float tempMult = ( (Float)(1) );
HXLINE( 283)		{
HXLINE( 283)			int _g = 0;
HXDLIN( 283)			int _g1 = decimals;
HXDLIN( 283)			while((_g < _g1)){
HXLINE( 283)				_g = (_g + 1);
HXDLIN( 283)				int i = (_g - 1);
HXLINE( 284)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE( 286)		Float newValue = ( (Float)(::Math_obj::round((value * tempMult))) );
HXLINE( 287)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,round,return )

Float Util_obj::roundDown(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_297_roundDown)
HXLINE( 298)		if ((decimals < 1)) {
HXLINE( 299)			return ( (Float)(::Math_obj::floor(value)) );
            		}
HXLINE( 301)		Float tempMult = ( (Float)(1) );
HXLINE( 302)		{
HXLINE( 302)			int _g = 0;
HXDLIN( 302)			int _g1 = decimals;
HXDLIN( 302)			while((_g < _g1)){
HXLINE( 302)				_g = (_g + 1);
HXDLIN( 302)				int i = (_g - 1);
HXLINE( 303)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE( 305)		Float newValue = ( (Float)(::Math_obj::floor((value * tempMult))) );
HXLINE( 306)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,roundDown,return )

Float Util_obj::roundUp(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_316_roundUp)
HXLINE( 317)		if ((decimals < 1)) {
HXLINE( 318)			return ( (Float)(::Math_obj::ceil(value)) );
            		}
HXLINE( 320)		Float tempMult = ( (Float)(1) );
HXLINE( 321)		{
HXLINE( 321)			int _g = 0;
HXDLIN( 321)			int _g1 = decimals;
HXDLIN( 321)			while((_g < _g1)){
HXLINE( 321)				_g = (_g + 1);
HXDLIN( 321)				int i = (_g - 1);
HXLINE( 322)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE( 324)		Float newValue = ( (Float)(::Math_obj::ceil((value * tempMult))) );
HXLINE( 325)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,roundUp,return )

Float Util_obj::roundToInterval(Float value,Float interval){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_336_roundToInterval)
HXDLIN( 336)		return (( (Float)(::Math_obj::round((value / interval))) ) * interval);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,roundToInterval,return )

void Util_obj::error(::String error,::String name){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_347_error)
HXDLIN( 347)		::openfl::Lib_obj::get_current()->stage->window->alert(error,name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,error,(void))

::Array< ::String > Util_obj::readFile(::String path){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_357_readFile)
HXLINE( 358)		::String file = ::openfl::utils::Assets_obj::getText(((HX_("assets/",4c,2a,dc,36) + path) + HX_(".txt",02,3f,c0,1e)));
HXLINE( 359)		return file.split(HX_("\n",0a,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,readFile,return )

::String Util_obj::readOneLine(::String path, ::Dynamic __o_line){
            		 ::Dynamic line = __o_line;
            		if (::hx::IsNull(__o_line)) line = 0;
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_369_readOneLine)
HXLINE( 370)		::String file = ::openfl::utils::Assets_obj::getText(((HX_("assets/",4c,2a,dc,36) + path) + HX_(".txt",02,3f,c0,1e)));
HXLINE( 371)		return file.split(HX_("\n",0a,00,00,00))->__get(( (int)(line) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,readOneLine,return )

::String Util_obj::video(::String video,::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("videos",98,d7,95,e5);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_382_video)
HXDLIN( 382)		return (::Util_obj::file = ((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + video) + HX_(".mp4",03,e8,ba,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,video,return )

 ::flixel::graphics::frames::FlxAtlasFrames Util_obj::sparrowAtlas(::String path,::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("images",b8,50,92,fe);
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_393_sparrowAtlas)
HXDLIN( 393)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + path) + HX_(".png",3b,2d,bd,1e)),((((HX_("assets/",4c,2a,dc,36) + folder) + HX_("/",2f,00,00,00)) + path) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,sparrowAtlas,return )

::String Util_obj::numToString(Float num){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_402_numToString)
HXLINE( 403)		if ((num >= ((Float)1000000000000000))) {
HXLINE( 405)			Float value = (num / ((Float)1000000000000000));
HXDLIN( 405)			Float tempMult = ( (Float)(1) );
HXDLIN( 405)			{
HXLINE( 405)				int _g = 0;
HXDLIN( 405)				int _g1 = 3;
HXDLIN( 405)				while((_g < _g1)){
HXLINE( 405)					_g = (_g + 1);
HXDLIN( 405)					int i = (_g - 1);
HXDLIN( 405)					tempMult = (tempMult * ( (Float)(10) ));
            				}
            			}
HXDLIN( 405)			Float newValue = ( (Float)(::Math_obj::round((value * tempMult))) );
HXDLIN( 405)			return (::Std_obj::string((newValue / tempMult)) + HX_(" quadrillion",2a,b6,52,38));
            		}
            		else {
HXLINE( 407)			if ((num >= ((Float)1000000000000))) {
HXLINE( 409)				Float value = (num / ((Float)1000000000000));
HXDLIN( 409)				Float tempMult = ( (Float)(1) );
HXDLIN( 409)				{
HXLINE( 409)					int _g = 0;
HXDLIN( 409)					int _g1 = 3;
HXDLIN( 409)					while((_g < _g1)){
HXLINE( 409)						_g = (_g + 1);
HXDLIN( 409)						int i = (_g - 1);
HXDLIN( 409)						tempMult = (tempMult * ( (Float)(10) ));
            					}
            				}
HXDLIN( 409)				Float newValue = ( (Float)(::Math_obj::round((value * tempMult))) );
HXDLIN( 409)				return (::Std_obj::string((newValue / tempMult)) + HX_(" trillion",5d,5a,0a,40));
            			}
            			else {
HXLINE( 411)				if ((num >= (int)1000000000)) {
HXLINE( 413)					Float value = (num / ( (Float)((int)1000000000) ));
HXDLIN( 413)					Float tempMult = ( (Float)(1) );
HXDLIN( 413)					{
HXLINE( 413)						int _g = 0;
HXDLIN( 413)						int _g1 = 3;
HXDLIN( 413)						while((_g < _g1)){
HXLINE( 413)							_g = (_g + 1);
HXDLIN( 413)							int i = (_g - 1);
HXDLIN( 413)							tempMult = (tempMult * ( (Float)(10) ));
            						}
            					}
HXDLIN( 413)					Float newValue = ( (Float)(::Math_obj::round((value * tempMult))) );
HXDLIN( 413)					return (::Std_obj::string((newValue / tempMult)) + HX_(" billion",01,5c,f8,83));
            				}
            				else {
HXLINE( 415)					if ((num >= 1000000)) {
HXLINE( 417)						return (::Std_obj::string(::Std_obj::_hx_int((num / ( (Float)(1000000) )))) + HX_(" million",4c,76,64,4d));
            					}
            					else {
HXLINE( 419)						if ((num >= 1000)) {
HXLINE( 421)							Float value = (num / ( (Float)(1000) ));
HXDLIN( 421)							Float tempMult = ( (Float)(1) );
HXDLIN( 421)							{
HXLINE( 421)								int _g = 0;
HXDLIN( 421)								int _g1 = 3;
HXDLIN( 421)								while((_g < _g1)){
HXLINE( 421)									_g = (_g + 1);
HXDLIN( 421)									int i = (_g - 1);
HXDLIN( 421)									tempMult = (tempMult * ( (Float)(10) ));
            								}
            							}
HXDLIN( 421)							Float newValue = ( (Float)(::Math_obj::round((value * tempMult))) );
HXDLIN( 421)							return (::Std_obj::string((newValue / tempMult)) + HX_(" thousand",fe,84,8d,39));
            						}
            					}
            				}
            			}
            		}
HXLINE( 423)		return ::Std_obj::string(num);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,numToString,return )

::String Util_obj::formatTime(Float time){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_432_formatTime)
HXLINE( 433)		int hours = ::Std_obj::_hx_int((time / ( (Float)(3600) )));
HXLINE( 434)		int minutes = ::Std_obj::_hx_int((time / ( (Float)(60) )));
HXLINE( 435)		int seconds = ::Std_obj::_hx_int(::hx::Mod(time,60));
HXLINE( 436)		::String secondsString = HX_("",00,00,00,00);
HXLINE( 437)		if ((seconds < 10)) {
HXLINE( 438)			secondsString = HX_("0",30,00,00,00);
            		}
HXLINE( 439)		if ((hours > 0)) {
HXLINE( 440)			return ((((((HX_("",00,00,00,00) + hours) + HX_(":",3a,00,00,00)) + minutes) + HX_(":",3a,00,00,00)) + secondsString) + seconds);
            		}
            		else {
HXLINE( 441)			if ((minutes > 0)) {
HXLINE( 442)				return ((((HX_("",00,00,00,00) + minutes) + HX_(":",3a,00,00,00)) + secondsString) + seconds);
            			}
            		}
HXLINE( 443)		return ((HX_("0:",0a,2a,00,00) + secondsString) + seconds);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,formatTime,return )

bool Util_obj::fileExists(::String path){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_453_fileExists)
HXDLIN( 453)		return ::openfl::utils::Assets_obj::exists(path,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,fileExists,return )

void Util_obj::writeToFile(::String path,::String data){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_464_writeToFile)
HXDLIN( 464)		::sys::io::File_obj::saveContent(path,data);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,writeToFile,(void))

void Util_obj::deleteFile(::String path){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_473_deleteFile)
HXDLIN( 473)		::sys::FileSystem_obj::deleteFile(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,deleteFile,(void))

void Util_obj::closeGame(){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_483_closeGame)
HXDLIN( 483)		::Sys_obj::exit(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Util_obj,closeGame,(void))

Float Util_obj::scaleToWidth( ::flixel::FlxSprite sprite,Float width){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_494_scaleToWidth)
HXDLIN( 494)		return (width / sprite->get_width());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,scaleToWidth,return )

Float Util_obj::scaleToHeight( ::flixel::FlxSprite sprite,Float height){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_502_scaleToHeight)
HXDLIN( 502)		return (height / sprite->get_height());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,scaleToHeight,return )

 ::Dynamic Util_obj::getRandomThingFromArray(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_e5af7e1b599c4aa9_507_getRandomThingFromArray)
HXDLIN( 507)		return array->__get(::Std_obj::random(array->get_length()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,getRandomThingFromArray,return )


Util_obj::Util_obj()
{
}

bool Util_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"jpg") ) { outValue = jpg_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gif") ) { outValue = gif_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = ( file ); return true; }
		if (HX_FIELD_EQ(inName,"jpeg") ) { outValue = jpeg_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"round") ) { outValue = round_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"video") ) { outValue = video_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getURL") ) { outValue = getURL_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"roundUp") ) { outValue = roundUp_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { outValue = readFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"roundDown") ) { outValue = roundDown_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"closeGame") ) { outValue = closeGame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"capitalize") ) { outValue = capitalize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatTime") ) { outValue = formatTime_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fileExists") ) { outValue = fileExists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"deleteFile") ) { outValue = deleteFile_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"IntToString") ) { outValue = IntToString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readOneLine") ) { outValue = readOneLine_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"numToString") ) { outValue = numToString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeToFile") ) { outValue = writeToFile_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"floorDecimal") ) { outValue = floorDecimal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sparrowAtlas") ) { outValue = sparrowAtlas_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scaleToWidth") ) { outValue = scaleToWidth_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FloatToString") ) { outValue = FloatToString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scaleToHeight") ) { outValue = scaleToHeight_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"roundToInterval") ) { outValue = roundToInterval_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"convertFloatToInt") ) { outValue = convertFloatToInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"convertIntToFloat") ) { outValue = convertIntToFloat_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRandomThingFromArray") ) { outValue = getRandomThingFromArray_dyn(); return true; }
	}
	return false;
}

bool Util_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Util_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Util_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Util_obj::file,HX_("file",7c,ce,bb,43)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Util_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Util_obj::file,"file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Util_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Util_obj::file,"file");
};

#endif

::hx::Class Util_obj::__mClass;

static ::String Util_obj_sStaticFields[] = {
	HX_("file",7c,ce,bb,43),
	HX_("image",5b,1f,69,bd),
	HX_("jpg",e1,d0,50,00),
	HX_("jpeg",a8,f2,65,46),
	HX_("gif",04,84,4e,00),
	HX_("sound",cf,8c,cc,80),
	HX_("music",a5,d0,5a,10),
	HX_("xml",d7,6d,5b,00),
	HX_("IntToString",9b,38,f0,06),
	HX_("FloatToString",48,9e,90,33),
	HX_("convertFloatToInt",cb,a2,83,1c),
	HX_("convertIntToFloat",c5,48,67,f3),
	HX_("txt",70,6e,58,00),
	HX_("json",28,42,68,46),
	HX_("font",cf,5d,c0,43),
	HX_("capitalize",ac,09,9c,e1),
	HX_("floorDecimal",25,1c,ad,93),
	HX_("openURL",c5,bd,35,40),
	HX_("getURL",79,48,28,a3),
	HX_("round",4e,f8,65,ed),
	HX_("roundDown",d0,5b,4a,7a),
	HX_("roundUp",49,72,0f,8d),
	HX_("roundToInterval",ce,b7,9a,ca),
	HX_("error",c8,cb,29,73),
	HX_("readFile",f2,a8,b3,6b),
	HX_("readOneLine",c4,9c,00,b0),
	HX_("video",7b,14,fc,36),
	HX_("sparrowAtlas",9f,55,cd,84),
	HX_("numToString",12,21,85,24),
	HX_("formatTime",e4,ee,61,0c),
	HX_("fileExists",78,65,64,a0),
	HX_("writeToFile",d6,8b,6e,0e),
	HX_("deleteFile",47,ac,08,97),
	HX_("closeGame",ca,73,2d,0e),
	HX_("scaleToWidth",21,a1,30,2e),
	HX_("scaleToHeight",6c,d4,ab,f2),
	HX_("getRandomThingFromArray",1a,53,6b,02),
	::String(null())
};

void Util_obj::__register()
{
	Util_obj _hx_dummy;
	Util_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Util",22,84,87,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Util_obj::__GetStatic;
	__mClass->mSetStaticField = &Util_obj::__SetStatic;
	__mClass->mMarkFunc = Util_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Util_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Util_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Util_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Util_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Util_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

