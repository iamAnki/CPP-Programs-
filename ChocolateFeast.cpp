#include<bits/stdc++.h>
using namespace std;
int chocolateFeast(int n, int c, int m) {
    int count{},x,a;
    count=n/c;
    x=count;
while(x>=m) {
  count+=x/m;
  x=x/m+x%m;

}
return count;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,c,m ;
    cin>>n>>c>>m;
    cout<<chocolateFeast( n,  c,  m);
    return 0;
}