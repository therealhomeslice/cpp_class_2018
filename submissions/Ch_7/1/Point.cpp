#include <iostream>

using namespace std;

#include "Point.h"

Point::Point(int a, int b) : x(a), y(b) {} //Base Class

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::print()
{
	cout << x << "," << y;
}
