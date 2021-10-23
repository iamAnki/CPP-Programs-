#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0, d = 0, i = 0, j = 0;
    cin >> n;
    int a[n], N = n;
    for (int z = 0; z < n; z++)
    {
        cin >> a[z];
    }
    while (N >= 1)
    {

        if (a[j] > a[n - i - 1])
        {
            s += a[j];
            j++;
        }
        else
        {
            s += a[n - i - 1];
            i++;
        }
        if (N == 1)
            break;
        if (a[j] > a[n - i - 1])
        {
            d += a[j];
            j++;
        }
        else
        {
            d += a[n - i - 1];
            i++;
        }
        N -= 2;
    }
    cout << s << " " << d;

    return 0;
}