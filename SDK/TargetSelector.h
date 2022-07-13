#pragma once

#include <string>
#include <vector>

#include "./Interfaces/IUnique.h"
#include "./Interfaces/IDisposable.h"
#include "./Definitions.h"
#include "./GameData/AttackableUnit.h"

/// <summary>
/// The target selector.
/// </summary>
class DLL_API TargetSelector : public IUnique<TargetSelector>, public IDisposable
{
	private:

	/// <summary>
	/// Default constructor.
	/// </summary>
	TargetSelector();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~TargetSelector();

	public:

	friend class IUnique<TargetSelector>;

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

	static AttackableUnit* GetLastHitMinion();
};