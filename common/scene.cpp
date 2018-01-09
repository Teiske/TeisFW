#include <common/scene.h>

Scene::Scene() {
	//Pushing the scenes out of an vector array
	spriteList.push_back(pencils);
	spriteList.push_back(rgba);
	spriteList.push_back(kingkong);

	//Giving the sprites a position on the screen
	pencils->pos_x = 240;
	pencils->pos_y = 360;

	rgba->pos_x = 640;
	rgba->pos_y = 360;

	kingkong->pos_x = 1040;
	kingkong->pos_y = 360;
}


Scene::~Scene() {
	delete pencils;
	delete kingkong;
	delete rgba;
}

