//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////
//// vector��������Զ�����������
////
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void printPerson(Person p)
//{
//	cout << "������" << p.m_Name 
//		<< "  ���䣺" << p.m_Age << endl;
//}
//
//
//void test01()
//{
//	Person p1("weihong1", 23);
//	Person p2("weihong2", 24);
//	Person p3("weihong3", 25);
//	Person p4("weihong4", 26);
//	Person p5("weihong5", 27);
//
//	vector<Person> pArr;
//	pArr.push_back(p1);
//	pArr.push_back(p2);
//	pArr.push_back(p3);
//	pArr.push_back(p4);
//	pArr.push_back(p5);
//
//	// ͨ������������
//	for (vector<Person>::iterator it = pArr.begin(); it != pArr.end(); it++)
//	{
//		cout << "������" << it->m_Name
//			<< "  ���䣺" << (*it).m_Age << endl;
//	}
//	// ͨ�� �㷨����
//	// for_each(pArr.begin(), pArr.end(), printPerson);
//
//
//}
//
//// �����д��ָ��
//void test02()
//{
//	Person p1("weihong1", 23);
//	Person p2("weihong2", 24);
//	Person p3("weihong3", 25);
//	Person p4("weihong4", 26);
//	Person p5("weihong5", 27);
//
//	vector<Person*> pArr;
//	pArr.push_back(&p1);
//	pArr.push_back(&p2);
//	pArr.push_back(&p3);
//	pArr.push_back(&p4);
//	pArr.push_back(&p5);
//
//	// ͨ������������
//	for (vector<Person*>::iterator it = pArr.begin(); it != pArr.end(); it++)
//	{
//		cout << "::������" << (*it)->m_Name
//			<< "  ���䣺" << (*(*it)).m_Age << endl;
//	}
//	// ͨ�� �㷨����
//	// for_each(pArr.begin(), pArr.end(), printPerson);
//
//
//}
//
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}