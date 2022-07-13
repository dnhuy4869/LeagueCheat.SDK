#pragma once

#include <string>
#include <vector>

#include "./IMenuType.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"
#include "../ConfigManager/ConfigBool.h"

/// <summary>
/// Menu type button.
/// </summary>
class DLL_API MenuButton : public IMenuType
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

	MenuButton(std::string name, std::string displayName);

	void OnDraw(void* sender);
};