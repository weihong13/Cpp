#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
��������:
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
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
		cout << "������ " << i + 1 << " ����ʦ������" << endl;
		cin >> tName;
		tArr[i].name = tName;
		int j = 0;
		for (j = 0; j < 5; j++) {
			cout << "������ " << j + 1 << " ��ѧ��������" << endl;
			cin >> sName;
			tArr[i].stuArray[j].name = sName;
			cout << "������ " << j + 1 << " ��ѧ���ĳɼ�" << endl;
			cin >> score;
			tArr[i].stuArray[j].score = score;
		}
	}
}

int main() {
	//����������3����ʦ��
	Teacher tArray[3];

	//ͨ��������ÿ����ʦ��������ѧ����ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	assignment(tArray, len);
	//���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
	int i = 0;
	for (i = 0; i < len; i++) {
		cout << "�� " << i+1<< " ����ʦ������:"<<tArray[i].name<< endl;
		int j = 0;
		for (j = 0; j < 5; j++) {
			
			cout << tArray[i].name << " �� " << j + 1 << " ��ѧ��������" << tArray[i].stuArray[j].name << endl;
			cout << tArray[i].name <<" �� " << j + 1 << " ��ѧ���ĳɼ�" << tArray[i].stuArray[j].score << endl;
		}
	}
	system("pause");
	return 0;
}