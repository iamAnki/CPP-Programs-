class Solution {
public:
    bool isMatch(string s, string p) {
        int ss = s.size(),ps = p.size();
        if(ss==0 && ps==0)
            return true;
        vector<vector<bool>> dp(ps+1,vector<bool>(ss+1,false));
        dp[0][0] = true;
        for(int j=1;j<=ps;j++)
        {
            if(p[j-1]=='*')
            {
                dp[j][0] = dp[j-2][0];
            }
        }
        for(int i=1;i<=ps;i++)
        {
            for(int j=1;j<=ss;j++)
            {
                if(p[i-1]==s[j-1] || p[i-1]=='.')
                {
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[i-1]=='*')
                {
                    dp[i][j] = dp[i-2][j];
                    if(p[i-2]=='.' || p[i-2]==s[j-1])
                        dp[i][j] = dp[i][j] || dp[i][j-1];
                }
                else
                    dp[i][j] = false;
            }
        }
        return dp[ps][ss];
    }
};
