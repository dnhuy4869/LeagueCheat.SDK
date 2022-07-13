#pragma once

#include <string>
#include <vector>

#include "../Interfaces/IUnique.h"
#include "../Interfaces/IDisposable.h"
#include "../Definitions.h"
#include "../EventManager.h"
#include "./AIHeroClient.h"
#include "./GameFunction.h"
#include "./AIMinionClient.h"
#include "./AITurretClient.h"
#include "./AttackableUnit.h"

/// <summary>
/// The class contains all game data.
/// </summary>
class DLL_API GameData : public IUnique<GameData>, public IDisposable
{
	private:

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnTick",
		"OnUpdate",
	};

	/// <summary>
	/// Default constructor.
	/// </summary>
	GameData();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~GameData();

	public:

	friend class IUnique<GameData>;

	/// <summary>
	/// All events.
	/// </summary>
	inline static std::shared_ptr<EventManager> Events;

	/// <summary>
	/// Module base of League of Legends.exe
	/// </summary>
	inline static DWORD ModuleBase;

	/// <summary>
	/// Module size of League of Legends.exe
	/// </summary>
	inline static DWORD ModuleSize;

	/// <summary>
	/// The current player.
	/// </summary>
	inline static AIHeroClient* LocalPlayer;

	/// <summary>
	/// The HUD.
	/// </summary>
	inline static DWORD Hud;

	/// <summary>
	/// The net client.
	/// </summary>
	inline static void* NetClient;

	/// <summary>
	/// The object manager.
	/// </summary>
	inline static void* ObjectManager;

	/// <summary>
	/// All functions.
	/// </summary>
	inline static std::shared_ptr<GameFunction> Functions;

	/// <summary>
	/// All objects in game.
	/// </summary>
	inline static std::vector<AIBaseClient*> AllObjects;

	/// <summary>
	/// All heroes.
	/// </summary>
	inline static std::vector<AIHeroClient*> AllHeroes;

	/// <summary>
	/// Ally heroes.
	/// </summary>
	inline static std::vector<AIHeroClient*> AllyHeroes;

	/// <summary>
	/// Enemy heroes.
	/// </summary>
	inline static std::vector<AIHeroClient*> EnemyHeroes;

	/// <summary>
	/// All minions.
	/// </summary>
	inline static std::vector<AIMinionClient*> AllMinions;

	/// <summary>
	/// Ally minions.
	/// </summary>
	inline static std::vector<AIMinionClient*> AllyMinions;

	/// <summary>
	/// Enemy minions.
	/// </summary>
	inline static std::vector<AIMinionClient*> EnemyMinions;

	/// <summary>
	/// All turrets.
	/// </summary>
	inline static std::vector<AITurretClient*> AllTurrets;

	/// <summary>
	/// Ally turrets.
	/// </summary>
	inline static std::vector<AITurretClient*> AllyTurrets;

	/// <summary>
	/// Enemy turrets.
	/// </summary>
	inline static std::vector<AITurretClient*> EnemyTurrets;

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
	/// Get the current game time.
	/// </summary>
	/// <returns></returns>
	static float GetGameTime();

	/// <summary>
	/// Get the current game version.
	/// </summary>
	/// <returns></returns>
	static std::string GetGameVersion();

	/// <summary>
	/// Get the current game ping.
	/// </summary>
	/// <returns></returns>
	static int GetPing();

	/// <summary>
	/// Get the current 3D position of mouse.
	/// </summary>
	Vector3 GetMouseWorldPosition();

	static void OnTick(void* sender);
};