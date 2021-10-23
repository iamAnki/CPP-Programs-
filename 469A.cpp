#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x;
    int lvl[n] = {0};
    for (int i = 0; i < x; i++)
    {
        int ind;
        cin >> ind;
        lvl[ind-1] = 1;
    }
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int ind2;
        cin >> ind2;
        lvl[ind2-1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (lvl[i] == 0)
        {
            cout << "Oh, my keyboard!";
            break;
        }
        if (i == n - 1)
        {
            cout << "I become the guy.";
        }
    }

    return 0;
}