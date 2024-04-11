#include "workerManager.h"


// WorkerManager构造函数的实现
WorkerManager::WorkerManager()
{
	this->m_EmpNum = 0;
	this->m_EmpArr = NULL;
}

// 菜单显示实现
void WorkerManager::ShowMenu()
{
	cout << "*****************************" << endl;
	cout << "****-欢迎进入职工管理系统-****" << endl;
	cout << "****  (0) 退出管理程序   ****" << endl;
	cout << "****  (1) 增加职工信息   ****" << endl;
	cout << "****  (2) 显示职工信息   ****" << endl;
	cout << "****  (3) 删除离职职工   *****" << endl;
	cout << "****  (4) 修改职工信息   ****" << endl;
	cout << "****  (5) 查找职工信息   ****" << endl;
	cout << "****  (6) 按照编号排序   ****" << endl;
	cout << "****  (7) 清空所有文档   ****" << endl;
	cout << "*****************************" << endl;
}

// 退出系统
void WorkerManager::ExitSystem()
{
	cout << "您已退出系统，欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

// 添加员工
void WorkerManager::AddWorkers()
{
	// 确定添加员工的数量
	int addNum = 0;
	cout << "请输入要添加的人数：>";
	cin >> addNum;
	// 创建新空间
	if (addNum > 0) // 判断添加的人数是否正确
	{
		// 添加
		// 计算新空间大小
		int newSize = this->m_EmpNum +addNum;

		// 开辟新空间
		Worker** newSpace = new Worker* [newSize];
		if (newSpace != NULL) // 判断是否申请到新的内存
		{
			// 将之前的数据进行拷贝
			if (this->m_EmpArr != NULL)
			{
				for (int i = 0; i < this->m_EmpNum; i++)
				{
					newSpace[i] = this->m_EmpArr[i];
				}
			}
			cout << "增容成功！" << endl;
			// 添加新的数据
			int count = 0; // 统计输入失败次数
			for (int i = 0; i < addNum; i++)
			{
				
				int id = 0; //  员工编号
				string name; // 姓名
				int DeptSelect = 0; // 岗位选择
				cout << "请输入第 "<< i + 1 <<" 个员工的编号：> " ;
				cin >> id;
				cout << "请输入第 " << i + 1 << " 个的员工姓名：> ";
				cin >> name;
				cout << "请输入第 " << i + 1 << " 个的员工岗位" << endl;
				cout << "1、总裁" << endl;
				cout << "2、部门经理" << endl;
				cout << "3、普通员工" << endl;
				cin >> DeptSelect;
				Worker* worker = NULL;
				switch(DeptSelect)
				{
					case 1:
						worker = new Boss(id, name, DeptSelect);
						break;
					case 2:
						worker = new Manger(id, name, DeptSelect);
						break;
					case 3:
						worker = new Employee(id, name, DeptSelect);
						break;
					default:
						cout << "输入数据有误" << endl;
						i = i - 1; // 输入数据有误，让i-1，重新输入
						count++; // 输入错误计数
						cout << "您已错误输入 " << count << "次" << endl;
						cout << "3次后将返回主菜单!" << endl;
						if (count == 3)
						{
							cout << "本次添加操作失败" << endl;
							delete[] newSpace;
							return;
						}
						break;
				}
				if (worker != NULL) // 成功输入后，将员工内容加入数组
				{
					newSpace[this->m_EmpNum + i] = worker;
				}
				
			}
			// 添加完成后，释放原来的员工数组
			delete[] this->m_EmpArr;
			// 更改为新的空间
			this->m_EmpArr = newSpace;
			// 更改员工数量
			this->m_EmpNum = newSize;
			cout << "成功添加 " << addNum << " 名员工" << endl;

		}
		else
		{
			cout << "内存已满，无法添加" << endl;
			return;

		}

	}
	else
	{
		cout << "输入数据有误" << endl;

	}
	
}


// 显示职工信息
void WorkerManager::ShowWorkersInfo()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "当前没有员工！" << endl;

	}
	else
	{
		cout << "员工编号\t" << "员工姓名\t" << "员工岗位\t" << "员工职责" << endl;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			cout << this->m_EmpArr[i]->m_Id << "\t"
				<< this->m_EmpArr[i]->m_Name << "\t"
				<< this->m_EmpArr[i]->getDeptName() << "\t"
				<< this->m_EmpArr[i]->getJobDuty() << endl;
		}

	}
}



void WorkerManager::DelWorker()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "当前没有员工！" << endl;

	}
	else
	{
		int id = 0;
		cout << "请输入要删除员工的编号：>" ;
		cin >> id;
		// 先判断是否存在该员工，按照编号查找
		int ret = FindWorkerById(id);
		if(ret == -1)
		{
			cout << "查无此人！" << endl;
		}
		else
		{
			// 直接将该员工后面的 数据前移
			for (int i = ret; i < this->m_EmpNum-1; i++)
			{
				this->m_EmpArr[i] = this->m_EmpArr[i + 1];
			}
			cout << "删除成功！" << endl;
			this->m_EmpNum -= 1; // 员工数量减一

		}

	}
}

//按照编号查找员工
int WorkerManager::FindWorkerById(int id)
{
	int i = 0;
	for (i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArr[i]->m_Id == id)
		{
			return i;
		}
	}
	return -1;
}

