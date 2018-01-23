#ifndef SCENE_H
#define SCENE_H

// Include standard headers
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>

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

		 float rot_z = 0.0f;

		 std::vector<Sprite*> spritelist;

		 Sprite* pencils()  { return _pencils; };
		 Sprite* kingkong() { return _kingkong; };
		 Sprite* rgba()     { return _rgba; };
		 Sprite* uv()       { return _uv; };


	 private:
		 Sprite* _pencils;
		 Sprite* _kingkong;
		 Sprite* _rgba;
		 Sprite* _uv;
	 
};

#endif /* SCENE_H */