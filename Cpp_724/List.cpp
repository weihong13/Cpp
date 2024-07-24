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
		cout << "���󣺴����ָ�룡" << endl;
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

//// ����1��ɾ����һ��ֵΪval�Ľڵ�
//void List::Del_Node(int val)
//{
//	if (this->Head == nullptr)
//	{
//		cout << "���󣺴����ָ�룡" << endl;
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

// ����2��������ͷ��㣩ɾ����һ��ֵΪval�Ľڵ�
void List::Del_Node(int val)
{
	//����ͷ��㣺��ͷ���������ڵ������һ����ʱ��ʹ������ͷ��㽫ԭͷ������м�ڵ�

	// ����һ�������ͷ�ڵ㣬����ͷ����Ϊ�µ�ͷ���
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
	// ��Ϊ�����ͷ��� HEAD ���� ������ͷ��㣬������ͷ�����HEAD ����һλ
	// ����Ҫ�� ��ԭ������ͷ��� Head 
	Head = HEAD->next;

}