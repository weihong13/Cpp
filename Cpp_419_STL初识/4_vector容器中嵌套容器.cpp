#include<iostream>
#include<vector>
using namespace std;


//
// vector容器嵌套容器
// 类似二维数组的效果
//



void test01()
{
	vector<vector <int>> vArr;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 10);
		v2.push_back(i + 20);
		v3.push_back(i + 30);
		v4.push_back(i + 40);

	}


	vArr.push_back(v1);
	vArr.push_back(v2);
	vArr.push_back(v3);
	vArr.push_back(v4);

	// 通过迭代器遍历大容器
	for (vector<vector<int>>::iterator it = vArr.begin(); it != vArr.end(); it++)
	{
		//遍历 (*it) 容器 vector<int>
		for (vector<int>::iterator jt = (*it).begin(); jt != (*it).end(); jt++)
		{
			cout << (*jt) << " ";
		}
		cout << endl;

	}



}

int main()
{

	test01();

	system("pause");
	return 0;
}