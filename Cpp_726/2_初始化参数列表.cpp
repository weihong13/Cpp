#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
	构造函数是用来给成员变量赋值的

	那什么是用来初始化成员变量的？

	初始化参数列表

	初始化参数列表的特点
		只能在构造函数中使用
		初始化的顺序和成员变量的顺序一致，和初始化参数列表的顺序无关
		常量和引用的成员变量，必须进行在初始化参数列表中，进行初始化
		
*/

//class A
//{
//	int a;
//	int b;
//	int c;
//	const int d;
//	int& e;
//public:
//	A(int d, int e1) : a(2), c(d), b(c), d(a), e(e1)
//	{
//		// b是随机值，初始化参数列表是按照成员变量的顺序赋值的。
//		// 也就是 先给 b赋值 ,赋值的顺序是 a b c d e，不是 a c b d e
//		// 给 b 赋值时，c还为赋值，c是随机值，所以b就是随机值了。
//		cout << "  a:" << a
//			 << "  b:" << b 
//			 << "  c:" << c
//			 << "  d:" << d
//			 << "  e:" << e << endl;
//	}
//};
// 类对象作为类成员
class A {

};

class B {
	A a;
};

// B类中 有A类的对象a作为成员
// 当创建B类的对象b时，A，B构造和析构的顺序是？
// 先构造a，再构造b
// 先析构b，在析构a
// 
// 其他类对象作为本类成员，先构造其他类对象，再构造自身
// 析构顺序与构造相反

class Phone {
public:
	string pName;

	Phone(string p_name):pName(p_name) {
		cout<< "Phone 的构造函数" << endl;
	}

	~Phone() {
		cout << "Phone 的析构函数" << endl;

	}

};

class Person
{
public:
	string name;
	Phone phone;
	// phone(p_name) = Phone phone = p_name，隐式类型转换
	Person(string m_name, string p_name) :name(m_name), phone(p_name) {
		cout << "Person 的构造函数" << endl;

	}
	~Person() {

		cout << "Person 的析构函数" << endl;

	}
};


void test() {
	Person p("张三", "苹果X");

	cout <<p.name <<"拿的手机是： " <<p.phone.pName <<endl;

}

int main() {

	test();
	system("pause");
	return 0;

}
