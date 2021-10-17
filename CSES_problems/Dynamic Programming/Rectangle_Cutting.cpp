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

    int find_ans(int a,int b) {

        int dp[a+1][b+1];

        for(int i=1;i<=a;i++) {
            for(int j=1;j<=b;j++) {
                if(i==j) {
                    dp[i][j]=0;
                }
                else {
                    int ans=INT_MAX;
                    for(int x=1;x<i;x++) {
                        ans=min(ans,1+dp[i-x][j]+dp[x][j]);
                    }
                    for(int y=1;y<j;y++) {
                        ans=min(ans,1+dp[i][j-y]+dp[i][y]);
                    }
                    dp[i][j]=ans;
                }
            }
        }


        return dp[a][b];

    }


    int main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        int a,b;

        cin>>a>>b;

        cout<<find_ans(a,b);

        return 0;
    }