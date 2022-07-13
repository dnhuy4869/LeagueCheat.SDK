#pragma once

#include "../Definitions.h"

/// <summary>
///	The interface for dynamic cast at runtime.
/// </summary>
class DLL_API IDynamicCast abstract
{
	public:

	/// <summary>
	///	Make sure we have a virtual function for polymorphic.
	/// </summary>
	virtual ~IDynamicCast() {}
};