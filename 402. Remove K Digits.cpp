/* Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.
	Input: num = "1432219", k = 3
	Output: "1219"
	Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
*/

class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        int n = num.size();
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            char c = num[i];
            while(cnt > 0 && num[cnt - 1] > c && k > 0)
            {
                cnt--;
                k--;
            }
            if(cnt > 0 || c != '0')
            {
                num[cnt++] = c;
            }
        }
        cnt = max(cnt-k,0);
        num.resize(cnt);
        return cnt == 0 ? "0" : num;
    }
};
