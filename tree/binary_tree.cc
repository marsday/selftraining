#include "binary_tree.h"
#include <stdio.h>

//left < mid < right
void insert_node(Tree* tree, int value)
{
	if (tree == nullptr)
		return;

	Node* nnode = new Node();
	nnode->value = value;

	Node* tnode = tree->root;
	if (tnode == nullptr)
	{
		tree->root = nnode;
	}
	else
	{
		Node* pnode = nullptr;
		while (tnode != nullptr)
		{
			pnode = tnode;
			if (tnode->value > value)
				tnode = tnode->left;
			else
				tnode = tnode->right;
		}
		nnode->parent = pnode;
		if (pnode->value > value)
			pnode->left = nnode;
		else
			pnode->right = nnode;
	}
	tree->size++;

}


Tree* create_binary_tree(int p[], int len)
{
	Tree* tree = new Tree();
	for (int i = 0; i < len; i++) {
		int value = p[i];
		insert_node(tree, value);
	}
	return tree;
}


//前序遍历
void print_preorder(Node* node)
{
	if (node == nullptr)
		return;
	printf(" %d ", node->value);
	print_preorder(node->left);
	print_preorder(node->right);
}

//后序遍历
void print_postorder(Node* node)
{
	if (node == nullptr)
		return;
	print_postorder(node->left);
	print_postorder(node->right);
	printf(" %d ", node->value);
}

//中序遍历
void print_inorder(Node* node)
{
	if (node == nullptr)
		return;
	print_inorder(node->left);
	printf(" %d ", node->value);
	print_inorder(node->right);
}