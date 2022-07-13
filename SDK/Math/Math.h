#pragma once

#include <string>
#include <vector>

#include "../Interfaces/IUnique.h"
#include "../Interfaces/IDisposable.h"
#include "../Definitions.h"
#include "./Vector3.h"

/// <summary>
/// The class contains all math.
/// </summary>
class DLL_API Math : public IUnique<Math>, public IDisposable
{
	private:

	/// <summary>
	/// Default constructor.
	/// </summary>
	Math();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~Math();

	public:

	friend class IUnique<Math>;

	/// <summary>
	/// Intialize resources.
	/// </summary>
	/// <returns></returns>
	bool Initialize() override;

	/// <summary>
	/// Dispose resources.
	/// </summary>
	/// <returns></returns>
	bool Dispose() override;

	/// <summary>
	/// Check if coordinate is on screen or not.
	/// </summary>
	/// <param name="position"></param>
	/// <returns></returns>
	static bool IsOnScreen(Vector3* position);

	/// <summary>
	/// Get distance between 2 coordinate.
	/// </summary>
	/// <param name="pos1"></param>
	/// <param name="pos2"></param>
	/// <returns></returns>
	static float GetDistance(const Vector3& pos1, const Vector3& pos2);
};