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
    const int blk=555;
    
    using namespace std;

    struct query {
        int l;
        int r;
        int i;

        bool operator < (query& q2) {
            if((l/blk)<(q2.l/blk)) {
                return 1;
            }
            else if((l/blk)>(q2.l/blk)) {
                return 0;
            }
            else {
                return r<q2.r;
            }
        }

    };

    bool comp(query a,query b) {

        if((a.l/blk)!=(b.l/blk)) {
            return (a.l/blk)<=(b.l/blk);
        }

        return a.r<=b.r;

    }

    int cnt;
    int ar[200001];
    query Q[200001];
    int ans[200001];
    int freq[200001];
    

    void add(int pos) {

        freq[ar[pos]]++;
        if(freq[ar[pos]]==1) {
            cnt++;
        }

    }

    void reduce(int pos) {

        freq[ar[pos]]--;
        if(freq[ar[pos]]==0) {
            cnt--;
        }

    }


    signed main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


        int n,q;
        cin>>n>>q;

       
        memset(freq,0,sizeof(freq));

        map<int,int> coord_compressed;
        int compressed=1;

        for(int i=0;i<n;i++) {
            cin>>ar[i];
            if(coord_compressed.find(ar[i])!=coord_compressed.end()) {
                ar[i]=coord_compressed[ar[i]];
            }
            else {
                coord_compressed[ar[i]]=compressed;
                ar[i]=compressed++;
            }
        }



        for(int i=0;i<q;i++) {
            int u,v;
            cin>>u>>v;

            Q[i].l=u-1;
            Q[i].r=v-1;
            Q[i].i=i;
        }

       sort(Q,Q+q);
      

        int ml=Q[0].l;
        int mr=Q[0].l;

        freq[ar[ml]]++;
        cnt=1;

        for(int i=0;i<q;i++) {

            int l=Q[i].l;
            int r=Q[i].r;

            while(ml>l) {
                ml--;
                add(ml);
            }

            while(mr<r) {
                mr++;
                add(mr);
            }

            while(ml<l) {
                reduce(ml);
                ml++;
            }

            while(mr>r) {
                reduce(mr);
                mr--;
            }

            ans[Q[i].i]=cnt;

        }

      for(int i=0;i<q;i++) {
        cout<<ans[i]<<endl;
      }


        return 0;
    }