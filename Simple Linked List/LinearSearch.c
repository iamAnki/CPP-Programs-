#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void search(int find)
{
    int pos = -1, i = 1;
    struct node *loop = head;
    while (loop != NULL)
    {
        if (loop->data == find)
        {
            pos = i;
            break;
        }
        i++;
        loop = loop->next;
    }
    if (pos == -1)
        printf("Value not present\n");
    else
        printf("Value found at %d", pos);
}

void main()
{
    int n, find, i = 1;
    printf("Enter number of nodes ");
    scanf("%d", &n);
    while (i <= n)
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
    printf("Enter node to search ");
    scanf("%d", &find);
    search(find);
}