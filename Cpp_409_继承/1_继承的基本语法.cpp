//#include<iostream>
//using namespace std;
//
//
////
//// �̳� --- ��������������ԣ���װ���̳С���̬
//// 
//// �̳��ص�
//// �¼����������һ���Ĺ��ԣ������Լ�������
//// 
////              ����
////     è                 ��
//// ��è   �껨è    ��ʿ��    ����
//// 
//// �ô������ü̳������ٴ����ظ�
//// �﷨��class ����: �̳з�ʽ  ����
//// 
//// ����---������
//// ����---����
////
//
//// �̳�ʵ��ҳ��
//class BasePage
//{
//public:
//	void header() {
//		cout << "����ҳ��ͷ��������" << endl;
//	}
//	void footer() {
//		cout << "����ҳ��β��������" << endl;
//	}	void letf() {
//		cout << "����ҳ������б�����" << endl;
//	}
//};
//
//// Javaҳ��ʵ�� -- �����̳�
//class Java: public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java��Ƶ���ӣ�" << endl;
//	}
//};
//
//// Pythonҳ��ʵ�� -- �����̳�
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python��Ƶ���ӣ�" << endl;
//	}
//};
//// C++ҳ��ʵ�� -- �����̳�
//class Cpp : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++��Ƶ���ӣ�" << endl;
//	}
//};
//
//void test01()
//{
//	// Javaҳ��ʵ��
//	Java ja;
//	ja.header();
//	ja.letf();
//	ja.content();
//	ja.footer();
//	cout << "-----------------" << endl;
//	// Pythonҳ��ʵ��
//	Python py;
//	py.header();
//	py.letf();
//	py.content();
//	py.footer();
//
//	cout << "-----------------" << endl;
//	// C++ҳ��ʵ��
//	Cpp cpp;
//	cpp.header();
//	cpp.letf();
//	cpp.content();
//	cpp.footer();
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}