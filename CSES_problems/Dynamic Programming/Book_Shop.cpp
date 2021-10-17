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



    int find_max(int n,int x,int pages[],int price[]) {

        int dp[n+1][x+1];

        memset(dp,0,sizeof(dp));

        for(int i=1;i<=n;i++) {
            for(int j=1;j<=x;j++) {

                if(price[i-1]<=j) {
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-price[i-1]]+pages[i-1]);
                }

                else {
                    dp[i][j] = dp[i-1][j];
                }

            }
        }

        return dp[n][x];


    }






    int main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        int n,x;

        cin>>n>>x;

        int price[n];

        int pages[n];

        for(int i=0;i<n;i++){
            cin>>price[i];
        }

         for(int i=0;i<n;i++){
            cin>>pages[i];
        }


        cout<<find_max(n,x,pages,price);

        return 0;
    }