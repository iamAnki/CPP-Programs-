// Link for question -> https://www.hackerrank.com/challenges/utopian-tree/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t, height = 1;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++)
    {

        if (arr[i] != 0)
        {
            for (int j = 1; j <= arr[i]; j++)
            {
                if (j % 2 == 1)
                {
                    height = height * 2;
                }
                else if (j % 2 == 0)
                {
                    height = height + 1;
                }
            }

            cout << height << endl;
            height = 1;
        }
        else
        {
            cout << height << endl;
        }
    }

    return 0;
}
