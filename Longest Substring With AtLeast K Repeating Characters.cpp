// URL : https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/

const int NO_OF_CHARS = 256;
class Solution {
public:
	int longestSubstring(string s, int k) {
		if (s.size() == 0 || s.size() < k) return 0;
		if (k == 1) return s.size();
		int count[NO_OF_CHARS];
		memset(count , 0, sizeof(count));
		for (char ch : s) {
			count[ch]++;
		}

		int i = 0;
		for ( i = 0; i < NO_OF_CHARS; i++) {
			if (count[i] != 0 && count[i] < k) break;
		}
		if ( i >= NO_OF_CHARS ) return s.size();
		char least = 0;
		for (int c = 0; c < NO_OF_CHARS; c++) {
			if (count[c] == 0) continue;
			if (least == 0) {
				least = c;
			} else if ( count[c] < count[least]) {
				least = c;
			}
		}
		vector<string> subs;
		split(s, least, subs);

		int res = 0;
		for (string str : subs) {
			res = max(res, longestSubstring(str, k));
		}
		return res;
		return 0;
	}

private:

	inline int max(int x, int y) { return x > y ? x : y; }

	inline void split(const string &s, char delim, vector<string> &elems) {
		stringstream ss;
		ss.str(s);
		string item;
		while (getline(ss, item, delim)) {
			cout << item << endl;
			elems.push_back(item);
		}
	}
	inline vector<string> split(const string &s, char delim) {
		vector<string> elems;
		split(s, delim, elems);
		return elems;
	}
};
