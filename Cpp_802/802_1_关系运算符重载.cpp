#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#include<vector>



// ���ã����ع�ϵ������������������Զ������Ͷ�����жԱȲ���

class A
{
	int num;
public:
	A() :num(0) {}
	A(int num) :num(num) {}

	bool operator> (const A& other)
	{
		if (this->num > other.num) return 1;
		return 0;
	}

	bool operator ==(const A& other)
	{

		if (this->num == other.num) return 1;
		return 0;
	}
};

int main() {

	A a(2), b;
	cout << (a > b);
	return 0;
}
