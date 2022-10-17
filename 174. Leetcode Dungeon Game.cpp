/*

Problem Link : https://leetcode.com/problems/dungeon-game/

asking questions

At any point if our health gets zero of below we dies, athem so : we need 1 + (-mat[i][j]) for our health to be one.

What if we get some health if we arrive at some cell ? my guess is we still need 1 health in first case to arrive at that cell - cases like these need to be figure out by yourself.

at any cell what health do we need ? - since we can go only down and right therefore min health required will be minimun health required if we go right or down, 
( futher explained in arriving at recurrance relation heading )

for brief answers/explanation for above point 1 and 2 , assume a 1D matrix this is what is ment by 1st and 2nd point.

[[-10]]                     : ans  = 1 + (-(-10)) = 11 (explanation to first point mentioned)
[[10]]                      : ans  = 1 as we still need 1 health at first place to get there (explanation to second point mentioned)
[[-2,-3,3,-5,-10]]          : ans = 1 + (-(-17)) = 18 same as 1st case
[[2,3,3,5,10]]              : ans = 1 same as 2nd test case, explanation to second point mentioned to asking question

*/




class Solution {
public:
    int dp[205][205];
    int find(int i,int j,vector<vector<int>>& v){
        int n=v.size(),m=v[0].size();
        if(i==n || j==m)return 1e9+5;					// Base Case
        if(i==n-1 && j==m-1){
            return v[i][j]<=0?1-v[i][j]:1;                              // when we reach the bottom-right
        }
        if(dp[i][j]!=1e9+5)return dp[i][j];
        int required = min(find(i,j+1,v),find(i+1,j,v))-v[i][j];        // taking the minimum requirement from down and right room
        
        return dp[i][j]=required<=0?1:required;                         
    }
    
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        for(int i=0;i<=203;i++){
            for(int j=0;j<=203;j++)dp[i][j]=1e9+5;
        }
        return find(0,0,dungeon);
    }
};
