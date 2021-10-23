#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int primen(int n){
    int count=0, flag=0;
    for(int i=2;i>0;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0)
            {flag=1;
            break;}
        }
        if(flag==0){
            count++;
        }
        if(count==n){
            return i;
        }
    }
    return 0;
}
int main(){
   int n;
   cout<<"Enter the value of n:";
   cin>>n;
   cout<<"the nth prime number is "<<primen(n);
}
