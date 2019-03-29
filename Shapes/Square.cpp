#include "pch.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"
#include <iostream>

using namespace std;

Square::Square() {
	side = 0;
}

Square::Square(int x) {
	Rectangle(x, x);
}
