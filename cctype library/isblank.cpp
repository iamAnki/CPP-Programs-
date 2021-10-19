//program to test isblank()
#include<iostream>
#include<ctype.h> //this holds isblank()
using namespace std;

int main(){
    string str="abc def ghi jkl";
    for(int i=0;i<str.length();i++){
        if(isblank(str[i]))  //if blank space is encountered go to newline
            cout<<"\n";
        else
            cout<< str[i]; //else we print the element
    }
    return 0;
}