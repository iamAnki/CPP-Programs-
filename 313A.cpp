#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k;
    cin >> k;
    int lastdig = k % 10, last2dig = (k % 100) / 10;
    if (k >= 0)
        cout << k;
    else
    {
        k = k * -1;
        if (((k / 100) * 10) - lastdig < ((k / 100) * 10) - last2dig)
        cout << (((k / 100) * 10) - lastdig) * (-1);
        else
            cout << (((k / 100) * 10) - last2dig) * (-1);
    }
    return 0;
}