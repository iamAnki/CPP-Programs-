#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

#define ff(i, a, b) for (int i = int(a); i < int(b); i++)
#define ffn(i, n) ff(i, 0, n)

struct segTree
{
    int size;
    ll null = 0;
    vector<long long> sums;

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        sums.assign(2 * size, 0 * 1ll);
    }

    ll merge(ll a, ll b)
    {
        return a + b;
    }

    void build(vl a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)a.size())
                sums[x] = a[lx];
            return;
        }

        int mid = lx + (rx - lx) / 2;
        build(a, 2 * x + 1, lx, mid);
        build(a, 2 * x + 2, mid, rx);
        sums[x] = merge(sums[2 * x + 1], sums[2 * x + 2]);
    }

    void build(vl a)
    {
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            sums[x] = v;
            return;
        }

        int mid = lx + (rx - lx) / 2;
        if (i < mid)
            set(i, v, 2 * x + 1, lx, mid);
        else
            set(i, v, 2 * x + 2, mid, rx);
        sums[x] = merge(sums[2 * x + 1], sums[2 * x + 2]);
    }

    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }

    ll rSum(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)
            return null;
        if (lx >= l && rx <= r)
            return sums[x];

        int mid = lx + (rx - lx) / 2;
        ll s1 = rSum(l, r, 2 * x + 1, lx, mid);
        ll s2 = rSum(l, r, 2 * x + 2, mid, rx);
        return merge(s1, s2);
    }

    ll rSum(int l, int r)
    {
        return rSum(l, r, 0, 0, size);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    segTree st;
    st.init(n);

    ffn(i, n)
    {
        int v;
        cin >> v;
        st.set(i, v);
    }

    ffn(i, m)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << st.rSum(l, r) << "\n";
        }
    }
    return 0;
}
