#pragma once

#include "./IConfigType.h"

/// <summary>
/// Config type float.
/// </summary>
class DLL_API ConfigFloat : public IConfigType
{
	protected:

	float m_Value;

	public:

	ConfigFloat(std::string name, float defaultValue = 0.0f);

	/// <summary>
	/// Get the current value of config.
	/// </summary>
	/// <returns></returns>
	float& GetValue();

	/// <summary>
	/// Get a pointer to current value.
	/// </summary>
	/// <returns></returns>
	float* GetPtr();
};