#include"judge.h"
#include"contestant.h"
// ��ί��ʵ��

Judge::Judge() {  }

// ��ί����ʵ��
Judge::Judge(string name)
{
	this->m_Name = name;
}

// ��ֺ���
bool Judge::judges_score(Contestant* &conArr, int index)
{

	int score = -1;
	cout << "��" << this->m_Name << " ȷ��" << "ѡ�֣�" << conArr[index - 1].m_Name << " �ķ���:>";
	cin >> score;
	if ((typeid(score) == typeid(int)) && (score >= 0 && score <= 100)) // �ж������ʽ�Լ���Χ
	{
		conArr[index - 1].m_Score.push_back(score); // ��ӷ���
		return true; // ��ӷ����ɹ������� 1
	}
	else
	{
		cout << "������󣡣���������Ϊ��[0,100]��" << endl;
		cout << "��������ί�����´�֣�" << endl;
		cin.clear();	//��������ַ��ͣ��������switch��ѭ������������Ҫ�������������
		cin.ignore(9999, '\n');  //clear�������״̬��Ȼ������ignore�����������
		return false; // ��ӷ���ʧ�ܣ����� 0
	}

}