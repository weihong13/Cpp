//#include<iostream>
//using namespace std;
//#include<vector>
////
//// ����ɾ��
//// 
//// β������Ԫ��ele
//// push back(ele); 
//// 
//// ɾ�����һ��Ԫ��
//// pop_back();
//// 
//// ������ָ��λ��pos����Ԫ��ele
//// insert(const iterator pos, ele);
//// 
//// ������ָ��λ��pos����count��Ԫ��ele
//// insert(const_iterator pos��int count, ele);
//// 
//// ɾ��������ָ���Ԫ��
//// erase(const iterator pos); 
//// 
//// ɾ����������start��end֮���Ԫ��
//// erase(const_iterator start, const_iterator end);
//// 
//// clear(); //ɾ������������Ԫ��
//	
//// 
//// 
//// 
//// 
//// 
//// 
//
//
//
//
//void printVecror(vector<int>& v1)
//{
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	// β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	cout << v1.capacity() << endl;
//	printVecror(v1);
//	// βɾ��
//	v1.pop_back();
//	cout << v1.capacity() << endl; // ��������
//	printVecror(v1);
//
//	// ������ָ��λ��pos����Ԫ��ele
//	// insert(const iterator pos, ele);
//	
//	v1.insert(v1.begin(), 100);
//	cout << v1.capacity() << endl; // ��������
//	printVecror(v1);
//
//
//	// ������ָ��λ��pos����count��Ԫ��ele
//	// insert(const_iterator pos��int count, ele);
//	v1.insert(v1.begin(), 2, 99);
//	cout << v1.capacity() << endl; // ���� 9
//	printVecror(v1);
//
//	// ɾ��������ָ���Ԫ��
//	// erase(const iterator pos); 
//	v1.erase(v1.begin()+2);
//	cout << v1.capacity() << endl; // ��������
//	printVecror(v1);
//
//
//	// ɾ����������start��end֮���Ԫ��
//	// erase(const_iterator start, const_iterator end);
//	// [start,end) ����ҿ�
//	v1.erase(v1.begin(), v1.begin() + 2);
//	printVecror(v1);
//
//
//	v1.clear(); //ɾ������������Ԫ��
//	cout << v1.capacity() << endl; // ��������
//	printVecror(v1);
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}