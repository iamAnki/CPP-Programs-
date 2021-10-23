#include <bits/stdc++.h>
#include <string>

using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    string inp;
    cin >> inp;
    for (int i = 0; i < n; i++)
    {
        if (inp[i] >= 65 && inp[i] <= 90)
        {
            inp[i] += 32;
        }
    }
    sort(inp.begin(), inp.end());
    for (int i = 0; i < n-1; i++)
    {
        if(inp[i]!=inp[i+1])
        flag++;
    }
    if(flag==25)
    cout<<"YES";
    else cout<<"NO";
    return 0;
}