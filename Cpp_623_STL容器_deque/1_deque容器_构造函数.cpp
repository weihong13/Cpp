#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>
// 

//
// deque ��������
// 
// ˫������-���Զ�ͷ�����в���
// 
// deque��vector����:
// vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
// deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻر�vector��
// vector����Ԫ��ʱ���ٶȻ��deque��, ��������ڲ�ʵ���й�
// 
// vector ��һ�����������Կռ�
//


// ���캯��
/*
	deque<T> deqT;          //Ĭ�Ϲ�����ʽ
	deque(beg, end);        //���캯����[beg,end)�����е�Ԫ�ؿ���������,
	deque(n, elem);         //���캯����n��elem����������
	deque(const deque &deg);//�������캯��
*/

//void printDeque(const deque<int>& d1)
//{
//	// ������Ϊ��ֻ��ӡ deque�����е����ݣ������иı䣬���д���ʱ��ʹ��const ���β���
//	// ��Ϊ�������ʱ��ʹ��const�����ˣ����ԣ�����ĵ�����Ҳ��Ҫ��Ϊ const_iterator(ֻ��������)
//	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		// *it = 100; // error
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{	
//	//deque<T> deqT;  //Ĭ�Ϲ�����ʽ
//	deque<int> d1;
//
//	// ��������
//	for (int i = 1; i <= 10; i++)
//	{
//		d1.push_back(i);
//	}
//	// ��ӡ
//	printDeque(d1);
//
//
//	// deque(beg, end); //���캯����[beg,end)�����е�Ԫ�ؿ���������
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	// deque(n, elem);  //���캯����n��elem����������
//	deque<int> d3(10, 1);
//	printDeque(d3);
//
//	// deque(const deque & deg);//�������캯��
//	deque<int> d4(d3);
//	printDeque(d4);
//
//}


//int main()
//{
//	test();
//
//
//	system("pause");
//	return 0;
//}
