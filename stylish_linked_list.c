#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node node;
struct node
{
    char num[100];
    struct node *next,*prev;
}*head,*tail;

void createnode(int n);
void display();
void delete_begin();
void delete_end();
void delete_mid(int pos);
void delete_all();
int main()
{
    system("CLS");
    int ch,n,pos;
    printf("1.Create Node\n2.Display\n3.Delete from beginn\n4.Delete from End\n5.Delete from Middle\n6.Delete All");
    printf("\n\n=>");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter no of nodes:");
        scanf("%d",&n);
        createnode(n);
        main();
        break;
    case 2:
        display();
        getch();
        main();
        break;
    case 3:
        delete_begin();
        getch();
        main();
        break;
    case 4:
        delete_end();
        getch();
        main();
        break;
    case 5:
        printf("Enter Position:");
        scanf("%d",&pos);
        delete_mid(pos);
        getch();
        main();
        break;
    case 6:
        delete_all();
        getch();
        main();
        break;
    default:
        main();
        break;
    }
}

void createnode(int n)
{
    node *tmp,*newn;
    head=NULL;
    tail=NULL;

    for(int i=0; i<n; i++)
    {
        newn=(node *)malloc(sizeof(node));

        printf("\nEnter data %d:",i+1);
        scanf("%s",newn->num);

        newn->next=NULL;
        newn->prev= tail;


        if(head==NULL)
        {
            head=newn;
            tail=head;

        }
        else
        {
            tail->next=newn;
            tail=tail->next;

        }

    }

}
void delete_begin()
{
    node *tmp;
    if(head==NULL)
    {
        printf("List is Empty\n");
        getch();
        main();
    }
    else
    {
        tmp=head;
        head=head->next;
        head->prev=NULL;
        printf("Data '%s' Deleted Successfully\n\n", tmp->num);
        free(tmp);
        tmp=head;
        printf("After Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("DATA = %p  %p  '%s'  %p\n",tmp->prev,tmp, tmp->num,tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }

}
void delete_end()
{
    node *tmp;
    if(tail==NULL)
    {
        printf("List is Empty\n");
        getch();
        main();
    }
    else
    {
        tmp=tail;
        tail=tail->prev;
        tail->next=NULL;
        printf("Data '%s' Deleted Successfully\n\n", tmp->num);
        free(tmp);
        tmp=head;
        printf("After Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("DATA = %p  %p  '%s'  %p\n",tmp->prev,tmp, tmp->num,tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }

}
void delete_mid(int pos)
{
    node *tmp;
    int i;
    tmp=head;
    for(i=1; i<pos && tmp!=NULL; i++)
    {
        tmp=tmp->next;
    }
    if(pos==1)
    {
        printf("\nThis Is First Position.\n\nIf you Want to delete this\n\nThen go back and try\n\nDelete from Begin");
        getch();
        main();
    }
    else if(tmp==tail)
    {
        printf("\nThis Is Last Position.\n\nIf you Want to delete this\n\nThen go back and try\n\nDelete from End");
        getch();
        main();
    }
    else if(tmp!=NULL)
    {
        tmp->prev->next=tmp->next;
        tmp->next->prev=tmp->prev;
        printf("\nData '%s' Successfully deleted from position %d",tmp->num, pos);
        free(tmp);
        tmp=head;
        printf("\n\nAfter Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("DATA = %p  %p  '%s'  %p\n",tmp->prev,tmp,tmp->num,tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }
    else
    {
        printf("\nInvalid Position!");
        getch();
        main();
    }
}
void delete_all()
{
    node *tmp;
    if(head==NULL)
    {
        printf("\nList is Empty");
        getch();
        main();
    }
    while(head!=NULL)
    {
        tmp=head;
        head=head->next;
        free(tmp);
    }
    printf("\nSuccessfully Deleted All Nodes %c%c%c\n", 1,1,1);
    getch();
    main();
}
void display()
{
    node *tmp;
    if(head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            printf(" Data = %p  %p  '%s'  %p",tmp->prev,tmp, tmp->num,tmp->next);
            printf("\n");
            tmp = tmp->next;
        }
    }
}
