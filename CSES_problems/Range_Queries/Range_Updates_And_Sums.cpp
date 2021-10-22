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

    struct node {
        int sum;
        int incr;
        int set;
        bool isSet;

        node() {
            sum=0;
            incr=0;
            //set=0;
            isSet=false;
        }

        void reset() {
            incr=0;
            //set=0;
            isSet=false;
        }
    };


      void compose(vector<node> &st,int si,int child) {

        if(st[si].isSet) {
            st[child].isSet=true;
            st[child].set=st[si].set;
            st[child].incr=st[si].incr;
        }

        else {
            st[child].incr+=st[si].incr;
        }

    }


    void apply_agr(vector<node> &st,int si,int sl,int sr) {

            if(st[si].isSet) {
                st[si].sum=(sr-sl+1)*st[si].set;
            }

            st[si].sum+=(sr-sl+1)*(st[si].incr);

            if(sl!=sr) {
                compose(st,si,2*si+1);
                compose(st,si,2*si+2);
            }

            st[si].reset();

    }


    int get_sum(vector<node> &st,int si,int sl,int sr,int l,int r) {

        if(sl>r||sr<l) {
            return 0;
        }

        apply_agr(st,si,sl,sr);

        if(l<=sl&&sr<=r) {

            return st[si].sum;
        }

        int mid=(sl+sr)/2;

        return get_sum(st,2*si+1,sl,mid,l,r)+get_sum(st,2*si+2,mid+1,sr,l,r);


    }


    void set_range(vector<node> &st,int si,int sl,int sr,int l,int r,int x) {

        if(sl>r||sr<l) {
            return;
        }

        if(l<=sl&&sr<=r) {
            
            st[si].isSet=true;
            st[si].set=x;
            st[si].incr=0;

            return;

        }

        int mid=(sr+sl)/2;
            
        apply_agr(st,si,sl,sr);

        set_range(st,2*si+1,sl,mid,l,r,x);
        set_range(st,2*si+2,mid+1,sr,l,r,x);


        apply_agr(st,2*si+1,sl,mid);
        apply_agr(st,2*si+2,mid+1,sr);

        st[si].sum=st[2*si+1].sum+st[2*si+2].sum;
        
    }


    void increase_range(vector<node> &st,int si,int sl,int sr,int l,int r,int x) {

        if(sl>r||sr<l) {
            return ;
        }

        if(l<=sl&&sr<=r) {            
            st[si].incr+=x;
            return;
        }

        int mid=(sl+sr)/2;

        apply_agr(st,si,sl,sr);

        increase_range(st,2*si+1,sl,mid,l,r,x);
        increase_range(st,2*si+2,mid+1,sr,l,r,x);

        apply_agr(st,2*si+1,sl,mid); 
        apply_agr(st,2*si+2,mid+1,sr);

        st[si].sum=st[2*si+1].sum+st[2*si+2].sum;

    }

  

    void build(vector<node> &st,int si,int sl,int sr,int a[]) {

        if(sl==sr) {
            st[si].sum=a[sl];
        }

        else {

            int mid=(sl+sr)/2;

            build(st,2*si+1,sl,mid,a);
            build(st,2*si+2,mid+1,sr,a);

            st[si].sum=st[2*si+1].sum+st[2*si+2].sum;
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

        int a[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
            //cout<<a[i]<<" ";
        }
        //cout<<endl;

        vector<node> st(4*n,node());

        build(st,0,0,n-1,a);


        while(q--) {

            int c;
            cin>>c;

            if(c==1) {

                //cout<<c;

                int l,r,x;
                cin>>l>>r>>x;

                l--;
                r--;

                 increase_range(st,0,0,n-1,l,r,x);

                //cout<<st[0].sum<<" ";

            }

            if(c==2) {

                int l,r,x;
                cin>>l>>r>>x;

                l--;
                r--;

                //cout<<1;

                set_range(st,0,0,n-1,l,r,x);

            }

            if(c==3) {

                int l,r;
                cin>>l>>r;

                l--;
                r--;

                int p=get_sum(st,0,0,n-1,l,r);

                cout<<p<<endl;

            }

        }



        return 0;
    }