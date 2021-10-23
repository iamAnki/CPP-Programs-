#include <bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int k = 0;
        int n = strs.size();
        int flag = 0;
        //finding the smallest sized word 
        int min_size = INT_MAX;
        for(int i=0;i<n;i++){
            int size = strs[i].size();
            min_size = min(min_size, size);
        }
        while(k < min_size){
            int i;
            for(i=1;i<n;){
                if(strs[i][k] == strs[i-1][k]) i++;
                else {
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 1) break;
            else{
                ans += strs[i-1][k];
                k++; 
            } 
         }
        return ans; 
    }

int main() {
    int n;
	vector<string>vec;
	cin >> n;
	for(int i=0;i<n;i++){
	    string str;
	    cin >> str;
	    vec.push_back(str);
	}
	string ans = longestCommonPrefix(vec);
	cout << ans << endl ;
	return 0;
}
