//#include<iostream>
//using namespace std;
//
//#include<deque>
//
//// deque& operator=(const deque& deg); // ���صȺŲ�����
//// assign(beg, end);                   // ��[beg, end)�����е����ݿ�����ֵ������
//// assign(n, elem);                    // ��n��elem������ֵ������
//
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
//	//����
//	deque<int> d1(5,13);
//
//	// deque& operator=(const deque & deg); 
//	// ���صȺŲ�����
//	deque<int> d2;
//	d2 = d1;
//	printDeque(d2);
//
//	// assign(beg, end);
//	// ��[beg, end)�����е����ݿ�����ֵ������
//	deque<int> d3;
//	d3.assign(d2.begin(), d2.end());
//	printDeque(d3);
//
//	// assign(n, elem);                   
//	// ��n��elem������ֵ������
//	deque<int> d4;
//	d4.assign(5, 11);
//	printDeque(d4);
//
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