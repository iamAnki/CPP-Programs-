/* 
Author : Sachin19k
Topic: Singly linked list operations 
*/

/* Problem Statement :

Create Singly Linked List and perform the following operation 
1. Insertion 
2. Deletion 
3. Display Records.
4. Search a record form linked list.

(Hint: Create class Linked list, define node structure using class or structure. 
Create menu driven program in which options are

1. Insert at start 
2. Insert at end 
3. Insert at position 
4. Delete at start 
5. Delete at end 
6. Delete at position 
7. Display record 
8. Search a record) */

#include<iostream> 
using namespace std; 

//Structure of node of linked list
struct node 
{ 
   int data; 
   node *next; 
}; 

//Class for operation on Linked List
class linklist 
{ 
   node *next,*tmp,*ptr,*head,*prev,*end; 
public: 
   linklist() 
   { 
       head = NULL; 
       prev = NULL; 
       end =NULL; 
   } 
   void insert_beg(int x); //Insertion in the beginning
   void insert_end(int x); //Insertion at the end
   void insert_pos(int x,int pos); //Insertion at any position
   void del_beg(); //Deletion from the beginning
   void del_end(); //Deletion from the end
   void del_pos(int pos); //Deletion from any position
   void display(); //Display content of linked list
   void search(int x); //Searching element in linked list

   node *create(int x) //Node creation
   { 
       node *temp; 
       temp=new node; 
       temp->data=x; 
       temp->next=NULL; 
       return temp; 
   } 
}; 

void linklist::insert_beg(int x) 
{ 
   tmp=create(x); 
   if(head==NULL) 
   { 
       head=tmp; 
       end=head; 
   } 
   else 
   { 
       tmp->next=head; 
       head=tmp; 
   } 
} 

void linklist::insert_end(int x) 
{ 
   tmp=create(x); 
   if(head==NULL) 
   { 
       head=tmp; 
       end=head; 
   } 
   end->next=tmp; 
   end=tmp; 
} 

void linklist::insert_pos(int x,int pos) 
{ 
   tmp=create(x); 
   ptr=head; 
   for(int i=1;i<pos;i++) 
   { 
       prev=ptr; 
       ptr=ptr->next; 
   } 
   tmp->next=ptr; 
   prev->next=tmp; 
} 

void linklist::del_beg() 
{ 
   if(head==NULL) 
   { 
       cout<<"LIST IS EMPTY!! \n"; 
       return; 
   } 
   ptr=head; 
   head=head->next; 
   ptr->next=NULL; 
   delete ptr; 
} 

void linklist::del_end() 
{ 
   if(head==NULL) 
   { 
       cout<<"LIST IS EMPTY!! \n"; 
       return; 
   } 
   ptr=head; 
   while(ptr!=end) 
   { 
       prev=ptr; 
       ptr=ptr->next; 
   } 
   prev->next=NULL; 
   end=prev; 
   delete ptr; 
} 

void linklist::del_pos(int pos) 
{ 
   if(head==NULL) 
   { 
       cout<<"LIST IS EMPTY!! \n"; 
       return; 
   } 
   ptr=head; 
   for(int i=1;i<pos;i++) 
   { 
       prev=ptr; 
       ptr=ptr->next; 
   } 
   prev->next=ptr->next; 
   ptr->next=NULL; 
   delete ptr; 
} 

void linklist::display() 
{ 
   ptr=head; 
   int i=1; 
   while(ptr!=end) 
   { 
       cout<<i<<"."<<ptr->data<<"\n"; 
       ptr=ptr->next; 
       i++; 
   } 
   cout<<i<<"."<<ptr->data<<"\n"; 
} 

void linklist::search(int x) 
{ 
   ptr=head; 
   int i=1,check=0; 
   while(1) 
   { 
       if(ptr->data==x) 
       { 
           cout<<"MATCH FOUND AT POSITION: "<<i<<"\n"; 
           check=1; 
       } 
       if(check==1 || ptr==end) 
       { 
           break; 
       } 
       ptr=ptr->next; 
       i++; 
   } 
   if(check==0) 
   { 
       cout<<"MATCH NOT FOUND!! \n"; 
   } 
} 

int main() //main function
{ 
   linklist a1; 
   int n,i,x,pos,p=1; 
   do 
   { 
       cout<<"------ENTER YOU CHOICE------\n"; 
       cout<<"1. Insert At Start\n"; 
       cout<<"2. Insert At End\n"; 
       cout<<"3. Insert At Position\n"; 
       cout<<"4. Delete At Start\n"; 
       cout<<"5. Delete At End\n"; 
       cout<<"6. Delete At Position\n"; 
       cout<<"7. Display Record\n"; 
       cout<<"8. Search a Record \n"; 
       cin>>n; 
       if(n==1) 
       { 
           cout<<"ENTER DATA FOR INSERTION:\n"<<p<<"."; 
           cin>>x; 
           a1.insert_beg(x); 
           p++; 
       } 
       else if(n==2) 
       { 
           cout<<"ENTER DATA FOR INSERTION:\n"<<p<<"."; 
           cin>>x; 
           a1.insert_end(x); 
           p++; 
       } 
       else if(n==3) 
       { 
           cout<<"ENTER DATA FOR INSERTION:\n"<<p<<"."; 
           cin>>x; 
           cout<<"Enter position for insertion \n"; 
           cin>>pos; 
           if(pos==1) 
           { 
               a1.insert_beg(x); 
           } 
           else if(pos==p+1) 
           { 
               a1.insert_end(x); 
           } 
           else 
           { 
               a1.insert_pos(x,pos); 
           } 
           p++; 
       } 
       else if(n==4) 
       { 
           a1.del_beg(); 
           p--; 
       } 
       else if(n==5) 
       { 
           a1.del_end(); 
           p--; 
       } 
       else if(n==6) 
       { 
           cout<<"Enter position for deletion\n"; 
           cin>>pos; 
           if(pos==1) 
           { 
               a1.del_beg(); 
           } 
           else if(pos==p) 
           { 
               a1.del_end(); 
           } 
           else 
               a1.del_pos(pos); 
           p--; 
       } 
       else if(n==7) 
       { 
           a1.display(); 
       } 
       else if(n==8) 
       { 
           cout<<"Record which you want to search?\n"; 
           cin>>x; 
           a1.search(x); 
       } 
       else 
       { 
           cout<<"INVALID INPUT!!\n"; 
       } 
       cout<<"DO YOU WANT TO CONTINUE?(Enter 1 if yes):\n"; 
       cin>>i; 
   } 
   while(i==1); 
   cout<<"OPERATION COMPLETED!! THANK YOU"; 
   return 0; 
}
