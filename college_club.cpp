/*
Department of Computer Engineering has student's club named 'Pinnacle Club'. Students of Second, third and final year of department can be granted membership on request. Similarly one may cancel the membership of club. First node is reserved for president of club and last node is reserved for secretary of club. Write C++ program to maintain club member‘s information using singly linked list. Store student PRN and Name. Write functions to

a)Add and delete the members as well as president or even secretary.
b)Compute total number of members of club
c)Display members

d)Display list in reverse order using recursion
e) Two linked lists exists for two divisions. Concatenate two lists.
*/

#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
//data structure for student information i:e node
struct node
{
 int prn;
 char name[20];
 node *next;
};

class panclub
{
    int num,cnt;
    char nm[20];  //Data memebers
    node *head;
public:
    panclub()//Constructor to initialize object
    {
     num=cnt=0;
     head=NULL;
    }
    node *create();
    void display(node *);
    node *concat(node *,node *);  //Memeber Functions with arguments
    void reverse(node *);
    node* insert_president(node *);
    void insert_sec(node *);
        void insert_member(node *);
    node* del_president(node *);
        node* del_secretary(node *);
        node* del_member(node *);
};

//To Create the list of Divisions.
node* panclub::create()
{
    node *temp,*n1;
    temp=n1=NULL;
    //int flag=1;
    //char ans='y';
    cout<<"\nHow many students data u want to insert in panclub database: ";
    cin>>cnt;
    do
        {
        n1=new node; //first of allocate the memory for all feilds of struct.
        cout<<"\nEnter the prn number of student:";
        cin>>num;
        n1->prn=num;
        //storing the prn in node feild prn;
        cout<<"\nEnter the name of student:";
        cin>>nm;
        strcpy(n1->name,nm);
        //Storing the name in node feild name.;
        n1->next=NULL; //making the next feild null.
        if(head==NULL) //check for head is empty.
        {
            head=n1;   //make new node as head
            temp=head;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL) //attach at the end of list
            {
                temp=temp->next;
            }
            temp->next=n1;
        }
        cnt--;
        }while(cnt>0);

    return head;
}

void panclub::display(node *head) //display the list of both divisions.
{
       node *temp;
       temp=head;
  while(temp!=NULL)
       {
       if(temp->next==NULL)
       {
       cout<<"["<<temp->prn<<"|"<<temp->name<<"]->NULL";
       }
       else
       {
       cout<<"["<<temp->prn<<"|"<<temp->name<<"]->";
       }
       temp=temp->next;
       }
}

node* panclub::concat(node *head1,node *head2) //To concatinate both the divisions data in one list.
{
    node *head3,*temp,*temp1;
    head3=temp=temp1=NULL;
    temp=head1;
    head3=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp1=head2;
    temp->next=temp1;
    return head3;
}
void panclub::reverse(node *head)
{
    node *temp;
    temp=head;
    if(temp==NULL)
        return;
    reverse(temp->next);
    cout<<"["<<temp->prn<<"|"<<temp->name<<"]->";
}

node* panclub::insert_president(node *head)
{
        node *temp,*n2;
        temp=n2=NULL;
        temp=head;
        n2=new node;
        cout<<"\nEnter the PRN number of President: ";
        cin>>n2->prn;
        cout<<"\nEnter the name of President: ";
        cin>>n2->name;
        n2->next=temp;
        head=n2;
 return head;
}

void panclub::insert_member(node *head)
{
        node *temp,*n2;
        int pn;
        temp=head;
        n2=new node;
        cout<<"\nEnter the PRN number of Member: ";
        cin>>n2->prn;
        cout<<"\nEnter the name of Member: ";
        cin>>n2->name;
        n2->next=NULL;
        cout<<"\nEnter the PRN number after which u want to add this member: ";
        cin>>pn;
while(temp!=NULL)
       {
         if(temp->prn==pn)
       {
          n2->next=temp->next;
          temp->next=n2;
          break;
       }
         temp=temp->next;
       }
        cout<<"\n\nMember added sucessfully....!!";
       }

