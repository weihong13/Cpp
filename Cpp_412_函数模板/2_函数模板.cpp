//#include <iostream>
//using namespace std;
//
//
//// 
//// C++中提供两种模板机制：函数模板 和 类模板
//// 
//// 函数模板
//// 
//// 作用：建立一个通用的函数，可以不具体指定返回值类型和参数类型，用一个虚拟的类型代表
//// 
//// 例如：void func(int a)
////		  T  func(T)
//// 
//// 语法：
////		template<typename T>
////		template 声明创建模板
////		typename 表明其后面的符号是一种数据类型，可以用 class代替
////		T	     通用的数据类型，名称可以替换，通常为大写 
//// 
//// 注意事项
//// 自动类型推导，必须推导出一致的数据类型才能使用
//// 模板必须要确定出T的数据类型，才能使用 
//// 
////
//
//
//// 交换两个未知类型的变量
//
//template<typename T>
//
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	// 利用函数模板交换
//	// 函数模板有两种使用方式
//
//	// 1.自动类型推导
//	mySwap(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	// 显示指定类型
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.123;
//	double d = 2.678;
//	mySwap(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	// 自动类型推导，必须推导出一致的数据类型才能使用
//	// mySwap(a,c) // err
//
//}
//
//
//// 模板必须要确定出T的数据类型，才能使用
//
//template<typename T>
//void func()
//{
//	cout << "func调用" << endl;
//}
//void test02()
//{
//	// func();  // 无法正常调用，必须确定T的类型
//	func<int>(); // 随便给定一种类型
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}