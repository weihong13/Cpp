#include<iostream>
using namespace std;
#include<string>


//
// �ַ�����ȡ�Ӵ�
// ���ĸ�λ���𣬽ض��ٸ�
// string substr(int pos=8��intn=npos)const; //������pos��ʼ��n���ַ���ɵ��ַ���
// 



void test01()
{
	string str1 = "xxxweihongxxx";
	
	string str2;
	// ������3��ʼ��7���ַ���ɵ��ַ���
	str2 = str1.substr(3, 7);
	cout << str2 << endl;

	string email = "WeiHong@163.com";
	int pos = email.find('@');

	string userName = email.substr(0, pos);
	cout << userName << endl;


}

int main()
{
	test01();

	system("pause");
	return 0;
}