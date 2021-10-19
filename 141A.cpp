#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a, b, c, con;
    cin >> a >> b >> c;
    a = a + b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    if (a == c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}