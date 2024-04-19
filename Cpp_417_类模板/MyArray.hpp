// 自己的通用数组类
#pragma once

#include<iostream>
#include<string>
using namespace std;


template<class T>
class MyArray
{
public:
	// 有参构造函数（输入容量）
	MyArray(int cap)
	{
		// 防止申请不到堆区空间
		T* temp = new T[cap];
		if (!temp)
		{
			return;
		}
		// 将容量、大小初始化
		this->m_Capacity = cap;
		this->m_Size = 0;
		this->m_Arr = temp;
	}
	// 拷贝构造
	MyArray(const MyArray &arr)
	{
		cout << "myArray的拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		// 深拷贝
		this->m_Arr = new T[arr.m_Capacity];
		// 将原有的数据拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_Arr[i] = arr.m_Arr[i];
		}

	}

	// operator=
	MyArray& operator=(const MyArray &arr)
	{
		cout << "myArray的 = 重载调用" << endl;
		if (this->m_Arr != nullptr)
		{	// 将之前的内容释放
			delete[] this->m_Arr;
			this->m_Arr = nullptr;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		// 深拷贝
		this->m_Arr = new T[arr.m_Capacity];
		// 将原有的数据拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_Arr[i] = arr.m_Arr[i];
		}
		return *this;
	}

	// 尾插法
	void TailInsert(const T &t)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->m_Arr[this->m_Size] = t;
		this->m_Size++;
	}
	// 尾删法
	void TailDel()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	// 下标方式访问数组元素
	T& operator[](int i)
	{
		return this->m_Arr[i];
	}
	// 获取数组当前元素个数
	int getSize()
	{
		return this->m_Size;
	}
	// 获取数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}
	// 析构函数 
	~MyArray()
	{
		cout << "myArray的析构调用" << endl;
		if (m_Arr != nullptr)
		{
			delete[] m_Arr;
			m_Arr = nullptr;
		}
	}



private:
	// 数组指针指向堆区开辟的数组
	T* m_Arr;
	// 数组容量
	int m_Capacity;
	// 数组当前元素个数
	int m_Size;
};
