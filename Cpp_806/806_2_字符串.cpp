#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
#include <vector>

#include<algorithm>


// �ַ���������
/*
	cin
		cin �ǿ��ո񡢻��С�tab �������Ƿ���������ģ�������޷�����ո񡢻��С�tab

	getline(): ����һ�У��ո��Ƿָ���

*/
void test01() 
{
	string str,str1;
	cin >> str; // ������޷�����ո񡢻��С�tab
	getline(cin, str1);// ����һ�У��ո��Ƿָ���


}
void test02()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	if (str1 > str2) // ��string�ڲ����Ƚ����������
	{
		cout << "str1��" << endl;
	}
	else if (str1 < str2)
	{
		cout << "str2��" << endl;
	}
	else
	{
		cout << "��ͬ" << endl;
	}

	// []��������أ����ص����������ͣ���˿��Ա��޸�
	// ��������������ͣ��ͻᱨ�� ���ʽ�����ǿ��޸ĵ���ֵ

	str1[2] = '2'; 
}


string str = "adsasd";
char& get(int i)
{
	return str[i];
}

void test03()
{
	string str = "abdssd";
	string str1 = str; // ��������
	string str2;
	str2 = str1; // ��ֵ���������

	// str1 + str2 + str; // +���������
	str += 'a'; // +=����

}

void test04()
{
	// STL��������Ϊ��ͳһSTL�����ı�����ʽ
	// ����֧�ֱ������������е����� vector  string  map  un_map  set  un_set  list
	// ջ�����ȼ����в�֧�ֱ���������û�е��������ܱ������ƻ��������ݽṹ�����ԣ�

	// ������ʧЧ
	// ���ڲ���ɾ�����������µ�����ָ����ڴ�ָ���Ŀռ��ˣ���ɵ�����ʧЧ��Ұָ�룩
	string str = "qwea sdret";

	string::const_iterator it = str.begin();
	for (;  it != str.end(); it++)
	{
		cout << *it;
	}
	cout <<  endl;
	cout << str.find(" ") << endl;

}

void test05()
{
	vector<int> vec = { 9,7,8,-1,3,4,2,6,5 };
	
	sort(vec.begin(), vec.end()); // ��С��������
	sort(vec.rbegin(), vec.rend());// �Ӵ�С����

	reverse(vec.begin(), vec.end());// ��ת



}

void test06()
{
	//���ַ���ת��������
	string s = "123", s1 = "456";
	int sum = stoi(s) + stoi(s1);
	cout << sum << endl;
	//���ַ���ת����double����
	string s2 = "12.3", s3 = "1.4";
	double sum1 = stod(s2) + stod(s3);
	cout << sum1 << endl;
	//��������С��ת�����ַ���
	int a = 2;
	double b = 2.3;
	string  sum3 = to_string(a) + to_string(b);
	cout << sum3 << endl;
}


// ��������ͨ��const_case�޸�
void test07()
{
	const int a = 2;
	const int* p = &a;
	// *p = 3; // error

	int* p1 = const_cast<int*> (p);
	*p1 = 3;


}

int main()
{
	test04();

	get(2) = '2';

	return 0;
}