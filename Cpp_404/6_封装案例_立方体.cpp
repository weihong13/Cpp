//#include<iostream>
//#include<string>
//using namespace std;
//
//// 封装一个立方体，包括长宽高，计算面积、体积、比较两个立方体的大小
//
//class Cube
//{
//private:
//	int length; // 长
//	int width;  // 宽
//	int height; // 高
//
//public:
//	// 设置长
//	void setLength(int s_l) {
//		length = s_l;
//	}
//	// 读取长
//	int getLength() {
//		return length;
//	}
//	// 设置宽
//	void setWidth(int s_w) {
//		width = s_w;
//	}
//	// 读取宽
//	int getWidth() {
//		return width;
//	}
//	// 设置高
//	void setHeight(int s_h) {
//		height = s_h;
//	}
//	// 读取高
//	int getHeight() {
//		return height;
//	}
//	// 计算面积
//	int calculateSize() {
//		return 2 * length * width + 2 * length * height + 2 * width * height;
//	}
//	// 计算体积
//	int calculateVolume() {
//		return length * width * height;
//	}
//	// 比较大小
//	int compareVolume(Cube &c) {
//		if (calculateVolume() > c.calculateVolume()) {
//			return 1;
//		}
//		else if (calculateVolume() < c.calculateVolume()) {
//			return -1;
//		}
//		else {
//			return 0;
//		}
//	}
//};
//
//int main() {
//	Cube c1;
//	c1.setLength(10);
//	c1.setWidth(10);
//	c1.setHeight(10);
//	int s = c1.calculateSize();
//	int v = c1.calculateVolume();
//	cout << "c1的面积为：" << s << endl;
//	cout << "c1的体积为：" << v << endl;
//
//	Cube c2;
//	c2.setLength(10);
//	c2.setWidth(10);
//	c2.setHeight(20);
//
//	int ret = c2.compareVolume(c1);
//	if (ret == 1) {
//		cout << "c2大" << endl;
//	}
//	else if (ret == -1) {
//		cout << "c1大" << endl;
//	}
//	else {
//		cout << "一样大" << endl;
//	}
//
//	system("pause");
//	return 0;
//}