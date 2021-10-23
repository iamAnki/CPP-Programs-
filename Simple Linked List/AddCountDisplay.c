#include <stdio.h>
#include <stdlib.h>

struct node{
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

void display()
{
    struct node *current = head;
    if (head == NULL)
    {
        printf("Empty list\n");
        return;
    }
    else
    {
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
            printf(" -> ");
        }
        printf("NULL");
    }
}

int main()
{
    int data, i = 0;
    int opt = 1;
    while (opt)
    {
        printf("Enter node ");
        scanf("%d", &data);
        addNode(data);
        i++;
        printf("Do you want to continue (1=y/0=n)?\n");
        scanf("%d", &opt);
    }
    printf("The list contains %d nodes\n", i);
    display();
}