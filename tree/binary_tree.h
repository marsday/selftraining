typedef struct Node
{
	Node* parent;
	Node* left;
	Node* right;
	int value;
}Node;

typedef struct Tree
{
	int size;
	Node* root;
}Tree;

Tree* create_binary_tree(int p[], int len);
void print_preorder(Node* node);
void print_inorder(Node* node);
void print_postorder(Node* node);