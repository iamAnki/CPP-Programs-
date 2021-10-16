#include<bits/stdc++.h>
using namespace std;

bool check_prime(int m){
    for(int j=2; (j*j)<=m; j++){
        if(m%j==0){
            return false;
        }
    }
    return true;
}

int calc_primes(int n){
    if(n<2){
        return 0;
    }
    int ans=0;
    for(int i=2; i<=n; i++){
        if(check_prime(i)){
            ans++;
        }
    }
    return ans;
}

int main(){
    cout<<"Enter a number: ";
    int n; //Value of n till we want to get all primes
    cin>>n;
    cout<<"Number of primes till "<<n<<" is/are: "<<calc_primes(n)<<endl;
}
