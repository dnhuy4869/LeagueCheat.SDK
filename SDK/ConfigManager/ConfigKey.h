#pragma once

#include "./IConfigType.h"
#include "../KeyInput/VirtualKey.h"

/// <summary>
/// Config type key.
/// </summary>
class DLL_API ConfigKey : public IConfigType
{
	protected:

	VirtualKey m_Value;

	public:

	ConfigKey(std::string name, VirtualKey defaultValue = VirtualKey::None);

	/// <summary>
	/// Get the current value of config.
	/// </summary>
	/// <returns></returns>
	VirtualKey& GetValue();

	/// <summary>
	/// Get a pointer to current value.
	/// </summary>
	/// <returns></returns>
	VirtualKey* GetPtr();
};