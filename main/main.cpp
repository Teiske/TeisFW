// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <common/renderer.h>
#include <common/camera.h>
#include <common/sprite.h>

int main( void ) {
	Renderer renderer;
	Scene* myScene = new Scene();

	float rot_z = 0.0f;

	do {
		renderer.renderScene(myScene);

	} // Check if the ESC key was pressed or the window was closed
	while( glfwGetKey(renderer.window(), GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
		   glfwWindowShouldClose(renderer.window()) == 0 );

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
