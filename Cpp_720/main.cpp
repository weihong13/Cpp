#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

//
// C++ 中类和结构体的区别
//	
// C++中的结构体和类没啥区别
//		唯一的区别
//				类的默认权限为私有
//				结构体默认权限为公有
//

//
// 有参构造 无参构造
//

//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参" << endl;
//	}
//	explicit Person(int n)
//	{
//		cout << "有参" << endl;
//		this->num = n;
//	}
//
//	int num;
//};
/*
* 构造函数的调用方式
*	括号法
*	隐式法
*	显式法
*/
//int main()
//{
//	Person p1;
//	Person p2(5);
//
//	Person p1(); // 这样会被当作为一个函数声明
//
//	Person p3(3); // 括号法
//	// Person p4 = 3;// 隐式法，可以通过 explicit 避免隐式法调用构造函数
//	Person p5 = Person(3); // 显式法
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
//	Person* pArr = new Person[3]{ Person("weihong","男",20),Person("weihong1","男",21), Person("weihong2","男",22) };
//
//	for (int i = 0; i < 3; i++)
//	{
//		pArr[i].print();
//	}
//
//	return 0;
//}
