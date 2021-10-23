#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n], q[n];
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
        p[i] = q[i];
    }
    sort(q, q + n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (q[i] == p[j])
                cout << j + 1<<" ";
        }
    }

    return 0;
} 