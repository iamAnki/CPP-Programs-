#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void addFront(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    printf("Node %d added at front\n", head ->data);
}

void addEnd(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    struct node *loopNode = head;
    tail->next = newNode;
    tail = newNode;
    printf("Node %d added at end\n", tail ->data);
}

void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void main()
{
    int Vfront, Vend, i = 1;
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
    printf("Enter node to add at front ");
    scanf("%d", &Vfront);
    addFront(Vfront);

    printf("Enter node to add at end ");
    scanf("%d", &Vend);
    addEnd(Vend);

    display();
}