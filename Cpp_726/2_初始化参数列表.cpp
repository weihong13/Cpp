#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
	���캯������������Ա������ֵ��

	��ʲô��������ʼ����Ա�����ģ�

	��ʼ�������б�

	��ʼ�������б���ص�
		ֻ���ڹ��캯����ʹ��
		��ʼ����˳��ͳ�Ա������˳��һ�£��ͳ�ʼ�������б��˳���޹�
		���������õĳ�Ա��������������ڳ�ʼ�������б��У����г�ʼ��
		
*/

//class A
//{
//	int a;
//	int b;
//	int c;
//	const int d;
//	int& e;
//public:
//	A(int d, int e1) : a(2), c(d), b(c), d(a), e(e1)
//	{
//		// b�����ֵ����ʼ�������б��ǰ��ճ�Ա������˳��ֵ�ġ�
//		// Ҳ���� �ȸ� b��ֵ ,��ֵ��˳���� a b c d e������ a c b d e
//		// �� b ��ֵʱ��c��Ϊ��ֵ��c�����ֵ������b�������ֵ�ˡ�
//		cout << "  a:" << a
//			 << "  b:" << b 
//			 << "  c:" << c
//			 << "  d:" << d
//			 << "  e:" << e << endl;
//	}
//};
// �������Ϊ���Ա
class A {

};

class B {
	A a;
};

// B���� ��A��Ķ���a��Ϊ��Ա
// ������B��Ķ���bʱ��A��B�����������˳���ǣ�
// �ȹ���a���ٹ���b
// ������b��������a
// 
// �����������Ϊ�����Ա���ȹ�������������ٹ�������
// ����˳���빹���෴

class Phone {
public:
	string pName;

	Phone(string p_name):pName(p_name) {
		cout<< "Phone �Ĺ��캯��" << endl;
	}

	~Phone() {
		cout << "Phone ����������" << endl;

	}

};

class Person
{
public:
	string name;
	Phone phone;
	// phone(p_name) = Phone phone = p_name����ʽ����ת��
	Person(string m_name, string p_name) :name(m_name), phone(p_name) {
		cout << "Person �Ĺ��캯��" << endl;

	}
	~Person() {

		cout << "Person ����������" << endl;

	}
};


void test() {
	Person p("����", "ƻ��X");

	cout <<p.name <<"�õ��ֻ��ǣ� " <<p.phone.pName <<endl;

}

int main() {

	test();
	system("pause");
	return 0;

}
