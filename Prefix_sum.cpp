#include<bits/stdc++.h>
using namespace std;
int largestSubarraySum1(int *arr,int n)
{
    //Prefix Sum technique
    int ps[100];
    ps[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        ps[i]=ps[i-1]+arr[i];
    }
    
    // Largest sum
    int largest_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarray_sum=i>0?ps[j]-ps[i-1]:ps[j];
            // Check for largest sum
            largest_sum = max(largest_sum,subarray_sum);
        }
    }
    return largest_sum;
}
int main()
{
    //Array Containing
    int arr[] = {-2,3,4.-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<largestSubarraySum1(arr,n)<<endl;
}
