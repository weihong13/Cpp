// �Լ���ͨ��������
#pragma once

#include<iostream>
#include<string>
using namespace std;


template<class T>
class MyArray
{
public:
	// �вι��캯��������������
	MyArray(int cap)
	{
		// ��ֹ���벻�������ռ�
		T* temp = new T[cap];
		if (!temp)
		{
			return;
		}
		// ����������С��ʼ��
		this->m_Capacity = cap;
		this->m_Size = 0;
		this->m_Arr = temp;
	}
	// ��������
	MyArray(const MyArray &arr)
	{
		cout << "myArray�Ŀ����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		// ���
		this->m_Arr = new T[arr.m_Capacity];
		// ��ԭ�е����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_Arr[i] = arr.m_Arr[i];
		}

	}

	// operator=
	MyArray& operator=(const MyArray &arr)
	{
		cout << "myArray�� = ���ص���" << endl;
		if (this->m_Arr != nullptr)
		{	// ��֮ǰ�������ͷ�
			delete[] this->m_Arr;
			this->m_Arr = nullptr;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		// ���
		this->m_Arr = new T[arr.m_Capacity];
		// ��ԭ�е����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_Arr[i] = arr.m_Arr[i];
		}
		return *this;
	}

	// β�巨
	void TailInsert(const T &t)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->m_Arr[this->m_Size] = t;
		this->m_Size++;
	}
	// βɾ��
	void TailDel()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	// �±귽ʽ��������Ԫ��
	T& operator[](int i)
	{
		return this->m_Arr[i];
	}
	// ��ȡ���鵱ǰԪ�ظ���
	int getSize()
	{
		return this->m_Size;
	}
	// ��ȡ��������
	int getCapacity()
	{
		return this->m_Capacity;
	}
	// �������� 
	~MyArray()
	{
		cout << "myArray����������" << endl;
		if (m_Arr != nullptr)
		{
			delete[] m_Arr;
			m_Arr = nullptr;
		}
	}



private:
	// ����ָ��ָ��������ٵ�����
	T* m_Arr;
	// ��������
	int m_Capacity;
	// ���鵱ǰԪ�ظ���
	int m_Size;
};
