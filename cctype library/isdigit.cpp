//program to test isdigit()
#include<iostream>
#include<ctype.h> //this holds isdigit()
using namespace std;

int main(){
    string str="2002abcd";
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i]))
            cout<<str[i];
    }
    return 0;
}