class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == target)
                return mid ;
            if(nums[s] <= nums[mid]){
                if(nums[mid]>=target && target >=nums[s] )
                    e = mid - 1;
                    else 
                        s = mid + 1;
            }
            else {
                if(nums[mid]<=target && target <= nums[e])
                    s = mid + 1;
                else
                    e = mid -1;
            }
        }
        
        return -1;
        
    }
};
