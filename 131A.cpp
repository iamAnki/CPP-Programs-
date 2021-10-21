#include <iostream>
using namespace std;

int main()
{
    string temp, s;
    cin >> s;
    int iscapi = 1;
    if (s.length() == 1&&s[0] >= 'a' && s[0] <= 'z')
    {
            s[0] -= 32;
    }
    else
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                iscapi = 0;
                break;
            }
        }
        if (iscapi)
        {
            if (s[0] >= 'a' && s[0] <= 'z')
            {
                s[0] -= 32;
            }
            else
            {
                s[0] += 32;
            }

            for (int i = 1; i < s.length(); i++)
            {
                s[i] += 32;
            }
        }
    }
    cout << s;
    return 0;
}