#pragma once

#include "../Definitions.h"

/// <summary>
/// Vector coordinate.
/// </summary>
class DLL_API Vector3
{
	public:

	float x;

	float y;

	float z;

	Vector3();

	Vector3(float x, float y, float z);

	Vector3 operator+(const Vector3& val);

	Vector3 operator+(const float& val);

	Vector3 operator-(const Vector3& val);

	Vector3 operator-(const float& val);

	Vector3 operator*(const Vector3& val);

	Vector3 operator*(const float& val);

	Vector3 operator/(const Vector3& val);

	Vector3 operator/(const float& val);
};