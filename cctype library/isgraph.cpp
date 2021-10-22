//program to test isgraph()
#include<iostream>
#include<ctype.h> //this holds isgraph()
using namespace std;

/*Note: here graph is short for graphical 
all those characters which cannot be 
showed graphically on a screen are discarded
by isgraph() like ' ',\t etc*/

int main(){
    string str="abc\t123 !@#    <.>";
    cout<<"Without isgrpah(): ";
    for(int i=0;i<str.length();i++)
        cout<<str[i];
    cout<<"\nWith isgraph(): ";    
    for(int i=0;i<str.length();i++){
        if(isgraph(str[i]))
            cout<<str[i];
    }
    return 0;
}