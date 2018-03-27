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
#include <ostream>

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
		 void updateScene();
		 virtual ~Scene();

		 std::vector<Sprite*> spritelist;

		 Sprite* pencils()  { return _pencils; };
		 Sprite* kingkong() { return _kingkong; };
		 Sprite* rgba()     { return _rgba; };
		 Sprite* triangle() { return _triangle; };
		 Sprite* circle()   { return _circle; };
		 Sprite* square()   { return _square; };

		 float rot_z() { return _rot_z; };

	 private:
		 Sprite* _pencils;
		 Sprite* _kingkong;
		 Sprite* _rgba;
		 Sprite* _triangle;
		 Sprite* _circle;
		 Sprite* _square;

		 float _rot_z = 0.0f;
};

#endif /* SCENE_H */