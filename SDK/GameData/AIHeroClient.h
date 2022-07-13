#pragma once

#include "../Definitions.h"
#include "./AttackableUnit.h"

/// <summary>
/// The hero class.
/// </summary>
class DLL_API AIHeroClient : public AttackableUnit
{
	public:

	/// <summary>
	/// Get total attack range include BaseAttackRange + GetBoundingRadius.
	/// </summary>
	/// <returns></returns>
	float GetTotalAttackRange();

	/// <summary>
	/// Get total attack damage include BaseAttackDamage + BonusAttackDamage.
	/// </summary>
	/// <returns></returns>
	float GetTotalAttackDamage();
};