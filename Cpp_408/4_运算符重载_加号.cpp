//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
////
//// ���������
//// �������õ��������ͣ����������׸�������㣬�����������������
//// 
//// �������Լ���������ͣ�����һ���ֱ࣬��ʹ�üӺţ����������޷�������ӵ�
//// 
//// ���ǿ����Լ�дһ����Ա������ʵ�����������������ӣ�Ȼ���ٷ���һ���µĶ���
//// 
//// �����Ļ���ÿ������Աд����Ӷ���һ��
//// ��ˣ�����������һ��ͳһ������----operator+
//// ����ͨ����Ա������ʵ�ּӺŵ����أ�Ҳ����ͨ��ȫ�ֺ�����ʵ��
//// 
//// 
////  
////
//
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//
//	// �޲ι���
//	Person() 
//	{
//		
//	}
//	// �вι���
//	Person(int a, int b) 
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//	void showPerson()
//	{
//		cout << "AΪ��" << this->m_A << endl;
//		cout << "BΪ��" << this->m_B << endl;
//
//	}
//
//	// �Լ�дһ����Ա����ʵ�ּӺ�����
//	Person personAdd(Person& p) 
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//	//// ʹ�ñ������ṩ��������
//	//Person operator+(Person& p) 
//	//{
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//};
//
////  ͨ��ȫ�ֺ������� +
//Person operator+(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
////  ͨ��ȫ�ֺ������� + Ȼ����к�������
//Person operator+(Person& p1, int a)
//{
//	Person temp;
//	temp.m_A = p1.m_A + a;
//	temp.m_B = p1.m_B + a;
//	return temp;
//}
//
//
//void test01()
//{
//	Person p1(10, 20);
//	Person p2(10, 20);
//	// ʹ���Լ��ĳ�Ա�����������
//	Person p3;
//	p3 = p2.personAdd(p1);
//	p3.showPerson();
//
//	//// ʹ�ñ�������������
//	//Person p4;
//	// ��Ա�������õı���
//	// //p4 = p1.operator+(p2);
//	//p4 = p1 + p2;  // �򻯲�����ֱ���üӺż���ʵ��
//	//p4.showPerson();
//
//
//	// ʹ��ȫ�ֺ�������+�������
//	Person p5;
//	// ȫ�ֺ������õı���
//	// p5 = operator+(p1, p2);
//	// ��Ϊ
//	p5 = p1 + p2;
//	p5.showPerson();
//
//	// ��������أ�Ҳ���Խ��к�������
//	p5 = p1 + 100; // person + int
//	p5.showPerson();
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
