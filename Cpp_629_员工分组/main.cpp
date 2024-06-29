#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Staff.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <map>
/*
����-Ա������
	3.10.1 ��������
	��˾������Ƹ��10��Ա��(ABCDEFGHI)��10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ�����
		��Ա����Ϣ��: �������������;
		���ŷ�Ϊ:�߻����������з�
		�������10��Ա�����䲿�ź͹���
		��ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
		���ֲ�����ʾԱ����Ϣ
	3.10.2 ʵ�ֲ���
		1.����10��Ա�����ŵ�vector��
		2.����vector������ȡ��ÿ��Ա���������������
		3.����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
		4.�ֲ�����ʾԱ����Ϣ
	
*/

int main()
{
	srand((unsigned int)time(NULL));

	vector<Staff> staArr(10);
	string name;
	int sal;

	for (int i = 0; i < 10; i++)
	{
		cout << "������Ա��������>";
		cin >> name;
		staArr[i].setName(name);

		sal = rand() % 5000 + 5001;
		staArr[i].setSal(sal);
	}

	map<int, string> dept;

	dept.insert(make_pair(1, "�߻�"));
	dept.insert(make_pair(2, "����"));
	dept.insert(make_pair(3, "�з�"));

	map<int,string>::iterator it = dept.begin();
	
	
	multimap<int, Staff> emp;

	for (int i = 0; i < 10; i++)
	{
		int num = rand() % 3+1;
		emp.insert(make_pair(num, staArr[i]));
	}

	for (multimap<int, Staff>::iterator it = emp.begin(); it != emp.end(); it++)
	{
		cout << "������" << it->second.getName() << ", н�ʣ�" << it->second.getSal() << ", ���ţ�" << dept[it->first] << endl;
	}


	return 0;
}