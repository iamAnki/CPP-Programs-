/*
Leetcode: First Unique Character in a String

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:

Input: s = "leetcode"
Output: 0

Example 2:

Input: s = "loveleetcode"
Output: 2

Example 3:

Input: s = "aabb"
Output: -1

Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters.

*/

#include <map>
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;
        for(int i=0;i<s.length();i++) {
            if(m.find(s[i])==m.end())
                m[s[i]]=1;
            else
                m[s[i]]+=1;
        }
        for(int i=0;i<s.length();i++) {
            if(m[s[i]]==1)
                return i;
        }
        return -1;
    }
};
