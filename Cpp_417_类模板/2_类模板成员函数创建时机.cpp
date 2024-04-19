//#include<iostream>
//
//using namespace std;
//
////
//// 类模板成员函数的创建时机
//// 1.普通类中的成员函数一开始就可以创建
//// 2.类模板中的成员函数在调用的时候才创建
////  
//
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "ShowPerson1" << endl;
//	}
//};
//
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "ShowPerson2" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//
//	void func1()
//	{
//		// 因为不知道T是什么类型，所以在调用的时候才会创建
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//
//void test01()
//{
//	MyClass<Person1> p1;
//	p1.func1();
//	// 传入的参数是Person1类型，此时调用person2的成员函数报错
//	// p1.func2(); // err
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}