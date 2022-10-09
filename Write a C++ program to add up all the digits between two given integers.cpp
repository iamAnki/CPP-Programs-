#include <iostream>

using namespace std;
int test(int x, int y)
{
    int digit_sum = 0;
    for(int i = x; i <= y; ++i)
    {
        int p = i;
        while(p > 0)
        {
            digit_sum += p % 10;
            p /= 10;
        }
    }
    return digit_sum;
}

int main() {
   //int n1 = 5;
   //int n2 = 9;
   //int n1 = 12;
   //int n2 = 18;
   int n1 = 39;
   int n2 = 41;
   cout << "Add up all the digits between " << n1 << " and " << n2 << " is: ";
   cout << test(n1, n2) << endl;
}
