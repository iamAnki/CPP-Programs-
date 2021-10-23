#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void addBefore(int data, int pos)
{
    int i = 1; //run from 1 as loop starts from head
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        struct node *loop = head;
        struct node *prev = head;
        while (loop != NULL && i <= pos)
        {
            if (i == pos)
            {
                prev->next = newNode; //prev node points to new node
                newNode->next = loop; //new node points to current node
                printf("New node added before %d\n", pos);
                break;
            }
            i++;
            prev = loop; //stores previous node
            loop = loop->next;
        }
    }
}

void addAfter(int data, int pos)
{
    int i = 1;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    struct node *loop = head;
    while (loop != NULL && i <= pos)
    {
        if (i == pos)
        {
            newNode->next = loop->next; //new node points to next node
            loop->next = newNode;       //current node points to new node
            printf("New node added after %d\n", pos);
            break;
        }
        i++;
        loop = loop->next;
    }
    if (loop == NULL)
    {
        tail->next = newNode;
        tail = newNode;
    }
}

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
    struct node *loop = head;
    if (head == NULL)
        printf("Empty List");
    else
    {
        while (loop != NULL)
        {
            printf("%d ->", loop->data);
            loop = loop->next;
        }
        printf("NULL");
    }
}

int main()
{
    int data, pos, before, after, i = 0, val, n;
    printf("Enter length of list ");
    scanf("%d", &n);
    printf("Enter %d nodes\n", n);
    while (i != n)
    {
        scanf("%d", &val);
        addNode(val);
        i++;
    }
    printf("Enter position to add node after and before it ");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("Invalid Position\n");
        exit(1);
    }
    printf("Enter value to be added before\n");
    scanf("%d", &before);
    printf("Enter value to be added after\n");
    scanf("%d", &after);
    addAfter(after, pos); //add after first else the numbering would change and output would err
    addBefore(before, pos);
    display();
    return 0;
}