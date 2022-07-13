#pragma once

#include <string>
#include <Windows.h>
#include <unordered_map>
#include <vector>

#include "./Interfaces/IUnique.h"
#include "./Interfaces/IDisposable.h"
#include "./Math/Vector3.h"
#include "./Math/Vector2.h"
#include "./EventManager.h"

/// <summary>
/// Define new type for drawing color.
/// </summary>
typedef Vector3 DrawingColor;

/// <summary>
/// The class provides all drawing method.
/// </summary>
class DLL_API Drawing : public IUnique<Drawing>, public IDisposable
{
	private:

	/// <summary>
	/// All basic drawing colors.
	/// </summary>
	struct DLL_API DrawingColors
	{
		const DrawingColor Maroon = DrawingColor(128, 0, 0);
		const DrawingColor DarkRed = DrawingColor(139, 0, 0);
		const DrawingColor Brown = DrawingColor(165, 42, 42);
		const DrawingColor Firebrick = DrawingColor(178, 34, 34);
		const DrawingColor Crimson = DrawingColor(220, 20, 60);
		const DrawingColor Red = DrawingColor(255, 0, 0);
		const DrawingColor Tomato = DrawingColor(255, 99, 71);
		const DrawingColor Coral = DrawingColor(255, 127, 80);
		const DrawingColor IndianRed = DrawingColor(205, 92, 92);
		const DrawingColor LightCoral = DrawingColor(240, 128, 128);
		const DrawingColor DarkSalmon = DrawingColor(233, 150, 122);
		const DrawingColor Salmon = DrawingColor(250, 128, 114);
		const DrawingColor LightSalmon = DrawingColor(255, 160, 122);
		const DrawingColor OrangeRed = DrawingColor(255, 69, 0);
		const DrawingColor DarkOrange = DrawingColor(255, 140, 0);
		const DrawingColor Orange = DrawingColor(255, 165, 0);
		const DrawingColor Gold = DrawingColor(255, 215, 0);
		const DrawingColor DarkGoldenRod = DrawingColor(184, 134, 11);
		const DrawingColor GoldenRod = DrawingColor(218, 165, 32);
		const DrawingColor PaleGoldenRod = DrawingColor(238, 232, 170);
		const DrawingColor DarkKhaki = DrawingColor(189, 183, 107);
		const DrawingColor Khaki = DrawingColor(240, 230, 140);
		const DrawingColor Olive = DrawingColor(128, 128, 0);
		const DrawingColor Yellow = DrawingColor(255, 255, 0);
		const DrawingColor YellowGreen = DrawingColor(154, 205, 50);
		const DrawingColor DarkOliveGreen = DrawingColor(85, 107, 47);
		const DrawingColor OliveDrab = DrawingColor(107, 142, 35);
		const DrawingColor LawnGreen = DrawingColor(124, 252, 0);
		const DrawingColor Chartreuse = DrawingColor(127, 255, 0);
		const DrawingColor GreenYellow = DrawingColor(173, 255, 47);
		const DrawingColor DarkGreen = DrawingColor(0, 100, 0);
		const DrawingColor Green = DrawingColor(0, 128, 0);
		const DrawingColor ForestGreen = DrawingColor(34, 139, 34);
		const DrawingColor Lime = DrawingColor(0, 255, 0);
		const DrawingColor LimeGreen = DrawingColor(50, 205, 50);
		const DrawingColor LightGreen = DrawingColor(144, 238, 144);
		const DrawingColor PaleGreen = DrawingColor(152, 251, 152);
		const DrawingColor DarkSeaGreen = DrawingColor(143, 188, 143);
		const DrawingColor MediumSpringGreen = DrawingColor(0, 250, 154);
		const DrawingColor SpringGreen = DrawingColor(0, 255, 127);
		const DrawingColor SeaGreen = DrawingColor(46, 139, 87);
		const DrawingColor MediumAquaMarine = DrawingColor(102, 205, 170);
		const DrawingColor MediumSeaGreen = DrawingColor(60, 179, 113);
		const DrawingColor LightSeaGreen = DrawingColor(32, 178, 170);
		const DrawingColor DarkSlateGray = DrawingColor(47, 79, 79);
		const DrawingColor Teal = DrawingColor(0, 128, 128);
		const DrawingColor DarkCyan = DrawingColor(0, 139, 139);
		const DrawingColor Aqua = DrawingColor(0, 255, 255);
		const DrawingColor Cyan = DrawingColor(0, 255, 255);
		const DrawingColor LightCyan = DrawingColor(224, 255, 255);
		const DrawingColor DarkTurquoise = DrawingColor(0, 206, 209);
		const DrawingColor Turquoise = DrawingColor(64, 224, 208);
		const DrawingColor MediumTurquoise = DrawingColor(72, 209, 204);
		const DrawingColor PaleTurquoise = DrawingColor(175, 238, 238);
		const DrawingColor AquaMarine = DrawingColor(127, 255, 212);
		const DrawingColor PowderBlue = DrawingColor(176, 224, 230);
		const DrawingColor CadetBlue = DrawingColor(95, 158, 160);
		const DrawingColor SteelBlue = DrawingColor(70, 130, 180);
		const DrawingColor CornFlowerBlue = DrawingColor(100, 149, 237);
		const DrawingColor DeepSkyBlue = DrawingColor(0, 191, 255);
		const DrawingColor DodgerBlue = DrawingColor(30, 144, 255);
		const DrawingColor LightBlue = DrawingColor(173, 216, 230);
		const DrawingColor SkyBlue = DrawingColor(135, 206, 235);
		const DrawingColor LightSkyBlue = DrawingColor(135, 206, 250);
		const DrawingColor MidnightBlue = DrawingColor(25, 25, 112);
		const DrawingColor Navy = DrawingColor(0, 0, 128);
		const DrawingColor DarkBlue = DrawingColor(0, 0, 139);
		const DrawingColor MediumBlue = DrawingColor(0, 0, 205);
		const DrawingColor Blue = DrawingColor(0, 0, 255);
		const DrawingColor RoyalBlue = DrawingColor(65, 105, 225);
		const DrawingColor BlueViolet = DrawingColor(138, 43, 226);
		const DrawingColor Indigo = DrawingColor(75, 0, 130);
		const DrawingColor DarkSlateBlue = DrawingColor(72, 61, 139);
		const DrawingColor SlateBlue = DrawingColor(106, 90, 205);
		const DrawingColor MediumSlateBlue = DrawingColor(123, 104, 238);
		const DrawingColor MediumPurple = DrawingColor(147, 112, 219);
		const DrawingColor DarkMagenta = DrawingColor(139, 0, 139);
		const DrawingColor DarkViolet = DrawingColor(148, 0, 211);
		const DrawingColor DarkOrchid = DrawingColor(153, 50, 204);
		const DrawingColor MediumOrchid = DrawingColor(186, 85, 211);
		const DrawingColor Purple = DrawingColor(128, 0, 128);
		const DrawingColor Thistle = DrawingColor(216, 191, 216);
		const DrawingColor Plum = DrawingColor(221, 160, 221);
		const DrawingColor Violet = DrawingColor(238, 130, 238);
		const DrawingColor Magenta = DrawingColor(255, 0, 255);
		const DrawingColor Orchid = DrawingColor(218, 112, 214);
		const DrawingColor MediumVioletRed = DrawingColor(199, 21, 133);
		const DrawingColor PaleVioletRed = DrawingColor(219, 112, 147);
		const DrawingColor DeepPink = DrawingColor(255, 20, 147);
		const DrawingColor HotPink = DrawingColor(255, 105, 180);
		const DrawingColor LightPink = DrawingColor(255, 182, 193);
		const DrawingColor Pink = DrawingColor(255, 192, 203);
		const DrawingColor AntiqueWhite = DrawingColor(250, 235, 215);
		const DrawingColor Beige = DrawingColor(245, 245, 220);
		const DrawingColor Bisque = DrawingColor(255, 228, 196);
		const DrawingColor BlanchedAlmond = DrawingColor(255, 235, 205);
		const DrawingColor Wheat = DrawingColor(245, 222, 179);
		const DrawingColor CornSilk = DrawingColor(255, 248, 220);
		const DrawingColor LemonChiffon = DrawingColor(255, 250, 205);
		const DrawingColor LightGoldenRodYellow = DrawingColor(250, 250, 210);
		const DrawingColor LightYellow = DrawingColor(255, 255, 224);
		const DrawingColor SaddleBrown = DrawingColor(139, 69, 19);
		const DrawingColor Sienna = DrawingColor(160, 82, 45);
		const DrawingColor Chocolate = DrawingColor(210, 105, 30);
		const DrawingColor Peru = DrawingColor(205, 133, 63);
		const DrawingColor SandyBrown = DrawingColor(244, 164, 96);
		const DrawingColor BurlyWood = DrawingColor(222, 184, 135);
		const DrawingColor Tan = DrawingColor(210, 180, 140);
		const DrawingColor RosyBrown = DrawingColor(188, 143, 143);
		const DrawingColor Moccasin = DrawingColor(255, 228, 181);
		const DrawingColor NavajoWhite = DrawingColor(255, 222, 173);
		const DrawingColor PeachPuff = DrawingColor(255, 218, 185);
		const DrawingColor MistyRose = DrawingColor(255, 228, 225);
		const DrawingColor LavenderBlush = DrawingColor(255, 240, 245);
		const DrawingColor Linen = DrawingColor(250, 240, 230);
		const DrawingColor OldLace = DrawingColor(253, 245, 230);
		const DrawingColor PapayaWhip = DrawingColor(255, 239, 213);
		const DrawingColor SeaShell = DrawingColor(255, 245, 238);
		const DrawingColor MintCream = DrawingColor(245, 255, 250);
		const DrawingColor SlateGray = DrawingColor(112, 128, 144);
		const DrawingColor LightSlateGray = DrawingColor(119, 136, 153);
		const DrawingColor LightSteelBlue = DrawingColor(176, 196, 222);
		const DrawingColor Lavender = DrawingColor(230, 230, 250);
		const DrawingColor FloralWhite = DrawingColor(255, 250, 240);
		const DrawingColor AliceBlue = DrawingColor(240, 248, 255);
		const DrawingColor GhostWhite = DrawingColor(248, 248, 255);
		const DrawingColor Honeydew = DrawingColor(240, 255, 240);
		const DrawingColor Ivory = DrawingColor(255, 255, 240);
		const DrawingColor Azure = DrawingColor(240, 255, 255);
		const DrawingColor Snow = DrawingColor(255, 250, 250);
		const DrawingColor Black = DrawingColor(0, 0, 0);
		const DrawingColor DimGray = DrawingColor(105, 105, 105);
		const DrawingColor Gray = DrawingColor(128, 128, 128);
		const DrawingColor DarkGray = DrawingColor(169, 169, 169);
		const DrawingColor Silver = DrawingColor(192, 192, 192);
		const DrawingColor LightGray = DrawingColor(211, 211, 211);
		const DrawingColor Gainsboro = DrawingColor(220, 220, 220);
		const DrawingColor WhiteSmoke = DrawingColor(245, 245, 245);
		const DrawingColor White = DrawingColor(255, 255, 255);
	};

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnDraw",
	};

	/// <summary>
	/// Default constructor.
	/// </summary>
	Drawing();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~Drawing();

	public:

	friend class IUnique<Drawing>;

	/// <summary>
	/// The colors.
	/// </summary>
	inline static std::shared_ptr<DrawingColors> Colors;

	/// <summary>
	/// All events.
	/// </summary>
	inline static std::shared_ptr<EventManager> Events;

	/// <summary>
	/// Intialize resources.
	/// </summary>
	/// <returns></returns>
	bool Initialize() override;

	/// <summary>
	/// Dispose resources.
	/// </summary>
	/// <returns></returns>
	bool Dispose() override;

	/// <summary>
	/// Get FPS of game.
	/// </summary>
	static float GetFrameRate();

	/// <summary>
	/// Get time per frame (ms).
	/// </summary>
	/// <returns></returns>
	static float GetFrameTime();

	/// <summary>
	/// Get window size.
	/// </summary>
	/// <returns></returns>
	static Vector2 GetWindowSize();

	/// <summary>
	/// Get window width.
	/// </summary>
	/// <returns></returns>
	static float GetWindowWidth();

	/// <summary>
	/// Get window height.
	/// </summary>
	/// <returns></returns>
	static float GetWindowHeight();

	/// <summary>
	/// Draw a line on screen.
	/// </summary>
	/// <param name="x1">X coordinate of point 1</param>
	/// <param name="y1">Y coordinate of point 1</param>
	/// <param name="x2">X coordinate of point 2</param>
	/// <param name="y2">Y coordinate of point 2</param>
	/// <param name="color">Color of line</param>
	/// <param name="thickness">Thickness of line</param>
	static void AddLine(const float& x1, const float& y1, const float& x2, const float& y2, const DrawingColor& color, const float& thickness = 1.0f);

	/// <summary>
	/// Draw a line on screen.
	/// </summary>
	/// <param name="point1">Point 1 of line</param>
	/// <param name="point2">Point 2 of line</param>
	/// <param name="color">Color of line</param>
	/// <param name="thickness">Thickness of line</param>
	static void AddLine(const Vector2& point1, const Vector2& point2, const DrawingColor& color, const float& thickness = 1.0f);

	/// <summary>
	/// Draw a circle on screen.
	/// </summary>
	/// <param name="x">X coordinate of center circle</param>
	/// <param name="y">Y coordinate of center circle</param>
	/// <param name="radius">Radius of circle</param>
	/// <param name="color">Color of circle</param>
	/// <param name="thickness">Thickness of circle</param>
	static void AddCircle(const float& x, const float& y, const float& radius, const DrawingColor& color, const float& thickness = 1.0f);

	/// <summary>
	/// Draw a circle on screen.
	/// </summary>
	/// <param name="center">Center point of circle</param>
	/// <param name="radius">Radius of circle</param>
	/// <param name="color">Color of circle</param>
	/// <param name="thickness">Thickness of circle</param>
	static void AddCircle(const Vector2& center, const float& radius, const DrawingColor& color, const float& thickness = 1.0f);

	/// <summary>
	/// Draw a rectangle on screen.
	/// </summary>
	/// <param name="x">X left-top coordinate of rectangle</param>
	/// <param name="y">Y left-top coordinate of rectangle</param>
	/// <param name="width">Width of rectangle</param>
	/// <param name="height">Height of rectangle</param>
	/// <param name="color">Color of rectangle</param>
	/// <param name="thickness">Thickness of rectangle</param>
	static void AddRect(const float& x, const float& y, const float& width, const float& height, const DrawingColor& color, const float& thickness = 1.0f);

	/// <summary>
	/// Draw a rectangle on screen.
	/// </summary>
	/// <param name="min">Min point of rectangle</param>
	/// <param name="max">Max point of rectangle</param>
	/// <param name="color">Color of rectanglle</param>
	/// <param name="thickness">Thickness of rectangle</param>
	static void AddRect(const Vector2& min, const Vector2& max, const DrawingColor& color, const float& thickness = 1.0f);

	/// <summary>
	/// Draw a filled rectangle on screen.
	/// </summary>
	/// <param name="x">X left-top coordinate of rectangle</param>
	/// <param name="y">Y left-top coordinate of rectangle</param>
	/// <param name="width">Width of rectangle</param>
	/// <param name="height">Height of rectangle</param>
	/// <param name="color">Filled color of rectangle</param>
	static void AddRectFilled(const float& x, const float& y, const float& width, const float& height, const DrawingColor& color);

	/// <summary>
	/// Draw a filled rectangle on screen.
	/// </summary>
	/// <param name="min">Min point of rectangle</param>
	/// <param name="max">Max point of rectangle</param>
	/// <param name="color">Filled color of rectangle</param>
	static void AddRectFilled(const Vector2& min, const Vector2& max, const DrawingColor& color);

	/// <summary>
	/// Draw a text on screen.
	/// </summary>
	/// <param name="fontSize">Font size of text</param>
	/// <param name="text">Text to draw</param>
	/// <param name="x">X coordinate of text</param>
	/// <param name="y">Y coordinate of text</param>
	/// <param name="color">Color of text</param>
	/// <param name="bCenter">Text is centerd or not</param>
	static void AddText(const std::string& text, const float& x, const float& y, const DrawingColor& color, const bool& bCenter = false, const float& fontSize = 20.0f);

	/// <summary>
	/// Draw a text on screen.
	/// </summary>
	/// <param name="fontSize">Font size of text</param>
	/// <param name="text">Text to draw</param>
	/// <param name="pos">Coordinate of text</param>
	/// <param name="color">Color of text</param>
	/// <param name="bCenter">Text is centerd or not</param>
	static void AddText(const std::string& text, const Vector2& pos, const DrawingColor& color, const bool& bCenter = false, const float& fontSize = 20.0f);

	/// <summary>
	/// Draw a circle 3D on screen.
	/// </summary>
	/// <param name="worldPos">3D position</param>
	/// <param name="radius">Radius of circle</param>
	/// <param name="color">Color of circle</param>
	/// <param name="thickness">Thickness of circle</param>
	static void AddCircle3D(const Vector3& worldPos, const float& radius, const DrawingColor& color, const float& thickness = 1.0f);
};