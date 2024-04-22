#include<iostream>
using namespace std;
#include<deque>

//
// deque��С����
// 
// deque�� û�������ĸ���
// 
// deque.empty();     //�ж������Ƿ�Ϊ��
// deque.size();      //����������Ԫ�صĸ���
// deque.resize(num);  //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
//					   //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
// 
// deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
//						    //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//
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
	//����
	deque<int> d1(5, 13);
	printDeque(d1);
	cout << "�пգ�" << d1.empty() << endl;

	cout << "��С��" << d1.size()<< endl;

	// deque.resize(num); ����ָ������,Ĭ�����
	d1.resize(10);
	printDeque(d1);
	d1.resize(5);

	// deque.resize(num, elem); ��elem���
	d1.resize(10,99);
	printDeque(d1);
}

int main()
{
	test01();

	system("pause");
	return 0;
}