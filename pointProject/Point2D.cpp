#include "Point2D.h"

Point2D Point2D::sum(Point2D point) {
	return Point2D(x + point.x, y + point.y);
}
Point2D Point2D::sum(int value){
	return Point2D(x + value, y + value);
}
Point2D Point2D::sub(Point2D point) {
	return Point2D(x - point.x, y - point.y);
}
Point2D Point2D::sub(int value) {
	return Point2D(x - value, y - value);
}
Point2D Point2D::minus() {
	return Point2D(-x, -y);
}


Point2D Point2D::operator+(Point2D point){
	return sum(point);
}
Point2D Point2D::operator+(int value) {
	return sum(value);
}
Point2D Point2D::operator-(Point2D point) {
	return sub(point);
}
Point2D Point2D::operator-(int value) {
	return sum(value);
}
Point2D Point2D::operator-() {
	return minus();
}
Point2D Point2D::operator*(int value){
	return Point2D(x * value, y * value);
}

Point2D Point2D::operator/(int value){
	return Point2D(x / value, y / value);
}