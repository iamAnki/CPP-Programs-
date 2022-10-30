#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	t++;
	while(--t){
	    int x,y,n,r;
	   // cout<<t<<" :"<<endl;
	    cin>>x>>y>>n>>r;
	    if(r<(n*x)){
	        cout<<-1<<endl;
	        continue;
	    }
	    for(int i=n; i>=0; i--){
	        if(((y*i)+x*(n-i))<=r){
	            cout<<(n-i)<<" "<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
