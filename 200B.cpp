#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    double netj,frac;
    for(int i=0;i<n;i++){
        cin>>frac;
        netj+=frac;
    }
    cout<<(double)(netj/n);

    return 0;

}