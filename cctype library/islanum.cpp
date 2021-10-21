//program to test isalnum() [AlphaNumeric]
#include<iostream>
#include<ctype.h> // this header stores isalnum() 
using namespace std;

int main(){
    string str="1a2bc3%!@#"; //there are 6 alpha numeric characters
    int count=0;
    for(int i=0;i<str.length();i++)
        if(isalnum(str[i])) count++;
    cout<<"count: "<<count; //6
    return 0;
}