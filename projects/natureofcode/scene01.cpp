#include <iostream>
#include <ostream>
#include <cstdio>

#include "scene01.h"

scene01::scene01() {
	_triangle = new Sprite("assets/triangle.tga");
	_circle   = new Sprite("assets/circle.tga");
	_square   = new Sprite("assets/square.tga");

	_triangle->setupSprite("assets/triangle.tga", 940, 360, 1.0f, 1.0f, 0.0f);
	_circle->  setupSprite("assets/circle.tga", 640, 360, 1.0f, 1.0f, 0.0f);
	_square->  setupSprite("assets/square.tga", 340, 360, 1.0f, 1.0f,/* 1.575f*/ 3.15f);
}

scene01::~scene01() {
	delete _triangle;
	delete _circle;
	delete _square;
}