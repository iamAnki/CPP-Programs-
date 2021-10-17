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

    void update(int st[],int si,int sl,int sr,int pos,int x) {

        if(sl>pos||sr<pos) {
            return;
        }

        if(sl==sr&&sr==pos) {
            st[si]=x;
            return ;
        }

        int mid=(sl+sr)/2;
        update(st,2*si+1,sl,mid,pos,x);
        update(st,2*si+2,mid+1,sr,pos,x);

        st[si]=st[2*si+1]+st[2*si+2];

    }

    int query(int st[],int si,int sl,int sr,int l,int r) {

        if(sl>r||sr<l) {
            return 0;
        }

        if(sl>=l&&sr<=r) {
            return st[si];
        }

        int mid=(sl+sr)/2;
        return query(st,2*si+1,sl,mid,l,r)+query(st,2*si+2,mid+1,sr,l,r);
    }

    void build(int st[],int si,int sl,int sr,int p[]) {

        if(sl==sr) {
            st[si]=p[sl];
        }

        else {
            int mid=(sl+sr)/2;
            build(st,2*si+1,sl,mid,p);
            build(st,2*si+2,mid+1,sr,p);

            st[si]=st[2*si+1]+st[2*si+2];
        }

    }


    int main()
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

        int present[n];

        for(int i=0;i<n;i++) {
            present[i]=1;
        }



        int st[4*n];

        build(st,0,0,n-1,present);




        for(int k=0;k<n;k++) {


            int x;
            cin>>x;
            //cout<<x;
            

            int lo=0;
            int hi=n-1;

            
            while(lo!=hi) {

                int m=(lo+hi)/2;

                int p=query(st,0,0,n-1,0,m);


                if(p>x) {
                    hi=m-1;
                }

                else if(p<x) {
                    lo=m+1;
                }

                else {

                    if(present[m]) {
                        lo=m;
                        break;
                    }

                    else {
                        hi=m-1;
                    }

                }

            }
            

            present[lo]=0;
            update(st,0,0,n-1,lo,0);

            cout<<a[lo]<<endl;

        }


        return 0;
    }