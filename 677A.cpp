#include<iostream>
using namespace std;
int main(){

    int n,h,r=0;
    cin>>n>>h;
    int hp;

    for(int i=0;i<n;i++){
        cin>>hp;
        if(hp<=h) r++;
        else r+=2;
    }
    cout<<r;

    return 0;
}