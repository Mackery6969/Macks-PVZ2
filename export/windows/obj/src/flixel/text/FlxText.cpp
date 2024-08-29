#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#include <_UnicodeString/UnicodeString_Impl_.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7d9cf70d988be490_44_new,"flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",44,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_250_destroy,"flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",250,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_260_drawFrame,"flixel.text.FlxText","drawFrame",0xd9b5be4b,"flixel.text.FlxText.drawFrame","flixel/text/FlxText.hx",260,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_274_stampOnAtlas,"flixel.text.FlxText","stampOnAtlas",0x66244e67,"flixel.text.FlxText.stampOnAtlas","flixel/text/FlxText.hx",274,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_313_applyMarkup,"flixel.text.FlxText","applyMarkup",0x660988f8,"flixel.text.FlxText.applyMarkup","flixel/text/FlxText.hx",313,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_427_addFormat,"flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",427,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_422_addFormat,"flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",422,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_439_removeFormat,"flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",439,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_485_clearFormats,"flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",485,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_506_setFormat,"flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",506,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_538_setBorderStyle,"flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",538,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_548_updateHitbox,"flixel.text.FlxText","updateHitbox",0x91c9e8ff,"flixel.text.FlxText.updateHitbox","flixel/text/FlxText.hx",548,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_554_getScreenBounds,"flixel.text.FlxText","getScreenBounds",0xa33cf2f9,"flixel.text.FlxText.getScreenBounds","flixel/text/FlxText.hx",554,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_560_set_fieldWidth,"flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",560,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_584_get_fieldWidth,"flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",584,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_589_get_fieldHeight,"flixel.text.FlxText","get_fieldHeight",0x04ec1e1a,"flixel.text.FlxText.get_fieldHeight","flixel/text/FlxText.hx",589,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_593_set_fieldHeight,"flixel.text.FlxText","set_fieldHeight",0x00b79b26,"flixel.text.FlxText.set_fieldHeight","flixel/text/FlxText.hx",593,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_611_set_autoSize,"flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",611,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_623_get_autoSize,"flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",623,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_627_set_text,"flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",627,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_640_get_size,"flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",640,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_644_set_size,"flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",644,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_652_get_letterSpacing,"flixel.text.FlxText","get_letterSpacing",0xf71c6556,"flixel.text.FlxText.get_letterSpacing","flixel/text/FlxText.hx",652,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_656_set_letterSpacing,"flixel.text.FlxText","set_letterSpacing",0x1a8a3d62,"flixel.text.FlxText.set_letterSpacing","flixel/text/FlxText.hx",656,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_663_set_color,"flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",663,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_676_get_font,"flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",676,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_680_set_font,"flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",680,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_704_get_embedded,"flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",704,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_709_get_systemFont,"flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",709,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_713_set_systemFont,"flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",713,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_722_get_bold,"flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",722,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_726_set_bold,"flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",726,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_737_get_italic,"flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",737,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_741_set_italic,"flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",741,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_752_get_underline,"flixel.text.FlxText","get_underline",0x90e082a5,"flixel.text.FlxText.get_underline","flixel/text/FlxText.hx",752,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_756_set_underline,"flixel.text.FlxText","set_underline",0xd5e664b1,"flixel.text.FlxText.set_underline","flixel/text/FlxText.hx",756,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_767_get_wordWrap,"flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",767,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_771_set_wordWrap,"flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",771,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_782_get_alignment,"flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",782,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_786_set_alignment,"flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",786,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_793_set_borderStyle,"flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",793,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_801_set_borderColor,"flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",801,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_809_set_borderSize,"flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",809,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_817_set_borderQuality,"flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",817,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_826_set_graphic,"flixel.text.FlxText","set_graphic",0x740d070d,"flixel.text.FlxText.set_graphic","flixel/text/FlxText.hx",826,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_834_get_width,"flixel.text.FlxText","get_width",0x1933231f,"flixel.text.FlxText.get_width","flixel/text/FlxText.hx",834,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_840_get_height,"flixel.text.FlxText","get_height",0xa9db10ae,"flixel.text.FlxText.get_height","flixel/text/FlxText.hx",840,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_846_updateColorTransform,"flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",846,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_865_regenGraphic,"flixel.text.FlxText","regenGraphic",0xc617a9e9,"flixel.text.FlxText.regenGraphic","flixel/text/FlxText.hx",865,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_941_drawTextFieldTo,"flixel.text.FlxText","drawTextFieldTo",0xda5cac46,"flixel.text.FlxText.drawTextFieldTo","flixel/text/FlxText.hx",941,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_997_draw,"flixel.text.FlxText","draw",0x3a66d282,"flixel.text.FlxText.draw","flixel/text/FlxText.hx",997,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1008_calcFrame,"flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",1008,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1020_applyBorderStyle,"flixel.text.FlxText","applyBorderStyle",0x7fb82955,"flixel.text.FlxText.applyBorderStyle","flixel/text/FlxText.hx",1020,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1086_applyBorderTransparency,"flixel.text.FlxText","applyBorderTransparency",0x59c1b674,"flixel.text.FlxText.applyBorderTransparency","flixel/text/FlxText.hx",1086,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1102_copyTextWithOffset,"flixel.text.FlxText","copyTextWithOffset",0x8b535ed9,"flixel.text.FlxText.copyTextWithOffset","flixel/text/FlxText.hx",1102,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1109_applyFormats,"flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",1109,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1135_copyTextFormat,"flixel.text.FlxText","copyTextFormat",0xce0953d7,"flixel.text.FlxText.copyTextFormat","flixel/text/FlxText.hx",1135,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1153_dtfCopy,"flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",1153,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1159_updateDefaultFormat,"flixel.text.FlxText","updateDefaultFormat",0x3cb6b251,"flixel.text.FlxText.updateDefaultFormat","flixel/text/FlxText.hx",1159,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1166_set_frames,"flixel.text.FlxText","set_frames",0x579256e1,"flixel.text.FlxText.set_frames","flixel/text/FlxText.hx",1166,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_49_boot,"flixel.text.FlxText","boot",0x39122ab0,"flixel.text.FlxText.boot","flixel/text/FlxText.hx",49,0xdf165a6e)
namespace flixel{
namespace text{

void FlxText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float FieldWidth = __o_FieldWidth.Default(0);
            		int Size = __o_Size.Default(8);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_44_new)
HXLINE( 187)		this->_hasBorderAlpha = false;
HXLINE( 178)		this->_regen = true;
HXLINE( 172)		this->_formatRanges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 162)		this->_autoHeight = true;
HXLINE( 131)		this->borderQuality = ((Float)1);
HXLINE( 124)		this->borderSize = ((Float)1);
HXLINE( 119)		this->borderColor = 0;
HXLINE( 114)		this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
HXLINE(  54)		this->text = HX_("",00,00,00,00);
HXLINE( 209)		super::__construct(X,Y,null());
HXLINE( 211)		bool _hx_tmp;
HXDLIN( 211)		if (::hx::IsNotNull( Text )) {
HXLINE( 211)			_hx_tmp = (Text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 211)			_hx_tmp = true;
            		}
HXDLIN( 211)		if (_hx_tmp) {
HXLINE( 215)			this->set_text(HX_("",00,00,00,00));
HXLINE( 216)			Text = HX_(" ",20,00,00,00);
            		}
            		else {
HXLINE( 220)			this->set_text(Text);
            		}
HXLINE( 223)		this->textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 224)		this->textField->set_selectable(false);
HXLINE( 225)		this->textField->set_multiline(true);
HXLINE( 226)		this->textField->set_wordWrap(true);
HXLINE( 227)		this->_defaultFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),Size,16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 228)		this->set_letterSpacing(( (Float)(0) ));
HXLINE( 229)		this->set_font(::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT);
HXLINE( 230)		this->_formatAdjusted =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 231)		this->textField->set_defaultTextFormat(this->_defaultFormat);
HXLINE( 232)		this->textField->set_text(Text);
HXLINE( 233)		this->set_fieldWidth(FieldWidth);
HXLINE( 234)		this->textField->set_embedFonts(EmbeddedFont);
HXLINE( 235)		this->textField->set_sharpness(( (Float)(100) ));
HXLINE( 236)		Float _hx_tmp1;
HXDLIN( 236)		if ((Text.length <= 0)) {
HXLINE( 236)			_hx_tmp1 = ( (Float)(1) );
            		}
            		else {
HXLINE( 236)			_hx_tmp1 = ( (Float)(10) );
            		}
