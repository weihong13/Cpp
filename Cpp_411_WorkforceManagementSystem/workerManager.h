#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "worker.h"
#include "employee.h"
#include "manger.h"
#include "boss.h"
using namespace std;

#define FUNC_NUM 7

class WorkerManager
{
public:
	// 构造函数声明
	WorkerManager();

	// 菜单显示声明
	void ShowMenu();

	// 退出系统
	void ExitSystem();

	// 添加员工
	void AddWorkers();

	// 当前员工数量
	int m_EmpNum;

	// 员工数组指针
	Worker** m_EmpArr;

	// 显示职工信息
	void ShowWorkersInfo();

	// 删除离职职工,按照编号删除指定的职工
	void DelWorker();

	//按照编号查找员工
	int FindWorkerById(int id);

	// 按照姓名查找员工
	int FindWorkerByName(string name);

	// 修改职工信息:按照编号修改职工个人信息
	void ModifyWorkerInfo();

	// 查找职工信息:按照职工的编号或者职工的姓名进行查找相关的人员信息
	void FindWorker();

	// 按照编号排序:按照职工编号，进行排序，排序规则由用户指定
	void SortById();

	// 析构函数声明
	~WorkerManager();
private:
	// 按照编号输出某个员工的信息
	void ShowWorkerInfoByID(int id);
};


