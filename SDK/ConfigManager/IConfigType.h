#pragma once

#include <string>

#include "./ConfigType.h"
#include "../Definitions.h"

class DLL_API IConfigType abstract
{
	public:

	/// <summary>
	/// The config name.
	/// </summary>
	std::string Name;

	/// <summary>
	/// The config type.
	/// </summary>
	ConfigType Type;
};