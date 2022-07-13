#pragma once

#include <unordered_map>
#include <string>
#include <memory>

#include "./IOffsetType.h"
#include "./OffsetValue.h"

/// <summary>
/// The offset class.
/// </summary>
class DLL_API OffsetClass : public IOffsetType
{
	private:

	/// <summary>
	/// All offsets in class.
	/// </summary>
	std::unordered_map<std::string, std::shared_ptr<IOffsetType>> m_AllOffsets;

	public:

	OffsetClass(std::string name);

	/// <summary>
	/// Add offset.
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="configType"></param>
	/// <returns></returns>
	template <typename T>
	T* Add(T* configType);

	/// <summary>
	/// Get offset.
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="configName"></param>
	/// <returns></returns>
	template <typename T>
	T* Get(const std::string& configName);
};