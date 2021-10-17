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

        int n;

        cin>>n;

        vector<pair<int,int>> vp;

        for(int i=0;i<n;i++) {
            int a,b;
            cin>>a>>b;
            vp.eb(make_pair(a,1));
            vp.eb(make_pair(b,-1));
        }

        sort(vp.begin(),vp.end());

        int c=0;

        vector<int> v;

        for(int i=0;i<vp.size();i++) {

            if(vp[i].s!=-1) {
                c++;
            }

            else {
                v.eb(c);
                c--;
            }

        }

        v.eb(c);

        cout<<*max_element(v.begin(),v.end());
       


        return 0;
    }