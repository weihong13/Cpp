#include "manger.h"

// �����๹�캯��
Manger::Manger(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

// ��ʾ������Ϣ
void Manger::showInfo()
{
	cout << "Ա����ţ�" << this->m_Id
		<< "\tԱ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ��: " << this->getJobDuty()
		<< endl;

}


// ��ȡ��λ����
string Manger::getDeptName()
{
	return string("����");
}

// ��ȡ����ְ��
string Manger::getJobDuty()
{
	return string("����ϰ彻�������񣬲��·������Ա��");
}