#include <iostream>
#include "Matrix.h"
#include "Window.h"
#include "Input.h"
#include <memory>

int main()
{
	{
		std::unique_ptr <Window> window (initWindow(800, 600, "OpenGL"));
		if (!window) {

			std::cout << "Failed To Init Window";
			return -1;
		}

		else
			std::cout << window.get() << std::endl;
		
		int i = 0;
    	while (i < 3000)
		{
			i++;
			PollEvents();
			glClear(GL_COLOR_BUFFER_BIT);
			SwapBuffer(window.get());
		}
		                                                                                                                                           
		//closeWindow();
	}
	system("pause");
}