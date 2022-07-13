#pragma once

#include "./IConfigType.h"

/// <summary>
/// Config type string.
/// </summary>
class DLL_API ConfigString : public IConfigType
{
	protected:

	std::string m_Value;

	public:

	ConfigString(std::string name, std::string defaultValue = "");

	/// <summary>
	/// Get the current value of config.
	/// </summary>
	/// <returns></returns>
	std::string& GetValue();

	/// <summary>
	/// Get a pointer to current value.
	/// </summary>
	/// <returns></returns>
	std::string* GetPtr();
};