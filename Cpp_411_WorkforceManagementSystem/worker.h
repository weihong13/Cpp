#pragma once
#include <iostream>
#include <string>

using namespace std;

// ����Ա����

class Worker
{
public:
	// ��ʾ������Ϣ
	virtual void showInfo() = 0;
	// ��ȡ��λ����
	virtual string getDeptName() = 0;
	// ��ȡ����ְ��
	virtual string getJobDuty() = 0;

	// ְ�����
	int m_Id;
	// ְ������
	string m_Name;
	// ְ�����ű��
	int m_DeptId;

};
