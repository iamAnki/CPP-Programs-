#include <bits/stdc++.h>
using namespace std;

void find_subset(int idx, vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums)
    {
        ans.push_back(ds);
        for(int i=idx;i<nums.size();i++){
            if(i!=idx && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            find_subset(i+1,ans,ds,nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        find_subset(0,ans,ds,nums);
        return ans;
    }
    
int main() {
    int n;
    vector<int>nums;
    vector<vector<int>> ans;
    cin >> n;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        nums.push_back(val);
    }
    ans = subsetsWithDup(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
    }
    
	return 0;
}
