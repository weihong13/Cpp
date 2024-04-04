#include"circle.h"
#include"point.h"

// ���Բ�Ĺ�ϵ



// 
int Distance(Circle &c, Point &p) {
	int d = 
		(p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) +
		(p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
	return d;
}
//
int isInside(Circle& c, Point& p) {
	//�뾶ƽ��
	int r2 = c.getRadius() * c.getRadius();
	if (Distance(c,p) > r2) {
		return 1;
	}
	else if (Distance(c, p) < r2) {
		return -1;
	}
	else {
		return 0;
	}

}


int main() {
	// ʵ������
	Point p;
	p.setX(0);
	p.setY(101);
	// ʵ����Բ��
	Point center;
	center.setX(0);
	center.setY(0);
	
	// ʵ����Բ
	Circle c;
	c.setRadius(10);
	c.setCenter(center);

	// �ж�
	int ret  = isInside(c, p);
	if (ret == 1) {
		cout << "����Բ��" << endl;
	}
	else if (ret == -1) {
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
	}

	
	system("pause");
	return 0;
}
