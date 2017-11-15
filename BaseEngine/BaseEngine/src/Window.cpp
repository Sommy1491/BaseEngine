#include "Window.h"

Window::Window()
{
	std::cout << "Window Constructor" << std::endl;
}

Window::~Window()
{
	std::cout << "Window Destructor" << std::endl;
}

Window* Window::getInstance()
{
	if (!instance) {
		instance = new Window();
		return instance;
	}

	return instance;
}

Window* Window::instance = nullptr;
Window* initWindow(int width, int height, const char* title)
{
	if (!glfwInit()) {
		
		closeWindow();
		return nullptr;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	Window* window = Window::getInstance();
	window->glfwWindow = glfwCreateWindow(width, height, title, nullptr, nullptr);
	glfwMakeContextCurrent(window->glfwWindow);

	glewExperimental = GL_TRUE;
	if(glewInit() != GLEW_OK) {

		closeWindow();
		return nullptr;
	}

	return window;
}

Window * getWindow()
{
	return nullptr;
}

bool windowShouldClose(Window* window)
{	
	return glfwWindowShouldClose(window->glfwWindow);
}

void PollEvents()
{
	glfwPollEvents();
}

void SwapBuffer(Window* window)
{
	glfwSwapBuffers(window->glfwWindow);
}

void closeWindow()
{
	glfwTerminate();
}