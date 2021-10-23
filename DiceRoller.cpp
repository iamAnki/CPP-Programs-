#include <iostream>

using namespace std;
int main() {
    int random, times;
    cout << "How many times do you want to spin? ";
    cin >> times;
    for(int i = 0; i < times; i++)
    {
        int random = rand() % 6 + 1;
        cout<<"Dice Rolled: "<<random<<"\n";
    }
    return random;
}
