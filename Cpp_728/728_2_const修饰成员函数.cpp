#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//
// const ���γ�Ա����
// 
// ������
// ��Ա�������const���֮Ϊ������
// �������������޸ĳ�Ա����
// ��Ա��������ʱ�ӹؼ��� mutable���ڳ�������Ҳ�����޸�
// 
// ������
// ��������ǰ�� const�Ƹö���Ϊ������
// ������ֻ�ܵ��ó�����
// 
//

/*
��������
	const���γ�Ա����Ϊ������
	�����������this��const A* const this;�� �� �ǳ�������this ��A* const this;����ͬ
	�����޸ĳ�Ա����,������޸ĳ�Ա�������ڱ�������ǰ��� mutable �ؼ���
*/

class A
{
public:
	mutable int num;
	A() {}

	void work()
	{
		this; //A* const this;

		this->num = 2;
		fun(); //�ǳ��������ó������൱�ڸ� *this ������const����
	}

	//��������������this ���ǳ����������this��ֵ�൱��ȥ���� *this  const ����,���Բ���
	void fun() const
	{
		this; // const A* const this;
		num = 2;
		cout << "fun const" << endl;
	}

	void  fun() //��Ϊ�������ͷǳ���������������this��ͬ�����Գ������ͷǳ����������ع�ϵ
	{
		cout << "fun" << endl;
	}
};
int main()
{
	A a; //�������Ե��÷ǳ���Ա����Ҳ���Ե��ó���Ա����
	const A b; //����ֻ�ܵ��ó���Ա��������Ϊ�ڸ�this ���ε�ʱ��const���Բ��ܱ�ȥ��
	a.fun();
	b.fun();
}
