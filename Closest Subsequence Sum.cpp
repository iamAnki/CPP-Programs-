// URL : https://leetcode.com/problems/closest-subsequence-sum/

class Solution {
private:
	int abs(int n) {
		return n > 0 ? n : -n;
	}

	void printSet(set<int>& s) {
		cout << "[";
		for (auto& n : s) {
			cout << n << ", ";
		}
		cout << "]" << endl;
	}

	int findClosetDiff(set<int>& sums, int goal) {
		auto it = sums.lower_bound(goal);
		int high = (it == sums.end()) ? *(sums.rbegin()) : *it;
		int low = (it != sums.begin()) ? *(--it) : *it;

		return min(abs(low - goal), abs(high - goal));
	}

	void getAllSums(int index, int end, vector<int>& nums, int sum, set<int>& sums) {
		if (index > end ) {
			sums.insert(sum);
			return;
		}
		getAllSums(index + 1, end, nums, sum + nums[index], sums);
		getAllSums(index + 1, end, nums, sum, sums);
	}

	void getAllSums(int start, int end, vector<int>& nums, set<int>& sums) {
		//sums.clear();
		sums.insert(0);
		for (int i = start; i <= end; i++) {
			vector<int> s(sums.begin(), sums.end());
			for (auto n : s) {
				sums.insert(n + nums[i]);
			}
		}
	}
public:
	int minAbsDifference(vector<int>& nums, int goal) {
		set<int> sums_left, sums_right;
		int mid = nums.size() / 2;
		getAllSums(0, mid, nums, sums_left);
		getAllSums(mid + 1, nums.size() - 1, nums, sums_right);

		int minDiff = INT_MAX;
		for (auto& sum : sums_left) {
			minDiff = min(minDiff, findClosetDiff(sums_right, goal - sum));
		}
		return minDiff;
	}


};
