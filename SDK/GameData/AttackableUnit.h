#pragma once

#include "../Definitions.h"
#include "./AIBaseClient.h"

/// <summary>
/// The object that attackable.
/// </summary>
class DLL_API AttackableUnit : public AIBaseClient
{
	public:

	/// <summary>
	/// Get bonus attack range.
	/// </summary>
	/// <returns></returns>
	float GetBoundingRadius();

	/// <summary>
	/// Get attack delay of object.
	/// </summary>
	/// <returns></returns>
	float GetAttackDelay();

	/// <summary>
	/// Get attack cast delay of object.
	/// </summary>
	/// <returns></returns>
	float GetAttackCastDelay();
};