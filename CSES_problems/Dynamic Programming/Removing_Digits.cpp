    /*

    I have proudly solved this problem, on my own.... Feel really delighted....


    */

    

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

    int dp[1000001];

    int reduce(int n) {

        if(dp[n]!=-1) {
            return dp[n];
        }

        if(n<=9) {
            return dp[n]=1;
        }

        int k=n;

      //  cout<<k;

        vector<int> v;

        while(k>0) {
            //cout<<k;
            if(k%10!=0) {
                v.eb(k%10);
            }
            k/=10;
        }

        int mini=INT_MAX;

        for(int i=0;i<v.size();i++) {
            //cout<<v[i]<<endl;
            mini=min(mini,reduce(n-v[i]));
        }

        return dp[n]=1+mini;

    }



    int main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        memset(dp,-1,sizeof(dp));

        int n;
        cin>>n;

        cout<<reduce(n);

        return 0;
    }