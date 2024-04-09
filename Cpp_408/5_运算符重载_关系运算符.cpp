//#include<iostream>
//#include<string>
//
//using namespace std;
//
////
//// 重载关系运算符 ==   !=
//// 
////
//
//class Person
//{
//public:
//	string m_Name;
//	int m_age;
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_age = age;
//	}
//
//	// == 重载
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_age == p.m_age)
//		{
//			return true;
//		}
//		else 
//		{
//			return false;
//		}
//	}
//	// != 重载
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name != p.m_Name || this->m_age != p.m_age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//};
//
//// ==
//void test01() 
//{
//	Person p1("weiheong", 24);
//	Person p2("weihong", 24);
//	if (p1 == p2)
//	{
//		cout << "p1 和 p2 相等" << endl;
//	}
//	else
//	{
//		cout << "p1 和 p2 不相等" << endl;
//	}
//}
//
//// !=
//void test02()
//{
//	Person p1("weihong", 24);
//	Person p2("weihong", 24);
//	if (p1 != p2)
//	{
//		cout << "p1 和 p2 不相等" << endl;
//	}
//	else
//	{
//		cout << "p1 和 p2 相等" << endl;
//	}
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