#include "List.h"

Node::Node()
{
	this->val = NULL;
	this->next = nullptr;
}

Node::Node(int val)
{
	this->val = val;
	this->next = nullptr;
}

List::List()
{
	this->Head = nullptr;
	this->Tail = nullptr;
}
List::List(vector<int>& vec)
{
	if (vec.size() == 0)
	{
		this->Head = new Node;
		this->Tail = Head;
		return;
	}
	this->Head = new Node(vec[0]);
	this->Tail = Head;
	int n = vec.size();
	for (int i = 1; i < n; i++)
	{
		Node* node = new Node(vec[i]);
		Tail->next = node;
		Tail = Tail->next;
	}
}

List::~List()
{
	Node* p = Head;
	Node* n;
	while (p)
	{
		n = p->next;
		delete p;
		p = n;
	}
}

void List::printList()
{
	if (Head == nullptr)
	{
		cout << "错误：传入空指针！" << endl;
		return;
	}
	Node* p = this->Head;
	while (p)
	{
		cout << p->val << " ";
		p = p->next;
	}
	cout << endl;
}

//// 方法1：删除第一个值为val的节点
//void List::Del_Node(int val)
//{
//	if (this->Head == nullptr)
//	{
//		cout << "错误：传入空指针！" << endl;
//		return;
//	}
//	Node* p = this->Head;
//	Node* pre = nullptr;
//	while (p)
//	{
//		if (p->val == val)
//		{
//			if (p == Head)
//			{
//				Head = Head->next;
//			}
//			else
//			{
//				pre->next = p->next;
//			}
//			delete p;
//			break;
//		}
//		pre = p;
//		p = p->next;
//	}
//}

// 方法2：（虚拟头结点）删除第一个值为val的节点
void List::Del_Node(int val)
{
	//虚拟头结点：当头结点和其他节点操作不一样的时候，使用虚拟头结点将原头结点变成中间节点

	// 创建一个虚拟的头节点，将该头结点变为新的头结点
	Node* HEAD = new Node();
	HEAD->next = Head;

	Node* p = Head;
	Node* pre = HEAD;
	while (p)
	{
		if (p->val == val)
		{
			pre->next = p->next;
			delete p;
			break;
		}
		pre = p;
		p = p->next;
	}
	// 因为虚拟的头结点 HEAD 不是 真正的头结点，真正的头结点是HEAD 的下一位
	// 所以要将 还原真正的头结点 Head 
	Head = HEAD->next;

}