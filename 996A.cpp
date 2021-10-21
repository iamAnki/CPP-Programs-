#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n, ans = 0;
    cin >> n;
    if (n >= 100)
    {
        ans = ans + (n / 100);
        n %= 100;
    }
    if (n >= 20)
    {
        ans = ans + (n / 20);
        n %= 20;
    }
    if (n >= 10)
    {
        ans = ans + (n / 10);
        n %= 10;
    }
    if (n >= 5)
    {
        ans = ans + (n / 5);
        n %= 5;
    }
    if (n >= 1)
    {
        ans = ans + (n / 1);
        n %= 1;
    }
    cout<<ans;
    return 0;
}