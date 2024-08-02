#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#include<vector>

class A
{
	int num;
	int* p;
public:
	A() :num(0), p(nullptr) {}
	A(int num) :num(num), p(new int(num)) {}
	~A()
	{
		if (p) delete p;
	}
	A& operator= (const A& other)
	{
		if (p) delete p; //释放原来指向的堆区内存，拷贝构造没有这一步骤
		num = other.num;
		p = new int(num); //指向新的堆区内存

		return *this;
	}
};

int& func()
{
	int a = 3;
	return a;
}


int main() {
	int a1 = func(); // ok，内部的a被a1接收，虽然函数调用完a就销毁了，但a1中已经有a的值了

	int& a2 = func();// error，使用引用接收引用，a2就是函数内部的a，a被销毁，a2也就没了

	A a(2), b(3),c;
	c = a = b; // 如果类内没有实现赋值运算符，编译器则会提供默认的赋值运算符，每个成员都会被赋值，此时要注意浅拷贝问题
	return 0;
}
