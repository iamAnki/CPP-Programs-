/* Write C++ program to store set of negative and positive numbers using linked list. Write
functions to
a) Insert numbers
b) Delete nodes with negative numbers
c) Create two more linked lists using this list, one containing all positive numbers and
other containing negative numbers
d) For two lists that are sorted; Merge these two lists into third resultant list that is sorted */

#include<iostream>
using namespace std;
struct node   
{
    int num; 
    node *next; 
};

class numbers  
{
 public:

    node *head,*head1,*head2; 

    numbers() 
    {
        head=NULL;
        head1=NULL;
        head2=NULL;
    }
    void create();       
    void display(node *);
    void insert();
    void sort(node *);
    void display2();
    void remove();
    void seperate();
    void merge();
}; 

void numbers::create()
{

  node *current,*new_node;
    char c;
 cout<<"\n------------CREATION OF NUMBERS LIST-------------\n\n ";
    do
    {

    new_node=new node; 
    cout<<"\n Enter the no: \n ";
    cin>>new_node->num; 

    new_node->next=NULL; 
    if(head==NULL) 
    {
        head=new_node;
        current=new_node;
    }
    else
    {
        current->next=new_node;
        current=new_node;

    }
    cout<<"\nDo you want to add new member ";
    cin>>c;
       }while(c!='n');
}
void numbers::seperate()
{
    node *temp,*current1,*current2,*n1,*n2;
    temp=head;

    while(temp!=NULL)
    {
        if((temp->num)<0)
        {
            n1=new node;
            n1->num=temp->num;
            n1->next=NULL;

            if(head1==NULL)
            {
                current1=n1;
                head1=n1;
            }
            else
            {
            current1->next=n1;
            current1=n1;
            }

        }
        else if((temp->num)>=0)
        {
            n2=new node;
            n2->num=temp->num;
            n2->next=NULL;
            if(head2==NULL)

            {
                current2=n2;
                head2=n2;
            }
            else
            {
              current2->next=n2;
              n2->next=NULL;
              current2=n2;
            }
        }
          temp=temp->next;
     }
}

void numbers::display(node *head)
{
    node *p;
    p=head;
    if(p==NULL)
    {
        cout<<"\nThe list is Empty";
    }
    else
    {
        while(p!=NULL)
        {
            cout<<p->num<<"\t";
             p=p->next;
        }
    }
}

void numbers::sort(node *head_d) 
{
    node *temp1,*temp2,*temp3;
    temp1 = head_d;

 for( ;temp1->next!=NULL;temp1=temp1->next)
 {
     for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
     {
         if(temp1->num>temp2->num)
         {
             int temp= temp1->num;
             temp1->num = temp2->num;
             temp2->num = temp;
         }
     }
 }
 temp3 = head_d;

while (temp3!=NULL)
{
cout<<"\t"<< temp3->num;
temp3 =temp3->next;
}
}

void numbers::merge()
{
    node *temp;
    temp=head1;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
}
void numbers::insert()
{
    node *p,*temp;
        p=new node;
        cout<<"\n\n Enter New Number to be insert  :  ";
        cin>>p->num;
        p->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
    temp=temp->next;
        }
    temp->next=p;
}

int main()
{
    numbers n;
    n.create();
    cout<<"\n \nTHE LIST OF +VE AND -VE NUMBERS IS: \n";
    n.display(n.head);
    n.insert();
    cout<<"\n \nTHE LIST AFTER INSERTION IS: \n";
    n.display(n.head);
    n.seperate();
    cout<<"\n\n THE LIST OF ONLY -VE NUMBERS IS: \n";
    n.display(n.head1);
    cout<<"\n\n THE LIST OF ONLY +VE NUMBERS IS: \n";
    n.display(n.head2);
    cout<<"\n\n THE LIST OF ONLY SORTED -VE NUMBERS IS : \n";
    n.sort(n.head1);
    cout<<"\n\n THE LIST OF ONLY SORTED +VE NUMBERS IS : \n";
    n.sort(n.head2);
    n.merge();
    cout<<"\n AFTER MERGE .....THE LIST IS AS FOLLOWS: \n";
    n.display(n.head1);
    cout<<"\n\n THE LIST OF SORTED +VE AND -VE NUMBERS IS : \n\n";
    n.display(n.head1);
    return 0;
}

