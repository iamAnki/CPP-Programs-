// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int temp;
    int m=0;
    while(n){
        temp=n%10;
        m+=temp;
        n/=10;
    }
        cout<<m;
    return 0;
}
