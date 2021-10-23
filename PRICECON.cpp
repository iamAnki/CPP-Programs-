// Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi. Since Chef has very loyal customers, all N items are guaranteed to be sold regardless of their price.

// However, the government introduced a price ceiling K, which means that for each item i such that Pi>K, its price should be reduced from Pi to K.

// Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling.

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int sum2=0,sum1=0;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			sum1=sum1+arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]>k)
			{ 
				arr[i]=k;
			}
		}
	 	for(int i=0;i<n;i++)
	 	{
	 		sum2=sum2+arr[i];	
	  	}
	  	cout<<sum1-sum2<<"\n";
	}
    return 0;

}