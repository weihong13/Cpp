#include"gradingSystem.h"

#include<iostream>
#include<iomanip>

void printMenu()
{
	cout << "--------------------------------" << endl;
	cout << "---------- 1、选手报名 ----------" << endl;
	cout << "---------- 2、选手表演 ----------" << endl;
	cout << "---------- 3、评委名单 ----------" << endl;
	cout << "---------- 4、评委打分 ----------" << endl;
	cout << "----------5、打印选手信息----------" << endl;
	cout << "----------6、打印选手分数----------" << endl;
	cout << "----------7、打印选手排名----------" << endl;
	cout << "------------0、退出系统------------" << endl;
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
		cout << "请选择:>";
		cin >> input;
		switch (input)
		{
			case 1: // 选手报名
				cout << "请确认共有几名选手报名:>";
				cin >> c_count;
				if (c_count > 0 && typeid(c_count)==typeid(int))
				{
					conArr = initContestant(c_count);
				}
				else
				{
					cout << "输入错误！" << endl;
				}
				break;
			case 2: // 选手表演
				showConts(conArr, c_count);
				cout << "请确认表演选手的序号:>";
				cin >> index;
				if (index > 0)
				{
					watchShow(conArr, index);
				}
				break;
			case 3: // 评委名单
				cout << "请确认共有几名评委:>";
				cin >> c_count;
				if (c_count > 0 && typeid(c_count) == typeid(int))
				{
					conArr = initContestant(c_count);
				}
				else
				{
					cout << "输入错误！" << endl;
				}
				break;

			case 4: // 评委打分
				showConts(conArr, c_count);
				cout << "请确认打分选手的序号:>";
				cin >> index;
				if (index > 0)
				{
					JudgeScore(conArr, index);
				}

				break;
			case 5: // 打印选手名单
				if (conArr != nullptr)
				{
					showConts(conArr, c_count);
				}
				else
				{
					cout << "打印失败，请先创建选手名单" << endl;
				}
				break;

			case 6: // 打印选手分数
				
				break;
			case 7: // 打印选手排名
				
				break;
			case 0:
				cout << "退出系统！" << endl;
				break;
			default:
				cout << "输入错误！" << endl;
				break;
		}

	} while (input);

}

// 初始化 n名 选手
Contestant* initContestant(int n)
{
	Contestant* conArr = new Contestant[n];
	for (int i = 0; i < n; i++)
	{

		cout << "请输入第 " << i + 1 << " 位选手的姓名:>";
		cin >> conArr[i].m_Name;
		conArr[i].m_id = i + 1;
	}

	return conArr;
}
// 打印选手列表信息
void showConts(Contestant* conArr,int n)
{

	cout << setw(5) << "序号" << setw(10) << "姓名" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << conArr[i].m_id << setw(10) << conArr[i].m_Name << endl;
	}
}

// 打印选手信息
void showCont(Contestant* conArr, int n)
{
	cout << setw(5) << "序号" << setw(10) << "姓名" << endl;
	cout << setw(5) << conArr[n-1].m_id << setw(10) << conArr[n-1].m_Name << endl;
}

// 观看表演
void watchShow(Contestant* conArr, int n)
{
	conArr[n - 1].performance();
}

// 评委打分
void JudgeScore(Contestant* conArr, int n)
{
	if (conArr[n - 1].is_Prefor == 1)
	{
		int score = 0;
		for (int i = 0; i < 5; i++)
		{
			cout << "请评委" << i + 1 << " 确认" << "选手：" << conArr[n - 1].m_Name << " 的分数:>";
			cin >> score;
			conArr[n - 1].m_Score.push_back(score);
		}
	}
}

