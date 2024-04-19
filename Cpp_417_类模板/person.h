#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
	// 构造函数的声明
	Person(T1 name, T2 age);
	// 成员函数的声明
	void showPerson();

public:
	T1 m_Name;
	T2 m_Age;
};
