#pragma once
#include <iostream>
using namespace std;
#include <vector>

struct Node
{
	// ������
	int val;
	// ָ����
	Node* next;
	Node();
	Node(int val);
};
class List
{
	Node* Head;
	Node* Tail;
public:
	List();
	List(vector<int>& vec);
	~List();
	void printList();

	// ɾ����һ��ֵΪval�Ľڵ�
	void Del_Node(int val);
};

