#include <iostream>

using namespace std;
static int p=0;
void hanoi(int n, int a, int b, int c)
{
    if (n>0)
    {
        hanoi(n-1,a,c,b);
        cout<<"\nMove the disc from needle "<<a<<" to needle "<<c<<endl;
        p++;
        hanoi(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of discs : ";
    cin>>n;
    hanoi(n,1,2,3);
    cout<<"\nTotal moves = "<<p<<endl;
    return 0;
}
