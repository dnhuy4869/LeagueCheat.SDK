#pragma once

#include <Windows.h>

#include "../Definitions.h"
#include "../Math/Vector3.h"
#include "./ObjectTypeFlags.h"
#include "./ObjectTeamFlags.h"

/// <summary>
/// The class base of all object in game.
/// </summary>
class DLL_API AIBaseClient
{
	public:

	/// <summary>
	/// Get object index.
	/// </summary>
	/// <returns></returns>
	short GetIndex();

	/// <summary>
	/// Get object team.
	/// </summary>
	/// <returns>100, 200, 300</returns>
	ObjectTeamFlags GetTeam();

	/// <summary>
	/// Get move speed.
	/// </summary>
	/// <returns></returns>
	float GetMoveSpeed();

	/// <summary>
	/// Get base attack range, you have to add GetBoundingRadius for correct value.
	/// </summary>
	/// <returns></returns>
	float GetBaseAttackRange();

	/// <summary>
	/// Get health.
	/// </summary>
	/// <returns></returns>
	float GetHealth();

	/// <summary>
	/// Get max health.
	/// </summary>
	/// <returns></returns>
	float GetMaxHealth();

	/// <summary>
	/// Get position.
	/// </summary>
	/// <returns></returns>
	Vector3 GetPosition();

	/// <summary>
	/// Get base attack damage.
	/// </summary>
	/// <returns></returns>
	float GetBaseAttackDamage();

	/// <summary>
	/// Get the object network id.
	/// </summary>
	/// <returns></returns>
	DWORD GetNetworkId();

	/// <summary>
	/// Get bonus attack damage.
	/// </summary>
	/// <returns></returns>
	float GetBonusAttackDamage();

	/// <summary>
	/// Check if object is invulnerable or not.
	/// </summary>
	/// <returns></returns>
	bool IsInvulnerable();

	/// <summary>
	/// Check if object is targetable or not.
	/// </summary>
	/// <returns></returns>
	bool IsTargetable();

	/// <summary>
	/// Check if object is visible or not.
	/// </summary>
	/// <returns></returns>
	bool IsVisible();

	/// <summary>
	/// Check if object is alive or not.
	/// </summary>
	/// <returns></returns>
	bool IsAlive();

	/// <summary>
	/// Check if object is ally or not.
	/// </summary>
	/// <returns></returns>
	bool IsAlly();

	/// <summary>
	/// Check if object is enemy or not.
	/// </summary>
	/// <returns></returns>
	bool IsEnemy();

	/// <summary>
	/// Check if object is neutral or not.
	/// </summary>
	/// <returns></returns>
	bool IsNeutral();

	/// <summary>
	/// Check if object is hero or not.
	/// </summary>
	/// <returns></returns>
	bool IsHero();

	/// <summary>
	/// Check if object is minion or not.
	/// </summary>
	/// <returns></returns>
	bool IsMinion();

	/// <summary>
	/// Check if object is turret or not.
	/// </summary>
	/// <returns></returns>
	bool IsTurret();
};