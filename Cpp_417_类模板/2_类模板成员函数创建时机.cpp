//#include<iostream>
//
//using namespace std;
//
////
//// ��ģ���Ա�����Ĵ���ʱ��
//// 1.��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//// 2.��ģ���еĳ�Ա�����ڵ��õ�ʱ��Ŵ���
////  
//
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "ShowPerson1" << endl;
//	}
//};
//
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "ShowPerson2" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//
//	void func1()
//	{
//		// ��Ϊ��֪��T��ʲô���ͣ������ڵ��õ�ʱ��Żᴴ��
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//
//void test01()
//{
//	MyClass<Person1> p1;
//	p1.func1();
//	// ����Ĳ�����Person1���ͣ���ʱ����person2�ĳ�Ա��������
//	// p1.func2(); // err
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}