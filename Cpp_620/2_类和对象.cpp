#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	string name;
	int age;

	Person()
	{
		
	}
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	void work()
	{
		cout << this->name << " ���ڹ���" << endl;
	}
	~Person()
	{

	}


};

class Circle
{
public:
	int r;

	Circle(int r)
	{
		this->r = r;
	}
	double getCircumference()
	{
		return ((double)r * 3.14);
	}
	~Circle()
	{
		
	}
};

class Student
{
public:
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return this->name;
	}
	void setId(int id)
	{
		this->id = id;
	}
	int getId()
	{
		return this->id;
	}
	void getInfo()
	{
		cout << "������" << this->name << ", ѧ�ţ�" << this->id << endl;
	}


private:
	string name;
	int id;

};

int main()
{
	Person p;
	p.name = "����";
	p.age = 24;
	p.work();

	Person p1("����", 25);
	p1.work();



	Circle c1(5);
	double ret = c1.getCircumference();

	cout << "Բ���ܳ�Ϊ��" << ret << endl;

	Student std;
	std.setName("����");
	std.setId(10086);

	std.getInfo();

	system("pause");
	return 0;
}