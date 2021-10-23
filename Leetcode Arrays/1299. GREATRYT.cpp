/*
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.
After doing so, return the array.
Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
*/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++)
        {
            arr[i]=*max_element(arr.begin()+(i+1),arr.end());
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};
