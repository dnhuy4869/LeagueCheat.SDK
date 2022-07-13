#pragma once

#include "./Definitions.h"

enum class DLL_API NotificationType : int
{
	None,
	Success,
	Warning,
	Error,
	Info,
};