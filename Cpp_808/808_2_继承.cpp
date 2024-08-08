#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
	继承权限：
		   父类权限         public    protected   private
		子类public继承      public    protected   private
		子类protected继承   protected protected   private
		子类private继承     private   private     private

	继承中，先调用父类构造，再调用子类构造；析构的顺序相反

	当父类与子类有同名的成员变量或成员函数时
		（1）子类访问自己的成员变量或函数，通过对象直接访问即可
		（2）子类想访问父类的成员变量或函数，需要加上作用域

	通过作用域解决多继承中的二义性问题


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