#pragma once

#include <memory>

#include "../Definitions.h"

/// <summary>
/// The interface that provide unique smart pointer to object instance.
/// </summary>
/// <typeparam name="T"></typeparam>
template <class T>
class DLL_API IUnique abstract
{
	protected:

	struct DLL_API MakeShareEnabler : public T {};

	/// <summary>
	/// The unique smart pointer.
	/// </summary>
	inline static std::shared_ptr<T> m_UniquePtr = nullptr;

	/// <summary>
	/// Default constructor.
	/// </summary>
	IUnique<T>() {}

	/// <summary>
	/// Default destructor.
	/// </summary>
	~IUnique<T>() {}

	public:

	/// <summary> 
	/// Get the unique <see cref="T"/> object instance. 
	/// </summary>
	/// <returns>
	/// The return value is unique pointer to <see cref="T"/> object.
	/// </returns>
	static const std::shared_ptr<T>& GetUniquePtr()
	{
		if (m_UniquePtr == nullptr)
		{
			m_UniquePtr = std::make_shared<MakeShareEnabler>();
		}

		return m_UniquePtr;
	}
};