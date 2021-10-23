#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, a = 1;
    cin >> k >> r;
    while (1)
    {
        if (((k * a) - r) % 10 == 0 || (k * a) % 10 == 0)
        {
            cout << a;
            break;
        }
        a++;
    }
    return 0;
}