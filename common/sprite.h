#ifndef SPRITE_H
#define SPRITE_H

#include <string>

#include <GL/glew.h>

class Sprite {
	public:
		Sprite(std::string image_path, int s_posx, int s_posy, float s_width, float s_height, float s_rot);
		void setupSprite(const std::string image_path, float px, float py, float uvwidth, float uvheight, float rot);
		virtual ~Sprite();

		GLuint texture() { return _texture; };
		GLuint vertexbuffer() { return _vertexbuffer; };
		GLuint uvbuffer() { return _uvbuffer; };

	    int s_posx;
		int s_posy;
		float s_rot;

		unsigned int width() { return _width; };
		unsigned int height() { return _height; };

	private:
		GLuint loadTGA(const std::string& imagepath);
		
		GLuint _texture;
		GLuint _vertexbuffer;
		GLuint _uvbuffer;

		unsigned int _width;
		unsigned int _height;
};

#endif /* SPRITE_H */
