#include<iostream>
using namespace std;
#include<vector>
//
// vector 预留空间
// 
// 减少vector 在内存中的扩展此时
// 
// reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问。
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

	
	int num = 0; // 统计开辟次数
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
	// 如果指定预留空间的话，要重新开辟30次内存空间，每次都要拷贝原有数据
	cout << "num = " << num << endl;

	// 如果提前知道盖容器的数量级，可以提前预留空间，减少动态开辟过程
	vector<int> v2;
	v2.reserve(100000);
	int num2 = 0; // 统计开辟次数
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
	// 只开辟一次
	cout << "num2 = " << num2 << endl;

}


//

int main()
{
	test01();
	system("pause");
	return 0;
}