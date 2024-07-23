#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
�������죺
	��������ĵ���ʱ����
		1��ʹ��һ�������ʼ��һ���µĶ���ֱ�ӵ��ÿ������죩
		2��ֵ���ݵķ�ʽ���βδ�ֵ�������Ĳ���Ϊ���󣬵��ò���ʱ��������Ĳ������βγ�ʼ����
		3����ֵ�ķ�ʽ���ؾֲ����󣨺�������ֵ���ݵķ�ʽ����һ������
	�βλ򷵻�ֵΪ����ʱ�����Ա�����ÿ�������
*/
class A
{
private:
	int num;
	int* p;
public:
	A() 
	{ 
		num = 2; 
		p = nullptr;
		cout << "�޲ι���" << endl; 
	}
	A(int a) 
	{ 
		this->num = a;
		this->p = new int[num];
		for (int i = 0; i < num; i++)
		{
			p[i] = i + 10;
		}
		cout << "�вι���" << endl;
	}

	// ��������Ĳ�����������������
	// �����������Ĳ����������õĻ�������������޵ݹ飨�Ե��ã�
	// �������������ββ������ã��ڸ��βθ�ֵ��ʱ��ͻ���п������죬���ÿ������죬�ֵõ��ÿ������죬�ͻ�����ѭ�����Ե���
	A(const A& other) 
	{	
		/*
		* ǳ���������Ǽ򵥵ĸ�ֵ����
		* ǳ���������⣺
		*		�����Ա������ָ��ָ������ڴ棬ǳ�����ͻ�ʹ ��ͬ�Ķ���ָ��ͬһ���ڴ�ռ�
		*		�����������������ʱ���ͻ����ͷ�ͬһ������ڴ棬���ִ�����������
		*/
		// ǳ����
		// this->p = other.p; // error

		// ������Լ�����һ���µĶ����ڴ�ռ䣬����֤�¶����ֵ�뿽��֮ǰ��ֵһ��
		this->num = other.num;
		this->p = new int[num];
		for (int i = 0; i < num; i++)
		{
			this->p[i] = other.p[i];
		}

		cout << "��������" << endl;
	}
	~A()
	{
		if (p) delete[]p;
	}
};
// 1��ʹ��һ�������ʼ��һ���µĶ���
void test01()
{
	A a;
	A b = a; // �����������ʽ��
	A c(a);  // ������������ŷ�

}

// 2��ֵ���ݵķ�ʽ���βδ�ֵ�������Ĳ���Ϊ���󣬵��ò���ʱ��������Ĳ������βγ�ʼ����
void test02(A a)
{
	// ����β����������ͣ��Ͳ�����ÿ������죬��Ϊ��û���µĶ������

}

// ��ֵ�ķ�ʽ���ؾֲ����󣨺�������ֵ���ݵķ�ʽ����һ������
// �������ֵ���������ͣ��Ͳ�����ÿ������죬��Ϊ��û���µĶ������
A test03()
{
	A a;
	return a; // ��������--����һ����������
}
//int main()
//{
//	// ʹ��һ�������ʼ��һ���µĶ���
//	// test01();
//	
//	// ֵ���ݵķ�ʽ���βδ�ֵ�������Ĳ���Ϊ���󣬵��ò���ʱ��������Ĳ������βγ�ʼ����
//	// ����β����������ͣ��Ͳ�����ÿ������죬��Ϊ��û���µĶ������
//	A a;
//	// test02(a);
//	
//	// ��ֵ�ķ�ʽ���ؾֲ����󣨺�������ֵ���ݵķ�ʽ����һ������
//	// �������ֵ���������ͣ��Ͳ�����ÿ������죬��Ϊ��û���µĶ������
//	test03();
//	return 0;
//}
// 


// ����������ϰ

class Car
{
	int age;
	int* fuel;
public:
	Car()
	{
		age = 0 ;
		fuel = 0;
		cout << "�޲ι���" << endl;
	}
	Car(int age, int fuel)
	{
		this->age = age;
		this->fuel = new int(fuel);
		cout << "�вι���" << endl;
	}
	Car(const Car& car)
	{
		this->age = car.age;
		this->fuel = new int(*car.fuel);
		cout << "��������" << endl;
	}
	~Car()
	{
		if (fuel) delete fuel;
	}

};

class Arr
{

public:
	Arr()
	{
		num = 0;
		arr = nullptr;
		cout << "�޲ι���" << endl;
	}
	Arr(int a)
	{
		this->num = a;
		this->arr = new int[num];
		for (int i = 0; i < num; i++)
		{
			cin >> this->arr[i];
		}
		cout << "�вι���" << endl;
	}
	Arr(const Arr& other)
	{
		this->num = other.num;
		this->arr = new int[num];
		for (int i = 0; i < num; i++)
		{
			this->arr[i] = other.arr[i];
		}

		cout << "��������" << endl;
	}
	~Arr()
	{
		if (arr) delete[]arr;
	}

	int num;
	int* arr;
};

class vector
{

	int* arr;
public:
	vector()
	{
		arr = nullptr;
	}
	vector(int a)
	{
		if (a > 0) arr = new int[a];
		else vector();
	}
};

int main()
{
	Arr arr1 = 5;
	Arr arr2 = arr1;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1.arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr2.arr[i] << " ";
	}
	return 0;
}