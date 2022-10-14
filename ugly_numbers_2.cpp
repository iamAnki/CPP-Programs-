// https://leetcode.com/problems/ugly-number-ii/

class Solution {
public:
    int nthUglyNumber(int n) {
        int ptr_2 = 0;
        int ptr_3 = 0;
        int ptr_5 = 0;
        int store = n;
        int dp[n+2];
        int indx = 0; 
        
        dp[0] = 1;
        while( n >=1 ){
            int mul_2 = dp[ptr_2]*2;
            int mul_3 = dp[ptr_3]*3;
            int mul_5 = dp[ptr_5]*5;
            
            cout << mul_2 << " " << mul_3 << " " << mul_5 << endl;             
            int mini = min(mul_2,min(mul_3,mul_5));
            
           // cout << mini << " ";
            dp[++indx] = mini;
            
            if(mini == dp[ptr_2]*2){
                ptr_2++;
            }
            if(mini == dp[ptr_3]*3){
                ptr_3++;
            }
            if(mini == dp[ptr_5]*5){
                ptr_5++;
            }
            n--;
        }
        return dp[store-1];
        
    }
};