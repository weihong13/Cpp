//#include<iostream>
//#include<string>
//
//using namespace std;
//
////
//// this ָ��
//// 
//// ����֪�����Ǿ�̬�ĳ�Ա����ֻ��һ��ʵ����Ҳ����˵�������ص���ͬһ�����
//// ��ô�����������һ�������ڵ��ú����أ�----ʹ��thisָ��
//// 
//// thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//// �Ǹ�������ú�����this��ָ��˭
//// 
//// thisָ����������ÿһ���Ǿ�̬��Ա�����ڵ� 
//// this����Ҫ���壬֮��ʹ�ü���
//// 
//// thisָ����;
//// 1.������Ƴ�ͻ
////		���βκͳ�Ա��������ͬʱ������ʹ��this������
//// 2.���ض������� *this
////		����ķǾ�̬��Ա�����з��ض���������ʹ��return *this
//// 
//// 
////
//
//
////
//class Person
//{
//public:
//	int age;
//	// 1.������Ƴ�ͻ
//	Person(int age) {
//		this->age = age;
//	}
//
//	// ���ض�����
//	// ���ﷵ�صı����� person�� ����
//	// ��Ϊ���ݿ������죬��֮�䷵��ֵ�Ļ��������¶���һ������
//	// �Ͳ�����ԭ���Ķ����Ǹı���
//	//
//	Person& personAddAge(Person &p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//};
//
////
//void test01()
//{
//	Person p(10);
//	cout << "����Ϊ��" << p.age << endl;
//}
////
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	// ����ʵ����ʽ����
//	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);
//
//	cout << "����Ϊ��" << p2.age << endl;
//}
//int main() {
//	
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}