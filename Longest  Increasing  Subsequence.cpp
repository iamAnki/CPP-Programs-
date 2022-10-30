// URL : https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
	vector <int> longest_subsequence;
	vector <int> nums;
	int binary_search(int number)
	{
		int start = 0, end = longest_subsequence.size() - 1;
		if (start == end)
		{
			if (number > longest_subsequence[start])
				return start + 1;
			else
				return start;
		}
		while (start < end)
		{
			if (start == end - 1)
			{
				if (number > longest_subsequence[start] && number <= longest_subsequence[end])
					return end;
				else if (number <= longest_subsequence[start])
					return start;
				else
					return end + 1;
			}
			int middle = (start + end + 1) / 2;
			if (longest_subsequence[middle] < number)
				start = middle;
			else
				end = middle;
		}
	}
	int lengthOfLIS(vector<int>& nums) {
		int answer = 0;
		if (nums.size())
		{
			answer = 1;
			longest_subsequence.push_back(nums[0]);
			for (int i = 1; i < nums.size(); i++)
			{
				int position = binary_search(nums[i]);
				if (position == longest_subsequence.size())
					longest_subsequence.push_back(nums[i]);
				else
					longest_subsequence[position] = nums[i];
				answer = max(answer, position + 1);
			}
		}
		return answer;
	}
};
