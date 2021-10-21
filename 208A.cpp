#include <iostream>
using namespace std;
int main()
{
    int start,temp, first, k = 0;
    string s, news = "";
    cin >> s;
    for (int i = 0; i <= s.length() -1; i++)
    {
         temp=i;
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {

            start = 1;
           
            i += 2;

        }
        else
        {

            if (start && news != "")
            {
                news += " ";
            }

            start = 0;
            news += s[temp];
        }
    }
    cout << news;

    return 0;
}