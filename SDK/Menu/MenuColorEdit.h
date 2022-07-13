#pragma once

#include <string>
#include <vector>

#include "../Definitions.h"
#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"

/// <summary>
/// Menu type color edit.
/// </summary>
class DLL_API MenuColorEdit : public IMenuType
{
	private:

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnDraw",
		"OnChange",
	};

	public:

	/// <summary>
	/// The events.
	/// </summary>
	std::shared_ptr<EventManager> Events;

	/// <summary>
	/// The config.
	/// </summary>
	ConfigColor* Config;

	MenuColorEdit(std::string name, std::string displayName, int red = 255, int green = 255, int blue = 255);

	/// <summary>
	/// Get the current value of color edit.
	/// </summary>
	/// <returns></returns>
	float* GetValue();

	/// <summary>
	/// Set the current value of color edit.
	/// </summary>
	/// <param name="newValue"></param>
	void SetValue(int red, int green, int blue);

	void OnDraw(void* sender);
};