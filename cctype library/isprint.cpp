//program to test isprint()
#include<iostream>
#include<ctype.h> //this holds isprint()
using namespace std;

/*this is opposite to iscntrl()
this only returns true if this 
character can be printed.
#Note: space or ' ' is a printable character*/

int main(){
    string str="abc\tdef\nghi   jkl"; // \t \n are not printable 
    int count=0;
    cout<<"Size: "<<str.length()<<endl
        <<"Without isprint: ";
    for(int i=0;i<str.length();i++) 
        cout<<str[i];
    cout<<"\nWith isprint: ";
    for(int i=0;i<str.length();i++)
        if(isprint(str[i])) 
        cout<<str[i];
    return 0;
}