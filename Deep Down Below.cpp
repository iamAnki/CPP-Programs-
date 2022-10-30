QUESTION LINK:https://codeforces.com/contest/1561/problem/C

#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)
#define fo(i,n)for(int i=0;i<n;i++)
#define F(i,j,n)for(int i=j;i<n;i++)
#define FO(i,j,n)(int i=n;i>=j;i--)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int>pi;
#define pb push_back
#define mp make_pair
 
int gcd(int a,int b)
{
return b==0?a:gcd(b,a%b);
}
 
 
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>>power(n);
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            vector<ll>p(x);
            ll mpx=-1;
            for(int j=0;j<x;j++)
            {
                cin>>p[j];
                mpx=max(mpx,p[j]-j+1);
 
            }
            power[i]={mpx,x};
            
        }
        sort(power.begin(),power.end());
        ll l=power[0].first;
        ll r=power[n-1].first;
        ll ans=1e12;
        ll mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll curr=mid;
            bool ok=1;
            for(int i=0;i<n;i++)
            {
                if(curr>=power[i].first)
                curr+=power[i].second;
                else
                {
                    ok=0;
                    break;
                }
            }
            if(ok)
           { ans=mid;
           r=mid-1;
           }
           else
           {
               l=mid+1;
           }
 
        }
        cout<<ans<<endl;
        
 
    }
}
