#pragma once

#include "../Definitions.h"

/// <summary>
/// Vector coordinate.
/// </summary>
class DLL_API Vector2
{
	public:

	float x;

	float y;

	Vector2();

	Vector2(float x, float y);

	Vector2 operator+(const Vector2& val);

	Vector2 operator+(const float& val);

	Vector2 operator-(const Vector2& val);

	Vector2 operator-(const float& val);

	Vector2 operator*(const Vector2& val);

	Vector2 operator*(const float& val);

	Vector2 operator/(const Vector2& val);

	Vector2 operator/(const float& val);
};