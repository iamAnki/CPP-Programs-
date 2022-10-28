#include<bits/stdc++.h>
using namespace std;
void dfs(int ind,int parent,vector<int>adj[],vector<int>&tim,vector<int>&low,vector<int>&vis,int &timer){
    tim[ind]=low[ind]=timer++;
    vis[ind]=1;
    for(auto it:adj[ind]){
        if(it== parent) continue;
        if(!vis[it]){
            dfs(it,ind,adj,tim,low,vis,timer);
            low[ind]=min(low[ind],low[it]);
            if(low[it]>tim[ind]){ cout<<it<<" "<<ind<<"\n";}
        }
        else low[ind]=min(low[ind],tim[it]);
    }
}

int main()
{
    int n,m,i,j=1; cin>>n>>m;
    vector<int>adj[n+1];
    for(i=0;i<m;i++){
        int l,r; cin>>l>>r;
        adj[l].push_back(r);adj[r].push_back(l);
    }
    vector<int>tim(n+1,-1),low(n+1,-1),vis(n+1,0);
    cout<<"\n";
    for(i=1;i<=n;i++) if(!vis[i]) dfs(i,-1,adj,tim,low,vis,j);
    return 0;
}