// 按照姓名查找员工
int WorkerManager::FindWorkerByName(string name)
{
	int i = 0;
	for (i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArr[i]->m_Name == name)
		{
			return i;
		}
	}
	return -1;
}


// 修改职工信息:按照编号修改职工个人信息
void WorkerManager::ModifyWorkerInfo()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "当前没有员工！" << endl;

	}
	else
	{
		int id = 0;
		cout << "请输入要修改员工的编号：>";
		cin >> id;
		// 先判断是否存在该员工，按照编号查找
		int ret = FindWorkerById(id);
		if (ret == -1)
		{
			cout << "查无此人！" << endl;
		}
		else
		{
			int count = 0; // 统计输入失败次数
			Worker* worker = NULL;
			for (count = 0; count < 3; count++)
			{
				int id = 0; //  员工编号
				string name; // 姓名
				int DeptSelect = 0; // 岗位选择
				cout << "请输入修改后的编号：> ";
				cin >> id;
				cout << "请输入修改后的员工姓名：> ";
				cin >> name;
				cout << "请输入修改后的员工岗位" << endl;
				cout << "1、总裁" << endl;
				cout << "2、部门经理" << endl;
				cout << "3、普通员工" << endl;
				cin >> DeptSelect;
				switch (DeptSelect)
				{
					case 1:
						worker = new Boss(id, name, DeptSelect);
						count = 3;
						break;
					case 2:
						worker = new Manger(id, name, DeptSelect);
						count = 3;
						break;
					case 3:
						worker = new Employee(id, name, DeptSelect);
						count = 3;
						break;
					default:
						cout << "输入数据有误" << endl;
						cout << "您已错误输入 " << count+1 << "次" << endl;
						cout << "3次后将返回!" << endl;
				}
			}
			if (worker != NULL) // 成功输入后，将修改后的员工信息输入
			{
				this->m_EmpArr[ret] = worker;
				cout << "修改成功！" << endl;

			}
			else
			{
				cout << "修改失败！" << endl;
			}
		}
	}
}

// 按照位置输出某个员工的信息
void WorkerManager::ShowWorkerInfoByID(int ret)
{
	cout << "员工编号\t" << "员工姓名\t" << "员工岗位\t" << "员工职责" << endl;
		cout << this->m_EmpArr[ret]->m_Id << "\t"
			<< this->m_EmpArr[ret]->m_Name << "\t"
			<< this->m_EmpArr[ret]->getDeptName() << "\t"
			<< this->m_EmpArr[ret]->getJobDuty() << endl;
	
}

// 查找职工信息:按照职工的编号或者职工的姓名进行查找相关的人员信息
void WorkerManager::FindWorker()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "当前没有员工！" << endl;

	}
	else
	{
		int input = 0;
		cout << "请输入查找的方式：>" << endl;
		cout << "1、按照编号查找" << endl;
		cout << "2、按照姓名查找>" << endl;
		cin >> input;
		if (input == 1)
		{
			int id = 0;
			cout << "请输入要查找员工的编号：>";
			cin >> id;
			// 先判断是否存在该员工，按照编号查找
			int ret = FindWorkerById(id);
			if (ret == -1)
			{
				cout << "查无此人！" << endl;
			}
			else
			{
				ShowWorkerInfoByID(ret);
			}

		}
		else if (input == 2)
		{
			string name;
			cout << "请输入要查找员工的姓名：>";
			cin >> name;
			// 先判断是否存在该员工，按照姓名查找
			int ret = FindWorkerByName(name);
			if (ret == -1)
			{
				cout << "查无此人！" << endl;
			}
			else
			{
				ShowWorkerInfoByID(ret);
			}
		}
		else
		{
			cout << "输入错误！" << endl;
		}

	}
}
// 升序
static int cmp_by_id_1(const void* e1, const void* e2) {
	return ((Worker*)e1)->m_Id - ((Worker*)e2)->m_Id;
}
// 降序
static int cmp_by_id_2(const void* e1, const void* e2) {
	return ((Worker*)e2)->m_Id - ((Worker*)e1)->m_Id;
}

// 按照编号排序:按照职工编号，进行排序，排序规则由用户指定
void WorkerManager::SortById()
{
	if (this->m_EmpArr == NULL)
	{
		cout << "当前没有员工！" << endl;

	}
	else
	{
		int input = 0;
		cout << "请输入排序的方式：>" << endl;
		cout << "1、编号正序（从小到大）" << endl;
		cout << "2、编号倒序（从大到小）" << endl;
		cin >> input;
		if (input == 1)
		{
			// 使用 qsort排序
			qsort(this->m_EmpArr, this->m_EmpNum, sizeof(Worker*), cmp_by_id_1);
			cout << "排序成功！" << endl;

		}
		else if (input == 2)
		{
			// 使用 qsort排序
			qsort(this->m_EmpArr, this->m_EmpNum, sizeof(Worker*), cmp_by_id_2);
			cout << "排序成功！" << endl;

		}
		else
		{
			cout << "输入错误！" << endl;
		}

	}
}

// WorkerManager析构函数的实现
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArr != NULL)
	{
		delete[] this->m_EmpArr;
		this->m_EmpArr = NULL;
	}
}