#include"point.h"
#include"circle.h"

// Circle:: ���� ��Circle�������µĺ���
// ����Բ��x�뾶 
void Circle::setRadius(int r) {
	radius = r;
}
// ��ȡԲ��x�뾶
int Circle::getRadius() {
	return radius;
}
// ����Բ�� 
void Circle::setCenter(Point cp) {
	center = cp;
}
// ��ȡԲ��
Point Circle::getCenter() {
	return center;
}

