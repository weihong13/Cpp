//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//
//
////
//// ���������--����
//// �������õ��������ͣ����������׸�������
//// 
//// �������Լ���������ͣ�����һ���ֻ࣬��ͨ����ȡ���Ա����������cout���
//// 
//// ����ͨ��ȫ�ֺ�����ʵ�����Ƶ����أ�cout << p ;
//// ��ֱ�����һ������
////
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	int m_A;
//	int m_B;
//	
//
//	// �вι���
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//	// ���ó�Ա����ʵ����������������أ�
//	// void operator<<(cout)  
//	// ʹ�÷���Ϊ��p.operator(cout) ����Ϊ��p << cout
//	// ����ȷ�����Ӧ���� cout << p;  �޷�ʵ�� cout�����
//	// ��� ��������������� ֻ��ʹ�� ȫ�ֺ���
//	//
//
//};
//
//
//// ���������������
//// Ϊ�˷�ֹ��Ա������˽�еģ�����ȫ�ֺ����޷����ʣ���Ҫ����ȫ�ֺ�����Ϊ��Ԫ
//// �����cout ֻ��һ�����ã�cout�ı��������������κ�����
//// Ϊ��ʵ����ʽ���ʣ����ﷵ��һ�� ostream���͵� ����
//// ostream ���������
////
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "m_A: " << p.m_A << "\n" << "m_B: " << p.m_B;
//
//	return cout;
//}
//
//void test01()
//{
//	Person p1(10, 20);
//	cout << p1 << endl;
//
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
//
