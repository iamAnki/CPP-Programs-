#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll>adj[100005];

void dfs(ll node,ll par){
    for(auto it:adj[node]){
        if(it!=par){
            dfs(it,node);
        }
    }
}

int main(){ 
    ll n,m;cin>>n>>m;
    for(int i=0;i<n-1;i++){
        ll u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0,0);
}
