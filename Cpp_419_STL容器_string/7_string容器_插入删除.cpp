//#include<iostream>
//using namespace std;
//#include<string>
//
//
////
//// �ַ�������ɾ��
//// 
//// string& insert(int pos, const char* s)!      //�����ַ���
//// string& insert(int pos, const string& str);  //�����ַ���
//// string& insert(int pos, int n, char c);      //��ָ��λ�ò���n���ַ�c
//// string& erase(int pos, int n = npos);       //ɾ����Pos��ʼ��n���ַ�
//// 
//
//
//
//void test01()
//{
//	string str1 = "weihong";
//	// str1.insert(2, "xxxx");
//	cout << str1 << endl;
//	
//	// ���±�1 ���±�5 �����ַ�xxx�������Ҳ����
//	str1.insert(1, 5, 'x'); 
//	cout << str1 << endl; // wxxxxxeihong
//
//	// ɾ�����±�1 ���±�5���ַ�
//	str1.erase(1, 5);
//	cout << str1 << endl; // weihong
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