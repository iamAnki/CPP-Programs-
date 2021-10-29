// URL : https://leetcode.com/problems/calculate-money-in-leetcode-bank/

class Solution {
public:
	int totalMoney(int n) {
		int weeks = n / 7;
		int days = n % 7;
		int m = 1 + 2 + 3 + 4 + 5 + 6 + 7;
		money += (days * weeks + days * (days + 1) / 2);
		return money;
	}
};
