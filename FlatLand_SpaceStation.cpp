#include <bits/stdc++.h>
using namespace std;
int flatlandSpaceStations(int n, vector<int> c)
{
    int ar[n], count{}, mini = INT32_MAX, x, z = INT32_MIN;
    
    for (int i = 0; i < n; i++)
    {
        mini = INT32_MAX;
        for (int j = 0; j < c.size(); j++)
        {
            x = abs(i - c[j]);
            mini = min(x, mini);
        }
        z=max(z,mini);
        
    }
    return z;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> c(m);
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    cout << flatlandSpaceStations(n, c);

    return 0;
}