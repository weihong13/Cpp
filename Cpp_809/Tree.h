#pragma once
#include <vector>
#include <iostream>
#include <queue>
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

	void Level();

	void InOrder(Node* root);



};

