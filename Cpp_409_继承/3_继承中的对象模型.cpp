//#include<iostream>
//using namespace std;
//
//
////
//// �̳��еĶ���ģ��
////
//
//// ����
//class Base
//{
//
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//// �����̳�
//class Son1 :public Base
//{
//public:
//	int m_D;
//};
//// cl /d1 reportSingleClassLayoutSon 3_�̳��еĶ���ģ��.cpp
//// �ṩ�����в鿴������Ϣ
//
//// class Son1      size(16) :
////	       +-- -
////	0      | +-- - (base class Base)
////	0      | | m_A
////	4      | | m_B
////	8      | | m_C
////         | +-- -
////	12     | m_D
////	       + -- -
//// 
//// 
//void test01() 
//{
//	// 
//	// �ڸ�����,���еķǾ�̬��Ա���ᱻ�̳�(����˽�е�����)
//	// �����е�˽������,�Ǳ�������������,��˷��ʲ���,��ȷʵ���̳���
//	cout << "size of Son: " << sizeof(Son1) << endl; // 16
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}