HXDLIN( 236)		this->textField->set_height(_hx_tmp1);
HXLINE( 238)		this->set_allowCollisions(0);
HXLINE( 239)		this->set_moves(false);
HXLINE( 241)		this->drawFrame(null());
HXLINE( 243)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(1,1);
HXDLIN( 243)		point->_inPool = false;
HXDLIN( 243)		this->shadowOffset = point;
            	}

Dynamic FlxText_obj::__CreateEmpty() { return new FlxText_obj; }

void *FlxText_obj::_hx_vtable = 0;

Dynamic FlxText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxText_obj > _hx_result = new FlxText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxText_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_250_destroy)
HXLINE( 251)		this->textField = null();
HXLINE( 252)		this->_font = null();
HXLINE( 253)		this->_defaultFormat = null();
HXLINE( 254)		this->_formatAdjusted = null();
HXLINE( 255)		this->shadowOffset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->shadowOffset)) );
HXLINE( 256)		this->super::destroy();
            	}


void FlxText_obj::drawFrame(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_260_drawFrame)
HXLINE( 261)		bool _hx_tmp;
HXDLIN( 261)		if (!(this->_regen)) {
HXLINE( 261)			_hx_tmp = Force;
            		}
            		else {
HXLINE( 261)			_hx_tmp = true;
            		}
HXDLIN( 261)		this->_regen = _hx_tmp;
HXLINE( 262)		this->super::drawFrame(this->_regen);
            	}


bool FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_274_stampOnAtlas)
HXLINE( 275)		this->regenGraphic();
HXLINE( 277)		 ::flixel::graphics::atlas::FlxNode node = atlas->addNode(this->graphic->bitmap,this->graphic->key);
HXLINE( 278)		bool result = ::hx::IsNotNull( node );
HXLINE( 280)		if (::hx::IsNotNull( node )) {
HXLINE( 282)			this->set_frames(node->getImageFrame());
            		}
HXLINE( 285)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,stampOnAtlas,return )

 ::flixel::text::FlxText FlxText_obj::applyMarkup(::String input,::Array< ::Dynamic> rules){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_313_applyMarkup)
HXLINE( 314)		bool _hx_tmp;
HXDLIN( 314)		if (::hx::IsNotNull( rules )) {
HXLINE( 314)			_hx_tmp = (rules->length == 0);
            		}
            		else {
HXLINE( 314)			_hx_tmp = true;
            		}
HXDLIN( 314)		if (_hx_tmp) {
HXLINE( 315)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 317)		this->clearFormats();
HXLINE( 319)		::Array< int > rangeStarts = ::Array_obj< int >::__new(0);
HXLINE( 320)		::Array< int > rangeEnds = ::Array_obj< int >::__new(0);
HXLINE( 321)		::Array< ::Dynamic> rulesToApply = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 323)		int i = 0;
HXLINE( 324)		{
HXLINE( 324)			int _g = 0;
HXDLIN( 324)			while((_g < rules->length)){
HXLINE( 324)				 ::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >();
HXDLIN( 324)				_g = (_g + 1);
HXLINE( 326)				bool _hx_tmp;
HXDLIN( 326)				if (::hx::IsNotNull( rule->marker )) {
HXLINE( 326)					_hx_tmp = ::hx::IsNull( rule->format );
            				}
            				else {
HXLINE( 326)					_hx_tmp = true;
            				}
HXDLIN( 326)				if (_hx_tmp) {
HXLINE( 327)					continue;
            				}
HXLINE( 329)				bool start = false;
HXLINE( 330)				int markerLength = ::_UnicodeString::UnicodeString_Impl__obj::get_length(rule->marker);
HXLINE( 332)				if ((input.indexOf(rule->marker,null()) == -1)) {
HXLINE( 333)					continue;
            				}
HXLINE( 336)				{
HXLINE( 336)					int _g1 = 0;
HXDLIN( 336)					int _g2 = ::_UnicodeString::UnicodeString_Impl__obj::get_length(input);
HXDLIN( 336)					while((_g1 < _g2)){
HXLINE( 336)						_g1 = (_g1 + 1);
HXDLIN( 336)						int charIndex = (_g1 - 1);
HXLINE( 338)						if ((::_UnicodeString::UnicodeString_Impl__obj::substr(input,charIndex,markerLength) != rule->marker)) {
HXLINE( 339)							continue;
            						}
HXLINE( 341)						if (start) {
HXLINE( 343)							start = false;
HXLINE( 344)							rangeEnds->push(charIndex);
            						}
            						else {
HXLINE( 348)							start = true;
HXLINE( 349)							rangeStarts->push(charIndex);
HXLINE( 350)							rulesToApply->push(rule);
            						}
            					}
            				}
HXLINE( 354)				if (start) {
HXLINE( 357)					rangeEnds->push(-1);
            				}
HXLINE( 360)				i = (i + 1);
            			}
            		}
HXLINE( 364)		{
HXLINE( 364)			int _g1 = 0;
HXDLIN( 364)			while((_g1 < rules->length)){
HXLINE( 364)				 ::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g1).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >();
HXDLIN( 364)				_g1 = (_g1 + 1);
HXLINE( 365)				input = ::StringTools_obj::replace(input,rule->marker,HX_("",00,00,00,00));
            			}
            		}
HXLINE( 368)		{
HXLINE( 368)			int _g2 = 0;
HXDLIN( 368)			int _g3 = rangeStarts->length;
HXDLIN( 368)			while((_g2 < _g3)){
HXLINE( 368)				_g2 = (_g2 + 1);
HXDLIN( 368)				int i = (_g2 - 1);
HXLINE( 371)				int delIndex = rangeStarts->__get(i);
HXLINE( 372)				int markerLength = ::_UnicodeString::UnicodeString_Impl__obj::get_length(rulesToApply->__get(i).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >()->marker);
HXLINE( 375)				{
HXLINE( 375)					int _g = 0;
HXDLIN( 375)					int _g1 = rangeStarts->length;
HXDLIN( 375)					while((_g < _g1)){
HXLINE( 375)						_g = (_g + 1);
HXDLIN( 375)						int j = (_g - 1);
HXLINE( 377)						if ((rangeStarts->__get(j) > delIndex)) {
HXLINE( 379)							::Array< int > rangeStarts1 = rangeStarts;
HXDLIN( 379)							int j1 = j;
HXDLIN( 379)							rangeStarts1[j1] = (rangeStarts1->__get(j1) - markerLength);
            						}
HXLINE( 381)						if ((rangeEnds->__get(j) > delIndex)) {
HXLINE( 383)							::Array< int > rangeEnds1 = rangeEnds;
HXDLIN( 383)							int j1 = j;
HXDLIN( 383)							rangeEnds1[j1] = (rangeEnds1->__get(j1) - markerLength);
            						}
            					}
            				}
HXLINE( 388)				delIndex = rangeEnds->__get(i);
HXLINE( 391)				{
HXLINE( 391)					int _g3 = 0;
HXDLIN( 391)					int _g4 = rangeStarts->length;
HXDLIN( 391)					while((_g3 < _g4)){
HXLINE( 391)						_g3 = (_g3 + 1);
HXDLIN( 391)						int j = (_g3 - 1);
HXLINE( 393)						if ((rangeStarts->__get(j) > delIndex)) {
HXLINE( 395)							::Array< int > rangeStarts1 = rangeStarts;
HXDLIN( 395)							int j1 = j;
HXDLIN( 395)							rangeStarts1[j1] = (rangeStarts1->__get(j1) - markerLength);
            						}
HXLINE( 397)						if ((rangeEnds->__get(j) > delIndex)) {
HXLINE( 399)							::Array< int > rangeEnds1 = rangeEnds;
HXDLIN( 399)							int j1 = j;
HXDLIN( 399)							rangeEnds1[j1] = (rangeEnds1->__get(j1) - markerLength);
            						}
            					}
            				}
            			}
            		}
