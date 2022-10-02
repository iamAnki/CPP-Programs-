#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
	  int b,c,x;
	  cin>>b>>c;
	  x=gcd(b,c);
	        //cout<<x<<endl;; 
	  int a;
	  a=c/x;
	  cout<<a<<endl;
	}
	return 0;
}
