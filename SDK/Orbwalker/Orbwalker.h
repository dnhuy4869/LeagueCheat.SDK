#pragma once

#include <string>
#include <vector>

#include "../Interfaces/IUnique.h"
#include "../Interfaces/IDisposable.h"
#include "../Definitions.h"
#include "../EventManager.h"
#include "../Math/Vector3.h"
#include "../GameData/GameData.h"
#include "./OrbwalkerMode.h"
#include "../GameData/ObjectOrder.h"

/// <summary>
/// The orbwalker.
/// </summary>
class DLL_API Orbwalker : public IUnique<Orbwalker>, public IDisposable
{
	private:

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnTick",
		"OnMove",
		"OnAttack",
	};

	/// <summary>
	/// Default constructor.
	/// </summary>
	Orbwalker();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~Orbwalker();

	public:

	friend class IUnique<Orbwalker>;

	/// <summary>
	/// All events.
	/// </summary>
	inline static std::shared_ptr<EventManager> Events;

	/// <summary>
	/// Last time auto attack.
	/// </summary>
	inline static float LastAATick = 0.0f;

	/// <summary>
	/// Last movement tick.
	/// </summary>
	inline static float LastMoveTick = 0.0f;

	/// <summary>
	/// Current active mode.
	/// </summary>
	inline static OrbwalkerMode ActiveMode = OrbwalkerMode::None;

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
	/// Move to a specific position.
	/// </summary>
	static void MoveTo(Vector3* position);

	/// <summary>
	/// Issue attack minion.
	/// </summary>
	static void AttackMinion(AIMinionClient* target);

	/// <summary>
	/// Issue attack hero.
	/// </summary>
	static void AttackHero(AIHeroClient* target);

	/// <summary>
	/// Player can move.
	/// </summary>
	static bool CanAttack();

	/// <summary>
	/// Player can attack.
	/// </summary>
	static bool CanMove(float extraWindup = 0.0f);

	static void Orbwalk(AIBaseClient* target, float extraWindup = 0.0f);

	static void OnTick(void* sender);
};