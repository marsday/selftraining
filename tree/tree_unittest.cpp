#include "binary_tree.h"
#include "gtest/gtest.h"
#include <iostream>

TEST(BinaryTreeTest, preorderTest) {
	int a[] = { 2,0,5,7,1,10 };
	Tree* create_binary_tree(int p[], int len);
	Tree* node = create_binary_tree(a, sizeof(a)/ sizeof(int));
	print_preorder(node->root);
	printf("\n");
	print_inorder(node->root);
	printf("\n");
	print_postorder(node->root);
	printf("\n");
}