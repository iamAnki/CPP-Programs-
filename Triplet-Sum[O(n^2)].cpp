/* Triplet sum technique using unordered set/map */
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>tripletSum(int *arr,int n,int sum)
{
	set<int>s;
	vector<vector<int>>result;
	for(int i=0;i<n;i++)
	{
		int current=sum-arr[i];
		for(int j=0;j<n;j++)
		{
			int curr=current-arr[j];
			if(s.find(curr)!=s.end())
			{
				result.push_back({arr[i],arr[j],curr});
			}
			else
			{
				s.insert(arr[j]);
			}
		}
	}
	return result;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,15};
	int n=10;
	int sum=14;
	auto p=tripletSum(arr,n,sum);
	for(auto i:p){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
