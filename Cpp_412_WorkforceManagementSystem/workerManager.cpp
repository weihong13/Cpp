#include "workerManager.h"


// WorkerManager���캯����ʵ��
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		this->m_EmpNum = 0;
		this->m_EmpArr = NULL;
		this->isEmpty = true;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->m_EmpNum = 0;
		this->m_EmpArr = NULL;
		this->isEmpty = true;
		ifs.close();
		return;
	}

	// �����ļ���Ա��������
	int num =  this->EmpListNum();
	this->m_EmpNum = num;
	this->isEmpty = false;
	this->m_EmpArr = new Worker * [this->m_EmpNum];
	if (m_EmpArr == NULL)
	{
		cout << "��ʼ��Ա������ʧ��" << endl;
		return;
	}

	this->InitEmpArr();
	cout << "��ʼ��Ա������ɹ���" << endl;


	ifs.close();
	
	
}

// �����ļ���Ա��������
int WorkerManager::EmpListNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	return num;
}

// ��ʼ��Ա������
void WorkerManager::InitEmpArr()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int i = 0;
	
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;
		if (dId == 1)
		{
			worker = new Boss(id, name, dId);
		}
		else if(dId == 2)
		{
			worker = new Manger(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new Employee(id, name, dId);
		}
		this->m_EmpArr[i] = worker;
		i++;
	}

	ifs.close();
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
			this->save();
			// �����ļ�������
			this->isEmpty = false;

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
	if (this->isEmpty)
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
	if (this->isEmpty)
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
			this->save();

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
	if (this->isEmpty)
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
				this->save();

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
	if (this->isEmpty)
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
bool cmp_by_id_1(const void* e1, const void* e2) {
	if ((((Worker*)e1)->m_Id) < (((Worker*)e2)->m_Id))
	{
		return true;
	}
	else
	{
		return false;
	}	
}
// ����
bool cmp_by_id_2(const void* e1, const void* e2) {
	if ((((Worker*)e1)->m_Id) > (((Worker*)e2)->m_Id))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// ���ձ������:����ְ����ţ�������������������û�ָ��
void WorkerManager::SortById()
{
	if (this->isEmpty)
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
			sort(this->m_EmpArr, this->m_EmpArr+this->m_EmpNum, cmp_by_id_1);
			cout << "����ɹ���" << endl;
			this->ShowWorkersInfo();

		}
		else if (input == 2)
		{
			// ʹ�� qsort����
			sort(this->m_EmpArr, this->m_EmpArr + this->m_EmpNum, cmp_by_id_2);
			cout << "����ɹ���" << endl;
			this->ShowWorkersInfo();

		}
		else
		{
			cout << "�������" << endl;
		}

	}
}

// ��Ա�����ݱ��浽�ļ���
void WorkerManager::save()
{
	if (this->m_EmpArr != NULL)
	{
		ofstream ofs;
		// �����ļ���
		ofs.open(FILENAME, ios::out);
		// д�ļ�
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			ofs << this->m_EmpArr[i]->m_Id << " "
				<< this->m_EmpArr[i]->m_Name << " "
				<< this->m_EmpArr[i]->m_DeptId << endl;
		}
		// �ر��ļ�
		ofs.close();
	}

}
// ����ļ�
void WorkerManager::ClearFile()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;
	int input = 0;
	cin >> input;

	if (input == 1)
	{
		// ios::trunc ����ļ�������ɾ�����ٴ���
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);
		if (this->m_EmpArr != NULL)
		{

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArr[i] != NULL)
				{
					delete this->m_EmpArr[i];
				}
			}
			this->m_EmpNum = 0;
			this->isEmpty = true;
			delete[] this->m_EmpArr;
			this->m_EmpArr = NULL;
		}
		cout << "��ճɹ���" << endl;

	}

	system("pause");
	system("cls");
	

}


// WorkerManager����������ʵ��
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArr != NULL)
	{

		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArr[i] != NULL)
			{
				delete this->m_EmpArr[i];
			}
		}
		delete[] this->m_EmpArr;
		this->m_EmpArr = NULL;
	}
}