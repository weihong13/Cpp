#pragma once

#include <iostream>
using namespace std;

class String
{
	char* p;
	int size;
public:
	String();
	
	String(const char* p);
	
	String(int n, char c);

	String(const String& other);
	//~String();

	////运算符返回自己考虑
	//char& operator[](int i)const;
	//bool operator>(const String& other);
	//String& operator=(const String& other);
	//String operator+=(const String& other);

	//size_t size() const;

	
};
