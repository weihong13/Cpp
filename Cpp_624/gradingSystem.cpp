#include"gradingSystem.h"

#include<iostream>
#include<iomanip>

void printMenu()
{
	cout << "--------------------------------" << endl;
	cout << "---------- 1��ѡ�ֱ��� ----------" << endl;
	cout << "---------- 2��ѡ�ֱ��� ----------" << endl;
	cout << "---------- 3����ί���� ----------" << endl;
	cout << "---------- 4����ί��� ----------" << endl;
	cout << "----------5����ӡѡ����Ϣ----------" << endl;
	cout << "----------6����ӡѡ�ַ���----------" << endl;
	cout << "----------7����ӡѡ������----------" << endl;
	cout << "------------0���˳�ϵͳ------------" << endl;
	cout << "----------------------------------" << endl;

}

void menu()
{
	Contestant* conArr = nullptr;
	Judge* judArr = nullptr;

	int input = 0;
	int c_count = 0;
	int j_count = 0;
	int index = 0;
	do
	{   
		printMenu();
		cout << "��ѡ��:>";
		cin >> input;
		switch (input)
		{
			case 1: // ѡ�ֱ���
				cout << "��ȷ�Ϲ��м���ѡ�ֱ���:>";
				cin >> c_count;
				if (c_count > 0 && typeid(c_count)==typeid(int))
				{
					conArr = initContestant(c_count);
				}
				else
				{
					cout << "�������" << endl;
				}
				break;
			case 2: // ѡ�ֱ���
				showConts(conArr, c_count);
				cout << "��ȷ�ϱ���ѡ�ֵ����:>";
				cin >> index;
				if (index > 0)
				{
					watchShow(conArr, index);
				}
				break;
			case 3: // ��ί����
				cout << "��ȷ�Ϲ��м�����ί:>";
				cin >> c_count;
				if (c_count > 0 && typeid(c_count) == typeid(int))
				{
					conArr = initContestant(c_count);
				}
				else
				{
					cout << "�������" << endl;
				}
				break;

			case 4: // ��ί���
				showConts(conArr, c_count);
				cout << "��ȷ�ϴ��ѡ�ֵ����:>";
				cin >> index;
				if (index > 0)
				{
					JudgeScore(conArr, index);
				}

				break;
			case 5: // ��ӡѡ������
				if (conArr != nullptr)
				{
					showConts(conArr, c_count);
				}
				else
				{
					cout << "��ӡʧ�ܣ����ȴ���ѡ������" << endl;
				}
				break;

			case 6: // ��ӡѡ�ַ���
				
				break;
			case 7: // ��ӡѡ������
				
				break;
			case 0:
				cout << "�˳�ϵͳ��" << endl;
				break;
			default:
				cout << "�������" << endl;
				break;
		}

	} while (input);

}

// ��ʼ�� n�� ѡ��
Contestant* initContestant(int n)
{
	Contestant* conArr = new Contestant[n];
	for (int i = 0; i < n; i++)
	{

		cout << "������� " << i + 1 << " λѡ�ֵ�����:>";
		cin >> conArr[i].m_Name;
		conArr[i].m_id = i + 1;
	}

	return conArr;
}
// ��ӡѡ���б���Ϣ
void showConts(Contestant* conArr,int n)
{

	cout << setw(5) << "���" << setw(10) << "����" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << conArr[i].m_id << setw(10) << conArr[i].m_Name << endl;
	}
}

// ��ӡѡ����Ϣ
void showCont(Contestant* conArr, int n)
{
	cout << setw(5) << "���" << setw(10) << "����" << endl;
	cout << setw(5) << conArr[n-1].m_id << setw(10) << conArr[n-1].m_Name << endl;
}

// �ۿ�����
void watchShow(Contestant* conArr, int n)
{
	conArr[n - 1].performance();
}

// ��ί���
void JudgeScore(Contestant* conArr, int n)
{
	if (conArr[n - 1].is_Prefor == 1)
	{
		int score = 0;
		for (int i = 0; i < 5; i++)
		{
			cout << "����ί" << i + 1 << " ȷ��" << "ѡ�֣�" << conArr[n - 1].m_Name << " �ķ���:>";
			cin >> score;
			conArr[n - 1].m_Score.push_back(score);
		}
	}
}

