#include "Tree.h"

Tree::Tree() :root(nullptr){}

Tree::Tree(vector<int>& vec)
{
	if (vec.size() == 0)
	{
		root = nullptr;
		return;
	}

	root = new Node(vec[0]);

	for (size_t i = 1; i < vec.size(); i++)
	{
		Node* node = new Node(vec[i]);
		Node*  p = root;
		while (1)
		{
			if (p->val < node->val)
			{
				if (p->right == nullptr)
				{
					p->right = node;
					break;
				}
				p = p->right;
			}
			if (p->val > node->val)
			{
				if (p->left == nullptr)
				{
					p->left = node;
					break;
				}
				p = p->left;
			}
			if (p->val == node->val) break;
		}

	}
}

Node* Tree::getRoot() const
{
	return root;
}

// 广度优先遍历
void Tree::Level()
{
	if (!root) return;

	queue<Node*> que;
	que.push(root);
	while (!que.empty())
	{
		Node* front = que.front();
		que.pop();
		cout << front->val << " ";
		if (front->left) que.push(front->left);
		if (front->right) que.push(front->right);
	}
}

void Tree::InOrder(Node* root)
{
	if (!root) return;
	InOrder(root->left);
	cout << root->val << " ";
	InOrder(root->right);
}




