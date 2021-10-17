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

    int solve(int n,int m,int a[]) {

            int dp[n+2][m+2];

            memset(dp,0,sizeof(dp));


            for(int i=1;i<=n;i++) {
                for(int x=1;x<=m;x++) {
                    if(i==1) {
                        if(a[i]==0||a[i]==x) {
                            dp[i][x]=1;
                        }
                        else {
                            dp[i][x]=0;
                        }
                    }
                    else {
                        if(a[i]==0||a[i]==x) {
                            dp[i][x]=(dp[i-1][x-1]%mod+dp[i-1][x]%mod+dp[i-1][x+1]%mod)%mod;
                        }
                        else {
                            dp[i][x]=0;
                        }
                    }
                }
            }

            int ans=0;

            for(int x=1;x<=m;x++) {
                ans=(ans+dp[n][x])%mod;
            }

            return ans;


    }


    signed main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        int n,m;

        cin>>n>>m;

        int a[n+1];

        for(int i=1;i<=n;i++) {
            cin>>a[i];
        }

         cout<<solve(n,m,a);


        return 0;
    }