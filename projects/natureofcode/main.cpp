// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <common/renderer.h>

#include "scene01.h"
#include <common/camera.h>
//#include <common/sprite.h>
//#include <common/scene.h>

int main(void) {
	Renderer renderer;

	do { 
		
	}
	while (glfwGetKey(renderer.window(), GLFW_KEY_ESCAPE) != GLFW_KEY_ESCAPE && 
		glfwWindowShouldClose(renderer.window()) == 0);

	glfwTerminate();

	return 0;
}