#pragma once

#include <string>
#include <vector>

#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"
#include "../ConfigManager/ConfigBool.h"

/// <summary>
/// Menu type checkbox.
/// </summary>
class DLL_API MenuCheckbox : public IMenuType
{
	private:

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnDraw",
		"OnClick",
	};

	public:

	/// <summary>
	/// The events.
	/// </summary>
	std::shared_ptr<EventManager> Events;

	/// <summary>
	/// The config.
	/// </summary>
	ConfigBool* Config;

	MenuCheckbox(std::string name, std::string displayName, bool defaultValue = false);

	/// <summary>
	/// Get the current value of checkbox.
	/// </summary>
	/// <returns></returns>
	bool& GetValue();

	/// <summary>
	/// Set the current value of checkbox.
	/// </summary>
	/// <param name="newValue"></param>
	void SetValue(bool newValue);

	/// <summary>
	/// Check if checkbox is checked or not.
	/// </summary>
	/// <returns>true if checked, otherwise false.</returns>
	bool IsActive();

	void OnDraw(void* sender);
};