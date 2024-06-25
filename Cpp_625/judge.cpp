#include"judge.h"
#include"contestant.h"
// 评委类实现

Judge::Judge() {  }

// 评委构造实现
Judge::Judge(string name)
{
	this->m_Name = name;
}

void Judge::judges_score(Contestant* &conArr, int index)
{
	int score = 0;

	cout << "请" << this->m_Name << " 确认" << "选手：" << conArr[index - 1].m_Name << " 的分数:>";
	cin >> score;
	conArr[index - 1].m_Score.push_back(score);
	conArr[index - 1].is_Score = true;
}