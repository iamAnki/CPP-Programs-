#include <iostream>

using namespace std;
int main()
{
    long long int n, sum = 0;
    cin >> n;
    if (n % 2 != 0)
        sum += ((-1) * n) + ((n - 1) / 2);
    else
        sum += n / 2;
    cout<<sum;
    return 0;
}