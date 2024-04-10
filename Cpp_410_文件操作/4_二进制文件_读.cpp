#include <iostream>
#include <fstream>
using namespace std;

//
// �������ļ���д
// 
// ע��򿪷�ʽ ios::binary �����Ʒ�ʽ   
// 
// 
// �����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
// ����ԭ��:ostream& read(char* buffer, int ikn);
// ��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
//       
//
class Person
{
public:
	char name[20];
	int age;
};

// �������ļ�--д�ļ�
void test01()
{
	// ����������-�ڴ��������ʱ��Ϳ��Դ�
	ifstream ifs;
	// ���ļ�
	ifs.open("person.txt", ios::out | ios::binary);
	// �ж϶�ȡ�Ƿ�ɹ�
	if (!ifs.is_open())
	{
		return;
	}
	// д������

	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "������" << p.name << endl;
	cout << "���䣺" << p.age << endl;


	// �ر��ļ�
	ifs.close();
}

int main()
{
	test01();

	system("pause");
	return 0;
}