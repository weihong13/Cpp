#include<iostream>
#include<string>
using namespace std;


//
// ��̬��Ա--��static
// 
// ��̬��Ա��������̬��Ա����
// 
// ��̬��Ա������
//		���ж������һ������
//		�ڱ�׶η����ڴ�
//		���������������ʼ��
// ��̬��Ա������
//		���ж�����һ������
//		��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
// 
//


// ��̬��Ա������

class Person {
public:
	// ��������
	static int age;
	string name;

	// ��̬��Ա����Ҳ��Ȩ��
private:
	static int id;

public:
	// ��̬��Ա����--ֻ�ܷ��ʾ�̬��Ա����
	static void func() {
		// ֻ�ܷ������ڵľ�̬��Ա����
		age = 200;

		// ���ܷ��ʷǾ�̬�ĳ�Ա��������Ϊ�Ǿ�̬��Ա�����Ƕ������е����ԣ���Ҫͨ��������ܷ���
		// ��Ȼ��֪��Ҫ�޸��ĸ������ֵ
		// name = "weihong"; //err
		cout << "Person ��̬��Ա�����ĵ���" << endl;
	}

private:
	// ˽�е� ��̬��Ա����
	static void func2() {
		cout << "Person ��̬��Ա�����ĵ���" << endl;
	}

};

// �����ʼ��
int Person::age = 100;
int Person::id = 123;

void test1() {
	Person p;
	cout << p.age << endl;

	// 
	Person p2;
	p2.age = 200;
	
	// p��ageҲ���ı�
	cout << p.age << endl;

}

void test2() 
{
	// ��̬��Ա������������ĳ�������ϣ����ж���ַ���һ������
	// ��ˣ���̬��Ա���������ַ��ʷ�ʽ

	// 1.ͨ���������
	//Person p;
	//cout << p.age << endl;
	//// 2.ͨ����������
	//cout << Person::age << endl;
	
	// ����private�����ʲ���
	// cout << Person::id << endl; // err


	// ��̬��Ա����Ҳ�����ַ��ʷ�ʽ
	// 1.ͨ���������
	Person p1;
	p1.func;
	// 2.ͨ����������
	Person::func();

	// ����private�����ʲ���
	// Person::func2();  //err



}

int main() {

	// test1();
	test2();

	system("pause");
	return 0;
}