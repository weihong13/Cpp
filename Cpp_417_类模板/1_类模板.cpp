//#include<iostream>
//#include<string>
//using namespace std;
//
////
//// 类模板---一个通用的类 
//// 
//// 类模板和函数模板的区别
//// 1.类模板没有自动类型推导的使用方式
//// 2.类模板在模板的参数列表里可以有默认参数
////
//
//// 语法 
//// 2.类模板在模板的参数列表里可以有默认参数 第二个参数默认为int类型
//template<class NameType, class AgeType = int>
//
//class Person
//{
//public:
//	Person(NameType name,AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void ShowPerson()
//	{
//		cout << "姓名：" << this->m_Name << endl;
//		cout << "年龄：" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//// 类模板没有自动类型推导
//void test01()
//{
//	Person<string,int> p("张三", 18);
//	p.ShowPerson();
//
//	// 类模板没有自动类型推导
//	// Person p("李四", 20); // err
//}
//
//// 2.类模板在模板的参数列表里可以有默认参数
//void test02()
//{
//	// 类型模板中设置了默认参数的，在显示类型时，可以省略
//	Person<string> p1("李四", 20);
//	p1.ShowPerson();
//
//	// 虽然设置了第二个默认参数为int类型，当也可以更改
//	Person<string, string>p2("李四", "lishi");
//	p2.ShowPerson();
//}
//
//
//int main()
//
//{
//
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}