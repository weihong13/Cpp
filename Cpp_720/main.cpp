#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

//
// C++ ����ͽṹ�������
//	
// C++�еĽṹ�����ûɶ����
//		Ψһ������
//				���Ĭ��Ȩ��Ϊ˽��
//				�ṹ��Ĭ��Ȩ��Ϊ����
//

//
// �вι��� �޲ι���
//

//class Person
//{
//public:
//	Person()
//	{
//		cout << "�޲�" << endl;
//	}
//	explicit Person(int n)
//	{
//		cout << "�в�" << endl;
//		this->num = n;
//	}
//
//	int num;
//};
/*
* ���캯���ĵ��÷�ʽ
*	���ŷ�
*	��ʽ��
*	��ʽ��
*/
//int main()
//{
//	Person p1;
//	Person p2(5);
//
//	Person p1(); // �����ᱻ����Ϊһ����������
//
//	Person p3(3); // ���ŷ�
//	// Person p4 = 3;// ��ʽ��������ͨ�� explicit ������ʽ�����ù��캯��
//	Person p5 = Person(3); // ��ʽ��
//
//	return 0;
//}

//class Rectangle
//{
//public:
//	Rectangle(){}
//	Rectangle(int length,int width)
//	{
//		this->length = length;
//		this->width = width;
//	}
//	int getLength()
//	{
//		return this->length;
//	}
//	void setLength(int lenth)
//	{
//		this->length = length;
//	}
//	int getWidth()
//	{
//		return this->width;
//	}
//	void setWidth(int width)
//	{
//		this->width = width;
//	}
//	int getArea()
//	{
//		
//		return length * width;
//	}
//private:
//	int length;
//	int width;
//};
//int main()
//{
//	Rectangle a1;
//	a1.setLength(1);
//	a1.setWidth(2);
//
//
//	Rectangle a2(3, 4);
//
//	Rectangle a3 = Rectangle(5, 6);
//
//	Rectangle a4 = { 7,8 };
//
//	return 0;
//}

//class Person
//{
//public:
//
//	Person(string name, string sex, int age)
//	{
//		this->name = name;
//		this->sex = sex;
//		this->age = age;
//	}
//
//	void print()
//	{
//		cout << name << " " << sex << " " << age << endl;
//	}
//	string name;
//	string sex;
//	int age;
//};
//int main()
//{
//	Person* pArr = new Person[3]{ Person("weihong","��",20),Person("weihong1","��",21), Person("weihong2","��",22) };
//
//	for (int i = 0; i < 3; i++)
//	{
//		pArr[i].print();
//	}
//
//	return 0;
//}
