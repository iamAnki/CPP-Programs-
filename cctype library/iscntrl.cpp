//program to test iscntrl()
#include<iostream>
#include<ctype.h> //this holds iscntrl()
using namespace std;

//Note: a escape/control sequence is considered a single character by compiler

int main(){
    string str="abc\ndef\nghi\njkl"; 
    cout<<"size of array: "<<str.length()<<endl;
    for(int i=0;i<str.length();i++){
        if(iscntrl(str[i]))
            cout<<" $ "; //if a control sequence is enountered a dollar will be printed in that place
        else
            cout<<str[i];
    }
    return 0;
}