// https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i{0}; i<nums.size(); ++i){
            if(nums.at(i) == val){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
