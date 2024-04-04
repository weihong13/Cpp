#pragma once
#include<iostream>
#include<string>
using namespace std;
// 点类
class Point
{
private:
	int xp;
	int yp;
public:
	// 设置点的x坐标 
	void setX(int x);
	// 读取点的x坐标
	int getX();
	// 设置点的y坐标 
	void setY(int y);
	// 读取点的y坐标
	int getY();

};