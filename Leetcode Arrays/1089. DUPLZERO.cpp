/*
Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right. Note that elements beyond the length of the 
original array are not written. Do the above modifications to the input array in place, do not return anything from your function.
Input: [1,0,2,3,0,4,5,0]
Output: null
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
*/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int shift = 0, i;
        for (i = 0; i + shift < arr.size(); ++i) {
            shift += int(arr[i] == 0);
        }
        for (i = i - 1; shift > 0; --i) {
            if (i + shift < arr.size()) {
                arr[i + shift] = arr[i];
            }
            if (arr[i] == 0) {
                --shift;
                arr[i + shift] = arr[i];
            }
        }
        
        
    }
};
