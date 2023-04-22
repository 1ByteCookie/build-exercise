#include <GLFW/glfw3.h>

#include <iostream>

int main()
{
	std::cout << "Hello World!" << std::endl;
	
	if (!glfwInit())
		std::cout << "GLFW error!" << std::endl;

	GLFWwindow* Window = glfwCreateWindow(1280, 720, "Hello World!", nullptr, nullptr);

	while (!glfwWindowShouldClose(Window))
	{
		glfwPollEvents();

		glfwSwapBuffers(Window);
	}

	glfwTerminate();

	return 0;
}