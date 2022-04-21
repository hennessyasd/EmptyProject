#pragma once
#include "Header.h"

class Point{

private: // vision only in class!
	int x;
	int y;

public:
	Point();
	Point(int x, int y);

	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);

	Point sum(Point point) const;
	Point sub(Point point) const;
	int mult(Point point) const;

	Point operator +(Point point) const;

	string getInfo();

};