HXLINE( 405)		this->set_text(input);
HXLINE( 408)		{
HXLINE( 408)			int _g4 = 0;
HXDLIN( 408)			int _g5 = rangeStarts->length;
HXDLIN( 408)			while((_g4 < _g5)){
HXLINE( 408)				_g4 = (_g4 + 1);
HXDLIN( 408)				int i = (_g4 - 1);
HXLINE( 409)				this->addFormat(rulesToApply->__get(i).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >()->format,rangeStarts->__get(i),rangeEnds->__get(i));
            			}
            		}
HXLINE( 411)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyMarkup,return )

 ::flixel::text::FlxText FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,::hx::Null< int >  __o_Start,::hx::Null< int >  __o_End){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::flixel::text::_FlxText::FlxTextFormatRange left, ::flixel::text::_FlxText::FlxTextFormatRange right){
            			HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_427_addFormat)
HXLINE( 427)			if (::hx::IsLess( left->range->start,right->range->start )) {
HXLINE( 427)				return -1;
            			}
            			else {
HXLINE( 427)				return 1;
            			}
HXDLIN( 427)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int Start = __o_Start.Default(-1);
            		int End = __o_End.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_422_addFormat)
HXLINE( 423)		::Array< ::Dynamic> _hx_tmp = this->_formatRanges;
HXDLIN( 423)		_hx_tmp->push( ::flixel::text::_FlxText::FlxTextFormatRange_obj::__alloc( HX_CTX ,Format,Start,End));
HXLINE( 425)		this->_formatRanges->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 429)		this->_regen = true;
HXLINE( 431)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,return )

 ::flixel::text::FlxText FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format, ::Dynamic Start, ::Dynamic End){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_439_removeFormat)
HXLINE( 440)		int i = this->_formatRanges->length;
HXLINE( 441)		while(true){
HXLINE( 441)			i = (i - 1);
HXDLIN( 441)			if (!(((i + 1) > 0))) {
HXLINE( 441)				goto _hx_goto_14;
            			}
HXLINE( 443)			 ::flixel::text::_FlxText::FlxTextFormatRange formatRange = this->_formatRanges->__get(i).StaticCast<  ::flixel::text::_FlxText::FlxTextFormatRange >();
HXLINE( 444)			if (::hx::IsInstanceNotEq( formatRange->format,Format )) {
HXLINE( 445)				continue;
            			}
HXLINE( 447)			bool _hx_tmp;
HXDLIN( 447)			if (::hx::IsNotNull( Start )) {
HXLINE( 447)				_hx_tmp = ::hx::IsNotNull( End );
            			}
            			else {
HXLINE( 447)				_hx_tmp = false;
            			}
HXDLIN( 447)			if (_hx_tmp) {
HXLINE( 449)				 ::flixel::util::helpers::FlxRange range = formatRange->range;
HXLINE( 450)				bool _hx_tmp;
HXDLIN( 450)				if (::hx::IsLess( Start,range->end )) {
HXLINE( 450)					_hx_tmp = ::hx::IsLessEq( End,range->start );
            				}
            				else {
HXLINE( 450)					_hx_tmp = true;
            				}
HXDLIN( 450)				if (_hx_tmp) {
HXLINE( 451)					continue;
            				}
HXLINE( 453)				bool _hx_tmp1;
HXDLIN( 453)				if (::hx::IsGreater( Start,range->start )) {
HXLINE( 453)					_hx_tmp1 = ::hx::IsLess( End,range->end );
            				}
            				else {
HXLINE( 453)					_hx_tmp1 = false;
            				}
HXDLIN( 453)				if (_hx_tmp1) {
HXLINE( 455)					this->addFormat(formatRange->format,(End + 1),range->end);
HXLINE( 456)					range->end = Start;
HXLINE( 457)					continue;
            				}
HXLINE( 460)				bool _hx_tmp2;
HXDLIN( 460)				if (::hx::IsLessEq( Start,range->start )) {
HXLINE( 460)					_hx_tmp2 = ::hx::IsLess( End,range->end );
            				}
            				else {
HXLINE( 460)					_hx_tmp2 = false;
            				}
HXDLIN( 460)				if (_hx_tmp2) {
HXLINE( 462)					range->start = End;
HXLINE( 463)					continue;
            				}
HXLINE( 466)				bool _hx_tmp3;
HXDLIN( 466)				if (::hx::IsGreater( Start,range->start )) {
HXLINE( 466)					_hx_tmp3 = ::hx::IsGreaterEq( End,range->end );
            				}
            				else {
HXLINE( 466)					_hx_tmp3 = false;
            				}
HXDLIN( 466)				if (_hx_tmp3) {
HXLINE( 468)					range->end = Start;
HXLINE( 469)					continue;
            				}
            			}
HXLINE( 473)			this->_formatRanges->remove(formatRange);
            		}
            		_hx_goto_14:;
HXLINE( 476)		this->_regen = true;
HXLINE( 478)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,removeFormat,return )

 ::flixel::text::FlxText FlxText_obj::clearFormats(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_485_clearFormats)
HXLINE( 486)		this->_formatRanges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 487)		{
HXLINE( 487)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 487)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 487)			this->_regen = true;
            		}
HXLINE( 489)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,return )

 ::flixel::text::FlxText FlxText_obj::setFormat(::String Font,::hx::Null< int >  __o_Size,::hx::Null< int >  __o_Color,::String Alignment, ::flixel::text::FlxTextBorderStyle BorderStyle,::hx::Null< int >  __o_BorderColor,::hx::Null< bool >  __o_EmbeddedFont){
            		int Size = __o_Size.Default(8);
            		int Color = __o_Color.Default(-1);
            		int BorderColor = __o_BorderColor.Default(0);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_506_setFormat)
HXLINE( 507)		if (::hx::IsNull( BorderStyle )) {
HXLINE( 507)			BorderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
            		}
HXLINE( 509)		if (EmbeddedFont) {
HXLINE( 511)			this->set_font(Font);
            		}
            		else {
HXLINE( 513)			if (::hx::IsNotNull( Font )) {
HXLINE( 515)				this->set_systemFont(Font);
            			}
            		}
HXLINE( 518)		this->set_size(Size);
HXLINE( 519)		this->set_color(Color);
HXLINE( 520)		if (::hx::IsNotNull( Alignment )) {
HXLINE( 521)			this->set_alignment(Alignment);
            		}
HXLINE( 522)		{
HXLINE( 522)			this->set_borderStyle(BorderStyle);
HXDLIN( 522)			this->set_borderColor(BorderColor);
HXDLIN( 522)			this->set_borderSize(( (Float)(1) ));
HXDLIN( 522)			this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 524)		{
HXLINE( 524)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 524)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 524)			this->_regen = true;
            		}
HXLINE( 526)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

 ::flixel::text::FlxText FlxText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality){
            		int Color = __o_Color.Default(0);
            		Float Size = __o_Size.Default(1);
            		Float Quality = __o_Quality.Default(1);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_538_setBorderStyle)
HXLINE( 539)		this->set_borderStyle(Style);
HXLINE( 540)		this->set_borderColor(Color);
HXLINE( 541)		this->set_borderSize(Size);
HXLINE( 542)		this->set_borderQuality(Quality);
HXLINE( 544)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,return )

void FlxText_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_548_updateHitbox)
HXLINE( 549)		this->regenGraphic();
HXLINE( 550)		this->super::updateHitbox();
            	}


 ::flixel::math::FlxRect FlxText_obj::getScreenBounds( ::flixel::math::FlxRect newRect, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_554_getScreenBounds)
HXLINE( 555)		this->regenGraphic();
HXLINE( 556)		return this->super::getScreenBounds(newRect,camera);
            	}


Float FlxText_obj::set_fieldWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_560_set_fieldWidth)
HXLINE( 561)		if (::hx::IsNull( this->textField )) {
HXLINE( 562)			return value;
            		}
