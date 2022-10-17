#include <iostream>
using namespace std;

void optim(int x, int y, int n, int r, int s, int e){
    int i=(s+e)/2;
    int j=i+1;
    // cout<<"check0"<<endl;
    if( (((y*i) + (x*(n-i)))<=r)  && ((y*j)+x*(n-j))>r){
       cout<<(n-i)<<" "<<i<<endl;
	   return;
    }
    cout<<"check1"<<endl;
    if( (((y*i) + (x*(n-i)))<=r) && i==n){
       cout<<(n-i)<<" "<<i<<endl;
       cout<<"check2"<<endl;
	   return;
    }

    if( (((y*i) + (x*(n-i)))<=r) && i<n){
        optim(x,y,n,r,i+1,e);
    }

    if(((y*i)+x*(n-i)>r)){
        optim(x,y,n,r,s,i-1);
        // cout<<"check2"<<endl;
    }

}


int main() {
	// your code goes here
	int t;
    cin>>t;
	while (t--){
	   int x,y,n,r;
	   cin>>x>>y>>n>>r;
	   if(r<(n*x)){
	        cout<<-1<<endl;
	    }
	    else optim(x,y,n,r,0,n+2);
	}
	return 0;
}
