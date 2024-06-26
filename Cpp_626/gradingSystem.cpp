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

	int input = 0; // ѡ����
	int c_count = 0; // ѡ������
	int j_count = 0; // ��������
	int index = 0; // ѡ���±�
	do
	{   

		printMenu(); // ��ӡ�˵�
		cout << "��ѡ��:>";
		cin >> input; // ѡ����
		switch (input)
		{

			case 1: // ѡ�ֱ���
				cout << "��ȷ�Ϲ��м���ѡ�ֱ���:>";
				cin >> c_count;
				if (c_count > 0 && typeid(c_count)==typeid(int)) // �ж������ʽ�Լ����뷶Χ
				{
					initContestant(conArr,c_count);
				}
				else
				{   // ���������
					cout << "�������" << endl;
					cin.clear();	//��������ַ��ͣ��������switch��ѭ������������Ҫ�������������
					cin.ignore(9999, '\n');  //clear�������״̬��Ȼ������ignore�����������
					
				}
				break;
			case 2: // ѡ�ֱ���
				if (c_count == 0) // û��ѡ�֣��޷�����
				{
					cout << "���ȴ���ѡ������" << endl;
					break;
				}
				else
				{
					if (j_count == 0) // û����ί���޷��ۿ�����
					{
						cout << "���ȴ�����ί�����������޷�����" << endl;
						break;
					}
					showConts(conArr, c_count); // ��ӡѡ����Ϣ
					cout << "��ȷ�ϱ���ѡ�ֵ����:>";
					cin >> index;

					if (index > 0 && index <= c_count) // ��ѡ����Ž����ж�
					{
						watchShow(conArr, index); // ��ί�ۿ�����
					}
					else 
					{	// ���������ʾ
						cout << "û����λѡ�֣�" << endl;
						cin.clear();	//��������ַ��ͣ��������switch��ѭ������������Ҫ�������������
						cin.ignore(9999, '\n');  //clear�������״̬��Ȼ������ignore�����������
					}
				}
				index = 0; // �� 0
				break;

			case 3: // ��ί����
				cout << "��ȷ�Ϲ��м�����ί:>";
				cin >> j_count;
				if (j_count >= 3 && typeid(j_count) == typeid(int)) // �ж����뷶Χ�Լ���ʽ
				{
					initJudeg(judArr, j_count);
				}
				else
				{
					// ���������ʾ
					cout << "�������,������Ҫ3����ί��" << endl;
					cin.clear();	//��������ַ��ͣ��������switch��ѭ������������Ҫ�������������
					cin.ignore(9999, '\n');  //clear�������״̬��Ȼ������ignore�����������
				}
				break;

			case 4: // ��ί���
				if (c_count == 0) // ûѡ�ֱ������޷�����
				{
					cout << "���ȴ���ѡ������" << endl;
					break;
				}
				else if (j_count == 0) // û��ί���޷����
				{
					cout << "���ȴ�����ί����" << endl;
					break;
				}
				else
				{
					showConts(conArr, c_count); // ��ʾѡ����Ϣ���鿴�Ƿ���
					cout << "��ȷ�ϴ��ѡ�ֵ����:>";
					cin >> index;
					if (typeid(j_count) == typeid(int) && index > 0 && index <= c_count) // �ж������ʽ�Լ���Χ
					{
						JudgeScore(conArr, judArr,index,j_count); // ��ί���
					}
					else
					{
						// ���������ʾ
						cout << "û����λѡ�֣�" << endl;
						cin.clear();	//��������ַ��ͣ��������switch��ѭ������������Ҫ�������������
						cin.ignore(9999, '\n');  //clear�������״̬��Ȼ������ignore�����������
					}
				}
				index = 0; // �� 0
				break;
			case 5: // ��ӡѡ������
				if (c_count == 0) // �жϱ���ѡ������
				{
					// û��ѡ����ʾ��
					cout << "��ӡʧ�ܣ����ȴ���ѡ������" << endl;
					
				}
				else
				{
					showConts(conArr, c_count);
				}

				break;

			case 6: // ��ӡѡ�ַ���
				if (c_count == 0)
				{	
					// û��ѡ�ֱ���
					cout << "��ӡʧ�ܣ����ȴ���ѡ������" << endl;
					break;
				}

				else if (j_count == 0)
				{
					// û�в��У�û���
					cout << "��ӡʧ�ܣ����ȴ�����ί����" << endl;
					break;
				}
				else
				{
					// ��ӡ����
					showConScore(conArr, c_count, j_count);
				}
				
				break;
			case 7: // ����ѡ������(����ƽ����)
				if (c_count == 0)
				{
					cout << "��ӡʧ�ܣ����ȴ���ѡ������" << endl;
				}
				else if (j_count == 0)
				{
					cout << "��ӡʧ�ܣ����ȴ�����ί����" << endl;
					break;
				}
				else
				{
					// ����ѡ������(����ƽ����)
					contSortByArv(conArr, c_count, j_count);
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


	cout << setw(5) << "���" << setw(10) << "����" << setw(10) << "�Ƿ����" << setw(10) << "�Ƿ���" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << conArr[i].m_id << setw(10) << conArr[i].m_Name 
			 << setw(10) << conArr[i].is_Prefor << setw(10) << conArr[i].is_Score << endl;
	}
}

// ��ӡѡ����Ϣ
void showCont(Contestant* conArr, int n)
{
	cout << setw(5) << "���" << setw(10) << "����" << setw(5)<< "�Ƿ����" << endl;
	cout << setw(5) << conArr[n-1].m_id << setw(10) << conArr[n-1].m_Name << setw(5) << conArr[n-1].is_Prefor << endl;
}

// �ۿ�����
void watchShow(Contestant* conArr, int index)
{

	if (conArr[index - 1].is_Prefor) // �ж�ѡ���Ƿ���ݹ���
	{
		cout << "ѡ�֣�" << conArr[index - 1].m_Name << " �ѱ��ݣ������ظ����ݣ�" << endl;
		return;
	}
	// ����ѡ�ֵĳ�Ա�������б���
	conArr[index - 1].performance();
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
		// ƽ����
		arv = sum / (count - 2);
		conArr[i].m_Score.push_back(arv);

	
	
}

// ��ί���
void JudgeScore(Contestant* conArr, Judge* judArr,int index,int count)
{
	
	if(!conArr[index - 1].is_Prefor)  // 1 1��0 1��0 0��1 0
	{
		// ѡ�ֻ�û���ݣ��޷����
		cout << "ѡ�֣�" << conArr[index - 1].m_Name << " ��δ���б���" << endl;
		return;
	}
	else if (conArr[index - 1].is_Score)
	{
		// ѡ���Ѿ�������ˣ��޷����
		cout << "ѡ�֣�" << conArr[index - 1].m_Name << " �Ѵ�֣���" << endl;
		return;
	}
	else 
	{
		// countλ��ί���д��
		for (int i = 0; i < count; i++)
		{
			int ret = judArr[i].judges_score(conArr, index); // ��ί�����Լ��ĳ�Ա�������������Ƿ��ֳɹ�
			if (!ret)
			{	// ��һ����ί���ʧ�ܣ������ѡ�ֵ����з��������´��
				conArr[index - 1].m_Score.clear();
				return;

			}
		}
		// ������ί��ֳɹ����޸Ĵ�� flag
		conArr[index - 1].is_Score = true;
		calculScore(conArr, index, count); // ������������ɼ�
	}

}

// ��ӡѡ�ַ���
void showConScore(Contestant* conArr, int n,int count)
{
	// ��ӡ��ͷ
	cout << setw(5) << "���" << setw(10) << "����" <<setw(8);
	for (int i = 1; i <= count; i++)
	{
		cout << "��ί" << i << setw(8);
	}
	cout << "��ͷ�" << setw(8) << "��߷�" << setw(8) << "ƽ����" << endl;;
		
	for (int i = 0; i < n; i++)
	{
		// �����ѡ��û���ݣ���ʾ
		if (!conArr[i].is_Prefor)
		{
			cout << "ѡ�֣�" << conArr[i].m_Name << " ��δ���б���" << endl;
			return;
		}
		else if (!conArr[i].is_Score)
		{
			// �����ѡ��δ��֣���ʾ
			cout << "ѡ�֣�" << conArr[i].m_Name << " ��δ���" << endl;
			return;
		}
		else
		{
			// ��ӡ����
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
		}
	}
	showConScore(conArr, n, count);

}