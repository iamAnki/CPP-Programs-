#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Insert number to check: ";
    cin >> x;
    if(x%2==0)
    {
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
    return 1;
}