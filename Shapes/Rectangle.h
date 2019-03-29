#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {

private:
	int length, width;

public:
	Rectangle();
	Rectangle(int x, int y);
	int getArea();
	int getPerimeter();

};

#endif