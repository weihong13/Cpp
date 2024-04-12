#include <iostream>
using namespace std;


// 
// 函数模板和普通函数的区别
// 
// 普通函数会发生隐式类型转换
// 
// 函数模板
// 自动类型推导 不会发生隐式类型转换
// 显示指定类型，会发生隐式类型转换
// 
// 调用规则
// 1.函数模板和普通函数都能实现，优先调用普通函数
// 2.可以通过空模板参数列表来强制调用函数模板
// 3.函数模板也可以发生重载
// 4.如果函数模板可以产生更好的匹配，优先调用函数模板
// 
// 
//


int Add1(int a, int b)
{
	return 0;
}

template<typename T>
int Add2(T a, T b)
{
	return a + b;
}


void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	// 普通函数，发生隐式类型转换
	cout << Add1(a, b) << endl;
	cout << Add1(a, c) << endl;

	// 自动类型推导，不会隐式类型转换
	cout << Add2(a, b) << endl;
	// cout << Add2(a, c) << endl;  // err

	// 显示指定类型，会发生隐式类型转换
	cout << Add2<int>(a, c) << endl;

}


// 调用规则
// 1.函数模板和普通函数都能实现，优先调用普通函数
// 2.可以通过空模板参数列表来强制调用函数模板
// 3.函数模板也可以发生重载
// 4.如果函数模板可以产生更好的匹配，优先调用函数模板

void func(int a, int b)
{
	cout << "普通函数的调用" << endl;
}

template<typename T>
void func(T a, T b)
{
	cout << "函数模板的调用" << endl;

}

template<typename T>
void func(T a, T b, T c)
{
	cout << "重载 函数模板的调用" << endl;

}

void test02()
{
	int a = 10;
	int b = 20;
	// 1.函数模板和普通函数都能实现，优先调用普通函数
	func(a, b);
	// 2.可以通过空模板参数列表来强制调用函数模板
	func<>(a, b);
	// 3.函数模板也可以发生重载
	func(a, b, 100);
	// 4.如果函数模板可以产生更好的匹配，优先调用函数模板
	char c = 'c';
	char d = 'd';
	func(c, d); // 调用普通函数需要类型转换，比较繁琐，因此这里直接调用 函数模板
}

int main()
{
	// test01();
	test02();

	system("pause");
	return 0;
}