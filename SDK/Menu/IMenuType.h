#pragma once

#include "./MenuType.h"

/// <summary>
/// Interface for menu components.
/// </summary>
class DLL_API IMenuType abstract
{
	public:

	/// <summary>
	/// Type of components.
	/// </summary>
	MenuType Type;

	/// <summary>
	/// Unique ID of components.
	/// </summary>
	std::string Name;

	/// <summary>
	/// Text to display.
	/// </summary>
	std::string DisplayName;

	/// <summary>
	/// Combination between Name and DisplayName.
	/// </summary>
	std::string Label;
};