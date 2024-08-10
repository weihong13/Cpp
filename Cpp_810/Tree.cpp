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

// 层次遍历--广度优先--队列
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

// 先序遍历 -- 根 左 右 -- 栈
void Tree::PreOrder(Node* root)
{
	if (!root) return;
	stack<Node*> stk;
	stk.push(root);
	while (!stk.empty())
	{
		Node* front = stk.top();
		stk.pop();
		cout << front->val << "  ";
		if (front->right) stk.push(front->right);
		if (front->left) stk.push(front->left);
	}

}


// 中序遍历 -- 左 根 右
void Tree::InOrder(Node* root)
{
	if (!root) return;
	stack<Node*> stk;
	Node* cur = root;
	while (cur || !stk.empty())
	{
		while (cur)
		{
			stk.push(cur);
			cur = cur->left;
		}
		Node* top = stk.top();
		stk.pop();
		cout << top->val << " ";
		cur = top->right;
	}



}

// 后序遍历 -- 左 右 根
void Tree::PostOrder(Node* root)
{
	if (!root) return;
	stack<Node*> stk1;
	stack<Node*> stk2;
	stk1.push(root);
	while (!stk1.empty())
	{
		Node* top = stk1.top();
		stk1.pop();
		stk2.push(top);
		if (top->left) stk1.push(top->left);
		if (top->right) stk1.push(top->right);
	}
	while (!stk2.empty())
	{
		cout << stk2.top()->val << " ";
		stk2.pop();
	}

}

void Tree::_PreOrder(Node* root)
{
	if (!root) return;
	cout << root->val << " ";
	_PreOrder(root->left);
	_PreOrder(root->right);

}

void Tree::_InOrder(Node* root)
{
	if (!root) return;
	
	_InOrder(root->left);
	cout << root->val << " ";
	_InOrder(root->right);
}

void Tree::_PostOrder(Node* root)
{
	if (!root) return;

	_PostOrder(root->left);
	_PostOrder(root->right);
	cout << root->val << " ";
}



