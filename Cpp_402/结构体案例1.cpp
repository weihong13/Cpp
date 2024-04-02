#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
案例描述:
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。
*/

typedef struct Student 
{
	string name;
	int score;
}Stu;

struct Teacher
{
	string name;
	Stu stuArray[5];

};

void assignment(Teacher* tArr, int len) {
	int i = 0;
	string tName;
	string sName;
	int score = 0;
	for (i = 0; i < len; i++) {
		cout << "请输入 " << i + 1 << " 个老师的姓名" << endl;
		cin >> tName;
		tArr[i].name = tName;
		int j = 0;
		for (j = 0; j < 5; j++) {
			cout << "请输入 " << j + 1 << " 个学生的姓名" << endl;
			cin >> sName;
			tArr[i].stuArray[j].name = sName;
			cout << "请输入 " << j + 1 << " 个学生的成绩" << endl;
			cin >> score;
			tArr[i].stuArray[j].score = score;
		}
	}
}

int main() {
	//创建数组存放3名老师，
	Teacher tArray[3];

	//通过函数给每个老师及所带的学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	assignment(tArray, len);
	//最终打印出老师数据以及老师所带的学生数据。
	int i = 0;
	for (i = 0; i < len; i++) {
		cout << "第 " << i+1<< " 个老师的姓名:"<<tArray[i].name<< endl;
		int j = 0;
		for (j = 0; j < 5; j++) {
			
			cout << tArray[i].name << " 第 " << j + 1 << " 个学生的姓名" << tArray[i].stuArray[j].name << endl;
			cout << tArray[i].name <<" 第 " << j + 1 << " 个学生的成绩" << tArray[i].stuArray[j].score << endl;
		}
	}
	system("pause");
	return 0;
}