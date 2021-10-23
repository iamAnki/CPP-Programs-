#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d,pd=0;
    cin>>k>>l>>m>>n>>d;
    for (int  i = 0; i < d; i++)
    {
        if((i+1)%k==0) pd++;
        else if((i+1)%l==0) pd++;
        else if((i+1)%m==0) pd++;
        else if((i+1)%n==0) pd++;

    }
    cout<<pd;
    
    return 0;
}