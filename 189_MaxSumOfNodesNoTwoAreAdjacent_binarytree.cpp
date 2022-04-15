#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *left, *right;
	Node(int data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
};
unordered_map<Node*, int> umap;
int maxSum(Node* root)
{
	if (!root)
		return 0;

	if (umap[root])
		return umap[root];

	int inc = root->data;

	if (root->left) {
		inc += maxSum(root->left->left)
			+ maxSum(root->left->right);
	}
	if (root->right) {
		inc += maxSum(root->right->left)
			+ maxSum(root->right->right);
	}

	int ex = maxSum(root->left) + maxSum(root->right);

	umap[root] = max(inc, ex);
	return max(inc, ex);
}

int main()
{
	Node* root = new Node(10);
	root->left = new Node(1);
	root->left->left = new Node(2);
	root->left->left->left = new Node(1);
	root->left->right = new Node(3);
	root->left->right->left = new Node(4);
	root->left->right->right = new Node(5);
	cout << maxSum(root);
	return 0;
}
