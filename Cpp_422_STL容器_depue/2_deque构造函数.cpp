//#include<iostream>
//using namespace std;
//#include<deque>
//
//
//
////
//// deque���캯��
//// deque<T> degT;     // Ĭ�Ϲ�����ʽ
//// deque(n, elem);  // ���캯����[beg,end)�����е�Ԫ�ؿ���������
//// deque(beg, end); // ���캯����n��elem����������
//// deque(const deque& deg); // �������캯��
//// 
//// 
////
//
//void printDeque(deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		// const_iterator ֻ���ĵ������������޸�
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	// Ĭ�Ϲ���
//	deque<int> d1;
//
//	// deque(n, elem);  
//	// ���캯����[beg,end)�����е�Ԫ�ؿ���������
//	deque<int> d2(5, 13);
//	printDeque(d2);
//
//	// deque(beg, end); 
//	// ���캯����n��elem����������
//	deque<int> d3(d2.begin(), d2.end());
//	printDeque(d3);
//
//	// deque(const deque& deg); 
//	// �������캯��
//	deque<int> d4(d3);
//	printDeque(d4);
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}