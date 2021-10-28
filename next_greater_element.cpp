#include<bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long>ans;
    stack<long long>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<arr[i]) st.pop();
        if(st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
  int n;
  vector<long long> vec, ans;
  cin >> n;
  for(int i =0;i<n;i++){
  int val;
  cin >> val;
  vec.push_back(val);
  }
  ans =  nextLargerElement(vec, n);
  for(int i=0;i<ans.size();i++){
    cout << ans[i];
  }
  return 0;
}
