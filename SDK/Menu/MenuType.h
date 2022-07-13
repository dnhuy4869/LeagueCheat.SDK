#pragma once

#include "../Definitions.h"

/// <summary>
/// All menu components type.
/// </summary>
enum class DLL_API MenuType
{
	MenuHeader,
	MenuCheckbox,
	MenuCombobox,
	MenuInputInt,
	MenuInputFloat,
	MenuInputDouble,
	MenuSliderInt,
	MenuSliderFloat,
	MenuColorEdit,
	MenuButton,
	MenuText,
	MenuKeyPress,
	MenuKeyDown,
};