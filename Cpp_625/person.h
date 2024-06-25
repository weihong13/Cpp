#pragma once
#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;

// 人类--基类
class Person
{
public:
	int m_id; // 序号
	string m_Name; // 姓名
	deque<int> m_Score; // 分数
};