#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>


// ��С����
/*
	deque.empty();         //�ж������Ƿ�Ϊ��
	deque.size();          //����������Ԫ�صĸ���
	deque.resize(num);     //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
						    //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	deque.resize(num,elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
							//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
*/

//void printDeque(const deque<int>& d1)
//{	// ��ӡ
//	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		// *it = 100; // error
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//deque<T> deqT;  //Ĭ�Ϲ�����ʽ
//	deque<int> d1;
//
//	// ��������
//	for (int i = 1; i <= 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	cout << "is empty " << d1.empty() << endl;
//	cout << "deque size " << d1.size() << endl;
//
//	// deque.resize(num);   //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
//							//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//	d1.resize(15);
//	printDeque(d1);
//	d1.resize(10);
//	// deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
//							//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//	d1.resize(15, 100);
//	printDeque(d1);
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