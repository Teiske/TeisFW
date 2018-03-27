#ifndef POINT_X_H_
#define POINT_X_H_

#include <iostream>

template <class T>
class Point_x {
public:
	Point_x<T>();
	Point_x<T>(T xx, T yy);
	virtual ~Point_x()<T>;
	
	T x;
	T y;
	
private:

};


#endif POINTX_h_ /*POINTX_H_*/

template<class T>
Point_x<T>::Point_x() {

	x = 0;
	y = 0;
	z = 0;

}

template<class T>
Point_x<T>::Point_x(T xx, T yy) {

	x = xx;
	y = yy;
	z = 0;
}
