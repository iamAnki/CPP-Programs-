//wave array optimised
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //length of the array
    cin>>n;
    //an array of length n
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i+=2)
    {
        if(i>0 && a[i-1]>a[i])
        {
            swap(a[i],a[i-1]);
            // int temp;
            // temp=a[i];
            // a[i]=a[i-1];
            // a[i-1]=temp;
        }
        if(i<n-1 && a[i]<a[i+1])
        {
            swap(a[i],a[i+1]);
            // int temp;
            // temp=a[i];
            // a[i]=a[i+1];
            // a[i+1]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
