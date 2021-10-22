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


    int getXOR(int st[],int si,int sl,int sr,int l,int r) {

        if(sl>=l&&sr<=r) {
            return st[si];
        }

        if(sr<l||sl>r) {
            return 0;
        }

        int mid=(sl+sr)/2;

        return getXOR(st,2*si+1,sl,mid,l,r)^getXOR(st,2*si+2,mid+1,sr,l,r);

    }

    void build(int st[],int si,int l,int r,int a[]) {

        if(l==r) {
            st[si]=a[l];
        }

        else {

            int mid=(l+r)/2;
            build(st,2*si+1,l,mid,a);
            build(st,2*si+2,mid+1,r,a);

            st[si]=st[2*si+1]^st[2*si+2];
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
        //cout<<n<<q;

        int a[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int st[4*n];

        build(st,0,0,n-1,a);

       

        while(q--) {
            //cout<<1;
            int l,r;

            cin>>l>>r;
            //cout<<l<<r;

            l--;
            r--;

            int p=getXOR(st,0,0,n-1,l,r);

            cout<<p<<endl;

        } 

        return 0;
    }