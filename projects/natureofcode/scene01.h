#ifndef SCENE01_H
#define SCENE01_H

#include <common/scene.h>

class scene01
{
public:
	scene01();
	virtual ~scene01();

	Sprite* triangle() { return _triangle; };
	Sprite* circle()   { return _circle; };
	Sprite* square()   { return _square; };

private:

	Sprite* _triangle;
	Sprite* _circle;
	Sprite* _square;
	
};

#endif /* SCENE01_H */
