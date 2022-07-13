#pragma once

#include "../Definitions.h"

/// <summary>
///	The interface to ensure that only one object of its kind exists and provides a single point of access to it for any other code.
/// </summary>
template <class T>
class DLL_API ISingleton abstract
{
	protected:

	/// <summary>
	///	The unique pointer to <see cref="T"/> object instance.
	/// </summary>
	inline static T* m_Instance;

	/// <summary>
	/// Default constructor.
	/// </summary>
	ISingleton<T>() {};

	/// <summary>
	/// Default destructor.
	/// </summary>
	~ISingleton<T>() {};

	public:

	/// <summary> 
	/// Get the unique <see cref="T"/> object instance. 
	/// </summary>
	/// <returns>
	/// The return value is unique pointer to <see cref="T"/> object.
	/// </returns>
	static T* GetInstance()
	{
		if (m_Instance == nullptr)
		{
			m_Instance = new T();
		}

		return m_Instance;
	}

	/// <summary>
	/// Release the unique <see cref="T"/> object instance.
	/// </summary>
	static void ReleaseInstance()
	{
		SAFE_DELETE_PTR(m_Instance);
	}
};