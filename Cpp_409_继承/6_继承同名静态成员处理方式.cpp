//#include<iostream>
//using namespace std;
//
//
//// �̳�ʱ,����ͬ����̬��Ա����������ϵķ��ʷ�ʽ
//
//// 
//// ͬ�Ǿ�̬ͬ��һ��
//// ����������ֱ�ӷ�������ͬ����Ա,ֱ�ӷ��ʼ���
//// ���������ʸ���ͬ����Ա,��Ҫ��������
////
//
//
//
//// ����
//class Base
//{
//
//public:
//	// ��������,�����ʼ��
//	static int m_Age;
//	static void func()
//	{
//		cout << "Base func�ĵ���: " << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base func(int a)�ĵ���: " << endl;
//	}
//
//};
//// ��������,�����ʼ��
//int Base::m_Age = 200;
//
//// �����̳�
//class Son :public Base
//{
//public:
//	// ��������,�����ʼ��
//	static int m_Age;
//	static void func()
//	{
//		cout << "Son func�ĵ���: " << endl;
//	}
//
//	
//};
//// ��������,�����ʼ��
//int Son::m_Age = 100;
//
//// ��̬ͬ����Ա����
//void test01()
//{
//	// ��̬�����������ַ��ʷ�ʽ
//	// 1. ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s1;
//	cout << "Son age: " << s1.m_Age << endl;
//	cout << "Base age: " << s1.Base::m_Age << endl;
//
//	// 2.ͨ����������
//	cout << "ͨ����������" << endl;
//	cout << "Son age: " << Son::m_Age << endl;
//	cout << "Base age: " << Son::Base::m_Age << endl; // ͨ����������,���ʸ�������
//	
//}
//
//// ��̬ͬ����Ա����
//void test02()
//{
//	// ��̬�����������ַ��ʷ�ʽ
//	// 1. ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s1;
//	s1.func();
//	s1.Base::func();
//
//	// 2.ͨ����������
//	cout << "ͨ����������" << endl;
//	Son::func();
//	Son::Base::func();
//
//	// ͬ�Ǿ�̬
//	// Son::func(100); // err
//	Son::Base::func(100);
//
//
//}
//
//int main() {
//
//	// test01();
//	test02();
//
//	system("pause");
//	return 0;
//}