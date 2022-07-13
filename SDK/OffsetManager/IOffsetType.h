#pragma once

#include <string>

#include "../Definitions.h"
#include "./OffsetType.h"

class DLL_API IOffsetType abstract
{
	public:

	/// <summary>
	/// Offset name.
	/// </summary>
	std::string Name;

	/// <summary>
	/// Offset type.
	/// </summary>
	OffsetType Type;
};