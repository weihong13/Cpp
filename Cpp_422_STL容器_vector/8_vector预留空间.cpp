#include<iostream>
using namespace std;
#include<vector>
//
// vector Ԥ���ռ�
// 
// ����vector ���ڴ��е���չ��ʱ
// 
// reserve(int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�
// 
// 
// 




void printVecror(vector<int>& v1)
{
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;

	
	int num = 0; // ͳ�ƿ��ٴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	// ���ָ��Ԥ���ռ�Ļ���Ҫ���¿���30���ڴ�ռ䣬ÿ�ζ�Ҫ����ԭ������
	cout << "num = " << num << endl;

	// �����ǰ֪������������������������ǰԤ���ռ䣬���ٶ�̬���ٹ���
	vector<int> v2;
	v2.reserve(100000);
	int num2 = 0; // ͳ�ƿ��ٴ���
	int* p2 = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v2.push_back(i);
		if (p2 != &v2[0])
		{
			p2 = &v2[0];
			num2++;
		}
	}
	// ֻ����һ��
	cout << "num2 = " << num2 << endl;

}


//

int main()
{
	test01();
	system("pause");
	return 0;
}