//#include<iostream>
//#include<string>
//using namespace std;
//
//// ��װһ�������壬��������ߣ����������������Ƚ�����������Ĵ�С
//
//class Cube
//{
//private:
//	int length; // ��
//	int width;  // ��
//	int height; // ��
//
//public:
//	// ���ó�
//	void setLength(int s_l) {
//		length = s_l;
//	}
//	// ��ȡ��
//	int getLength() {
//		return length;
//	}
//	// ���ÿ�
//	void setWidth(int s_w) {
//		width = s_w;
//	}
//	// ��ȡ��
//	int getWidth() {
//		return width;
//	}
//	// ���ø�
//	void setHeight(int s_h) {
//		height = s_h;
//	}
//	// ��ȡ��
//	int getHeight() {
//		return height;
//	}
//	// �������
//	int calculateSize() {
//		return 2 * length * width + 2 * length * height + 2 * width * height;
//	}
//	// �������
//	int calculateVolume() {
//		return length * width * height;
//	}
//	// �Ƚϴ�С
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
//	cout << "c1�����Ϊ��" << s << endl;
//	cout << "c1�����Ϊ��" << v << endl;
//
//	Cube c2;
//	c2.setLength(10);
//	c2.setWidth(10);
//	c2.setHeight(20);
//
//	int ret = c2.compareVolume(c1);
//	if (ret == 1) {
//		cout << "c2��" << endl;
//	}
//	else if (ret == -1) {
//		cout << "c1��" << endl;
//	}
//	else {
//		cout << "һ����" << endl;
//	}
//
//	system("pause");
//	return 0;
//}