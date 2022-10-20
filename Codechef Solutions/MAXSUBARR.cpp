#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<bool> vb;
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define mod 1000000007
#define mod1 998244353

void solve(){
	int n;
	cin>>n;
	vll a(n);
	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	vll b(m);
	for(int i=0 ; i<m ; i++){
		cin>>b[i];
	}

	// Kadane's Algorithm

	ll cur=0,max_till=-1e9;
	for(int i=0 ; i<n ; i++){
		cur+=a[i];
		if(max_till<cur){
			max_till=cur;
		}
		if(cur<0){
			cur=0;
		}
	}
	for(int i=0 ; i<m ; i++){
		if(b[i]>0){
			max_till+=b[i];
		}
	}
	cout<<max_till<<"\n";
}
 
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}