#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

void check(int ind, int &n, int &x, vector<int> &v, bool &flag){
    if (flag==true){
        return;
    }
    if(ind==n){
        int sum=0;
        int g=0;
        for(int i=0; i<n; i++){
            g=gcd(g,v[i]);
            sum=sum+g;
        }
        //   if(ind==n){
        //         for(auto it : v){cout<<it<<" ";}
        //         cout<<endl;
        //         cout<<"sum: "<<sum<<endl;
        //     }
        if(sum==x){
            flag=true;
            // cout<<"check "<<x<<" "<<sum<<endl;
            // for(auto it : v){
            // cout<<it<<" ";
            // }
            // cout<<endl;
            // return true;
        }
    
        
    }

    for(int i=ind; i<n; i++){
        swap(v[ind],v[i]);
        check(ind+1, n, x, v, flag);
        swap(v[ind],v[i]);
    }
    return;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int> v;
	    for(int i=1; i<=n; i++){
	        v.push_back(i);
	    }
	    bool flag = false;
	   // int g=1;
	   check(0,n,x,v,flag);
	    if(flag==false){
	        cout<<-1<<endl;
	    }
	    else {
	        for(auto it : v){
            cout<<it<<" ";
            }
            cout<<endl;
	    }
	}
	return 0;
}
