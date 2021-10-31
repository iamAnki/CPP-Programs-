#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next, *arbit;
};

Node* SortedMerge(Node* a, Node* b);
void FrontBackSplit(Node* source,
					Node** frontRef, Node** backRef);


void MergeSort(Node** headRef)
{
	Node* head = *headRef;
	Node* a, *b;

	if ((head == NULL) || (head->arbit == NULL))
		return;

	FrontBackSplit(head, &a, &b);

	MergeSort(&a);
	MergeSort(&b);

	*headRef = SortedMerge(a, b);
}

Node* SortedMerge(Node* a, Node* b)
{
	Node* result = NULL;

	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);

	if (a->data <= b->data)
	{
		result = a;
		result->arbit = SortedMerge(a->arbit, b);
	}
	else
	{
		result = b;
		result->arbit = SortedMerge(a, b->arbit);
	}

	return (result);
}

void FrontBackSplit(Node* source,
					Node** frontRef, Node** backRef)
{
	Node* fast, *slow;

	if (source == NULL || source->arbit == NULL)
	{
		
		*frontRef = source;
		*backRef = NULL;
		return;
	}

	slow = source, fast = source->arbit;

	
	while (fast != NULL)
	{
		fast = fast->arbit;
		if (fast != NULL)
		{
			slow = slow->arbit;
			fast = fast->arbit;
		}
	}

	
	*frontRef = source;
	*backRef = slow->arbit;
	slow->arbit = NULL;
}

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	new_node->arbit = NULL;

	(*head_ref) = new_node;
}

void printListafter(Node *node, Node *anode)
{
	cout<<"Traversal using Next Pointer\n";
	while (node!=NULL)
	{
		cout << node->data << ", ";
		node = node->next;
	}

	printf("\nTraversal using Arbitrary Pointer\n");
	while (anode!=NULL)
	{
		cout << anode->data << ", ";
		anode = anode->arbit;
	}
}


Node* populateArbit(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		temp->arbit = temp->next;
		temp = temp->next;
	}

	MergeSort(&head);

	return head;
}

int main()
{
	Node* head = NULL;

	push(&head, 3);
	push(&head, 2);
	push(&head, 10);
	push(&head, 5);

	Node *ahead = populateArbit(head);

	cout << "Result Linked List is: \n";
	printListafter(head, ahead);
	return 0;
}


