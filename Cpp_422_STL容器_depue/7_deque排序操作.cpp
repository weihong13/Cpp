#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

//
// deque�������
// 
// �����㷨ʵ�ֶ�deque��������
// 
// �㷨 ��Ҫ����ͷ�ļ�algorithm
// sort(iterator beg��iterator lend)  //��beg��end������Ԫ�ؽ�������
// 



void printDeque(deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// const_iterator ֻ���ĵ������������޸�
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{

	deque<int> d1;
	d1.push_back(1);
	d1.push_back(3);
	d1.push_back(2);
	d1.push_back(5);
	d1.push_back(4);
	printDeque(d1);

	// Ĭ���� ��С���� ����
	// ����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	sort(d1.begin(), d1.end());
	printDeque(d1);
}


int main()
{
	test01();

	system("pause");
	return 0;
}




