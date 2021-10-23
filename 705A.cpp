#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    if(n==1)
    cout<<"I hate it";
    else{
        while(n>=1){
            if(n==1){
                cout<<"I hate it";
                n--;
            }
            if(n>1){
                cout<<"I hate that ";
                n--;
            }
            if(n==1){
                cout<<"I love it";
                n--;
            }
            if(n>1){
                cout<<"I love that ";
                n--;
            }
        }
    }

    return 0;

}