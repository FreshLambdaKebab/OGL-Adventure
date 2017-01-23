#ifndef _GAME_SCENE_H
#define _GAME_SCENE_H

#include <GL\glew.h>

enum GameState
{
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

class GameScene
{
public:
	GameScene(GLuint width,GLuint height);
	~GameScene();

	void Initialize();

	void HandleInput(float deltaTime);
	void Update(float deltaTime);
	void Render();
	void HandleCollision();
	
	GLuint GetWidth() { return m_width; }
	GLuint GetHeight() { return m_height; }
	GameState GetState() { return m_state; }

private:
	GLuint m_width, m_height;
	GameState m_state;
	GLboolean m_keys[1024];
	GLboolean m_keysProcessed[1024];

	//game objects

};

#endif