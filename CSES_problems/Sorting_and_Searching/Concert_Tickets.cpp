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


        int n,m;

        cin>>n>>m;

        multiset<int,greater<int>> ms;

        //we have used a decreasingly sorted multiset, because
        // if we apply lower_bound to a non-increasing sequence
        // it returns the iterator pointing to first element 
        //equal or less than the searched element.


        //Also, for a decrasing sequence, upper_bound returns
        // the first iterator pointing to an element less than 
        // the searched element.

        int b[m];

        for(int i=0;i<n;i++) {
           int y;
           cin>>y;
           ms.insert(y);
        }

        for(int j=0;j<m;j++) {
            cin>>b[j];
        }

        for(int i=0;i<m;i++) {

            auto it=ms.lower_bound(b[i]); 

            if(it==ms.end()) {
                cout<<-1<<endl;
            }

            else {
                cout<<*it<<endl;
                ms.erase(it);
            }
            
        }


        return 0;
    }