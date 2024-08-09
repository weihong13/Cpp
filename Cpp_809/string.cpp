#include "string.h"



String::String()
{
	p = nullptr;
	size = 0;
}

String::String(const char* p)
{
	size = strlen(p);
	this->p = new char[size + 1];
	strcpy_s(this->p, size, p);
	this->p[size] = '\0';
}

String::String(int n, char c)
{
	size = n;
	this->p = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		this->p[i] = c;
	}
	p[size] = '\0';
}

String::String(const String& other)
{
	if (other.p == nullptr)
	{
		this->p = nullptr;
		this->size = 0;
		return;
	}
	size = other.size;
	p = new char[size + 1];
	strcpy_s(p, size, other.p);
	p[size] = '\0';
}

