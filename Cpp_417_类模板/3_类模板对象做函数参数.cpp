//#include<iostream>
//
//using namespace std;
//
////
//// ��ģ���������������--- ��ģ��ʵ���������������εķ�ʽ
//// 
//// һ����3�д��뷽ʽ
//// 1.ָ����������� --- ֱ����ʾ����������������
//// 2.����ģ�廯     --- �������еĲ�����Ϊģ����д���
//// 3.������ģ�廯   --- �������������ģ�廯���д���
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
//		cout << "������" << this->m_Name << endl;
//		cout << "���䣺" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//// 1.ָ����������� --- ֱ����ʾ����������������
//void func01(Person<string, int> &p) // ��������ֱ���õ�p1���壬���Ǹ��Ƶ��β�
//{
//	p.showPerson();
//}
//
//// 2.����ģ�廯     --- �������еĲ�����Ϊģ����д���
//template<typename Name,typename Age>
//void func02(Person<Name, Age> &p)
//{
//	p.showPerson();
//	cout << "Name������Ϊ" << typeid(Name).name() << endl;
//	cout << "Age������Ϊ" << typeid(Age).name() << endl;
//}
//
//// 3.������ģ�廯   --- �������������ģ�廯���д���
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
//	Person<string, int> p1("����", 20);
//	func01(p1);
//
//	func02(p1);
//
//	Person<string, int> p2("����", 24);
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