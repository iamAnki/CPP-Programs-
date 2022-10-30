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
	ll n,k;
	cin>>n>>k;
	for(int i=1 ; i<=k ; i++){
		if(n>=i){
			n-=i;
		}
		else{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
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