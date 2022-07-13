#pragma once

#include "../Definitions.h"

enum class DLL_API ObjectOrder
{
	None = 0,
	HoldPosition = 1,
	MoveTo = 2,
	AttackUnit = 3,
	AutoAttackPet = 4,
	AutoAttack = 5,
	MovePet = 6,
	AttackTo = 7,
	Stop = 10,
};