#pragma once
#include <vector>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node
{
	int val;
	Node* left;
	Node* right;
	Node(int val)
	{
		this->val = val;
		left = nullptr;
		right = nullptr;
	}

};

class Tree
{

	Node* root;
public:
	Tree();
	Tree(vector<int>& vec);
	Node* getRoot() const;

	// 层次遍历--广度优先--队列
	void Level();

	// 深度优先
	// 先序遍历 -- 根 左 右 -- 栈
	void PreOrder(Node* root);
	// 中序遍历 -- 左 根 右
	void InOrder(Node* root);
	// 后序遍历 -- 左 右 根
	void PostOrder(Node* root);

	// 深度优先--递归调用
	// 先序遍历 -- 根 左 右 -- 栈
	void _PreOrder(Node* root);
	// 中序遍历 -- 左 根 右
	void _InOrder(Node* root);
	// 后序遍历 -- 左 右 根
	void _PostOrder(Node* root);

};

