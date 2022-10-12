// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;int s=0;
    for(int i=0;i<n;i++){
        if(n%i==0)
        s++;
    }
    if(s>1)
    cout<<"Prime";
    else
    cout<<"Not";
    return 0;
}
