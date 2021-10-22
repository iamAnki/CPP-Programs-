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
    #define NUM_STATION 4
    
    using namespace std;

    

    int find_carAssembly(int en[],int ex[],int a[][NUM_STATION],int t[][NUM_STATION]) {

        int dp1[NUM_STATION];
        int dp2[NUM_STATION];

        //dp1[0]=0;
       // dp2[0]=0;
        dp1[0]=en[0]+a[0][0];
        dp2[0]=en[1]+a[1][0];

        for(int i=1;i<NUM_STATION;i++) {
            dp1[i]=min(dp1[i-1]+a[0][i],dp2[i-1]+t[1][i]+a[0][i]);
            dp2[i]=min(dp2[i-1]+a[1][i],dp1[i-1]+t[0][i]+a[1][i]);
        }


        return min(dp1[NUM_STATION-1]+ex[0],dp2[NUM_STATION-1]+ex[1]);

    }



    int main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

      int n;
 
        cin>>n;
 
        vector<pair<int,int>> vp;
 
        for(int i=0;i<n;i++) {
            int a,b;
            cin>>a>>b;
            vp.eb(mp(b,a));
        }
 
        sort(vp.begin(),vp.end());
 
        int c=1;
 
        vector<int> v;
 
        int curr=vp[0].f;

        int ans=1;

        for(int i=1;i<n;i++)  {
          if(vp[i].s>=curr) {
            curr=vp[i].f;
            c++;
          }
        }


        
        cout<<c;


        return 0;
    }