/*
Given integer array nums, return the third maximum number in this array. If the third maximum does not exist, return the maximum number.
Input: nums = [3,2,1]
Output: 1
Explanation: The third maximum is 1.
*/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()<3)
            return *max_element(nums.begin(),nums.end());
        long x=nums[0], y = LONG_MIN, z = LONG_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>x){
                z = y;
                y = x;
                x = nums[i];
            }
            else if(nums[i]>y && nums[i]!=x){
                z = y;
                y = nums[i];
            }
            else if(nums[i]>z && nums[i]!=y && nums[i]!=x){
                z = nums[i];
            }
        }
        return z==LONG_MIN ? x : z;
    }
};
