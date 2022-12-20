#include "Scene.h"

void Scene::Load()
{
	for (auto object : objects)
		object.Load();

	for (auto uiObject : ui)
		uiObject.Load();
}
