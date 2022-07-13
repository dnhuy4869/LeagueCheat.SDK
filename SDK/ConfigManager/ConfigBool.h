#pragma once

#include "./IConfigType.h"

/// <summary>
/// Config type bool.
/// </summary>
class DLL_API ConfigBool : public IConfigType
{
	protected:

	bool m_Value;

	public:

	ConfigBool(std::string name, bool defaultValue = false);

	/// <summary>
	/// Get the current value of config.
	/// </summary>
	/// <returns></returns>
	bool& GetValue();

	/// <summary>
	/// Get a pointer to current value.
	/// </summary>
	/// <returns></returns>
	bool* GetPtr();
};