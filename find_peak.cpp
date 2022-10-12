#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<vi> vii;
typedef deque<int> dqi;
typedef queue<int> qi;
typedef priority_queue<int> pqi;

#define ll long long int
#define ld long double
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (ll)((x).size())
#define fr first
#define sc second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define in(x) cin >> x
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define no "NO" << endl
#define yes "YES" << endl
#define speed                   \
    cin.sync_with_stdio(false); \
    cin.tie(NULL);              \
    cout.tie(NULL);

int npower(int x, int n)
{
    int res = 1;
    while (n)
    {
        if (n % 2)
            res = (res * x);
        n /= 2;
        x = (x * x);
    }
    return res;
}
int binarySearch(vi arr, int low,
                 int high, int key)
{
    if (high < low)
        return -1;

    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);

    // else
    return binarySearch(arr, low, (mid - 1), key);
}
int modpow(int x, int n, int M)
{
    x = x % M;
    int res = 1;
    while (n)
    {
        if (n % 2)
        {
            res = (res * x) % M;
        }
        n /= 2;
        x = (x * x) % M;
    }
    return res;
}
int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

int peak(int l, int r, vi &vec)
{
    if (r < l)
        return -1;
    if (r == l)
        return l;
    int mid = l + (r - l) / 2;
    if (mid > l and vec[mid] < vec[mid - 1])
        return mid - 1;
    if (mid < r and vec[mid] > vec[mid + 1])
        return mid;

    if (vec[mid] < vec[l])
        return peak(l, mid - 1, vec);

    return peak(mid + 1, r, vec);
}

void solve()
{
    int n;
    cin >> n;
    vi vec(n);
    rep(i, 0, n) { cin >> vec[i]; }
    int b;
    cin >> b;
    int index = peak(0, n - 1, vec);
    cout << index << " ";
    if (vec[index] == b)
        cout << index << endl;

    else if (b >= vec[0])
    {
        cout << binarySearch(vec, 0, index - 1, b) << endl;
    }

    else
    {
        cout << binarySearch(vec, index + 1, n - 1, b) << endl;
    }
}
int main()
{
    speed;
   // tc 
   { solve(); }
    cout << endl;
    return 0;
}