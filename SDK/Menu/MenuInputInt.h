#pragma once

#include <string>
#include <vector>

#include "../Definitions.h"
#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"

/// <summary>
/// Menu type input int.
/// </summary>
class DLL_API MenuInputInt : public IMenuType
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
	int Step;

	/// <summary>
	/// Idk what is it :v
	/// </summary>
	int StepFast;

	/// <summary>
	/// The events.
	/// </summary>
	std::shared_ptr<EventManager> Events;

	/// <summary>
	/// The config.
	/// </summary>
	ConfigInt* Config;

	MenuInputInt(std::string name, std::string displayName, int defaultValue = 0, int step = 1, int stepFast = 100);

	/// <summary>
	/// Get the current value of input.
	/// </summary>
	/// <returns></returns>
	int& GetValue();

	/// <summary>
	/// Set the current value of input.
	/// </summary>
	/// <param name="newValue"></param>
	void SetValue(int newValue);

	void OnDraw(void* sender);
};