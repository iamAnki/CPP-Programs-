#include<bits/stdc++.h>
using namespace std;
void backtrack(bitset<32> &bits,vector<int> &v,int k){
	if(k==0){
		v.push_back(bits.to_ulong());
		return;
	}
	backtrack(bits,v,k-1);
	bits.flip(k-1);
	backtrack(bits,v,k-1);
}
vector<int> greycode(int n){
	bitset<32> bits;
	vector<int> v;
	backtrack(bits,v,n);
	return v;
}
int main(){
	int n;
	cin>>n;
	vector<int>res=greycode(n);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}
