//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//
////
//// �ļ�����--ͷ�ļ�<fstream>
//// 
//// �ļ�����
//// 1.�ı��ļ����ļ����ı���ASCII����ʽ�洢�ڼ������
//// 
//// 2.�������ļ����ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�������
//// 
//// 
//// �ļ�������������
//// 1.ofstream��д����-���ڴ�������ļ����������
//// 2.ifstream��������-���ļ������ڴ棬��������
//// 3.fstream����д����
//// 
//// 
//// ���ļ�����
//// 
//// 1.����ͷ�ļ���#include <fstream>
//// 2.������������ifstream ifs;
//// 3.���ļ������ж��Ƿ�򿪳ɹ�: ifs.open("�ļ�·��",�򿪷�ʽ); isopen
//// 4.�����ݣ����ֶ�ȡ��ʽ
//// 5.�ر��ļ���ifs.close();
//
//
//// �ı��ļ�--���ļ�
//void test01()
//{
//	// ����������
//	ifstream ifs;
//	// ���ļ�
//	ifs.open("test1.txt", ios::out);
//	// �ж��Ƿ����
//	if (!ifs.is_open())
//	{
//		return ;
//	}
//
//	// ������
//	// 1
//	//char buf[100] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// 2
//	//char buf[100] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// 3 ȫ��getline
//	//string buf;
//	//while (getline(ifs,buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	// 4 ���Ƽ�
//	char buf; 
//	while ( (buf = ifs.get()) != EOF )
//	{
//		cout << buf;
//	}
//
//
//	// �ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}