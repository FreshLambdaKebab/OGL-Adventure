#ifndef _WINDOW_H
#define _WINDOW_H

#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <string>

class Window
{
public:
	Window();
	~Window();

	void Create(int screenWidth,int screenHeight,std::string windowName);

	//function:render and swap buffers
	void Render(float r, float g, float b, float a);
	//function: swap the buffers
	void SwapBuffers();
	
	GLFWwindow* GetWindow() { return m_window; }

private:
	GLFWwindow* m_window;

	int m_screenWidth;
	int m_screenHeight;
};

#endif