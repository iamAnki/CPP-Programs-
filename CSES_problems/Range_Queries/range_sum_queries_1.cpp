 
    #include <bits/stdc++.h>
    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <chrono>
    #include <complex>
    #define endl "\n"
    #define int long long int
    #define vi vector<int>
    #define vll vector<ll>
    #define vvi vector < vi >
    #define pii pair<int,int>
    #define pll pair<long long, long long>
    #define mod 1000000007
    #define inf 1000000000000000001;
    #define all(c) c.begin(),c.end()
    #define mp(x,y) make_pair(x,y)
    #define mem(a,val) memset(a,val,sizeof(a))
    #define eb emplace_back
    #define f first
    #define s second
    
    using namespace std;
    signed main()
    {
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
 
       
        int n,q;

        cin>>n>>q;

        int a[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int pre[n];

        int sum=a[0];
        pre[0]=sum;

        for(int i=1;i<n;i++) {
            sum+=a[i];
            pre[i]=sum;
        }

        while(q--) {

            int l,r;

            cin>>l>>r;

            cout<<pre[r-1]-pre[l-1]+a[l-1]<<endl;

        }

 
        return 0;
    }
