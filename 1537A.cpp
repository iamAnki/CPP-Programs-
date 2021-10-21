#include <iostream>
#include <bits/stdc++.h>

void solve(){
  int t;
  cin>>t;
  while(t--){
    int n,sum=0,temp;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>temp;
      sum+=temp;
    }
 
    if(sum==n){
      cout<<0<<br;
    }else if(sum<n){
      cout<<1<<br;
    }else{
      for (int i = 0; i < sum; i++) {
        if(sum==n+i){
          cout<<i<<br;
        }
      }
    }
 
 
 
  }
 
}
 
int main() {
	solve();
	return 0;
}
