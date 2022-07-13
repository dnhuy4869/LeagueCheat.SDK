#pragma once

#include <string>
#include <vector>

#include "../Definitions.h"
#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"

/// <summary>
/// Menu type input double.
/// </summary>
class DLL_API MenuInputDouble : public IMenuType
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
	double Step;

	/// <summary>
	/// Idk what is it :v
	/// </summary>
	double StepFast;

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
	ConfigDouble* Config;

	MenuInputDouble(std::string name, std::string displayName, double defaultValue = 0.0f, double step = 0.0f, double stepFast = 0.0f, std::string format = "%.6f");

	/// <summary>
	/// Get the current value of input.
	/// </summary>
	/// <returns></returns>
	double& GetValue();

	/// <summary>
	/// Set the current value of input.
	/// </summary>
	/// <param name="newValue"></param>
	void SetValue(double newValue);

	void OnDraw(void* sender);
};