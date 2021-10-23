#include<iostream>
using namespace std;
int main(){
    int n,test;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>test;
        if(test==1) {
            cout<<"HARD";
            break;
        }
        if(i==n-1)
        cout<<"EASY";
    }
    
    return 0;
}