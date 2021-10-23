#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,curp,team=0,ans=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>curp;
        if(5-k>=curp)
        team++;
        if(team==3){
            ans++;
            team=0;
        }
    }
    cout<<ans;
    return 0;
}