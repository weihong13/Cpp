#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

/*
��Ԫ��
	�ô�������ͨ����Ԫ������������ڵ�˽�� �� �ܱ������͵ĳ�Ա
	�������ƻ�����ķ�װ��
	��Ԫ��Ϊ��Ԫ��������Ԫ��
*/
class A
{

	int num;
public:
	friend void fun();  //��Ԫ����
	friend class B;
	A()
	{
		num = 0;
	}
};

A a;
void fun()
{
	a.num = 2;
	cout << a.num << endl;
}

class B
{
public:
	void fun()
	{
		a.num = 2;
	}
};
int main()
{
	fun();
}