HXLINE( 564)		if ((value <= 0)) {
HXLINE( 566)			this->set_wordWrap(false);
HXLINE( 567)			this->set_autoSize(true);
HXLINE( 569)			this->_autoHeight = true;
            		}
            		else {
HXLINE( 573)			this->set_autoSize(false);
HXLINE( 574)			this->set_wordWrap(true);
HXLINE( 575)			this->textField->set_width(value);
            		}
HXLINE( 578)		this->_regen = true;
HXLINE( 579)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_584_get_fieldWidth)
HXDLIN( 584)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 584)			return this->textField->get_width();
            		}
            		else {
HXDLIN( 584)			return ( (Float)(0) );
            		}
HXDLIN( 584)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

Float FlxText_obj::get_fieldHeight(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_589_get_fieldHeight)
HXDLIN( 589)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 589)			return this->textField->get_height();
            		}
            		else {
HXDLIN( 589)			return ( (Float)(0) );
            		}
HXDLIN( 589)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldHeight,return )

Float FlxText_obj::set_fieldHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_593_set_fieldHeight)
HXLINE( 594)		if (::hx::IsNull( this->textField )) {
HXLINE( 595)			return value;
            		}
HXLINE( 597)		if ((value <= 0)) {
HXLINE( 599)			this->_autoHeight = true;
            		}
            		else {
HXLINE( 603)			this->_autoHeight = false;
HXLINE( 604)			this->textField->set_height(value);
            		}
HXLINE( 606)		this->_regen = true;
HXLINE( 607)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldHeight,return )

bool FlxText_obj::set_autoSize(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_611_set_autoSize)
HXLINE( 612)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 614)			 ::Dynamic _hx_tmp;
HXDLIN( 614)			if (value) {
HXLINE( 614)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 614)				_hx_tmp = 2;
            			}
HXDLIN( 614)			this->textField->set_autoSize(_hx_tmp);
HXLINE( 615)			this->_regen = true;
            		}
HXLINE( 618)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_623_get_autoSize)
HXDLIN( 623)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 623)			return ::hx::IsNotEq( this->textField->get_autoSize(),2 );
            		}
            		else {
HXDLIN( 623)			return false;
            		}
HXDLIN( 623)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::set_text(::String Text){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_627_set_text)
HXLINE( 628)		this->text = Text;
HXLINE( 629)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 631)			::String ot = this->textField->get_text();
HXLINE( 632)			this->textField->set_text(Text);
HXLINE( 633)			bool _hx_tmp;
HXDLIN( 633)			if ((this->textField->get_text() == ot)) {
HXLINE( 633)				_hx_tmp = this->_regen;
            			}
            			else {
HXLINE( 633)				_hx_tmp = true;
            			}
HXDLIN( 633)			this->_regen = _hx_tmp;
            		}
HXLINE( 635)		return Text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

int FlxText_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_640_get_size)
HXDLIN( 640)		return ::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

int FlxText_obj::set_size(int Size){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_644_set_size)
HXLINE( 645)		this->_defaultFormat->size = Size;
HXLINE( 646)		{
HXLINE( 646)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 646)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 646)			this->_regen = true;
            		}
HXLINE( 647)		return Size;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

Float FlxText_obj::get_letterSpacing(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_652_get_letterSpacing)
HXDLIN( 652)		return ( (Float)(this->_defaultFormat->letterSpacing) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_letterSpacing,return )

Float FlxText_obj::set_letterSpacing(Float LetterSpacing){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_656_set_letterSpacing)
HXLINE( 657)		this->_defaultFormat->letterSpacing = LetterSpacing;
HXLINE( 658)		{
HXLINE( 658)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 658)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 658)			this->_regen = true;
            		}
HXLINE( 659)		return LetterSpacing;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_letterSpacing,return )

int FlxText_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_663_set_color)
HXLINE( 664)		if (::hx::IsEq( this->_defaultFormat->color,(Color & 16777215) )) {
HXLINE( 666)			return Color;
            		}
HXLINE( 668)		this->_defaultFormat->color = (Color & 16777215);
HXLINE( 669)		this->color = Color;
HXLINE( 670)		{
HXLINE( 670)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 670)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 670)			this->_regen = true;
            		}
HXLINE( 671)		return Color;
            	}


::String FlxText_obj::get_font(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_676_get_font)
HXDLIN( 676)		return this->_font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font(::String Font){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_680_set_font)
HXLINE( 681)		this->textField->set_embedFonts(true);
HXLINE( 683)		if (::hx::IsNotNull( Font )) {
HXLINE( 685)			::String newFontName = Font;
HXLINE( 686)			if (::openfl::utils::Assets_obj::exists(Font,HX_("FONT",cf,25,81,2e))) {
HXLINE( 688)				newFontName = ::openfl::utils::Assets_obj::getFont(Font,null())->name;
            			}
HXLINE( 691)			this->_defaultFormat->font = newFontName;
            		}
            		else {
HXLINE( 695)			this->_defaultFormat->font = ::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT;
            		}
HXLINE( 698)		{
HXLINE( 698)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 698)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 698)			this->_regen = true;
            		}
HXLINE( 699)		return (this->_font = this->_defaultFormat->font);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_704_get_embedded)
HXDLIN( 704)		return this->textField->get_embedFonts();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_709_get_systemFont)
HXDLIN( 709)		return this->_defaultFormat->font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont(::String Font){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_713_set_systemFont)
HXLINE( 714)		this->textField->set_embedFonts(false);
HXLINE( 715)		this->_defaultFormat->font = Font;
HXLINE( 716)		{
HXLINE( 716)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 716)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 716)			this->_regen = true;
            		}
HXLINE( 717)		return Font;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_722_get_bold)
HXDLIN( 722)		return ( (bool)(this->_defaultFormat->bold) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_726_set_bold)
HXLINE( 727)		if (::hx::IsNotEq( this->_defaultFormat->bold,value )) {
HXLINE( 729)			this->_defaultFormat->bold = value;
HXLINE( 730)			{
HXLINE( 730)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 730)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 730)				this->_regen = true;
            			}
            		}
HXLINE( 732)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_737_get_italic)
HXDLIN( 737)		return ( (bool)(this->_defaultFormat->italic) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_741_set_italic)
HXLINE( 742)		if (::hx::IsNotEq( this->_defaultFormat->italic,value )) {
HXLINE( 744)			this->_defaultFormat->italic = value;
HXLINE( 745)			{
HXLINE( 745)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 745)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 745)				this->_regen = true;
            			}
            		}
HXLINE( 747)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_underline(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_752_get_underline)
HXDLIN( 752)		return ( (bool)(this->_defaultFormat->underline) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_underline,return )

bool FlxText_obj::set_underline(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_756_set_underline)
HXLINE( 757)		if (::hx::IsNotEq( this->_defaultFormat->underline,value )) {
HXLINE( 759)			this->_defaultFormat->underline = value;
HXLINE( 760)			{
HXLINE( 760)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 760)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 760)				this->_regen = true;
            			}
            		}
HXLINE( 762)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_underline,return )

bool FlxText_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_767_get_wordWrap)
HXDLIN( 767)		return this->textField->get_wordWrap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_771_set_wordWrap)
HXLINE( 772)		if ((this->textField->get_wordWrap() != value)) {
HXLINE( 774)			this->textField->set_wordWrap(value);
HXLINE( 775)			this->_regen = true;
            		}
HXLINE( 777)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_782_get_alignment)
HXDLIN( 782)		return ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(this->_defaultFormat->align);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment(::String Alignment){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_786_set_alignment)
HXLINE( 787)		this->_defaultFormat->align = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::toOpenFL(Alignment);
HXLINE( 788)		{
HXLINE( 788)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 788)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 788)			this->_regen = true;
            		}
HXLINE( 789)		return Alignment;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

 ::flixel::text::FlxTextBorderStyle FlxText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_793_set_borderStyle)
HXLINE( 794)		if (::hx::IsPointerNotEq( style,this->borderStyle )) {
HXLINE( 795)			this->_regen = true;
            		}
HXLINE( 797)		return (this->borderStyle = style);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor(int Color){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_801_set_borderColor)
HXLINE( 802)		bool _hx_tmp;
HXDLIN( 802)		if ((this->borderColor != Color)) {
HXLINE( 802)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 802)			_hx_tmp = false;
            		}
