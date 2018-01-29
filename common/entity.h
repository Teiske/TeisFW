#ifndef ENTITY_H
#define ENTITY_H

#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

#include <GL/glew.h>
#include <glfw3.h>

#include <common/sprite.h>

class Entity {
	public:
		Entity();
		virtual ~Entity();
		void addSprite(Sprite* _spr);
		void updateEntity();

		Sprite* sprite() { return _sprite; };

	private:
		Sprite * _sprite;

		/*void deleteSprite() {
			if (_sprite != NULL) {
				delete _sprite;
				_sprite = NULL;
			}
		};*/
};

#endif /* ENTITY_H */