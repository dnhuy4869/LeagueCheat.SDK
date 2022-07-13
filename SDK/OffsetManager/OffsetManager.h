#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "../Interfaces/IUnique.h"
#include "../Interfaces/IDisposable.h"
#include "../Definitions.h"
#include "./IOffsetType.h"
#include "./OffsetClass.h"

/// <summary>
/// The class contains all offsets.
/// </summary>
class DLL_API OffsetManager : public IUnique<OffsetManager>, public IDisposable
{
	private:

	/// <summary>
	/// All offsets.
	/// </summary>
	inline static std::unordered_map<std::string, std::shared_ptr<IOffsetType>> m_AllOffsets;

	/// <summary>
	/// Default constructor.
	/// </summary>
	OffsetManager();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~OffsetManager();

	public:

	friend class IUnique<OffsetManager>;

	/// <summary>
	/// Intialize resources.
	/// </summary>
	/// <returns></returns>
	bool Initialize() override;

	/// <summary>
	/// Dispose resources.
	/// </summary>
	/// <returns></returns>
	bool Dispose() override;

	/// <summary>
	/// Add offset.
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="offsetType"></param>
	/// <returns></returns>
	template <typename T>
	static T* Add(T* offsetType);

	/// <summary>
	/// Get offset.
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="offsetName"></param>
	/// <returns></returns>
	template <typename T>
	static T* Get(const std::string& offsetName);

	static void AddOffsets();
};