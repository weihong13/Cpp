#include "employee.h"

// ��ͨԱ������
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

// ��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "Ա����ţ�" << this->m_Id
		<< "\tԱ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ��: " << this->getJobDuty()
		<< endl;

}


// ��ȡ��λ����
string Employee::getDeptName()
{
	return string("Ա��");
}
// ��ȡ����ְ��
string Employee::getJobDuty()
{
	return string("��ɾ�����������");
}