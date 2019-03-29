#include "pch.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

Rectangle::Rectangle(int x, int y) {
	length = x;
	width = y;
}

int Rectangle::getArea() {
	return length * width;
}

int Rectangle::getPerimeter() {
	return 2 * (width + length);
}
