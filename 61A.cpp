#include <iostream>
using namespace std;
int main()
{

    string str1, str2, ans;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[i])
            ans.push_back('0');
        else
            ans.push_back('1');
    }
    cout << ans << endl;
    return 0;
}