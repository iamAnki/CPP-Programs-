/*We will take a 2d array dp[n+1][w+1]
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define vl vector<ll>
#define pb push_back
#define f(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >= b; --i)
#define print(x) cout << x << endl
#define endl '\n'
#define F first
#define S second
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define to(n) to_string(n)
#define low(v, n) lower_bound(v.begin(), v.end(), n) - v.begin()
#define upp(v, n) upper_bound(v.begin(), v.end(), n) - v.begin()
#define mod 1000000007
#define mex 100005
ll dp[105][1005];

ll knapsack(ll weight[], ll value[], ll W, ll n)
{
    f(i, 0, n + 1)
    {
        f(j, 0, W + 1)
        {
            if (i == 0 || j == 0) //base condition
            {
                dp[i][j] = 0;
            }
            else
            {

                if (weight[i - 1] > j)
                {
                    dp[i][j] = dp[i - 1][j]; //skipping the element as its weight is more
                }
                else
                {

                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i - 1]] + value[i - 1]);
                }
            }
        }
    }

    return dp[n][W];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, W;
    cin >> n >> W;
    ll value[n];
    ll weight[n];
    f(i, 0, n)
    {
        cin >> value[i];
    }
    f(i, 0, n)
    {
        cin >> weight[i];
    }

    print(knapsack(weight, value, W, n));
    return 0;
}