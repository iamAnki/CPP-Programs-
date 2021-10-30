#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int b,c,t,a[1000],n,z,i,d;
    cin>>t;
    while(t--){
        cin>>n;
        d=n/3;
        c=n%3;
        if(c==0){
            cout<<d<<" "<<d;
        }
        else if(c==1){
            cout<<d+1<<" "<<d;
        }
        else{
            cout<<d<<" "<<d+1;
        }
        cout<<endl;
    }
    return 0;
}