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

        int y=n*(n+1);
        y=y/2;
       // cout<<y<<endl;

        if(y%2==0) {

            int sum=y;
            sum/=2;
           // cout<<sum<<endl;

            vector<int> v1;

            int c=n;

            int sum1=sum;

            set<int> s1;

            while(sum1>0) {
                if(sum1>=c) {
                        sum1-=c;
                        v1.eb(c);
                        s1.insert(sum1);
                        c--;
                }

                else {
                    v1.eb(sum1);
                    s1.insert(sum1);
                   // sum1=0;
                    break;
                }
               
            }

            int sumw=0;

            vector<int> v2;

            for(int i=1;i<=c;i++) {
                if(i!=sum1) {
                    v2.eb(i);
                }
            }


            sumw=accumulate(v2.begin(),v2.end(),sumw);
       //     cout<<sumw<<endl;


            cout<<"YES"<<endl;

            cout<<v1.size()<<endl;
            for(int i=0;i<v1.size();i++) {
                cout<<v1[i]<<" ";
            }
            cout<<endl;
            cout<<v2.size()<<endl;
            for(int i=0;i<v2.size();i++) {
                cout<<v2[i]<<" ";
            }

        }


        else {
            cout<<"NO";
        }


        return 0;
    }