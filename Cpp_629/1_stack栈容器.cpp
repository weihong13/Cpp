#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>

using namespace std;
/*
	��������:ջ�������õĶ���ӿ�
	���캯��:
		stack<T> stk;   // stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
		stack(const stack &stk);  // �������캯��
	��ֵ����:
		stack& operator=(const stack &stk);   // ���صȺŲ�����
	���ݴ�ȡ:
		push(elem);  // ��ջ�����Ԫ��
		pop();     // ��ջ���Ƴ���һ��Ԫ��
		top();     // ����ջ��Ԫ��

	��С����:
		empty(); // ջ�Ƿ�Ϊ��
		size();  // ����ջ�Ĵ�С

*/

//int main()
//{
//	// Ĭ�Ϲ���
//	stack<int> stk;
//
//	// �пգ��շ���1 �ǿշ���0
//	int ret = stk.empty();
//	cout << ret << endl;
//
//	// ��ջ
//	stk.push(1);
//	stk.push(2);
//	stk.push(3);
//	stk.push(4);
//
//	// ��������
//	stack<int> stk1(stk);
//	// �ȺŲ���������
//	stack<int> stk2 = stk1;
//
//	// ��ջ
//	stk2.pop();
//
//	// �鿴ջ��Ԫ��
//	cout << stk2.top() << endl;
//	// �鿴ջ�Ĵ�С
//	cout << stk2.size() << endl;
//
//
//
//	return 0;
//}

