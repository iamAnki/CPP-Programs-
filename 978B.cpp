#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int min = 0, flag = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'x' && s[i + 1] == 'x')
        {
            if (flag == 1)
            {
                min++;
            }
            flag = 1;
        }
        else
            flag = 0;
    }
    cout << min;

    return 0;
}