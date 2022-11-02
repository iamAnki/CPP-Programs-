// https://leetcode.com/problems/sort-array-by-increasing-frequency/

class Solution {
public:
    bool static compare(pair<int,int> a,pair<int,int> b){
        if(a.second == b.second){
            return a>b;
        }
        else{
            return a.second<b.second;
        }
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        for(int i{0}; i<nums.size(); ++i){
            mp[nums.at(i)]++;
        }
        vector<pair<int,int>> vec;
        for(auto val : mp){
            vec.push_back(val);
        }
        sort(vec.begin(),vec.end(),compare);
        vector<int> answer;
        for(int i{0}; i<vec.size(); ++i){
            while(vec.at(i).second>0){
                answer.push_back(vec.at(i).first);
                vec.at(i).second--;
            }
        }
        return answer;
    }

};
