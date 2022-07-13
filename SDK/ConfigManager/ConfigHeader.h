#pragma once

#include <Windows.h>
#include <string>
#include <unordered_map>
#include <memory>
#include <variant>
#include <iostream>
#include <type_traits>

#include "./IConfigType.h"
#include "./ConfigInt.h"
#include "./ConfigBool.h"
#include "./ConfigFloat.h"
#include "./ConfigDouble.h"
#include "./ConfigColor.h"
#include "./ConfigString.h"
#include "./ConfigKey.h"

/// <summary>
/// Config header contains all others config type.
/// </summary>
class DLL_API ConfigHeader : public IConfigType
{
	private:

	/// <summary>
	/// All configs in header.
	/// </summary>
	std::unordered_map<std::string, std::shared_ptr<IConfigType>> m_AllConfigs;

	public:

	ConfigHeader(std::string name);

	/// <summary>
	/// Add a config.
	/// </summary>
	/// <typeparam name="T">
	///	Valid typename: ConfigHeader, ConfigInt, ConfigBool,
	///					ConfigFloat, ConfigDouble, ConfigColor,
	///					ConfigString, ConfigKey
	/// </typeparam>
	/// <param name="configType"></param>
	/// <returns></returns>
	template <typename T>
	T* Add(T* configType);

	/// <summary>
	/// Get config value.
	/// </summary>
	/// <typeparam name="T">
	///	Valid typename: ConfigHeader, ConfigInt, ConfigBool,
	///					ConfigFloat, ConfigDouble, ConfigColor,
	///					ConfigString, ConfigKey
	/// </typeparam>
	/// <param name="configName"></param>
	/// <returns></returns>
	template <typename T>
	T* Get(const std::string& configName);

	/// <summary>
	/// Save all configs.
	/// </summary>
	/// <param name="headerName"></param>
	/// <returns></returns>
	bool SaveConfigs(const std::string& headerName);

	/// <summary>
	/// Load all configs.
	/// </summary>
	/// <param name="headerName"></param>
	/// <returns></returns>
	bool LoadConfigs(const std::string& headerName);
};