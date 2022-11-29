#pragma once
#include "Scene.h"
#include "Spawner.h"
#include "Frog.h"

#include <string>
#include <vector>
class GameplayScene :
    public Scene
{
private:
    void SaveScore();
    void LoadLevelFromFile(std::string path);

public:
    bool endPositions[5];
    static int level;
    int score;

    Spawner spawner;
    Frog player;
    std::vector<GameObject> tiles;

    GameplayScene() = default;
    void OnEnter() override;
    void OnExit() override;
    void Update(float dt) override;
    void Render(SDL_Renderer* renderer) override;
};

