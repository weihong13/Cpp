#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using  namespace std;


/*
静态成员：
	静态成员变量：
		（1）类内声明、类外初始化
		（2）可以通过作用域直接访问类内的公有静态成员变量
		（3）不属于某一个对象，所有类的对象，共同访问同一个静态成员对象
		（4）在编译阶段就分配内存，在主函数之前就进行构造
		（5）静态成员对象不占用对象（类）的内存，空类（成员变量全是静态成员变量）的大小为1
		（6）发生继承时，静态成员变量不会被继承，父类子类共享同一个静态成员

	静态成员函数
		没有 this 指针，不能访问非静态的成员变量和成员函数

空指针访问成员函数
	C++中 空指针是可以调用成员函数的，但是要避免 this访问成员变量

成员变量和成员函数分开存储
	只有非静态的成员变量属于类的对象上，其他都不属于
	非静态成员变量，属于类的对象上
	静态成员变量，不属于类的对象上
	非静态成员函数，不属于类的对象上
	静态成员函数，不属于类的对象上

*/
class A
{
public:
	static int num;
	int b;

	void work() {};
	static void func()
	{
		// 没有 this 指针，不能访问非静态的成员变量和成员函数
		// this->b = 2;  // error
		// b = 2;		 // error
		// work();		 // error
	}
};
class B:public A
{
};

class C
{
public:
	static int num;
};

class D
{
};

// 静态成员变量必须在类外初始化
int A::num = 0;
int main()
{
	// 通过作用域可以访问公有的静态成员变量
	A::num = 0;

	// 所有对象共享同一个静态成员变量
	A a, b;
	a.num++;
	b.num++;
	// 2
	cout << "num: " << A::num << endl;

	// 继承后，父类子类共享同一个静态成员变量
	B d;
	d.num++;
	// 3
	cout << "num: " << B::num << endl;
	// 静态成员变量 不占对象（类）的内存
	cout << "sizeof(a): " << sizeof(a) << endl;
	cout << "sizeof(A): " << sizeof(A) << endl;


	// 空类（成员变量均为静态）的大小为 1
	C c;
	cout << "sizeof(c): " << sizeof(c) << endl;
	cout << "sizeof(C): " << sizeof(C) << endl;
	// 空类的大小为 1
	// 空的对象，占一个字节
	// C++ 编译器会给每一个空对象也分配一个空间
	D e;
	cout << "sizeof(D): " << sizeof(e) << endl;

	// C++中 空指针是可以调用成员函数的，但是要避免 this访问成员变量
	//A* a = nullptr;
	//a.work();

	return 0;
}



