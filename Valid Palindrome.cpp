/*
Leetcode: Valid Palindrome

Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1;
        while(i<j) {
            if(!isalnum(s[i]) && !isalnum(s[j])) {
                i++;
                j--;
            }
            else if(!isalnum(s[i]))
                i++;
            else if(!isalnum(s[j]))
                j--;
            else if(tolower(s[i])!=tolower(s[j]))
                return false;
            else {
                i++;
                j--;
            }

        }
        return true;
    }
};
