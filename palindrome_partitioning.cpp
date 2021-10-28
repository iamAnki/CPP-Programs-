#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string s,int start, int end){
        while(start<=end){
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    void find_partition(string s, int idx, vector<vector<string>>&ans,vector<string>&res){
        //base case 
        if(idx == s.size()){  //we parsed till end 
            ans.push_back(res);
            return;
        }
        for(int i=idx;i<s.size();i++){
            //check if from s[idx..i] is palindrome
            if(check_palindrome(s,idx,i)){
                res.push_back(s.substr(idx,i-idx+1));
                find_partition(s,i+1,ans,res);
                res.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        find_partition(s,0,ans,path);
        return ans;
    }

int main() {
	string str;
	vector<vector<string>> ans;
	cin >> str;
	ans = partition(str);
	for(int i=0;i<ans.size();i++){
	    for(int j=0;j<ans[i].size();j++){
	        cout << ans[i][j] << " ";
	    }
	}
	
	return 0;
}
