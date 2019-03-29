#include "pch.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

Shape::Shape() {
	area = 0;
	perimeter = 0;
}

int Shape::getArea() {
	return area;
}