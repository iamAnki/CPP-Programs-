#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int a= x-1;
	    int b=100-x;
	    if(a<b){
	        cout<<"LEFT"<<endl;
	    }
	    else if(a>b){
	        cout<<"RIGHT"<<endl;
	    }
	}
	return 0;
}
