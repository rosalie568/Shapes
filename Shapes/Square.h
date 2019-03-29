#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include "Rectangle.h"

class Square : public Rectangle {
private:
	int side;

public:
	Square(int x);
	Square();

};




#endif