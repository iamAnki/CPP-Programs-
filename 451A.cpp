#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    r = min(r, c);
    if (r % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}