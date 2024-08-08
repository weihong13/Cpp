#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
	�̳�Ȩ�ޣ�
		   ����Ȩ��         public    protected   private
		����public�̳�      public    protected   private
		����protected�̳�   protected protected   private
		����private�̳�     private   private     private

	�̳��У��ȵ��ø��๹�죬�ٵ������๹�죻������˳���෴

	��������������ͬ���ĳ�Ա�������Ա����ʱ
		��1����������Լ��ĳ�Ա����������ͨ������ֱ�ӷ��ʼ���
		��2����������ʸ���ĳ�Ա������������Ҫ����������

	ͨ������������̳��еĶ���������


*/
class Father
{
public:
	int pub;
protected:
	int pro;
private:
	int pri;
};

class Son1 : public Father
{
	void func()
	{
		pub = 1;
		pro = 2;
		// pri = 3; // error
	}
};

class Son2 : protected Father
{
	void func()
	{
		pub = 1;
		pro = 2;
		// pri = 3; // error
	}
};

class Son3 : private Father
{
	void func()
	{
		pub = 1;
		pro = 2;
		// pri = 3; // error
	}
};



//int main()
//{
//	Son1 s1;
//	s1.pub;
//	//s1.pro; // error
//	//s1.pri; // error
//
//
//	Son2 s2;
//	//s2.pub; // error
//	//s2.pro; // error
//	//s2.pri; // error
//
//	Son3 s3;
//	//s3.pub; // error
//	//s3.pro; // error
//	//s3.pri; // error
//
//
//	int* p = new int(8);
//
//	delete p;
//
//
//	return 0;
//}