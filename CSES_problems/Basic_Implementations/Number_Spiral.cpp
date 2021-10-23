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
    #define int long long int
    
    using namespace std;
    signed main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

     
        int n;

        cin>>n;

        while(n--) {

            int x,y;

            cin>>x>>y;

            int t=max(x,y);

            int a0=1;

            int p = (t-a0)*(t-a0+1)+1;

            int u = (t-a0);

           // cout<<p<<endl;

            if(u%2==0) {
                x-=t;
                y-=t;

                //cout<<x<<y;
                if(x==0&&y==0) {
                    cout<<p;
                }

                else if(x==0&&y!=0) {
                    cout<<-abs(y)+p;
                }

                else if(y==0&&x!=0) {
                    cout<<p+abs(x);
                }
            } 


            else {

                 x-=t;
                 y-=t;

                if(x==0&&y==0) {
                    cout<<p;
                }

                else if(x==0&&y!=0) {
                    cout<<abs(y)+p;
                }

                else if(y==0&&x!=0) {
                    cout<<p-abs(x);
                }


            }
            cout<<endl;

        }



        return 0;
    }