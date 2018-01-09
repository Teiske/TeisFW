#ifndef SCENE_H
#define SCENE_H

#include <common/sprite.h>

class Scene {
 
public:
	 Scene();
	 ~Scene();

 private:
	 Sprite* pencils = new Sprite("assets/pencils.tga");
	 Sprite* kingkong = new Sprite("assets/kingkong.tga");
	 Sprite* rgba = new Sprite("assets/rgba.tga");
};

#endif /* SCENE_H */