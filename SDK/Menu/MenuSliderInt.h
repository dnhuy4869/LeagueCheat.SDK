#pragma once

#include <string>
#include <vector>

#include "../Definitions.h"
#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"

/// <summary>
/// Menu type slider int.
/// </summary>
class DLL_API MenuSliderInt : public IMenuType
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
	/// Min value of slider.
	/// </summary>
	int Min;

	/// <summary>
	/// Max value of slider.
	/// </summary>
	int Max;

	/// <summary>
	/// Format of value.
	/// </summary>
	std::string Format;

	/// <summary>
	/// The events.
	/// </summary>
	std::shared_ptr<EventManager> Events;

	/// <summary>
	/// The config.
	/// </summary>
	ConfigInt* Config;

	MenuSliderInt(std::string name, std::string displayName, int defaultValue = 0, int min = 0, int max = 100, std::string format = "%d");

	/// <summary>
	/// Get the current value of slider.
	/// </summary>
	/// <returns></returns>
	int& GetValue();

	/// <summary>
	/// Set the current value of slider.
	/// </summary>
	/// <param name="newValue"></param>
	void SetValue(int newValue);

	void OnDraw(void* sender);
};