#pragma once
#include"point.h"

// Բ��
class Circle
{
private:
	int radius; // �뾶
	// ��һ�����У���������һ������Ϊ����ĳ�Ա
	Point center; // Բ��
public:
	// ����Բ��x�뾶 
	void setRadius(int r);
	// ��ȡԲ��x�뾶
	int getRadius();
	// ����Բ�� 
	void setCenter(Point cp);
	// ��ȡԲ��
	Point getCenter();

};
