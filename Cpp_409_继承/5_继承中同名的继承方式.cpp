//#include<iostream>
//using namespace std;
//
//
//// 继承时,父类子类成员属性同名
//
//// 
//// 
//// 子类对象可以直接访问子类同名成员,直接访问即可
//// 子类对象访问父类同名成员,需要加作用域
////
//// 子类中出现与父类同名的成员函数,子类的同名成员函数会隐藏掉父类中所以同名成员函数
//// 这里 子类已经有同名的成员函数 func(), 
//// 而父类中的 func(int a) 已经被隐藏了,因此无法直接调用,需要写出作用域
//
//
//// 父类
//class Base
//{
//
//public:
//	int m_Age;
//	void func()
//	{
//		cout << "Base func的调用: " << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base func(int a)的调用: " << endl;
//	}
//};
//
//// 公共继承
//class Son :public Base
//{
//public:
//	int m_Age;
//	void func()
//	{
//		cout << "Son func的调用: " << endl;
//	}
//};
//
//// 同名成员属性
//void test01()
//{
//	Son s1;
//	s1.m_Age = 10;
//	s1.Base::m_Age = 40;
//	cout << "Son age: " << s1.m_Age << endl;
//	cout << "Base age: " << s1.Base::m_Age << endl;
//}
//
//// 同名成员函数
//void test02() 
//{
//	Son s2;
//	s2.func();
//	s2.Base::func();
//
//	// 子类中出现与父类同名的成员函数,子类的同名成员函数会隐藏掉父类中所以同名成员函数
//	// 这里 子类已经有同名的成员函数 func(), 
//	// 而父类中的 func(int a) 已经被隐藏了,因此无法直接调用,需要写出作用域
//	
//	// s2.func(100); // err
//	s2.Base::func(100); // ok
//
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}