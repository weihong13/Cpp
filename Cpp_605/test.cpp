#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
// i input o output stream������һ���ֽ����У��ַ�����
using namespace std; // �����ռ䣨�����򣩣���׼�����ռ�


//// �Լ�����������ռ�
//namespace Pointer {
//	int a;
//}
//
//// ��main��������ʱ����Ҫ��������
//int main()
//{
//	// a = 2; // err ���ʲ���pointer�е� a
//	Pointer::a = 2; 
//}


 //��������
 //C++ �������������ͣ�
	//			����ռһ���ֽڣ�ȡֵ0��false����1��true��
	//			�κη���ֵ������1
	//			C ������û��bool����
// 
// 
//int main()
//{
//
//	bool a1 = -1; // 1 ,�κη�0ֵ����1
//
//	return 0;
//}

/*
 new �� malloc ������
	new�ķ���ֵ����Ҫǿת����malloc��Ҫǿת
	new�����������malloc��C���ԵĿ⺯��
	new����Ҫ���������ֽڸ�����malloc��Ҫ���������ֽڸ���
	newʹ��delete�ͷţ�mallocʹ��free�ͷ�

//*/
//int main()
//{
//
//	int* n = new int[3]{ 1,2,3 }; // ������
//	delete[] n;	// �ͷŶ��
//
//	int* n1 = new int(3); // ����һ��
//	delete n1;	// �ͷ�һ��
//
//	int* p = (int*)malloc(sizeof(int) * 4); // ������
//	free(p); // �ͷ�
//	return 0;
//}


/*
ָ�볣����ָ��ĳ���
	ָ���ǳ�����ָ���ָ�����޸ģ�int * const p;
	
����ָ�룺
	ָ������ָ�룬
	������const int a;

*/
//int main()
//{
//	int* const p = NULL; // ָ�볣��
//
//	const int a = 9;  // ����
//	int const* p = &a; // ����ָ�룬ָ������ָ��
//
//	// int* p1 = &a; // error;
//
//}


/*
	���ã������
		�﷨���������� &���� = ԭ��
	
	���õĵײ�ʵ�֣����õĵײ���ָ�볣��--ָ���ָ�����޸�

	���õ��ص㣺
		���ù�ϵ�����޸�
		���ñ����ʼ�������Ҳ��ܳ�ʼ��Ϊ��

	�÷���
		��������������

*/

//int main()
//{
//	int a = 2;
//	
//	int& b = a; // b �� a �����ã������ & ����ȡ��ַ�����Ƕ������õķ��š�
//
//	cout << a << " " << b << endl;
//
//	b = 5;
//	cout << a << " " << b << endl;
//
//	int c = 6;
//	b = c;
//
//
//	double a1 = 1.0;
//	double& b1 = a1;
//
//	cout << sizeof b1 << endl; // 8�� = sizeof a1��������
//}


int main()
{
	int m = 0;
	int n = 1;
	int max = m > n ? m : n;
	cout << max;
	return 0;
}