void panclub::insert_sec(node *head)
{
        node *temp,*n2;
        temp=head;
        n2=new node;
        cout<<"\nEnter the PRN number of Secretary: ";
        cin>>n2->prn;
        cout<<"\nEnter the Name of Secretary: ";
        cin>>n2->name;
        n2->next=NULL;
while(temp->next!=NULL)
        {
         temp=temp->next;
        }
        temp->next=n2;
       }
//delete the president node from list
node* panclub::del_president(node *head)
       {
        node *temp;
        temp=head;
        head=temp->next;
        free(temp);
        return head;
       }
       //Delete the secretary node from the list.
       node* panclub::del_secretary(node *head)
       {
        node *temp,*t1;
        temp=head;
        while(temp->next!=NULL)
        {
         t1=temp;
         temp=temp->next;
        }
        t1->next=NULL;
        free(temp);
        return head;
       }

//Delete the memeber from the list.

node* panclub::del_member(node *head)
       {
        node *temp,*t1;
        int pn;
        temp=head;
        cout<<"\nEnter the PRN number after which u want to delete member: ";
        cin>>pn;
        while(temp!=NULL)
        {     
        if(temp->prn==pn)
        {
                t1=temp->next;
                temp->next=t1->next;
                free(t1);
                break;
        }
         temp=temp->next;
        }
              cout<<"\n\nMember removed sucessfully....!!";
        return head;
        }
int main()
{
    panclub p1,p2,p3;
    node *h1,*h2,*h3;
    h1=h2=h3=NULL;
    int ch;
    cout << "\n\t!!!Group B:Assignment No:01!!!" << endl; // prints !!!Assignment number and group!!!
   do
   {
        cout<<"\n\n1.Enter data of SE A Division:";
        cout<<"\n2.Enter data of SE B Division:";
        cout<<"\n3.Concatination of List..";
        cout<<"\nEnter your choice: ";
        cin>>ch;
    switch(ch)
    {
     case 1:
        cout<<"\n\nPlease enter the student info who is register memeber..";
        cout<<"\n\nEnter the Panclub Data of SE A Division:\n";
        h1=p1.create();
        cout<<"\nSE Comp Division A List are as follows..\n\n";
        p1.display(h1);
        cout<<"\n\nReverse List of SE Div A:\n\n";
        p1.reverse(h1);
        p1.insert_sec(h1);
        cout<<"\nAfter insertion of Secretary: \n";
        p1.display(h1);
        h1=p1.insert_president(h1);
        cout<<"\nAfter insertion of President: \n";
        p1.display(h1);
        p1.insert_member(h1);
        cout<<"\n After insertion of member...\n";
        p1.display(h1);
        h1=p1.del_president(h1);
        cout<<"\n\nAfter deletion of president...\n";
        p1.display(h1);
        h1=p1.del_secretary(h1);
        cout<<"\n\nAfter deletion of secretary...\n";
        p1.display(h1);
        h1=p1.del_member(h1);
        cout<<"\n\nAfter deletion of member...\n";
        p1.display(h1);
            break;
        
    case 2:
        cout<<"\n\nEnter the Panclub Data of SE B Division:\n";
        h2=p2.create();
        cout<<"\nSE Comp Division B List are as follows..\n\n";
        p2.display(h2);
        cout<<"\n\nReverse List of SE Div B:\n\n";
        p1.reverse(h2);
        p2.insert_sec(h2);
        cout<<"\nAfter insertion of Secretary: \n";
        p2.display(h2);
        h2=p2.insert_president(h2);
        cout<<"\nAfter insertion of President: \n";
        p2.display(h2);
        p2.insert_member(h2);
        cout<<"\n After insertion of member...\n";
        p2.display(h2);
        h2=p2.del_president(h2);
        cout<<"\n\nAfter deletion of president...\n";
        p1.display(h2);
        h2=p2.del_secretary(h2);
        cout<<"\n\nAfter deletion of secretary...\n";
        p1.display(h2);
        h2=p2.del_member(h2);
        cout<<"\n\nAfter deletion of member...\n";
        p2.display(h2);
            break;
    case 3:
        h3=p3.concat(h1,h2);
        cout<<"\n\nThe concatenation of Div : A and Div : B of SE Comp Class are as follows.\n\n";
        p3.display(h3);
            break;
      }
    }
while(ch!=4);
    return 0;
}


