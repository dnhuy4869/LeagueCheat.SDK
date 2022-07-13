#pragma once

#include <Windows.h>

#include "./IOffsetType.h"

/// <summary>
/// Offset value.
/// </summary>
class DLL_API OffsetValue : public IOffsetType
{
	protected:

	DWORD m_Value;

	public:

	OffsetValue(std::string name, DWORD defaultValue = 0);

	/// <summary>
	/// Get the current value.
	/// </summary>
	/// <returns></returns>
	DWORD& GetValue();
};