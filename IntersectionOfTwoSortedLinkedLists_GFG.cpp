//Intersection of two sorted Linked lists 
//GFG ACCEPTED
//Linkes Lists

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}



Node* findIntersection(Node* head1, Node* head2)
{
    Node *t1, *t2, *head3, *t3;
    
    if(t1 == NULL || t2 == NULL)
        return head3;
        
    t1 = head1;
    t2 = head2;
    t3 = head3 = NULL;
    while(t1 != NULL && t2 != NULL)
    {
        if(t1->data == t2->data)
        {
            Node *newNode = new Node(t1->data);
            if(head3 == NULL)
            {
                t3 = head3 = newNode;
            }
            else
            {
                t3->next = newNode;
                t3 = newNode;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        else if(t1->data < t2->data)
        {
            t1 = t1->next;
        }
        else
        {
            t2 = t2->next;
        }
    }
    return head3;
}