#pragma once

#include "../Definitions.h"

/// <summary>
///	The interface to allow other code can managed resources themself.
/// </summary>
class DLL_API IDisposable abstract
{
	protected:

	/// <summary>
	///	Define if resources is initialized or not.
	/// </summary>
	bool m_bInitialized = false;

	public:

	/// <summary>
	///	Initialize resources.
	/// </summary>
	virtual bool Initialize() = 0;

	/// <summary>
	///	Dispose resources.
	/// </summary>
	virtual bool Dispose() = 0;
};