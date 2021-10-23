#include <bits/stdc++.h>
using namespace std;
int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}
int main()
{
    int n, m, diff, mn = 1000;
    cin >> n >> m;
    int f[m];
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    for (int i = 0; i <= m - n; i++)
    {
        diff = f[i + n-1] - f[i];
        mn = min(diff, mn);
    }
    cout<<mn;

    return 0;
}