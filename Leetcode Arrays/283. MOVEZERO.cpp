/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //if(nums == null) return;
        int j =0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                swap(nums[i],nums[j++]);
        }
    }
};
