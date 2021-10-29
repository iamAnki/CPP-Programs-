/* https://leetcode.com/problems/minimum-moves-to-equal-array-elements/*/
/* Problem statement: Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

In one move, you can increment n - 1 elements of the array by 1.
*/


class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0,min=1e9;
        for(int i=0;i<nums.size();i++) 
        {sum+=nums[i]; 
         if(nums[i]<min) 
            min=nums[i];
        }
        return (sum-nums.size()*min);
    }
};