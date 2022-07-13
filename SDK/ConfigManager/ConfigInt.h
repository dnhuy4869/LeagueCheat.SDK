#pragma once

#include "./IConfigType.h"

/// <summary>
/// Config type int.
/// </summary>
class DLL_API ConfigInt : public IConfigType
{
	protected:

	int m_Value;

	public:

	ConfigInt(std::string name, int defaultValue = 0);

	/// <summary>
	/// Get the current value of config.
	/// </summary>
	/// <returns></returns>
	int& GetValue();

	/// <summary>
	/// Get a pointer to current value.
	/// </summary>
	/// <returns></returns>
	int* GetPtr();
};