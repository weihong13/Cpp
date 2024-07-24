#pragma once
#include <iostream>
using namespace std;
#include <vector>

struct Node
{
	// 数据域
	int val;
	// 指针域
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

	// 删除第一个值为val的节点
	void Del_Node(int val);
};

