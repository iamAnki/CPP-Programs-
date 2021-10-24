#include <bits/stdc++.h>
using namespace std;

int maximum_xor(int arr[], int n)
{

    int Max_XOR = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            Max_XOR = max(Max_XOR, arr[i] ^ arr[j]);
        }
    }
    return Max_XOR;
}

int main()
{

    int num[] = {7, 10, 32, 1, 67, 43, 120};
    int n = sizeof(num) / sizeof(num[0]);

    cout << maximum_xor(num, n) << endl;
    return 0;
}