#include <iostream>
#include <cstdio>

#include <common/scene.h>

Scene::Scene() {
	std::cout << "Loading Scene" <<  std::endl;
	_pencils = new Sprite("assets/pencils.tga");
	_kingkong = new Sprite("assets/kingkong.tga");
	_rgba = new Sprite("assets/rgba.tga");
	//renderer.renderSprite(pencils, 400, 300, 1.0f, 1.0f, 0.0f);
	//renderer.renderSprite(kingkong, 900, 400, 1.0f, 1.0f, 0.0f);
	//renderer.renderSprite(rgba, renderer.width()/2, renderer.height()/2, 3.0f, 3.0f, 0.0f);
}

Scene::~Scene() {
	delete _pencils;
	delete _kingkong;
	delete _rgba;
}

