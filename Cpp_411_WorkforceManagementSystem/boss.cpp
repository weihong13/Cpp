#include "boss.h"

// �ܲ��๹�캯��
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

// ��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "Ա����ţ�" << this->m_Id
		<< "\tԱ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ��: " << this->getJobDuty()
		<< endl;

}


// ��ȡ��λ����
string Boss::getDeptName()
{
	return string("�ܲ�");
}
// ��ȡ����ְ��
string Boss::getJobDuty()
{
	return string("����˾��������");
}