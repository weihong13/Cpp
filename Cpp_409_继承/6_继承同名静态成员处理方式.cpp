//#include<iostream>
//using namespace std;
//
//
//// 继承时,父类同名静态成员在子类对象上的访问方式
//
//// 
//// 同非静态同名一致
//// 子类对象可以直接访问子类同名成员,直接访问即可
//// 子类对象访问父类同名成员,需要加作用域
////
//
//
//
//// 父类
//class Base
//{
//
//public:
//	// 类内声明,类外初始化
//	static int m_Age;
//	static void func()
//	{
//		cout << "Base func的调用: " << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base func(int a)的调用: " << endl;
//	}
//
//};
//// 类内声明,类外初始化
//int Base::m_Age = 200;
//
//// 公共继承
//class Son :public Base
//{
//public:
//	// 类内声明,类外初始化
//	static int m_Age;
//	static void func()
//	{
//		cout << "Son func的调用: " << endl;
//	}
//
//	
//};
//// 类内声明,类外初始化
//int Son::m_Age = 100;
//
//// 静态同名成员属性
//void test01()
//{
//	// 静态的属性有两种访问方式
//	// 1. 通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s1;
//	cout << "Son age: " << s1.m_Age << endl;
//	cout << "Base age: " << s1.Base::m_Age << endl;
//
//	// 2.通过类名访问
//	cout << "通过类名访问" << endl;
//	cout << "Son age: " << Son::m_Age << endl;
//	cout << "Base age: " << Son::Base::m_Age << endl; // 通过子类类名,访问父类属性
//	
//}
//
//// 静态同名成员函数
//void test02()
//{
//	// 静态的属性有两种访问方式
//	// 1. 通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s1;
//	s1.func();
//	s1.Base::func();
//
//	// 2.通过类名访问
//	cout << "通过类名访问" << endl;
//	Son::func();
//	Son::Base::func();
//
//	// 同非静态
//	// Son::func(100); // err
//	Son::Base::func(100);
//
//
//}
//
//int main() {
//
//	// test01();
//	test02();
//
//	system("pause");
//	return 0;
//}