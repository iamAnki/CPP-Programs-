/*
Given an array of integers arr, return true if and only if it is a valid mountain array.
Recall that arr is a mountain array if and only if:
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Input: arr = [0,3,2,1]
Output: true
*/
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        bool incr = false;
        bool decr = false;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] > arr[i-1]){
                if(decr){
                    return false;
                }
                incr = true;
            }
            else if(arr[i] < arr[i-1]){
                if(!incr)return false; 
                else decr = true;
            }
            else{
                return false;
            }
        }
        if(incr==true && decr==true) return true;
        else return false;
        
    }
};
