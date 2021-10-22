/*
Problem Statement:
Give two integer num1,num2, write a function to return MAX_Number if num1 is maximum,
return num1. else if num2 is greater, return num2
*/

/// Returns 'MAX_Number' if one is max than other

#include <iostream>
using namespace std;

int returnMax(int x,int y);

int main()
{
    int num1,num2;
    cout<<"Enter 1st Number\n";
    cin>>num1;
    cout<<"Enter 2nd Number\n";
    cin>>num2;
    
    int max=returnMax(num1,num2);
    cout<<"Maximum of two is  "<<max;
}
int returnMax(int x,int y) {
    if(x>y){
    return x;
    }
    else if(y>x){
        return y;
    }
    else{
        return -1;
    }
}
