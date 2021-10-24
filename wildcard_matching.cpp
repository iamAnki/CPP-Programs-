class Solution {
public:
    bool isMatch(string s, string p) {
        int n=p.size();
        int m=s.size();
        vector<vector<bool>> dp(n+1,vector<bool>(m+1));
        dp[0][0]=true;
        for(int i=1;i<n+1;i++)
        {
            if(p[i-1]=='*'&&dp[i-1][0])
            dp[i][0]=true;
            for(int j=1;j<m+1;j++)
            {
                if(dp[i-1][j-1])
                {
                    if(s[j-1]==p[i-1]||p[i-1]=='?')
                        dp[i][j]=true;
                }
                if(p[i-1]=='*')
                {
                    if(dp[i-1][j-1]||dp[i-1][j]||dp[i][j-1])
                        dp[i][j]=true;
                }
                //cout<<dp[i][j]<<" ";
            }
            //cout<<endl;
        } 
        return dp[n][m];
    }
};
