#pragma once
#include"point.h"

// 圆类
class Circle
{
private:
	int radius; // 半径
	// 在一个类中，可以让另一个类作为该类的成员
	Point center; // 圆心
public:
	// 设置圆的x半径 
	void setRadius(int r);
	// 获取圆的x半径
	int getRadius();
	// 设置圆心 
	void setCenter(Point cp);
	// 获取圆心
	Point getCenter();

};
