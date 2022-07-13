#pragma once

#include <unordered_map>
#include <string>
#include <memory>

#include "../Definitions.h"
#include "./IMenuType.h"
#include "../EventManager.h"
#include "./MenuCheckbox.h"
#include "../ConfigManager/ConfigHeader.h"
#include "./MenuCombobox.h"
#include "../Definitions.h"
#include "./MenuInputInt.h"
#include "./MenuInputFloat.h"
#include "./MenuInputDouble.h"
#include "./MenuSliderInt.h"
#include "./MenuSliderFloat.h"
#include "./MenuColorEdit.h"
#include "./MenuButton.h"
#include "./MenuText.h"
#include "./MenuKeyPress.h"
#include "./MenuKeyDown.h"

#define MENU_MIN_WIDTH 340.0f

/// <summary>
/// Header components.
/// </summary>
class DLL_API MenuHeader : public IMenuType
{
	private:

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnDraw",
	};

	/// <summary>
	/// All menu components.
	/// </summary>
	std::unordered_map<std::string, std::shared_ptr<IMenuType>> m_AllComponents;

	public:

	/// <summary>
	/// The events.
	/// </summary>
	std::shared_ptr<EventManager> Events;

	/// <summary>
	/// The config.
	/// </summary>
	ConfigHeader* Config;

	MenuHeader(std::string name, std::string displayName);

	/// <summary>
	/// Add a component.
	/// </summary>
	///	Valid typename: MenuHeader, MenuCheckbox, MenuCombobox,
	///					MenuInputInt, MenuInputFloat, MenuInputDouble,
	///					MenuSliderInt, MenuSliderFloat, MenuColorEdit,
	///					MenuButton, MenuText, MenuKeyPress, MenuKeyDown
	/// <returns></returns>
	template <typename T>
	T* Add(T* menuType);

	/// <summary>
	/// Get a component.
	/// </summary>
	///	Valid typename: MenuHeader, MenuCheckbox, MenuCombobox,
	///					MenuInputInt, MenuInputFloat, MenuInputDouble,
	///					MenuSliderInt, MenuSliderFloat, MenuColorEdit,
	///					MenuButton, MenuText, MenuKeyPress, MenuKeyDown
	/// <param name="name"></param>
	/// <returns></returns>
	template <typename T>
	T* Get(const std::string& name);

	void OnDraw(void* sender);
};