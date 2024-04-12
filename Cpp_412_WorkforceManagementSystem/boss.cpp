#include "boss.h"

// 总裁类构造函数
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

// 显示个人信息
void Boss::showInfo()
{
	cout << "员工编号：" << this->m_Id
		<< "\t员工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责: " << this->getJobDuty()
		<< endl;

}


// 获取岗位名称
string Boss::getDeptName()
{
	return string("总裁");
}
// 获取工作职责
string Boss::getJobDuty()
{
	return string("管理公司所有事务");
}