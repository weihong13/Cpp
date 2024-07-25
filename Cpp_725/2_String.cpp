#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class String
{
	char* p;
	int size;
public:
	String()
	{
		p = nullptr;
		size = 0;
	}
	String(const char* p)
	{
		size = strlen(p);
		this->p = new char[size + 1];
		strcpy_s(this->p, size + 1, p);
	}
	String(const String& str)
	{
		this->size = str.size;
		this->p = new char[size + 1];
		strcpy_s(p, size + 1, str.p);
	}
	~String()
	{
		if (p) delete[]p;
	}
	void print()
	{
		cout << p << endl;
	}
};



int main()
{
	String str = "wewewe";
	str.print();
	return 0;
}