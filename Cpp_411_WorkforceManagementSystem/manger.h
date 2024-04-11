#pragma once
#include "worker.h"


// 经理类

class Manger: public Worker
{
public:
	// 构造函数
	Manger(int id, string name, int dId);
	// 显示个人信息
	virtual void showInfo();
	// 获取岗位名称
	virtual string getDeptName();

	// 获取工作职责
	virtual string getJobDuty();
};
