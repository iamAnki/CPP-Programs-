#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void DelFront()
{
    head = head->next;
    printf("Node deleted at start\n");
}

void DelEnd()
{
    struct node *loopNode = head;
    struct node *prev = head;
    while (loopNode->next != NULL)
    {
        prev = loopNode;
        loopNode = loopNode->next;
    }
    prev->next = NULL;
    tail = prev;
    printf("Node deleted at end\n");
}

void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void main()
{
    int i = 1;
    while (i <= 5)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter node ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        // adding node
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
        i++;
    }
    DelFront();
    DelEnd();
    display();
}