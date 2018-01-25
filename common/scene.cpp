#include <iostream>
#include <ostream>
#include <cstdio>

#include <common/scene.h>

Scene::Scene() {
	_pencils  = new Sprite("assets/pencils.tga");
	_kingkong = new Sprite("assets/kingkong.tga");
	_rgba     = new Sprite("assets/rgba.tga");

	spritelist.push_back(_pencils);
	spritelist.push_back(_kingkong);
	spritelist.push_back(_rgba);

	_pencils->setupSprite("assets/pencils.tga", 640, 360, 1.0f, 1.0f, 0.0f);
	_kingkong->setupSprite("assets/pencils.tga", 940, 360, 0.5f, 0.5f, 0.0f);
	_rgba->setupSprite("assets/pencils.tga", 340, 360, 1.0f, 1.0f, 0.0f);

}

void Scene::updateScene() {
	//_rgba->rot(_rgba->rot() + 0.03f);
}


Scene::~Scene() {
	delete _pencils;
	delete _kingkong;
	delete _rgba;
}

