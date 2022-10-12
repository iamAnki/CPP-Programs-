// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int temp;
    int m;
    while(n){
        temp=n%10;
        m=m*10+temp;
        n/=10;
    }
    if(m==n){
        cout<<"yes"
    }

    return 0;
}
