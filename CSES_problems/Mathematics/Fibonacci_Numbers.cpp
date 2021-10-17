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

    void power(int f[2][2],int n);
    void multiply(int f[2][2],int m[2][2]);

    int fib(int n) {

            int f[2][2]={{1,1},{1,0}};

            if(n==0) {
                return 0;
            }

            power(f,n-1);

            return f[0][0]%mod;
    }


    void power(int f[2][2],int n) {

        if(n==0||n==1) {
            return ;
        }

        int m[2][2]={{1,1},{1,0}};

        power(f,n/2);
        multiply(f,f);

        if(n%2!=0) {
            multiply(f,m);
        }

    }


    void multiply(int f[2][2],int m[2][2]) {

        int x=(f[0][0]%mod)*(m[0][0]%mod)+(f[0][1]%mod)*(m[1][0]%mod);
        int y=(f[0][0]%mod)*(m[0][1]%mod)+(f[0][1]%mod)*(m[1][1]%mod);
        int z=(f[1][0]%mod)*(m[0][0]%mod)+(f[1][1]%mod)*(m[1][0]%mod);
        int w=(f[1][0]%mod)*(m[0][1]%mod)+(f[1][1]%mod)*(m[1][1]%mod);

        f[0][0]=x%mod;
        f[0][1]=y%mod;
        f[1][0]=z%mod;
        f[1][1]=w%mod;

    }



    signed main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


        int n;

        cin>>n;

        cout<<fib(n);

        return 0;
    }