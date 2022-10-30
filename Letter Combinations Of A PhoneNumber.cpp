// URL : https://oj.leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <bits/stdc++.h>
using namespace std;
vector<string> letterCombinations(string digits) {
	char  phone[10][4] = { {' ',  '\0', '\0', '\0' },
		{'\0', '\0', '\0', '\0' },
		{'a',  'b',  'c',  '\0' },
		{'d',  'e',  'f',  '\0' },
		{'g',  'h',  'i',  '\0' },
		{'j',  'k',  'l',  '\0' },
		{'m',  'n',  'o',  '\0' },
		{'p',  'q',  'r',  's'  },
		{'t',  'u',  'v',  '\0' },
		{'w',  'x',  'y',  'z'  }
	};

	vector<string> result;
	if (digits.size() <= 0) {
		result.push_back("");
		return result;
	}
	for ( int i = 0; i < digits.size(); i++ ) {
		if (!isdigit(digits[i])) {
			vector<string> r;
			return r;
		}
		int d = digits[i] - '0';
		if (result.size() <= 0) {
			for ( int j = 0; j < 4 && phone[d][j] != '\0'; j++ ) {
				string s;
				s += phone[d][j];
				result.push_back(s);
			}
			continue;
		}
		vector<string> r;
		for (int j = 0; j < result.size(); j++) {
			for ( int k = 0; k < 4 && phone[d][k] != '\0'; k++ ) {
				string s = result[j] + phone[d][k];
				r.push_back(s);
			}
		}
		result = r;
	}
	return result;
}

void printVector(vector<string>& ss) {
	cout << "[ ";
	for (int i = 0; i < ss.size(); i++) {
		if (i > 0) cout << ", ";
		cout << ss[i];
	}
	cout << " ]" << endl;
}

int main(int argc, char**argv)
{
	string s = "23";
	if (argc > 1) {
		s = argv[1];
	}
	vector<string> ss = letterCombinations(s);
	printVector(ss);
	return 0;
}
