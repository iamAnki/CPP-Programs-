// https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int end{};
        end = digits.size()-1;
        int carry_back{1};
        for(int i{end}; i>=0; --i){
            digits.at(i) += carry_back;
            carry_back = 0;
            if(digits.at(i) == 10){
                digits.at(i) = 0;
                carry_back = 1;
            }
        }
        if(carry_back == 1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
