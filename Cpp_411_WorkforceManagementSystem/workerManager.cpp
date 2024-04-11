#include "workerManager.h"


// WorkerManager���캯����ʵ��
WorkerManager::WorkerManager()
{
	this->m_EmpNum = 0;
	this->m_EmpArr = NULL;
}

// �˵���ʾʵ��
void WorkerManager::ShowMenu()
{
	cout << "*****************************" << endl;
	cout << "****-��ӭ����ְ������ϵͳ-****" << endl;
	cout << "****  (0) �˳��������   ****" << endl;
	cout << "****  (1) ����ְ����Ϣ   ****" << endl;
	cout << "****  (2) ��ʾְ����Ϣ   ****" << endl;
	cout << "****  (3) ɾ����ְְ��   *****" << endl;
	cout << "****  (4) �޸�ְ����Ϣ   ****" << endl;
	cout << "****  (5) ����ְ����Ϣ   ****" << endl;
	cout << "****  (6) ���ձ������   ****" << endl;
	cout << "****  (7) ��������ĵ�   ****" << endl;
	cout << "*****************************" << endl;
}

// �˳�ϵͳ
void WorkerManager::ExitSystem()
{
	cout << "�����˳�ϵͳ����ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

// ���Ա��
void WorkerManager::AddWorkers()
{
	// ȷ�����Ա��������
	int addNum = 0;
	cout << "������Ҫ��ӵ�������>";
	cin >> addNum;
	// �����¿ռ�
	if (addNum > 0) // �ж���ӵ������Ƿ���ȷ
	{
		// ���
		// �����¿ռ��С
		int newSize = this->m_EmpNum +addNum;

		// �����¿ռ�
		Worker** newSpace = new Worker* [newSize];
		if (newSpace != NULL) // �ж��Ƿ����뵽�µ��ڴ�
		{
			// ��֮ǰ�����ݽ��п���
			if (this->m_EmpArr != NULL)
			{
				for (int i = 0; i < this->m_EmpNum; i++)
				{
					newSpace[i] = this->m_EmpArr[i];
				}
			}
			cout << "���ݳɹ���" << endl;
			// ����µ�����
			int count = 0; // ͳ������ʧ�ܴ���
			for (int i = 0; i < addNum; i++)
			{
				
				int id = 0; //  Ա�����
				string name; // ����
				int DeptSelect = 0; // ��λѡ��
				cout << "������� "<< i + 1 <<" ��Ա���ı�ţ�> " ;
				cin >> id;
				cout << "������� " << i + 1 << " ����Ա��������> ";
				cin >> name;
				cout << "������� " << i + 1 << " ����Ա����λ" << endl;
				cout << "1���ܲ�" << endl;
				cout << "2�����ž���" << endl;
				cout << "3����ͨԱ��" << endl;
				cin >> DeptSelect;
				Worker* worker = NULL;
				switch(DeptSelect)
				{
					case 1:
						worker = new Boss(id, name, DeptSelect);
						break;
					case 2:
						worker = new Manger(id, name, DeptSelect);
						break;
					case 3:
						worker = new Employee(id, name, DeptSelect);
						break;
					default:
						cout << "������������" << endl;
						i = i - 1; // ��������������i-1����������
						count++; // ����������
						cout << "���Ѵ������� " << count << "��" << endl;
						cout << "3�κ󽫷������˵�!" << endl;
						if (count == 3)
						{
							cout << "������Ӳ���ʧ��" << endl;
							delete[] newSpace;
							return;
						}
						break;
				}
				if (worker != NULL) // �ɹ�����󣬽�Ա�����ݼ�������
				{
					newSpace[this->m_EmpNum + i] = worker;
				}
				
			}
			// �����ɺ��ͷ�ԭ����Ա������
			delete[] this->m_EmpArr;
			// ����Ϊ�µĿռ�
			this->m_EmpArr = newSpace;
			// ����Ա������
			this->m_EmpNum = newSize;
			cout << "�ɹ���� " << addNum << " ��Ա��" << endl;

		}
		else
		{
			cout << "�ڴ��������޷����" << endl;
			return;

		}

	}
	else
	{
		cout << "������������" << endl;

	}
	
}


// ��ʾְ����Ϣ
void WorkerManager::ShowWorkersInfo()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "��ǰû��Ա����" << endl;

	}
	else
	{
		cout << "Ա�����\t" << "Ա������\t" << "Ա����λ\t" << "Ա��ְ��" << endl;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			cout << this->m_EmpArr[i]->m_Id << "\t"
				<< this->m_EmpArr[i]->m_Name << "\t"
				<< this->m_EmpArr[i]->getDeptName() << "\t"
				<< this->m_EmpArr[i]->getJobDuty() << endl;
		}

	}
}



void WorkerManager::DelWorker()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "��ǰû��Ա����" << endl;

	}
	else
	{
		int id = 0;
		cout << "������Ҫɾ��Ա���ı�ţ�>" ;
		cin >> id;
		// ���ж��Ƿ���ڸ�Ա�������ձ�Ų���
		int ret = FindWorkerById(id);
		if(ret == -1)
		{
			cout << "���޴��ˣ�" << endl;
		}
		else
		{
			// ֱ�ӽ���Ա������� ����ǰ��
			for (int i = ret; i < this->m_EmpNum-1; i++)
			{
				this->m_EmpArr[i] = this->m_EmpArr[i + 1];
			}
			cout << "ɾ���ɹ���" << endl;
			this->m_EmpNum -= 1; // Ա��������һ

		}

	}
}

