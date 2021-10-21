#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, min = 0, sumend = 0;
    cin >> n;
    int inp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
        sum += inp[i];
    }
    sort(inp, inp + n);
    for (int i = n - 1; i >= 0; i--)
    {
        sumend += inp[i];
        if (sumend > sum - sumend)
        {
            min++;
            break;
        }
        else
        {
            min++;
        }
    }

    cout << min;

    return 0;
}