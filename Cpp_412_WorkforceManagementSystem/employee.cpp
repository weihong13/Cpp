#include "employee.h"

// 普通员工构造
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

// 显示个人信息
void Employee::showInfo()
{
	cout << "员工编号：" << this->m_Id
		<< "\t员工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责: " << this->getJobDuty()
		<< endl;

}


// 获取岗位名称
string Employee::getDeptName()
{
	return string("员工");
}
// 获取工作职责
string Employee::getJobDuty()
{
	return string("完成经理交给的任务");
}