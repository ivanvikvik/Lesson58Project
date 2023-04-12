#pragma once
#include "main.h"

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int value1, int value2);

	int get_x();
	void set_x(int value);
	int get_y();
	void set_y(int value);

	Point sum(Point p1, Point p2);
	Point sub(Point p1, Point p2);
	Point mul(Point p1, int value);

	string info();
};

