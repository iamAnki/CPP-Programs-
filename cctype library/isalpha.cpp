//program to test isaplha() 
#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    string str="arun@123"; // 4 alphabets 
    int count=0;
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])) //to check if it is aplha
            count++;
    }
    cout<<"Count: "<<count; // will return 4
    return 0;
}