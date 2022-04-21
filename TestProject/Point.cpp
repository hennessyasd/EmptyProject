#include "Point.h"

Point::Point() : x(0), y(0) {}
Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const {
	return x;
}
int Point::getY() const {
	return y;
}
void Point::setX(int x) {
	this->x = x;
}
void Point::setY(int y) {
	this->y = y;
}

Point Point::sum(Point point) const {
	int tempX = x + point.x;
	int tempY = y + point.y;
	return Point(tempX, tempY);
}

Point Point::operator +(Point point) const {
	int tempX = x + point.x;
	int tempY = y + point.y;
	return Point(tempX, tempY);
}

Point Point::sub(Point point) const {
	return Point(x - point.x, y - point.y);
}
int Point::mult(Point point) const {
	return x * point.x + y * point.y;
}

string Point::getInfo() {
	return "Point: x = " + to_string(x) 
		+ ", y = " +  to_string(y);
}
