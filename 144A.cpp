#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = 0, im = 0, in = 0, min = 100, temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > max)
        {
            max = temp;
            im = i;
        }
        if (temp <= min)
        {
            min = temp;
            in = i;
        }
    }
    if (im < in)
        cout << im + n - in - 1;
    if (im > in)
        cout << im + n - in - 2;
    return 0;
}