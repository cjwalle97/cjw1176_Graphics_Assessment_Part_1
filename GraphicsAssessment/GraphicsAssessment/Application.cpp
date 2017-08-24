#include "Application.h"
#include <GLFW\glfw3.h>


Application::Application()
{
}


Application::~Application()
{
}

void run(const char* title, unsigned int width, unsigned int height, bool fullscreen)
{
	
	if (glfwInit() == GL_FALSE)
	{
		GLFWmonitor* monitor = (fullscreen) ? glfwGetPrimaryMonitor() : nullptr;

		 m_window = glfwCreateWindow(width, height, title, monitor, nullptr);

		double prevTime = glfwGetTime();
		double currTime = 0;
		double deltaTime = 0;
		while ()
		{
			currTime = glfwGetTime();
			deltaTime - currTime - prevTime;
			prevTime = currTime;
			glfwPollEvents();
			Application::update(deltaTime);
			draw();
			glfwSwapBuffers(m_window);
			m_gameover = (glfwWindowShouldClose(m_window) == GLFW_TRUE);
		}
	}
}