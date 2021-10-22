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

struct job {
    int start,finish,money;
};

bool comp(job j1,job j2) {
    return j1.finish<j2.finish;
}

    int find(job a[],int i)
{
    for(int j=i-1;j>=0;j--)
    {
        if(a[j].finish < a[i].start)
        return j;
    }
        return -1;
}
    signed main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        int n;

        cin>>n;

        array<int,3> arr[n];

        for(int i=0;i<n;i++) {
            cin>>arr[i][1]>>arr[i][0]>>arr[i][2];
        }

        sort(arr,arr+n);

        int dp[n];

        dp[0]=arr[0][2];

        for(int i=1;i<n;i++) {
            int k=lower_bound(arr,arr+n,array<int,3>{arr[i][1],0,0})-arr-1;

            if(k>=0) {
                dp[i]=max(dp[i-1],dp[k]+arr[i][2]);
            }

            else {
                dp[i]=max(dp[i-1],arr[i][2]);
            }
        }

        cout<<dp[n-1];


        return 0;
    }