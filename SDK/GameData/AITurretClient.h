#pragma once

#include "../Definitions.h"
#include "./AttackableUnit.h"

/// <summary>
/// The turret class.
/// </summary>
class DLL_API AITurretClient : public AttackableUnit
{
	public:

	/// <summary>
	/// Get the real turret position rather than object position.
	/// </summary>
	/// <returns></returns>
	Vector3 GetTurretPosition();

	/// <summary>
	/// Get turret attack range.
	/// </summary>
	/// <returns></returns>
	float GetTurretAttackRange();
};