#include <iostream>
#include <cstdio>

#include <common/scene.h>

Scene::Scene() {
	std::cout << "Loading Scene" <<  std::endl;

	_pencils  = new Sprite("assets/pencils.tga");
	_kingkong = new Sprite("assets/kingkong.tga");
	_rgba     = new Sprite("assets/rgba.tga");
	_uv       = new Sprite("assets/uv.tga");
}

Scene::~Scene() {
	delete _pencils;
	delete _kingkong;
	delete _rgba;
	delete _uv;
}

