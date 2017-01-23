#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include "Window.h"

//window properties
GLuint SCREEN_WIDTH = 800, SCREEN_HEIGHT = 600;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);

int main(int argc, char* argv[])
{
	//create the window objet
	Window window;

	window.Create(SCREEN_WIDTH, SCREEN_HEIGHT, "Fartanoid (Arkanoid clone). Version 0.1");

	// Set the required callback functions
	glfwSetKeyCallback(window.GetWindow(), key_callback);

	// set to true to use modern opengl functions
	glewExperimental = GL_TRUE;
	glewInit();
	glGetError();

	// Define viewport dimensions
	glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
	glEnable(GL_CULL_FACE);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	//initialize delta time
	GLfloat dt = 0.0f;
	GLfloat lastFrame = 0.0f;

	//main game loop
	while (!glfwWindowShouldClose(window.GetWindow()))
	{
		//calcualte delta time of current frame
		GLfloat currentFrame = glfwGetTime();
		dt = currentFrame - lastFrame;
		lastFrame = currentFrame;
		glfwPollEvents();

		window.Render(0.0f, 0.0f, 0.5f, 1.0f);
		//render game here

		window.SwapBuffers();
	}
	//clear out resources here

	glfwTerminate();
	return 0;
}

// Is called whenever a key is pressed/released via GLFW
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);

}