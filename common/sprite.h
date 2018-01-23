#ifndef SPRITE_H
#define SPRITE_H

#include <string>

#include <GL/glew.h>

class Sprite {
	public:
		Sprite(std::string image_path);
		void setupSprite(const std::string image_path, float px, float py, float uvwidth, float uvheight, float rot);
		virtual ~Sprite();

		GLuint texture() { return _texture; };
		GLuint vertexbuffer() { return _vertexbuffer; };
		GLuint uvbuffer() { return _uvbuffer; };

		//Sets the position, scale and rotation
		float posx() { return _posx; };
		float posy() { return _posy; };
		float scalex() { return _scalex; };
		float scaley() { return _scaley; };
		float rot() { return _rot; }

		//Sets the width and height 
		unsigned int width() { return _width; };
		unsigned int height() { return _height; };

	private:
		GLuint loadTGA(const std::string& imagepath);
		
		GLuint _texture;
		GLuint _vertexbuffer;
		GLuint _uvbuffer;

		float _posx;
		float _posy;
		float _scalex;
		float _scaley;
		float _rot = 0.0f;

		unsigned int _width;
		unsigned int _height;
};

#endif /* SPRITE_H */
