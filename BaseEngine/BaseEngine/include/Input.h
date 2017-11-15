#pragma once

#include "Window.h"
#include <functional>
#include <list>

#pragma region typedef
typedef int KeyCode;
typedef std::function <void(Window*, int, int)> KeyCallBack;
#pragma endregion

#pragma region KeyDefinition

#define KEY_SPACE GLFW_KEY_SPACE
#define KEY_DOWN GLFW_KEY_DOWN

#pragma endregion

#pragma region KeyState

enum KeyState{

	Unknown,
	KeyPress,
	KeyRepeat,
	KeyRelease
};

#pragma endregion

class Input
{
public:
	static bool GetKeyDown(KeyCode keyCode);
	static bool GetKey(KeyCode keyCode);
	static bool GetKeyUp(KeyCode keyCode);	

private:
    static void SetKeyCallBack(Window* window, KeyCallBack keyCallBack);
	static void CallBackMethod(Window* window, int key, int action);
	static bool isKeyDown(Window* window, int keyCode);
	static KeyState isKeyState(KeyCode keyCode);
	static std::list<int> downKeys;
};
