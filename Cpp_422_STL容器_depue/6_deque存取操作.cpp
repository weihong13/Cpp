//
//#include<iostream>
//using namespace std;
//#include<deque>
//
////
//// deque��ȡ����
//// 
//// at(int idx);  // ��������idx��ָ������
//// operator[];   // ��������idx��ָ������  [] ����
//// front();      // ���������е�һ������Ԫ��
//// back();       // �������������һ������Ԫ��
//// 
//// 
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
//
//
//void test01()
//{
//	
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_back(40);
//	d1.push_back(50);
//	printDeque(d1);
//	// at(int idx);  
//	// ��������idx��ָ������
//	cout << d1.at(0) << endl;
//
//	// operator[];   
//	// ��������idx��ָ������  [] ����
//	cout << d1[1] << endl;
//
//	// front();      
//	// ���������е�һ������Ԫ��
//	cout << d1.front() << endl;
//
//	// back();       
//	// �������������һ������Ԫ��
//	cout << d1.back() << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	
//
//	system("pause");
//	return 0;
//}
//
//
//
//
