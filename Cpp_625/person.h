#pragma once
#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;

// ����--����
class Person
{
public:
	int m_id; // ���
	string m_Name; // ����
	deque<int> m_Score; // ����
};