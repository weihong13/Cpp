//#include<iostream>
//using namespace std;
//
//
//// �̳�ʱ,���������Ա����ͬ��
//
//// 
//// 
//// ����������ֱ�ӷ�������ͬ����Ա,ֱ�ӷ��ʼ���
//// ���������ʸ���ͬ����Ա,��Ҫ��������
////
//// �����г����븸��ͬ���ĳ�Ա����,�����ͬ����Ա���������ص�����������ͬ����Ա����
//// ���� �����Ѿ���ͬ���ĳ�Ա���� func(), 
//// �������е� func(int a) �Ѿ���������,����޷�ֱ�ӵ���,��Ҫд��������
//
//
//// ����
//class Base
//{
//
//public:
//	int m_Age;
//	void func()
//	{
//		cout << "Base func�ĵ���: " << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base func(int a)�ĵ���: " << endl;
//	}
//};
//
//// �����̳�
//class Son :public Base
//{
//public:
//	int m_Age;
//	void func()
//	{
//		cout << "Son func�ĵ���: " << endl;
//	}
//};
//
//// ͬ����Ա����
//void test01()
//{
//	Son s1;
//	s1.m_Age = 10;
//	s1.Base::m_Age = 40;
//	cout << "Son age: " << s1.m_Age << endl;
//	cout << "Base age: " << s1.Base::m_Age << endl;
//}
//
//// ͬ����Ա����
//void test02() 
//{
//	Son s2;
//	s2.func();
//	s2.Base::func();
//
//	// �����г����븸��ͬ���ĳ�Ա����,�����ͬ����Ա���������ص�����������ͬ����Ա����
//	// ���� �����Ѿ���ͬ���ĳ�Ա���� func(), 
//	// �������е� func(int a) �Ѿ���������,����޷�ֱ�ӵ���,��Ҫд��������
//	
//	// s2.func(100); // err
//	s2.Base::func(100); // ok
//
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}