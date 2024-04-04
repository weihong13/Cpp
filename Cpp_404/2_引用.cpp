#include<iostream>
using namespace std;

// 引用--起别名

// 类型 &别名 = 原名

//
// 引用必须初始化
// 引用初始化后，不能更改
//

//int main(){
//
//	int a = 10;
//	int& b = a;
//
//	int c = 20;
//	// 赋值操作，并不是更改别名
//	b = c; // a = b = c = 20;
//	c = 100;
//	cout << "a = " << a << endl; // 20
//	cout << "b = " << b << endl; // 20
//	cout << "c = " << c << endl; // 100
//
//
//	b = 30;
//	cout << "a = " << a << endl; // 30
//
//
//	system("pause");
//	return 0;
//}


//
// 引用做函数参数
//

// 交换两个数的值

//// 值传递
//void Swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// 指针传递
//void Swap1(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//// 引用传递
//void Swap2(int& x, int& y) {
//	// 这里的 形参x、y，是实参a、b的别名
//	// 更改别名x、y，实参a、b 也会改变
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	// 值传递
//	Swap(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "-----------" <<endl;
//	// 指针传递
//	Swap1(&a, &b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "-----------" << endl;
//	// 引用传递 - 形参也会改变实参
//	Swap2(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "-----------" << endl;
//
//
//	system("pause");
//	return 0;
//}


//
// 引用做函数返回值 
// 
// 1、局部变量的引用不能返回
// 2、函数调用可以做左值--如果函数的返回是一个引用类型，该函数可以做左值
// 
// 引用的本质在C++ 内部实现 本质是一个指针常量
//  

//// 返回局部变量的引用 // err
//int& test1() {
//	int a = 10; // 局部变量，在栈区，函数调用之后被销毁
//	
//	return a; // 返回值
//}
// 2、函数调用可以做左值 

//int& test2() {
//	// 全局变量，在全局区，函数调用之后不会销毁
//	static int a = 10;
//	return a;
//}
//
//int main() {
//
//	// 返回的是局部变量的引用，函数调用的时候就销毁了
//	//int& ref = test1(); // err 
//	//cout << "ref= " << ref << endl;
//	//cout << "ref= " << ref << endl;
//
//	int& ref = test2();
//	cout << "ref= " << ref << endl; // 10
//	cout << "ref= " << ref << endl; // 10
//
//	//
//	// 直接对函数赋值
//	// 因为函数返回的是 静态变量a的引用，可以直接赋值
//	// 赋值之后，a的值改变了
//	test2() = 1000;
//	// ref 也是 a的一个引用，本质上都是a
//	cout << "ref= " << ref << endl; // 1000
//
//
//	system("pause");
//	return 0;
//}




//// 引用的本质在C++ 内部实现 本质是一个指针常量
//
//void func(int& ref) {
//	ref = 1000;
//	// ref是引用类型， 自动换为*ref = 1000
//}
//
//int main() {
//
//	int a = 0;
//	// 本质上，在内部是一个指针常量，
//	// int* const ref = &a; 和这段代码一致
//	// const 在* 右，
//	// *ref = 100 // 通过解引用修改值可以
//	// ref = &b // 换地址不行  
//	int& ref = a;
//
//	// 相当于*ref = 100;
//	ref = 100; // 内部发现ref是引用。自动转换为 *ref = 100
//
//	func(ref);
//	system("pause");
//	return 0;
//}