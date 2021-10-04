#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void addNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void display(struct node *n)
{
    struct node *temp = n;
    if (head == NULL)
        printf("Empty list\n");
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
            printf(" -> ");
        }
        printf("NULL");
    }
}

int main()
{
    int data;
    int opt = 1;
    while (opt <= 5)
    {
        printf("Enter node ");
        scanf("%d", &data);
        addNode(data);
        opt++;
    }
    printf("Original List: -\n");
    display(head);
    //reversing
    printf("\nReversed List: -\n");
    struct node *prev = NULL, *loop = head, *nextNode = NULL;
    while (loop != NULL)
    {
        nextNode = loop->next;
        loop->next = prev;
        prev = loop;
        loop = nextNode;
    }
    head = prev;
    display(head);    
}