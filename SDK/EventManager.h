#pragma once

#include <string>
#include <Windows.h>
#include <unordered_map>
#include <vector>
#include <functional>

#include "./Definitions.h"

/// <summary>
/// Class to manage events and its callbacks.
/// </summary>
class DLL_API EventManager
{
	private:

	std::unordered_map<std::string, std::vector<std::function<void(void*)>>> m_AllEvents;

	public:

	EventManager();

	~EventManager();

	/// <summary>
	/// Add new event without callbacks.
	/// </summary>
	/// <param name="eventName">Event name to add</param>
	/// <returns>Event is added success or not</returns>
	bool AddEvent(std::string eventName);

	/// <summary>
	/// Add new event with default callbacks.
	/// </summary>
	/// <param name="eventName">Event name to add</param>
	/// <param name="callbacks">Callbacks of event</param>
	/// <returns>Event is added success or not</returns>
	bool AddEvent(std::string eventName, const std::vector<std::function<void(void*)>>& callbacks);

	/// <summary>
	/// Remove an event.
	/// </summary>
	/// <param name="eventName">Event name to remove</param>
	/// <returns>Event removed success of not</returns>
	bool RemoveEvent(const std::string& eventName);

	/// <summary>
	/// Trigger an event.
	/// </summary>
	/// <param name="eventName">Event name to trigger</param>
	/// <returns></returns>
	void TriggerEvent(const std::string& eventName, void* sender = nullptr);

	/// <summary>
	/// Add a callback to an event.
	/// </summary>
	/// <param name="eventName">Event name to add callback</param>
	/// <param name="callback">Callback to add</param>
	/// <returns></returns>
	void Register(const std::string& eventName, const std::function<void(void*)>& callback);

	/// <summary>
	/// Get event callbacks.
	/// </summary>
	/// <param name="eventName"></param>
	/// <returns></returns>
	std::vector<std::function<void(void*)>>* GetEventCallbacks(const std::string& eventName);

	/// <summary>
	/// Trigger an event.
	/// </summary>
	/// <param name="callbacks"></param>
	/// <param name="sender"></param>
	/// <returns></returns>
	void TriggerEvent(const std::vector<std::function<void(void*)>>& callbacks, void* sender = nullptr);
};