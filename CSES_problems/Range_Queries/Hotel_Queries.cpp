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

    void query(int st[],int si,int sl,int sr,int x) {

        if(sl==sr&&st[si]>=x) {
            st[si]-=x;
            cout<<sl+1<<" ";
        }

        else {

            int mid=(sl+sr)/2;

            if(st[2*si+1]>=x) {
                query(st,2*si+1,sl,mid,x);
            }

            else {
                query(st,2*si+2,mid+1,sr,x);
            }

            st[si]=max(st[2*si+1],st[2*si+2]);

        }

    }

    void build(int st[],int si,int sl,int sr,int a[]) {

        if(sl==sr) {
            st[si]=a[sl];
        }

        else {
            int mid=(sl+sr)/2;

            build(st,2*si+1,sl,mid,a);
            build(st,2*si+2,mid+1,sr,a);

            st[si]=max(st[si*2+1],st[2*si+2]);
        }

    }


    int main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


        int n,q;

        cin>>n>>q;

        int a[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int st[4*n];

        build(st,0,0,n-1,a);

        while(q--) {

            int x;
            cin>>x;

            //cout<<x<<endl;

            if(st[0]<x) {

                cout<<0<<" ";
                continue;

            } 

            else {

               query(st,0,0,n-1,x);

            }

        }


        return 0;
    }