#include"judge.h"
#include"contestant.h"
// 评委类实现

Judge::Judge() {  }

// 评委构造实现
Judge::Judge(string name)
{
	this->m_Name = name;
}

// 打分函数
bool Judge::judges_score(Contestant* &conArr, int index)
{

	int score = -1;
	cout << "请" << this->m_Name << " 确认" << "选手：" << conArr[index - 1].m_Name << " 的分数:>";
	cin >> score;
	if ((typeid(score) == typeid(int)) && (score >= 0 && score <= 100)) // 判断输入格式以及范围
	{
		conArr[index - 1].m_Score.push_back(score); // 添加分数
		return true; // 添加分数成功，返回 1
	}
	else
	{
		cout << "输入错误！（分数区间为：[0,100]）" << endl;
		cout << "请所有评委，重新打分！" << endl;
		cin.clear();	//如果输入字符型，将会出现switch死循环，所以我们要清楚缓冲区，用
		cin.ignore(9999, '\n');  //clear清除错误状态，然后再用ignore清除缓冲区。
		return false; // 添加分数失败，返回 0
	}

}