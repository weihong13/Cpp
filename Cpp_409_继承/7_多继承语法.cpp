//#include <iostream>
//using namespace std;
//
////
//// ��̳��﷨
//// C++ ������ ����̳ж������
//// 
//// �﷨
//// class ����: �̳з�ʽ ����1, �̳з�ʽ ����2
//// 
//// ��̳п������������д���ͬ��,��Ҫ���������������
//// 
//// C++ ʵ�ʿ����в�����ʹ�ö�̳� 
////
//
//// ����1
//class Base1
//{
//public:
//	int m_A;
//	int m_S;
//};
//// ����2
//class Base2
//{
//public:
//	int m_B;
//	int m_S;
//
//};
//
//// ����1
//class Son :public Base1, public Base2
//{
//public:
//	int m_C;
//};
//
//void test01()
//{
//	cout << "size of Son: " << sizeof(Son) << endl;
//
//	Son s1;
//	s1.m_A = 100;
//	s1.m_B = 200;
//	s1.m_C = 300;
//
//	// �������ͬ����Ա����,�ͻ��ͻ
//	// s1.m_S = 100; // err ��֪�������Ǹ�����ĳ�Ա����
//	// ��д��������
//	s1.Base1::m_S = 100;
//	s1.Base2::m_S = 200;
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