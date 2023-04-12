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

	string info();
};

