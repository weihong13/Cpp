#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#include<vector>

class A
{
	int num;
	int* p;
public:
	A() :num(0), p(nullptr) {}
	A(int num) :num(num), p(new int(num)) {}
	~A()
	{
		if (p) delete p;
	}
	A& operator= (const A& other)
	{
		if (p) delete p; //�ͷ�ԭ��ָ��Ķ����ڴ棬��������û����һ����
		num = other.num;
		p = new int(num); //ָ���µĶ����ڴ�

		return *this;
	}
};

int& func()
{
	int a = 3;
	return a;
}


int main() {
	int a1 = func(); // ok���ڲ���a��a1���գ���Ȼ����������a�������ˣ���a1���Ѿ���a��ֵ��

	int& a2 = func();// error��ʹ�����ý������ã�a2���Ǻ����ڲ���a��a�����٣�a2Ҳ��û��

	A a(2), b(3),c;
	c = a = b; // �������û��ʵ�ָ�ֵ�����������������ṩĬ�ϵĸ�ֵ�������ÿ����Ա���ᱻ��ֵ����ʱҪע��ǳ��������
	return 0;
}
