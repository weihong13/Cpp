#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

/*
	���캯��:
		queue<T> que;            //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
		queue(const queue &que); //�������캯��

	��ֵ����:
		queue& operator=(const queue &que);  //���صȺŲ�����

	���ݴ�ȡ:
		push(elem); //����β���Ԫ��
		pop();      //�Ӷ�ͷ�Ƴ���һ��Ԫ��
		back();     //�������һ��Ԫ��
		front();    //���ص�һ��Ԫ��

	��С����:
		empty();   //�ж϶�ջ�Ƿ�Ϊ��
		size();    //����ջ�Ĵ�С
*/

//int main()
//{
//	// Ĭ�Ϲ���
//	queue<int> q;
//
//	// �пգ��շ���1 �ǿշ���0
//	int ret = q.empty();
//	cout << ret << endl;
//
//	// ������
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	q.push(5);
//	q.push(6);
//	
//	// ������
//	q.pop();
//
//	// ��������
//	queue<int> q1(q);
//	// �ȺŲ���������
//	queue<int> q2 = q1;
//
//	// ��ջ
//	q2.pop();
//
//	// �鿴��ͷԪ��
//	cout << q2.front() << endl;
//	// �鿴��βԪ��
//	cout << q2.back()<< endl;
//	// �鿴���еĴ�С
//	cout << q2.size() << endl;
//
//
//
//	return 0;
//}