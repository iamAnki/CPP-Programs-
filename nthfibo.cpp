#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=1;
    int c,n;
    cout<<"Enter the n value:";
    cin>>n;
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;b=c;
    }
    cout<<c;
}
