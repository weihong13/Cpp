#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "worker.h"
#include "employee.h"
#include "manger.h"
#include "boss.h"
using namespace std;

#define FUNC_NUM 7

class WorkerManager
{
public:
	// ���캯������
	WorkerManager();

	// �˵���ʾ����
	void ShowMenu();

	// �˳�ϵͳ
	void ExitSystem();

	// ���Ա��
	void AddWorkers();

	// ��ǰԱ������
	int m_EmpNum;

	// Ա������ָ��
	Worker** m_EmpArr;

	// ��ʾְ����Ϣ
	void ShowWorkersInfo();

	// ɾ����ְְ��,���ձ��ɾ��ָ����ְ��
	void DelWorker();

	//���ձ�Ų���Ա��
	int FindWorkerById(int id);

	// ������������Ա��
	int FindWorkerByName(string name);

	// �޸�ְ����Ϣ:���ձ���޸�ְ��������Ϣ
	void ModifyWorkerInfo();

	// ����ְ����Ϣ:����ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
	void FindWorker();

	// ���ձ������:����ְ����ţ�������������������û�ָ��
	void SortById();

	// ������������
	~WorkerManager();
private:
	// ���ձ�����ĳ��Ա������Ϣ
	void ShowWorkerInfoByID(int id);
};


