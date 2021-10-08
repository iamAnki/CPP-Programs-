// The following program takes no. of string you want to sort 
// then arranges them according to Lexicographical order considering first letter of every input string


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter number of Strings you want to arrange Lexicographically: "<<endl;
    cin>>n;
    string str1[n], temp;

    cout << "Enter n words " << endl;
    for(int i = 0; i < n; i++)
    {
      cin >> str1[i];
    }


    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (str1[j-1] > str1[j]) {
                swap(str1[j-1],str1[j]);
            }
        }
    }

    cout << "The  lexicographical order is: " << endl;

    for(int i = 0; i < n; i++)
    {
       cout << str1[i] << endl;
    }
    return 0;
}