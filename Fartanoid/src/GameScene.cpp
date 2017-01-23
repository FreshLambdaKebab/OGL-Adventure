#include "GameScene.h"

GameScene::GameScene(GLuint width, GLuint height):
	m_width(width),
	m_height(height),
	m_state(GameState::GAME_ACTIVE),
	m_keys()
{
}

GameScene::~GameScene()
{
}

void GameScene::Initialize()
{
}

void GameScene::HandleInput(float deltaTime)
{
}

void GameScene::Update(float deltaTime)
{
}

void GameScene::Render()
{
}

void GameScene::HandleCollision()
{
}
