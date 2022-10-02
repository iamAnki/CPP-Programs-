#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t{};
	cin >> t;
	while(t--){
	    ll n{};
	    cin >> n;
	    vector<ll> arr;
	    map<ll,ll> mapi;
	    for(ll i{0}; i<n; ++i){
	        ll num{};
	        cin >> num;
	        mapi[num]++;
	        arr.push_back(num);
	    }
	    ll maxi{};
	    for(auto val : mapi){
	        maxi = max(val.second,maxi);
	    }
	    if(maxi > (n+1)/2){
	        cout << "No" << endl;
	    }
	    else{
	        cout << "Yes" << endl;
	    }
	}
	return 0;
}
