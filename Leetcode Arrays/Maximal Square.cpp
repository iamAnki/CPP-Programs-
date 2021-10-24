class Solution {
public:
    int dp[300][300][250];
    int ans=0;
    
    int f(int i,int j,int k,vector<vector<char>>& m)
    {   if(k==1 && m[i][j]=='1')
        {   dp[i][j][k]=1;
            ans=max(ans,1);
            return 1;
        
        }       
        else if(dp[i][j][k]!=-1)
            return dp[i][j][k];
        else
        {   
            dp[i][j][k]=f(i,j,k-1,m)*f(i,j+1,k-1,m)*f(i+1,j,k-1,m)*f(i+1,j+1,k-1,m);
            if(dp[i][j][k])ans=max(ans,k);
            return dp[i][j][k];
        }
     
        
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
       // cout<<n<<m<<endl;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                for(int k=1;k<=min(n,m);k++)
                    dp[i][j][k]=-1;
        if(m==n)
            f(0,0,m,matrix);
        else if(n>m)
        {   //cout<<"KI"<<endl;
            for(int i=0;i<=n-m;i++)
                f(0,i,m,matrix);
            
        }
        else
        {
            for(int i=0;i<=m-n;i++)
                f(i,0,n,matrix);
        }
        return ans*ans;
        
    }
};
