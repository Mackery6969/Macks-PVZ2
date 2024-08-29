#ifndef INCLUDED_Util
#define INCLUDED_Util

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Util)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Util_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Util_obj OBJ_;
		Util_obj();

	public:
		enum { _hx_ClassId = 0x0cda7a46 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Util")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Util"); }

		inline static ::hx::ObjectPtr< Util_obj > __new() {
			::hx::ObjectPtr< Util_obj > __this = new Util_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Util_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Util_obj *__this = (Util_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Util_obj), false, "Util"));
			*(void **)__this = Util_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Util_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Util",22,84,87,38); }

		static ::String file;
		static ::String image(::String image,::String folder);
		static ::Dynamic image_dyn();

		static ::String jpg(::String image,::String folder);
		static ::Dynamic jpg_dyn();

		static ::String jpeg(::String image,::String folder);
		static ::Dynamic jpeg_dyn();

		static ::String gif(::String gif,::String folder);
		static ::Dynamic gif_dyn();

		static ::String sound(::String sound,::String folder);
		static ::Dynamic sound_dyn();

		static ::String music(::String music,::String folder);
		static ::Dynamic music_dyn();

		static ::String xml(::String xml,::String folder);
		static ::Dynamic xml_dyn();

		static ::String IntToString(int i);
		static ::Dynamic IntToString_dyn();

		static ::String FloatToString(Float i);
		static ::Dynamic FloatToString_dyn();

		static int convertFloatToInt(Float f);
		static ::Dynamic convertFloatToInt_dyn();

		static Float convertIntToFloat(int i);
		static ::Dynamic convertIntToFloat_dyn();

		static ::String txt(::String text,::String folder);
		static ::Dynamic txt_dyn();

		static ::String json(::String path,::String folder);
		static ::Dynamic json_dyn();

		static ::String font(::String font,::String type,::String extention);
		static ::Dynamic font_dyn();

		static ::String capitalize(::String text);
		static ::Dynamic capitalize_dyn();

		static Float floorDecimal(Float value,int decimals);
		static ::Dynamic floorDecimal_dyn();

		static void openURL(::String site);
		static ::Dynamic openURL_dyn();

		static ::String getURL(::String site);
		static ::Dynamic getURL_dyn();

		static Float round(Float value,int decimals);
		static ::Dynamic round_dyn();

		static Float roundDown(Float value,int decimals);
		static ::Dynamic roundDown_dyn();

		static Float roundUp(Float value,int decimals);
		static ::Dynamic roundUp_dyn();

		static Float roundToInterval(Float value,Float interval);
		static ::Dynamic roundToInterval_dyn();

		static void error(::String error,::String name);
		static ::Dynamic error_dyn();

		static ::Array< ::String > readFile(::String path);
		static ::Dynamic readFile_dyn();

		static ::String readOneLine(::String path, ::Dynamic line);
		static ::Dynamic readOneLine_dyn();

		static ::String video(::String video,::String folder);
		static ::Dynamic video_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames sparrowAtlas(::String path,::String folder);
		static ::Dynamic sparrowAtlas_dyn();

		static ::String numToString(Float num);
		static ::Dynamic numToString_dyn();

		static ::String formatTime(Float time);
		static ::Dynamic formatTime_dyn();

		static bool fileExists(::String path);
		static ::Dynamic fileExists_dyn();

		static void writeToFile(::String path,::String data);
		static ::Dynamic writeToFile_dyn();

		static void deleteFile(::String path);
		static ::Dynamic deleteFile_dyn();

		static void closeGame();
		static ::Dynamic closeGame_dyn();

		static Float scaleToWidth( ::flixel::FlxSprite sprite,Float width);
		static ::Dynamic scaleToWidth_dyn();

		static Float scaleToHeight( ::flixel::FlxSprite sprite,Float height);
		static ::Dynamic scaleToHeight_dyn();

		static  ::Dynamic getRandomThingFromArray(::cpp::VirtualArray array);
		static ::Dynamic getRandomThingFromArray_dyn();

};


#endif /* INCLUDED_Util */ 
