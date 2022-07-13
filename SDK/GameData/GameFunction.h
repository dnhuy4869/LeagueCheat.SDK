#pragma once

#include <string>
#include <vector>
#include <Windows.h>

#include "../Interfaces/IUnique.h"
#include "../Interfaces/IDisposable.h"
#include "../Definitions.h"
#include "../Math/Vector3.h"
#include "./AIBaseClient.h"

/// <summary>
/// The class contains all game function.
/// </summary>
class DLL_API GameFunction : public IUnique<GameFunction>, public IDisposable
{
	private:

	/// <summary>
	/// Default constructor.
	/// </summary>
	GameFunction();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~GameFunction();

	public:

	friend class IUnique<GameFunction>;

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
	/// Get 2D coordinate from 3D coordinate.
	/// </summary>
	/// <param name="worldPos">input 3D pos</param>
	/// <param name="screenPos">output 2D pos</param>
	/// <returns></returns>
	static BOOL WorldToScreen(Vector3* worldPos, Vector3* screenPos);

	/// <summary>
	/// Get the first object in ObjectManager.
	/// </summary>
	/// <param name="objectManager"></param>
	/// <returns></returns>
	static AIBaseClient* GetFirstObject(void* objectManager);

	/// <summary>
	/// Get the next object in ObjectManager follow current object.
	/// </summary>
	/// <param name="objectManager"></param>
	/// <param name="currentObject"></param>
	/// <returns></returns>
	static AIBaseClient* GetNextObject(void* objectManager, AIBaseClient* currentObject);

	/// <summary>
	/// Check if object is alive or not, this function should be use with health check.
	/// </summary>
	/// <param name="object"></param>
	/// <returns></returns>
	static bool IsAlive(AIBaseClient* object);

	/// <summary>
	/// Issue an order for object. (Don't call this function, you will get ban immediately)
	/// </summary>
	/// <param name="object"></param>
	/// <param name="order"></param>
	/// <param name="position"></param>
	/// <param name="target"></param>
	/// <param name="isAttackMove"></param>
	/// <param name="isMinion"></param>
	/// <param name="unknown"></param>
	/// <returns></returns>
	static int* IssueOrder(AIBaseClient* object, int order, Vector3* position, AIBaseClient* target, bool isAttackMove, bool isMinion, DWORD networkId);

	/// <summary>
	/// Get attack delay.
	/// </summary>
	/// <param name="object"></param>
	/// <returns></returns>
	static float GetAttackDelay(AIBaseClient* object);

	/// <summary>
	/// Get attack cast delay.
	/// </summary>
	/// <param name="object"></param>
	/// <returns></returns>
	static float GetAttackCastDelay(AIBaseClient* object);

	/// <summary>
	/// Get the current game ping.
	/// </summary>
	/// <param name="netClient"></param>
	/// <returns></returns>
	static int GetPing(void* netClient);

	/// <summary>
	/// Compare object type with type flags.
	/// </summary>
	/// <param name="object"></param>
	/// <param name="objectTypeFlags"></param>
	/// <returns></returns>
	static bool CompareObjectTypeFlags(AIBaseClient* object, int objectTypeFlags);

	/// <summary>
	/// Get the bouding radius value.
	/// </summary>
	/// <param name="object"></param>
	/// <returns></returns>
	static float GetBoundingRadius(AIBaseClient* object);
};