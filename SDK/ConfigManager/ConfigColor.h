#pragma once

#include "./IConfigType.h"

/// <summary>
/// Config type color.
/// </summary>
class DLL_API ConfigColor : public IConfigType
{
	protected:

	float m_Value[3];

	public:

	ConfigColor(std::string name, int red = 255, int green = 255, int blue = 255);

	/// <summary>
	/// Get a pointer to current value.
	/// </summary>
	/// <returns></returns>
	float* GetPtr();
};