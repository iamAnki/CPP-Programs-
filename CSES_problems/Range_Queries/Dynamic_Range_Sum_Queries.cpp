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


    int getSum(int st[],int si,int sl,int sr,int l,int r) {

        if(l<=sl&&r>=sr) {
            return st[si];
        }

        if(l>sr||r<sl) {
            return 0;
        }

        int mid=sl+(sr-sl)/2;

        return getSum(st,2*si+1,sl,mid,l,r)+getSum(st,2*si+2,mid+1,sr,l,r);

    }


    void update(int st[],int si,int sl,int sr,int pos,int diff) {

        if(sl>pos||sr<pos) {
            return ;
        }

        st[si]+=diff;


        if(sl!=sr) {
            int mid=(sl+sr)/2;
            update(st,2*si+1,sl,mid,pos,diff);
            update(st,2*si+2,mid+1,sr,pos,diff);
        }

        return;

    }


    void constructST(int st[],int si,int l,int r,int a[]) {

        if(l==r) {
            st[si]=a[l];
            
        }

       else {
         int mid=(l+r)/2;

        constructST(st,2*si+1,l,mid,a);
        constructST(st,2*si+2,mid+1,r,a);
        st[si]=st[si*2+1]+st[si*2+2];

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
        }

        int st[4*n];
        
        constructST(st,0,0,n-1,a);

        while(q--) {

            int c;
            cin>>c;
           
            if(c==1) {
               
                int pos;
                cin>>pos;

                int x;
                cin>>x;
            

                int diff=-(a[pos-1]-x);
                a[pos-1]=x;
                update(st,0,0,n-1,pos-1,diff);

            }


            else {

                int l,r;
                cin>>l>>r;
               
                l--;
                r--;    

                int p=getSum(st,0,0,n-1,l,r);

                cout<<p<<endl;               

            }


        }

        cerr << "\nTime elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " sec \n";


        return 0;
    }