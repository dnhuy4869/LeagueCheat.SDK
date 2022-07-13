#pragma once

#include <unordered_map>

#include "../../SDK/Interfaces/IUnique.h"
#include "../../SDK/Interfaces/IDisposable.h"
#include "./ConfigHeader.h"

/// <summary>
/// The class to manage all config.
/// </summary>
class DLL_API ConfigManager : public IUnique<ConfigManager>, public IDisposable
{
	private:

	/// <summary>
	/// Path to config file.
	/// </summary>
	inline static std::string m_FilePath;

	/// <summary>
	/// All configs.
	/// </summary>
	inline static std::unordered_map<std::string, std::shared_ptr<ConfigHeader>> m_AllConfigs;

	ConfigManager();

	~ConfigManager();

	public:

	friend class IUnique<ConfigManager>;

	bool Initialize() override;

	bool Dispose() override;

	/// <summary>
	/// Add a new config header.
	/// </summary>
	/// <typeparam name="T">
	///	Valid typename: ConfigHeader
	/// </typeparam>
	/// <param name="configHeader"></param>
	/// <returns></returns>
	template <typename T> 
	static T* Add(T* configHeader);

	/// <summary>
	/// Get config.
	/// </summary>
	/// <typeparam name="T">
	///	Valid typename: ConfigHeader
	/// </typeparam>
	/// <param name="configName"></param>
	/// <returns></returns>
	template <typename T>
	static T* Get(const std::string& configName);

	/// <summary>
	/// Load a specific config.
	/// </summary>
	/// <param name="appName"></param>
	/// <param name="keyName"></param>
	/// <returns></returns>
	static std::string LoadConfig(const std::string& appName, const std::string& keyName);

	/// <summary>
	/// Save a specific config.
	/// </summary>
	/// <param name="appName"></param>
	/// <param name="keyName"></param>
	/// <param name="value"></param>
	/// <returns></returns>
	static bool SaveConfig(const std::string& appName, const std::string& keyName, const std::string& value);

	/// <summary>
	/// Save all configs.
	/// </summary>
	/// <returns></returns>
	static bool SaveConfigs();

	/// <summary>
	/// Load all configs.
	/// </summary>
	/// <returns></returns>
	static bool LoadConfigs();
};