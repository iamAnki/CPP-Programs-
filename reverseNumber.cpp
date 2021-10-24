// Program to display reverse of a positive integer.
#include <iostream>

using namespace std;

int main()
{
    int num, n, reverse = 0;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if(num < 0)
    {
        printf("Invalid positive integer. Please try again with positive integer.");
        return 0;
    }
    
    n = num;

    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    
    cout << "Reverse of "<<n<<" is " << reverse;
    return 0;
}
 