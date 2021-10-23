//🎃🎃🎃😎😎😁🤓☣☣☣☣☣dark_coder☣☣☣☣☣😎😎😁🤓🎃🎃🎃
#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define li long long int
int main()
{
    IOS
        vector<int>
            x, t1, t2, t3;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.push_back(t);
        if (t == 1)
            t1.push_back(i + 1);
        else if (t == 2)
            t2.push_back(i + 1);
        else
            t3.push_back(i + 1);
    }

    int m = min(t1.size(), min(t2.size(), t3.size()));
    if (m < 0)
        cout << 0;
    else
    {
        cout << m << endl;
        for (int i = 0; i < m; i++)
        {
            cout << t1[i] << " " << t2[i] << " " << t3[i] << endl;
        }
    }
    return 0;
}