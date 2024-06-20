#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


/*
	函数重载：在同一个作用域内，函数名字相同，参数（个数、顺序、类型）不同，就叫函数重载
	在调用重载函数时，编译器会根据实际的参数情况选择一个最合适的参数去调用

	为什么C++可以重载，而C语言不能

		因为C语言编译之后的函数名字和编译之前的函数名字相同，会出现重定义错误
		而C++编译之后的 函数名字与参数有关，所以即使函数名字相同，
		由于参数不同，导致编译后的函数名字也不同，所以就不会产生重定义错误。

	函数参数的默认值：
		当前形参给了默认值，那么之后的形参也必须给默认值
		函数声明的位置有了默认值，那么函数实现的时候就不能有默认值

	函数重载注意事项：
		当函数重载和默认值同时存在时，要考虑是否存在函数调用的二义性。

	引用作为重载参数：
		



*/
//void fun()
//{
//	cout << " 无参数 " << endl;
//}
//void fun(int a)
//{
//	cout << " int " << endl;
//}
//void fun(int a,double b)
//{
//	cout << " int double " << endl;
//}
//void fun(double a, int b)
//{
//	cout << " double int " << endl;
//}
//
//void fun(int a, int b = 10)
//{
//	cout << " int int b = 10" << endl;
//}
//
//void work(int &a)
//{
//	cout << "int &a" << endl;
//}
//
//void work(const int& a)
//{
//	cout << "const int &a" << endl;
//}
//
//
//int main()
//{
//	fun();
//	// fun(1);
//	fun(1, 1.2);
//	fun(1.2, 1);
//	// fun(1); // error 当函数重载和默认值同时存在时，要考虑是否存在函数调用的二义性。
//
//	int a = 10;
//	work(a); // 左值引用
//	work(2); // 万能引用
//	return 0;
//}