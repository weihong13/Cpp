#include"judge.h"
#include"contestant.h"
// ��ί��ʵ��

Judge::Judge() {  }

// ��ί����ʵ��
Judge::Judge(string name)
{
	this->m_Name = name;
}

void Judge::judges_score(Contestant* &conArr, int index)
{
	int score = 0;

	cout << "��" << this->m_Name << " ȷ��" << "ѡ�֣�" << conArr[index - 1].m_Name << " �ķ���:>";
	cin >> score;
	conArr[index - 1].m_Score.push_back(score);
	conArr[index - 1].is_Score = true;
}