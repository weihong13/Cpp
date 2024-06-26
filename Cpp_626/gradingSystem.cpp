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
	cout << "---------- 7、选手排名 ----------" << endl;
	cout << "------------0、退出系统------------" << endl;
	cout << "----------------------------------" << endl;

}

void menu()
{
	Contestant* conArr = nullptr;
	Judge* judArr = nullptr;

	int input = 0; // 选择功能
	int c_count = 0; // 选手数量
	int j_count = 0; // 裁判数量
	int index = 0; // 选手下标
	do
	{   

		printMenu(); // 打印菜单
		cout << "请选择:>";
		cin >> input; // 选择功能
		switch (input)
		{

			case 1: // 选手报名
				cout << "请确认共有几名选手报名:>";
				cin >> c_count;
				if (c_count > 0 && typeid(c_count)==typeid(int)) // 判断输入格式以及输入范围
				{
					initContestant(conArr,c_count);
				}
				else
				{   // 输入错误处理
					cout << "输入错误！" << endl;
					cin.clear();	//如果输入字符型，将会出现switch死循环，所以我们要清楚缓冲区，用
					cin.ignore(9999, '\n');  //clear清除错误状态，然后再用ignore清除缓冲区。
					
				}
				break;
			case 2: // 选手表演
				if (c_count == 0) // 没有选手，无法表演
				{
					cout << "请先创建选手名单" << endl;
					break;
				}
				else
				{
					if (j_count == 0) // 没有评委，无法观看表演
					{
						cout << "请先创建评委名单，否则无法表演" << endl;
						break;
					}
					showConts(conArr, c_count); // 打印选手信息
					cout << "请确认表演选手的序号:>";
					cin >> index;

					if (index > 0 && index <= c_count) // 对选手序号进行判断
					{
						watchShow(conArr, index); // 评委观看表演
					}
					else 
					{	// 输入错误提示
						cout << "没有这位选手！" << endl;
						cin.clear();	//如果输入字符型，将会出现switch死循环，所以我们要清楚缓冲区，用
						cin.ignore(9999, '\n');  //clear清除错误状态，然后再用ignore清除缓冲区。
					}
				}
				index = 0; // 归 0
				break;

			case 3: // 评委名单
				cout << "请确认共有几名评委:>";
				cin >> j_count;
				if (j_count >= 3 && typeid(j_count) == typeid(int)) // 判断输入范围以及格式
				{
					initJudeg(judArr, j_count);
				}
				else
				{
					// 输入错误提示
					cout << "输入错误,至少需要3个评委！" << endl;
					cin.clear();	//如果输入字符型，将会出现switch死循环，所以我们要清楚缓冲区，用
					cin.ignore(9999, '\n');  //clear清除错误状态，然后再用ignore清除缓冲区。
				}
				break;

			case 4: // 评委打分
				if (c_count == 0) // 没选手报名，无法评分
				{
					cout << "请先创建选手名单" << endl;
					break;
				}
				else if (j_count == 0) // 没评委，无法打分
				{
					cout << "请先创建评委名单" << endl;
					break;
				}
				else
				{
					showConts(conArr, c_count); // 显示选手信息，查看是否打分
					cout << "请确认打分选手的序号:>";
					cin >> index;
					if (typeid(j_count) == typeid(int) && index > 0 && index <= c_count) // 判断输入格式以及范围
					{
						JudgeScore(conArr, judArr,index,j_count); // 评委打分
					}
					else
					{
						// 输入错误提示
						cout << "没有这位选手！" << endl;
						cin.clear();	//如果输入字符型，将会出现switch死循环，所以我们要清楚缓冲区，用
						cin.ignore(9999, '\n');  //clear清除错误状态，然后再用ignore清除缓冲区。
					}
				}
				index = 0; // 归 0
				break;
			case 5: // 打印选手名单
				if (c_count == 0) // 判断报名选手数量
				{
					// 没有选手提示。
					cout << "打印失败，请先创建选手名单" << endl;
					
				}
				else
				{
					showConts(conArr, c_count);
				}

				break;

			case 6: // 打印选手分数
				if (c_count == 0)
				{	
					// 没有选手报名
					cout << "打印失败，请先创建选手名单" << endl;
					break;
				}

				else if (j_count == 0)
				{
					// 没有裁判，没打分
					cout << "打印失败，请先创建评委名单" << endl;
					break;
				}
				else
				{
					// 打印分数
					showConScore(conArr, c_count, j_count);
				}
				
				break;
			case 7: // 计算选手排名(根据平均分)
				if (c_count == 0)
				{
					cout << "打印失败，请先创建选手名单" << endl;
				}
				else if (j_count == 0)
				{
					cout << "打印失败，请先创建评委名单" << endl;
					break;
				}
				else
				{
					// 计算选手排名(根据平均分)
					contSortByArv(conArr, c_count, j_count);
				}
				
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
void initContestant(Contestant* &conArr,int n)
{
	conArr = new Contestant[n];
	for (int i = 0; i < n; i++)
	{

		cout << "请输入第 " << i + 1 << " 位选手的姓名:>";
		cin >> conArr[i].m_Name;
		conArr[i].m_id = i + 1;
	}

}
// 初始化 n名 评委
void initJudeg(Judge*& judArr, int n)
{
	judArr = new Judge[n];
	for (int i = 0; i < n; i++)
	{

		cout << "请输入第 " << i + 1 << " 位评委的姓名:>";
		cin >> judArr[i].m_Name;
		judArr[i].m_id = i + 1;
	}

}

// 打印选手列表信息
void showConts(Contestant* conArr,int n)
{


	cout << setw(5) << "序号" << setw(10) << "姓名" << setw(10) << "是否表演" << setw(10) << "是否打分" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << conArr[i].m_id << setw(10) << conArr[i].m_Name 
			 << setw(10) << conArr[i].is_Prefor << setw(10) << conArr[i].is_Score << endl;
	}
}

// 打印选手信息
void showCont(Contestant* conArr, int n)
{
	cout << setw(5) << "序号" << setw(10) << "姓名" << setw(5)<< "是否表演" << endl;
	cout << setw(5) << conArr[n-1].m_id << setw(10) << conArr[n-1].m_Name << setw(5) << conArr[n-1].is_Prefor << endl;
}

// 观看表演
void watchShow(Contestant* conArr, int index)
{

	if (conArr[index - 1].is_Prefor) // 判断选手是否表演过了
	{
		cout << "选手：" << conArr[index - 1].m_Name << " 已表演，不能重复表演！" << endl;
		return;
	}
	// 调用选手的成员函数进行表演
	conArr[index - 1].performance();
}

// 计算分数
static void calculScore(Contestant* conArr, int index, int count)
{
		int sum = 0;
		int arv = 0;
		int i = index - 1;
		sort(conArr[i].m_Score.begin(), conArr[i].m_Score.end());

		// 最低分
		conArr[i].m_Score.push_back(conArr[i].m_Score[0]);
		// 最高分
		conArr[i].m_Score.push_back(conArr[i].m_Score[count-1]);

		for (int j = 1; j <= count - 2; j++)
		{
			sum += conArr[i].m_Score[j];
		}
		// 平均分
		arv = sum / (count - 2);
		conArr[i].m_Score.push_back(arv);

	
	
}

// 评委打分
void JudgeScore(Contestant* conArr, Judge* judArr,int index,int count)
{
	
	if(!conArr[index - 1].is_Prefor)  // 1 1、0 1、0 0、1 0
	{
		// 选手还没表演，无法打分
		cout << "选手：" << conArr[index - 1].m_Name << " 还未进行表演" << endl;
		return;
	}
	else if (conArr[index - 1].is_Score)
	{
		// 选手已经打过分了，无法打分
		cout << "选手：" << conArr[index - 1].m_Name << " 已打分！！" << endl;
		return;
	}
	else 
	{
		// count位评委进行打分
		for (int i = 0; i < count; i++)
		{
			int ret = judArr[i].judges_score(conArr, index); // 评委调用自己的成员函数，并返回是否打分成功
			if (!ret)
			{	// 有一个评委打分失败，清除该选手的所有分数，重新打分
				conArr[index - 1].m_Score.clear();
				return;

			}
		}
		// 所有评委打分成功，修改打分 flag
		conArr[index - 1].is_Score = true;
		calculScore(conArr, index, count); // 打完分立马计算成绩
	}

}

// 打印选手分数
void showConScore(Contestant* conArr, int n,int count)
{
	// 打印表头
	cout << setw(5) << "序号" << setw(10) << "姓名" <<setw(8);
	for (int i = 1; i <= count; i++)
	{
		cout << "评委" << i << setw(8);
	}
	cout << "最低分" << setw(8) << "最高分" << setw(8) << "平均分" << endl;;
		
	for (int i = 0; i < n; i++)
	{
		// 如果有选手没表演，提示
		if (!conArr[i].is_Prefor)
		{
			cout << "选手：" << conArr[i].m_Name << " 还未进行表演" << endl;
			return;
		}
		else if (!conArr[i].is_Score)
		{
			// 如果有选手未打分，提示
			cout << "选手：" << conArr[i].m_Name << " 还未打分" << endl;
			return;
		}
		else
		{
			// 打印分数
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

// 计算选手排名(根据平均分)
void contSortByArv(Contestant*& conArr, int n, int count)
{
	for (int i = 0; i < n; i++)
	{
		if (!conArr[i].is_Prefor)
		{
			cout << "选手：" << conArr[i].m_Name << " 还未进行表演" << endl;
			return;
		}
		else if (!conArr[i].is_Score)
		{
			cout << "选手：" << conArr[i].m_Name << " 还未打分" << endl;
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