HXDLIN( 802)		if (_hx_tmp) {
HXLINE( 803)			this->_regen = true;
            		}
HXLINE( 804)		this->_hasBorderAlpha = ((( (Float)(((Color >> 24) & 255)) ) / ( (Float)(255) )) < 1);
HXLINE( 805)		return (this->borderColor = Color);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize(Float Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_809_set_borderSize)
HXLINE( 810)		bool _hx_tmp;
HXDLIN( 810)		if ((Value != this->borderSize)) {
HXLINE( 810)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 810)			_hx_tmp = false;
            		}
HXDLIN( 810)		if (_hx_tmp) {
HXLINE( 811)			this->_regen = true;
            		}
HXLINE( 813)		return (this->borderSize = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality(Float Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_817_set_borderQuality)
HXLINE( 818)		Float lowerBound;
HXDLIN( 818)		if ((Value < 0)) {
HXLINE( 818)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 818)			lowerBound = Value;
            		}
HXDLIN( 818)		if ((lowerBound > 1)) {
HXLINE( 818)			Value = ( (Float)(1) );
            		}
            		else {
HXLINE( 818)			Value = lowerBound;
            		}
HXLINE( 819)		bool _hx_tmp;
HXDLIN( 819)		if ((Value != this->borderQuality)) {
HXLINE( 819)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 819)			_hx_tmp = false;
            		}
HXDLIN( 819)		if (_hx_tmp) {
HXLINE( 820)			this->_regen = true;
            		}
HXLINE( 822)		return (this->borderQuality = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

 ::flixel::graphics::FlxGraphic FlxText_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_826_set_graphic)
HXLINE( 827)		 ::flixel::graphics::FlxGraphic oldGraphic = this->graphic;
HXLINE( 828)		 ::flixel::graphics::FlxGraphic graph = this->super::set_graphic(Value);
HXLINE( 829)		::flixel::FlxG_obj::bitmap->removeIfNoUse(oldGraphic);
HXLINE( 830)		return graph;
            	}


Float FlxText_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_834_get_width)
HXLINE( 835)		this->regenGraphic();
HXLINE( 836)		return this->super::get_width();
            	}


Float FlxText_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_840_get_height)
HXLINE( 841)		this->regenGraphic();
HXLINE( 842)		return this->super::get_height();
            	}


void FlxText_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_846_updateColorTransform)
HXLINE( 847)		if (::hx::IsNull( this->colorTransform )) {
HXLINE( 848)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 850)		if ((this->alpha != 1)) {
HXLINE( 852)			this->colorTransform->alphaMultiplier = this->alpha;
HXLINE( 853)			this->useColorTransform = true;
            		}
            		else {
HXLINE( 857)			this->colorTransform->alphaMultiplier = ( (Float)(1) );
HXLINE( 858)			this->useColorTransform = false;
            		}
HXLINE( 861)		this->dirty = true;
            	}


void FlxText_obj::regenGraphic(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_865_regenGraphic)
HXLINE( 866)		bool _hx_tmp;
HXDLIN( 866)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 866)			_hx_tmp = !(this->_regen);
            		}
            		else {
HXLINE( 866)			_hx_tmp = true;
            		}
HXDLIN( 866)		if (_hx_tmp) {
HXLINE( 867)			return;
            		}
HXLINE( 869)		int oldWidth = 0;
HXLINE( 870)		int oldHeight = 4;
HXLINE( 872)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 874)			oldWidth = this->graphic->width;
HXLINE( 875)			oldHeight = this->graphic->height;
            		}
HXLINE( 878)		int newWidth = ::Math_obj::ceil(this->textField->get_width());
HXLINE( 879)		Float textfieldHeight;
HXDLIN( 879)		if (this->_autoHeight) {
HXLINE( 879)			textfieldHeight = this->textField->get_textHeight();
            		}
            		else {
HXLINE( 879)			textfieldHeight = this->textField->get_height();
            		}
HXLINE( 880)		int vertGutter;
HXDLIN( 880)		if (this->_autoHeight) {
HXLINE( 880)			vertGutter = 4;
            		}
            		else {
HXLINE( 880)			vertGutter = 0;
            		}
HXLINE( 882)		int newHeight = (::Math_obj::ceil(textfieldHeight) + vertGutter);
HXLINE( 885)		if ((this->textField->get_textHeight() == 0)) {
HXLINE( 887)			newHeight = oldHeight;
            		}
HXLINE( 890)		bool _hx_tmp1;
HXDLIN( 890)		if ((oldWidth == newWidth)) {
HXLINE( 890)			_hx_tmp1 = (oldHeight != newHeight);
            		}
            		else {
HXLINE( 890)			_hx_tmp1 = true;
            		}
HXDLIN( 890)		if (_hx_tmp1) {
HXLINE( 893)			::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_("text",ad,cc,f9,4c));
HXLINE( 894)			this->makeGraphic(newWidth,newHeight,0,false,key);
HXLINE( 896)			if (this->_hasBorderAlpha) {
HXLINE( 897)				this->_borderPixels = this->graphic->bitmap->clone();
            			}
HXLINE( 899)			if (this->_autoHeight) {
HXLINE( 900)				this->textField->set_height(( (Float)(newHeight) ));
            			}
HXLINE( 902)			this->_flashRect->x = ( (Float)(0) );
HXLINE( 903)			this->_flashRect->y = ( (Float)(0) );
HXLINE( 904)			this->_flashRect->width = ( (Float)(newWidth) );
HXLINE( 905)			this->_flashRect->height = ( (Float)(newHeight) );
            		}
            		else {
HXLINE( 909)			this->graphic->bitmap->fillRect(this->_flashRect,0);
HXLINE( 910)			if (this->_hasBorderAlpha) {
HXLINE( 912)				if (::hx::IsNull( this->_borderPixels )) {
HXLINE( 913)					this->_borderPixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->frameWidth,this->frameHeight,true,null());
            				}
            				else {
HXLINE( 915)					this->_borderPixels->fillRect(this->_flashRect,0);
            				}
            			}
            		}
HXLINE( 919)		bool _hx_tmp2;
HXDLIN( 919)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 919)			_hx_tmp2 = ::hx::IsNotNull( this->textField->get_text() );
            		}
            		else {
HXLINE( 919)			_hx_tmp2 = false;
            		}
HXDLIN( 919)		if (_hx_tmp2) {
HXLINE( 922)			this->copyTextFormat(this->_defaultFormat,this->_formatAdjusted,null());
HXLINE( 924)			this->_matrix->identity();
HXLINE( 926)			this->applyBorderStyle();
HXLINE( 927)			if (this->_hasBorderAlpha) {
HXLINE( 927)				if (::hx::IsNull( this->_borderColorTransform )) {
HXLINE( 927)					this->_borderColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            				}
HXDLIN( 927)				this->_borderColorTransform->alphaMultiplier = (( (Float)(((this->borderColor >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 927)				this->_borderPixels->colorTransform(this->_borderPixels->rect,this->_borderColorTransform);
HXDLIN( 927)				this->graphic->bitmap->draw(this->_borderPixels,null(),null(),null(),null(),null());
            			}
HXLINE( 928)			this->applyFormats(this->_formatAdjusted,false);
HXLINE( 930)			this->drawTextFieldTo(this->graphic->bitmap);
            		}
HXLINE( 933)		this->_regen = false;
HXLINE( 934)		this->set_frame(this->frame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphic,(void))

void FlxText_obj::drawTextFieldTo( ::openfl::display::BitmapData graphic){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_941_drawTextFieldTo)
HXLINE( 969)		this->_matrix->translate(( (Float)(-1) ),( (Float)(-1) ));
HXLINE( 970)		graphic->draw(this->textField,this->_matrix,null(),null(),null(),null());
HXLINE( 971)		this->_matrix->translate(( (Float)(1) ),( (Float)(1) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,drawTextFieldTo,(void))

void FlxText_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_997_draw)
HXLINE( 998)		this->regenGraphic();
HXLINE( 999)		this->super::draw();
            	}


void FlxText_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1008_calcFrame)
HXLINE(1009)		if (::hx::IsNull( this->textField )) {
HXLINE(1010)			return;
            		}
HXLINE(1012)		bool _hx_tmp;
HXDLIN(1012)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1012)			_hx_tmp = !(RunOnCpp);
            		}
            		else {
HXLINE(1012)			_hx_tmp = false;
            		}
