#include "manger.h"

// 经理类构造函数
Manger::Manger(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

// 显示个人信息
void Manger::showInfo()
{
	cout << "员工编号：" << this->m_Id
		<< "\t员工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责: " << this->getJobDuty()
		<< endl;

}


// 获取岗位名称
string Manger::getDeptName()
{
	return string("经理");
}

// 获取工作职责
string Manger::getJobDuty()
{
	return string("完成老板交给的任务，并下发任务给员工");
}