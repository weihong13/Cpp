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
