// contributed by Ayush Akash
#include <bits/stdc++.h> 
using namespace std; 
    int Profit(vector<int>& prices, int fee) {
        int n = prices.size();
        int ans = 0;
        int mn = prices[0];
        for(int i=0;i<n;i++)
        {
         if (prices[i] < mn)
                mn = prices[i];
         if(prices[i] > mn + fee)
         {
              ans += prices[i] - fee - mn;
              mn = prices[i] - fee;
         }
            
        }
           return ans;  
    }
int main() 
{ 
 vector<int> arr = {1, 3, 2, 8, 4, 9}; 
 int fee=2;
 cout<<Profit(arr,fee)<<endl; 
 return 0;
}
