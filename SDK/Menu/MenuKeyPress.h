#pragma once

#include <string>
#include <vector>

#include "../Definitions.h"
#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"

/// <summary>
/// Menu type key press.
/// </summary>
class DLL_API MenuKeyPress : public IMenuType
{
	private:

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnDraw",
	};

	public:

	std::string ButtonLabel;

	/// <summary>
	/// The events.
	/// </summary>
	std::shared_ptr<EventManager> Events;

	/// <summary>
	/// The config.
	/// </summary>
	ConfigKey* Config;

	MenuKeyPress(std::string name, std::string displayName, VirtualKey defaultValue = VirtualKey::None);

	/// <summary>
	/// Get the current key.
	/// </summary>
	/// <returns></returns>
	VirtualKey& GetValue();

	/// <summary>
	/// Set the current key.
	/// </summary>
	/// <param name="newValue"></param>
	void SetValue(VirtualKey newValue);

	/// <summary>
	/// Check if key is active or not.
	/// </summary>
	/// <returns></returns>
	bool IsActive();

	void OnDraw(void* sender);
};