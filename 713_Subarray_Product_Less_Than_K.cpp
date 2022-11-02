// https://leetcode.com/problems/subarray-product-less-than-k/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1){
            return 0;
        }
        int left{0},right{0},product{1},ans{0};
        while(right<nums.size()){
            product *= nums.at(right);
            while(product >= k){
                product /= nums.at(left);
                left++;
            }
            ans += (right-left+1);
            right++;
        }
        return ans;
    }
};
