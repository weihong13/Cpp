//#include <iostream>
//#include <fstream>
//using namespace std;
//
////
//// �������ļ���д
//// 
//// ע��򿪷�ʽ ios::binary �����Ʒ�ʽ   
//// 
//// 
//// �����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//// ����ԭ��:ostream& write(const char* buffer, int ikn);
//// ��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
////       
////
//class Person
//{
//public:
//	char name[20];
//	int age;
//};
//
//// �������ļ�--д�ļ�
//void test01()
//{
//	// ����������-�ڴ��������ʱ��Ϳ��Դ�
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	// ���ļ�
//	// ofs.open("test1.txt", ios::out);
//	// д������
//	
//	Person p = { "ʰ��",24 };
//
//	// ȡ ����p�ĵ�ַ��תΪconst char* ���ַ����룬�����ַ���СΪ sizeof(Person)��һ����Ĵ�С
//	ofs.write((const char*)&p, sizeof(Person));
//
//	// �ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}