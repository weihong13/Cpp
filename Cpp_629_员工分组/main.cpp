#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Staff.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <map>
/*
案例-员工分组
	3.10.1 案例描述
	公司今天招聘了10个员工(ABCDEFGHI)，10名员工进入公司之后，需要指派员工在那个部门
		工员工信息有: 姓名、工资组成;
		部门分为:策划、美术、研发
		。随机给10名员工分配部门和工资
		。通过multimap进行信息的插入 key(部门编号) value(员工)
		。分部门显示员工信息
	3.10.2 实现步骤
		1.创建10名员工，放到vector中
		2.遍历vector容器，取出每个员工，进行随机分组
		3.分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
		4.分部门显示员工信息
	
*/

int main()
{
	srand((unsigned int)time(NULL));

	vector<Staff> staArr(10);
	string name;
	int sal;

	for (int i = 0; i < 10; i++)
	{
		cout << "请输入员工姓名：>";
		cin >> name;
		staArr[i].setName(name);

		sal = rand() % 5000 + 5001;
		staArr[i].setSal(sal);
	}

	map<int, string> dept;

	dept.insert(make_pair(1, "策划"));
	dept.insert(make_pair(2, "美术"));
	dept.insert(make_pair(3, "研发"));

	map<int,string>::iterator it = dept.begin();
	
	
	multimap<int, Staff> emp;

	for (int i = 0; i < 10; i++)
	{
		int num = rand() % 3+1;
		emp.insert(make_pair(num, staArr[i]));
	}

	for (multimap<int, Staff>::iterator it = emp.begin(); it != emp.end(); it++)
	{
		cout << "姓名：" << it->second.getName() << ", 薪资：" << it->second.getSal() << ", 部门：" << dept[it->first] << endl;
	}


	return 0;
}