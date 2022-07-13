#pragma once

#include "../Interfaces/IUnique.h"
#include "../Interfaces/IDisposable.h"
#include "../EventManager.h"
#include "./MenuHeader.h"

/// <summary>
/// The menu.
/// </summary>
class DLL_API Menu : public IUnique<Menu>, public IDisposable
{
	private:

	/// <summary>
	/// All default events.
	/// </summary>
	inline static const std::vector<std::string> m_DefaultEvents =
	{
		"OnDraw",
	};

	/// <summary>
	/// All menu components.
	/// </summary>
	inline static std::unordered_map<std::string, std::shared_ptr<MenuHeader>> m_AllComponents;

	/// <summary>
	/// Default constructor.
	/// </summary>
	Menu();

	/// <summary>
	/// Default destructor.
	/// </summary>
	~Menu();

	public:

	friend class IUnique<Menu>;

	/// <summary>
	/// The events.
	/// </summary>
	inline static std::shared_ptr<EventManager> Events;

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
	/// Add a header to menu.
	/// </summary>
	/// <typeparam name="T">
	///	Valid typename: MenuHeader
	/// </typeparam>
	/// <returns>Pointer to header</returns>
	template <typename T>
	static T* Add(T* menuHeader);

	/// <summary>
	/// Get menu header.
	/// </summary>
	/// <typeparam name="T">
	///	Valid typename: MenuHeader
	/// </typeparam>
	/// <param name="configName"></param>
	/// <returns></returns>
	template <typename T>
	static T* Get(const std::string& name);

	static void OnDraw(void* sender);
};