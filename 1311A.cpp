#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(){
    ll int a,b;
    cin>>a>>b;
    if((b-a)%2==0&&b-a<0)
    cout<<1<<endl;
    else if((b-a)%2!=1&&b-a<0)
    cout<<2<<endl;
    else if((b-a)%2==0&&b-a>0)
    cout<<2<<endl;
    else if((b-a)%2!=0&&b-a>0)
    cout<<1<<endl;
    else
    cout<<0<<endl;
    return 0;
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}