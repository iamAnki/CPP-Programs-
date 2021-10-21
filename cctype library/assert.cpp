//assert example 
#include<iostream>
#include<assert.h>
using namespace std;

void check_assert(int *temp){
    assert(temp!=NULL); 
    cout<<*temp<<endl;
}

int main(){
    int a=5;
    int *b=&a,*c=NULL;
    check_assert(b);
    check_assert(c);
    //after the above statement assert will stop the program
    //and show exact line file and condition where error occured
    return 0;
}