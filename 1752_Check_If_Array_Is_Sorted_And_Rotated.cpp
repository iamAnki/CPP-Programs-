// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count{0};
        for(int i{0}; i<nums.size()-1; ++i){
            if(nums.at(i) > nums.at(i+1)){
                count++;
            }
        }
        if(nums.at(nums.size()-1) > nums.at(0)){
            count++;
        }
        if(count <= 1){
            return true;
        }
        else{
            return false;
        }
    }
};
