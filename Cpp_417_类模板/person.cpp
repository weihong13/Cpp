#include"person.h"


// ���캯��ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) // ����person t1 t2 ��һ����ģ��Ĳ���
{
	this->m_Name = name;
	this->m_Age = age;
}

// ��Ա����ʵ��
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "������" << this->m_Name << endl;
	cout << "���䣺" << this->m_Age << endl;
}