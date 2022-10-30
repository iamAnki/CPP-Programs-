#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;

    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// A recursive function to convert a given Binary tree to Doubly Linked List
// root --> Root of Binary Tree
// head --> Pointer to head node of doubly linked list

void bt_to_dll(node *root, node **head)
{
	// empty tree
	if (!root)
        return;

	// Initialize previously visited node as NULL
	static node* prev = NULL;

	// Convert left subtree
	bt_to_dll(root->left, head);

	// Convert root node
	if (!prev)
		*head = root;
	else
	{
		root->left = prev;
		prev->right = root;
	}
	prev = root;

	// Convert right subtree
	bt_to_dll(root->right, head);
}

/* Function to print nodes in a given doubly linked list */
void print(node *node)
{
	while (node)
	{
		cout << node->data << " ";
		node = node->right;
	}
}

int main()
{
	node *root	 = new node(1);
	root->left	 = new node(2);
	root->right	 = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
    root->right->right = new node(7);

	// Convert to DLL
	node *head = NULL;
	bt_to_dll(root, &head);

	// Print the converted list
	print(head);

	return 0;
}
