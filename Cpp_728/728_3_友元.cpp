#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

/*
友元：
	好处：可以通过友元在类外访问类内的私有 和 受保护类型的成员
	坏处：破坏了类的封装性
	友元分为友元函数和友元类
*/
class A
{

	int num;
public:
	friend void fun();  //友元函数
	friend class B;
	A()
	{
		num = 0;
	}
};

A a;
void fun()
{
	a.num = 2;
	cout << a.num << endl;
}

class B
{
public:
	void fun()
	{
		a.num = 2;
	}
};
int main()
{
	fun();
}
