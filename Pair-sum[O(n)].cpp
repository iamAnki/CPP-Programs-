/* O(n) operation using unordered_map or unordered set*/
#include<bits/stdc++.h>
#define ll long long int
#define mod 1e9
#define endl "\n"
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int number;
	cin>>number;
	unordered_map<int,bool>check;
	vector<pair<int,int>>p;
	for(int i=0;i<n;i++)
	{
		int diff=number-arr[i];
		if(check[diff]==true){
			p.push_back(make_pair(arr[i],diff));
			break;
		}
		else{
			check[arr[i]]=true;
		}
	}
	for(auto i:p){
		cout<<i.first<<" "<<i.second<<endl;
	}
}
