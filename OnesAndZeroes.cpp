class Solution {
public:
    map<int,pair<int,int>> mp;
    int dp[610][105][105];
    int helper(int m,int n,int len ,int i){
        if(i==len){
            return 0;
        }
        int cnt0=mp[i].first;
        int cnt1=mp[i].second;
        if(dp[i][m][n]!=-1){
            return dp[i][m][n];
        }
        int opt1;
        if(m-cnt0>=0 && n-cnt1>=0){
            opt1=1+helper(m-cnt0,n-cnt1,len,i+1);
        }
        else{
            opt1=0;
        }
        int opt2=helper(m,n,len,i+1);
        return dp[i][m][n]=max(opt1,opt2);
    }
    int findMaxForm(vector<string>& s, int m, int n) {
        int len=s.size();
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<len;i++){
            int cnt0=0;
            int cnt1=0;
            for(int j=0;j<s[i].length();j++){
                if(s[i][j]=='0'){
                    cnt0++;
                }
                else{
                    cnt1++;
                }
            }
            mp[i]=make_pair(cnt0,cnt1);
        }
        int ans=helper(m,n,len,0);
        return ans;
    }
};
