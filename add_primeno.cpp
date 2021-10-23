// Creating the code which can add all 1 to derived no. prime numbers sum.

#include<iostream>
using namespace std;

int main(){
    int A,B,i,f,sum;
    sum=B=0;
    cin>>A;
    for(int i=A;i>0;i--){
        for(int f=i-1;f>1;f--){
            // cout<<f<<endl;
            if(i%f==0){
                B=1;
                break;
            }
        }
        if(B==0){
            cout<<i<<" ";
            sum=sum+i;
        }
        B=0;
    }
    if(A>=1){
        sum=sum;
    }
    cout<<endl<<"Some of all Primary No."<<sum<<endl;
    return 0;
}