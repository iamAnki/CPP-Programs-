// program to test islower() and isupper()
#include<iostream>
#include<ctype.h>  //this holds islower()
using namespace std;

int main(){
    string str="AxByCzD";
    cout<<"Lowercase letters: ";
    for(int i=0;i<str.length();i++){
        if(islower(str[i]))
            cout<<str[i];
    }
    cout<<"\nUppercase letters: ";
    for(int i=0;i<str.length();i++){
        if(isupper(str[i]))
            cout<<str[i];
    }
    return 0;
}