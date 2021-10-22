/*
Given a string s, find the length of the longest substring without repeating characters
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,i=0,j=0;
        unordered_set<char> st;   
        while(j<s.length()){
            if((st.find(s[j])==st.end())){
                st.insert(s[j++]);
                ans=max(ans,j-i);
            }
         else{
                st.erase(st.find(s[i]));
                i++;
            }
            
        }
        return ans;
    }
};
