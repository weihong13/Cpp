#include "String.h"



ostream& operator<<(ostream& o, const String& other)
{
	for (int i = 0; i < other.n; i++)
	{
		cout << other.p[i];
	}
	return o;
}



String::String()
{
	p = nullptr;
	this->n = 0;
}

String::String(int n, char c)
{
	this->n = n;
	this->p = new char[n + 1];
	for (int i = 0; i < n; i++)
	{
		this->p[i] = c;
	}
	p[n] = '\0';
}

String::String(const char* p)
{
	this->n = strlen(p);
	this->p = new char[this->n + 1];
	strcpy_s(this->p, this->n + 1, p);
}

String::String(const String& other)
{
	if (other.p == nullptr)
	{
		this->p = nullptr;
		this->n = 0;
		return;
	}
	n = other.n;
	p = new char[n + 1];
	strcpy_s(p, n + 1, other.p);
	p[n] = '\0';
}

String::~String()
{
	if (p) delete[] p;
}

size_t String::size() const
{
	return this->n;
}

char& String::operator[](int i) const
{

	if (i < 0 || i >= n)
	{
		cout << "下标越界" << endl;
		char c = '?';
		return c;
	}
	return p[i];
}


bool String::operator>(const String& other)
{
	int i = 0,j = 0;
	while (i < n && j < other.n && p[i] == other[j])
	{
		i++;
		j++;
	}
	if (i == n)return false;
	if (j == n) return true;
	return p[i] > other[j];
}

String& String::operator=(const String& other)
{
	// 先释放原来的数据
	if (p) delete[]p;
	n = other.n;
	p = new char[n + 1];
	strcpy_s(p, n + 1, other.p);

	return *this;
}






