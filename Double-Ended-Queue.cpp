#include<iostream>
using namespace std;
int q[5];
int f=0,r=-1;
void insert_element_rear()
{
    if(f==0 and r==4)
    {
        cout<<"Queue Overflow"<<endl;
    }
    else
    {
        int ele;
        cout<<"Enter the element from front end: "<<endl;
        cin>>ele;
        if(f>0 and r==4)
        {
            for(int i=1;i>=f;i++)
            {
                for(int j=f;j<=r;j++)
                {
                    q[j-1]=q[i];

                }
                f--;
                r--;
            }
            q[r+1]=ele;
            r++;
        }
        else
        {
            q[r+1]=ele;
            r++;
        }
    }
}
void insert_element_front()
{
     if(f==0 and r==4)
    {
        cout<<"Queue Overflow"<<endl;
    }
    else
    {
        int ele;
        cout<<"Enter the element from front end: "<<endl;
        cin>>ele;
        if(f>0 and r==4)
        {

            q[f-1]=ele;
            f--;
        }
        else
        {
            if(f==0 and r==-1)
            {
                q[r+1]=ele;
                r++;
            }
            else
            {
                  for(int i=r;i>=f;i--)
                    {
                        q[i+1]=q[i];

                    }
                    q[f]=ele;
                    r++;
            }
        }


    }
}
void remove_element1()
{
    if(r==-1)
    {
        cout<<"Queue underflow"<<endl;
    }
    else
    {
        cout<<"Element removed from front succesfully.. "<<endl;
        f++;
    }
}
void remove_element2()
{
    if(r==-1)
    {
        cout<<"Queue underflow"<<endl;
    }
    else
    {
        cout<<"Element removed from Rear succesfully.."<<endl;
        r--;
    }
}
void display()
{
    if(r==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<endl<<"----------------------DEqueue contains---------------- :"<<endl;
        for(int i=f;i<=r;i++)
        {
            cout<<q[i]<<"  ";
        }
    }
}
int main()
{
      int i;
    do{
            printf("\n****************MENU(DEQUEUE)***********\n");
            printf("\n1-INSERT elements from Front :\n");
            printf("2- REmOVE elements from Front :\n");
            printf("3-INSERT elements from Rear :\n");
            printf("4- REmOVE elements from Rear :\n");
            printf("5-DISPLAY elements:\n");
            printf("6-EXIT\n");
            printf("Provide your choice :");
            cin>>i;
            switch(i)
            {
            case 1:
                insert_element_front();
                break;
            case 2:
                remove_element1();
                break;
            case 3:
                insert_element_rear();
                break;
            case 4:
                remove_element2();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            }
}while(true);
}
