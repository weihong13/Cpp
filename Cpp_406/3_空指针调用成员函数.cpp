#include<iostream>
#include<string>

using namespace std;

//
// ��ָ����ó�Ա����
// 
// �ڳ�Ա�����ڲ��������ڵ��ó�Ա����ʱ����Ĭ�ϼ�һ��thisָ�룬
// ���thisָ����һ����ָ�룬���ÿ�ָ����ʳ�Ա����ʱ���ͻᱨ��
// 



//
class Person
{
public:
	int age;

	void showClassName() 
	{
		cout << "this is Person class" << endl;
	}
	void showClassAge()
	{
		// �ڷ��ʳ�Ա����ʱ����Ĭ�ϼ�this->
		// �����nullָ���ڵ��øú���
		// ��ô�����ڵ��ÿ�ָ���age����
		// ���ǲ��Ϸ���
		// �����Ҫ��һ����ָ����ж�����߰�ȫ��
		//
		if (this == NULL) {
			return;
		}
		cout << "age is " << this->age << endl;
	}

};

// ʹ�ÿ�ָ����ó�Ա����
void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showClassAge();
}

int main() {

	test01();
	system("pause");
	return 0;
}