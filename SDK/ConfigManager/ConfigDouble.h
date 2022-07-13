#pragma once

#include "./IConfigType.h"

/// <summary>
/// Config type double.
/// </summary>
class DLL_API ConfigDouble : public IConfigType
{
	protected:

	double m_Value;

	public:

	ConfigDouble(std::string name, double defaultValue = 0);

	/// <summary>
	/// Get the current value of config.
	/// </summary>
	/// <returns></returns>
	double& GetValue();

	/// <summary>
	/// Get a pointer to current value.
	/// </summary>
	/// <returns></returns>
	double* GetPtr();
};