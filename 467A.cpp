#include<iostream>
using namespace std;

int main(){

    int n,p,q,t=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>p>>q;
        if(q-p>=2) t++;
    }
    cout<<t;
    return 0;
}