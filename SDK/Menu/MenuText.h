#pragma once

#include <string>
#include <vector>

#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"
#include "../ConfigManager/ConfigBool.h"

/// <summary>
/// Menu type text.
/// </summary>
class DLL_API MenuText : public IMenuType
{
	private:

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnDraw"
	};

	public:

	/// <summary>
	/// The events.
	/// </summary>
	std::shared_ptr<EventManager> Events;

	MenuText(std::string name, std::string displayName);

	/// <summary>
	/// Get the current text.
	/// </summary>
	/// <returns></returns>
	std::string& GetValue();

	/// <summary>
	/// Set the current text.
	/// </summary>
	/// <returns></returns>
	void SetValue(std::string newValue);

	void OnDraw(void* sender);
};