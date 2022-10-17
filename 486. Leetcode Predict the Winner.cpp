
/* Approach: As both the players are equally strong, both will try to reduce the possibility of winning of each 
other. Now let’s see how the opponent can achieve this.

There are two choices:  

The user chooses the ‘ith’ coin with value ‘Vi’: The opponent either chooses (i+1)th coin or jth coin. 
The opponent intends to choose the coin which leaves the user with minimum value. 
i.e. The user can collect the value Vi + min(F(i+2, j), F(i+1, j-1) ). 
 
coinGame1

The user chooses the ‘jth’ coin with value ‘Vj’: The opponent either chooses ‘ith’ coin or ‘(j-1)th’ coin. 
The opponent intends to choose the coin which leaves the user with minimum value, i.e. the user can 
collect the value Vj + min(F(i+1, j-1), F(i, j-2) ). 
*/




class Solution {
public:
    int dp[30][30];
    int find(int l,int r,vector<int>& v){
        if(dp[l][r]!=-1)return dp[l][r];
        if(l==r)return dp[l][r]=v[l];
        if(r==l+1)return dp[l][r]=max(v[l],v[r]);
        return dp[l][r]=max(v[l] + min(find(l+2,r,v), find(l+1,r-1,v) ), v[r] + min( find(l,r-2,v), find(l+1,r-1,v) ) );
    }
    bool PredictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        int s=accumulate(nums.begin(),nums.end(),0);
        int a=find(0,n-1,nums)*2;
        return (a>=s)?true:false;
    }
};
