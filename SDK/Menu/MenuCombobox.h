#pragma once

#include <vector>
#include <string>

#include "./IMenuType.h"
#include "../ConfigManager/ConfigInt.h"
#include "../EventManager.h"
#include "../ConfigManager/ConfigHeader.h"

/// <summary>
/// Menu type combobox.
/// </summary>
class DLL_API MenuCombobox : public IMenuType
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
	/// All item in combobox.
	/// </summary>
	const char** Items;

	/// <summary>
	/// Total items in combobox.
	/// </summary>
	int ItemsCount;

	/// <summary>
	/// The events.
	/// </summary>
	std::shared_ptr<EventManager> Events;

	/// <summary>
	/// The config.
	/// </summary>
	ConfigInt* Config;

	MenuCombobox(std::string name, std::string displayName, const char* items[], int itemsCount);

	/// <summary>
	/// Get the current index item.
	/// </summary>
	/// <returns></returns>
	int& GetItem();

	/// <summary>
	/// Set the current index item.
	/// </summary>
	/// <param name="newItem"></param>
	void SetItem(int newItem);

	void OnDraw(void* sender);
};