#pragma once

#include <string>
#include <vector>

#include "../Definitions.h"
#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"

/// <summary>
/// Menu type slider float.
/// </summary>
class DLL_API MenuSliderFloat : public IMenuType
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
	float Min;

	/// <summary>
	/// Max value of slider.
	/// </summary>
	float Max;

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
	ConfigFloat* Config;

	MenuSliderFloat(std::string name, std::string displayName, float defaultValue = 0.0f, float min = 0.0f, float max = 100.0f, std::string format = "%.3f");

	/// <summary>
	/// Get the current value of slider.
	/// </summary>
	/// <returns></returns>
	float& GetValue();

	/// <summary>
	/// Set the current value of slider.
	/// </summary>
	/// <param name="newValue"></param>
	void SetValue(float newValue);

	void OnDraw(void* sender);
};