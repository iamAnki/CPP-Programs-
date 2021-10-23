/*
Given an array nums of integers, return how many of them contain an even number of digits.
Input: nums = [12,345,2,6,7896]
Output: 2
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(to_string(nums[i]).size()%2==0)
                c++;
        }
        return c;
    }
};
