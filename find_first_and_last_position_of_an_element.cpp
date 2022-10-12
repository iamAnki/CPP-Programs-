class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1 , -1};
        int first = -1 , last = -1;
        int low = 0 , high = nums.size() - 1;
        while(low <= high)
        {
            int mid = (low+high)/2;
            if(nums[mid] == target)
            {
                if(mid > 0)
                {
                    if(nums[mid-1] == nums[mid])
                        high = mid-1;
                    else{
                        first = mid;
                        break;
                    }
                }
                else
                {
                    first = mid;
                    break;
                }
            }
            else
            {
                if(target > nums[mid])
                    low = mid+1;
                else
                    high = mid-1;
            }
        }
        low = 0;
        high = nums.size() -1;
        while(low <= high)
        {
            int mid = (low+high)/2;
            if(nums[mid] == target)
            {
                if(mid+1 < nums.size())
                {
                    if(nums[mid+1] == nums[mid])
                        low = mid+1;
                    else
                    {
                        last = mid;
                        break;
                    }
                }
                else
                {
                    last = mid;
                    break;
                }
            }
            else
            {
                if(target > nums[mid])
                    low = mid+1;
                else
                    high = mid-1;
            }
        }
        return {first , last};
    }
};
