/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int left = 0, right = nums.size() - 1;
         int res[nums.size()];
         for (int index = nums.size() - 1; index >= 0; index--) {
               if (abs(nums[left]) > nums[right]) {
                   res[index] = nums[left] * nums[left];
                   left++;
               }
               else {
                   res[index] = nums[right] * nums[right];
                   right--;
               }
         }
         for (int i = 0; i < nums.size(); i++)
             nums[i] = res[i];
         return nums;
    }
};
