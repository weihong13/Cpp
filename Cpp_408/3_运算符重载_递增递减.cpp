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
//// 
//// ���õĵ���
//// ע��a++��++a������
////
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person p);
//
//public:
//
//	// �вι���
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//	// ���ó�Ա����ʵ��ǰ��++
//	// ������뷵��һ�� ���ã�Person&
//	// ��������ȷ�� �޸ĵ���һ��ֵ��
//	// ������ص�ֻ�� һ�� Person���͵Ķ��󣬻�Ĭ�ϵ��ÿ������캯����
//	// ���ص���һ���µĶ��󣬶����Ǳ������Ǹ�����
//	//
//	Person& operator++() { // ++p
//		m_A++;
//		m_B++;
//		return *this;
//	}
//	// ���ó�Ա����ʵ�ֺ���++
//	// Person& operator++(int) int ����ռλ����������������ǰ��++�ͺ���++
//	// ������Ҫ�ȱ��洫������ݣ�Ȼ��Դ�������ݲ���
//	// ��󷵻ر����������
//	// ��������Ҫ���ص���һ��ֵ�����������ã�
//	// ��������㷵�ص���һ�����õĻ������ص���һ���ֲ����������� temp
//	// �ں������ú�temp�ͱ�������
//	//
//	Person operator++(int) { // p++
//		// ��¼
//		Person temp = *this;
//		// ����
//		++m_A;
//		++m_B;
//		// ���ؼ�¼
//		return temp;
//	}
//
//
//private:
//	int m_A;
//	int m_B;
//};
//
//// ���������������
//ostream& operator<<(ostream& cout, Person p)
//{
//	cout << "m_A: " << p.m_A << "\n" << "m_B: " << p.m_B;
//
//	return cout;
//}
//
//
//void test01()
//{
//	Person p1(10, 10);
//	cout << ++p1 << endl;
//	cout << p1 << endl;
//
//	cout << (p1++)++ << endl; // ����������11 11�����ص���һ�� person���͵ı��������ÿ������췵��һ���µĶ���
//	cout << p1 << endl; 
//	cout << p1 << endl;
//
//}
//
//int main() {
//
//	test01();
//
//	//// ���õĵ����������ǰ�ÿ���ʵ����ʽ���ʣ����ò���
//	//int a = 0;
//	//cout << ++(++a) << endl; // ok
//	//cout << a << endl;
//
//	//// cout << (a++)++ << endl; // err
//	//cout << a << endl;
//
//	system("pause");
//	return 0;
//}
//
