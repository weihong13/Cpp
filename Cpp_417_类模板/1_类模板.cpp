//#include<iostream>
//#include<string>
//using namespace std;
//
////
//// ��ģ��---һ��ͨ�õ��� 
//// 
//// ��ģ��ͺ���ģ�������
//// 1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//// 2.��ģ����ģ��Ĳ����б��������Ĭ�ϲ���
////
//
//// �﷨ 
//// 2.��ģ����ģ��Ĳ����б��������Ĭ�ϲ��� �ڶ�������Ĭ��Ϊint����
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
//		cout << "������" << this->m_Name << endl;
//		cout << "���䣺" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//// ��ģ��û���Զ������Ƶ�
//void test01()
//{
//	Person<string,int> p("����", 18);
//	p.ShowPerson();
//
//	// ��ģ��û���Զ������Ƶ�
//	// Person p("����", 20); // err
//}
//
//// 2.��ģ����ģ��Ĳ����б��������Ĭ�ϲ���
//void test02()
//{
//	// ����ģ����������Ĭ�ϲ����ģ�����ʾ����ʱ������ʡ��
//	Person<string> p1("����", 20);
//	p1.ShowPerson();
//
//	// ��Ȼ�����˵ڶ���Ĭ�ϲ���Ϊint���ͣ���Ҳ���Ը���
//	Person<string, string>p2("����", "lishi");
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