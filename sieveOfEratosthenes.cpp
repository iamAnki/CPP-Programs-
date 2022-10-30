#include <bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[i] = false;
            }
        }
    }

    //Print the prime numbers
    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    sieveOfEratosthenes(n); //This will print all the prime numbers from 1 to n inclusive
    return 0;
}