//���ձ�Ų���Ա��
int WorkerManager::FindWorkerById(int id)
{
	int i = 0;
	for (i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArr[i]->m_Id == id)
		{
			return i;
		}
	}
	return -1;
}

// ������������Ա��
int WorkerManager::FindWorkerByName(string name)
{
	int i = 0;
	for (i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArr[i]->m_Name == name)
		{
			return i;
		}
	}
	return -1;
}


// �޸�ְ����Ϣ:���ձ���޸�ְ��������Ϣ
void WorkerManager::ModifyWorkerInfo()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "��ǰû��Ա����" << endl;

	}
	else
	{
		int id = 0;
		cout << "������Ҫ�޸�Ա���ı�ţ�>";
		cin >> id;
		// ���ж��Ƿ���ڸ�Ա�������ձ�Ų���
		int ret = FindWorkerById(id);
		if (ret == -1)
		{
			cout << "���޴��ˣ�" << endl;
		}
		else
		{
			int count = 0; // ͳ������ʧ�ܴ���
			Worker* worker = NULL;
			for (count = 0; count < 3; count++)
			{
				int id = 0; //  Ա�����
				string name; // ����
				int DeptSelect = 0; // ��λѡ��
				cout << "�������޸ĺ�ı�ţ�> ";
				cin >> id;
				cout << "�������޸ĺ��Ա��������> ";
				cin >> name;
				cout << "�������޸ĺ��Ա����λ" << endl;
				cout << "1���ܲ�" << endl;
				cout << "2�����ž���" << endl;
				cout << "3����ͨԱ��" << endl;
				cin >> DeptSelect;
				switch (DeptSelect)
				{
					case 1:
						worker = new Boss(id, name, DeptSelect);
						count = 3;
						break;
					case 2:
						worker = new Manger(id, name, DeptSelect);
						count = 3;
						break;
					case 3:
						worker = new Employee(id, name, DeptSelect);
						count = 3;
						break;
					default:
						cout << "������������" << endl;
						cout << "���Ѵ������� " << count+1 << "��" << endl;
						cout << "3�κ󽫷���!" << endl;
				}
			}
			if (worker != NULL) // �ɹ�����󣬽��޸ĺ��Ա����Ϣ����
			{
				this->m_EmpArr[ret] = worker;
				cout << "�޸ĳɹ���" << endl;

			}
			else
			{
				cout << "�޸�ʧ�ܣ�" << endl;
			}
		}
	}
}

// ����λ�����ĳ��Ա������Ϣ
void WorkerManager::ShowWorkerInfoByID(int ret)
{
	cout << "Ա�����\t" << "Ա������\t" << "Ա����λ\t" << "Ա��ְ��" << endl;
		cout << this->m_EmpArr[ret]->m_Id << "\t"
			<< this->m_EmpArr[ret]->m_Name << "\t"
			<< this->m_EmpArr[ret]->getDeptName() << "\t"
			<< this->m_EmpArr[ret]->getJobDuty() << endl;
	
}

// ����ְ����Ϣ:����ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
void WorkerManager::FindWorker()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "��ǰû��Ա����" << endl;

	}
	else
	{
		int input = 0;
		cout << "��������ҵķ�ʽ��>" << endl;
		cout << "1�����ձ�Ų���" << endl;
		cout << "2��������������>" << endl;
		cin >> input;
		if (input == 1)
		{
			int id = 0;
			cout << "������Ҫ����Ա���ı�ţ�>";
			cin >> id;
			// ���ж��Ƿ���ڸ�Ա�������ձ�Ų���
			int ret = FindWorkerById(id);
			if (ret == -1)
			{
				cout << "���޴��ˣ�" << endl;
			}
			else
			{
				ShowWorkerInfoByID(ret);
			}

		}
		else if (input == 2)
		{
			string name;
			cout << "������Ҫ����Ա����������>";
			cin >> name;
			// ���ж��Ƿ���ڸ�Ա����������������
			int ret = FindWorkerByName(name);
			if (ret == -1)
			{
				cout << "���޴��ˣ�" << endl;
			}
			else
			{
				ShowWorkerInfoByID(ret);
			}
		}
		else
		{
			cout << "�������" << endl;
		}

	}
}
// ����
static int cmp_by_id_1(const void* e1, const void* e2) {
	return ((Worker*)e1)->m_Id - ((Worker*)e2)->m_Id;
}
// ����
static int cmp_by_id_2(const void* e1, const void* e2) {
	return ((Worker*)e2)->m_Id - ((Worker*)e1)->m_Id;
}

// ���ձ������:����ְ����ţ�������������������û�ָ��
void WorkerManager::SortById()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "��ǰû��Ա����" << endl;

	}
	else
	{
		int input = 0;
		cout << "����������ķ�ʽ��>" << endl;
		cout << "1��������򣨴�С����" << endl;
		cout << "2����ŵ��򣨴Ӵ�С��" << endl;
		cin >> input;
		if (input == 1)
		{
			// ʹ�� qsort����
			qsort(this->m_EmpArr, this->m_EmpNum, sizeof(Worker*), cmp_by_id_1);
			cout << "����ɹ���" << endl;

		}
		else if (input == 2)
		{
			// ʹ�� qsort����
			qsort(this->m_EmpArr, this->m_EmpNum, sizeof(Worker*), cmp_by_id_2);
			cout << "����ɹ���" << endl;

		}
		else
		{
			cout << "�������" << endl;
		}

	}
}

// WorkerManager����������ʵ��
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArr != NULL)
	{
		delete[] this->m_EmpArr;
		this->m_EmpArr = NULL;
	}
}