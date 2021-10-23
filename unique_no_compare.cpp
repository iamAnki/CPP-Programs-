// Comparing No with Very Unique method

#include<iostream>
using namespace std;

int main(){
    int x,y,a,b;
    cout<<"Enter Two no. to compare"<<endl;
    cin>>x>>y;
    a=(x^y);
    b=!(x^y);
    if(!(x^y)){
        cout<<"X is equal to Y"<<endl;
    }
    else{
        cout<<"X is not equal to Y"<<endl;
    }
    cout<<a<<"\n"<<b;
    return 0;
}