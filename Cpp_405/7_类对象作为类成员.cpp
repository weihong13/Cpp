//#include<iostream>
//#include<string>
//using namespace std;
//
//// �������Ϊ���Ա
//class A {
//
//};
//
//class B {
//	A a;
//};
//
//// B���� ��A��Ķ���a��Ϊ��Ա
//// ������B��Ķ���bʱ��A��B�����������˳���ǣ�
//// �ȹ���a���ٹ���b
//// ������b��������a
//// 
//// �����������Ϊ�����Ա���ȹ�������������ٹ�������
//// ����˳���빹���෴
//// 
////
//class Phone {
//public:
//	string pName;
//
//	Phone(string p_name):pName(p_name) {
//		cout<< "Phone �Ĺ��캯��" << endl;
//	}
//
//	~Phone() {
//		cout << "Phone ����������" << endl;
//
//	}
//
//};
//
//class Person
//{
//public:
//	string name;
//	Phone phone;
//	// phone(p_name) = Phone phone = p_name����ʽ����ת��
//	Person(string m_name, string p_name) :name(m_name), phone(p_name) {
//		cout << "Person �Ĺ��캯��" << endl;
//
//	}
//	~Person() {
//		cout << "Person ����������" << endl;
//
//	}
//};
//
//
//void test() {
//	Person p("����", "ƻ��X");
//
//	cout <<p.name <<"�õ��ֻ��ǣ� " <<p.phone.pName <<endl;
//
//}
//
//int main() {
//
//	test();
//	system("pause");
//	return 0;
//
//}