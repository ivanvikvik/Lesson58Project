#include "point.h"

Point::Point() {
	x = y = 0;
}

Point::Point(int value1, int value2) {
	x = value1;
	y = value2;
}

int Point::get_x() {
	return x;
}
void Point::set_x(int value) {
	x = value;
}
int Point::get_y() {
	return y;
}
void Point::set_y(int value) {
	y = value;
}

string Point::info() {
	string msg = "Point: x = " + to_string(x)
		+ ", y = " + to_string(y);
	return msg;
}

Point Point::sum(Point p1, Point p2) {
	int x = p1.x + p2.x;
	int y = p1.y + p2.y;
	return Point(x, y);
}

Point Point::sub(Point p1, Point p2) {
	int x = p1.x - p2.x;
	int y = p1.y - p2.y;
	return Point(x, y);
}

Point Point::mul(Point p1, int value) {
	int x = p1.x * value;
	int y = p1.y * value;
	return Point(x, y);
}