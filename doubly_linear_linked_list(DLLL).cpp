
#include<iostream>
using namespace std;

int a=0;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *first;
struct node * last()
{
    struct node *temp;
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp;
}
void insert_node()//insert element at last
{
    struct node *nn;
    nn=(struct node *)malloc(sizeof(struct node));
    int d;
    cout<<"Enter the value: "<<endl;
    cin>>d;
    nn->data=d;
    nn->prev=NULL;
    nn->next=NULL;
    if (first==NULL)
    {
        first=nn;
    }
    else
    {
        struct node *temp;
        temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nn;
        nn->prev=temp;

    }
    cout<<"Element Inserted successfully!!"<<endl;
    a++;

}
void insert_node_at_first()
{
     struct node *nn;
    nn=(struct node *)malloc(sizeof(struct node));
    int d;
    cout<<"Enter the value: "<<endl;
    cin>>d;
    nn->data=d;
    nn->prev=NULL;
    nn->next=NULL;
    if (first==NULL)
    {
        first=nn;
    }
    else
    {
       nn->next=first;
       first->prev=nn;
       first=nn;

    }
    cout<<"Element Inserted successfully!!"<<endl;
    a++;
}
void insert_node_after_element()
{

    struct node *nn;
    nn=(struct node *)malloc(sizeof(struct node));
    int d;
    cout<<"Enter the value of new node: "<<endl;
    cin>>d;
    nn->data=d;
    nn->prev=NULL;
    nn->next=NULL;
    if (first==NULL)
    {
        first=nn;
        cout<<"Element Inserted successfully!!"<<endl;
    }
    else
    {
        int ele;
        cout<<"Enter the node after which you have to insert element : "<<endl;
        cin>>ele;
        int c=0;
       struct node *temp,*temp1,*last1;
       last1=last();
       temp=first;
       while(temp->data!=ele)
       {
           if(temp->next==NULL)
           {
               cout<<"Invalid operation :Please enter right value"<<endl;
               c=1;
               break;
           }
           temp=temp->next;
       }
       if(c!=1)
       {
           if(temp==first or temp==last1)
           {
               temp->next=nn;
               nn->prev=temp;
                cout<<"Element Inserted successfully!!"<<endl;
           }
           else
           {
               nn->next=temp->next;
               nn->prev=temp;
               temp->next=nn;
               temp1=nn->next;
               temp1->prev=nn;
           }

       }


    }
    a++;

}
void display()
{
   if(a==0)
   {
       cout<<"Doubly Linear linked list is Empty!!"<<endl;
   }
   else
   {
        cout<<endl;
        cout<<"Doubly ended Linked List contain: "<<endl;
        struct node *temp;
        temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
   }


}
void remove_first()
{
  if(a==0)
  {
      cout<<"Nothing to remove !!PLease enter an ELement!!"<<endl;
  }
  else
  {
        struct node *temp;
    temp=first;
     cout<<"Element "<<temp->data<<" removed succesfully !!"<<endl;
    first=temp->next;
    free(temp);
    a--;
  }
}
void remove_last()
{
   if(a==0)
   {
       cout<<"Nothing to remove !!PLease enter an ELement!!"<<endl;
   }
   else
   {
        struct node *temp;
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    struct node *temp1;
    temp1=first;
    cout<<"Element "<<temp->data<<" removed succesfully !!"<<endl;
    if(a==1)
    {
        temp=NULL;
        free(first);
    }
    else if(a>1)
    {
         while(temp1->next!=temp)
    {
        temp1=temp1->next;
    }
    temp1->next=NULL;
    }


    a--;
   }
}
void remove_select()
{
    int ele;
    cout<<"Enter the element you want to remove: "<<endl;
    cin>>ele;
    struct node *temp;
    temp=first;
    while(temp->data!=ele)
    {
        temp=temp->next;
    }
    struct node *temp1;
    temp1=first;
    while(temp1->next!=temp)
    {
        temp1=temp1->next;
    }
    temp1->next=temp->next;
    cout<<"Element "<<temp->data<<" removed succesfully!1"<<endl;
}
 using namespace std;

 void remove()
{
    int i;
    do
    {
        cout<<endl;
        cout<<"================Remove Menu==========="<<endl;
        cout<<"1-Remove element from First "<<endl;
        cout<<"2-Remove element from Last"<<endl;
        cout<<"3-Remove selected element "<<endl;
        cout<<"4-Main Menu"<<endl;
        cout<<"Provide your choice :"<<endl;
        cin>>i;
        switch(i)
        {
         case 1:
            remove_first();
            break;
         case 2:
            remove_last();
            break;
         case 3:
            remove_select();
            break;
        }
    }while(i!=4);
}
void insert()
{
     int i;
    do
    {
        cout<<endl;
        cout<<"================Remove Menu==========="<<endl;
        cout<<"1-Insert element from First "<<endl;
        cout<<"2-Insert element from Last"<<endl;
        cout<<"3-Insert selected element "<<endl;
        cout<<"4-Main Menu"<<endl;
        cout<<"Provide your choice :"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
            insert_node_at_first();
            display();
            break;
          case 2:
            insert_node();
            display();
            break;
         case 3:
            insert_node_after_element();
            display();
            break;
        }
    }while(i!=4);

}
void search()
{
    if(a==0)
   {
       cout<<"Doubly Linear linked list is Empty!!"<<endl;
   }
   else
   {
       struct node *temp;
    temp=first;
    int a=1;
    int ele;
    cout<<"Enter the element you want to search "<<endl;
    cin>>ele;
    while(temp->data!=ele)
    {
        temp=temp->next;
        a++;
    }
    cout<<"Element is situated at "<<a<<" position"<<endl;
   }
}
void sort()
{
    struct node *temp1,*temp2;
    temp1=first;
    temp2=first;
    while(temp1->next!=NULL)
    {
        temp2=temp2->next;
        while(temp2!=NULL)
        {
            if(temp2->data<temp1->data)
            {
                int x;
                x=temp1->data;
                temp1->data=temp2->data;
                temp2->data=x;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
        temp2=temp1->next;
    }
    cout<<"Successfully sorted LInked lIst"<<endl;

}
void reverse_ll(struct node *p)
{
    if(p->next==NULL)
    {
        first=p;
        return ;
    }
    reverse_ll(p->next);
    struct node *q=p->next;
    q->next=p;
    p->next=NULL;

}
void search_largest()
{
    struct node *temp;
    int last;
    last=first->data;
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        if(temp->data>last)
        {
            last=temp->data;
        }
    }
    cout<<"Largest number in LL is "<<last<<endl;
}
 int main()
 {
     first=NULL;
     int i;
     do
     {
         cout<<endl;
         cout<<"\t\tDOUBLY LINEAR LINKED LIST OPERATIONS"<<endl<<"=========================================================================="<<endl;
         cout<<"=========MENU============"<<endl;
         cout<<"1-Insert element "<<endl;
         cout<<"2-Remove element "<<endl;
         cout<<"3-Display Linked List"<<endl;
         cout<<"4-Search element"<<endl;
         cout<<"5-Sort the elements"<<endl;
         cout<<"6-Reverse the Linked list"<<endl;
         cout<<"7-Search the Largest number in LL"<<endl;
         cout<<"Provide your choice :"<<endl;
         cin>>i;
         switch(i)
         {
         case 1:
            insert();
            break;
        case 2:
            remove();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            sort();
            break;
        case 6:
            reverse_ll(first);
            break;
        case 7:
            search_largest();
            break;

         }
     }while(true);
 }
