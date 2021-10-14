#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int answer = INT_MIN, currentProduct = 1;
        int n = nums.size();
        for(int i = 0; i < n; ++i)
        {
            currentProduct *= nums[i];
            if(currentProduct > answer)
                answer = currentProduct;
            if(currentProduct == 0)
                currentProduct = 1;
        }
        
        currentProduct = 1;
        
        for(int i = (n - 1); i >= 0; --i)
        {
            currentProduct *= nums[i];
            if(currentProduct > answer)
                answer = currentProduct;
            if(currentProduct == 0)
                currentProduct = 1;
        }
        return answer;
    }
};

int main()
{
    return 0;
}