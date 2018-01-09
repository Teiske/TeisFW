#ifndef SCENE_H
#define SCENE_H

// Include standard headers
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>

#include <common/sprite.h>
class Scene {
	public:
		Scene();
		virtual ~Scene();

		std::vector<Sprite*> spriteList;

	private:
		Sprite* pencils = new Sprite("assets/pencils.tga", 256, 256);
		Sprite* kingkong = new Sprite("assets/kingkong.tga", 256, 256);
		Sprite* rgba = new Sprite("assets/rgba.tga", 256, 256);
};

#endif /* SCENE_H */
