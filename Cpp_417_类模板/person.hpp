#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
	// ���캯��������
	Person(T1 name, T2 age);
	// ��Ա����������
	void showPerson();

public:
	T1 m_Name;
	T2 m_Age;
};


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