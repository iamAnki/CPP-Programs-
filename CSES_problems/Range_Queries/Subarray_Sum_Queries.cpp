    #include <bits/stdc++.h>
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
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
    #define left(i) (2*i+1)
    #define right(i) (2*i+2)
    #define parent(i) ((i-1)/2)
    
    using namespace std;


     struct node {

        int maxSumSub;
        int sum_of_all;
        int prefix;
        int suffix;
        node() {

        }
        node(int val) {
            maxSumSub=sum_of_all=prefix=suffix=val;
        }

    };

    template<class T>
    class SegmentTree {

    public:
        SegmentTree(vector<T> data,T value,T (*combine)(T o1, T o2));
        T query(int l,int r);
        void update(int idx,int val);

    private:
        T *tree;
        void buildTree(vector<T> data);
        int segTreeSize;
        T value_for_extra_nodes;
        T (*combine)(T x1,T x2);
        int calculate_size(int n);
        T queryHelper(int l,int r,int st,int ed,int node);


    };

    template<class T> SegmentTree<T>::SegmentTree(vector<T> data,T val,T (*combine)(T x1,T y1)) {
        this->combine=combine;
        value_for_extra_nodes=val;
        segTreeSize=calculate_size(data.size());
        buildTree(data);
    }

   template<class T> int SegmentTree<T>::calculate_size(int n) {
        int pow2=1;
        while(pow2<n) {
            pow2=pow2<<1;
        }
        return 2*pow2-1;
    }

    template<class T> T SegmentTree<T>::query(int l,int r) {
        int st=0,ed=segTreeSize/2;
        return queryHelper(l,r,st,ed,0);
    }

    template<class T> T SegmentTree<T>::queryHelper(int l,int r,int st,int end,int node) {

        if((r<st)||(l>end)||(l>r)) {
            return value_for_extra_nodes;
        }
        if(st>=l&&end<=r) {
            return tree[node];
        }

        T leftval=queryHelper(l,r,st,(st+end)/2,left(node));
        T rightval=queryHelper(l,r,(st+end)/2+1,end,right(node));

        return combine(leftval,rightval);
    }
  
    template<class T>  void SegmentTree<T>::buildTree(vector<T> data) {

        int n=data.size();
        tree = new T[segTreeSize];
        int extraNodes=(segTreeSize/2+1)-n;

        for(int i=segTreeSize-1;i>=0;i--) {


                if(extraNodes>0) {
                    tree[i]=value_for_extra_nodes;
                    extraNodes--;
                }

                else if(n>0) {
                    tree[i]=data[n-1];
                    n--;
                }

                else {
                    tree[i]=combine(tree[left(i)],tree[right(i)]);
                }
        }


    }


   template<class T> void SegmentTree<T>::update(int idx,int val) {

        int segTreeIdx=(segTreeSize/2)+idx;
        tree[segTreeIdx]=val;
        while(parent(segTreeIdx)>=0) {
            segTreeIdx=parent(segTreeIdx);
            if(right(segTreeIdx)<segTreeSize) {
                tree[segTreeIdx]=combine(tree[left(segTreeIdx)],tree[right(segTreeIdx)]);
            }
            if(segTreeIdx==0) {
                break;
            }
        }

    }

    node combine(node x,node y) {

        node *ptr=new node();
        ptr->maxSumSub=max(x.maxSumSub,y.maxSumSub);
        ptr->maxSumSub=max(ptr->maxSumSub,x.suffix+y.prefix);
        ptr->prefix=max(x.prefix,x.sum_of_all+y.prefix);
        ptr->suffix=max(y.suffix,x.suffix+y.sum_of_all);
        ptr->sum_of_all=x.sum_of_all+y.sum_of_all;

        return *ptr;
    }


    signed main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        fast_io;
        int n,q;
        cin>>n>>q;

        vector<node> v(n);

        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            v[i]=node(x);
        }

        node identityNode(0);
        SegmentTree<node> sg(v,identityNode,combine);

        while(q--) {
            int idx,x;
            cin>>idx>>x;
            idx--;
            sg.update(idx,x);
            node as=sg.query(0,n-1);
            cout<<as.maxSumSub<<endl;
        }



        return 0;
    }