//#include <iostream>
//#include <string>
//using namespace std;
//
//
////
//// ��ģ������Ԫ
//// 
//// ȫ�ֺ�������ʵ��---ֱ��������������Ԫ����
//// ȫ�ֺ�������ʵ��---��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
////
//
//
//// ȫ�ֺ�������ʵ��---��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
//template<class T1, class T2>
//class Person;
//// ȫ�ֺ�������ʵ��---��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
//template<class T1, class T2>
//void showPerson2(Person<T1, T2> p)
//{
//	cout << "������" << p.m_Name << endl;
//	cout << "���䣺" << p.m_Age << endl;
//}
//
//
//
//template<class T1, class T2>
//class Person
//{
//	// ��Ԫȫ�ֺ���������ʵ��
//	friend void showPerson1(Person<T1, T2> p)
//	{
//		cout << "������" << p.m_Name << endl;
//		cout << "���䣺" << p.m_Age << endl;
//	}
//
//	// ��Ԫȫ�ֺ�������ʵ��
//	// �ӿ�ģ������б�
//	// �����ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪�������������
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
//// ��Ԫ����ʵ�ֲ���
//void test01()
//{
//	Person<string, int> p1("weihong", 24);
//	showPerson1(p1);
//}
//
//// ��Ԫ����ʵ�ֲ���
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