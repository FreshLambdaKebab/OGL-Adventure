#ifndef _SHADER_H
#define _SHADER_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <GL\glew.h>

class Shader
{
public:
	Shader(const GLchar* vertexPath,const GLchar* fragmentPath);

	void Use();

	GLuint programID;
private:

};

#endif