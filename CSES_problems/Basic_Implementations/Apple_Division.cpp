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
    signed main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        int n;

        cin>>n;

        
        int a[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        vector<string> v;

        vector<int> sv;

        for(int i=1;i<=pow(2,n)-1;i++) {
            bitset<64> bset(i);

            v.eb(bset.to_string());

           // cout<<v.back()<<endl;
        }

        for(int i=0;i<v.size();i++) {
            string g=v[i];
            int sum1=0;
            int sum0=0;

            reverse(g.begin(),g.end());

            for(int i=0;i<n;i++) {
                if(g[i]=='0') {
                    sum0+=a[i];
                }
                else {
                    sum1+=a[i];
                }
            }

            sv.eb(abs(sum1-sum0));
        }        


        cout<<*min_element(sv.begin(),sv.end());

        return 0;
    }