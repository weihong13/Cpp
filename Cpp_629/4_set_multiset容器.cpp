#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <string>
using namespace std;

/*
	set/multiset��������

	���:
		����Ԫ�ض����ڲ���ʱ�Զ�������
	
	����:
		get/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
	
	set��multiset����:
		��set���������������ظ���Ԫ��
		��multiset�������������ظ���Ԫ��

����:
	set<T> st;          //Ĭ�Ϲ��캯��:
	set(const set &st); //�������캯��

��ֵ:
	set& operator=(const set &st);  //���صȺŲ�����


��С�ͽ���
	size(); //����������Ԫ�ص���Ŀ
	empty(); //�ж������Ƿ�Ϊ��

�����ɾ��
	insert(elem);    //�������в���Ԫ�ء�
	clear();         //�������Ԫ��
	erase(pos);      //ɾ��pos ��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
	erase(beg, end); //ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
	erase(elem);    //ɾ��������ֵΪelem��Ԫ�ء�

���Һ�ͳ��
	find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ�����;�������ڣ�����set.end();
	count(key); //ͳ��key��Ԫ�ظ���

set��multiset����
	set�����Բ����ظ����ݣ���multiset����
	set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
	multiset���������ݣ���˿��Բ����ظ�����

����Ĵ���
		��������:
			�ɶԳ��ֵ����ݣ����ö�����Է�����������
		���ִ�����ʽ:
			pair<type,type>p( value1,value2 );
			pair<type,type>p=make_pair( value1,value2 );
set����
	ѧϰĿ��:
		set����Ĭ���������Ϊ��С����������θı��������
	��Ҫ������:
		���÷º��������Ըı��������
*/

//void printSet(const set<int> s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " " ;
//	}
//	cout << endl;
//}
//void printMultiset(const multiset<int> ms)
//{
//	for (set<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// ���Һ�ͳ��
//// find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ�����;�������ڣ�����set.end();
//// count(key); //ͳ��key��Ԫ�ظ���
//void test01()
//{
//	set<int> st;
//
//	st.insert(2);
//	st.insert(5);
//	st.insert(4);
//	printSet(st);
//
//
//	// find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ�����;�������ڣ�����set.end();
//
//	set<int>::iterator it = st.find(6);
//	if (it != st.end())
//	{
//		cout << "�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "������" << endl;
//
//	}
//
//	// count(key); //ͳ��key��Ԫ�ظ���
//	cout << st.count(2) << endl;
//}
//
///*
//set��multiset����
//	set�����Բ����ظ����ݣ���multiset����
//	set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//	multiset���������ݣ���˿��Բ����ظ�����
//*/
//void test02()
//{
//	set<int> st;
//
//	// set�Ĳ���᷵��һ�����顣pair<iterator, bool>
//	// ����λ�õĵ��������Ƿ����ɹ�
//	pair<set<int>::iterator, bool>  ret = st.insert(8);
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ���" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ�ܣ�" << endl;
//	}
//	ret = st.insert(8);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ���" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ�ܣ�" << endl;
//	}
//	printSet(st);
//
//	multiset<int> mst;
//	mst.insert(8);
//	mst.insert(8);
//	mst.insert(8);
//	printMultiset(mst);
//}
///*
//����Ĵ���
//		��������:
//			�ɶԳ��ֵ����ݣ����ö�����Է�����������
//		���ִ�����ʽ:
//			pair<type,type>p( value1,value2 );
//			pair<type,type>p=make_pair( value1,value2 );
//
//*/
//
//void test03()
//{
//	pair<string, int> p("����", 56);
//	cout << "������" << p.first << "���䣺" << p.second << endl;
//	pair<string, int> p1 = make_pair(", ����", 45);
//
//	cout << "������" << p.first << ", ���䣺" << p.second << endl;
//
//}
///*
//set����
//	ѧϰĿ��:
//		set����Ĭ���������Ϊ��С����������θı��������
//	��Ҫ������:
//		���÷º��������Ըı��������
//		
//		�º����������˺������õ�С���� ()
//*/
//
//// set ����������͵�����
//class MyCmp
//{
//public:
//	// () ������������ 
//	// const �޶� ���� () ��set�������޸�v1��v2��ֵ
//	bool operator()(int v1,int v2) const
//	{
//		return v1 > v2;
//	}
//};
//void test04()
//{
//	// Ĭ�ϴ�С����
//	set<int> st;
//	st.insert(5);
//	st.insert(2);
//	st.insert(1);
//	st.insert(3);
//	st.insert(4);
//
//	printSet(st);
//
//	// ָ���������Ϊ �Ӵ�С
//	set<int, MyCmp> s2;
//	s2.insert(5);
//	s2.insert(2);
//	s2.insert(1);
//	s2.insert(3);
//	s2.insert(4);
//	
//	// ������ҲҪ�ı�
//	for (set<int, MyCmp>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}

// set ����Զ����������͵�����
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class MyCmpByAge
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};
void test05()
{
	// �Զ�����������ͣ�����ָ���������
	set<Person, MyCmpByAge> st;

	Person p1("����", 35);
	Person p2("����", 36);
	Person p3("����", 32);
	Person p4("����", 33);
	Person p5("Ǯ��", 38);

	st.insert(p1);
	st.insert(p2);
	st.insert(p3);
	st.insert(p4);
	st.insert(p5);

	for (set<Person, MyCmpByAge>::iterator it = st.begin(); it != st.end(); it++)
	{
		cout << "������" << it->m_Name << ", ���䣺" << it->m_Age << endl;
	}

}


//int main()
//{
//	//test01();
//	//test02();
//	test05();
//	return 0;
//}