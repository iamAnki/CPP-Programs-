#include <bits/stdc++.h>
using namespace std;
int flag(string a, int n)
{
    if (a[n] == a[n + 1] && a[n] == a[n + 2] && a[n] == a[n + 3] && a[n] == a[n + 4] && a[n] == a[n + 5] && a[n] == a[n + 6])
        return 1;
    else
        return 0;
}
int main()
{
    string s;
    cin >> s;
    if (s.length() >= 7)
    {
        for (int i = 0; i <= s.length() - 6; i++)
        {
            if (flag(s, i))
            {
                cout << "YES";
                break;
            }
            else
            {
                if (i == s.length() - 6)
                {
                    cout << "NO";
                }
            }
        }
    }
    else
        cout << "NO";
    return 0;
}