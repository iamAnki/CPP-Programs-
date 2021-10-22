    #include <bits/stdc++.h>
    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <chrono>
    #include <complex>
    #define endl "\n"
    #define ll long long int
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
    int main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

            int n,q;
            cin>>n>>q;

            char c[n][n];

            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    cin>>c[i][j];
                    //cout<<c[i][j]<<" ";
                }
                //cout<<endl;
            }

            vector<vector<int>> dp(n+1,vector<int>(n+1,0));

            for(int i=1;i<=n;i++) {
                for(int j=1;j<=n;j++) {

                    dp[i][j]+=(dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+(c[i-1][j-1]=='*'));
                }
            }

           


            while(q--) {

                int y1,x1,y2,x2;
                cin>>x1>>y1>>x2>>y2;
               // cout<<dp[x2][y2]<<" "<<dp[x2][y1-1]<<" "<<dp[x1-1][y2]<<" "<<dp[x1-1][y1-1]<<endl;

                int ans=dp[x2][y2]-dp[x2][y1-1]-dp[x1-1][y2]+dp[x1-1][y1-1];

                cout<<ans<<endl;

            }


        return 0;
    }