HXDLIN(1012)		if (_hx_tmp) {
HXLINE(1013)			return;
            		}
HXLINE(1015)		this->regenGraphic();
HXLINE(1016)		this->super::calcFrame(RunOnCpp);
            	}


void FlxText_obj::applyBorderStyle(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1020_applyBorderStyle)
HXLINE(1021)		int iterations = ::Std_obj::_hx_int((this->borderSize * this->borderQuality));
HXLINE(1022)		if ((iterations <= 0)) {
HXLINE(1024)			iterations = 1;
            		}
HXLINE(1026)		Float delta = (this->borderSize / ( (Float)(iterations) ));
HXLINE(1028)		switch((int)(this->borderStyle->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE(1033)				this->applyFormats(this->_formatAdjusted,true);
HXLINE(1035)				{
HXLINE(1035)					int _g = 0;
HXDLIN(1035)					int _g1 = iterations;
HXDLIN(1035)					while((_g < _g1)){
HXLINE(1035)						_g = (_g + 1);
HXDLIN(1035)						int i = (_g - 1);
HXLINE(1037)						{
HXLINE(1037)							 ::openfl::display::BitmapData graphic;
HXDLIN(1037)							if (this->_hasBorderAlpha) {
HXLINE(1037)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE(1037)								graphic = this->graphic->bitmap;
            							}
HXDLIN(1037)							this->_matrix->translate(delta,delta);
HXDLIN(1037)							this->drawTextFieldTo(graphic);
            						}
            					}
            				}
HXLINE(1040)				this->_matrix->translate((-(this->shadowOffset->x) * this->borderSize),(-(this->shadowOffset->y) * this->borderSize));
            			}
            			break;
            			case (int)2: {
HXLINE(1045)				this->applyFormats(this->_formatAdjusted,true);
HXLINE(1047)				Float curDelta = delta;
HXLINE(1048)				{
HXLINE(1048)					int _g = 0;
HXDLIN(1048)					int _g1 = iterations;
HXDLIN(1048)					while((_g < _g1)){
HXLINE(1048)						_g = (_g + 1);
HXDLIN(1048)						int i = (_g - 1);
HXLINE(1050)						{
HXLINE(1050)							 ::openfl::display::BitmapData graphic;
HXDLIN(1050)							if (this->_hasBorderAlpha) {
HXLINE(1050)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE(1050)								graphic = this->graphic->bitmap;
            							}
HXDLIN(1050)							this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN(1050)							this->drawTextFieldTo(graphic);
            						}
HXLINE(1051)						{
HXLINE(1051)							 ::openfl::display::BitmapData graphic1;
HXDLIN(1051)							if (this->_hasBorderAlpha) {
HXLINE(1051)								graphic1 = this->_borderPixels;
            							}
            							else {
HXLINE(1051)								graphic1 = this->graphic->bitmap;
            							}
HXDLIN(1051)							this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN(1051)							this->drawTextFieldTo(graphic1);
            						}
HXLINE(1052)						{
HXLINE(1052)							 ::openfl::display::BitmapData graphic2;
HXDLIN(1052)							if (this->_hasBorderAlpha) {
HXLINE(1052)								graphic2 = this->_borderPixels;
            							}
            							else {
HXLINE(1052)								graphic2 = this->graphic->bitmap;
            							}
HXDLIN(1052)							this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN(1052)							this->drawTextFieldTo(graphic2);
            						}
HXLINE(1053)						{
HXLINE(1053)							 ::openfl::display::BitmapData graphic3;
HXDLIN(1053)							if (this->_hasBorderAlpha) {
HXLINE(1053)								graphic3 = this->_borderPixels;
            							}
            							else {
HXLINE(1053)								graphic3 = this->graphic->bitmap;
            							}
HXDLIN(1053)							this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN(1053)							this->drawTextFieldTo(graphic3);
            						}
HXLINE(1054)						{
HXLINE(1054)							 ::openfl::display::BitmapData graphic4;
HXDLIN(1054)							if (this->_hasBorderAlpha) {
HXLINE(1054)								graphic4 = this->_borderPixels;
            							}
            							else {
HXLINE(1054)								graphic4 = this->graphic->bitmap;
            							}
HXDLIN(1054)							this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN(1054)							this->drawTextFieldTo(graphic4);
            						}
HXLINE(1055)						{
HXLINE(1055)							 ::openfl::display::BitmapData graphic5;
HXDLIN(1055)							if (this->_hasBorderAlpha) {
HXLINE(1055)								graphic5 = this->_borderPixels;
            							}
            							else {
HXLINE(1055)								graphic5 = this->graphic->bitmap;
            							}
HXDLIN(1055)							this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN(1055)							this->drawTextFieldTo(graphic5);
            						}
HXLINE(1056)						{
HXLINE(1056)							 ::openfl::display::BitmapData graphic6;
HXDLIN(1056)							if (this->_hasBorderAlpha) {
HXLINE(1056)								graphic6 = this->_borderPixels;
            							}
            							else {
HXLINE(1056)								graphic6 = this->graphic->bitmap;
            							}
HXDLIN(1056)							this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN(1056)							this->drawTextFieldTo(graphic6);
            						}
HXLINE(1057)						{
HXLINE(1057)							 ::openfl::display::BitmapData graphic7;
HXDLIN(1057)							if (this->_hasBorderAlpha) {
HXLINE(1057)								graphic7 = this->_borderPixels;
            							}
            							else {
HXLINE(1057)								graphic7 = this->graphic->bitmap;
            							}
HXDLIN(1057)							this->_matrix->translate(( (Float)(0) ),-(curDelta));
HXDLIN(1057)							this->drawTextFieldTo(graphic7);
            						}
HXLINE(1059)						this->_matrix->translate(curDelta,( (Float)(0) ));
HXLINE(1060)						curDelta = (curDelta + delta);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(1067)				this->applyFormats(this->_formatAdjusted,true);
HXLINE(1069)				Float curDelta = delta;
HXLINE(1070)				{
HXLINE(1070)					int _g = 0;
HXDLIN(1070)					int _g1 = iterations;
HXDLIN(1070)					while((_g < _g1)){
HXLINE(1070)						_g = (_g + 1);
HXDLIN(1070)						int i = (_g - 1);
HXLINE(1072)						{
HXLINE(1072)							 ::openfl::display::BitmapData graphic;
HXDLIN(1072)							if (this->_hasBorderAlpha) {
HXLINE(1072)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE(1072)								graphic = this->graphic->bitmap;
            							}
HXDLIN(1072)							this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN(1072)							this->drawTextFieldTo(graphic);
            						}
HXLINE(1073)						{
HXLINE(1073)							 ::openfl::display::BitmapData graphic1;
HXDLIN(1073)							if (this->_hasBorderAlpha) {
HXLINE(1073)								graphic1 = this->_borderPixels;
            							}
            							else {
HXLINE(1073)								graphic1 = this->graphic->bitmap;
            							}
HXDLIN(1073)							this->_matrix->translate((curDelta * ( (Float)(2) )),( (Float)(0) ));
HXDLIN(1073)							this->drawTextFieldTo(graphic1);
            						}
HXLINE(1074)						{
HXLINE(1074)							 ::openfl::display::BitmapData graphic2;
HXDLIN(1074)							if (this->_hasBorderAlpha) {
HXLINE(1074)								graphic2 = this->_borderPixels;
            							}
            							else {
HXLINE(1074)								graphic2 = this->graphic->bitmap;
            							}
HXDLIN(1074)							this->_matrix->translate(( (Float)(0) ),(curDelta * ( (Float)(2) )));
HXDLIN(1074)							this->drawTextFieldTo(graphic2);
            						}
HXLINE(1075)						{
HXLINE(1075)							 ::openfl::display::BitmapData graphic3;
HXDLIN(1075)							if (this->_hasBorderAlpha) {
HXLINE(1075)								graphic3 = this->_borderPixels;
            							}
            							else {
HXLINE(1075)								graphic3 = this->graphic->bitmap;
            							}
HXDLIN(1075)							this->_matrix->translate((-(curDelta) * ( (Float)(2) )),( (Float)(0) ));
HXDLIN(1075)							this->drawTextFieldTo(graphic3);
            						}
HXLINE(1077)						this->_matrix->translate(curDelta,-(curDelta));
HXLINE(1078)						curDelta = (curDelta + delta);
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderStyle,(void))

void FlxText_obj::applyBorderTransparency(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_1086_applyBorderTransparency)
HXLINE(1087)		if (!(this->_hasBorderAlpha)) {
HXLINE(1088)			return;
            		}
HXLINE(1090)		if (::hx::IsNull( this->_borderColorTransform )) {
HXLINE(1091)			this->_borderColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1093)		this->_borderColorTransform->alphaMultiplier = (( (Float)(((this->borderColor >> 24) & 255)) ) / ( (Float)(255) ));
HXLINE(1094)		this->_borderPixels->colorTransform(this->_borderPixels->rect,this->_borderColorTransform);
HXLINE(1095)		this->graphic->bitmap->draw(this->_borderPixels,null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderTransparency,(void))

void FlxText_obj::copyTextWithOffset(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1102_copyTextWithOffset)
HXLINE(1103)		 ::openfl::display::BitmapData graphic;
HXDLIN(1103)		if (this->_hasBorderAlpha) {
HXLINE(1103)			graphic = this->_borderPixels;
            		}
            		else {
HXLINE(1103)			graphic = this->graphic->bitmap;
            		}
HXLINE(1104)		this->_matrix->translate(x,y);
HXLINE(1105)		this->drawTextFieldTo(graphic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,copyTextWithOffset,(void))

void FlxText_obj::applyFormats( ::openfl::text::TextFormat FormatAdjusted,::hx::Null< bool >  __o_UseBorderColor){
            		bool UseBorderColor = __o_UseBorderColor.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1109_applyFormats)
HXLINE(1111)		this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
HXLINE(1112)		 ::Dynamic _hx_tmp;
HXDLIN(1112)		if (UseBorderColor) {
HXLINE(1112)			_hx_tmp = (this->borderColor & 16777215);
            		}
            		else {
HXLINE(1112)			_hx_tmp = this->_defaultFormat->color;
            		}
HXDLIN(1112)		FormatAdjusted->color = _hx_tmp;
HXLINE(1113)		this->textField->setTextFormat(FormatAdjusted,null(),null());
HXLINE(1116)		{
HXLINE(1116)			int _g = 0;
HXDLIN(1116)			::Array< ::Dynamic> _g1 = this->_formatRanges;
HXDLIN(1116)			while((_g < _g1->length)){
HXLINE(1116)				 ::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g1->__get(_g).StaticCast<  ::flixel::text::_FlxText::FlxTextFormatRange >();
HXDLIN(1116)				_g = (_g + 1);
HXLINE(1118)				int _hx_tmp = (this->textField->get_text().length - 1);
HXDLIN(1118)				if (::hx::IsLess( _hx_tmp,formatRange->range->start )) {
HXLINE(1121)					goto _hx_goto_66;
            				}
            				else {
HXLINE(1125)					 ::openfl::text::TextFormat textFormat = formatRange->format->format;
HXLINE(1126)					this->copyTextFormat(textFormat,FormatAdjusted,false);
HXLINE(1127)					 ::Dynamic _hx_tmp;
HXDLIN(1127)					if (UseBorderColor) {
HXLINE(1127)						_hx_tmp = (formatRange->format->borderColor & 16777215);
            					}
            					else {
HXLINE(1127)						_hx_tmp = textFormat->color;
            					}
HXDLIN(1127)					FormatAdjusted->color = _hx_tmp;
            				}
HXLINE(1130)				 ::openfl::text::TextField _hx_tmp1 = this->textField;
HXDLIN(1130)				int formatRange1 = ( (int)(formatRange->range->start) );
HXDLIN(1130)				int formatRange2 = ( (int)(formatRange->range->end) );
HXDLIN(1130)				_hx_tmp1->setTextFormat(FormatAdjusted,formatRange1,::Std_obj::_hx_int(::Math_obj::min(( (Float)(formatRange2) ),( (Float)(this->textField->get_text().length) ))));
            			}
            			_hx_goto_66:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

void FlxText_obj::copyTextFormat( ::openfl::text::TextFormat from, ::openfl::text::TextFormat to,::hx::Null< bool >  __o_withAlign){
            		bool withAlign = __o_withAlign.Default(true);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1135_copyTextFormat)
HXLINE(1136)		to->font = from->font;
HXLINE(1137)		to->bold = from->bold;
HXLINE(1138)		to->italic = from->italic;
HXLINE(1139)		to->underline = from->underline;
HXLINE(1140)		to->size = from->size;
HXLINE(1141)		to->color = from->color;
HXLINE(1142)		to->leading = from->leading;
HXLINE(1143)		if (withAlign) {
HXLINE(1144)			to->align = from->align;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,copyTextFormat,(void))

 ::openfl::text::TextFormat FlxText_obj::dtfCopy(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_1153_dtfCopy)
HXLINE(1154)		 ::openfl::text::TextFormat dtf = this->textField->get_defaultTextFormat();
HXLINE(1155)		return  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,dtf->font,dtf->size,dtf->color,dtf->bold,dtf->italic,dtf->underline,dtf->url,dtf->target,dtf->align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

void FlxText_obj::updateDefaultFormat(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1159_updateDefaultFormat)
HXLINE(1160)		this->textField->set_defaultTextFormat(this->_defaultFormat);
HXLINE(1161)		this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXLINE(1162)		this->_regen = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,updateDefaultFormat,(void))

 ::flixel::graphics::frames::FlxFramesCollection FlxText_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1166_set_frames)
HXLINE(1167)		this->super::set_frames(Frames);
HXLINE(1168)		this->_regen = false;
HXLINE(1169)		return Frames;
            	}


int FlxText_obj::VERTICAL_GUTTER;


::hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxText_obj > __this = new FlxText_obj();
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxText_obj > FlxText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxText_obj *__this = (FlxText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxText_obj), true, "flixel.text.FlxText"));
	*(void **)__this = FlxText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_autoHeight,"_autoHeight");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_MARK_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_MARK_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_autoHeight,"_autoHeight");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_VISIT_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_VISIT_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_font() ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bold() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return ::hx::Val( _font ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_italic() ); }
		if (HX_FIELD_EQ(inName,"_regen") ) { return ::hx::Val( _regen ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return ::hx::Val( dtfCopy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_embedded() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSize() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return ::hx::Val( get_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return ::hx::Val( set_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return ::hx::Val( get_bold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return ::hx::Val( set_bold_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_underline() ); }
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alignment() ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return ::hx::Val( drawFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return ::hx::Val( addFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return ::hx::Val( setFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_systemFont() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return ::hx::Val( borderSize ); }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fieldWidth() ); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return ::hx::Val( get_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return ::hx::Val( set_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return ::hx::Val( borderStyle ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"fieldHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fieldHeight() ); }
		if (HX_FIELD_EQ(inName,"_autoHeight") ) { return ::hx::Val( _autoHeight ); }
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return ::hx::Val( applyMarkup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return ::hx::Val( shadowOffset ); }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return ::hx::Val( stampOnAtlas_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return ::hx::Val( removeFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return ::hx::Val( clearFormats_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return ::hx::Val( set_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return ::hx::Val( get_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return ::hx::Val( get_embedded_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return ::hx::Val( regenGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return ::hx::Val( applyFormats_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_letterSpacing() ); }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return ::hx::Val( borderQuality ); }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { return ::hx::Val( _formatRanges ); }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { return ::hx::Val( _borderPixels ); }
		if (HX_FIELD_EQ(inName,"get_underline") ) { return ::hx::Val( get_underline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_underline") ) { return ::hx::Val( set_underline_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return ::hx::Val( get_alignment_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return ::hx::Val( set_alignment_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return ::hx::Val( _defaultFormat ); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return ::hx::Val( setBorderStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return ::hx::Val( set_fieldWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return ::hx::Val( get_fieldWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return ::hx::Val( get_systemFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return ::hx::Val( set_systemFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return ::hx::Val( set_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTextFormat") ) { return ::hx::Val( copyTextFormat_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return ::hx::Val( _formatAdjusted ); }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { return ::hx::Val( _hasBorderAlpha ); }
		if (HX_FIELD_EQ(inName,"getScreenBounds") ) { return ::hx::Val( getScreenBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fieldHeight") ) { return ::hx::Val( get_fieldHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fieldHeight") ) { return ::hx::Val( set_fieldHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return ::hx::Val( set_borderStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTextFieldTo") ) { return ::hx::Val( drawTextFieldTo_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyBorderStyle") ) { return ::hx::Val( applyBorderStyle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_letterSpacing") ) { return ::hx::Val( get_letterSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_letterSpacing") ) { return ::hx::Val( set_letterSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return ::hx::Val( set_borderQuality_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyTextWithOffset") ) { return ::hx::Val( copyTextWithOffset_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDefaultFormat") ) { return ::hx::Val( updateDefaultFormat_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { return ::hx::Val( _borderColorTransform ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"applyBorderTransparency") ) { return ::hx::Val( applyBorderTransparency_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_font(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bold(inValue.Cast< bool >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_italic(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSize(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_underline(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignment(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_systemFont(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderSize(inValue.Cast< Float >()) );borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldWidth(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderStyle(inValue.Cast<  ::flixel::text::FlxTextBorderStyle >()) );borderStyle=inValue.Cast<  ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast< int >()) );borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldHeight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_autoHeight") ) { _autoHeight=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_letterSpacing(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderQuality(inValue.Cast< Float >()) );borderQuality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { _formatRanges=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { _borderPixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { _hasBorderAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { _borderColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("letterSpacing",3d,b7,03,f5));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("embedded",8a,19,62,de));
	outFields->push(HX_("systemFont",5e,c4,43,f2));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("underline",0c,15,d1,87));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("alignment",e3,e2,3d,ea));
	outFields->push(HX_("borderStyle",a5,70,96,10));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("borderQuality",33,95,25,79));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("fieldWidth",ec,2e,e5,97));
	outFields->push(HX_("fieldHeight",41,58,f3,06));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("_autoHeight",d5,e5,a0,40));
	outFields->push(HX_("shadowOffset",93,fb,0b,dc));
	outFields->push(HX_("_defaultFormat",19,53,59,36));
	outFields->push(HX_("_formatAdjusted",a4,c9,b6,80));
	outFields->push(HX_("_formatRanges",8c,b9,14,d7));
	outFields->push(HX_("_font",ae,79,d1,f6));
	outFields->push(HX_("_regen",fe,75,a6,e2));
	outFields->push(HX_("_borderPixels",18,bc,51,cc));
	outFields->push(HX_("_borderColorTransform",74,07,2f,6f));
	outFields->push(HX_("_hasBorderAlpha",37,fe,f9,e8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxText_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxText_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxTextBorderStyle */ ,(int)offsetof(FlxText_obj,borderStyle),HX_("borderStyle",a5,70,96,10)},
	{::hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_("borderSize",cd,ff,ed,06)},
	{::hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_("borderQuality",33,95,25,79)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(FlxText_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_autoHeight),HX_("_autoHeight",d5,e5,a0,40)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxText_obj,shadowOffset),HX_("shadowOffset",93,fb,0b,dc)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_("_defaultFormat",19,53,59,36)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_("_formatAdjusted",a4,c9,b6,80)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxText_obj,_formatRanges),HX_("_formatRanges",8c,b9,14,d7)},
	{::hx::fsString,(int)offsetof(FlxText_obj,_font),HX_("_font",ae,79,d1,f6)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_regen),HX_("_regen",fe,75,a6,e2)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxText_obj,_borderPixels),HX_("_borderPixels",18,bc,51,cc)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxText_obj,_borderColorTransform),HX_("_borderColorTransform",74,07,2f,6f)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_hasBorderAlpha),HX_("_hasBorderAlpha",37,fe,f9,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxText_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxText_obj::VERTICAL_GUTTER,HX_("VERTICAL_GUTTER",04,b3,89,07)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxText_obj_sMemberFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("borderStyle",a5,70,96,10),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("borderSize",cd,ff,ed,06),
	HX_("borderQuality",33,95,25,79),
	HX_("textField",cd,24,81,99),
	HX_("_autoHeight",d5,e5,a0,40),
	HX_("shadowOffset",93,fb,0b,dc),
	HX_("_defaultFormat",19,53,59,36),
	HX_("_formatAdjusted",a4,c9,b6,80),
	HX_("_formatRanges",8c,b9,14,d7),
	HX_("_font",ae,79,d1,f6),
	HX_("_regen",fe,75,a6,e2),
	HX_("_borderPixels",18,bc,51,cc),
	HX_("_borderColorTransform",74,07,2f,6f),
	HX_("_hasBorderAlpha",37,fe,f9,e8),
	HX_("destroy",fa,2c,86,24),
	HX_("drawFrame",89,ad,8e,ce),
	HX_("stampOnAtlas",e9,f9,45,2b),
	HX_("applyMarkup",b6,43,6b,f6),
	HX_("addFormat",38,c4,b2,b5),
	HX_("removeFormat",9b,2a,bc,6c),
	HX_("clearFormats",4f,73,ad,ba),
	HX_("setFormat",79,04,36,5d),
	HX_("setBorderStyle",23,ac,54,b8),
	HX_("updateHitbox",81,94,eb,56),
	HX_("getScreenBounds",b7,e4,25,66),
	HX_("set_fieldWidth",a9,9f,fa,2d),
	HX_("get_fieldWidth",35,b7,da,0d),
	HX_("get_fieldHeight",d8,0f,d5,c7),
	HX_("set_fieldHeight",e4,8c,a0,c3),
	HX_("set_autoSize",4d,67,8c,f9),
	HX_("get_autoSize",d9,43,93,e4),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	HX_("get_letterSpacing",94,c2,73,fb),
	HX_("set_letterSpacing",a0,9a,e1,1e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_font",58,19,7b,c3),
	HX_("set_font",cc,72,d8,71),
	HX_("get_embedded",93,cd,7b,93),
	HX_("get_systemFont",a7,4c,39,68),
	HX_("set_systemFont",1b,35,59,88),
	HX_("get_bold",0e,3d,d6,c0),
	HX_("set_bold",82,96,33,6f),
	HX_("get_italic",b9,9e,eb,f6),
	HX_("set_italic",2d,3d,69,fa),
	HX_("get_underline",e3,e8,34,49),
	HX_("set_underline",ef,ca,3a,8e),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("get_alignment",ba,b6,a1,ab),
	HX_("set_alignment",c6,98,a7,f0),
	HX_("set_borderStyle",48,a5,43,cd),
	HX_("set_borderColor",7a,71,82,93),
	HX_("set_borderSize",8a,70,03,9d),
	HX_("set_borderQuality",96,78,03,a3),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("regenGraphic",6b,55,39,8b),
	HX_("drawTextFieldTo",04,9e,45,9d),
	HX_("draw",04,2c,70,42),
	HX_("calcFrame",58,93,8c,f9),
	HX_("applyBorderStyle",d7,bd,a2,48),
	HX_("applyBorderTransparency",32,96,af,17),
	HX_("copyTextWithOffset",db,97,6d,53),
	HX_("applyFormats",8e,0d,9c,1e),
	HX_("copyTextFormat",d9,63,8e,5f),
	HX_("dtfCopy",ab,51,45,87),
	HX_("updateDefaultFormat",0f,5b,8e,8b),
	HX_("set_frames",e3,bd,8a,a0),
	::String(null()) };

static void FlxText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#endif

::hx::Class FlxText_obj::__mClass;

static ::String FlxText_obj_sStaticFields[] = {
	HX_("VERTICAL_GUTTER",04,b3,89,07),
	::String(null())
};

void FlxText_obj::__register()
{
	FlxText_obj _hx_dummy;
	FlxText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text.FlxText",b0,4a,1b,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_49_boot)
HXDLIN(  49)		VERTICAL_GUTTER = 4;
            	}
}

} // end namespace flixel
} // end namespace text
