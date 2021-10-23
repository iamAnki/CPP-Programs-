//program to test ispunct()
#include<iostream>
#include<ctype.h>
using namespace std;

/*all the characters except alphanumberics and
escape sequences are punctuation characters*/

int main(){
    string str="abc!@#$%^&*()_+{}|:<>?-=[]'',./123"; //between abc and 123 all are punctuation characters
    for(int i=0;i<str.length();i++){
        if(ispunct(str[i]))
            cout<<"$";
        else
            cout<<str[i];
    }
    return 0;
}