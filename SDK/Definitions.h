#pragma once

#define DLL_API __declspec(dllexport)

//#define DLL_API __declspec(dllimport)

/// <summary>
///	Verify a pointer is null before delete it.
/// </summary>
#define SAFE_DELETE_PTR(x) if (x) { delete x; x = nullptr; }

/// <summary>
///	Verify an event is null before execute it.
/// </summary>
#define SAFE_EXECUTE_EVENT(x) if (x) { x(); }

/// <summary>
///	Get total item in array.
/// </summary>
#define GET_ARRAYSIZE(_ARR) ((int)(sizeof(_ARR) / sizeof(*(_ARR)))) 