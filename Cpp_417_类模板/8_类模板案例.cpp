#include"MyArray.hpp"

//
// ��ģ�尸��
// ��������:ʵ��һ��ͨ�õ������࣬Ҫ������
// ���Զ��������������Լ��Զ����������͵����ݽ��д洢
// �������е����ݴ洢������
// ���캯���п��Դ������������
// �ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ��������
// �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
// ����ͨ���±�ķ�ʽ���������е�Ԫ��
// ���Ի�ȡ�����е�ǰԪ�ظ��������������
//
//



void test01()
{
	MyArray<int> arr(5);
	cout << "-------------" << endl;
	MyArray<int> arr1(arr);
	cout << "-------------" << endl;
	MyArray<int> arr2(1);
	arr2 = arr;


}
// �������������͵Ĳ���
void test02()
{
	MyArray<int> arr(5);
	
	for (int i = 0; i < arr.getCapacity() ;i++)
	{
		arr.TailInsert(i + 10);
		cout << arr.getSize() << endl;

	}
	arr.TailDel();
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "  " << arr.getSize() << endl;
	}

}

// ���Զ����������͵Ĳ���

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->N_Age = age;
	}

	string m_Name;
	int N_Age;
};

void test03()
{
	MyArray<Person> pArr(10);

	Person p1("weihong1", 23);
	Person p2("weihong2", 24);
	Person p3("weihong3", 25);
	Person p4("weihong4", 26);
	Person p5("weihong5", 27);

	pArr.TailInsert(p1);
	pArr.TailInsert(p2);
	pArr.TailInsert(p3);
	pArr.TailInsert(p4);
	pArr.TailInsert(p5);

	for (int i = 0; i < pArr.getSize(); i++)
	{
		cout << "������" << pArr[i].m_Name 
			 << "  ���䣺" << pArr[i].N_Age << endl;
	}
}


int main()
{

	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}