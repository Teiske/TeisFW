#include <iostream>
#include <cstdio>

#include <common/scene.h>

Scene::Scene() {
	std::cout << "Loading Scene" <<  std::endl;

	//spritelist.push_back(_pencils = new Sprite("assets/pencils.tga", 400, 300, 1.0f, 1.0f, 0.0f));

	_pencils = new Sprite("assets/pencils.tga", 400, 300, 1.0f, 1.0f, 0.0f);
	_kingkong = new Sprite("assets/kingkong.tga", 900, 400, 1.0f, 1.0f, 3.0f);
	_rgba = new Sprite("assets/rgba.tga", /*renderer.width() / 2, height() / 2,*/ 640, 360, 3.0f, 3.0f, 0.0f);
	//renderer.renderSprite(pencils, 400, 300, 1.0f, 1.0f, 0.0f);
	//renderer.renderSprite(kingkong, 900, 400, 1.0f, 1.0f, 0.0f);
	//renderer.renderSprite(rgba, renderer.width()/2, renderer.height()/2, 3.0f, 3.0f, 0.0f);
}

Scene::~Scene() {
	delete _pencils;
	delete _kingkong;
	delete _rgba;
}

