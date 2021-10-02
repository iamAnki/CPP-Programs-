//Coin Change
//DP


#include<bits/stdc++.h>
using namespace std;


class Solution
{
  public:
    
    //based completely on: count no. of subset with given sum + unbounded knapsack
    long long count( int coin[], int m, int n )
    {
        long long dp[m+1][n+1];
        
        for(int i=0; i<=m; i++)
            dp[i][0] = 1;
            
        for(int i=1; i<=n; i++)
            dp[0][i] = 0;
            
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(j >= coin[i-1])
                {
                    dp[i][j] = dp[i-1][j] + dp[i][j-coin[i-1]] ;
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[m][n];
    }
};


int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}
    
    
    return 0;
}  
