#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#define INCLUDED_flixel_graphics_atlas_FlxNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxAtlas)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxNode)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxImageFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxTileFrames)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES FlxNode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxNode_obj OBJ_;
		FlxNode_obj();

	public:
		enum { _hx_ClassId = 0x4e838670 };

		void __construct( ::flixel::math::FlxRect rect, ::flixel::graphics::atlas::FlxAtlas atlas,::hx::Null< bool >  __o_filled,::String __o_key,::hx::Null< bool >  __o_rotated);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.atlas.FlxNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.atlas.FlxNode"); }
		static ::hx::ObjectPtr< FlxNode_obj > __new( ::flixel::math::FlxRect rect, ::flixel::graphics::atlas::FlxAtlas atlas,::hx::Null< bool >  __o_filled,::String __o_key,::hx::Null< bool >  __o_rotated);
		static ::hx::ObjectPtr< FlxNode_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::math::FlxRect rect, ::flixel::graphics::atlas::FlxAtlas atlas,::hx::Null< bool >  __o_filled,::String __o_key,::hx::Null< bool >  __o_rotated);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxNode",74,43,62,d9); }

		 ::flixel::graphics::atlas::FlxNode left;
		 ::flixel::graphics::atlas::FlxNode right;
		 ::flixel::math::FlxRect rect;
		::String key;
		bool filled;
		 ::flixel::graphics::atlas::FlxAtlas atlas;
		bool rotated;
		void destroy();
		::Dynamic destroy_dyn();

		bool canPlace(int width,int height);
		::Dynamic canPlace_dyn();

		 ::flixel::graphics::frames::FlxTileFrames getTileFrames( ::flixel::math::FlxBasePoint tileSize, ::flixel::math::FlxBasePoint tileSpacing, ::flixel::math::FlxBasePoint tileBorder);
		::Dynamic getTileFrames_dyn();

		 ::flixel::graphics::frames::FlxImageFrame getImageFrame();
		::Dynamic getImageFrame_dyn();

		bool get_isEmpty();
		::Dynamic get_isEmpty_dyn();

		int get_x();
		::Dynamic get_x_dyn();

		int get_y();
		::Dynamic get_y_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int set_width(int value);
		::Dynamic set_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		int set_height(int value);
		::Dynamic set_height_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_flixel_graphics_atlas_FlxNode */ 
