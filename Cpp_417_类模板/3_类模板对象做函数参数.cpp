//#include<iostream>
//
//using namespace std;
//
////
//// 类模板对象做函数参数--- 类模板实例出对象，向函数传参的方式
//// 
//// 一共有3中传入方式
//// 1.指定传入的类型 --- 直接显示传入对象的数据类型
//// 2.参数模板化     --- 将对象中的参数变为模板进行传递
//// 3.整个类模板化   --- 将这个对象类型模板化进行传递
//// 
////
//
//
//template<class NameType, class AgeType>
//class Person
//{
//public:
//
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "姓名：" << this->m_Name << endl;
//		cout << "年龄：" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//// 1.指定传入的类型 --- 直接显示传入对象的数据类型
//void func01(Person<string, int> &p) // 引用类型直接拿到p1本体，不是复制的形参
//{
//	p.showPerson();
//}
//
//// 2.参数模板化     --- 将对象中的参数变为模板进行传递
//template<typename Name,typename Age>
//void func02(Person<Name, Age> &p)
//{
//	p.showPerson();
//	cout << "Name的类型为" << typeid(Name).name() << endl;
//	cout << "Age的类型为" << typeid(Age).name() << endl;
//}
//
//// 3.整个类模板化   --- 将这个对象类型模板化进行传递
//template<typename T>
//void func03(T &p)
//{
//	p.showPerson();
//}
//
//
//
//
//void test01()
//{
//	Person<string, int> p1("张三", 20);
//	func01(p1);
//
//	func02(p1);
//
//	Person<string, int> p2("李四", 24);
//	func01(p2);
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