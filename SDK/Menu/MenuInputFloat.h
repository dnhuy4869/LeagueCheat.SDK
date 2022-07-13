#pragma once

#include <string>
#include <vector>

#include "../Definitions.h"
#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"

/// <summary>
/// Menu type input float.
/// </summary>
class DLL_API MenuInputFloat : public IMenuType
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
	/// Value that change per step.
	/// </summary>
	float Step;

	/// <summary>
	/// Idk what is it :v
	/// </summary>
	float StepFast;

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

	MenuInputFloat(std::string name, std::string displayName, float defaultValue = 0.0f, float step = 0.0f, float stepFast = 0.0f, std::string format = "%.3f");

	/// <summary>
	/// Get the current value of input.
	/// </summary>
	/// <returns></returns>
	float& GetValue();

	/// <summary>
	/// Set the current value of input.
	/// </summary>
	/// <param name="newValue"></param>
	void SetValue(float newValue);

	void OnDraw(void* sender);
};