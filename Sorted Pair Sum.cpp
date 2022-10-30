/* Sorted Pair sum closest to number */
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
pair<int,int>closestSum(vector<int>arr,int x)
{
	int n=arr.size();
	int max1=0,max2=0,diff=INT_MAX;
	int i=0,j=n-1;
	while(i<j)
	{
		if(abs(arr[i]+arr[j]-x)<diff){
			max1=arr[i];
			max2=arr[j];
			diff=abs(arr[i]+arr[j]-x);
		}
		else if(arr[i]+arr[j]<x){
			i++;
		}
		else{
			j--;	
		}
	}
	return make_pair(max1,max2);
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		arr.push_back(k);
	}
	int val;
	cin>>val;
	auto p=closestSum(arr,val);
	cout<<p.first<<" "<<p.second<<endl;
}