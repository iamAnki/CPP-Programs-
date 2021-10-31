Question link :- https://codeforces.com/problemset/problem/1604/A

Solution: -
  #include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mod 1000000007
#define endl '\n'
#define fo(i,o,n) for(int i=o;i<n;i++)
#define rfo(i,o,n) for(int i=n-1;i>=o;i--)
#define all(v) v.begin(),v.end()
#define vi vector<int> 
#define mii map<int,int>
#define miv map<int,vector<int>>
#define pb push_back
 
int32_t main()
{
    f;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        fo(i, 0, n)
        {
            cin >> a[i];
        }
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            ll p = i + 1;
            if (a[i] > p + count)
                count += a[i] - p - count;
        }
        cout << count << endl;
    }
    return 0;
}
