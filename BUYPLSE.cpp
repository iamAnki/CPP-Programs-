#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	if(a>=1 && a<=1000 && b>=1 && b<=1000 && x>=1 && x<=1000 && y>=1 && y<=1000){
	int cost;
	cost=(a*x+b*y);
	cout<<cost<<endl;
	}
	

	return 0;
}
