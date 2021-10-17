
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



  int find_min_coin(int n,int x,int coin[]) {

      int dp[n+1][x+1];

      memset(dp,0,sizeof(dp));

       for(int i=0;i<n+1;i++) {
        dp[i][0]=0;
      }

      for(int j=0;j<x+1;j++) {
        dp[0][j]=INT_MAX-1;
      }

      for(int i=1;i<=n;i++) {
        for(int j=1;j<=x;j++) {

          if(coin[i-1]<=j) {
            dp[i][j]= min(dp[i-1][j],dp[i][j-coin[i-1]]+1);
          }

          else {
            dp[i][j] = dp[i-1][j];
          }

        }
      }


if(dp[n][x]==INT_MAX-1) {
  return -1;    
}

  return dp[n][x];

  }


  int main()
  {

  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif


      int n,target_sum;

      cin>>n>>target_sum;

      int a[n];

      for(int i=0;i<n;i++) {
        cin>>a[i];
      }


      cout<<find_min_coin(n,target_sum,a);


    return 0;
  }