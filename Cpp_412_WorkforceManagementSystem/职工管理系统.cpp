#include "workerManager.h"

int main()
{
	WorkerManager wm;
	
	int input = 0;
	
	do 
	{
		// 展示菜单
		wm.ShowMenu();
		cout << "请选择：> ";
		cin >> input;
		switch (input)
		{
			case 0:
				// 退出系统
				wm.ExitSystem();
				break;
			case 1:
				// 添加员工
				wm.AddWorkers();
				break;
			case 2:
				// 显示职工信息
				wm.ShowWorkersInfo();
				break;
			case 3:
				// 删除离职职工,按照编号删除指定的职工
				wm.DelWorker();
				break;

			case 4:
				// 修改职工信息:按照编号修改职工个人信息
				wm.ModifyWorkerInfo();
				break;
			case 5:
				// 查找职工信息:按照职工的编号或者职工的姓名进行查找相关的人员信息
				wm.FindWorker();
				break;
			case 6:
				// 按照编号排序:按照职工编号，进行排序，排序规则由用户指定
				wm.SortById();
				break;
			case 7:
				// 清空所有文档
				wm.ClearFile();
				break;

			default:
				system("cls");
				break;
		}

		
	} while (input);

	return 0;
}