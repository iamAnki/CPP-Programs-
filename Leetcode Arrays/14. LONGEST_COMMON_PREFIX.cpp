/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "". */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if(strs.size()==0)return "";
        string ans=strs[0];
        for(string &s:strs)
        {
            int i;
            for(i=0;i<s.size()&&i<ans.size();i++)
                if(s[i]!=ans[i])break;
            ans=s.substr(0,i);
        }
        return ans;
    }
};
/*Input: strs = ["flower","flow","flight"]
Output: "fl" */