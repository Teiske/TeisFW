#include "entity.h"

Entity::Entity() {
	_sprite = NULL;
}

Entity::~Entity() {

}

void Entity::addSprite(Sprite * _spr) {
	//_sprite = new Sprite();
	*_sprite = *_spr;
}

void Entity::updateEntity() {

}