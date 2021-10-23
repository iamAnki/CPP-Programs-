#include <bits/stdc++.h>
using namespace std;
long long int maxi(long long int x, long long int y)
{
    if (x >= y)
        return x;
    else
        return y;
}
int main()
{
    long long int n, old, newv, k = 1, max = 1;
    cin >> n >> old;
    for (long long int i = 0; i < n - 1; i++)
    {
        cin >> newv;
        if (newv >= old)
            k++;
        else
        {
            max = maxi(k, max);
            k = 1;
            
        }
        old = newv;
        if(i==n-2&&k>max){
            max=k;
        }
    }
    cout << max;
    return 0;
}