/*
Given an array nums of non-negative integers, return an array consisting of all the even elements of nums, followed by all the odd elements of nums.
You may return any answer array that satisfies this condition.
Input: nums = [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j =0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                swap(nums[i],nums[j++]);
        }
        return nums;
    }
};
