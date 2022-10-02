#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
	  int a,b,c,d,x;
	  cin>>a>>b>>c>>d;
	  //x=a+b+c;
x=d-c;
if(x>=b){
        x=x-b;
        if(x>=a){cout<<"1"<<endl;}
        else{cout<<"2"<<endl;}
}
else{
        x=d-b;
        if(x>=a){cout<<"2"<<endl;}
        else{cout<<"3"<<endl;}
}
	}	
	return 0;
}
