/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
*/
#include <bits/stdc++.h>

#define For(i, l, r) for (int i = l; i <= r; i++)
#define fo(i, n) for (int i = 0; i < (n); ++i)
#define INF 1000000000000000000
#define MOD 1000000009;

using namespace std;
using ll = long long;
using ld = long double;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> vec;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = target - nums[i] - nums[j];
            int l = j + 1, r = n - 1;
            while (l < r)
            {
                if (sum == nums[l] + nums[r])
                {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    vec.push_back(v);
                    while (l < r and nums[l] == v[2])
                        ++l;
                    while (l < r and nums[r] == v[3])
                        --r;
                }
                else if (sum > nums[l] + nums[r])
                    l++;
                else
                    r--;
            }
            while (j + 1 < n and nums[j + 1] == nums[j])
                ++j;
        }
        while (i + 2 < n and nums[i + 1] == nums[i])
            ++i;
    }
    return vec;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, t;
        cin >> n >> t;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        vector<vector<int>> res = fourSum(v, t);
        for (auto i : res)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        cout << '\n';
    }
