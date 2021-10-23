#include<iostream>
using namespace std;
class fibonacci
{
    long int a,b; //data members
    public:
    fibonacci() //special member function constructor
    {
        a=-1;
        b=1;
    }

    void fibseries(int n) //member function
    {
        int i,next;
        cout<<"\n Resultant fibonacci series";
        cout<<"\n-----------------------------\n";
        for(i=0;i<n;i++)
        {
            next=a+b; //Expression
            cout<<next<<endl; //To print the fibseries
            a=b;
            b=next;
        }
    }
};

int main()
{
    fibonacci f;
    int n;
    cout<<"\n Fibonacci series \n";
    cout<<"\n Enter the range = \n";
      cin>>n;
    f.fibseries(n); //Accessing the members l function fibseries () using Dot (.) operator
    return 0;
}