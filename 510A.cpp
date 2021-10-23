#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    for (int r = 0; r < row; r++)
    {
        if (r % 4 == 0 || r % 4 == 2)
        {
            for (int c = 0; c < col; c++)
            {
                cout << "#";
                if (c == col - 1)
                    cout << endl;
            }
        }
        else if (r % 4 == 1)
        {
            for (int c = 0; c < col; c++)
            {
                if (c != col - 1)
                    cout << ".";
                else
                    cout << "#" << endl;
            }
        }
        else
        {
            for (int c = 0; c < col; c++)
            {
                if (c == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
                if (c == col - 1)
                    cout << endl;
            }
        }
    }

    return 0;
}