#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int count = 0;
    string s;
    cout<<"enter your string and get the number of vowels ";
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {count+=1;
        }
    }
    cout<<count<<endl;

    return 0;
}
