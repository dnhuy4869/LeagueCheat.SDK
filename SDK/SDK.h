#pragma once

#include <Windows.h>
#include <string>

#include "./Definitions.h"
#include "./Drawing.h"
#include "./Menu/Menu.h"
#include "./ConfigManager/ConfigManager.h"
#include "./KeyInput/KeyInput.h"
#include "./NotificationType.h"
#include "./GameData/GameData.h"
#include "./Orbwalker/Orbwalker.h"
#include "./OffsetManager/OffsetManager.h"
#include "./Math/Math.h"
#include "./TargetSelector.h"

/// <summary>
///	The static class provide global access to all instance in SDK.
/// </summary>
class DLL_API SDK abstract final
{
	private:

	/// <summary>
	/// Define if SDK is initialized or not.
	/// </summary>
	inline static bool m_bInitialized = false;

	public:

	/// <summary>
	/// Drawing instance.
	/// </summary>
	inline static std::shared_ptr<Drawing> Drawing;

	/// <summary>
	/// Config instance.
	/// </summary>
	inline static std::shared_ptr<ConfigManager> Configs;

	/// <summary>
	/// Menu instance.
	/// </summary>
	inline static std::shared_ptr<Menu> Menu;

	/// <summary>
	/// Input instance.
	/// </summary>
	inline static std::shared_ptr<KeyInput> Inputs;

	/// <summary>
	/// Offsets instance.
	/// </summary>
	inline static std::shared_ptr<OffsetManager> Offsets;

	/// <summary>
	/// Data instance.
	/// </summary>
	inline static std::shared_ptr<GameData> Data;

	/// <summary>
	/// The orbwalker.
	/// </summary>
	inline static std::shared_ptr<Orbwalker> Orbwalker;

	/// <summary>
	/// The math.
	/// </summary>
	inline static std::shared_ptr<Math> Math;

	/// <summary>
	/// The target selector.
	/// </summary>
	inline static std::shared_ptr<TargetSelector> TargetSelector;

	/// <summary>
	/// Initialize SDK.
	/// </summary>
	/// <returns></returns>
	static bool Initialize();

	/// <summary>
	/// Dispose SDK.
	/// </summary>
	/// <returns></returns>
	static bool Dispose();

	/// <summary>
	/// Log a message in console loader.
	/// </summary>
	static void ConsoleLog(const std::string& message);

	/// <summary>
	/// Show a notification message.
	/// </summary>
	static void ShowNotification(NotificationType type, int duration, const std::string& message);
};