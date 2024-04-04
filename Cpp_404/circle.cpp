#include"point.h"
#include"circle.h"

// Circle:: 声明 是Circle作用域下的函数
// 设置圆的x半径 
void Circle::setRadius(int r) {
	radius = r;
}
// 获取圆的x半径
int Circle::getRadius() {
	return radius;
}
// 设置圆心 
void Circle::setCenter(Point cp) {
	center = cp;
}
// 获取圆心
Point Circle::getCenter() {
	return center;
}

