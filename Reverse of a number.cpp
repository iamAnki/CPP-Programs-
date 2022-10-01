#include<iostream.h> 
using namespace std;
int main() {
    int a = 1223;
    int res = 0;
    while(a!=0){
        int dig = a%10;
        res = res*10 + dig;
        a =a/10;
    }
    cout<<res;
    return 0;
}
