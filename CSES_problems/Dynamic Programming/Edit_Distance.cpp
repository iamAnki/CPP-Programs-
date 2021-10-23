    
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
    
    string s,t;

    cin>>s>>t;

    int n=s.size();
    int m=t.size();

    int dp[n+1][m+1];

    for(int i=0;i<n+1;i++) {
        dp[i][0]=i;
    } 

    for(int j=0;j<m+1;j++) {
        dp[0][j]=j;
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(s[i-1]==t[j-1]) {
                dp[i][j]=dp[i-1][j-1];
            }
            else {
                dp[i][j]=min({dp[i][j-1],dp[i-1][j-1],dp[i-1][j]})+1;
            }
        }
    }


    cout<<dp[n][m];

        return 0;
    }