#pragma once

#include <string>
#include <unordered_map>

#include "./VirtualKey.h"
#include "../Interfaces/IUnique.h"
#include "../Interfaces/IDisposable.h"

/// <summary>
/// The class for handle key.
/// </summary>
class DLL_API KeyInput : public IUnique<KeyInput>, public IDisposable
{
	private:

	/// <summary>
	/// All keys code name.
	/// </summary>
	inline static std::unordered_map<VirtualKey, std::string> m_KeyNames;

	/// <summary>
	/// Default constructor.
	/// </summary>
	KeyInput();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~KeyInput();

	public:

	friend class IUnique<KeyInput>;

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
	/// Get the name of key.
	/// </summary>
	/// <param name="key"></param>
	/// <returns></returns>
	static const std::string& GetKeyName(const VirtualKey& key);

	/// <summary>
	/// Check if key is pressed or not.
	/// </summary>
	/// <param name="key"></param>
	/// <returns></returns>
	static bool IsKeyPressed(const VirtualKey& key);

	/// <summary>
	/// Check if key is down or not.
	/// </summary>
	/// <param name="key"></param>
	/// <returns></returns>
	static bool IsKeyDown(const VirtualKey& key);

	/// <summary>
	/// Click the left mosue.
	/// </summary>
	static void LeftMouseClick();

	/// <summary>
	/// Click the right mouse.
	/// </summary>
	static void RightMouseClick();

	/// <summary>
	/// Press a specific key.
	/// </summary>
	/// <param name="key"></param>
	static void PressKey(const VirtualKey& key);

	static void AwaitKey(VirtualKey* key);

	static void BindKey(VirtualKey* key);
};