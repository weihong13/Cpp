#pragma once
#include<iostream>
#include<string>
using namespace std;
// ����
class Point
{
private:
	int xp;
	int yp;
public:
	// ���õ��x���� 
	void setX(int x);
	// ��ȡ���x����
	int getX();
	// ���õ��y���� 
	void setY(int y);
	// ��ȡ���y����
	int getY();

};