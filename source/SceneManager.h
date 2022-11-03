#pragma once

#define SM SceneManager::GetInstance()

class SceneManager {
private:
	SceneManager();
	static SceneManager* instance;

public:
	static SceneManager* GetInstance();
};