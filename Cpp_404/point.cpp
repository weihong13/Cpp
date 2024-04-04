#include"point.h"

// Point:: 声明 函数是Point作用域下的函数

// 设置点的x坐标 
void Point::setX(int x) {
	xp = x;
}
// 读取点的x坐标
int Point::getX() {
	return xp;
}
// 设置点的y坐标 
void Point::setY(int y) {
	yp = y;
}
// 读取点的y坐标
int Point::getY() {
	return yp;
}