#pragma once

#include <iostream>
#include "GL/glew.h" 
#include "GLFW/glfw3.h"

class Window {

public:
	Window();
	~Window();
	static Window* getInstance();
	GLFWwindow *glfwWindow;

private:
	static Window *instance;
};

Window* initWindow(int width, int height, const char* title);
Window* getWindow();
bool windowShouldClose(Window* window);
void PollEvents();
void SwapBuffer(Window *window);
void closeWindow();