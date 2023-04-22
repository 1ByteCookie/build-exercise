#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
	if (!glfwInit())
		return -1;

	GLFWwindow* Window = glfwCreateWindow(1280, 720, "Hello World!", nullptr, nullptr);
	if (!Window)
		return -1;

	glfwMakeContextCurrent(Window);
	if (!gladLoadGL())
		return -1;

	glClearColor(0.4f, 0.0f, 1.0f, 1.0f);
	while (!glfwWindowShouldClose(Window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glfwPollEvents();

		glfwSwapBuffers(Window);
	}

	glfwTerminate();

	return 0;
}