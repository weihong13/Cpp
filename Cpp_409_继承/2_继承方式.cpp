//#include<iostream>
//using namespace std;
//
//
//
//// 
//// �̳з�ʽ��������������˽��
//// 
//// ������˽�е����ݣ����ۺ��ּ̳з�ʽ�����඼�޷�����
//// 
//// ���ڹ����̳� public
//// ������ʲô���ͣ������о���ʲô���ͣ�
//// �ڸ�����������public��������Ҳ��public
//// �ڸ�����������protected��������Ҳ��protected
//// 
//// 
//// ���ڱ����̳� protected
//// �ڸ�����������public�������б�Ϊprotected
//// �ڸ�����������protected����������protected
//// 
//// 
//// ����˽�м̳� private
//// �ڸ�����������public�������б�Ϊprivate
//// �ڸ�����������protected����������private
//// 
//// 
//// 
////
////
//
//// ����
//
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
//	void func()
//	{
//		m_A = 10;
//		m_B = 20;
//
//		//m_C = 30; // err �޷����ʸ����˽������
//	}
//
//};
//// �����̳в���
//void test01() 
//{
//	Son1 s1;
//	s1.m_A = 10;
//	// s1.m_B = 10; �����еı������ԣ�����̳к�Ҳ�Ǳ������ԣ�����޷�����
//}
//
//// �����̳�
//class Son2:protected Base
//{
//public:
//	void func()
//	{
//		m_A = 10; // protected 
//		m_B = 10; // protected
//	}
//};
//// �����̳в���
//void test02()
//{
//	Son2 s2;
//	// �����̳У��������Ա�Ϊ�������ԣ��޷�����
//	//s2.m_A;
//	//s2.m_B;
//}
//
//
//// ˽�м̳�
//class Son3 :private Base
//{
//public:
//	void func()
//	{
//		// ˽�м̳У����඼Ϊ˽��Ȩ��
//		m_A = 10;
//		m_B = 10; 
//	}
//};
//// ˽�м̳в���
//void test03()
//{
//	Son3 s3;
//	// �����̳У��������Ա�Ϊ˽��Ȩ�ޣ��޷�����
//	//s3.m_A;
//	//s3.m_B;
//}
//
//// GrandSon , �̳� ˽�м̳и����Son
//class GrandSon :public Son3
//{
//public:
//	void func()
//	{
//		// ����Son3 ��˵�� ˽�м̳и���Base�����Ծ���Ϊprivate
//		// ������GrandSon���޷��̳и���Son3 �е�˽�г�Ա
//		//m_A = 10;
//		//m_B = 10;
//	}
//};
//
//int main() {
//
//	
//
//	system("pause");
//	return 0;
//}