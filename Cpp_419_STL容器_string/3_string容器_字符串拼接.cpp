//#include<iostream>
//#include<string>
//using namespace std;
//
//
//
//
//
//
///*
//string& operator+=(const char* str);   //����+=������  
//string& operator+=(const char c);      //����+=������
//string& operator+=(const string& str); //����+=������
//string& append(const char *s);         //���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char *s, int n);  //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string &s);       // ͬoperator+=(const string& str)
//string& append(const string &s,int pos,int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
//*/
//
//void test01()
//{
//	string str1 = "wei";
//	string str2 = "hong";
//	str1 += "hong";
//	cout << str1 << endl;
//
//	str2 += '!';
//	cout << str2 << endl;
//
//	str2 += str1;
//	cout << str2 << endl;
//
//	str1.append("weihong");
//	cout << str1 << endl;
//	str2.append(str2);
//	cout << str2 << endl;
//
//	str1.append("xxxxxx", 3);
//	cout << str1 << endl;
//
//	str1.append("abcdefg", 1, 4);
//	cout << str1 << endl;
//
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}