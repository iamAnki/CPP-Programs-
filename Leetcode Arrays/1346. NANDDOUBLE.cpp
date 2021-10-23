/*
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).
More formally check if there exists two indices i and j such that :
i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
Input: arr = [10,2,5,3]
Output: true
*/
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for(auto i:arr){
            if(s.count(i*2) || (i%2==0 && s.count(i/2))) return true; 
            else s.insert(i);
        }
        return false;
    }
};
