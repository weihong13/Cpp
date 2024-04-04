#include"circle.h"
#include"point.h"

// 点和圆的关系



// 
int Distance(Circle &c, Point &p) {
	int d = 
		(p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) +
		(p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
	return d;
}
//
int isInside(Circle& c, Point& p) {
	//半径平房
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
	// 实例化点
	Point p;
	p.setX(0);
	p.setY(101);
	// 实例化圆心
	Point center;
	center.setX(0);
	center.setY(0);
	
	// 实例化圆
	Circle c;
	c.setRadius(10);
	c.setCenter(center);

	// 判断
	int ret  = isInside(c, p);
	if (ret == 1) {
		cout << "点在圆外" << endl;
	}
	else if (ret == -1) {
		cout << "点在圆内" << endl;
	}
	else {
		cout << "点在圆上" << endl;
	}

	
	system("pause");
	return 0;
}
