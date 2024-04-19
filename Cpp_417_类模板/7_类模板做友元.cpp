//#include <iostream>
//#include <string>
//using namespace std;
//
//
////
//// 类模板做友元
//// 
//// 全局函数类内实现---直接在类内声明友元即可
//// 全局函数内外实现---需要提前让编译器知道全局函数的存在
////
//
//
//// 全局函数内外实现---需要提前让编译器知道全局函数的存在
//template<class T1, class T2>
//class Person;
//// 全局函数内外实现---需要提前让编译器知道全局函数的存在
//template<class T1, class T2>
//void showPerson2(Person<T1, T2> p)
//{
//	cout << "姓名：" << p.m_Name << endl;
//	cout << "年龄：" << p.m_Age << endl;
//}
//
//
//
//template<class T1, class T2>
//class Person
//{
//	// 友元全局函数的类内实现
//	friend void showPerson1(Person<T1, T2> p)
//	{
//		cout << "姓名：" << p.m_Name << endl;
//		cout << "年龄：" << p.m_Age << endl;
//	}
//
//	// 友元全局函数类外实现
//	// 加空模板参数列表
//	// 如果是全局函数是类外实现，需要让编译器提前知道这个函数存在
//	friend void showPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//// 友元类内实现测试
//void test01()
//{
//	Person<string, int> p1("weihong", 24);
//	showPerson1(p1);
//}
//
//// 友元类外实现测试
//void test02()
//{
//	Person<string, int> p2("hongwei", 25);
//	showPerson2(p2);
//}
//
//int main()
//{
//
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}