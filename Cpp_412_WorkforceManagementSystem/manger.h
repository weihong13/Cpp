#pragma once
#include "worker.h"


// ������

class Manger: public Worker
{
public:
	// ���캯��
	Manger(int id, string name, int dId);
	// ��ʾ������Ϣ
	virtual void showInfo();
	// ��ȡ��λ����
	virtual string getDeptName();

	// ��ȡ����ְ��
	virtual string getJobDuty();
};
