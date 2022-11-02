//285problemC
// Codeforces Round #175 (Div. 2) Problem C
//link: https://codeforces.com/contest/285/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define judge freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);freopen("error.txt","w",stderr);
#define fastio ios_base::sync_with_stdio(false);  cin.tie(NULL);   cout.tie(NULL);
    
signed main() 
{   fastio
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   ll sum=0;
   for(ll i=0;i<n;i++)
   {
        
       sum+=abs(a[i]-(i+1));
 
   }
   cout<<sum;
    return 0;
}
