// "Merge two sorted linked lists" with c++ | Practice | Hackerrank | C++ | https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem | By- Shreya Maheshwari

#include <bits/stdc++.h>

using namespace std;

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *p = head1;
SinglyLinkedListNode *q = head2;
SinglyLinkedListNode *r = head1;
if(head1==NULL)
{
    return head2;
}
else if(head2==NULL)
{
    return head1;
}

if (head1->data <= head2->data)  
    {  
        r = head1;  
        r->next = mergeLists(head1->next, head2);  
    }  
    else
    {  
        r = head2;  
        r->next = mergeLists(head1, head2->next);  
    }  
    return r;
}
