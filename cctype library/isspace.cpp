//program to test isspace()
#include<iostream>
#include<cctype>
using namespace std;

//space characters: \n \t \v \f \r ' '

int main(){
    string str="abc\tdef ghi\n";
    for(int i=0;i<str.length();i++){
        if(isspace(str[i]))
            cout<<"$";
        else    
            cout<<str[i];
    }
    return 0;
}