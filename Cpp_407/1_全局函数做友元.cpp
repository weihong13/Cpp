//#include<iostream>
//#include<string>
//using namespace std;
//
//
////
//// ��Ԫ--friend
//// 
//// ����
//// �����п�����public�������ң�private��
//// ����ֻ��ȥ�����������������޷����ʵ�
//// ���������ĺû��ѣ��ǿ��Խ����ҵ�
//// 
//// �ڳ����У���Щ˽�����ԣ�Ҳ���������һЩ���⺯����������з��ʣ�����Ҫ�õ���Ԫ
//// 
//// ��Ԫ��Ŀ������һ���������� ������һ�����˽�г�Ա
//// 
//// ��Ԫ������ʵ��
//// 1.ȫ�ֺ�������Ԫ
//// 2.������Ԫ
//// 3.��Ա��������Ԫ
//// 
//// 
//
//
//// 1.ȫ�ֺ�������Ԫ
//class Person
//{
//	// ����goodGay����Ԫ�����Է���˽�г�Ա
//	friend void goodGay(Person* p);
//public:
//	string name;
//private:
//	int age;
//
//public:
//	Person() {
//		this->name = "weihong";
//		this->age = 19;
//	}
//
//};
//
//// ȫ�ֺ���
//void goodGay(Person* p) 
//{
//	cout << "�û������ڷ����������" << p->name << endl;
//	cout << "�û������ڷ����������" << p->age << endl;
//}
//void ordinaryFriends(Person* p)
//{
//	cout << "��ͨ�������ڷ����������" << p->name << endl;
//	// ���ʲ���
//	// cout << "�û������ڷ����������" << p->age << endl;
//}
//
//void test01() 
//{
//	Person p1;
//	goodGay(&p1);
//	ordinaryFriends(&p1);
//
//}
//
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
