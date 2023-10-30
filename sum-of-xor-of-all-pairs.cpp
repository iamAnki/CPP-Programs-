class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    
    	ll sum=0;
    	for(int i=0;i<31;i++)
    	{
    	    ll one=0;
    	    ll zero=0;
    	
    	    for(int j=0;j<n;j++)
    	    {
    	        if(arr[j]&(1<<i))
    	        one++;
    	        else
    	        zero++;
    	    }
    	    
    	    ll p=one*zero;
    	    sum+=p*(1<<i);
    	}
    	return sum;
    }
};
