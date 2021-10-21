#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
#define forp(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define form(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
 
const int M=1e9+7;
 
ll pM(ll a,ll b,ll m)
{
    ll r=1; 
    while(b)
    {
        if(b&1)
        {
            r=r*a%m;
        }
        a=a*a%m;
        b/=2;
    }
    return r; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        ll a,b,c;cin>>a>>b>>c;
        cout<<pM(a,pM(b,c,M-1),M)<<endl;
    }
    return 0;
}
