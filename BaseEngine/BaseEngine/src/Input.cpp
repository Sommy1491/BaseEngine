#include "Input.h"

std::list<int> Input::downKeys;
bool Input::GetKeyDown(KeyCode keyCode)
{
	bool keyFound = (std::find(downKeys.begin(), downKeys.end(), keyCode) != downKeys.end());
	if (isKeyDown(Window::getInstance(), keyCode) && !keyFound) {

		downKeys.push_back(keyCode);
		return true;
	}

	return false;
}

bool Input::GetKey(KeyCode keyCode)
{
	bool keyFound = (std::find(downKeys.begin(), downKeys.end(), keyCode) != downKeys.end());
	if (isKeyDown(Window::getInstance(), keyCode) && keyFound) {

		return true;
	}

	else
		return false;
}

bool Input::GetKeyUp(KeyCode keyCode)
{
	bool keyFound = (std::find(downKeys.begin(), downKeys.end(), keyCode) != downKeys.end());
	if (!isKeyDown(Window::getInstance(), keyCode) && keyFound) {

		downKeys.remove(keyCode);
		return true;
	}

	return false;
}

void Input::SetKeyCallBack(Window* window, KeyCallBack keyCallBack)
{
	//if (isKeyDown(window, i))
	//		std::cout << i << std::endl;
}

void Input::CallBackMethod(Window* window, int key, int action)
{
	std::cout << "Hello" << std::endl;
}

bool Input::isKeyDown(Window* window, int keyCode)
{
	int action = glfwGetKey(window->glfwWindow, keyCode);
	
	if (action == GLFW_PRESS)
		return true;
	else
		return false;
}

KeyState Input::isKeyState(KeyCode keyCode)
{
	return KeyState::Unknown;
}
