
// C++ implementation of recursive selection sort
// for singly linked list | Swapping node links
#include <bits/stdc++.h>
using namespace std;

// A Linked list node
struct Node
{
    int data;
    struct Node *next;
};

// function to swap nodes 'currX' and 'currY' in a
// linked list without swapping data
void swapNodes(struct Node **head_ref, struct Node *currX,
               struct Node *currY, struct Node *prevY)
{
    // make 'currY' as new head
    *head_ref = currY;

    // adjust links
    prevY->next = currX;

    // Swap next pointers
    struct Node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}

// function to sort the linked list using
// recursive selection sort technique
struct Node *recurSelectionSort(struct Node *head)
{
    // if there is only a single node
    if (head->next == NULL)
        return head;

    // 'min' - pointer to store the node having
    // minimum data value
    struct Node *min = head;

    // 'beforeMin' - pointer to store node previous
    // to 'min' node
    struct Node *beforeMin = NULL;
    struct Node *ptr;

    // traverse the list till the last node
    for (ptr = head; ptr->next != NULL; ptr = ptr->next)
    {

        // if true, then update 'min' and 'beforeMin'
        if (ptr->next->data < min->data)
        {
            min = ptr->next;
            beforeMin = ptr;
        }
    }

    // if 'min' and 'head' are not same,
    // swap the head node with the 'min' node
    if (min != head)
        swapNodes(&head, head, min, beforeMin);

    // recursively sort the remaining list
    head->next = recurSelectionSort(head->next);

    return head;
}

// function to sort the given linked list
void sort(struct Node **head_ref)
{
    // if list is empty
    if ((*head_ref) == NULL)
        return;

    // sort the list using recursive selection
    // sort technique
    *head_ref = recurSelectionSort(*head_ref);
}

// function to insert a node at the
// beginning of the linked list
void push(struct Node **head_ref, int new_data)
{
    // allocate node
    struct Node *new_node =
        (struct Node *)malloc(sizeof(struct Node));

    // put in the data
    new_node->data = new_data;

    // link the old list to the new node
    new_node->next = (*head_ref);

    // move the head to point to the new node
    (*head_ref) = new_node;
}

// function to print the linked list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// Driver program to test above
int main()
{
    struct Node *head = NULL;

    // create linked list 10->12->8->4->6
    push(&head, 6);
    push(&head, 4);
    push(&head, 8);
    push(&head, 12);
    push(&head, 10);

    cout << "Linked list before sorting:n";
    printList(head);

    // sort the linked list
    sort(&head);

    cout << "\nLinked list after sorting:n";
    printList(head);

    return 0;
}