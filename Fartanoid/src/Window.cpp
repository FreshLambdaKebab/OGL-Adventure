#include "Window.h"

Window::Window():
	m_window(nullptr),
	m_screenWidth(0),
	m_screenHeight(0)
{
}

Window::~Window()
{
}

void Window::Create(int screenWidth, int screenHeight, std::string windowName)
{
	m_screenWidth = screenWidth;
	m_screenHeight = screenHeight;

	//initialize GLFW
	glfwInit();
	// Set all the required options for GLFW (opengl 3.3)
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
	glfwWindowHint(GLFW_SAMPLES, 4);

	// Create a GLFWwindow object that we can use for GLFW's functions
	m_window = glfwCreateWindow(m_screenWidth, m_screenHeight, windowName.c_str(), nullptr, nullptr);
	glfwMakeContextCurrent(m_window);
}

void Window::Render(float r, float g, float b, float a)
{
	//render
	glClearColor(r, g, b, a);
	glClear(GL_COLOR_BUFFER_BIT);
}

void Window::SwapBuffers()
{
	//swap the screen buffers
	glfwSwapBuffers(m_window);
}
