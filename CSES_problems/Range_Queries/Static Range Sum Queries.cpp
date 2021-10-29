QUESTION LINK:https://cses.fi/problemset/task/1646/
#include <iostream>
 
using namespace std;
 
int main()
{
    int n,q;
    cin>>n>>q;
    long long a[n],b[n];
    int t=q;
    int k=0;
    long long sum[q];
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(i==0)
            b[i]=a[i];
           else
            b[i]=a[i]+b[i-1];
       }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            if(l>1)
            sum[k]=b[r-1]-b[l-2];
            else
                sum[k]=b[r-1];
            k++;
 
        }
 
 
 
        for(int i=0;i<t;i++)
            cout<<sum[i]<<endl;
}
