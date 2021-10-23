 
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
 
      int n,x;

      cin>>n>>x;

      int a[n];

      map<int,int> mp;

      for(int i=0;i<n;i++) {
        cin>>a[i];
        mp[a[i]]++;
      }

      int a1=-1,b=-1;

      for(int i=0;i<n;i++) {
        if(mp[x-a[i]]>0) {
           if(x-a[i]==a[i]) {
            if(mp[a[i]]>1) {
                a1=a[i];
                b=a[i];
            }
            else {
                continue;
            }
           }

           else {
            a1=a[i];
            b=x-a[i];
           }
            break;
        }
      }


      if(a1==-1&&b==-1) {
       // cout<<"Hi"<<endl;
        cout<<"IMPOSSIBLE";
      }

      else {
        vector<int> v;
        for(int i=0;i<n;i++) {
            if(a[i]==a1) {
                v.eb(i+1);
                a[i]=-1;
                break;
            }
        }

        for(int i=0;i<n;i++) {
            if(a[i]==b) {
                v.eb(i+1);
                break;
            }
        }

       // cout<<a1<<" "<<b<<endl;

        if(v.size()==2) {
            cout<<v[0]<<" "<<v[1];
        }

        else {
            cout<<"IMPOSSIBLE";
        }
      }


 
        return 0;
    }
