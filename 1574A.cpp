#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
               for (int r = 1; r <= n; r++)
        {

            for (int c = 0; c < 2 * r; c++)
            {

                if (c < r)
                    cout << '(';
                else
                    cout << ')';
            }
            for (int c = 0; c < n - r; c++)
            {
                cout << '(' << ')';
            }

            cout << endl;
        }
    }
    return 0;
}