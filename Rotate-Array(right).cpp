#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
void rotate(int arr[],int start,int end){
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
void rotateRight(int arr[],int n,int k){
	if(n==1){
		return;
	}
	// To avoid overflowing
	k=k%n;
	// Rotate right part after k positions
	rotate(arr,(n-1-k+1),(n-1));
	// Rotate left part after k positions
	rotate(arr,0,(n-1-k));
	// ROtating the entire array
	rotate(arr,0,n-1);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	rotateRight(arr,n,k);
	for(auto i:arr){
		cout<<i<<" ";
	}
	cout<<endl;
}
