#pragma once
#include "worker.h"


// ��ͨԱ����

class Employee: public Worker
{
public:
	// ���캯��
	Employee(int id, string name, int dId);
	// ��ʾ������Ϣ
	virtual void showInfo();
	// ��ȡ��λ����
	virtual string getDeptName();
	// ��ȡ����ְ��
	virtual string getJobDuty();
};