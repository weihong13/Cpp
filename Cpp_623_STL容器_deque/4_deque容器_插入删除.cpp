#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <deque>



// ����ɾ��

/*
	���˲������:
	push back(elem);    //β�壬������β�����һ������
	push front(elem);   //ͷ�壬������ͷ������һ������
	pop_back();         //βɾ��ɾ���������һ������
	pop_front();        //ͷɾ��ɾ��������һ������
	
	ָ��λ�ò���:
	insert(pos,elem);    //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
	insert(pos,n,elem);  //��posλ�ò���n��elem���ݣ��޷���ֵ��
	insert(pos,beg,end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
	clear();             //�����������������
	erase(beg,end);      //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
	erase(pos);          //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
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

/*
���˲������:
	push back(elem);    //β�壬������β�����һ������
	push front(elem);   //ͷ�壬������ͷ������һ������
	pop_back();         //βɾ��ɾ���������һ������
	pop_front();        //ͷɾ��ɾ��������һ������
*/
//void test01()
//{
//	//deque<T> deqT;  //Ĭ�Ϲ�����ʽ
//	deque<int> d1;
//
//	// ��������
//	for (int i = 1; i <= 10; i++)
//	{
//		d1.push_back(i);  // β��
//		d1.push_front(i + 100); // ͷ��
//	}
//
//	printDeque(d1);
//	d1.pop_front(); // ͷɾ
//	d1.pop_back();  // βɾ
//
//}
///*
//ָ��λ�ò���:
//	insert(pos,elem);    //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//	insert(pos,n,elem);  //��posλ�ò���n��elem���ݣ��޷���ֵ��
//	insert(pos,beg,end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//	clear();             //�����������������
//	erase(beg,end);      //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//	erase(pos);          //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//*/
//void test02()
//{
//	//deque<T> deqT;  //Ĭ�Ϲ�����ʽ
//	deque<int> d1;
//
//	d1.insert(d1.begin(), 10);
//	d1.insert(d1.begin(), 20);
//	d1.insert(d1.begin(), 100);
//	d1.insert(d1.begin(), 200);
//
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.insert(it, 3, 10000);
//
//	deque<int> d2;
//	d1.insert(d2.begin(), 1);
//	d1.insert(d2.begin(), 2);
//	d1.insert(d2.begin(), 3);
//	// insert(pos,beg,end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ
//	d1.insert(it, d2.begin(), d2.end());
//	// clear(); //�����������������
//	d2.clear();
//
//	// erase(beg, end); //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//	d1.erase(d1.begin() + 1, d1.end() - 5);
//
//	// erase(pos);   //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//	d1.erase(it);
//
//}

//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}