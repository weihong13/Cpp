#include<iostream>
#include<string>
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



class Person
{
public:
	int id;
	mutable int age;

	// this ָ��ı�����һ��ָ�볣����ָ���ָ���ǲ������޸ĵ�
	// Person* const this --- this ָ�����޸ģ�thisָ����Ǹ����������޸�
	// �ں������const �൱�� const Person* const this
	// this ָ�����޸ģ�thisָ����Ǹ�����Ҳ�������޸�
	// ���Ҫ�޸� ���� thisָ����Ǹ�����ǰ �� mutable 
	void showPersonAge() const 
	{
		if (this == NULL) return;
		this->age = 100;
		cout << "Age: " << age << endl;
	}

	void func() {
		cout << "����func�ĵ��� " << endl;

	}
};

// ������
void test01() {
	//// ��ָ����ʳ�Ա����
	// Person* p = NULL;
	// p->showPersonAge();

	Person p1;
	p1.showPersonAge();
}

// ������
void test02() {

	// const ���ε� ������
	const Person p;
	p.age = 1000;
	// p.id = 123;  // δ��mutable �����޸�

	// ������ֻ�ܵ��ó�����
	p.showPersonAge();
	// �������ܵ�����ͨ����
	// ��ͨ��Ա���������޸ĳ�Ա����
	// ���������ǲ����޸�һ��ĳ�Ա���Ե�
	// p.func();  // err

}

//

int main() {
	test01();


	system("pause");
	return 0;
}
