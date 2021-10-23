#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        if (v1 % v2 == 0)
        {
            cout << 0 << endl;
        }
        else
        cout << v2 - (v1 % v2) << endl;
    }

    return 0;
}