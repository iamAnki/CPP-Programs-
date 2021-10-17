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

    int getMin(int st[],int si,int sl,int sr,int l,int r) {

        if(sl>=l&&sr<=r) {      //if the query_range is fully overallping with seg_tree range
            return st[si];
        }

        if(r<sl||l>sr) {        // if there is no overlapping
            return INT_MAX;
        }

                                //when there is partial overlapping.

        int mid=(sl+sr)/2;      

        return min(getMin(st,2*si+1,sl,mid,l,r),getMin(st,2*si+2,mid+1,sr,l,r));

    }

    void update(int st[],int si,int sl,int sr,int pos,int diff) {

        if(pos<sl||pos>sr) {
            return ;
        }

       if(sr==sl) {
        st[si]=diff;
       }

       else {

            int mid=(sl+sr)/2;

            if(pos>=sl&&pos<=mid) {
                update(st,2*si+1,sl,mid,pos,diff);
            }

            else {
                update(st,2*si+2,mid+1,sr,pos,diff);
            }

            st[si]=min(st[2*si+1],st[2*si+2]);

       }


    }


    void build(int st[],int si,int a[],int l,int r) {

        if(l==r) {
            st[si]=a[l];        //condition for leaf node
        }

        else {
            int mid=(l+r)/2;

            build(st,2*si+1,a,l,mid);       //building left child node
            build(st,2*si+2,a,mid+1,r);     //building right child node

            st[si]=min(st[2*si+1],st[2*si+2]);  
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

        //number of array_elements and the queries

        int a[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int st[4*n]; //segment tree, max_size cannot be more than 4*(number_of_leaf_nodes).

        build(st,0,a,0,n-1);       //building the segment tree.


        while(q--) {        //attempting queries.


           int h;
           cin>>h;

            if(h==1) {   //update query

                int pos,x;
                cin>>pos>>x;

                int diff=x; //calculating change occured.
                a[pos-1]=x;

                update(st,0,0,n-1,pos-1,diff);      //update_query called

            }   

            else {


                int l,r;
                cin>>l>>r;

                l--;        //indexing to 0-based.
                r--;

                int p=getMin(st,0,0,n-1,l,r);   //calling range_minimum_query.

                cout<<p<<endl;      //answer

            }


        }


        return 0;
    }