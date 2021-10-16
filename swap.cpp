#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to Swap two numbers without using a 3rd variable ===== \n\n";

    // variable declaration
    int a,b;

    //taking input from the command line (user)
    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;

    cout << "\n\nValues Before Swapping:  \n"<<endl;
    cout << "First Number = " << a <<endl;
    cout << "Second Number = " << b <<endl;

    // Logic for swapping the two numbers 
    // without using any extra variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\n\nValues After Swapping:  \n"<<endl;

    cout << "First Number = " << a <<endl;
    cout << "Second Number = " << b <<endl;
    cout << "\n\n\n";

    return 0;
}
