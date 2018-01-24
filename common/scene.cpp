#include <iostream>
#include <cstdio>

#include <common/scene.h>

Scene::Scene() {
	_pencils  = new Sprite("assets/pencils.tga");
	_kingkong = new Sprite("assets/kingkong.tga");
	_rgba     = new Sprite("assets/rgba.tga");

	_kingkong->posx();

	spritelist.push_back(_pencils);
	spritelist.push_back(_kingkong);
	spritelist.push_back(_rgba);
}

Scene::~Scene() {
	delete _pencils;
	delete _kingkong;
	delete _rgba;
}

