#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;

#define pb push_back
#define ppb pop_back
#define mp make_pair

#define loop(i,a,b) for (int i = a; i < b; i++)

int n;

void search(int y,int& c,vector <int> &cell,int col[],int dig1[],int dig2[]){
if(y==n){
    c++;
cout<<c<<"\n";
for(int i=0;i<cell.size();i++){
    cout<<"("<<i<<","<<cell[i]<<")\n";
}
}else{
    for(int x=0;x<n;x++){
        if(col[x]||dig1[x+y]||dig2[x-y+n-1])continue;
        col[x]=1;dig1[x+y]=1;dig2[x-y+n-1]=1;
        cell.pb(x);
        search(y+1,c,cell,col,dig1,dig2);
        col[x]=0;dig1[x+y]=0;dig2[x-y+n-1]=0;
        cell.ppb();

    }
}
}

int main() {
#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin>>n;

if (n<=3)
{
    cout<<0;
}
else
{
    vector<int> cell;
    map<string,int> m;
    int c=0;
    int col[n]={0},dig1[2*n+1]={0},dig2[2*n+1]={0};
    search(0,c,cell,col,dig1,dig2);
    cout<<"Total : "<<c;
}
    return 0;
}