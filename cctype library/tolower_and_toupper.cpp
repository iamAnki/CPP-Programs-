//program to test tolower() and toupper()
#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string str="abcD",str2="ABCd";
    for(int i=0;i<str.length();i++){
        char temp=toupper(str[i]);
        cout<<temp;
    }
    cout<<endl;
    for(int i=0;i<str2.length();i++){
        char temp=tolower(str2[i]);
        cout<<temp;
    }
    return 0;
}