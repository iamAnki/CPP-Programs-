//2sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,h,n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>sum;
    sort(a,a+n);
    l=0;
    h=n-1;
    while(l<h)
    {
        if(a[l]+a[h]>sum)
        {
            h--;
            
        }
        if(a[l]+a[h]<sum)
        {
            l++;
           
        }
        else
        {
            cout<<a[l]<<" "<<a[h]; 
            break;
        }
    }
    return 0;
}
