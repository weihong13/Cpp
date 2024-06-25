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
	cout << "---------- 7��ѡ������ ----------" << endl;
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
					initContestant(conArr,c_count);
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
				cin >> j_count;
				if (j_count >= 3 && typeid(j_count) == typeid(int))
				{
					initJudeg(judArr, j_count);
				}
				else
				{
					cout << "�������,������Ҫ3����ί��" << endl;
				}
				break;

			case 4: // ��ί���
				showConts(conArr, c_count);
				cout << "��ȷ�ϴ��ѡ�ֵ����:>";
				cin >> index;
				if (index > 0)
				{
					JudgeScore(conArr, judArr,index, j_count);
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
				if (conArr != nullptr)
				{
					showConScore(conArr, c_count, j_count);
				}
				else
				{
					cout << "��ӡʧ�ܣ����ȴ���ѡ������" << endl;
				}
				
				break;
			case 7: // ����ѡ������(����ƽ����)
				if (conArr != nullptr)
				{
					contSortByArv(conArr, c_count, j_count);
				}
				else
				{
					cout << "��ӡʧ�ܣ����ȴ���ѡ������" << endl;
				}
				
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
void initContestant(Contestant* &conArr,int n)
{
	conArr = new Contestant[n];
	for (int i = 0; i < n; i++)
	{

		cout << "������� " << i + 1 << " λѡ�ֵ�����:>";
		cin >> conArr[i].m_Name;
		conArr[i].m_id = i + 1;
	}

}
// ��ʼ�� n�� ��ί
void initJudeg(Judge*& judArr, int n)
{
	judArr = new Judge[n];
	for (int i = 0; i < n; i++)
	{

		cout << "������� " << i + 1 << " λ��ί������:>";
		cin >> judArr[i].m_Name;
		judArr[i].m_id = i + 1;
	}

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
	cout << setw(5) << "���" << setw(10) << "����" << setw(5)<< "�Ƿ����" << endl;
	cout << setw(5) << conArr[n-1].m_id << setw(10) << conArr[n-1].m_Name << setw(5) << conArr[n-1].is_Prefor << endl;
}

// �ۿ�����
void watchShow(Contestant* conArr, int n)
{
	conArr[n - 1].performance();
}

// �������
static void calculScore(Contestant* conArr, int index, int count)
{
		int sum = 0;
		int arv = 0;
		int i = index - 1;
		sort(conArr[i].m_Score.begin(), conArr[i].m_Score.end());

		// ��ͷ�
		conArr[i].m_Score.push_back(conArr[i].m_Score[0]);
		// ��߷�
		conArr[i].m_Score.push_back(conArr[i].m_Score[count-1]);

		for (int j = 1; j <= count - 2; j++)
		{
			sum += conArr[i].m_Score[j];
		}

		arv = sum / (count - 2);
		conArr[i].m_Score.push_back(arv);

	
	
}

// ��ί���
void JudgeScore(Contestant* conArr, Judge* judArr,int index,int count)
{
	if(!conArr[index - 1].is_Prefor)  // 1 1��0 1��0 0��1 0
	{
		cout << "ѡ�֣�" << conArr[index - 1].m_Name << " ��δ���б���" << endl;
		return;
	}
	else if (conArr[index - 1].is_Score)
	{
		cout << "ѡ�֣�" << conArr[index - 1].m_Name << " �Ѵ�֣���" << endl;
		return;
	}
	else 
	{
		for (int i = 0; i < count; i++)
		{
			judArr[i].judges_score(conArr, index);
		}
		calculScore(conArr, index, count);
	}

}

// ��ӡѡ�ַ���
void showConScore(Contestant* conArr, int n,int count)
{

	cout << setw(5) << "���" << setw(10) << "����" <<setw(8);
	for (int i = 1; i <= count; i++)
	{
		cout << "��ί" << i << setw(8);
	}
	cout << "��ͷ�" << setw(8) << "��߷�" << setw(8) << "ƽ����" << endl;;
		
	for (int i = 0; i < n; i++)
	{
		if (!conArr[i].is_Prefor)
		{
			cout << "ѡ�֣�" << conArr[i].m_Name << " ��δ���б���" << endl;
			return;
		}
		else if (!conArr[i].is_Score)
		{
			cout << "ѡ�֣�" << conArr[i].m_Name << " ��δ���" << endl;
			return;
		}
		else
		{
			cout << setw(5) << conArr[i].m_id << setw(10) << conArr[i].m_Name << setw(8);
			for (int j = 0; j < count + 3; j++)
			{
				cout << conArr[i].m_Score[j] << setw(8);
			}
			cout << endl;
		}
		
	}
}
int c = 0;
bool cmp(Contestant a, Contestant b)
{
	return (a.m_Score[c + 2] > b.m_Score[c + 2]);
}

// ����ѡ������(����ƽ����)
void contSortByArv(Contestant*& conArr, int n, int count)
{
	for (int i = 0; i < n; i++)
	{
		if (!conArr[i].is_Prefor)
		{
			cout << "ѡ�֣�" << conArr[i].m_Name << " ��δ���б���" << endl;
			return;
		}
		else if (!conArr[i].is_Score)
		{
			cout << "ѡ�֣�" << conArr[i].m_Name << " ��δ���" << endl;
			return;
		}
		else
		{
			c = count;
			sort(conArr, conArr + n, cmp);
			showConScore(conArr, n, count);
		}
	}

}