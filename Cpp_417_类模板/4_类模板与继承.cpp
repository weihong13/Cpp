//#include<iostream>
//
//using namespace std;
//
//
////
//// ��ģ����̳�
//// 
//// ע������
//// 1. ���һ������̳еĸ�����һ����ģ�壬����������ʱ����Ҫָ��������T�е�����
//// 2. �����ָ�����������޷�����������ڴ�
//// 3. ��������ָ����������T�����ͣ���ô����Ҳ�ó�Ϊ��ģ��
//// 4.
////
//
//// son1 �ĸ��� -- ��һ����ģ��
//template<class T>
//class Base
//{
//public:
//	// �麯��-���������һ��������ģ��
//	virtual void show() = 0;
//	T t;
//};
//
//// 1. ���һ������̳еĸ�����һ����ģ�壬����������ʱ����Ҫָ��������T�е�����
//// 2. �����ָ�����������޷�����������ڴ�
//class Son1 : public Base<int> 
//{
//public:
//	// ��ͨ���캯��
//	Son1()
//	{
//		;
//	}
//	// �������Ĺ���
//	Son1(int a)
//	{
//		this->t = a;
//	}
//	// ��������
//	Son1(const Son1 &s)
//	{
//		this->t = s.t;
//	}
//	// �麯����ʵ��
//	void show()
//	{
//		cout << "Son1��show����"<< endl;
//		cout << "Base1 t��" << this->t << endl;
//	}
//};
//
//
//
//
//// 3. ��������ָ����������T�����ͣ���ô����Ҳ�ó�Ϊ��ģ��
//template<class T>
//class Base2
//{
//public:
//	virtual void show() = 0;
//	T t;
//};
//// 3. ��������ָ����������T�����ͣ���ô����Ҳ�ó�Ϊ��ģ��
//template<class S, typename T1> // son2 Ҳ����ģ�壬����������
//class Son2 :public Base2<T1>
//{
//public:
//	// �������Ĺ���
//	Son2(S obj, T1 t)
//	{
//		this->m_obj = obj;
//		this->t = t;
//	}
//	// ����һ����Ķ���ͨ��show�������ö����show����
//	void func()
//	{
//		m_obj.show();
//	}
//	// son2 �� ����
//	void show()
//	{
//		cout << "Son2��show����" << endl;
//		cout << "Base2 t��" << this->t << endl;
//	}
//	
//	S m_obj;
//	
//
//
//};
//
//
//
//void test01()
//{
//	Son1 son1(10);
//	son1.show();
//
//	// 
//	Son2<Son1, int> son2(son1, 20);
//	son2.show();
//	son2.func();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}