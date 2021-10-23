#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, sum = 0, kn = 0;
        cin >> n >> k;
        int a[n], b[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        sort(a, a + n);
        sort(b, b + n);
        for (int j = 0; j < n; j++)
        {
            if (a[j] <= b[n -1- j]&&kn<k)
                kn++;
            else
                break;
        }
        
        for (int j = kn ; j < n; j++)
        {
            sum += a[j];
        }
        for (int j = n - kn ; j < n; j++)
        {
            sum += b[j];
        }
        cout<<sum<<endl;
    }
    

    return 0;
}