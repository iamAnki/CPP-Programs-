#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vi vector<ll>
#define vp vector<pi>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define POB pop_back 
#define f(i,x,z) for(ll i=x;i<z;i++)
#define debug(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define clr(x) memset(x, 0, sizeof(x)) 
#define setall(x,a) memset(x, a, sizeof(x))
#define INF 1000000000000000003 
#define mathpi 3.141592653589793238 
#define F first;
#define S second;
#define vpair vector<pair<ll,ll>>
#define vpairs vector<pair<string,string>>
#define tin tuple<ll,ll,ll>
#define rev(i,x,z) for(ll i=x;i>=z;i--)    
vector<vi>adj;
vector<bool>visited(100000,0);
int parent=-1;
bool cycledetection(int node,int parent)
{
	int cur=node;
	visited[cur]=1;
	for(auto neighbour:adj[cur])
	{
		if(visited[neighbour]==0)
		{
			if(cycledetection(neighbour,cur)==1)
			{
				return true;
			}
		}
		else if(neighbour!=parent && visited[neighbour]==1)
		{
			return true;
		}
	}
	return 0;
}
int main()
{
	// freopen("inp.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	ios::sync_with_stdio(0);// Input and output clearance
	cin.tie(0);
	ll n;
	cin>>n;
	adj.resize(1000000);
	f(i,0,n)
	{
		ll u,v;
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	ll cnt=0;
    f(i,1,n+1)
    {
        if(visited[i]!=1)
        {
			if(cycledetection(i,-1)==1)
			{
				cout<<"Yes there is a cycle"<<"\n";
				return 1;
			}
        }
    }
	cout<<"No Cycle"<<"\n";
	return 0;

}
