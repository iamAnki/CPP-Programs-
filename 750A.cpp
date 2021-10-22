#include <iostream>
using namespace std;
int main()
{
    int n, k, q = 0;
    cin >> n >> k;
    int tl = 240 - k;
    int time = tl;
    while (tl >= 5 * (q + 1))
    {
        if (q < n)
        {
            tl = tl - 5 * q;
            q++;
        }
        else
        {
            break;
        }
    }
    if ((5*q * (q + 1)) / 2 > time)
        cout << q - 1;
    else
        cout << q;
    return 0;
}