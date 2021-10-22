// Input :50
// Output : 3041409320171337804361260816606476884-
//          4377641568960512000000000000

// factorial(n) -- Algo
// 1) Create an array ‘res[]’ of MAX size where MAX is number of maximum digits in output. 
// 2) Initialize value stored in ‘res[]’ as 1 and initialize ‘res_size’ (size of ‘res[]’) as 1. 
// 3) Do following for all numbers from x = 2 to n. 
// ……a) Multiply x with res[] and update res[] and res_size to store the multiplication result.

// How to multiply a number ‘x’ with the number stored in res[]? 
// The idea is to use simple school mathematics. We one by one multiply x with every digit of res[]. The important point to note here is digits are multiplied from rightmost digit to leftmost digit. If we store digits in same order in res[], then it becomes difficult to update res[] without extra space. That is why res[] is maintained in reverse way, i.e., digits from right to left are stored.

// multiply(res[], x) 
// 1) Initialize carry as 0. 
// 2) Do following for i = 0 to res_size – 1 
// ….a) Find value of res[i] * x + carry. Let this value be prod. 
// ….b) Update res[i] by storing last digit of prod in it. 
// ….c) Update carry by storing remaining digits in carry. 
// 3) Put all digits of carry in res[] and increase res_size by number of digits in carry.



// ======== CPP Implementation of Above Algo ===========
#include<iostream>
using namespace std;
 
// Maximum number of digits in output
#define MAX 500
 
int multiply(int x, int res[], int res_size);
 
// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
    int res[MAX];
 
    // Initialize result
    res[0] = 1;
    int res_size = 1;
 
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
    cout << "Factorial of given number is \n";
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}
 
// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry
 
    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
 
        // Store last digit of 'prod' in res[] 
        res[i] = prod % 10; 
 
        // Put rest in carry
        carry  = prod/10;   
    }
 
    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
 
// Driver program
int main()
{
    factorial(100);
    return 0;
}
