#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    int sum_num = 0, num;

    while (getline(cin, str1)) {
        for (int i = 0; i < (int)str1.size(); i++) {
            if (isdigit(str1[i])) continue;
            else {
                str1[i] = ' ';
            }
        }

        stringstream abc(str1);
        while (abc >> num) {
            sum_num += num;
        }
    }
    cout << "Sum of all integers from given string: " << sum_num << endl;
    return 0;
}
