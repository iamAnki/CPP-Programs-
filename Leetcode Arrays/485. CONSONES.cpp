/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.
Input: nums = [1,1,0,1,1,1]
Output: 3
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0,c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                c++;
            else
                c=0;
            ans = max(ans,c);
        }
        return ans;
        
    }
};
